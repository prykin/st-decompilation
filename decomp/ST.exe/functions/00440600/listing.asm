FUN_00440600:
00440600  55                        PUSH EBP
00440601  8B EC                     MOV EBP,ESP
00440603  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
00440606  83 E8 00                  SUB EAX,0x0
00440609  74 56                     JZ 0x00440661
0044060B  48                        DEC EAX
0044060C  74 2C                     JZ 0x0044063a
0044060E  68 E0 7F 7A 00            PUSH 0x7a7fe0
00440613  68 CC 4C 7A 00            PUSH 0x7a4ccc
00440618  6A 00                     PUSH 0x0
0044061A  6A 00                     PUSH 0x0
0044061C  68 84 21 00 00            PUSH 0x2184
00440621  68 04 60 7A 00            PUSH 0x7a6004
00440626  E8 A5 CE 26 00            CALL 0x006ad4d0
0044062B  83 C4 18                  ADD ESP,0x18
0044062E  85 C0                     TEST EAX,EAX
00440630  74 01                     JZ 0x00440633
00440632  CC                        INT3
LAB_00440633:
00440633  66 33 C0                  XOR AX,AX
00440636  5D                        POP EBP
00440637  C2 08 00                  RET 0x8
LAB_0044063a:
0044063A  33 C0                     XOR EAX,EAX
0044063C  A0 4D 87 80 00            MOV AL,[0x0080874d]
00440641  8D 0C 80                  LEA ECX,[EAX + EAX*0x4]
00440644  8D 14 C8                  LEA EDX,[EAX + ECX*0x8]
00440647  8D 0C 50                  LEA ECX,[EAX + EDX*0x2]
0044064A  8B 55 0C                  MOV EDX,dword ptr [EBP + 0xc]
0044064D  C1 E1 04                  SHL ECX,0x4
00440650  03 C8                     ADD ECX,EAX
00440652  C1 E2 04                  SHL EDX,0x4
00440655  66 8B 84 4A E1 4F 7F 00   MOV AX,word ptr [EDX + ECX*0x2 + 0x7f4fe1]
0044065D  5D                        POP EBP
0044065E  C2 08 00                  RET 0x8
LAB_00440661:
00440661  33 C0                     XOR EAX,EAX
00440663  A0 4D 87 80 00            MOV AL,[0x0080874d]
00440668  8D 0C 80                  LEA ECX,[EAX + EAX*0x4]
0044066B  8D 14 C8                  LEA EDX,[EAX + ECX*0x8]
0044066E  8D 0C 50                  LEA ECX,[EAX + EDX*0x2]
00440671  8B 55 0C                  MOV EDX,dword ptr [EBP + 0xc]
00440674  C1 E1 04                  SHL ECX,0x4
00440677  03 C8                     ADD ECX,EAX
00440679  C1 E2 04                  SHL EDX,0x4
0044067C  66 8B 84 4A 91 4F 7F 00   MOV AX,word ptr [EDX + ECX*0x2 + 0x7f4f91]
00440684  5D                        POP EBP
00440685  C2 08 00                  RET 0x8
