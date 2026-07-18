FUN_006e29d0:
006E29D0  55                        PUSH EBP
006E29D1  8B EC                     MOV EBP,ESP
006E29D3  83 EC 08                  SUB ESP,0x8
006E29D6  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
006E29D9  8B 51 30                  MOV EDX,dword ptr [ECX + 0x30]
006E29DC  2B C2                     SUB EAX,EDX
006E29DE  8B 55 10                  MOV EDX,dword ptr [EBP + 0x10]
006E29E1  89 45 0C                  MOV dword ptr [EBP + 0xc],EAX
006E29E4  8B 41 34                  MOV EAX,dword ptr [ECX + 0x34]
006E29E7  DB 45 0C                  FILD dword ptr [EBP + 0xc]
006E29EA  2B D0                     SUB EDX,EAX
006E29EC  89 55 0C                  MOV dword ptr [EBP + 0xc],EDX
006E29EF  DC B1 D8 00 00 00         FDIV double ptr [ECX + 0xd8]
006E29F5  DC 41 60                  FADD double ptr [ECX + 0x60]
006E29F8  DC A1 B0 00 00 00         FSUB double ptr [ECX + 0xb0]
006E29FE  DD 5D F8                  FSTP double ptr [EBP + -0x8]
006E2A01  DB 45 0C                  FILD dword ptr [EBP + 0xc]
006E2A04  DC B1 E0 00 00 00         FDIV double ptr [ECX + 0xe0]
006E2A0A  DC 69 78                  FSUBR double ptr [ECX + 0x78]
006E2A0D  DC A1 B8 00 00 00         FSUB double ptr [ECX + 0xb8]
006E2A13  DB 45 14                  FILD dword ptr [EBP + 0x14]
006E2A16  DC B1 0C 01 00 00         FDIV double ptr [ECX + 0x10c]
006E2A1C  DC 81 14 01 00 00         FADD double ptr [ECX + 0x114]
006E2A22  DC A1 C0 00 00 00         FSUB double ptr [ECX + 0xc0]
006E2A28  8B 89 A8 00 00 00         MOV ECX,dword ptr [ECX + 0xa8]
006E2A2E  83 F9 03                  CMP ECX,0x3
006E2A31  0F 87 F3 00 00 00         JA 0x006e2b2a
switchD_006e2a37::switchD:
006E2A37  FF 24 8D 4C 2B 6E 00      JMP dword ptr [ECX*0x4 + 0x6e2b4c]
switchD_006e2a37::caseD_0:
006E2A3E  D9 C1                     FLD ST1
006E2A40  DC 0D C0 01 79 00         FMUL double ptr [0x007901c0]
006E2A46  D9 C1                     FLD ST1
006E2A48  DC 0D C0 01 79 00         FMUL double ptr [0x007901c0]
006E2A4E  DD 45 F8                  FLD double ptr [EBP + -0x8]
006E2A51  DC 0D 60 DF 79 00         FMUL double ptr [0x0079df60]
006E2A57  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
006E2A5A  D8 E2                     FSUB ST0,ST2
006E2A5C  D8 E1                     FSUB ST0,ST1
006E2A5E  D9 18                     FSTP float ptr [EAX]
006E2A60  DD 45 F8                  FLD double ptr [EBP + -0x8]
006E2A63  DC 0D C0 DF 79 00         FMUL double ptr [0x0079dfc0]
006E2A69  D8 E2                     FSUB ST0,ST2
006E2A6B  D8 E1                     FSUB ST0,ST1
006E2A6D  D9 58 04                  FSTP float ptr [EAX + 0x4]
006E2A70  DD D8                     FSTP ST0
006E2A72  DD D8                     FSTP ST0
006E2A74  E9 96 00 00 00            JMP 0x006e2b0f
switchD_006e2a37::caseD_1:
006E2A79  DD 45 F8                  FLD double ptr [EBP + -0x8]
006E2A7C  DC 0D 60 DF 79 00         FMUL double ptr [0x0079df60]
006E2A82  D9 C1                     FLD ST1
006E2A84  D8 C3                     FADD ST0,ST3
006E2A86  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
006E2A89  DC 0D C0 01 79 00         FMUL double ptr [0x007901c0]
006E2A8F  D8 C1                     FADD ST0,ST1
006E2A91  D9 18                     FSTP float ptr [EAX]
006E2A93  D9 C2                     FLD ST2
006E2A95  DC 0D C0 01 79 00         FMUL double ptr [0x007901c0]
006E2A9B  D8 E9                     FSUBR ST0,ST1
006E2A9D  D9 C2                     FLD ST2
006E2A9F  DC 0D C0 01 79 00         FMUL double ptr [0x007901c0]
006E2AA5  DE E9                     FSUBP
006E2AA7  D9 58 04                  FSTP float ptr [EAX + 0x4]
006E2AAA  DD D8                     FSTP ST0
006E2AAC  EB 61                     JMP 0x006e2b0f
switchD_006e2a37::caseD_2:
006E2AAE  D9 C0                     FLD ST0
006E2AB0  D8 C2                     FADD ST0,ST2
006E2AB2  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
006E2AB5  DC 0D C0 01 79 00         FMUL double ptr [0x007901c0]
006E2ABB  DD 45 F8                  FLD double ptr [EBP + -0x8]
006E2ABE  DC 0D 60 DF 79 00         FMUL double ptr [0x0079df60]
006E2AC4  D9 C1                     FLD ST1
006E2AC6  D8 E1                     FSUB ST0,ST1
006E2AC8  D9 18                     FSTP float ptr [EAX]
006E2ACA  D9 C9                     FXCH
006E2ACC  D8 C1                     FADD ST0,ST1
006E2ACE  D9 58 04                  FSTP float ptr [EAX + 0x4]
006E2AD1  DD D8                     FSTP ST0
006E2AD3  EB 3A                     JMP 0x006e2b0f
switchD_006e2a37::caseD_3:
006E2AD5  DD 45 F8                  FLD double ptr [EBP + -0x8]
006E2AD8  DC 0D C0 DF 79 00         FMUL double ptr [0x0079dfc0]
006E2ADE  D9 C2                     FLD ST2
006E2AE0  DC 0D C0 01 79 00         FMUL double ptr [0x007901c0]
006E2AE6  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
006E2AE9  DE E9                     FSUBP
006E2AEB  D9 C1                     FLD ST1
006E2AED  DC 0D C0 01 79 00         FMUL double ptr [0x007901c0]
006E2AF3  DE E9                     FSUBP
006E2AF5  D9 18                     FSTP float ptr [EAX]
006E2AF7  D9 C0                     FLD ST0
006E2AF9  D8 C2                     FADD ST0,ST2
006E2AFB  DC 0D C0 01 79 00         FMUL double ptr [0x007901c0]
006E2B01  DD 45 F8                  FLD double ptr [EBP + -0x8]
006E2B04  DC 0D 60 DF 79 00         FMUL double ptr [0x0079df60]
006E2B0A  DE E9                     FSUBP
006E2B0C  D9 58 04                  FSTP float ptr [EAX + 0x4]
LAB_006e2b0f:
006E2B0F  D9 C9                     FXCH
006E2B11  DC 0D 60 DF 79 00         FMUL double ptr [0x0079df60]
006E2B17  D9 C9                     FXCH
006E2B19  DC 0D 60 DF 79 00         FMUL double ptr [0x0079df60]
006E2B1F  DE E9                     FSUBP
006E2B21  D9 58 08                  FSTP float ptr [EAX + 0x8]
006E2B24  8B E5                     MOV ESP,EBP
006E2B26  5D                        POP EBP
006E2B27  C2 10 00                  RET 0x10
switchD_006e2a37::default:
006E2B2A  A1 7C D7 7E 00            MOV EAX,[0x007ed77c]
006E2B2F  68 F1 0B 00 00            PUSH 0xbf1
006E2B34  68 58 E7 7E 00            PUSH 0x7ee758
006E2B39  50                        PUSH EAX
006E2B3A  DD D8                     FSTP ST0
006E2B3C  6A CC                     PUSH -0x34
006E2B3E  DD D8                     FSTP ST0
006E2B40  E8 FB 32 FC FF            CALL 0x006a5e40
006E2B45  8B E5                     MOV ESP,EBP
006E2B47  5D                        POP EBP
006E2B48  C2 10 00                  RET 0x10
