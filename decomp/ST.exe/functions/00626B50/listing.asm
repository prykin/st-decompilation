FUN_00626b50:
00626B50  55                        PUSH EBP
00626B51  8B EC                     MOV EBP,ESP
00626B53  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
00626B56  83 F8 03                  CMP EAX,0x3
00626B59  77 2F                     JA 0x00626b8a
switchD_00626b5b::switchD:
00626B5B  FF 24 85 90 6B 62 00      JMP dword ptr [EAX*0x4 + 0x626b90]
switchD_00626b5b::caseD_0:
00626B62  C6 81 D6 02 00 00 00      MOV byte ptr [ECX + 0x2d6],0x0
00626B69  5D                        POP EBP
00626B6A  C2 04 00                  RET 0x4
switchD_00626b5b::caseD_1:
00626B6D  C6 81 D6 02 00 00 01      MOV byte ptr [ECX + 0x2d6],0x1
00626B74  5D                        POP EBP
00626B75  C2 04 00                  RET 0x4
switchD_00626b5b::caseD_2:
00626B78  C6 81 D6 02 00 00 02      MOV byte ptr [ECX + 0x2d6],0x2
00626B7F  5D                        POP EBP
00626B80  C2 04 00                  RET 0x4
switchD_00626b5b::caseD_3:
00626B83  C6 81 D6 02 00 00 03      MOV byte ptr [ECX + 0x2d6],0x3
switchD_00626b5b::default:
00626B8A  5D                        POP EBP
00626B8B  C2 04 00                  RET 0x4
