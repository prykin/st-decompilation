0073EAFD  D9 C9                     FXCH
0073EAFF  DB BD 62 FF FF FF         FSTP extended double ptr [EBP + 0xffffff62]
0073EB05  DB AD 62 FF FF FF         FLD extended double ptr [EBP + 0xffffff62]
0073EB0B  F6 85 69 FF FF FF 40      TEST byte ptr [EBP + 0xffffff69],0x40
0073EB12  74 09                     JZ 0x0073eb1d
0073EB14  C6 85 70 FF FF FF 07      MOV byte ptr [EBP + 0xffffff70],0x7
0073EB1B  EB 07                     JMP 0x0073eb24
0073EB1D  C6 85 70 FF FF FF 01      MOV byte ptr [EBP + 0xffffff70],0x1
0073EB24  DE C1                     FADDP
0073EB26  C3                        RET
0073EB27  DB BD 62 FF FF FF         FSTP extended double ptr [EBP + 0xffffff62]
0073EB2D  DB AD 62 FF FF FF         FLD extended double ptr [EBP + 0xffffff62]
0073EB33  F6 85 69 FF FF FF 40      TEST byte ptr [EBP + 0xffffff69],0x40
0073EB3A  74 20                     JZ 0x0073eb5c
0073EB3C  D9 C9                     FXCH
0073EB3E  DB BD 62 FF FF FF         FSTP extended double ptr [EBP + 0xffffff62]
0073EB44  DB AD 62 FF FF FF         FLD extended double ptr [EBP + 0xffffff62]
0073EB4A  F6 85 69 FF FF FF 40      TEST byte ptr [EBP + 0xffffff69],0x40
0073EB51  74 09                     JZ 0x0073eb5c
0073EB53  C6 85 70 FF FF FF 07      MOV byte ptr [EBP + 0xffffff70],0x7
0073EB5A  EB 07                     JMP 0x0073eb63
0073EB5C  C6 85 70 FF FF FF 01      MOV byte ptr [EBP + 0xffffff70],0x1
0073EB63  DE C1                     FADDP
0073EB65  C3                        RET
0073EB66  DD D8                     FSTP ST0
0073EB68  DD D8                     FSTP ST0
0073EB6A  DB 2D 10 23 7F 00         FLD extended double ptr [0x007f2310]
0073EB70  80 BD 70 FF FF FF 00      CMP byte ptr [EBP + 0xffffff70],0x0
0073EB77  7F 07                     JG 0x0073eb80
0073EB79  C6 85 70 FF FF FF 01      MOV byte ptr [EBP + 0xffffff70],0x1
0073EB80  0A C9                     OR CL,CL
0073EB82  C3                        RET
