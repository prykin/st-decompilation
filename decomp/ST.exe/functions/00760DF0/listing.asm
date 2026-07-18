FUN_00760df0:
00760DF0  55                        PUSH EBP
00760DF1  8B EC                     MOV EBP,ESP
00760DF3  81 EC 1C 01 00 00         SUB ESP,0x11c
00760DF9  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
00760DFC  8B 4D 0C                  MOV ECX,dword ptr [EBP + 0xc]
00760DFF  53                        PUSH EBX
00760E00  56                        PUSH ESI
00760E01  8B 98 32 01 00 00         MOV EBX,dword ptr [EAX + 0x132]
00760E07  8B 45 10                  MOV EAX,dword ptr [EBP + 0x10]
00760E0A  8B 71 50                  MOV ESI,dword ptr [ECX + 0x50]
00760E0D  57                        PUSH EDI
00760E0E  81 C3 80 00 00 00         ADD EBX,0x80
00760E14  8D 95 E4 FE FF FF         LEA EDX,[EBP + 0xfffffee4]
00760E1A  C7 45 E8 08 00 00 00      MOV dword ptr [EBP + -0x18],0x8
LAB_00760e21:
00760E21  8B 88 E0 00 00 00         MOV ECX,dword ptr [EAX + 0xe0]
00760E27  8B 78 40                  MOV EDI,dword ptr [EAX + 0x40]
00760E2A  89 4D F8                  MOV dword ptr [EBP + -0x8],ECX
00760E2D  8B 88 C0 00 00 00         MOV ECX,dword ptr [EAX + 0xc0]
00760E33  89 4D 10                  MOV dword ptr [EBP + 0x10],ECX
00760E36  8B 88 A0 00 00 00         MOV ECX,dword ptr [EAX + 0xa0]
00760E3C  89 4D FC                  MOV dword ptr [EBP + -0x4],ECX
00760E3F  8B 88 80 00 00 00         MOV ECX,dword ptr [EAX + 0x80]
00760E45  89 4D 08                  MOV dword ptr [EBP + 0x8],ECX
00760E48  8B 48 60                  MOV ECX,dword ptr [EAX + 0x60]
00760E4B  89 4D 0C                  MOV dword ptr [EBP + 0xc],ECX
00760E4E  8B 48 20                  MOV ECX,dword ptr [EAX + 0x20]
00760E51  89 4D E4                  MOV dword ptr [EBP + -0x1c],ECX
00760E54  89 7D EC                  MOV dword ptr [EBP + -0x14],EDI
00760E57  DB 00                     FILD dword ptr [EAX]
00760E59  0B CF                     OR ECX,EDI
00760E5B  8B 7D 0C                  MOV EDI,dword ptr [EBP + 0xc]
00760E5E  0B CF                     OR ECX,EDI
00760E60  8B 7D 08                  MOV EDI,dword ptr [EBP + 0x8]
00760E63  0B CF                     OR ECX,EDI
00760E65  8B 7D FC                  MOV EDI,dword ptr [EBP + -0x4]
00760E68  0B CF                     OR ECX,EDI
00760E6A  8B 7D 10                  MOV EDI,dword ptr [EBP + 0x10]
00760E6D  D8 0E                     FMUL float ptr [ESI]
00760E6F  0B CF                     OR ECX,EDI
00760E71  8B 7D F8                  MOV EDI,dword ptr [EBP + -0x8]
00760E74  0B CF                     OR ECX,EDI
00760E76  75 28                     JNZ 0x00760ea0
00760E78  D9 12                     FST float ptr [EDX]
00760E7A  D9 52 20                  FST float ptr [EDX + 0x20]
00760E7D  D9 52 40                  FST float ptr [EDX + 0x40]
00760E80  D9 52 60                  FST float ptr [EDX + 0x60]
00760E83  D9 92 80 00 00 00         FST float ptr [EDX + 0x80]
00760E89  D9 92 A0 00 00 00         FST float ptr [EDX + 0xa0]
00760E8F  D9 92 C0 00 00 00         FST float ptr [EDX + 0xc0]
00760E95  D9 9A E0 00 00 00         FSTP float ptr [EDX + 0xe0]
00760E9B  E9 41 01 00 00            JMP 0x00760fe1
LAB_00760ea0:
00760EA0  D9 46 40                  FLD float ptr [ESI + 0x40]
00760EA3  DB 45 EC                  FILD dword ptr [EBP + -0x14]
00760EA6  DE C9                     FMULP
00760EA8  D9 5D F0                  FSTP float ptr [EBP + -0x10]
00760EAB  D9 86 80 00 00 00         FLD float ptr [ESI + 0x80]
00760EB1  DB 45 08                  FILD dword ptr [EBP + 0x8]
00760EB4  DE C9                     FMULP
00760EB6  D9 86 C0 00 00 00         FLD float ptr [ESI + 0xc0]
00760EBC  DB 45 10                  FILD dword ptr [EBP + 0x10]
00760EBF  DE C9                     FMULP
00760EC1  D9 5D F4                  FSTP float ptr [EBP + -0xc]
00760EC4  D9 C0                     FLD ST0
00760EC6  D8 C2                     FADD ST0,ST2
00760EC8  D9 5D 10                  FSTP float ptr [EBP + 0x10]
00760ECB  D9 C9                     FXCH
00760ECD  D8 E1                     FSUB ST0,ST1
00760ECF  D9 C9                     FXCH
00760ED1  DD D8                     FSTP ST0
00760ED3  D9 45 F4                  FLD float ptr [EBP + -0xc]
00760ED6  D8 45 F0                  FADD float ptr [EBP + -0x10]
00760ED9  D9 45 F0                  FLD float ptr [EBP + -0x10]
00760EDC  D8 65 F4                  FSUB float ptr [EBP + -0xc]
00760EDF  D8 0D B0 22 7A 00         FMUL float ptr [0x007a22b0]
00760EE5  D8 E1                     FSUB ST0,ST1
00760EE7  D9 5D 08                  FSTP float ptr [EBP + 0x8]
00760EEA  D9 C0                     FLD ST0
00760EEC  D8 45 10                  FADD float ptr [EBP + 0x10]
00760EEF  D9 5D EC                  FSTP float ptr [EBP + -0x14]
00760EF2  D9 45 10                  FLD float ptr [EBP + 0x10]
00760EF5  D8 E1                     FSUB ST0,ST1
00760EF7  D9 5D F4                  FSTP float ptr [EBP + -0xc]
00760EFA  DD D8                     FSTP ST0
00760EFC  D9 45 08                  FLD float ptr [EBP + 0x8]
00760EFF  D8 C1                     FADD ST0,ST1
00760F01  D9 5D F0                  FSTP float ptr [EBP + -0x10]
00760F04  D8 65 08                  FSUB float ptr [EBP + 0x8]
00760F07  D9 46 20                  FLD float ptr [ESI + 0x20]
00760F0A  DB 45 E4                  FILD dword ptr [EBP + -0x1c]
00760F0D  DE C9                     FMULP
00760F0F  D9 46 60                  FLD float ptr [ESI + 0x60]
00760F12  DB 45 0C                  FILD dword ptr [EBP + 0xc]
00760F15  DE C9                     FMULP
00760F17  D9 86 A0 00 00 00         FLD float ptr [ESI + 0xa0]
00760F1D  DB 45 FC                  FILD dword ptr [EBP + -0x4]
00760F20  DE C9                     FMULP
00760F22  D9 86 E0 00 00 00         FLD float ptr [ESI + 0xe0]
00760F28  DB 45 F8                  FILD dword ptr [EBP + -0x8]
00760F2B  DE C9                     FMULP
00760F2D  D9 5D 08                  FSTP float ptr [EBP + 0x8]
00760F30  D9 C0                     FLD ST0
00760F32  D8 C2                     FADD ST0,ST2
00760F34  D9 5D F8                  FSTP float ptr [EBP + -0x8]
00760F37  D8 E1                     FSUB ST0,ST1
00760F39  D9 5D 10                  FSTP float ptr [EBP + 0x10]
00760F3C  DD D8                     FSTP ST0
00760F3E  D9 45 08                  FLD float ptr [EBP + 0x8]
00760F41  D8 C1                     FADD ST0,ST1
00760F43  D9 5D 0C                  FSTP float ptr [EBP + 0xc]
00760F46  D8 65 08                  FSUB float ptr [EBP + 0x8]
00760F49  D9 45 0C                  FLD float ptr [EBP + 0xc]
00760F4C  D8 45 F8                  FADD float ptr [EBP + -0x8]
00760F4F  D9 5D 08                  FSTP float ptr [EBP + 0x8]
00760F52  D9 C0                     FLD ST0
00760F54  D8 45 10                  FADD float ptr [EBP + 0x10]
00760F57  D8 0D AC 22 7A 00         FMUL float ptr [0x007a22ac]
00760F5D  D9 45 10                  FLD float ptr [EBP + 0x10]
00760F60  D8 0D A8 22 7A 00         FMUL float ptr [0x007a22a8]
00760F66  D8 E9                     FSUBR ST0,ST1
00760F68  D8 65 08                  FSUB float ptr [EBP + 0x8]
00760F6B  D9 5D 10                  FSTP float ptr [EBP + 0x10]
00760F6E  D9 45 0C                  FLD float ptr [EBP + 0xc]
00760F71  D8 65 F8                  FSUB float ptr [EBP + -0x8]
00760F74  D8 0D B0 22 7A 00         FMUL float ptr [0x007a22b0]
00760F7A  D8 65 10                  FSUB float ptr [EBP + 0x10]
00760F7D  D9 5D 0C                  FSTP float ptr [EBP + 0xc]
00760F80  D9 C9                     FXCH
00760F82  D8 0D A4 22 7A 00         FMUL float ptr [0x007a22a4]
00760F88  D8 E1                     FSUB ST0,ST1
00760F8A  D8 45 0C                  FADD float ptr [EBP + 0xc]
00760F8D  D9 5D FC                  FSTP float ptr [EBP + -0x4]
00760F90  DD D8                     FSTP ST0
00760F92  D9 45 08                  FLD float ptr [EBP + 0x8]
00760F95  D8 45 EC                  FADD float ptr [EBP + -0x14]
00760F98  D9 1A                     FSTP float ptr [EDX]
00760F9A  D9 45 EC                  FLD float ptr [EBP + -0x14]
00760F9D  D8 65 08                  FSUB float ptr [EBP + 0x8]
00760FA0  D9 9A E0 00 00 00         FSTP float ptr [EDX + 0xe0]
00760FA6  D9 45 10                  FLD float ptr [EBP + 0x10]
00760FA9  D8 45 F0                  FADD float ptr [EBP + -0x10]
00760FAC  D9 5A 20                  FSTP float ptr [EDX + 0x20]
00760FAF  D9 45 F0                  FLD float ptr [EBP + -0x10]
00760FB2  D8 65 10                  FSUB float ptr [EBP + 0x10]
00760FB5  D9 9A C0 00 00 00         FSTP float ptr [EDX + 0xc0]
00760FBB  D9 45 0C                  FLD float ptr [EBP + 0xc]
00760FBE  D8 C1                     FADD ST0,ST1
00760FC0  D9 5A 40                  FSTP float ptr [EDX + 0x40]
00760FC3  D8 65 0C                  FSUB float ptr [EBP + 0xc]
00760FC6  D9 9A A0 00 00 00         FSTP float ptr [EDX + 0xa0]
00760FCC  D9 45 FC                  FLD float ptr [EBP + -0x4]
00760FCF  D8 45 F4                  FADD float ptr [EBP + -0xc]
00760FD2  D9 9A 80 00 00 00         FSTP float ptr [EDX + 0x80]
00760FD8  D9 45 F4                  FLD float ptr [EBP + -0xc]
00760FDB  D8 65 FC                  FSUB float ptr [EBP + -0x4]
00760FDE  D9 5A 60                  FSTP float ptr [EDX + 0x60]
LAB_00760fe1:
00760FE1  8B 4D E8                  MOV ECX,dword ptr [EBP + -0x18]
00760FE4  83 C0 04                  ADD EAX,0x4
00760FE7  83 C6 04                  ADD ESI,0x4
00760FEA  83 C2 04                  ADD EDX,0x4
00760FED  49                        DEC ECX
00760FEE  89 4D E8                  MOV dword ptr [EBP + -0x18],ECX
00760FF1  0F 85 2A FE FF FF         JNZ 0x00760e21
00760FF7  8B 55 14                  MOV EDX,dword ptr [EBP + 0x14]
00760FFA  8D B5 EC FE FF FF         LEA ESI,[EBP + 0xfffffeec]
00761000  89 55 14                  MOV dword ptr [EBP + 0x14],EDX
00761003  C7 45 F0 08 00 00 00      MOV dword ptr [EBP + -0x10],0x8
LAB_0076100a:
0076100A  D9 46 08                  FLD float ptr [ESI + 0x8]
0076100D  D8 46 F8                  FADD float ptr [ESI + -0x8]
00761010  D9 46 F8                  FLD float ptr [ESI + -0x8]
00761013  D8 66 08                  FSUB float ptr [ESI + 0x8]
00761016  8B 45 14                  MOV EAX,dword ptr [EBP + 0x14]
00761019  8B 7D 18                  MOV EDI,dword ptr [EBP + 0x18]
0076101C  8B 08                     MOV ECX,dword ptr [EAX]
0076101E  D9 5D 10                  FSTP float ptr [EBP + 0x10]
00761021  D9 06                     FLD float ptr [ESI]
00761023  D8 46 10                  FADD float ptr [ESI + 0x10]
00761026  D9 06                     FLD float ptr [ESI]
00761028  D8 66 10                  FSUB float ptr [ESI + 0x10]
0076102B  03 F9                     ADD EDI,ECX
0076102D  D8 0D B0 22 7A 00         FMUL float ptr [0x007a22b0]
00761033  D8 E1                     FSUB ST0,ST1
00761035  D9 5D 08                  FSTP float ptr [EBP + 0x8]
00761038  D9 C0                     FLD ST0
0076103A  D8 C2                     FADD ST0,ST2
0076103C  D9 5D EC                  FSTP float ptr [EBP + -0x14]
0076103F  D9 C9                     FXCH
00761041  D8 E1                     FSUB ST0,ST1
00761043  D9 C9                     FXCH
00761045  DD D8                     FSTP ST0
00761047  D9 45 08                  FLD float ptr [EBP + 0x8]
0076104A  D8 45 10                  FADD float ptr [EBP + 0x10]
0076104D  D9 45 10                  FLD float ptr [EBP + 0x10]
00761050  D8 65 08                  FSUB float ptr [EBP + 0x8]
00761053  D9 5D F4                  FSTP float ptr [EBP + -0xc]
00761056  D9 46 0C                  FLD float ptr [ESI + 0xc]
00761059  D8 46 04                  FADD float ptr [ESI + 0x4]
0076105C  D9 46 0C                  FLD float ptr [ESI + 0xc]
0076105F  D8 66 04                  FSUB float ptr [ESI + 0x4]
00761062  D9 46 14                  FLD float ptr [ESI + 0x14]
00761065  D8 46 FC                  FADD float ptr [ESI + -0x4]
00761068  D9 5D 0C                  FSTP float ptr [EBP + 0xc]
0076106B  D9 46 FC                  FLD float ptr [ESI + -0x4]
0076106E  D8 66 14                  FSUB float ptr [ESI + 0x14]
00761071  D9 5D E8                  FSTP float ptr [EBP + -0x18]
00761074  D9 45 0C                  FLD float ptr [EBP + 0xc]
00761077  D8 C2                     FADD ST0,ST2
00761079  D9 5D 08                  FSTP float ptr [EBP + 0x8]
0076107C  D9 45 E8                  FLD float ptr [EBP + -0x18]
0076107F  D8 C1                     FADD ST0,ST1
00761081  D8 0D AC 22 7A 00         FMUL float ptr [0x007a22ac]
00761087  D9 5D F8                  FSTP float ptr [EBP + -0x8]
0076108A  D8 0D A8 22 7A 00         FMUL float ptr [0x007a22a8]
00761090  D8 6D F8                  FSUBR float ptr [EBP + -0x8]
00761093  D8 65 08                  FSUB float ptr [EBP + 0x8]
00761096  D9 5D 10                  FSTP float ptr [EBP + 0x10]
00761099  D9 45 0C                  FLD float ptr [EBP + 0xc]
0076109C  D8 E1                     FSUB ST0,ST1
0076109E  D8 0D B0 22 7A 00         FMUL float ptr [0x007a22b0]
007610A4  D8 65 10                  FSUB float ptr [EBP + 0x10]
007610A7  D9 5D 0C                  FSTP float ptr [EBP + 0xc]
007610AA  DD D8                     FSTP ST0
007610AC  D9 45 E8                  FLD float ptr [EBP + -0x18]
007610AF  D8 0D A4 22 7A 00         FMUL float ptr [0x007a22a4]
007610B5  D8 65 F8                  FSUB float ptr [EBP + -0x8]
007610B8  D8 45 0C                  FADD float ptr [EBP + 0xc]
007610BB  D9 5D FC                  FSTP float ptr [EBP + -0x4]
007610BE  D9 45 08                  FLD float ptr [EBP + 0x8]
007610C1  D8 45 EC                  FADD float ptr [EBP + -0x14]
007610C4  E8 BF D1 FC FF            CALL 0x0072e288
007610C9  D9 45 EC                  FLD float ptr [EBP + -0x14]
007610CC  D8 65 08                  FSUB float ptr [EBP + 0x8]
007610CF  83 C0 04                  ADD EAX,0x4
007610D2  C1 F8 03                  SAR EAX,0x3
007610D5  25 FF 03 00 00            AND EAX,0x3ff
007610DA  8A 0C 18                  MOV CL,byte ptr [EAX + EBX*0x1]
007610DD  88 0F                     MOV byte ptr [EDI],CL
007610DF  E8 A4 D1 FC FF            CALL 0x0072e288
007610E4  83 C0 04                  ADD EAX,0x4
007610E7  C1 F8 03                  SAR EAX,0x3
007610EA  25 FF 03 00 00            AND EAX,0x3ff
007610EF  8A 14 18                  MOV DL,byte ptr [EAX + EBX*0x1]
007610F2  D9 45 10                  FLD float ptr [EBP + 0x10]
007610F5  D8 C1                     FADD ST0,ST1
007610F7  88 57 07                  MOV byte ptr [EDI + 0x7],DL
007610FA  E8 89 D1 FC FF            CALL 0x0072e288
007610FF  D8 65 10                  FSUB float ptr [EBP + 0x10]
00761102  83 C0 04                  ADD EAX,0x4
00761105  C1 F8 03                  SAR EAX,0x3
00761108  25 FF 03 00 00            AND EAX,0x3ff
0076110D  8A 04 18                  MOV AL,byte ptr [EAX + EBX*0x1]
00761110  88 47 01                  MOV byte ptr [EDI + 0x1],AL
00761113  E8 70 D1 FC FF            CALL 0x0072e288
00761118  D9 45 0C                  FLD float ptr [EBP + 0xc]
0076111B  D8 45 F4                  FADD float ptr [EBP + -0xc]
0076111E  83 C0 04                  ADD EAX,0x4
00761121  C1 F8 03                  SAR EAX,0x3
00761124  25 FF 03 00 00            AND EAX,0x3ff
00761129  8A 0C 18                  MOV CL,byte ptr [EAX + EBX*0x1]
0076112C  88 4F 06                  MOV byte ptr [EDI + 0x6],CL
0076112F  E8 54 D1 FC FF            CALL 0x0072e288
00761134  D9 45 F4                  FLD float ptr [EBP + -0xc]
00761137  D8 65 0C                  FSUB float ptr [EBP + 0xc]
0076113A  83 C0 04                  ADD EAX,0x4
0076113D  C1 F8 03                  SAR EAX,0x3
00761140  25 FF 03 00 00            AND EAX,0x3ff
00761145  8A 14 18                  MOV DL,byte ptr [EAX + EBX*0x1]
00761148  88 57 02                  MOV byte ptr [EDI + 0x2],DL
0076114B  E8 38 D1 FC FF            CALL 0x0072e288
00761150  D9 45 FC                  FLD float ptr [EBP + -0x4]
00761153  83 C0 04                  ADD EAX,0x4
00761156  C1 F8 03                  SAR EAX,0x3
00761159  25 FF 03 00 00            AND EAX,0x3ff
0076115E  D8 C1                     FADD ST0,ST1
00761160  8A 04 18                  MOV AL,byte ptr [EAX + EBX*0x1]
00761163  88 47 05                  MOV byte ptr [EDI + 0x5],AL
00761166  E8 1D D1 FC FF            CALL 0x0072e288
0076116B  D8 65 FC                  FSUB float ptr [EBP + -0x4]
0076116E  83 C0 04                  ADD EAX,0x4
00761171  C1 F8 03                  SAR EAX,0x3
00761174  25 FF 03 00 00            AND EAX,0x3ff
00761179  8A 0C 18                  MOV CL,byte ptr [EAX + EBX*0x1]
0076117C  88 4F 04                  MOV byte ptr [EDI + 0x4],CL
0076117F  E8 04 D1 FC FF            CALL 0x0072e288
00761184  8B 4D 14                  MOV ECX,dword ptr [EBP + 0x14]
00761187  83 C0 04                  ADD EAX,0x4
0076118A  C1 F8 03                  SAR EAX,0x3
0076118D  25 FF 03 00 00            AND EAX,0x3ff
00761192  83 C6 20                  ADD ESI,0x20
00761195  83 C1 04                  ADD ECX,0x4
00761198  8A 14 18                  MOV DL,byte ptr [EAX + EBX*0x1]
0076119B  8B 45 F0                  MOV EAX,dword ptr [EBP + -0x10]
0076119E  48                        DEC EAX
0076119F  88 57 03                  MOV byte ptr [EDI + 0x3],DL
007611A2  89 4D 14                  MOV dword ptr [EBP + 0x14],ECX
007611A5  89 45 F0                  MOV dword ptr [EBP + -0x10],EAX
007611A8  0F 85 5C FE FF FF         JNZ 0x0076100a
007611AE  5F                        POP EDI
007611AF  5E                        POP ESI
007611B0  5B                        POP EBX
007611B1  8B E5                     MOV ESP,EBP
007611B3  5D                        POP EBP
007611B4  C2 14 00                  RET 0x14
