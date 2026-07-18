FUN_006dd800:
006DD800  55                        PUSH EBP
006DD801  8B EC                     MOV EBP,ESP
006DD803  D9 45 08                  FLD float ptr [EBP + 0x8]
006DD806  56                        PUSH ESI
006DD807  8B F1                     MOV ESI,ECX
006DD809  DC 96 14 01 00 00         FCOM double ptr [ESI + 0x114]
006DD80F  DD 96 1C 01 00 00         FST double ptr [ESI + 0x11c]
006DD815  DF E0                     FNSTSW AX
006DD817  F6 C4 41                  TEST AH,0x41
006DD81A  75 41                     JNZ 0x006dd85d
006DD81C  DC A6 14 01 00 00         FSUB double ptr [ESI + 0x114]
006DD822  DC 3D 78 DF 79 00         FDIVR double ptr [0x0079df78]
006DD828  DD 96 0C 01 00 00         FST double ptr [ESI + 0x10c]
006DD82E  DC 8E F8 00 00 00         FMUL double ptr [ESI + 0xf8]
006DD834  DC 0D 80 05 79 00         FMUL double ptr [0x00790580]
006DD83A  DC 0D 70 DF 79 00         FMUL double ptr [0x0079df70]
006DD840  DC 05 C0 01 79 00         FADD double ptr [0x007901c0]
006DD846  E8 3D 0A 05 00            CALL 0x0072e288
006DD84B  8B CE                     MOV ECX,ESI
006DD84D  89 86 E4 02 00 00         MOV dword ptr [ESI + 0x2e4],EAX
006DD853  E8 18 00 00 00            CALL 0x006dd870
006DD858  5E                        POP ESI
006DD859  5D                        POP EBP
006DD85A  C2 04 00                  RET 0x4
LAB_006dd85d:
006DD85D  DD D8                     FSTP ST0
006DD85F  5E                        POP ESI
006DD860  5D                        POP EBP
006DD861  C2 04 00                  RET 0x4
