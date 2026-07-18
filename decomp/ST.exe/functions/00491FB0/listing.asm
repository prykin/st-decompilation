FUN_00491fb0:
00491FB0  55                        PUSH EBP
00491FB1  8B EC                     MOV EBP,ESP
00491FB3  56                        PUSH ESI
00491FB4  8B F1                     MOV ESI,ECX
00491FB6  8B 86 5D 04 00 00         MOV EAX,dword ptr [ESI + 0x45d]
00491FBC  83 F8 0F                  CMP EAX,0xf
00491FBF  74 05                     JZ 0x00491fc6
00491FC1  83 F8 0E                  CMP EAX,0xe
00491FC4  75 5C                     JNZ 0x00492022
LAB_00491fc6:
00491FC6  8B 86 8E 05 00 00         MOV EAX,dword ptr [ESI + 0x58e]
00491FCC  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
00491FCF  3B C1                     CMP EAX,ECX
00491FD1  75 4F                     JNZ 0x00492022
00491FD3  83 BE 96 05 00 00 02      CMP dword ptr [ESI + 0x596],0x2
00491FDA  75 46                     JNZ 0x00492022
00491FDC  8D 4D 08                  LEA ECX,[EBP + 0x8]
00491FDF  51                        PUSH ECX
00491FE0  8B 0D 38 2A 80 00         MOV ECX,dword ptr [0x00802a38]
00491FE6  50                        PUSH EAX
00491FE7  E8 E4 42 25 00            CALL 0x006e62d0
00491FEC  8D 96 8C 05 00 00         LEA EDX,[ESI + 0x58c]
00491FF2  8D 86 8A 05 00 00         LEA EAX,[ESI + 0x58a]
00491FF8  52                        PUSH EDX
00491FF9  8D 8E 88 05 00 00         LEA ECX,[ESI + 0x588]
00491FFF  50                        PUSH EAX
00492000  51                        PUSH ECX
00492001  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
00492004  E8 02 3F F7 FF            CALL 0x00405f0b
00492009  C7 86 96 05 00 00 03 00 00 00  MOV dword ptr [ESI + 0x596],0x3
00492013  C7 86 9A 05 00 00 00 00 00 00  MOV dword ptr [ESI + 0x59a],0x0
0049201D  5E                        POP ESI
0049201E  5D                        POP EBP
0049201F  C2 04 00                  RET 0x4
LAB_00492022:
00492022  68 28 BB 7A 00            PUSH 0x7abb28
00492027  68 CC 4C 7A 00            PUSH 0x7a4ccc
0049202C  6A 00                     PUSH 0x0
0049202E  6A 00                     PUSH 0x0
00492030  68 BB 50 00 00            PUSH 0x50bb
00492035  68 3C 9D 7A 00            PUSH 0x7a9d3c
0049203A  E8 91 B4 21 00            CALL 0x006ad4d0
0049203F  83 C4 18                  ADD ESP,0x18
00492042  85 C0                     TEST EAX,EAX
00492044  74 01                     JZ 0x00492047
00492046  CC                        INT3
LAB_00492047:
00492047  5E                        POP ESI
00492048  5D                        POP EBP
00492049  C2 04 00                  RET 0x4
