FUN_006db8c0:
006DB8C0  55                        PUSH EBP
006DB8C1  8B EC                     MOV EBP,ESP
006DB8C3  D9 45 14                  FLD float ptr [EBP + 0x14]
006DB8C6  D8 65 0C                  FSUB float ptr [EBP + 0xc]
006DB8C9  D9 E0                     FCHS
006DB8CB  D9 45 10                  FLD float ptr [EBP + 0x10]
006DB8CE  D8 65 08                  FSUB float ptr [EBP + 0x8]
006DB8D1  D9 F3                     FPATAN
006DB8D3  D8 15 4C 03 79 00         FCOM float ptr [0x0079034c]
006DB8D9  DF E0                     FNSTSW AX
006DB8DB  F6 C4 01                  TEST AH,0x1
006DB8DE  74 06                     JZ 0x006db8e6
006DB8E0  D8 05 A4 C5 79 00         FADD float ptr [0x0079c5a4]
LAB_006db8e6:
006DB8E6  D8 0D 54 DF 79 00         FMUL float ptr [0x0079df54]
006DB8EC  83 EC 08                  SUB ESP,0x8
006DB8EF  DC 05 C0 01 79 00         FADD double ptr [0x007901c0]
006DB8F5  DD 1C 24                  FSTP double ptr [ESP]
006DB8F8  E8 53 28 05 00            CALL 0x0072e150
006DB8FD  83 C4 08                  ADD ESP,0x8
006DB900  E8 83 29 05 00            CALL 0x0072e288
006DB905  5D                        POP EBP
006DB906  C2 10 00                  RET 0x10
