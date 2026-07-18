FUN_006dd530:
006DD530  55                        PUSH EBP
006DD531  8B EC                     MOV EBP,ESP
006DD533  DD 81 80 00 00 00         FLD double ptr [ECX + 0x80]
006DD539  8B 45 10                  MOV EAX,dword ptr [EBP + 0x10]
006DD53C  D9 18                     FSTP float ptr [EAX]
006DD53E  DD 81 80 00 00 00         FLD double ptr [ECX + 0x80]
006DD544  DC 0D 60 DF 79 00         FMUL double ptr [0x0079df60]
006DD54A  8B 81 A8 00 00 00         MOV EAX,dword ptr [ECX + 0xa8]
006DD550  24 F7                     AND AL,0xf7
006DD552  83 F8 03                  CMP EAX,0x3
006DD555  D9 5D 10                  FSTP float ptr [EBP + 0x10]
006DD558  0F 87 87 00 00 00         JA 0x006dd5e5
switchD_006dd55e::switchD:
006DD55E  FF 24 85 00 D6 6D 00      JMP dword ptr [EAX*0x4 + 0x6dd600]
switchD_006dd55e::caseD_0:
006DD565  D9 45 10                  FLD float ptr [EBP + 0x10]
006DD568  DC 81 98 00 00 00         FADD double ptr [ECX + 0x98]
006DD56E  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
006DD571  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
006DD574  D9 1A                     FSTP float ptr [EDX]
006DD576  D9 45 10                  FLD float ptr [EBP + 0x10]
006DD579  DC 81 A0 00 00 00         FADD double ptr [ECX + 0xa0]
006DD57F  D9 18                     FSTP float ptr [EAX]
006DD581  5D                        POP EBP
006DD582  C2 0C 00                  RET 0xc
switchD_006dd55e::caseD_1:
006DD585  D9 45 10                  FLD float ptr [EBP + 0x10]
006DD588  DC A9 98 00 00 00         FSUBR double ptr [ECX + 0x98]
006DD58E  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
006DD591  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
006DD594  D9 1A                     FSTP float ptr [EDX]
006DD596  D9 45 10                  FLD float ptr [EBP + 0x10]
006DD599  DC 81 A0 00 00 00         FADD double ptr [ECX + 0xa0]
006DD59F  D9 18                     FSTP float ptr [EAX]
006DD5A1  5D                        POP EBP
006DD5A2  C2 0C 00                  RET 0xc
switchD_006dd55e::caseD_2:
006DD5A5  D9 45 10                  FLD float ptr [EBP + 0x10]
006DD5A8  DC A9 98 00 00 00         FSUBR double ptr [ECX + 0x98]
006DD5AE  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
006DD5B1  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
006DD5B4  D9 1A                     FSTP float ptr [EDX]
006DD5B6  D9 45 10                  FLD float ptr [EBP + 0x10]
006DD5B9  DC A9 A0 00 00 00         FSUBR double ptr [ECX + 0xa0]
006DD5BF  D9 18                     FSTP float ptr [EAX]
006DD5C1  5D                        POP EBP
006DD5C2  C2 0C 00                  RET 0xc
switchD_006dd55e::caseD_3:
006DD5C5  D9 45 10                  FLD float ptr [EBP + 0x10]
006DD5C8  DC 81 98 00 00 00         FADD double ptr [ECX + 0x98]
006DD5CE  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
006DD5D1  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
006DD5D4  D9 1A                     FSTP float ptr [EDX]
006DD5D6  D9 45 10                  FLD float ptr [EBP + 0x10]
006DD5D9  DC A9 A0 00 00 00         FSUBR double ptr [ECX + 0xa0]
006DD5DF  D9 18                     FSTP float ptr [EAX]
006DD5E1  5D                        POP EBP
006DD5E2  C2 0C 00                  RET 0xc
switchD_006dd55e::default:
006DD5E5  DD 81 98 00 00 00         FLD double ptr [ECX + 0x98]
006DD5EB  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
006DD5EE  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
006DD5F1  D9 1A                     FSTP float ptr [EDX]
006DD5F3  DD 81 A0 00 00 00         FLD double ptr [ECX + 0xa0]
006DD5F9  D9 18                     FSTP float ptr [EAX]
006DD5FB  5D                        POP EBP
006DD5FC  C2 0C 00                  RET 0xc
