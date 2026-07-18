FUN_006263b0:
006263B0  55                        PUSH EBP
006263B1  8B EC                     MOV EBP,ESP
006263B3  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
006263B6  48                        DEC EAX
006263B7  83 F8 6A                  CMP EAX,0x6a
006263BA  77 3C                     JA 0x006263f8
006263BC  33 C9                     XOR ECX,ECX
006263BE  8A 88 20 64 62 00         MOV CL,byte ptr [EAX + 0x626420]
switchD_006263c4::switchD:
006263C4  FF 24 8D 04 64 62 00      JMP dword ptr [ECX*0x4 + 0x626404]
switchD_006263c4::caseD_1:
006263CB  B8 01 00 00 00            MOV EAX,0x1
006263D0  5D                        POP EBP
006263D1  C2 04 00                  RET 0x4
switchD_006263c4::caseD_3:
006263D4  B8 02 00 00 00            MOV EAX,0x2
006263D9  5D                        POP EBP
006263DA  C2 04 00                  RET 0x4
switchD_006263c4::caseD_5:
006263DD  B8 04 00 00 00            MOV EAX,0x4
006263E2  5D                        POP EBP
006263E3  C2 04 00                  RET 0x4
switchD_006263c4::caseD_4:
006263E6  B8 08 00 00 00            MOV EAX,0x8
006263EB  5D                        POP EBP
006263EC  C2 04 00                  RET 0x4
switchD_006263c4::caseD_36:
006263EF  B8 10 00 00 00            MOV EAX,0x10
006263F4  5D                        POP EBP
006263F5  C2 04 00                  RET 0x4
switchD_006263c4::caseD_7:
006263F8  B8 20 00 00 00            MOV EAX,0x20
006263FD  5D                        POP EBP
006263FE  C2 04 00                  RET 0x4
