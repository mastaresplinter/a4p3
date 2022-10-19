REM @echo off
chcp 65001
REM Use the command cd to navigate to the path containing the source code
cd C:\Users\macka\OneDrive\Högskola\Real-Time Embedded Systems\Assignment4\a4p3
set MAKEFILE=Makefile
if "%1"=="" goto setm
:good
SET MAINFILE=%1
goto end
:setm
SET MAINFILE=a4p3
:end
REM Create a variable SDDRIVE and assign the drive name of the microSD card
set SDDRIVE=D:\
set SDDRIVEIMG=D:\rt
REM Add the path to gcc-arm-none-eabi-10.3-2021.07-win32\bin to the PATH variable
REM Set variable MAKE with the path to the bin folder in make
set MAKE=C:\Program Files\GnuWin32\bin
del /s /q *.o
"%MAKE%\make.exe" run MAINFILE=%MAINFILE%
IF errorlevel 1 timeout 5
REM Create a file config.template with the content of the original config.txt
type config.template.txt > config.txt
echo kernel=/rt/%MAINFILE%.img >> config.txt
copy /Y %MAINFILE%.img %SDDRIVEIMG%
copy /Y %MAINFILE%.elf %SDDRIVEIMG%
copy /Y config.txt %SDDRIVE%
if errorlevel 1 timeout 5
timeout 1