STAllPlayersC::_ChangeDock:
00440990  55                        PUSH EBP
00440991  8B EC                     MOV EBP,ESP
00440993  8B 45 10                  MOV EAX,dword ptr [EBP + 0x10]
00440996  53                        PUSH EBX
00440997  56                        PUSH ESI
00440998  8B 75 0C                  MOV ESI,dword ptr [EBP + 0xc]
0044099B  57                        PUSH EDI
0044099C  6A 01                     PUSH 0x1
0044099E  50                        PUSH EAX
0044099F  56                        PUSH ESI
004409A0  E8 15 1F FC FF            CALL 0x004028ba
004409A5  85 C0                     TEST EAX,EAX
004409A7  89 45 0C                  MOV dword ptr [EBP + 0xc],EAX
004409AA  75 41                     JNZ 0x004409ed
004409AC  68 20 80 7A 00            PUSH 0x7a8020
004409B1  68 CC 4C 7A 00            PUSH 0x7a4ccc
004409B6  50                        PUSH EAX
004409B7  50                        PUSH EAX
004409B8  68 ED 21 00 00            PUSH 0x21ed
004409BD  68 04 60 7A 00            PUSH 0x7a6004
004409C2  E8 09 CB 26 00            CALL 0x006ad4d0
004409C7  83 C4 18                  ADD ESP,0x18
004409CA  85 C0                     TEST EAX,EAX
004409CC  74 01                     JZ 0x004409cf
004409CE  CC                        INT3
LAB_004409cf:
004409CF  8B 0D 7C D7 7E 00         MOV ECX,dword ptr [0x007ed77c]
004409D5  68 EE 21 00 00            PUSH 0x21ee
004409DA  68 04 60 7A 00            PUSH 0x7a6004
004409DF  51                        PUSH ECX
004409E0  68 04 00 FE AF            PUSH 0xaffe0004
004409E5  E8 56 54 26 00            CALL 0x006a5e40
004409EA  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
LAB_004409ed:
004409ED  8B 10                     MOV EDX,dword ptr [EAX]
004409EF  8B C8                     MOV ECX,EAX
004409F1  FF 52 2C                  CALL dword ptr [EDX + 0x2c]
004409F4  83 F8 33                  CMP EAX,0x33
004409F7  75 59                     JNZ 0x00440a52
004409F9  8D 04 B6                  LEA EAX,[ESI + ESI*0x4]
004409FC  8D 0C C6                  LEA ECX,[ESI + EAX*0x8]
004409FF  8D 14 4E                  LEA EDX,[ESI + ECX*0x2]
00440A02  C1 E2 04                  SHL EDX,0x4
00440A05  03 D6                     ADD EDX,ESI
00440A07  8B 3C 55 25 4E 7F 00      MOV EDI,dword ptr [EDX*0x2 + 0x7f4e25]
00440A0E  85 FF                     TEST EDI,EDI
00440A10  74 40                     JZ 0x00440a52
00440A12  8B 5F 0C                  MOV EBX,dword ptr [EDI + 0xc]
00440A15  85 DB                     TEST EBX,EBX
00440A17  76 39                     JBE 0x00440a52
00440A19  33 F6                     XOR ESI,ESI
00440A1B  85 DB                     TEST EBX,EBX
00440A1D  7E 33                     JLE 0x00440a52
LAB_00440a1f:
00440A1F  8D 45 0C                  LEA EAX,[EBP + 0xc]
00440A22  8B D6                     MOV EDX,ESI
00440A24  50                        PUSH EAX
00440A25  8B CF                     MOV ECX,EDI
00440A27  E8 44 C2 26 00            CALL 0x006acc70
00440A2C  8B 4D 0C                  MOV ECX,dword ptr [EBP + 0xc]
00440A2F  85 C9                     TEST ECX,ECX
00440A31  74 1A                     JZ 0x00440a4d
00440A33  8B 11                     MOV EDX,dword ptr [ECX]
00440A35  FF 52 0C                  CALL dword ptr [EDX + 0xc]
00440A38  83 F8 04                  CMP EAX,0x4
00440A3B  75 10                     JNZ 0x00440a4d
00440A3D  8B 55 10                  MOV EDX,dword ptr [EBP + 0x10]
00440A40  8B 4D 0C                  MOV ECX,dword ptr [EBP + 0xc]
00440A43  52                        PUSH EDX
00440A44  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
00440A47  8B 01                     MOV EAX,dword ptr [ECX]
00440A49  52                        PUSH EDX
00440A4A  FF 50 14                  CALL dword ptr [EAX + 0x14]
LAB_00440a4d:
00440A4D  46                        INC ESI
00440A4E  3B F3                     CMP ESI,EBX
00440A50  7C CD                     JL 0x00440a1f
LAB_00440a52:
00440A52  5F                        POP EDI
00440A53  5E                        POP ESI
00440A54  5B                        POP EBX
00440A55  5D                        POP EBP
00440A56  C2 0C 00                  RET 0xc
