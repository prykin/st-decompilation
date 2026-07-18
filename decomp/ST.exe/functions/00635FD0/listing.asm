FUN_00635fd0:
00635FD0  57                        PUSH EDI
00635FD1  8B F9                     MOV EDI,ECX
00635FD3  83 7F 11 03               CMP dword ptr [EDI + 0x11],0x3
00635FD7  75 10                     JNZ 0x00635fe9
00635FD9  8B 4F 39                  MOV ECX,dword ptr [EDI + 0x39]
00635FDC  8D 47 39                  LEA EAX,[EDI + 0x39]
00635FDF  85 C9                     TEST ECX,ECX
00635FE1  74 06                     JZ 0x00635fe9
00635FE3  50                        PUSH EAX
00635FE4  E8 77 50 07 00            CALL 0x006ab060
LAB_00635fe9:
00635FE9  8B 07                     MOV EAX,dword ptr [EDI]
00635FEB  85 C0                     TEST EAX,EAX
00635FED  74 49                     JZ 0x00636038
00635FEF  53                        PUSH EBX
00635FF0  8B 58 0C                  MOV EBX,dword ptr [EAX + 0xc]
00635FF3  56                        PUSH ESI
00635FF4  33 F6                     XOR ESI,ESI
00635FF6  85 DB                     TEST EBX,EBX
00635FF8  7E 2E                     JLE 0x00636028
LAB_00635ffa:
00635FFA  8B 0F                     MOV ECX,dword ptr [EDI]
00635FFC  3B 71 0C                  CMP ESI,dword ptr [ECX + 0xc]
00635FFF  73 22                     JNC 0x00636023
00636001  8B 41 08                  MOV EAX,dword ptr [ECX + 0x8]
00636004  8B 51 1C                  MOV EDX,dword ptr [ECX + 0x1c]
00636007  0F AF C6                  IMUL EAX,ESI
0063600A  03 C2                     ADD EAX,EDX
0063600C  85 C0                     TEST EAX,EAX
0063600E  74 13                     JZ 0x00636023
00636010  8B 40 04                  MOV EAX,dword ptr [EAX + 0x4]
00636013  85 C0                     TEST EAX,EAX
00636015  7C 0C                     JL 0x00636023
00636017  8B 0D 98 75 80 00         MOV ECX,dword ptr [0x00807598]
0063601D  50                        PUSH EAX
0063601E  E8 7D 2B 0B 00            CALL 0x006e8ba0
LAB_00636023:
00636023  46                        INC ESI
00636024  3B F3                     CMP ESI,EBX
00636026  7C D2                     JL 0x00635ffa
LAB_00636028:
00636028  8B 07                     MOV EAX,dword ptr [EDI]
0063602A  50                        PUSH EAX
0063602B  E8 E0 80 07 00            CALL 0x006ae110
00636030  5E                        POP ESI
00636031  C7 07 00 00 00 00         MOV dword ptr [EDI],0x0
00636037  5B                        POP EBX
LAB_00636038:
00636038  5F                        POP EDI
00636039  C3                        RET
