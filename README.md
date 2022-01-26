# myVirus
high cpu usage with watchdog 

to make smartCall work, compile runner and enter his path hord coded

to kill use the commands:
TASKKILL /F /IM smartCall.exe
and then:
TASKKILL /F /IM runner.exe

to spoof PPID use the params like:
parentPIDspoofing.exe -P/--parent "paretn" -p/--path "path"
for example:
parentPIDspoofing.exe --parent explorer.exe -p "C:\Users\user\AppData\Local\Programs\Microsoft VS Code\code.exe"