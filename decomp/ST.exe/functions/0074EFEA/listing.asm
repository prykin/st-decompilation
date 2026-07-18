FUN_0074efea:
0074EFEA  56                        PUSH ESI
0074EFEB  8B F1                     MOV ESI,ECX
0074EFED  57                        PUSH EDI
0074EFEE  8D 7E 1C                  LEA EDI,[ESI + 0x1c]
0074EFF1  57                        PUSH EDI
0074EFF2  FF 15 8C BB 85 00         CALL dword ptr [0x0085bb8c]
0074EFF8  8B 44 24 0C               MOV EAX,dword ptr [ESP + 0xc]
0074EFFC  83 66 48 00               AND dword ptr [ESI + 0x48],0x0
0074F000  89 46 38                  MOV dword ptr [ESI + 0x38],EAX
0074F003  8B 44 24 10               MOV EAX,dword ptr [ESP + 0x10]
0074F007  89 46 3C                  MOV dword ptr [ESI + 0x3c],EAX
0074F00A  8B 44 24 14               MOV EAX,dword ptr [ESP + 0x14]
0074F00E  89 46 40                  MOV dword ptr [ESI + 0x40],EAX
0074F011  8B 44 24 18               MOV EAX,dword ptr [ESP + 0x18]
0074F015  57                        PUSH EDI
0074F016  89 46 44                  MOV dword ptr [ESI + 0x44],EAX
0074F019  FF 15 90 BB 85 00         CALL dword ptr [0x0085bb90]
0074F01F  5F                        POP EDI
0074F020  33 C0                     XOR EAX,EAX
0074F022  5E                        POP ESI
0074F023  C2 10 00                  RET 0x10
