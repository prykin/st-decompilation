FUN_0074ebd8:
0074EBD8  55                        PUSH EBP
0074EBD9  8B EC                     MOV EBP,ESP
0074EBDB  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
0074EBDE  8D 45 08                  LEA EAX,[EBP + 0x8]
0074EBE1  50                        PUSH EAX
0074EBE2  E8 F8 FC FF FF            CALL 0x0074e8df
0074EBE7  85 C0                     TEST EAX,EAX
0074EBE9  7C 1E                     JL 0x0074ec09
0074EBEB  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
0074EBEE  56                        PUSH ESI
0074EBEF  FF 75 10                  PUSH dword ptr [EBP + 0x10]
0074EBF2  8B 08                     MOV ECX,dword ptr [EAX]
0074EBF4  FF 75 0C                  PUSH dword ptr [EBP + 0xc]
0074EBF7  50                        PUSH EAX
0074EBF8  FF 51 40                  CALL dword ptr [ECX + 0x40]
0074EBFB  8B F0                     MOV ESI,EAX
0074EBFD  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
0074EC00  50                        PUSH EAX
0074EC01  8B 08                     MOV ECX,dword ptr [EAX]
0074EC03  FF 51 08                  CALL dword ptr [ECX + 0x8]
0074EC06  8B C6                     MOV EAX,ESI
0074EC08  5E                        POP ESI
LAB_0074ec09:
0074EC09  5D                        POP EBP
0074EC0A  C2 0C 00                  RET 0xc
