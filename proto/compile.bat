SET path=%cd%;%path%
cd ..\POGOProtos\src
changes_checker.exe "POGOProtos" "..\..\proto\crc.json"
if errorlevel 1 (
proto_compiler.exe "POGOProtos" "..\..\proto\proto_cpp"
)




