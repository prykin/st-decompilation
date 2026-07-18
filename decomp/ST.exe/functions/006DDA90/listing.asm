FUN_006dda90:
006DDA90  55                        PUSH EBP
006DDA91  8B EC                     MOV EBP,ESP
006DDA93  D9 45 08                  FLD float ptr [EBP + 0x8]
006DDA96  D8 1D 4C 03 79 00         FCOMP float ptr [0x0079034c]
006DDA9C  DF E0                     FNSTSW AX
006DDA9E  F6 C4 01                  TEST AH,0x1
006DDAA1  74 07                     JZ 0x006ddaaa
006DDAA3  C7 45 08 00 00 00 00      MOV dword ptr [EBP + 0x8],0x0
LAB_006ddaaa:
006DDAAA  D9 45 0C                  FLD float ptr [EBP + 0xc]
006DDAAD  D8 15 D0 DF 79 00         FCOM float ptr [0x0079dfd0]
006DDAB3  DF E0                     FNSTSW AX
006DDAB5  F6 C4 41                  TEST AH,0x41
006DDAB8  75 08                     JNZ 0x006ddac2
006DDABA  DD D8                     FSTP ST0
006DDABC  D9 05 D0 DF 79 00         FLD float ptr [0x0079dfd0]
LAB_006ddac2:
006DDAC2  D9 45 08                  FLD float ptr [EBP + 0x8]
006DDAC5  DD 99 5C 01 00 00         FSTP double ptr [ECX + 0x15c]
006DDACB  DD 99 64 01 00 00         FSTP double ptr [ECX + 0x164]
006DDAD1  E8 9A FD FF FF            CALL 0x006dd870
006DDAD6  5D                        POP EBP
006DDAD7  C2 08 00                  RET 0x8
