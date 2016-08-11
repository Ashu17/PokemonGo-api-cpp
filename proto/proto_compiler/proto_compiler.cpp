#include <boost/filesystem.hpp>
#include <boost/filesystem/path.hpp>
#include <boost/foreach.hpp>
#include <iostream>
#include <vector>
#include <string>
#include <boost/format.hpp>
#include <iostream>

namespace fs = boost::filesystem;

std::vector<fs::path> get_files(const fs::path &folder)
{
	std::vector<fs::path> out;
	fs::directory_iterator it(folder), eod;

	for (fs::directory_iterator dir_iter(folder); dir_iter != fs::directory_iterator(); ++dir_iter)
	{
		if (fs::is_directory(dir_iter->path()) && fs::exists(dir_iter->path()))
		{
			auto outs = get_files(dir_iter->path());
			out.insert(out.end(), outs.begin(), outs.end());
		}
		else
		if (fs::is_regular_file(dir_iter->status()) && dir_iter->path().extension().string() == ".proto")
		{
			out.push_back(dir_iter->path());
		}
	}

	return out;
}

std::vector<fs::path> get_folders(const fs::path &folder)
{
	std::vector<fs::path> out;
	fs::directory_iterator it(folder), eod;

	if (fs::is_directory(folder))
	{
		out.push_back(folder);
	}

	for (fs::directory_iterator dir_iter(folder); dir_iter != fs::directory_iterator(); ++dir_iter)
	{
		if (fs::is_directory(dir_iter->path()) && fs::exists(dir_iter->path()))
		{
			auto outs = get_folders(dir_iter->path());
			out.insert(out.end(), outs.begin(), outs.end());
		}
	}

	return out;
}


int main(int argc, char* argv[])
{
	if (argc != 3)
	{
		return -1;
	}

	fs::path folder_in(argv[1]);
	fs::path folder_out(argv[2]);
// 	fs::path folder_in("POGOProtos");
// 	fs::path folder_out("proto_cpp");
	std::vector<fs::path> names;
	std::vector<fs::path> folders;
	if (!fs::exists(folder_out))
	{
		boost::filesystem::create_directory(folder_out);
	}

	if (fs::exists(folder_in) && fs::is_directory(folder_in))
	{
		names = get_files(folder_in);
		folders = get_folders(folder_in);
	}

	for (const auto &name : names)
	{
		std::cout << (boost::format("protoc.exe --cpp_out=%1% --error_format=msvs %2%") % folder_out % name ).str().c_str() << std::endl;
		system((boost::format("protoc.exe --cpp_out=%1% --error_format=msvs %2%") % folder_out % name).str().c_str());
	}

	std::ofstream fout;
	fout.open(folder_out.string() + "/pogo_proto.h");
	if (fout.is_open())
	{
		fout << "#ifndef _POGO_PROTO_H__" << std::endl;
		fout << "#define _POGO_PROTO_H__" << std::endl;
		fout << std::endl;

		for (const auto &name : names)
		{
			std::string include_str;
			for (auto const& element : name.branch_path())
			{
				include_str += element.string() + "/";
			}
			include_str += name.stem().string() + ".pb.h";

			fout << "#include \"" << include_str << "\"" << std::endl;
		}

		fout << std::endl;
		fout << "namespace pogo" << std::endl;
		fout << "{" << std::endl;

		for (const auto &name : folders)
		{
			std::string namespace_str;
			for (auto const& element : name)
			{
				namespace_str += element.string() + "::";
			}
			namespace_str.resize(namespace_str.size() - 2);

			fout << "  using namespace " << namespace_str << ";" << std::endl;
		}

		fout << "}" << std::endl;
		fout << std::endl;

		fout << "#endif //_POGO_PROTO_H__" << std::endl;
		fout.close();
	}


	return 0;
}