@ECHO OFF
g++ *.cpp -o output.exe
START /B /WAIT output.exe
del /q /f "*.exe"
