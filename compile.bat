@echo off
cd src/
set objs=
for /R %%f in (*.cpp) do call set objs=%%objs%% %%f
cd ..
echo Taskkilling battleships.exe if it's running
Taskkill /IM battleships.exe /F
echo Starting compilation...
g++ -w -std=c++17 %objs% -o battleships.exe