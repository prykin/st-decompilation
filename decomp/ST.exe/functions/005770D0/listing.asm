GameSystemC::DoneSystem:
005770D0  55                        PUSH EBP
005770D1  8B EC                     MOV EBP,ESP
005770D3  83 EC 48                  SUB ESP,0x48
005770D6  56                        PUSH ESI
005770D7  57                        PUSH EDI
005770D8  89 4D FC                  MOV dword ptr [EBP + -0x4],ECX
005770DB  C6 81 30 04 00 00 00      MOV byte ptr [ECX + 0x430],0x0
005770E2  A1 F8 8D 85 00            MOV EAX,[0x00858df8]
005770E7  8D 55 BC                  LEA EDX,[EBP + -0x44]
005770EA  8D 4D B8                  LEA ECX,[EBP + -0x48]
005770ED  6A 00                     PUSH 0x0
005770EF  52                        PUSH EDX
005770F0  89 45 B8                  MOV dword ptr [EBP + -0x48],EAX
005770F3  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
005770F9  E8 F2 66 1B 00            CALL 0x0072d7f0
005770FE  8B F0                     MOV ESI,EAX
00577100  83 C4 08                  ADD ESP,0x8
00577103  85 F6                     TEST ESI,ESI
00577105  0F 85 C4 00 00 00         JNZ 0x005771cf
0057710B  8B 7D FC                  MOV EDI,dword ptr [EBP + -0x4]
0057710E  8B 8F 31 04 00 00         MOV ECX,dword ptr [EDI + 0x431]
00577114  8D 87 31 04 00 00         LEA EAX,[EDI + 0x431]
0057711A  85 C9                     TEST ECX,ECX
0057711C  74 09                     JZ 0x00577127
0057711E  50                        PUSH EAX
0057711F  E8 5C E5 1A 00            CALL 0x00725680
00577124  83 C4 04                  ADD ESP,0x4
LAB_00577127:
00577127  68 24 67 80 00            PUSH 0x806724
0057712C  E8 9F 40 19 00            CALL 0x0070b1d0
00577131  A1 28 2A 80 00            MOV EAX,[0x00802a28]
00577136  83 C4 04                  ADD ESP,0x4
00577139  85 C0                     TEST EAX,EAX
0057713B  74 0F                     JZ 0x0057714c
0057713D  68 28 2A 80 00            PUSH 0x802a28
00577142  B9 20 76 80 00            MOV ECX,0x807620
00577147  E8 F2 AB E8 FF            CALL 0x00401d3e
LAB_0057714c:
0057714C  A1 38 2A 80 00            MOV EAX,[0x00802a38]
00577151  85 C0                     TEST EAX,EAX
00577153  74 0F                     JZ 0x00577164
00577155  68 38 2A 80 00            PUSH 0x802a38
0057715A  B9 20 76 80 00            MOV ECX,0x807620
0057715F  E8 DA AB E8 FF            CALL 0x00401d3e
LAB_00577164:
00577164  E8 54 D2 E8 FF            CALL 0x004043bd
00577169  8B 35 98 75 80 00         MOV ESI,dword ptr [0x00807598]
0057716F  C7 05 4C 67 80 00 00 00 00 00  MOV dword ptr [0x0080674c],0x0
00577179  85 F6                     TEST ESI,ESI
0057717B  74 1A                     JZ 0x00577197
0057717D  8B CE                     MOV ECX,ESI
0057717F  E8 6C 4B 16 00            CALL 0x006dbcf0
00577184  56                        PUSH ESI
00577185  E8 26 71 1B 00            CALL 0x0072e2b0
0057718A  83 C4 04                  ADD ESP,0x4
0057718D  C7 05 98 75 80 00 00 00 00 00  MOV dword ptr [0x00807598],0x0
LAB_00577197:
00577197  E8 82 A3 E8 FF            CALL 0x0040151e
0057719C  A1 50 67 80 00            MOV EAX,[0x00806750]
005771A1  85 C0                     TEST EAX,EAX
005771A3  74 0D                     JZ 0x005771b2
005771A5  68 50 67 80 00            PUSH 0x806750
005771AA  E8 A1 A8 E8 FF            CALL 0x00401a50
005771AF  83 C4 04                  ADD ESP,0x4
LAB_005771b2:
005771B2  8B CF                     MOV ECX,EDI
005771B4  E8 17 E1 16 00            CALL 0x006e52d0
005771B9  6A 01                     PUSH 0x1
005771BB  FF 15 40 BE 85 00         CALL dword ptr [0x0085be40]
005771C1  8B 45 B8                  MOV EAX,dword ptr [EBP + -0x48]
005771C4  A3 F8 8D 85 00            MOV [0x00858df8],EAX
005771C9  5F                        POP EDI
005771CA  5E                        POP ESI
005771CB  8B E5                     MOV ESP,EBP
005771CD  5D                        POP EBP
005771CE  C3                        RET
LAB_005771cf:
005771CF  8B 4D B8                  MOV ECX,dword ptr [EBP + -0x48]
005771D2  68 18 AC 7C 00            PUSH 0x7cac18
005771D7  68 CC 4C 7A 00            PUSH 0x7a4ccc
005771DC  56                        PUSH ESI
005771DD  6A 00                     PUSH 0x0
005771DF  68 A7 00 00 00            PUSH 0xa7
005771E4  68 5C AB 7C 00            PUSH 0x7cab5c
005771E9  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
005771EF  E8 DC 62 13 00            CALL 0x006ad4d0
005771F4  83 C4 18                  ADD ESP,0x18
005771F7  85 C0                     TEST EAX,EAX
005771F9  74 01                     JZ 0x005771fc
005771FB  CC                        INT3
LAB_005771fc:
005771FC  68 A7 00 00 00            PUSH 0xa7
00577201  68 5C AB 7C 00            PUSH 0x7cab5c
00577206  6A 00                     PUSH 0x0
00577208  56                        PUSH ESI
00577209  E8 32 EC 12 00            CALL 0x006a5e40
0057720E  5F                        POP EDI
0057720F  5E                        POP ESI
00577210  8B E5                     MOV ESP,EBP
00577212  5D                        POP EBP
00577213  C3                        RET
