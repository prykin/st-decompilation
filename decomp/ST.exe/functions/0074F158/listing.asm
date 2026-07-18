FUN_0074f158:
0074F158  56                        PUSH ESI
0074F159  8B F1                     MOV ESI,ECX
0074F15B  FF 74 24 0C               PUSH dword ptr [ESP + 0xc]
0074F15F  8D 4E 04                  LEA ECX,[ESI + 0x4]
0074F162  FF 74 24 0C               PUSH dword ptr [ESP + 0xc]
0074F166  E8 4D C6 FF FF            CALL 0x0074b7b8
0074F16B  33 C0                     XOR EAX,EAX
0074F16D  89 46 10                  MOV dword ptr [ESI + 0x10],EAX
0074F170  89 46 14                  MOV dword ptr [ESI + 0x14],EAX
0074F173  89 46 18                  MOV dword ptr [ESI + 0x18],EAX
0074F176  89 46 1C                  MOV dword ptr [ESI + 0x1c],EAX
0074F179  8B 44 24 14               MOV EAX,dword ptr [ESP + 0x14]
0074F17D  89 46 34                  MOV dword ptr [ESI + 0x34],EAX
0074F180  83 4E 20 FF               OR dword ptr [ESI + 0x20],0xffffffff
0074F184  C7 46 24 FF FF FF 3F      MOV dword ptr [ESI + 0x24],0x3fffffff
0074F18B  8B 46 20                  MOV EAX,dword ptr [ESI + 0x20]
0074F18E  89 46 10                  MOV dword ptr [ESI + 0x10],EAX
0074F191  8B 46 24                  MOV EAX,dword ptr [ESI + 0x24]
0074F194  D9 E8                     FLD1
0074F196  89 46 14                  MOV dword ptr [ESI + 0x14],EAX
0074F199  C7 46 30 37 00 00 00      MOV dword ptr [ESI + 0x30],0x37
0074F1A0  DD 5E 28                  FSTP double ptr [ESI + 0x28]
0074F1A3  8B C6                     MOV EAX,ESI
0074F1A5  5E                        POP ESI
0074F1A6  C2 10 00                  RET 0x10
