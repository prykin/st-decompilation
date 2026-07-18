FUN_0074f91d:
0074F91D  55                        PUSH EBP
0074F91E  8B EC                     MOV EBP,ESP
0074F920  56                        PUSH ESI
0074F921  57                        PUSH EDI
0074F922  8B 7D 10                  MOV EDI,dword ptr [EBP + 0x10]
0074F925  6A 10                     PUSH 0x10
0074F927  59                        POP ECX
0074F928  BE 68 E3 79 00            MOV ESI,0x79e368
0074F92D  33 C0                     XOR EAX,EAX
0074F92F  F3 A6                     CMPSB.REPE ES:EDI,ESI
0074F931  74 07                     JZ 0x0074f93a
0074F933  B8 01 00 02 80            MOV EAX,0x80020001
0074F938  EB 3F                     JMP 0x0074f979
LAB_0074f93a:
0074F93A  8B 75 08                  MOV ESI,dword ptr [EBP + 0x8]
0074F93D  8D 4D 10                  LEA ECX,[EBP + 0x10]
0074F940  51                        PUSH ECX
0074F941  FF 75 14                  PUSH dword ptr [EBP + 0x14]
0074F944  8B 06                     MOV EAX,dword ptr [ESI]
0074F946  6A 00                     PUSH 0x0
0074F948  56                        PUSH ESI
0074F949  FF 50 10                  CALL dword ptr [EAX + 0x10]
0074F94C  85 C0                     TEST EAX,EAX
0074F94E  7C 29                     JL 0x0074f979
0074F950  FF 75 28                  PUSH dword ptr [EBP + 0x28]
0074F953  8B 45 10                  MOV EAX,dword ptr [EBP + 0x10]
0074F956  FF 75 24                  PUSH dword ptr [EBP + 0x24]
0074F959  8B 08                     MOV ECX,dword ptr [EAX]
0074F95B  FF 75 20                  PUSH dword ptr [EBP + 0x20]
0074F95E  FF 75 1C                  PUSH dword ptr [EBP + 0x1c]
0074F961  FF 75 18                  PUSH dword ptr [EBP + 0x18]
0074F964  FF 75 0C                  PUSH dword ptr [EBP + 0xc]
0074F967  56                        PUSH ESI
0074F968  50                        PUSH EAX
0074F969  FF 51 2C                  CALL dword ptr [ECX + 0x2c]
0074F96C  8B F0                     MOV ESI,EAX
0074F96E  8B 45 10                  MOV EAX,dword ptr [EBP + 0x10]
0074F971  50                        PUSH EAX
0074F972  8B 08                     MOV ECX,dword ptr [EAX]
0074F974  FF 51 08                  CALL dword ptr [ECX + 0x8]
0074F977  8B C6                     MOV EAX,ESI
LAB_0074f979:
0074F979  5F                        POP EDI
0074F97A  5E                        POP ESI
0074F97B  5D                        POP EBP
0074F97C  C2 24 00                  RET 0x24
