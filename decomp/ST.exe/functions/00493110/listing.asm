FUN_00493110:
00493110  55                        PUSH EBP
00493111  8B EC                     MOV EBP,ESP
00493113  56                        PUSH ESI
00493114  8B F1                     MOV ESI,ECX
00493116  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
00493119  8D 45 08                  LEA EAX,[EBP + 0x8]
0049311C  50                        PUSH EAX
0049311D  51                        PUSH ECX
0049311E  8B 0D 38 2A 80 00         MOV ECX,dword ptr [0x00802a38]
00493124  E8 A7 31 25 00            CALL 0x006e62d0
00493129  83 F8 FC                  CMP EAX,-0x4
0049312C  0F 84 D5 00 00 00         JZ 0x00493207
00493132  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
00493135  8B 11                     MOV EDX,dword ptr [ECX]
00493137  FF 52 2C                  CALL dword ptr [EDX + 0x2c]
0049313A  8B 8E F7 06 00 00         MOV ECX,dword ptr [ESI + 0x6f7]
00493140  83 F9 07                  CMP ECX,0x7
00493143  74 6C                     JZ 0x004931b1
00493145  83 F9 13                  CMP ECX,0x13
00493148  74 67                     JZ 0x004931b1
0049314A  83 F9 1B                  CMP ECX,0x1b
0049314D  74 62                     JZ 0x004931b1
0049314F  83 F8 07                  CMP EAX,0x7
00493152  74 0E                     JZ 0x00493162
00493154  83 F8 13                  CMP EAX,0x13
00493157  74 09                     JZ 0x00493162
00493159  83 F8 1B                  CMP EAX,0x1b
0049315C  0F 85 A5 00 00 00         JNZ 0x00493207
LAB_00493162:
00493162  66 8B 46 30               MOV AX,word ptr [ESI + 0x30]
00493166  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
00493169  66 89 86 A0 05 00 00      MOV word ptr [ESI + 0x5a0],AX
00493170  C7 86 5D 04 00 00 14 00 00 00  MOV dword ptr [ESI + 0x45d],0x14
0049317A  C7 86 C2 07 00 00 01 00 00 00  MOV dword ptr [ESI + 0x7c2],0x1
00493184  8B 51 18                  MOV EDX,dword ptr [ECX + 0x18]
00493187  33 C0                     XOR EAX,EAX
00493189  8B CE                     MOV ECX,ESI
0049318B  89 86 A6 05 00 00         MOV dword ptr [ESI + 0x5a6],EAX
00493191  89 46 76                  MOV dword ptr [ESI + 0x76],EAX
00493194  8B 06                     MOV EAX,dword ptr [ESI]
00493196  89 96 A2 05 00 00         MOV dword ptr [ESI + 0x5a2],EDX
0049319C  C7 86 C4 05 00 00 07 00 00 00  MOV dword ptr [ESI + 0x5c4],0x7
004931A6  FF 90 B4 00 00 00         CALL dword ptr [EAX + 0xb4]
004931AC  5E                        POP ESI
004931AD  5D                        POP EBP
004931AE  C2 04 00                  RET 0x4
LAB_004931b1:
004931B1  8B 8E CA 07 00 00         MOV ECX,dword ptr [ESI + 0x7ca]
004931B7  85 C9                     TEST ECX,ECX
004931B9  75 4C                     JNZ 0x00493207
004931BB  3D FD 00 00 00            CMP EAX,0xfd
004931C0  74 20                     JZ 0x004931e2
004931C2  3D FE 00 00 00            CMP EAX,0xfe
004931C7  74 19                     JZ 0x004931e2
004931C9  83 F8 01                  CMP EAX,0x1
004931CC  7C 39                     JL 0x00493207
004931CE  83 F8 28                  CMP EAX,0x28
004931D1  7F 34                     JG 0x00493207
004931D3  83 F8 07                  CMP EAX,0x7
004931D6  74 2F                     JZ 0x00493207
004931D8  83 F8 13                  CMP EAX,0x13
004931DB  74 2A                     JZ 0x00493207
004931DD  83 F8 1B                  CMP EAX,0x1b
004931E0  74 25                     JZ 0x00493207
LAB_004931e2:
004931E2  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
004931E5  8B 48 18                  MOV ECX,dword ptr [EAX + 0x18]
004931E8  89 8E CA 07 00 00         MOV dword ptr [ESI + 0x7ca],ECX
004931EE  8B 90 ED 01 00 00         MOV EDX,dword ptr [EAX + 0x1ed]
004931F4  8B 86 ED 01 00 00         MOV EAX,dword ptr [ESI + 0x1ed]
004931FA  8B 8E 11 02 00 00         MOV ECX,dword ptr [ESI + 0x211]
00493200  52                        PUSH EDX
00493201  50                        PUSH EAX
00493202  E8 D9 71 25 00            CALL 0x006ea3e0
LAB_00493207:
00493207  5E                        POP ESI
00493208  5D                        POP EBP
00493209  C2 04 00                  RET 0x4
