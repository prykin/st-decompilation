FUN_006dd870:
006DD870  55                        PUSH EBP
006DD871  8B EC                     MOV EBP,ESP
006DD873  83 EC 1C                  SUB ESP,0x1c
006DD876  53                        PUSH EBX
006DD877  8B D9                     MOV EBX,ECX
006DD879  8B 83 48 01 00 00         MOV EAX,dword ptr [EBX + 0x148]
006DD87F  85 C0                     TEST EAX,EAX
006DD881  0F 8E ED 01 00 00         JLE 0x006dda74
006DD887  8B 83 54 01 00 00         MOV EAX,dword ptr [EBX + 0x154]
006DD88D  85 C0                     TEST EAX,EAX
006DD88F  0F 84 DF 01 00 00         JZ 0x006dda74
006DD895  DD 83 5C 01 00 00         FLD double ptr [EBX + 0x15c]
006DD89B  DC 9B 64 01 00 00         FCOMP double ptr [EBX + 0x164]
006DD8A1  DF E0                     FNSTSW AX
006DD8A3  F6 C4 01                  TEST AH,0x1
006DD8A6  0F 84 C8 01 00 00         JZ 0x006dda74
006DD8AC  8B 83 58 01 00 00         MOV EAX,dword ptr [EBX + 0x158]
006DD8B2  85 C0                     TEST EAX,EAX
006DD8B4  75 10                     JNZ 0x006dd8c6
006DD8B6  68 00 C0 00 00            PUSH 0xc000
006DD8BB  E8 B0 D3 FC FF            CALL 0x006aac70
006DD8C0  89 83 58 01 00 00         MOV dword ptr [EBX + 0x158],EAX
LAB_006dd8c6:
006DD8C6  DD 83 5C 01 00 00         FLD double ptr [EBX + 0x15c]
006DD8CC  DC 0D 78 DF 79 00         FMUL double ptr [0x0079df78]
006DD8D2  56                        PUSH ESI
006DD8D3  57                        PUSH EDI
006DD8D4  DC 05 C8 DF 79 00         FADD double ptr [0x0079dfc8]
006DD8DA  E8 A9 09 05 00            CALL 0x0072e288
006DD8DF  DD 83 64 01 00 00         FLD double ptr [EBX + 0x164]
006DD8E5  DC 0D 78 DF 79 00         FMUL double ptr [0x0079df78]
006DD8EB  8B F0                     MOV ESI,EAX
006DD8ED  81 E6 00 7F 00 00         AND ESI,0x7f00
006DD8F3  89 B3 6C 01 00 00         MOV dword ptr [EBX + 0x16c],ESI
006DD8F9  E8 8A 09 05 00            CALL 0x0072e288
006DD8FE  25 00 7F 00 00            AND EAX,0x7f00
006DD903  33 C9                     XOR ECX,ECX
006DD905  89 83 70 01 00 00         MOV dword ptr [EBX + 0x170],EAX
006DD90B  8B C6                     MOV EAX,ESI
006DD90D  99                        CDQ
006DD90E  81 E2 FF 00 00 00         AND EDX,0xff
006DD914  89 4D F8                  MOV dword ptr [EBP + -0x8],ECX
006DD917  03 C2                     ADD EAX,EDX
006DD919  C1 F8 08                  SAR EAX,0x8
006DD91C  85 C0                     TEST EAX,EAX
006DD91E  7E 26                     JLE 0x006dd946
006DD920  33 D2                     XOR EDX,EDX
006DD922  89 45 F8                  MOV dword ptr [EBP + -0x8],EAX
LAB_006dd925:
006DD925  8B BB 58 01 00 00         MOV EDI,dword ptr [EBX + 0x158]
006DD92B  8B B3 54 01 00 00         MOV ESI,dword ptr [EBX + 0x154]
006DD931  03 FA                     ADD EDI,EDX
006DD933  B9 40 00 00 00            MOV ECX,0x40
006DD938  81 C2 00 01 00 00         ADD EDX,0x100
006DD93E  48                        DEC EAX
006DD93F  F3 A5                     MOVSD.REP ES:EDI,ESI
006DD941  75 E2                     JNZ 0x006dd925
006DD943  8B 4D F8                  MOV ECX,dword ptr [EBP + -0x8]
LAB_006dd946:
006DD946  8B 83 70 01 00 00         MOV EAX,dword ptr [EBX + 0x170]
006DD94C  8B 93 6C 01 00 00         MOV EDX,dword ptr [EBX + 0x16c]
006DD952  2B C2                     SUB EAX,EDX
006DD954  99                        CDQ
006DD955  81 E2 FF 00 00 00         AND EDX,0xff
006DD95B  03 C2                     ADD EAX,EDX
006DD95D  8B F0                     MOV ESI,EAX
006DD95F  8B 83 48 01 00 00         MOV EAX,dword ptr [EBX + 0x148]
006DD965  C1 FE 08                  SAR ESI,0x8
006DD968  89 45 E8                  MOV dword ptr [EBP + -0x18],EAX
006DD96B  33 C0                     XOR EAX,EAX
006DD96D  85 F6                     TEST ESI,ESI
006DD96F  89 75 EC                  MOV dword ptr [EBP + -0x14],ESI
006DD972  7E 63                     JLE 0x006dd9d7
006DD974  8B C6                     MOV EAX,ESI
006DD976  89 75 F0                  MOV dword ptr [EBP + -0x10],ESI
006DD979  99                        CDQ
006DD97A  2B C2                     SUB EAX,EDX
006DD97C  89 75 E4                  MOV dword ptr [EBP + -0x1c],ESI
006DD97F  C1 E1 08                  SHL ECX,0x8
006DD982  D1 F8                     SAR EAX,0x1
006DD984  89 4D F4                  MOV dword ptr [EBP + -0xc],ECX
006DD987  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
006DD98A  EB 06                     JMP 0x006dd992
LAB_006dd98c:
006DD98C  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
006DD98F  8B 75 EC                  MOV ESI,dword ptr [EBP + -0x14]
LAB_006dd992:
006DD992  99                        CDQ
006DD993  F7 FE                     IDIV ESI
006DD995  8B BB 54 01 00 00         MOV EDI,dword ptr [EBX + 0x154]
006DD99B  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
006DD99E  B9 40 00 00 00            MOV ECX,0x40
006DD9A3  8B F0                     MOV ESI,EAX
006DD9A5  8B 45 F4                  MOV EAX,dword ptr [EBP + -0xc]
006DD9A8  46                        INC ESI
006DD9A9  C1 E6 08                  SHL ESI,0x8
006DD9AC  03 F7                     ADD ESI,EDI
006DD9AE  8B BB 58 01 00 00         MOV EDI,dword ptr [EBX + 0x158]
006DD9B4  03 F8                     ADD EDI,EAX
006DD9B6  05 00 01 00 00            ADD EAX,0x100
006DD9BB  F3 A5                     MOVSD.REP ES:EDI,ESI
006DD9BD  8B 4D E8                  MOV ECX,dword ptr [EBP + -0x18]
006DD9C0  89 45 F4                  MOV dword ptr [EBP + -0xc],EAX
006DD9C3  8B 45 F0                  MOV EAX,dword ptr [EBP + -0x10]
006DD9C6  03 D1                     ADD EDX,ECX
006DD9C8  48                        DEC EAX
006DD9C9  89 55 FC                  MOV dword ptr [EBP + -0x4],EDX
006DD9CC  89 45 F0                  MOV dword ptr [EBP + -0x10],EAX
006DD9CF  75 BB                     JNZ 0x006dd98c
006DD9D1  8B 45 E4                  MOV EAX,dword ptr [EBP + -0x1c]
006DD9D4  8B 4D F8                  MOV ECX,dword ptr [EBP + -0x8]
LAB_006dd9d7:
006DD9D7  03 C8                     ADD ECX,EAX
006DD9D9  81 F9 C0 00 00 00         CMP ECX,0xc0
006DD9DF  7D 31                     JGE 0x006dda12
006DD9E1  C1 E1 08                  SHL ECX,0x8
006DD9E4  8B C1                     MOV EAX,ECX
LAB_006dd9e6:
006DD9E6  8B B3 48 01 00 00         MOV ESI,dword ptr [EBX + 0x148]
006DD9EC  8B BB 54 01 00 00         MOV EDI,dword ptr [EBX + 0x154]
006DD9F2  C1 E6 08                  SHL ESI,0x8
006DD9F5  03 F7                     ADD ESI,EDI
006DD9F7  8B BB 58 01 00 00         MOV EDI,dword ptr [EBX + 0x158]
006DD9FD  03 F8                     ADD EDI,EAX
006DD9FF  05 00 01 00 00            ADD EAX,0x100
006DDA04  B9 40 00 00 00            MOV ECX,0x40
006DDA09  3D 00 C0 00 00            CMP EAX,0xc000
006DDA0E  F3 A5                     MOVSD.REP ES:EDI,ESI
006DDA10  7C D4                     JL 0x006dd9e6
LAB_006dda12:
006DDA12  DB 83 6C 01 00 00         FILD dword ptr [EBX + 0x16c]
006DDA18  DC B3 0C 01 00 00         FDIV double ptr [EBX + 0x10c]
006DDA1E  DC 83 14 01 00 00         FADD double ptr [EBX + 0x114]
006DDA24  DC A3 C0 00 00 00         FSUB double ptr [EBX + 0xc0]
006DDA2A  DC 6B 78                  FSUBR double ptr [EBX + 0x78]
006DDA2D  DC A3 B8 00 00 00         FSUB double ptr [EBX + 0xb8]
006DDA33  DC 8B E0 00 00 00         FMUL double ptr [EBX + 0xe0]
006DDA39  DA 43 34                  FIADD dword ptr [EBX + 0x34]
006DDA3C  E8 47 08 05 00            CALL 0x0072e288
006DDA41  8B 8B 44 01 00 00         MOV ECX,dword ptr [EBX + 0x144]
006DDA47  5F                        POP EDI
006DDA48  85 C9                     TEST ECX,ECX
006DDA4A  89 83 74 01 00 00         MOV dword ptr [EBX + 0x174],EAX
006DDA50  5E                        POP ESI
006DDA51  74 2D                     JZ 0x006dda80
006DDA53  85 C0                     TEST EAX,EAX
006DDA55  7E 29                     JLE 0x006dda80
006DDA57  3B 43 2C                  CMP EAX,dword ptr [EBX + 0x2c]
006DDA5A  7D 24                     JGE 0x006dda80
006DDA5C  8B 53 28                  MOV EDX,dword ptr [EBX + 0x28]
006DDA5F  0F AF D0                  IMUL EDX,EAX
006DDA62  8B 43 1C                  MOV EAX,dword ptr [EBX + 0x1c]
006DDA65  52                        PUSH EDX
006DDA66  50                        PUSH EAX
006DDA67  E8 E4 F4 FC FF            CALL 0x006acf50
006DDA6C  89 43 1C                  MOV dword ptr [EBX + 0x1c],EAX
006DDA6F  5B                        POP EBX
006DDA70  8B E5                     MOV ESP,EBP
006DDA72  5D                        POP EBP
006DDA73  C3                        RET
LAB_006dda74:
006DDA74  81 C3 58 01 00 00         ADD EBX,0x158
006DDA7A  53                        PUSH EBX
006DDA7B  E8 E0 D5 FC FF            CALL 0x006ab060
LAB_006dda80:
006DDA80  5B                        POP EBX
006DDA81  8B E5                     MOV ESP,EBP
006DDA83  5D                        POP EBP
006DDA84  C3                        RET
