FUN_00758170:
00758170  55                        PUSH EBP
00758171  8B EC                     MOV EBP,ESP
00758173  56                        PUSH ESI
00758174  8B 75 08                  MOV ESI,dword ptr [EBP + 0x8]
00758177  57                        PUSH EDI
00758178  33 FF                     XOR EDI,EDI
LAB_0075817a:
0075817A  39 BE 8E 01 00 00         CMP dword ptr [ESI + 0x18e],EDI
00758180  75 28                     JNZ 0x007581aa
00758182  8B 86 A6 01 00 00         MOV EAX,dword ptr [ESI + 0x1a6]
00758188  56                        PUSH ESI
00758189  39 78 50                  CMP dword ptr [EAX + 0x50],EDI
0075818C  75 0F                     JNZ 0x0075819d
0075818E  E8 ED 0E 00 00            CALL 0x00759080
00758193  85 C0                     TEST EAX,EAX
00758195  0F 84 9B 01 00 00         JZ 0x00758336
0075819B  EB 0D                     JMP 0x007581aa
LAB_0075819d:
0075819D  E8 EE FB FF FF            CALL 0x00757d90
007581A2  85 C0                     TEST EAX,EAX
007581A4  0F 84 8C 01 00 00         JZ 0x00758336
LAB_007581aa:
007581AA  8B 86 8E 01 00 00         MOV EAX,dword ptr [ESI + 0x18e]
007581B0  8D 48 FF                  LEA ECX,[EAX + -0x1]
007581B3  81 F9 FD 00 00 00         CMP ECX,0xfd
007581B9  0F 87 29 01 00 00         JA 0x007582e8
007581BF  33 D2                     XOR EDX,EDX
007581C1  8A 91 84 83 75 00         MOV DL,byte ptr [ECX + 0x758384]
switchD_007581c7::switchD:
007581C7  FF 24 95 40 83 75 00      JMP dword ptr [EDX*0x4 + 0x758340]
switchD_007581c7::caseD_d8:
007581CE  56                        PUSH ESI
007581CF  E8 BC 02 00 00            CALL 0x00758490
007581D4  EB 2A                     JMP 0x00758200
switchD_007581c7::caseD_c0:
007581D6  57                        PUSH EDI
007581D7  57                        PUSH EDI
007581D8  EB 20                     JMP 0x007581fa
switchD_007581c7::caseD_c2:
007581DA  57                        PUSH EDI
007581DB  EB 1B                     JMP 0x007581f8
switchD_007581c7::caseD_c9:
007581DD  6A 01                     PUSH 0x1
007581DF  57                        PUSH EDI
007581E0  56                        PUSH ESI
007581E1  E8 4A 03 00 00            CALL 0x00758530
007581E6  85 C0                     TEST EAX,EAX
007581E8  0F 84 48 01 00 00         JZ 0x00758336
007581EE  89 BE 8E 01 00 00         MOV dword ptr [ESI + 0x18e],EDI
007581F4  EB 84                     JMP 0x0075817a
switchD_007581c7::caseD_ca:
007581F6  6A 01                     PUSH 0x1
LAB_007581f8:
007581F8  6A 01                     PUSH 0x1
LAB_007581fa:
007581FA  56                        PUSH ESI
007581FB  E8 30 03 00 00            CALL 0x00758530
LAB_00758200:
00758200  85 C0                     TEST EAX,EAX
00758202  0F 84 2E 01 00 00         JZ 0x00758336
00758208  89 BE 8E 01 00 00         MOV dword ptr [ESI + 0x18e],EDI
0075820E  E9 67 FF FF FF            JMP 0x0075817a
switchD_007581c7::caseD_c3:
00758213  A1 7C D7 7E 00            MOV EAX,[0x007ed77c]
00758218  68 0D 03 00 00            PUSH 0x30d
0075821D  68 B0 2D 7F 00            PUSH 0x7f2db0
00758222  50                        PUSH EAX
00758223  6A 3B                     PUSH 0x3b
00758225  E8 16 DC F4 FF            CALL 0x006a5e40
0075822A  89 BE 8E 01 00 00         MOV dword ptr [ESI + 0x18e],EDI
00758230  E9 45 FF FF FF            JMP 0x0075817a
switchD_007581c7::caseD_cc:
00758235  56                        PUSH ESI
00758236  E8 25 08 00 00            CALL 0x00758a60
0075823B  85 C0                     TEST EAX,EAX
0075823D  0F 84 F3 00 00 00         JZ 0x00758336
00758243  89 BE 8E 01 00 00         MOV dword ptr [ESI + 0x18e],EDI
00758249  E9 2C FF FF FF            JMP 0x0075817a
switchD_007581c7::caseD_c4:
0075824E  56                        PUSH ESI
0075824F  E8 6C 09 00 00            CALL 0x00758bc0
00758254  85 C0                     TEST EAX,EAX
00758256  0F 84 DA 00 00 00         JZ 0x00758336
0075825C  89 BE 8E 01 00 00         MOV dword ptr [ESI + 0x18e],EDI
00758262  E9 13 FF FF FF            JMP 0x0075817a
switchD_007581c7::caseD_db:
00758267  56                        PUSH ESI
00758268  E8 83 0B 00 00            CALL 0x00758df0
0075826D  85 C0                     TEST EAX,EAX
0075826F  0F 84 C1 00 00 00         JZ 0x00758336
00758275  89 BE 8E 01 00 00         MOV dword ptr [ESI + 0x18e],EDI
0075827B  E9 FA FE FF FF            JMP 0x0075817a
switchD_007581c7::caseD_dd:
00758280  56                        PUSH ESI
00758281  E8 1A 0D 00 00            CALL 0x00758fa0
00758286  85 C0                     TEST EAX,EAX
00758288  0F 84 A8 00 00 00         JZ 0x00758336
0075828E  89 BE 8E 01 00 00         MOV dword ptr [ESI + 0x18e],EDI
00758294  E9 E1 FE FF FF            JMP 0x0075817a
switchD_007581c7::caseD_e0:
00758299  8B 8E A6 01 00 00         MOV ECX,dword ptr [ESI + 0x1a6]
0075829F  56                        PUSH ESI
007582A0  FF 94 81 90 FC FF FF      CALL dword ptr [ECX + EAX*0x4 + 0xfffffc90]
007582A7  85 C0                     TEST EAX,EAX
007582A9  0F 84 87 00 00 00         JZ 0x00758336
007582AF  89 BE 8E 01 00 00         MOV dword ptr [ESI + 0x18e],EDI
007582B5  E9 C0 FE FF FF            JMP 0x0075817a
switchD_007581c7::caseD_fe:
007582BA  8B 96 A6 01 00 00         MOV EDX,dword ptr [ESI + 0x1a6]
007582C0  56                        PUSH ESI
007582C1  FF 52 0C                  CALL dword ptr [EDX + 0xc]
007582C4  85 C0                     TEST EAX,EAX
007582C6  74 6E                     JZ 0x00758336
007582C8  89 BE 8E 01 00 00         MOV dword ptr [ESI + 0x18e],EDI
007582CE  E9 A7 FE FF FF            JMP 0x0075817a
switchD_007581c7::caseD_dc:
007582D3  56                        PUSH ESI
007582D4  E8 27 FE FF FF            CALL 0x00758100
007582D9  85 C0                     TEST EAX,EAX
007582DB  74 59                     JZ 0x00758336
007582DD  89 BE 8E 01 00 00         MOV dword ptr [ESI + 0x18e],EDI
007582E3  E9 92 FE FF FF            JMP 0x0075817a
switchD_007581c7::caseD_2:
007582E8  A1 7C D7 7E 00            MOV EAX,[0x007ed77c]
007582ED  68 5F 03 00 00            PUSH 0x35f
007582F2  68 B0 2D 7F 00            PUSH 0x7f2db0
007582F7  50                        PUSH EAX
007582F8  6A 43                     PUSH 0x43
007582FA  E8 41 DB F4 FF            CALL 0x006a5e40
switchD_007581c7::caseD_1:
007582FF  89 BE 8E 01 00 00         MOV dword ptr [ESI + 0x18e],EDI
00758305  E9 70 FE FF FF            JMP 0x0075817a
switchD_007581c7::caseD_da:
0075830A  56                        PUSH ESI
0075830B  E8 F0 04 00 00            CALL 0x00758800
00758310  85 C0                     TEST EAX,EAX
00758312  74 22                     JZ 0x00758336
00758314  89 BE 8E 01 00 00         MOV dword ptr [ESI + 0x18e],EDI
0075831A  5F                        POP EDI
0075831B  B8 01 00 00 00            MOV EAX,0x1
00758320  5E                        POP ESI
00758321  5D                        POP EBP
00758322  C2 04 00                  RET 0x4
switchD_007581c7::caseD_d9:
00758325  89 BE 8E 01 00 00         MOV dword ptr [ESI + 0x18e],EDI
0075832B  5F                        POP EDI
0075832C  B8 02 00 00 00            MOV EAX,0x2
00758331  5E                        POP ESI
00758332  5D                        POP EBP
00758333  C2 04 00                  RET 0x4
LAB_00758336:
00758336  5F                        POP EDI
00758337  33 C0                     XOR EAX,EAX
00758339  5E                        POP ESI
0075833A  5D                        POP EBP
0075833B  C2 04 00                  RET 0x4
