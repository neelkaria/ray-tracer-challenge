@echo off

echo [*] Building project...

if not exist build mkdir build

cd build
echo [*] Running CMake configuration...
cmake .. -G "MinGW Makefiles"

echo [*] Building project...
cmake --build .

echo.

echo [*] Running executable:

main.exe

cd ..