@echo off
echo Building
"%ProgramFiles%\PBO Manager v.1.4 beta\PBOConsole.exe" -pack ".\addons\first_meu_aux" ".\@first meu DevAuxMod\addons\first_meu_aux.pbo"
echo Finished
DEL ".\@first meu DevAuxMod\addons\first_meu_aux.pbo.bak"
echo Removing Bak