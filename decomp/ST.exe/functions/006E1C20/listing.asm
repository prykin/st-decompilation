FUN_006e1c20:
006E1C20  55                        PUSH EBP
006E1C21  8B EC                     MOV EBP,ESP
006E1C23  83 EC 20                  SUB ESP,0x20
006E1C26  56                        PUSH ESI
006E1C27  8B F1                     MOV ESI,ECX
006E1C29  6A 01                     PUSH 0x1
006E1C2B  6A 00                     PUSH 0x0
006E1C2D  DD 86 98 00 00 00         FLD double ptr [ESI + 0x98]
006E1C33  6A 00                     PUSH 0x0
006E1C35  6A 00                     PUSH 0x0
006E1C37  D9 5D F0                  FSTP float ptr [EBP + -0x10]
006E1C3A  DD 86 A0 00 00 00         FLD double ptr [ESI + 0xa0]
006E1C40  6A 00                     PUSH 0x0
006E1C42  6A 00                     PUSH 0x0
006E1C44  D9 5D F4                  FSTP float ptr [EBP + -0xc]
006E1C47  8D 45 F0                  LEA EAX,[EBP + -0x10]
006E1C4A  6A 00                     PUSH 0x0
006E1C4C  8D 4D E0                  LEA ECX,[EBP + -0x20]
006E1C4F  50                        PUSH EAX
006E1C50  51                        PUSH ECX
006E1C51  8B CE                     MOV ECX,ESI
006E1C53  C7 45 F8 00 00 00 00      MOV dword ptr [EBP + -0x8],0x0
006E1C5A  E8 71 09 00 00            CALL 0x006e25d0
006E1C5F  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
006E1C62  8B 45 E0                  MOV EAX,dword ptr [EBP + -0x20]
006E1C65  C1 E2 10                  SHL EDX,0x10
006E1C68  2B D0                     SUB EDX,EAX
006E1C6A  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
006E1C6D  89 55 08                  MOV dword ptr [EBP + 0x8],EDX
006E1C70  8B 55 E4                  MOV EDX,dword ptr [EBP + -0x1c]
006E1C73  DB 45 08                  FILD dword ptr [EBP + 0x8]
006E1C76  C1 E0 10                  SHL EAX,0x10
006E1C79  2B C2                     SUB EAX,EDX
006E1C7B  DC 0D 48 B1 79 00         FMUL double ptr [0x0079b148]
006E1C81  D9 5D FC                  FSTP float ptr [EBP + -0x4]
006E1C84  89 45 08                  MOV dword ptr [EBP + 0x8],EAX
006E1C87  8B 86 A8 00 00 00         MOV EAX,dword ptr [ESI + 0xa8]
006E1C8D  DB 45 08                  FILD dword ptr [EBP + 0x8]
006E1C90  83 F8 03                  CMP EAX,0x3
006E1C93  DC 0D 48 B1 79 00         FMUL double ptr [0x0079b148]
006E1C99  D9 5D 0C                  FSTP float ptr [EBP + 0xc]
006E1C9C  D9 45 10                  FLD float ptr [EBP + 0x10]
006E1C9F  DC 0D 60 DF 79 00         FMUL double ptr [0x0079df60]
006E1CA5  D9 55 08                  FST float ptr [EBP + 0x8]
006E1CA8  0F 87 EA 00 00 00         JA 0x006e1d98
switchD_006e1cae::switchD:
006E1CAE  FF 24 85 BC 1D 6E 00      JMP dword ptr [EAX*0x4 + 0x6e1dbc]
switchD_006e1cae::caseD_0:
006E1CB5  D9 45 0C                  FLD float ptr [EBP + 0xc]
006E1CB8  DC 8E F0 00 00 00         FMUL double ptr [ESI + 0xf0]
006E1CBE  D9 45 FC                  FLD float ptr [EBP + -0x4]
006E1CC1  DC 8E E8 00 00 00         FMUL double ptr [ESI + 0xe8]
006E1CC7  D9 C0                     FLD ST0
006E1CC9  D8 C2                     FADD ST0,ST2
006E1CCB  DC 0D 60 DF 79 00         FMUL double ptr [0x0079df60]
006E1CD1  D9 C3                     FLD ST3
006E1CD3  DE C1                     FADDP
006E1CD5  D9 5D 08                  FSTP float ptr [EBP + 0x8]
006E1CD8  D9 C9                     FXCH
006E1CDA  DC 0D 60 DF 79 00         FMUL double ptr [0x0079df60]
006E1CE0  D9 C9                     FXCH
006E1CE2  DC 0D 60 DF 79 00         FMUL double ptr [0x0079df60]
006E1CE8  DE E9                     FSUBP
006E1CEA  D9 C9                     FXCH
006E1CEC  DE C1                     FADDP
006E1CEE  E9 A5 00 00 00            JMP 0x006e1d98
switchD_006e1cae::caseD_1:
006E1CF3  D9 45 FC                  FLD float ptr [EBP + -0x4]
006E1CF6  DC 8E E8 00 00 00         FMUL double ptr [ESI + 0xe8]
006E1CFC  D9 45 0C                  FLD float ptr [EBP + 0xc]
006E1CFF  DC 8E F0 00 00 00         FMUL double ptr [ESI + 0xf0]
006E1D05  D9 C1                     FLD ST1
006E1D07  D8 E1                     FSUB ST0,ST1
006E1D09  DC 0D 60 DF 79 00         FMUL double ptr [0x0079df60]
006E1D0F  D9 C3                     FLD ST3
006E1D11  D9 E0                     FCHS
006E1D13  DE C1                     FADDP
006E1D15  D9 5D 08                  FSTP float ptr [EBP + 0x8]
006E1D18  D9 C9                     FXCH
006E1D1A  D8 C1                     FADD ST0,ST1
006E1D1C  DC 0D 60 DF 79 00         FMUL double ptr [0x0079df60]
006E1D22  D9 CA                     FXCH ST2
006E1D24  DE C2                     FADDP ST2,ST0
006E1D26  EB 6E                     JMP 0x006e1d96
switchD_006e1cae::caseD_2:
006E1D28  D9 E0                     FCHS
006E1D2A  D9 45 0C                  FLD float ptr [EBP + 0xc]
006E1D2D  DC 8E F0 00 00 00         FMUL double ptr [ESI + 0xf0]
006E1D33  D9 45 FC                  FLD float ptr [EBP + -0x4]
006E1D36  DC 8E E8 00 00 00         FMUL double ptr [ESI + 0xe8]
006E1D3C  D9 C2                     FLD ST2
006E1D3E  D9 C1                     FLD ST1
006E1D40  D8 C3                     FADD ST0,ST3
006E1D42  DC 0D 60 DF 79 00         FMUL double ptr [0x0079df60]
006E1D48  DE E9                     FSUBP
006E1D4A  D9 5D 08                  FSTP float ptr [EBP + 0x8]
006E1D4D  D8 E1                     FSUB ST0,ST1
006E1D4F  DC 0D 60 DF 79 00         FMUL double ptr [0x0079df60]
006E1D55  D9 CA                     FXCH ST2
006E1D57  DE C2                     FADDP ST2,ST0
006E1D59  EB 3B                     JMP 0x006e1d96
switchD_006e1cae::caseD_3:
006E1D5B  D9 45 0C                  FLD float ptr [EBP + 0xc]
006E1D5E  DC 8E F0 00 00 00         FMUL double ptr [ESI + 0xf0]
006E1D64  D9 45 FC                  FLD float ptr [EBP + -0x4]
006E1D67  DC 8E E8 00 00 00         FMUL double ptr [ESI + 0xe8]
006E1D6D  D9 C1                     FLD ST1
006E1D6F  DC 0D 60 DF 79 00         FMUL double ptr [0x0079df60]
006E1D75  D9 C1                     FLD ST1
006E1D77  DC 0D 60 DF 79 00         FMUL double ptr [0x0079df60]
006E1D7D  DE E9                     FSUBP
006E1D7F  D9 C3                     FLD ST3
006E1D81  DE C1                     FADDP
006E1D83  D9 5D 08                  FSTP float ptr [EBP + 0x8]
006E1D86  D9 CA                     FXCH ST2
006E1D88  D9 E0                     FCHS
006E1D8A  D9 CA                     FXCH ST2
006E1D8C  D8 C1                     FADD ST0,ST1
006E1D8E  DC 0D 60 DF 79 00         FMUL double ptr [0x0079df60]
006E1D94  DE EA                     FSUBP ST2,ST0
LAB_006e1d96:
006E1D96  DD D8                     FSTP ST0
switchD_006e1cae::default:
006E1D98  D9 45 08                  FLD float ptr [EBP + 0x8]
006E1D9B  DC 86 98 00 00 00         FADD double ptr [ESI + 0x98]
006E1DA1  8B 4D 14                  MOV ECX,dword ptr [EBP + 0x14]
006E1DA4  8B 55 18                  MOV EDX,dword ptr [EBP + 0x18]
006E1DA7  33 C0                     XOR EAX,EAX
006E1DA9  D9 19                     FSTP float ptr [ECX]
006E1DAB  DC 86 A0 00 00 00         FADD double ptr [ESI + 0xa0]
006E1DB1  5E                        POP ESI
006E1DB2  D9 1A                     FSTP float ptr [EDX]
006E1DB4  8B E5                     MOV ESP,EBP
006E1DB6  5D                        POP EBP
006E1DB7  C2 14 00                  RET 0x14
