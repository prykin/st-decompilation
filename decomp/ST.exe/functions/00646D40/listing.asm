STVolcanoC::sub_00646D40:
00646D40  55                        PUSH EBP
00646D41  8B EC                     MOV EBP,ESP
00646D43  56                        PUSH ESI
00646D44  57                        PUSH EDI
00646D45  8B F1                     MOV ESI,ECX
00646D47  68 95 00 00 00            PUSH 0x95
00646D4C  E8 1F 3F 06 00            CALL 0x006aac70
00646D51  8B 8E B1 00 00 00         MOV ECX,dword ptr [ESI + 0xb1]
00646D57  C7 46 28 02 00 00 00      MOV dword ptr [ESI + 0x28],0x2
00646D5E  85 F6                     TEST ESI,ESI
00646D60  89 8E AD 00 00 00         MOV dword ptr [ESI + 0xad],ECX
00646D66  74 05                     JZ 0x00646d6d
00646D68  83 C6 1C                  ADD ESI,0x1c
00646D6B  EB 02                     JMP 0x00646d6f
LAB_00646d6d:
00646D6D  33 F6                     XOR ESI,ESI
LAB_00646d6f:
00646D6F  B9 25 00 00 00            MOV ECX,0x25
00646D74  8B F8                     MOV EDI,EAX
00646D76  F3 A5                     MOVSD.REP ES:EDI,ESI
00646D78  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
00646D7B  A4                        MOVSB ES:EDI,ESI
00646D7C  5F                        POP EDI
00646D7D  C7 02 95 00 00 00         MOV dword ptr [EDX],0x95
00646D83  5E                        POP ESI
00646D84  5D                        POP EBP
00646D85  C2 04 00                  RET 0x4
