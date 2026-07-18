FUN_006ad0b0:
006AD0B0  55                        PUSH EBP
006AD0B1  8B EC                     MOV EBP,ESP
006AD0B3  53                        PUSH EBX
006AD0B4  56                        PUSH ESI
006AD0B5  8B 75 10                  MOV ESI,dword ptr [EBP + 0x10]
006AD0B8  57                        PUSH EDI
006AD0B9  8B 7D 08                  MOV EDI,dword ptr [EBP + 0x8]
006AD0BC  8B C6                     MOV EAX,ESI
006AD0BE  2B C7                     SUB EAX,EDI
006AD0C0  8B 5D 14                  MOV EBX,dword ptr [EBP + 0x14]
006AD0C3  99                        CDQ
006AD0C4  8B C8                     MOV ECX,EAX
006AD0C6  8B C3                     MOV EAX,EBX
006AD0C8  33 CA                     XOR ECX,EDX
006AD0CA  2B CA                     SUB ECX,EDX
006AD0CC  8B 55 0C                  MOV EDX,dword ptr [EBP + 0xc]
006AD0CF  2B C2                     SUB EAX,EDX
006AD0D1  99                        CDQ
006AD0D2  33 C2                     XOR EAX,EDX
006AD0D4  2B C2                     SUB EAX,EDX
006AD0D6  85 C9                     TEST ECX,ECX
006AD0D8  75 10                     JNZ 0x006ad0ea
006AD0DA  85 C0                     TEST EAX,EAX
006AD0DC  75 0C                     JNZ 0x006ad0ea
006AD0DE  5F                        POP EDI
006AD0DF  5E                        POP ESI
006AD0E0  B8 7F 00 00 00            MOV EAX,0x7f
006AD0E5  5B                        POP EBX
006AD0E6  5D                        POP EBP
006AD0E7  C2 10 00                  RET 0x10
LAB_006ad0ea:
006AD0EA  3B 5D 0C                  CMP EBX,dword ptr [EBP + 0xc]
006AD0ED  7C 4E                     JL 0x006ad13d
006AD0EF  3B F7                     CMP ESI,EDI
006AD0F1  8D 14 00                  LEA EDX,[EAX + EAX*0x1]
006AD0F4  7C 22                     JL 0x006ad118
006AD0F6  3B CA                     CMP ECX,EDX
006AD0F8  7C 09                     JL 0x006ad103
006AD0FA  5F                        POP EDI
006AD0FB  5E                        POP ESI
006AD0FC  33 C0                     XOR EAX,EAX
006AD0FE  5B                        POP EBX
006AD0FF  5D                        POP EBP
006AD100  C2 10 00                  RET 0x10
LAB_006ad103:
006AD103  03 C9                     ADD ECX,ECX
006AD105  33 D2                     XOR EDX,EDX
006AD107  3B C1                     CMP EAX,ECX
006AD109  5F                        POP EDI
006AD10A  0F 9C C2                  SETL DL
006AD10D  83 C2 06                  ADD EDX,0x6
006AD110  5E                        POP ESI
006AD111  8B C2                     MOV EAX,EDX
006AD113  5B                        POP EBX
006AD114  5D                        POP EBP
006AD115  C2 10 00                  RET 0x10
LAB_006ad118:
006AD118  3B CA                     CMP ECX,EDX
006AD11A  7C 0C                     JL 0x006ad128
006AD11C  5F                        POP EDI
006AD11D  5E                        POP ESI
006AD11E  B8 04 00 00 00            MOV EAX,0x4
006AD123  5B                        POP EBX
006AD124  5D                        POP EBP
006AD125  C2 10 00                  RET 0x10
LAB_006ad128:
006AD128  03 C9                     ADD ECX,ECX
006AD12A  33 D2                     XOR EDX,EDX
006AD12C  3B C1                     CMP EAX,ECX
006AD12E  5F                        POP EDI
006AD12F  0F 9D C2                  SETGE DL
006AD132  83 C2 05                  ADD EDX,0x5
006AD135  5E                        POP ESI
006AD136  8B C2                     MOV EAX,EDX
006AD138  5B                        POP EBX
006AD139  5D                        POP EBP
006AD13A  C2 10 00                  RET 0x10
LAB_006ad13d:
006AD13D  3B F7                     CMP ESI,EDI
006AD13F  8D 14 00                  LEA EDX,[EAX + EAX*0x1]
006AD142  7C 20                     JL 0x006ad164
006AD144  3B CA                     CMP ECX,EDX
006AD146  7C 09                     JL 0x006ad151
006AD148  5F                        POP EDI
006AD149  5E                        POP ESI
006AD14A  33 C0                     XOR EAX,EAX
006AD14C  5B                        POP EBX
006AD14D  5D                        POP EBP
006AD14E  C2 10 00                  RET 0x10
LAB_006ad151:
006AD151  03 C9                     ADD ECX,ECX
006AD153  33 D2                     XOR EDX,EDX
006AD155  3B C1                     CMP EAX,ECX
006AD157  5F                        POP EDI
006AD158  0F 9D C2                  SETGE DL
006AD15B  42                        INC EDX
006AD15C  5E                        POP ESI
006AD15D  8B C2                     MOV EAX,EDX
006AD15F  5B                        POP EBX
006AD160  5D                        POP EBP
006AD161  C2 10 00                  RET 0x10
LAB_006ad164:
006AD164  3B CA                     CMP ECX,EDX
006AD166  7C 0C                     JL 0x006ad174
006AD168  5F                        POP EDI
006AD169  5E                        POP ESI
006AD16A  B8 04 00 00 00            MOV EAX,0x4
006AD16F  5B                        POP EBX
006AD170  5D                        POP EBP
006AD171  C2 10 00                  RET 0x10
LAB_006ad174:
006AD174  03 C9                     ADD ECX,ECX
006AD176  33 D2                     XOR EDX,EDX
006AD178  3B C1                     CMP EAX,ECX
006AD17A  5F                        POP EDI
006AD17B  0F 9C C2                  SETL DL
006AD17E  83 C2 02                  ADD EDX,0x2
006AD181  5E                        POP ESI
006AD182  8B C2                     MOV EAX,EDX
006AD184  5B                        POP EBX
006AD185  5D                        POP EBP
006AD186  C2 10 00                  RET 0x10
