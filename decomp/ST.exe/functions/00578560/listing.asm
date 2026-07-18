FUN_00578560:
00578560  55                        PUSH EBP
00578561  8B EC                     MOV EBP,ESP
00578563  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
00578566  56                        PUSH ESI
00578567  83 F8 08                  CMP EAX,0x8
0057856A  8B F1                     MOV ESI,ECX
0057856C  72 24                     JC 0x00578592
0057856E  68 70 AD 7C 00            PUSH 0x7cad70
00578573  68 CC 4C 7A 00            PUSH 0x7a4ccc
00578578  6A 00                     PUSH 0x0
0057857A  6A 00                     PUSH 0x0
0057857C  6A 7A                     PUSH 0x7a
0057857E  68 4C AD 7C 00            PUSH 0x7cad4c
00578583  E8 48 4F 13 00            CALL 0x006ad4d0
00578588  83 C4 18                  ADD ESP,0x18
0057858B  85 C0                     TEST EAX,EAX
0057858D  74 01                     JZ 0x00578590
0057858F  CC                        INT3
LAB_00578590:
00578590  33 C0                     XOR EAX,EAX
LAB_00578592:
00578592  8D 04 40                  LEA EAX,[EAX + EAX*0x2]
00578595  6A 00                     PUSH 0x0
00578597  D1 E0                     SHL EAX,0x1
00578599  66 89 46 6C               MOV word ptr [ESI + 0x6c],AX
0057859D  8D 48 05                  LEA ECX,[EAX + 0x5]
005785A0  51                        PUSH ECX
005785A1  50                        PUSH EAX
005785A2  6A 0E                     PUSH 0xe
005785A4  8D 8E D5 01 00 00         LEA ECX,[ESI + 0x1d5]
005785AA  E8 0B 99 E8 FF            CALL 0x00401eba
005785AF  5E                        POP ESI
005785B0  5D                        POP EBP
005785B1  C2 04 00                  RET 0x4
