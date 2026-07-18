FUN_0074ee09:
0074EE09  55                        PUSH EBP
0074EE0A  8B EC                     MOV EBP,ESP
0074EE0C  8D 45 08                  LEA EAX,[EBP + 0x8]
0074EE0F  50                        PUSH EAX
0074EE10  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
0074EE13  8D 48 FC                  LEA ECX,[EAX + -0x4]
0074EE16  E8 73 FA FF FF            CALL 0x0074e88e
0074EE1B  85 C0                     TEST EAX,EAX
0074EE1D  7C 1B                     JL 0x0074ee3a
0074EE1F  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
0074EE22  56                        PUSH ESI
0074EE23  FF 75 0C                  PUSH dword ptr [EBP + 0xc]
0074EE26  8B 08                     MOV ECX,dword ptr [EAX]
0074EE28  50                        PUSH EAX
0074EE29  FF 51 3C                  CALL dword ptr [ECX + 0x3c]
0074EE2C  8B F0                     MOV ESI,EAX
0074EE2E  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
0074EE31  50                        PUSH EAX
0074EE32  8B 08                     MOV ECX,dword ptr [EAX]
0074EE34  FF 51 08                  CALL dword ptr [ECX + 0x8]
0074EE37  8B C6                     MOV EAX,ESI
0074EE39  5E                        POP ESI
LAB_0074ee3a:
0074EE3A  5D                        POP EBP
0074EE3B  C2 08 00                  RET 0x8
