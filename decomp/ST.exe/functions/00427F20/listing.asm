FUN_00427f20:
00427F20  55                        PUSH EBP
00427F21  8B EC                     MOV EBP,ESP
00427F23  6A FF                     PUSH -0x1
00427F25  68 50 05 79 00            PUSH 0x790550
00427F2A  68 64 D9 72 00            PUSH 0x72d964
00427F2F  64 A1 00 00 00 00         MOV EAX,FS:[0x0]
00427F35  50                        PUSH EAX
00427F36  64 89 25 00 00 00 00      MOV dword ptr FS:[0x0],ESP
00427F3D  81 EC A4 00 00 00         SUB ESP,0xa4
00427F43  53                        PUSH EBX
00427F44  56                        PUSH ESI
00427F45  57                        PUSH EDI
00427F46  89 65 E8                  MOV dword ptr [EBP + -0x18],ESP
00427F49  8B F1                     MOV ESI,ECX
00427F4B  89 B5 6C FF FF FF         MOV dword ptr [EBP + 0xffffff6c],ESI
00427F51  33 C0                     XOR EAX,EAX
00427F53  89 45 D4                  MOV dword ptr [EBP + -0x2c],EAX
00427F56  A3 84 4D 7F 00            MOV [0x007f4d84],EAX
00427F5B  A3 78 4D 7F 00            MOV [0x007f4d78],EAX
00427F60  A3 6C 4D 7F 00            MOV [0x007f4d6c],EAX
00427F65  8B 7D 14                  MOV EDI,dword ptr [EBP + 0x14]
00427F68  3B F8                     CMP EDI,EAX
00427F6A  0F 8E 60 07 00 00         JLE 0x004286d0
00427F70  8B 45 18                  MOV EAX,dword ptr [EBP + 0x18]
00427F73  85 C0                     TEST EAX,EAX
00427F75  7D 05                     JGE 0x00427f7c
00427F77  33 C0                     XOR EAX,EAX
00427F79  89 45 18                  MOV dword ptr [EBP + 0x18],EAX
LAB_00427f7c:
00427F7C  3B C7                     CMP EAX,EDI
00427F7E  0F 8F 4C 07 00 00         JG 0x004286d0
00427F84  8D 4C 3F 01               LEA ECX,[EDI + EDI*0x1 + 0x1]
00427F88  89 8D 68 FF FF FF         MOV dword ptr [EBP + 0xffffff68],ECX
00427F8E  89 4D 8C                  MOV dword ptr [EBP + -0x74],ECX
00427F91  89 3D 70 4D 7F 00         MOV dword ptr [0x007f4d70],EDI
00427F97  8B CF                     MOV ECX,EDI
00427F99  2B C8                     SUB ECX,EAX
00427F9B  83 F9 64                  CMP ECX,0x64
00427F9E  0F 8C 2C 07 00 00         JL 0x004286d0
00427FA4  DB 45 14                  FILD dword ptr [EBP + 0x14]
00427FA7  DD 95 60 FF FF FF         FST double ptr [EBP + 0xffffff60]
00427FAD  DC 8E 68 03 00 00         FMUL double ptr [ESI + 0x368]
00427FB3  D9 45 08                  FLD float ptr [EBP + 0x8]
00427FB6  D8 E1                     FSUB ST0,ST1
00427FB8  D9 5D A4                  FSTP float ptr [EBP + -0x5c]
00427FBB  D9 45 0C                  FLD float ptr [EBP + 0xc]
00427FBE  D8 E1                     FSUB ST0,ST1
00427FC0  D9 5D A8                  FSTP float ptr [EBP + -0x58]
00427FC3  DD D8                     FSTP ST0
00427FC5  C7 45 AC 00 00 00 00      MOV dword ptr [EBP + -0x54],0x0
00427FCC  6A 01                     PUSH 0x1
00427FCE  6A 00                     PUSH 0x0
00427FD0  6A 00                     PUSH 0x0
00427FD2  6A 00                     PUSH 0x0
00427FD4  6A 00                     PUSH 0x0
00427FD6  6A 00                     PUSH 0x0
00427FD8  6A 00                     PUSH 0x0
00427FDA  8D 55 A4                  LEA EDX,[EBP + -0x5c]
00427FDD  52                        PUSH EDX
00427FDE  8D 45 B0                  LEA EAX,[EBP + -0x50]
00427FE1  50                        PUSH EAX
00427FE2  8B CE                     MOV ECX,ESI
00427FE4  E8 E7 A5 2B 00            CALL 0x006e25d0
00427FE9  83 F8 01                  CMP EAX,0x1
00427FEC  0F 84 91 01 00 00         JZ 0x00428183
00427FF2  DB 45 8C                  FILD dword ptr [EBP + -0x74]
00427FF5  DD 95 58 FF FF FF         FST double ptr [EBP + 0xffffff58]
00427FFB  DC 8E 68 03 00 00         FMUL double ptr [ESI + 0x368]
00428001  D8 45 A4                  FADD float ptr [EBP + -0x5c]
00428004  D9 5D A4                  FSTP float ptr [EBP + -0x5c]
00428007  6A 01                     PUSH 0x1
00428009  6A 00                     PUSH 0x0
0042800B  6A 00                     PUSH 0x0
0042800D  6A 00                     PUSH 0x0
0042800F  6A 00                     PUSH 0x0
00428011  6A 00                     PUSH 0x0
00428013  6A 00                     PUSH 0x0
00428015  8D 4D A4                  LEA ECX,[EBP + -0x5c]
00428018  51                        PUSH ECX
00428019  8D 55 B0                  LEA EDX,[EBP + -0x50]
0042801C  52                        PUSH EDX
0042801D  8B CE                     MOV ECX,ESI
0042801F  E8 AC A5 2B 00            CALL 0x006e25d0
00428024  83 F8 01                  CMP EAX,0x1
00428027  0F 84 56 01 00 00         JZ 0x00428183
0042802D  DD 85 58 FF FF FF         FLD double ptr [EBP + 0xffffff58]
00428033  DC 8E 68 03 00 00         FMUL double ptr [ESI + 0x368]
00428039  D8 45 A8                  FADD float ptr [EBP + -0x58]
0042803C  D9 5D A8                  FSTP float ptr [EBP + -0x58]
0042803F  6A 01                     PUSH 0x1
00428041  6A 00                     PUSH 0x0
00428043  6A 00                     PUSH 0x0
00428045  6A 00                     PUSH 0x0
00428047  6A 00                     PUSH 0x0
00428049  6A 00                     PUSH 0x0
0042804B  6A 00                     PUSH 0x0
0042804D  8D 45 A4                  LEA EAX,[EBP + -0x5c]
00428050  50                        PUSH EAX
00428051  8D 4D B0                  LEA ECX,[EBP + -0x50]
00428054  51                        PUSH ECX
00428055  8B CE                     MOV ECX,ESI
00428057  E8 74 A5 2B 00            CALL 0x006e25d0
0042805C  83 F8 01                  CMP EAX,0x1
0042805F  0F 84 1E 01 00 00         JZ 0x00428183
00428065  D9 45 08                  FLD float ptr [EBP + 0x8]
00428068  DD 85 60 FF FF FF         FLD double ptr [EBP + 0xffffff60]
0042806E  DC 8E 68 03 00 00         FMUL double ptr [ESI + 0x368]
00428074  DE E9                     FSUBP
00428076  D9 5D A4                  FSTP float ptr [EBP + -0x5c]
00428079  6A 01                     PUSH 0x1
0042807B  6A 00                     PUSH 0x0
0042807D  6A 00                     PUSH 0x0
0042807F  6A 00                     PUSH 0x0
00428081  6A 00                     PUSH 0x0
00428083  6A 00                     PUSH 0x0
00428085  6A 00                     PUSH 0x0
00428087  8D 55 A4                  LEA EDX,[EBP + -0x5c]
0042808A  52                        PUSH EDX
0042808B  8D 45 B0                  LEA EAX,[EBP + -0x50]
0042808E  50                        PUSH EAX
0042808F  8B CE                     MOV ECX,ESI
00428091  E8 3A A5 2B 00            CALL 0x006e25d0
00428096  83 F8 01                  CMP EAX,0x1
00428099  0F 84 E4 00 00 00         JZ 0x00428183
0042809F  DD 85 60 FF FF FF         FLD double ptr [EBP + 0xffffff60]
004280A5  DC 8E 68 03 00 00         FMUL double ptr [ESI + 0x368]
004280AB  D9 45 08                  FLD float ptr [EBP + 0x8]
004280AE  D8 E1                     FSUB ST0,ST1
004280B0  D9 5D A4                  FSTP float ptr [EBP + -0x5c]
004280B3  D9 45 0C                  FLD float ptr [EBP + 0xc]
004280B6  D8 E1                     FSUB ST0,ST1
004280B8  D9 5D A8                  FSTP float ptr [EBP + -0x58]
004280BB  DD D8                     FSTP ST0
004280BD  C7 45 AC EB 51 47 42      MOV dword ptr [EBP + -0x54],0x424751eb
004280C4  6A 01                     PUSH 0x1
004280C6  6A 00                     PUSH 0x0
004280C8  6A 00                     PUSH 0x0
004280CA  6A 00                     PUSH 0x0
004280CC  6A 00                     PUSH 0x0
004280CE  6A 00                     PUSH 0x0
004280D0  6A 00                     PUSH 0x0
004280D2  8D 4D A4                  LEA ECX,[EBP + -0x5c]
004280D5  51                        PUSH ECX
004280D6  8D 55 B0                  LEA EDX,[EBP + -0x50]
004280D9  52                        PUSH EDX
004280DA  8B CE                     MOV ECX,ESI
004280DC  E8 EF A4 2B 00            CALL 0x006e25d0
004280E1  83 F8 01                  CMP EAX,0x1
004280E4  0F 84 99 00 00 00         JZ 0x00428183
004280EA  DD 85 58 FF FF FF         FLD double ptr [EBP + 0xffffff58]
004280F0  DC 8E 68 03 00 00         FMUL double ptr [ESI + 0x368]
004280F6  D8 45 A4                  FADD float ptr [EBP + -0x5c]
004280F9  D9 5D A4                  FSTP float ptr [EBP + -0x5c]
004280FC  6A 01                     PUSH 0x1
004280FE  6A 00                     PUSH 0x0
00428100  6A 00                     PUSH 0x0
00428102  6A 00                     PUSH 0x0
00428104  6A 00                     PUSH 0x0
00428106  6A 00                     PUSH 0x0
00428108  6A 00                     PUSH 0x0
0042810A  8D 45 A4                  LEA EAX,[EBP + -0x5c]
0042810D  50                        PUSH EAX
0042810E  8D 4D B0                  LEA ECX,[EBP + -0x50]
00428111  51                        PUSH ECX
00428112  8B CE                     MOV ECX,ESI
00428114  E8 B7 A4 2B 00            CALL 0x006e25d0
00428119  83 F8 01                  CMP EAX,0x1
0042811C  74 65                     JZ 0x00428183
0042811E  DD 85 58 FF FF FF         FLD double ptr [EBP + 0xffffff58]
00428124  DC 8E 68 03 00 00         FMUL double ptr [ESI + 0x368]
0042812A  D8 45 A8                  FADD float ptr [EBP + -0x58]
0042812D  D9 5D A8                  FSTP float ptr [EBP + -0x58]
00428130  6A 01                     PUSH 0x1
00428132  6A 00                     PUSH 0x0
00428134  6A 00                     PUSH 0x0
00428136  6A 00                     PUSH 0x0
00428138  6A 00                     PUSH 0x0
0042813A  6A 00                     PUSH 0x0
0042813C  6A 00                     PUSH 0x0
0042813E  8D 55 A4                  LEA EDX,[EBP + -0x5c]
00428141  52                        PUSH EDX
00428142  8D 45 B0                  LEA EAX,[EBP + -0x50]
00428145  50                        PUSH EAX
00428146  8B CE                     MOV ECX,ESI
00428148  E8 83 A4 2B 00            CALL 0x006e25d0
0042814D  83 F8 01                  CMP EAX,0x1
00428150  74 31                     JZ 0x00428183
00428152  D9 45 08                  FLD float ptr [EBP + 0x8]
00428155  DD 85 60 FF FF FF         FLD double ptr [EBP + 0xffffff60]
0042815B  DC 8E 68 03 00 00         FMUL double ptr [ESI + 0x368]
00428161  DE E9                     FSUBP
00428163  D9 5D A4                  FSTP float ptr [EBP + -0x5c]
00428166  6A 01                     PUSH 0x1
00428168  6A 00                     PUSH 0x0
0042816A  6A 00                     PUSH 0x0
0042816C  6A 00                     PUSH 0x0
0042816E  6A 00                     PUSH 0x0
00428170  6A 00                     PUSH 0x0
00428172  6A 00                     PUSH 0x0
00428174  8D 4D A4                  LEA ECX,[EBP + -0x5c]
00428177  51                        PUSH ECX
00428178  8D 55 B0                  LEA EDX,[EBP + -0x50]
0042817B  52                        PUSH EDX
0042817C  8B CE                     MOV ECX,ESI
0042817E  E8 4D A4 2B 00            CALL 0x006e25d0
LAB_00428183:
00428183  85 C0                     TEST EAX,EAX
00428185  0F 84 45 05 00 00         JZ 0x004286d0
0042818B  D9 45 08                  FLD float ptr [EBP + 0x8]
0042818E  DC B6 68 03 00 00         FDIV double ptr [ESI + 0x368]
00428194  83 EC 08                  SUB ESP,0x8
00428197  DD 1C 24                  FSTP double ptr [ESP]
0042819A  E8 B1 5F 30 00            CALL 0x0072e150
0042819F  83 C4 08                  ADD ESP,0x8
004281A2  DA A6 74 03 00 00         FISUB dword ptr [ESI + 0x374]
004281A8  E8 DB 60 30 00            CALL 0x0072e288
004281AD  A3 7C 4D 7F 00            MOV [0x007f4d7c],EAX
004281B2  8B DF                     MOV EBX,EDI
004281B4  F7 DB                     NEG EBX
004281B6  89 5D D8                  MOV dword ptr [EBP + -0x28],EBX
004281B9  89 7D D0                  MOV dword ptr [EBP + -0x30],EDI
004281BC  8B 8E 70 03 00 00         MOV ECX,dword ptr [ESI + 0x370]
004281C2  8D 14 38                  LEA EDX,[EAX + EDI*0x1]
004281C5  3B D1                     CMP EDX,ECX
004281C7  7C 06                     JL 0x004281cf
004281C9  2B C8                     SUB ECX,EAX
004281CB  49                        DEC ECX
004281CC  89 4D D0                  MOV dword ptr [EBP + -0x30],ECX
LAB_004281cf:
004281CF  8B 4D D8                  MOV ECX,dword ptr [EBP + -0x28]
004281D2  8D 14 08                  LEA EDX,[EAX + ECX*0x1]
004281D5  85 D2                     TEST EDX,EDX
004281D7  7D 05                     JGE 0x004281de
004281D9  F7 D8                     NEG EAX
004281DB  89 45 D8                  MOV dword ptr [EBP + -0x28],EAX
LAB_004281de:
004281DE  D9 45 0C                  FLD float ptr [EBP + 0xc]
004281E1  DC B6 68 03 00 00         FDIV double ptr [ESI + 0x368]
004281E7  83 EC 08                  SUB ESP,0x8
004281EA  DD 1C 24                  FSTP double ptr [ESP]
004281ED  E8 5E 5F 30 00            CALL 0x0072e150
004281F2  83 C4 08                  ADD ESP,0x8
004281F5  DA A6 78 03 00 00         FISUB dword ptr [ESI + 0x378]
004281FB  E8 88 60 30 00            CALL 0x0072e288
00428200  A3 80 4D 7F 00            MOV [0x007f4d80],EAX
00428205  89 5D A0                  MOV dword ptr [EBP + -0x60],EBX
00428208  8B CF                     MOV ECX,EDI
0042820A  89 4D 94                  MOV dword ptr [EBP + -0x6c],ECX
0042820D  8B B6 70 03 00 00         MOV ESI,dword ptr [ESI + 0x370]
00428213  8D 14 38                  LEA EDX,[EAX + EDI*0x1]
00428216  3B D6                     CMP EDX,ESI
00428218  7C 08                     JL 0x00428222
0042821A  2B F0                     SUB ESI,EAX
0042821C  4E                        DEC ESI
0042821D  8B CE                     MOV ECX,ESI
0042821F  89 4D 94                  MOV dword ptr [EBP + -0x6c],ECX
LAB_00428222:
00428222  8D 14 18                  LEA EDX,[EAX + EBX*0x1]
00428225  85 D2                     TEST EDX,EDX
00428227  7D 07                     JGE 0x00428230
00428229  F7 D8                     NEG EAX
0042822B  8B D8                     MOV EBX,EAX
0042822D  89 5D A0                  MOV dword ptr [EBP + -0x60],EBX
LAB_00428230:
00428230  8B 45 D0                  MOV EAX,dword ptr [EBP + -0x30]
00428233  2B 45 D8                  SUB EAX,dword ptr [EBP + -0x28]
00428236  85 C0                     TEST EAX,EAX
00428238  0F 8E 92 04 00 00         JLE 0x004286d0
0042823E  2B CB                     SUB ECX,EBX
00428240  85 C9                     TEST ECX,ECX
00428242  0F 8E 88 04 00 00         JLE 0x004286d0
00428248  D9 45 10                  FLD float ptr [EBP + 0x10]
0042824B  D8 0D 38 05 79 00         FMUL float ptr [0x00790538]
00428251  83 EC 08                  SUB ESP,0x8
00428254  DD 1C 24                  FSTP double ptr [ESP]
00428257  E8 F4 5E 30 00            CALL 0x0072e150
0042825C  DD D8                     FSTP ST0
0042825E  83 C4 08                  ADD ESP,0x8
00428261  9B                        WAIT
00428262  C7 45 FC 00 00 00 00      MOV dword ptr [EBP + -0x4],0x0
00428269  8D 77 01                  LEA ESI,[EDI + 0x1]
0042826C  C1 E6 04                  SHL ESI,0x4
0042826F  8B C6                     MOV EAX,ESI
00428271  83 C0 03                  ADD EAX,0x3
00428274  24 FC                     AND AL,0xfc
00428276  E8 C5 57 30 00            CALL 0x0072da40
0042827B  89 65 E8                  MOV dword ptr [EBP + -0x18],ESP
0042827E  8B C4                     MOV EAX,ESP
00428280  89 45 CC                  MOV dword ptr [EBP + -0x34],EAX
00428283  8B 85 68 FF FF FF         MOV EAX,dword ptr [EBP + 0xffffff68]
00428289  C1 E0 04                  SHL EAX,0x4
0042828C  83 C0 03                  ADD EAX,0x3
0042828F  24 FC                     AND AL,0xfc
00428291  E8 AA 57 30 00            CALL 0x0072da40
00428296  89 65 E8                  MOV dword ptr [EBP + -0x18],ESP
00428299  8B C4                     MOV EAX,ESP
0042829B  A3 74 4D 7F 00            MOV [0x007f4d74],EAX
004282A0  9B                        WAIT
004282A1  C7 45 FC FF FF FF FF      MOV dword ptr [EBP + -0x4],0xffffffff
004282A8  8B 55 14                  MOV EDX,dword ptr [EBP + 0x14]
004282AB  8B DA                     MOV EBX,EDX
004282AD  C1 E3 04                  SHL EBX,0x4
004282B0  8B FC                     MOV EDI,ESP
004282B2  03 FB                     ADD EDI,EBX
004282B4  89 3D 74 4D 7F 00         MOV dword ptr [0x007f4d74],EDI
004282BA  8B CE                     MOV ECX,ESI
004282BC  33 C0                     XOR EAX,EAX
004282BE  8B 7D CC                  MOV EDI,dword ptr [EBP + -0x34]
004282C1  C1 E9 02                  SHR ECX,0x2
004282C4  F3 AB                     STOSD.REP ES:EDI
004282C6  8B CE                     MOV ECX,ESI
004282C8  83 E1 03                  AND ECX,0x3
004282CB  F3 AA                     STOSB.REP ES:EDI
004282CD  8B 45 CC                  MOV EAX,dword ptr [EBP + -0x34]
004282D0  89 10                     MOV dword ptr [EAX],EDX
004282D2  8B 4D 18                  MOV ECX,dword ptr [EBP + 0x18]
004282D5  89 48 04                  MOV dword ptr [EAX + 0x4],ECX
004282D8  8B FA                     MOV EDI,EDX
004282DA  0F AF FA                  IMUL EDI,EDX
004282DD  8D 34 3F                  LEA ESI,[EDI + EDI*0x1]
004282E0  C7 45 C0 00 00 00 00      MOV dword ptr [EBP + -0x40],0x0
004282E7  89 55 98                  MOV dword ptr [EBP + -0x68],EDX
004282EA  B9 01 00 00 00            MOV ECX,0x1
004282EF  2B CA                     SUB ECX,EDX
004282F1  0F AF CF                  IMUL ECX,EDI
004282F4  8B C7                     MOV EAX,EDI
004282F6  99                        CDQ
004282F7  83 E2 03                  AND EDX,0x3
004282FA  03 C2                     ADD EAX,EDX
004282FC  C1 F8 02                  SAR EAX,0x2
004282FF  03 C8                     ADD ECX,EAX
00428301  C7 85 78 FF FF FF 00 00 00 00  MOV dword ptr [EBP + 0xffffff78],0x0
0042830B  0F AF 75 14               IMUL ESI,dword ptr [EBP + 0x14]
0042830F  85 F6                     TEST ESI,ESI
00428311  7E 38                     JLE 0x0042834b
00428313  8B 55 CC                  MOV EDX,dword ptr [EBP + -0x34]
00428316  03 DA                     ADD EBX,EDX
LAB_00428318:
00428318  85 C9                     TEST ECX,ECX
0042831A  7E 12                     JLE 0x0042832e
0042831C  8B 45 C0                  MOV EAX,dword ptr [EBP + -0x40]
0042831F  89 03                     MOV dword ptr [EBX],EAX
00428321  FF 4D 98                  DEC dword ptr [EBP + -0x68]
00428324  83 EB 10                  SUB EBX,0x10
00428327  8D 04 3F                  LEA EAX,[EDI + EDI*0x1]
0042832A  2B F0                     SUB ESI,EAX
0042832C  2B CE                     SUB ECX,ESI
LAB_0042832e:
0042832E  FF 45 C0                  INC dword ptr [EBP + -0x40]
00428331  8D 14 3F                  LEA EDX,[EDI + EDI*0x1]
00428334  8B 85 78 FF FF FF         MOV EAX,dword ptr [EBP + 0xffffff78]
0042833A  03 C2                     ADD EAX,EDX
0042833C  89 85 78 FF FF FF         MOV dword ptr [EBP + 0xffffff78],EAX
00428342  8D 14 38                  LEA EDX,[EAX + EDI*0x1]
00428345  03 CA                     ADD ECX,EDX
00428347  3B C6                     CMP EAX,ESI
00428349  7C CD                     JL 0x00428318
LAB_0042834b:
0042834B  8B 85 78 FF FF FF         MOV EAX,dword ptr [EBP + 0xffffff78]
00428351  03 C6                     ADD EAX,ESI
00428353  99                        CDQ
00428354  2B C2                     SUB EAX,EDX
00428356  D1 F8                     SAR EAX,0x1
00428358  F7 D8                     NEG EAX
0042835A  03 C8                     ADD ECX,EAX
0042835C  8B 55 98                  MOV EDX,dword ptr [EBP + -0x68]
0042835F  85 D2                     TEST EDX,EDX
00428361  7C 46                     JL 0x004283a9
00428363  8B C2                     MOV EAX,EDX
00428365  C1 E0 04                  SHL EAX,0x4
00428368  03 45 CC                  ADD EAX,dword ptr [EBP + -0x34]
0042836B  42                        INC EDX
0042836C  89 95 54 FF FF FF         MOV dword ptr [EBP + 0xffffff54],EDX
00428372  8B 5D C0                  MOV EBX,dword ptr [EBP + -0x40]
LAB_00428375:
00428375  89 18                     MOV dword ptr [EAX],EBX
00428377  83 E8 10                  SUB EAX,0x10
0042837A  85 C9                     TEST ECX,ECX
0042837C  7D 18                     JGE 0x00428396
0042837E  43                        INC EBX
0042837F  8D 14 3F                  LEA EDX,[EDI + EDI*0x1]
00428382  89 55 88                  MOV dword ptr [EBP + -0x78],EDX
00428385  8B 95 78 FF FF FF         MOV EDX,dword ptr [EBP + 0xffffff78]
0042838B  03 55 88                  ADD EDX,dword ptr [EBP + -0x78]
0042838E  89 95 78 FF FF FF         MOV dword ptr [EBP + 0xffffff78],EDX
00428394  03 CA                     ADD ECX,EDX
LAB_00428396:
00428396  8D 14 3F                  LEA EDX,[EDI + EDI*0x1]
00428399  2B F2                     SUB ESI,EDX
0042839B  8B D7                     MOV EDX,EDI
0042839D  2B D6                     SUB EDX,ESI
0042839F  03 CA                     ADD ECX,EDX
004283A1  FF 8D 54 FF FF FF         DEC dword ptr [EBP + 0xffffff54]
004283A7  75 CC                     JNZ 0x00428375
LAB_004283a9:
004283A9  8B 45 18                  MOV EAX,dword ptr [EBP + 0x18]
004283AC  85 C0                     TEST EAX,EAX
004283AE  0F 8E E7 00 00 00         JLE 0x0042849b
004283B4  8B F8                     MOV EDI,EAX
004283B6  0F AF F8                  IMUL EDI,EAX
004283B9  8D 1C 3F                  LEA EBX,[EDI + EDI*0x1]
004283BC  33 F6                     XOR ESI,ESI
004283BE  89 75 C0                  MOV dword ptr [EBP + -0x40],ESI
004283C1  89 45 98                  MOV dword ptr [EBP + -0x68],EAX
004283C4  B9 01 00 00 00            MOV ECX,0x1
004283C9  2B C8                     SUB ECX,EAX
004283CB  0F AF CF                  IMUL ECX,EDI
004283CE  8B C7                     MOV EAX,EDI
004283D0  99                        CDQ
004283D1  83 E2 03                  AND EDX,0x3
004283D4  03 C2                     ADD EAX,EDX
004283D6  C1 F8 02                  SAR EAX,0x2
004283D9  03 C8                     ADD ECX,EAX
004283DB  89 B5 78 FF FF FF         MOV dword ptr [EBP + 0xffffff78],ESI
004283E1  8B F3                     MOV ESI,EBX
004283E3  0F AF 75 18               IMUL ESI,dword ptr [EBP + 0x18]
004283E7  85 F6                     TEST ESI,ESI
004283E9  7E 52                     JLE 0x0042843d
004283EB  8B 45 18                  MOV EAX,dword ptr [EBP + 0x18]
004283EE  C1 E0 04                  SHL EAX,0x4
004283F1  8B 55 CC                  MOV EDX,dword ptr [EBP + -0x34]
004283F4  8D 44 10 04               LEA EAX,[EAX + EDX*0x1 + 0x4]
004283F8  89 85 50 FF FF FF         MOV dword ptr [EBP + 0xffffff50],EAX
004283FE  8B 85 78 FF FF FF         MOV EAX,dword ptr [EBP + 0xffffff78]
LAB_00428404:
00428404  85 C9                     TEST ECX,ECX
00428406  7E 21                     JLE 0x00428429
00428408  8B 85 50 FF FF FF         MOV EAX,dword ptr [EBP + 0xffffff50]
0042840E  8B 55 C0                  MOV EDX,dword ptr [EBP + -0x40]
00428411  89 10                     MOV dword ptr [EAX],EDX
00428413  FF 4D 98                  DEC dword ptr [EBP + -0x68]
00428416  83 E8 10                  SUB EAX,0x10
00428419  89 85 50 FF FF FF         MOV dword ptr [EBP + 0xffffff50],EAX
0042841F  2B F3                     SUB ESI,EBX
00428421  2B CE                     SUB ECX,ESI
00428423  8B 85 78 FF FF FF         MOV EAX,dword ptr [EBP + 0xffffff78]
LAB_00428429:
00428429  FF 45 C0                  INC dword ptr [EBP + -0x40]
0042842C  03 C3                     ADD EAX,EBX
0042842E  89 85 78 FF FF FF         MOV dword ptr [EBP + 0xffffff78],EAX
00428434  8D 14 38                  LEA EDX,[EAX + EDI*0x1]
00428437  03 CA                     ADD ECX,EDX
00428439  3B C6                     CMP EAX,ESI
0042843B  7C C7                     JL 0x00428404
LAB_0042843d:
0042843D  8B 85 78 FF FF FF         MOV EAX,dword ptr [EBP + 0xffffff78]
00428443  03 C6                     ADD EAX,ESI
00428445  99                        CDQ
00428446  2B C2                     SUB EAX,EDX
00428448  D1 F8                     SAR EAX,0x1
0042844A  F7 D8                     NEG EAX
0042844C  03 C8                     ADD ECX,EAX
0042844E  8B 45 98                  MOV EAX,dword ptr [EBP + -0x68]
00428451  85 C0                     TEST EAX,EAX
00428453  7C 46                     JL 0x0042849b
00428455  8B D0                     MOV EDX,EAX
00428457  C1 E2 04                  SHL EDX,0x4
0042845A  8B 45 CC                  MOV EAX,dword ptr [EBP + -0x34]
0042845D  8D 54 02 04               LEA EDX,[EDX + EAX*0x1 + 0x4]
00428461  8B 45 98                  MOV EAX,dword ptr [EBP + -0x68]
00428464  40                        INC EAX
00428465  89 85 4C FF FF FF         MOV dword ptr [EBP + 0xffffff4c],EAX
LAB_0042846b:
0042846B  8B 45 C0                  MOV EAX,dword ptr [EBP + -0x40]
0042846E  89 02                     MOV dword ptr [EDX],EAX
00428470  83 EA 10                  SUB EDX,0x10
00428473  85 C9                     TEST ECX,ECX
00428475  7D 14                     JGE 0x0042848b
00428477  40                        INC EAX
00428478  89 45 C0                  MOV dword ptr [EBP + -0x40],EAX
0042847B  8B 85 78 FF FF FF         MOV EAX,dword ptr [EBP + 0xffffff78]
00428481  03 C3                     ADD EAX,EBX
00428483  89 85 78 FF FF FF         MOV dword ptr [EBP + 0xffffff78],EAX
00428489  03 C8                     ADD ECX,EAX
LAB_0042848b:
0042848B  2B F3                     SUB ESI,EBX
0042848D  8B C7                     MOV EAX,EDI
0042848F  2B C6                     SUB EAX,ESI
00428491  03 C8                     ADD ECX,EAX
00428493  FF 8D 4C FF FF FF         DEC dword ptr [EBP + 0xffffff4c]
00428499  75 D0                     JNZ 0x0042846b
LAB_0042849b:
0042849B  8B 55 CC                  MOV EDX,dword ptr [EBP + -0x34]
0042849E  8B DA                     MOV EBX,EDX
004284A0  8B 0A                     MOV ECX,dword ptr [EDX]
004284A2  8B C1                     MOV EAX,ECX
004284A4  F7 D8                     NEG EAX
004284A6  8B 7D D8                  MOV EDI,dword ptr [EBP + -0x28]
004284A9  3B C7                     CMP EAX,EDI
004284AB  7D 02                     JGE 0x004284af
004284AD  8B C7                     MOV EAX,EDI
LAB_004284af:
004284AF  8B 75 D0                  MOV ESI,dword ptr [EBP + -0x30]
004284B2  3B CE                     CMP ECX,ESI
004284B4  7E 02                     JLE 0x004284b8
004284B6  8B CE                     MOV ECX,ESI
LAB_004284b8:
004284B8  8B 35 74 4D 7F 00         MOV ESI,dword ptr [0x007f4d74]
004284BE  89 06                     MOV dword ptr [ESI],EAX
004284C0  A1 74 4D 7F 00            MOV EAX,[0x007f4d74]
004284C5  89 48 0C                  MOV dword ptr [EAX + 0xc],ECX
004284C8  8B 45 18                  MOV EAX,dword ptr [EBP + 0x18]
004284CB  85 C0                     TEST EAX,EAX
004284CD  7E 29                     JLE 0x004284f8
004284CF  8B 4A 04                  MOV ECX,dword ptr [EDX + 0x4]
004284D2  8B C1                     MOV EAX,ECX
004284D4  F7 D8                     NEG EAX
004284D6  8B 55 D0                  MOV EDX,dword ptr [EBP + -0x30]
004284D9  3B C2                     CMP EAX,EDX
004284DB  7E 02                     JLE 0x004284df
004284DD  8B C2                     MOV EAX,EDX
LAB_004284df:
004284DF  3B CF                     CMP ECX,EDI
004284E1  7D 02                     JGE 0x004284e5
004284E3  8B CF                     MOV ECX,EDI
LAB_004284e5:
004284E5  8B 15 74 4D 7F 00         MOV EDX,dword ptr [0x007f4d74]
004284EB  89 42 04                  MOV dword ptr [EDX + 0x4],EAX
004284EE  A1 74 4D 7F 00            MOV EAX,[0x007f4d74]
004284F3  89 48 08                  MOV dword ptr [EAX + 0x8],ECX
004284F6  EB 15                     JMP 0x0042850d
LAB_004284f8:
004284F8  A1 74 4D 7F 00            MOV EAX,[0x007f4d74]
004284FD  8B 48 0C                  MOV ECX,dword ptr [EAX + 0xc]
00428500  89 48 04                  MOV dword ptr [EAX + 0x4],ECX
00428503  A1 74 4D 7F 00            MOV EAX,[0x007f4d74]
00428508  8B 10                     MOV EDX,dword ptr [EAX]
0042850A  89 50 08                  MOV dword ptr [EAX + 0x8],EDX
LAB_0042850d:
0042850D  BE 01 00 00 00            MOV ESI,0x1
00428512  39 75 14                  CMP dword ptr [EBP + 0x14],ESI
00428515  0F 8C D3 00 00 00         JL 0x004285ee
0042851B  B8 10 00 00 00            MOV EAX,0x10
00428520  EB 03                     JMP 0x00428525
LAB_00428522:
00428522  8B 7D D8                  MOV EDI,dword ptr [EBP + -0x28]
LAB_00428525:
00428525  83 C3 10                  ADD EBX,0x10
00428528  8B 13                     MOV EDX,dword ptr [EBX]
0042852A  8B CA                     MOV ECX,EDX
0042852C  F7 D9                     NEG ECX
0042852E  3B CF                     CMP ECX,EDI
00428530  7D 02                     JGE 0x00428534
00428532  8B CF                     MOV ECX,EDI
LAB_00428534:
00428534  8B 7D D0                  MOV EDI,dword ptr [EBP + -0x30]
00428537  3B D7                     CMP EDX,EDI
00428539  7E 02                     JLE 0x0042853d
0042853B  8B D7                     MOV EDX,EDI
LAB_0042853d:
0042853D  8B 3D 74 4D 7F 00         MOV EDI,dword ptr [0x007f4d74]
00428543  2B F8                     SUB EDI,EAX
00428545  89 0F                     MOV dword ptr [EDI],ECX
00428547  8B 3D 74 4D 7F 00         MOV EDI,dword ptr [0x007f4d74]
0042854D  89 0C 38                  MOV dword ptr [EAX + EDI*0x1],ECX
00428550  8B 0D 74 4D 7F 00         MOV ECX,dword ptr [0x007f4d74]
00428556  2B C8                     SUB ECX,EAX
00428558  89 51 0C                  MOV dword ptr [ECX + 0xc],EDX
0042855B  8B 0D 74 4D 7F 00         MOV ECX,dword ptr [0x007f4d74]
00428561  89 54 08 0C               MOV dword ptr [EAX + ECX*0x1 + 0xc],EDX
00428565  3B 75 18                  CMP ESI,dword ptr [EBP + 0x18]
00428568  7F 41                     JG 0x004285ab
0042856A  8B 53 04                  MOV EDX,dword ptr [EBX + 0x4]
0042856D  8B CA                     MOV ECX,EDX
0042856F  F7 D9                     NEG ECX
00428571  8B 7D D0                  MOV EDI,dword ptr [EBP + -0x30]
00428574  3B CF                     CMP ECX,EDI
00428576  7E 02                     JLE 0x0042857a
00428578  8B CF                     MOV ECX,EDI
LAB_0042857a:
0042857A  8B 7D D8                  MOV EDI,dword ptr [EBP + -0x28]
0042857D  3B D7                     CMP EDX,EDI
0042857F  7D 02                     JGE 0x00428583
00428581  8B D7                     MOV EDX,EDI
LAB_00428583:
00428583  8B 3D 74 4D 7F 00         MOV EDI,dword ptr [0x007f4d74]
00428589  2B F8                     SUB EDI,EAX
0042858B  89 4F 04                  MOV dword ptr [EDI + 0x4],ECX
0042858E  8B 3D 74 4D 7F 00         MOV EDI,dword ptr [0x007f4d74]
00428594  89 4C 38 04               MOV dword ptr [EAX + EDI*0x1 + 0x4],ECX
00428598  8B 0D 74 4D 7F 00         MOV ECX,dword ptr [0x007f4d74]
0042859E  2B C8                     SUB ECX,EAX
004285A0  89 51 08                  MOV dword ptr [ECX + 0x8],EDX
004285A3  8B 0D 74 4D 7F 00         MOV ECX,dword ptr [0x007f4d74]
004285A9  EB 32                     JMP 0x004285dd
LAB_004285ab:
004285AB  8B 0D 74 4D 7F 00         MOV ECX,dword ptr [0x007f4d74]
004285B1  2B C8                     SUB ECX,EAX
004285B3  8B 51 0C                  MOV EDX,dword ptr [ECX + 0xc]
004285B6  89 51 04                  MOV dword ptr [ECX + 0x4],EDX
004285B9  8B 0D 74 4D 7F 00         MOV ECX,dword ptr [0x007f4d74]
004285BF  8B 54 08 0C               MOV EDX,dword ptr [EAX + ECX*0x1 + 0xc]
004285C3  89 54 08 04               MOV dword ptr [EAX + ECX*0x1 + 0x4],EDX
004285C7  8B 0D 74 4D 7F 00         MOV ECX,dword ptr [0x007f4d74]
004285CD  2B C8                     SUB ECX,EAX
004285CF  8B 11                     MOV EDX,dword ptr [ECX]
004285D1  89 51 08                  MOV dword ptr [ECX + 0x8],EDX
004285D4  8B 0D 74 4D 7F 00         MOV ECX,dword ptr [0x007f4d74]
004285DA  8B 14 08                  MOV EDX,dword ptr [EAX + ECX*0x1]
LAB_004285dd:
004285DD  89 54 08 08               MOV dword ptr [EAX + ECX*0x1 + 0x8],EDX
004285E1  46                        INC ESI
004285E2  83 C0 10                  ADD EAX,0x10
004285E5  3B 75 14                  CMP ESI,dword ptr [EBP + 0x14]
004285E8  0F 8E 34 FF FF FF         JLE 0x00428522
LAB_004285ee:
004285EE  8B 4D 18                  MOV ECX,dword ptr [EBP + 0x18]
004285F1  85 C9                     TEST ECX,ECX
004285F3  7F 25                     JG 0x0042861a
004285F5  6A 00                     PUSH 0x0
004285F7  8B 45 94                  MOV EAX,dword ptr [EBP + -0x6c]
004285FA  50                        PUSH EAX
004285FB  8B 4D A0                  MOV ECX,dword ptr [EBP + -0x60]
004285FE  51                        PUSH ECX
004285FF  8B 8D 6C FF FF FF         MOV ECX,dword ptr [EBP + 0xffffff6c]
00428605  E8 7E AC FD FF            CALL 0x00403288
0042860A  89 45 D4                  MOV dword ptr [EBP + -0x2c],EAX
0042860D  85 C0                     TEST EAX,EAX
0042860F  0F 85 BB 00 00 00         JNZ 0x004286d0
00428615  E9 A3 00 00 00            JMP 0x004286bd
LAB_0042861a:
0042861A  83 C8 FF                  OR EAX,0xffffffff
0042861D  2B C1                     SUB EAX,ECX
0042861F  8B 55 94                  MOV EDX,dword ptr [EBP + -0x6c]
00428622  3B C2                     CMP EAX,EDX
00428624  7E 02                     JLE 0x00428628
00428626  8B C2                     MOV EAX,EDX
LAB_00428628:
00428628  8B 4D A0                  MOV ECX,dword ptr [EBP + -0x60]
0042862B  3B C8                     CMP ECX,EAX
0042862D  7F 20                     JG 0x0042864f
0042862F  6A 00                     PUSH 0x0
00428631  50                        PUSH EAX
00428632  51                        PUSH ECX
00428633  8B 8D 6C FF FF FF         MOV ECX,dword ptr [EBP + 0xffffff6c]
00428639  E8 4A AC FD FF            CALL 0x00403288
0042863E  89 45 D4                  MOV dword ptr [EBP + -0x2c],EAX
00428641  85 C0                     TEST EAX,EAX
00428643  0F 85 87 00 00 00         JNZ 0x004286d0
00428649  8B 55 94                  MOV EDX,dword ptr [EBP + -0x6c]
0042864C  8B 4D A0                  MOV ECX,dword ptr [EBP + -0x60]
LAB_0042864f:
0042864F  8B 7D 18                  MOV EDI,dword ptr [EBP + 0x18]
00428652  8B F7                     MOV ESI,EDI
00428654  F7 DE                     NEG ESI
00428656  3B F1                     CMP ESI,ECX
00428658  7D 02                     JGE 0x0042865c
0042865A  8B F1                     MOV ESI,ECX
LAB_0042865c:
0042865C  39 55 18                  CMP dword ptr [EBP + 0x18],EDX
0042865F  7E 02                     JLE 0x00428663
00428661  8B FA                     MOV EDI,EDX
LAB_00428663:
00428663  3B F7                     CMP ESI,EDI
00428665  7F 32                     JG 0x00428699
00428667  6A FF                     PUSH -0x1
00428669  57                        PUSH EDI
0042866A  56                        PUSH ESI
0042866B  8B 8D 6C FF FF FF         MOV ECX,dword ptr [EBP + 0xffffff6c]
00428671  E8 12 AC FD FF            CALL 0x00403288
00428676  89 45 D4                  MOV dword ptr [EBP + -0x2c],EAX
00428679  85 C0                     TEST EAX,EAX
0042867B  75 53                     JNZ 0x004286d0
0042867D  6A 01                     PUSH 0x1
0042867F  57                        PUSH EDI
00428680  56                        PUSH ESI
00428681  8B 8D 6C FF FF FF         MOV ECX,dword ptr [EBP + 0xffffff6c]
00428687  E8 FC AB FD FF            CALL 0x00403288
0042868C  89 45 D4                  MOV dword ptr [EBP + -0x2c],EAX
0042868F  85 C0                     TEST EAX,EAX
00428691  75 3D                     JNZ 0x004286d0
00428693  8B 55 94                  MOV EDX,dword ptr [EBP + -0x6c]
00428696  8B 4D A0                  MOV ECX,dword ptr [EBP + -0x60]
LAB_00428699:
00428699  8B 45 18                  MOV EAX,dword ptr [EBP + 0x18]
0042869C  40                        INC EAX
0042869D  3B C1                     CMP EAX,ECX
0042869F  7D 02                     JGE 0x004286a3
004286A1  8B C1                     MOV EAX,ECX
LAB_004286a3:
004286A3  3B C2                     CMP EAX,EDX
004286A5  7F 16                     JG 0x004286bd
004286A7  6A 00                     PUSH 0x0
004286A9  52                        PUSH EDX
004286AA  50                        PUSH EAX
004286AB  8B 8D 6C FF FF FF         MOV ECX,dword ptr [EBP + 0xffffff6c]
004286B1  E8 D2 AB FD FF            CALL 0x00403288
004286B6  89 45 D4                  MOV dword ptr [EBP + -0x2c],EAX
004286B9  85 C0                     TEST EAX,EAX
004286BB  75 13                     JNZ 0x004286d0
LAB_004286bd:
004286BD  A1 78 4D 7F 00            MOV EAX,[0x007f4d78]
004286C2  85 C0                     TEST EAX,EAX
004286C4  75 0A                     JNZ 0x004286d0
004286C6  68 6C 4D 7F 00            PUSH 0x7f4d6c
004286CB  E8 90 29 28 00            CALL 0x006ab060
LAB_004286d0:
004286D0  33 DB                     XOR EBX,EBX
004286D2  39 5D D4                  CMP dword ptr [EBP + -0x2c],EBX
004286D5  0F 84 80 00 00 00         JZ 0x0042875b
004286DB  33 F6                     XOR ESI,ESI
004286DD  39 1D 78 4D 7F 00         CMP dword ptr [0x007f4d78],EBX
004286E3  7E 1E                     JLE 0x00428703
004286E5  33 FF                     XOR EDI,EDI
LAB_004286e7:
004286E7  8B 15 6C 4D 7F 00         MOV EDX,dword ptr [0x007f4d6c]
004286ED  8B 44 17 08               MOV EAX,dword ptr [EDI + EDX*0x1 + 0x8]
004286F1  50                        PUSH EAX
004286F2  E8 99 D7 27 00            CALL 0x006a5e90
004286F7  46                        INC ESI
004286F8  83 C7 0C                  ADD EDI,0xc
004286FB  3B 35 78 4D 7F 00         CMP ESI,dword ptr [0x007f4d78]
00428701  7C E4                     JL 0x004286e7
LAB_00428703:
00428703  8B 0D 6C 4D 7F 00         MOV ECX,dword ptr [0x007f4d6c]
00428709  51                        PUSH ECX
0042870A  E8 81 D7 27 00            CALL 0x006a5e90
0042870F  68 8F 07 00 00            PUSH 0x78f
00428714  68 08 52 7A 00            PUSH 0x7a5208
00428719  8B 15 7C D7 7E 00         MOV EDX,dword ptr [0x007ed77c]
0042871F  52                        PUSH EDX
00428720  8B 75 D4                  MOV ESI,dword ptr [EBP + -0x2c]
00428723  56                        PUSH ESI
00428724  E8 17 D7 27 00            CALL 0x006a5e40
00428729  8B C6                     MOV EAX,ESI
0042872B  E9 92 00 00 00            JMP 0x004287c2
LAB_0042875b:
0042875B  8B 75 1C                  MOV ESI,dword ptr [EBP + 0x1c]
0042875E  8B 4E 1C                  MOV ECX,dword ptr [ESI + 0x1c]
00428761  3B CB                     CMP ECX,EBX
00428763  74 2A                     JZ 0x0042878f
00428765  8B 46 20                  MOV EAX,dword ptr [ESI + 0x20]
00428768  3B C3                     CMP EAX,EBX
0042876A  74 23                     JZ 0x0042878f
0042876C  3B CB                     CMP ECX,EBX
0042876E  7E 14                     JLE 0x00428784
00428770  8D 78 08                  LEA EDI,[EAX + 0x8]
LAB_00428773:
00428773  8B 07                     MOV EAX,dword ptr [EDI]
00428775  50                        PUSH EAX
00428776  E8 15 D7 27 00            CALL 0x006a5e90
0042877B  83 C7 0C                  ADD EDI,0xc
0042877E  43                        INC EBX
0042877F  3B 5E 1C                  CMP EBX,dword ptr [ESI + 0x1c]
00428782  7C EF                     JL 0x00428773
LAB_00428784:
00428784  8D 46 20                  LEA EAX,[ESI + 0x20]
00428787  50                        PUSH EAX
00428788  E8 D3 28 28 00            CALL 0x006ab060
0042878D  33 DB                     XOR EBX,EBX
LAB_0042878f:
0042878F  8B 0D 7C 4D 7F 00         MOV ECX,dword ptr [0x007f4d7c]
00428795  89 0E                     MOV dword ptr [ESI],ECX
00428797  8B 15 80 4D 7F 00         MOV EDX,dword ptr [0x007f4d80]
0042879D  89 56 04                  MOV dword ptr [ESI + 0x4],EDX
004287A0  89 5E 08                  MOV dword ptr [ESI + 0x8],EBX
004287A3  89 5E 0C                  MOV dword ptr [ESI + 0xc],EBX
004287A6  89 5E 10                  MOV dword ptr [ESI + 0x10],EBX
004287A9  89 5E 14                  MOV dword ptr [ESI + 0x14],EBX
004287AC  89 5E 18                  MOV dword ptr [ESI + 0x18],EBX
004287AF  A1 78 4D 7F 00            MOV EAX,[0x007f4d78]
004287B4  89 46 1C                  MOV dword ptr [ESI + 0x1c],EAX
004287B7  8B 0D 6C 4D 7F 00         MOV ECX,dword ptr [0x007f4d6c]
004287BD  89 4E 20                  MOV dword ptr [ESI + 0x20],ECX
004287C0  33 C0                     XOR EAX,EAX
LAB_004287c2:
004287C2  8D A5 40 FF FF FF         LEA ESP,[EBP + 0xffffff40]
004287C8  8B 4D F0                  MOV ECX,dword ptr [EBP + -0x10]
004287CB  64 89 0D 00 00 00 00      MOV dword ptr FS:[0x0],ECX
004287D2  5F                        POP EDI
004287D3  5E                        POP ESI
004287D4  5B                        POP EBX
004287D5  8B E5                     MOV ESP,EBP
004287D7  5D                        POP EBP
004287D8  C2 18 00                  RET 0x18
