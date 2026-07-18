FUN_0074edcf:
0074EDCF  55                        PUSH EBP
0074EDD0  8B EC                     MOV EBP,ESP
0074EDD2  8D 45 08                  LEA EAX,[EBP + 0x8]
0074EDD5  50                        PUSH EAX
0074EDD6  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
0074EDD9  8D 48 FC                  LEA ECX,[EAX + -0x4]
0074EDDC  E8 AD FA FF FF            CALL 0x0074e88e
0074EDE1  85 C0                     TEST EAX,EAX
0074EDE3  7C 20                     JL 0x0074ee05
0074EDE5  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
0074EDE8  56                        PUSH ESI
0074EDE9  DD 45 0C                  FLD double ptr [EBP + 0xc]
0074EDEC  8B 08                     MOV ECX,dword ptr [EAX]
0074EDEE  51                        PUSH ECX
0074EDEF  51                        PUSH ECX
0074EDF0  DD 1C 24                  FSTP double ptr [ESP]
0074EDF3  50                        PUSH EAX
0074EDF4  FF 51 34                  CALL dword ptr [ECX + 0x34]
0074EDF7  8B F0                     MOV ESI,EAX
0074EDF9  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
0074EDFC  50                        PUSH EAX
0074EDFD  8B 08                     MOV ECX,dword ptr [EAX]
0074EDFF  FF 51 08                  CALL dword ptr [ECX + 0x8]
0074EE02  8B C6                     MOV EAX,ESI
0074EE04  5E                        POP ESI
LAB_0074ee05:
0074EE05  5D                        POP EBP
0074EE06  C2 0C 00                  RET 0xc
