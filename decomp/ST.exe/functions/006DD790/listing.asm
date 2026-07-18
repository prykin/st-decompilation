FUN_006dd790:
006DD790  55                        PUSH EBP
006DD791  8B EC                     MOV EBP,ESP
006DD793  D9 45 08                  FLD float ptr [EBP + 0x8]
006DD796  56                        PUSH ESI
006DD797  8B F1                     MOV ESI,ECX
006DD799  DC 96 1C 01 00 00         FCOM double ptr [ESI + 0x11c]
006DD79F  DD 96 14 01 00 00         FST double ptr [ESI + 0x114]
006DD7A5  DF E0                     FNSTSW AX
006DD7A7  F6 C4 01                  TEST AH,0x1
006DD7AA  74 41                     JZ 0x006dd7ed
006DD7AC  DC AE 1C 01 00 00         FSUBR double ptr [ESI + 0x11c]
006DD7B2  DC 3D 78 DF 79 00         FDIVR double ptr [0x0079df78]
006DD7B8  DD 96 0C 01 00 00         FST double ptr [ESI + 0x10c]
006DD7BE  DC 8E F8 00 00 00         FMUL double ptr [ESI + 0xf8]
006DD7C4  DC 0D 80 05 79 00         FMUL double ptr [0x00790580]
006DD7CA  DC 0D 70 DF 79 00         FMUL double ptr [0x0079df70]
006DD7D0  DC 05 C0 01 79 00         FADD double ptr [0x007901c0]
006DD7D6  E8 AD 0A 05 00            CALL 0x0072e288
006DD7DB  8B CE                     MOV ECX,ESI
006DD7DD  89 86 E4 02 00 00         MOV dword ptr [ESI + 0x2e4],EAX
006DD7E3  E8 88 00 00 00            CALL 0x006dd870
006DD7E8  5E                        POP ESI
006DD7E9  5D                        POP EBP
006DD7EA  C2 04 00                  RET 0x4
LAB_006dd7ed:
006DD7ED  DD D8                     FSTP ST0
006DD7EF  5E                        POP ESI
006DD7F0  5D                        POP EBP
006DD7F1  C2 04 00                  RET 0x4
