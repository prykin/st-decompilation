FUN_004dbe00:
004DBE00  55                        PUSH EBP
004DBE01  8B EC                     MOV EBP,ESP
004DBE03  53                        PUSH EBX
004DBE04  56                        PUSH ESI
004DBE05  57                        PUSH EDI
004DBE06  8B F9                     MOV EDI,ECX
004DBE08  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
004DBE0B  33 F6                     XOR ESI,ESI
004DBE0D  8D 87 D0 04 00 00         LEA EAX,[EDI + 0x4d0]
LAB_004dbe13:
004DBE13  39 08                     CMP dword ptr [EAX],ECX
004DBE15  74 12                     JZ 0x004dbe29
004DBE17  46                        INC ESI
004DBE18  83 C0 04                  ADD EAX,0x4
004DBE1B  83 FE 02                  CMP ESI,0x2
004DBE1E  7C F3                     JL 0x004dbe13
004DBE20  5F                        POP EDI
004DBE21  5E                        POP ESI
004DBE22  33 C0                     XOR EAX,EAX
004DBE24  5B                        POP EBX
004DBE25  5D                        POP EBP
004DBE26  C2 04 00                  RET 0x4
LAB_004dbe29:
004DBE29  8B 8C B7 D0 04 00 00      MOV ECX,dword ptr [EDI + ESI*0x4 + 0x4d0]
004DBE30  8D 45 08                  LEA EAX,[EBP + 0x8]
004DBE33  50                        PUSH EAX
004DBE34  51                        PUSH ECX
004DBE35  8B 0D 38 2A 80 00         MOV ECX,dword ptr [0x00802a38]
004DBE3B  E8 90 A4 20 00            CALL 0x006e62d0
004DBE40  85 C0                     TEST EAX,EAX
004DBE42  75 31                     JNZ 0x004dbe75
004DBE44  8B 5D 08                  MOV EBX,dword ptr [EBP + 0x8]
004DBE47  8B 8B 1F 06 00 00         MOV ECX,dword ptr [EBX + 0x61f]
004DBE4D  89 83 C0 04 00 00         MOV dword ptr [EBX + 0x4c0],EAX
004DBE53  85 C9                     TEST ECX,ECX
004DBE55  74 1E                     JZ 0x004dbe75
004DBE57  E8 92 8B F2 FF            CALL 0x004049ee
004DBE5C  8B 93 1F 06 00 00         MOV EDX,dword ptr [EBX + 0x61f]
004DBE62  52                        PUSH EDX
004DBE63  E8 48 24 25 00            CALL 0x0072e2b0
004DBE68  83 C4 04                  ADD ESP,0x4
004DBE6B  C7 83 1F 06 00 00 00 00 00 00  MOV dword ptr [EBX + 0x61f],0x0
LAB_004dbe75:
004DBE75  B8 35 01 00 00            MOV EAX,0x135
004DBE7A  33 C9                     XOR ECX,ECX
004DBE7C  2B C6                     SUB EAX,ESI
004DBE7E  89 8C B7 D0 04 00 00      MOV dword ptr [EDI + ESI*0x4 + 0x4d0],ECX
004DBE85  89 8C B7 E0 04 00 00      MOV dword ptr [EDI + ESI*0x4 + 0x4e0],ECX
004DBE8C  8B 14 87                  MOV EDX,dword ptr [EDI + EAX*0x4]
004DBE8F  8D 04 87                  LEA EAX,[EDI + EAX*0x4]
004DBE92  3B D1                     CMP EDX,ECX
004DBE94  74 4C                     JZ 0x004dbee2
004DBE96  B9 39 01 00 00            MOV ECX,0x139
004DBE9B  BA 3B 01 00 00            MOV EDX,0x13b
004DBEA0  2B CE                     SUB ECX,ESI
004DBEA2  2B D6                     SUB EDX,ESI
004DBEA4  8D 1C 8F                  LEA EBX,[EDI + ECX*0x4]
004DBEA7  C7 03 64 00 00 00         MOV dword ptr [EBX],0x64
004DBEAD  8B 0C 97                  MOV ECX,dword ptr [EDI + EDX*0x4]
004DBEB0  85 C9                     TEST ECX,ECX
004DBEB2  74 2E                     JZ 0x004dbee2
004DBEB4  8B 10                     MOV EDX,dword ptr [EAX]
004DBEB6  8D 4D 08                  LEA ECX,[EBP + 0x8]
004DBEB9  51                        PUSH ECX
004DBEBA  8B 0D 38 2A 80 00         MOV ECX,dword ptr [0x00802a38]
004DBEC0  52                        PUSH EDX
004DBEC1  E8 0A A4 20 00            CALL 0x006e62d0
004DBEC6  85 C0                     TEST EAX,EAX
004DBEC8  75 18                     JNZ 0x004dbee2
004DBECA  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
004DBECD  8B 57 18                  MOV EDX,dword ptr [EDI + 0x18]
004DBED0  8B 88 C4 04 00 00         MOV ECX,dword ptr [EAX + 0x4c4]
004DBED6  3B CA                     CMP ECX,EDX
004DBED8  75 08                     JNZ 0x004dbee2
004DBEDA  8B 13                     MOV EDX,dword ptr [EBX]
004DBEDC  89 90 C0 04 00 00         MOV dword ptr [EAX + 0x4c0],EDX
LAB_004dbee2:
004DBEE2  5F                        POP EDI
004DBEE3  5E                        POP ESI
004DBEE4  33 C0                     XOR EAX,EAX
004DBEE6  5B                        POP EBX
004DBEE7  5D                        POP EBP
004DBEE8  C2 04 00                  RET 0x4
