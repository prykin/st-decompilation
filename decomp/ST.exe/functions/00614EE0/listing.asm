FUN_00614ee0:
00614EE0  55                        PUSH EBP
00614EE1  8B EC                     MOV EBP,ESP
00614EE3  83 EC 1C                  SUB ESP,0x1c
00614EE6  53                        PUSH EBX
00614EE7  56                        PUSH ESI
00614EE8  8B F1                     MOV ESI,ECX
00614EEA  33 DB                     XOR EBX,EBX
00614EEC  57                        PUSH EDI
00614EED  89 5D F4                  MOV dword ptr [EBP + -0xc],EBX
00614EF0  66 8B 86 C5 02 00 00      MOV AX,word ptr [ESI + 0x2c5]
00614EF7  66 8B 8E C9 02 00 00      MOV CX,word ptr [ESI + 0x2c9]
00614EFE  66 8B 96 C7 02 00 00      MOV DX,word ptr [ESI + 0x2c7]
00614F05  66 3B C3                  CMP AX,BX
00614F08  89 5D F0                  MOV dword ptr [EBP + -0x10],EBX
00614F0B  89 5D EC                  MOV dword ptr [EBP + -0x14],EBX
00614F0E  7C 61                     JL 0x00614f71
00614F10  66 8B 3D 40 B2 7F 00      MOV DI,word ptr [0x007fb240]
00614F17  66 3B C7                  CMP AX,DI
00614F1A  7D 55                     JGE 0x00614f71
00614F1C  66 3B D3                  CMP DX,BX
00614F1F  7C 50                     JL 0x00614f71
00614F21  66 3B 15 42 B2 7F 00      CMP DX,word ptr [0x007fb242]
00614F28  7D 47                     JGE 0x00614f71
00614F2A  66 3B CB                  CMP CX,BX
00614F2D  7C 42                     JL 0x00614f71
00614F2F  66 3B 0D 44 B2 7F 00      CMP CX,word ptr [0x007fb244]
00614F36  7D 39                     JGE 0x00614f71
00614F38  0F BF 1D 46 B2 7F 00      MOVSX EBX,word ptr [0x007fb246]
00614F3F  0F BF C9                  MOVSX ECX,CX
00614F42  0F AF D9                  IMUL EBX,ECX
00614F45  0F BF CF                  MOVSX ECX,DI
00614F48  0F BF D2                  MOVSX EDX,DX
00614F4B  0F AF CA                  IMUL ECX,EDX
00614F4E  0F BF C0                  MOVSX EAX,AX
00614F51  03 D9                     ADD EBX,ECX
00614F53  8B 0D 48 B2 7F 00         MOV ECX,dword ptr [0x007fb248]
00614F59  03 D8                     ADD EBX,EAX
00614F5B  8B 3C D9                  MOV EDI,dword ptr [ECX + EBX*0x8]
00614F5E  33 DB                     XOR EBX,EBX
00614F60  3B FB                     CMP EDI,EBX
00614F62  74 0D                     JZ 0x00614f71
00614F64  8B 57 18                  MOV EDX,dword ptr [EDI + 0x18]
00614F67  8B 86 D1 02 00 00         MOV EAX,dword ptr [ESI + 0x2d1]
00614F6D  3B D0                     CMP EDX,EAX
00614F6F  74 22                     JZ 0x00614f93
LAB_00614f71:
00614F71  8B 8E D1 02 00 00         MOV ECX,dword ptr [ESI + 0x2d1]
00614F77  8D 45 E8                  LEA EAX,[EBP + -0x18]
00614F7A  50                        PUSH EAX
00614F7B  51                        PUSH ECX
00614F7C  8B 0D 38 2A 80 00         MOV ECX,dword ptr [0x00802a38]
00614F82  E8 49 13 0D 00            CALL 0x006e62d0
00614F87  83 F8 FC                  CMP EAX,-0x4
00614F8A  0F 84 7F 01 00 00         JZ 0x0061510f
00614F90  8B 7D E8                  MOV EDI,dword ptr [EBP + -0x18]
LAB_00614f93:
00614F93  8D 55 EC                  LEA EDX,[EBP + -0x14]
00614F96  8D 45 F0                  LEA EAX,[EBP + -0x10]
00614F99  52                        PUSH EDX
00614F9A  8D 4D F4                  LEA ECX,[EBP + -0xc]
00614F9D  50                        PUSH EAX
00614F9E  51                        PUSH ECX
00614F9F  8B CF                     MOV ECX,EDI
00614FA1  89 5D E4                  MOV dword ptr [EBP + -0x1c],EBX
00614FA4  E8 3A E2 DE FF            CALL 0x004031e3
00614FA9  8B 45 F4                  MOV EAX,dword ptr [EBP + -0xc]
00614FAC  8B 4D EC                  MOV ECX,dword ptr [EBP + -0x14]
00614FAF  66 3B 86 CB 02 00 00      CMP AX,word ptr [ESI + 0x2cb]
00614FB6  8B 55 F0                  MOV EDX,dword ptr [EBP + -0x10]
00614FB9  75 16                     JNZ 0x00614fd1
00614FBB  66 3B 96 CD 02 00 00      CMP DX,word ptr [ESI + 0x2cd]
00614FC2  75 0D                     JNZ 0x00614fd1
00614FC4  66 3B 8E CF 02 00 00      CMP CX,word ptr [ESI + 0x2cf]
00614FCB  0F 84 4A 01 00 00         JZ 0x0061511b
LAB_00614fd1:
00614FD1  0F BF 9E F3 01 00 00      MOVSX EBX,word ptr [ESI + 0x1f3]
00614FD8  0F BF C9                  MOVSX ECX,CX
00614FDB  2B CB                     SUB ECX,EBX
00614FDD  0F BF 9E F1 01 00 00      MOVSX EBX,word ptr [ESI + 0x1f1]
00614FE4  0F BF D2                  MOVSX EDX,DX
00614FE7  2B D3                     SUB EDX,EBX
00614FE9  0F BF 9E EF 01 00 00      MOVSX EBX,word ptr [ESI + 0x1ef]
00614FF0  0F BF C0                  MOVSX EAX,AX
00614FF3  2B C3                     SUB EAX,EBX
00614FF5  8B DA                     MOV EBX,EDX
00614FF7  0F AF DA                  IMUL EBX,EDX
00614FFA  0F AF C0                  IMUL EAX,EAX
00614FFD  8B D1                     MOV EDX,ECX
00614FFF  03 C3                     ADD EAX,EBX
00615001  0F AF D1                  IMUL EDX,ECX
00615004  03 C2                     ADD EAX,EDX
00615006  3D 90 01 00 00            CMP EAX,0x190
0061500B  0F 8E 15 01 00 00         JLE 0x00615126
00615011  8D 45 FC                  LEA EAX,[EBP + -0x4]
00615014  8D 4D FE                  LEA ECX,[EBP + -0x2]
00615017  50                        PUSH EAX
00615018  8D 55 FA                  LEA EDX,[EBP + -0x6]
0061501B  51                        PUSH ECX
0061501C  52                        PUSH EDX
0061501D  8B CF                     MOV ECX,EDI
0061501F  E8 A1 C8 DE FF            CALL 0x004018c5
00615024  66 8B 86 C5 02 00 00      MOV AX,word ptr [ESI + 0x2c5]
0061502B  66 8B 7D FA               MOV DI,word ptr [EBP + -0x6]
0061502F  66 3B F8                  CMP DI,AX
00615032  75 21                     JNZ 0x00615055
00615034  66 8B 4D FE               MOV CX,word ptr [EBP + -0x2]
00615038  66 3B 8E C7 02 00 00      CMP CX,word ptr [ESI + 0x2c7]
0061503F  75 14                     JNZ 0x00615055
00615041  66 8B 55 FC               MOV DX,word ptr [EBP + -0x4]
00615045  66 3B 96 C9 02 00 00      CMP DX,word ptr [ESI + 0x2c9]
0061504C  75 07                     JNZ 0x00615055
0061504E  B8 01 00 00 00            MOV EAX,0x1
00615053  EB 6F                     JMP 0x006150c4
LAB_00615055:
00615055  8B 5D 0C                  MOV EBX,dword ptr [EBP + 0xc]
00615058  8B 55 10                  MOV EDX,dword ptr [EBP + 0x10]
0061505B  0F BF 8E C7 02 00 00      MOVSX ECX,word ptr [ESI + 0x2c7]
00615062  0F BF FF                  MOVSX EDI,DI
00615065  0F BF C0                  MOVSX EAX,AX
00615068  2B FB                     SUB EDI,EBX
0061506A  2B C3                     SUB EAX,EBX
0061506C  8B 5D 10                  MOV EBX,dword ptr [EBP + 0x10]
0061506F  89 7D 0C                  MOV dword ptr [EBP + 0xc],EDI
00615072  0F BF 7D FE               MOVSX EDI,word ptr [EBP + -0x2]
00615076  2B CA                     SUB ECX,EDX
00615078  2B FB                     SUB EDI,EBX
0061507A  0F BF 96 C9 02 00 00      MOVSX EDX,word ptr [ESI + 0x2c9]
00615081  2B 55 14                  SUB EDX,dword ptr [EBP + 0x14]
00615084  8B 5D 14                  MOV EBX,dword ptr [EBP + 0x14]
00615087  89 7D 10                  MOV dword ptr [EBP + 0x10],EDI
0061508A  0F BF 7D FC               MOVSX EDI,word ptr [EBP + -0x4]
0061508E  2B FB                     SUB EDI,EBX
00615090  8B DA                     MOV EBX,EDX
00615092  0F AF DA                  IMUL EBX,EDX
00615095  8B D1                     MOV EDX,ECX
00615097  0F AF D1                  IMUL EDX,ECX
0061509A  8B C8                     MOV ECX,EAX
0061509C  03 DA                     ADD EBX,EDX
0061509E  0F AF C8                  IMUL ECX,EAX
006150A1  8B 45 10                  MOV EAX,dword ptr [EBP + 0x10]
006150A4  03 D9                     ADD EBX,ECX
006150A6  8B D7                     MOV EDX,EDI
006150A8  8B C8                     MOV ECX,EAX
006150AA  0F AF D7                  IMUL EDX,EDI
006150AD  0F AF C8                  IMUL ECX,EAX
006150B0  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
006150B3  03 D1                     ADD EDX,ECX
006150B5  8B C8                     MOV ECX,EAX
006150B7  0F AF C8                  IMUL ECX,EAX
006150BA  03 D1                     ADD EDX,ECX
006150BC  33 C0                     XOR EAX,EAX
006150BE  3B DA                     CMP EBX,EDX
006150C0  0F 9F C0                  SETG AL
006150C3  40                        INC EAX
LAB_006150c4:
006150C4  8B 8E D5 02 00 00         MOV ECX,dword ptr [ESI + 0x2d5]
006150CA  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
006150CD  8D 79 FD                  LEA EDI,[ECX + -0x3]
006150D0  3B D7                     CMP EDX,EDI
006150D2  75 05                     JNZ 0x006150d9
006150D4  83 F8 02                  CMP EAX,0x2
006150D7  74 0C                     JZ 0x006150e5
LAB_006150d9:
006150D9  83 C1 FE                  ADD ECX,-0x2
006150DC  3B D1                     CMP EDX,ECX
006150DE  75 49                     JNZ 0x00615129
006150E0  83 F8 01                  CMP EAX,0x1
006150E3  7C 44                     JL 0x00615129
LAB_006150e5:
006150E5  66 8B 55 F4               MOV DX,word ptr [EBP + -0xc]
006150E9  66 8B 4D F0               MOV CX,word ptr [EBP + -0x10]
006150ED  66 89 96 CB 02 00 00      MOV word ptr [ESI + 0x2cb],DX
006150F4  66 8B 55 EC               MOV DX,word ptr [EBP + -0x14]
006150F8  66 89 8E CD 02 00 00      MOV word ptr [ESI + 0x2cd],CX
006150FF  66 89 96 CF 02 00 00      MOV word ptr [ESI + 0x2cf],DX
00615106  5F                        POP EDI
00615107  5E                        POP ESI
00615108  5B                        POP EBX
00615109  8B E5                     MOV ESP,EBP
0061510B  5D                        POP EBP
0061510C  C2 10 00                  RET 0x10
LAB_0061510f:
0061510F  5F                        POP EDI
00615110  5E                        POP ESI
00615111  83 C8 FF                  OR EAX,0xffffffff
00615114  5B                        POP EBX
00615115  8B E5                     MOV ESP,EBP
00615117  5D                        POP EBP
00615118  C2 10 00                  RET 0x10
LAB_0061511b:
0061511B  5F                        POP EDI
0061511C  8B C3                     MOV EAX,EBX
0061511E  5E                        POP ESI
0061511F  5B                        POP EBX
00615120  8B E5                     MOV ESP,EBP
00615122  5D                        POP EBP
00615123  C2 10 00                  RET 0x10
LAB_00615126:
00615126  8B 45 E4                  MOV EAX,dword ptr [EBP + -0x1c]
LAB_00615129:
00615129  5F                        POP EDI
0061512A  5E                        POP ESI
0061512B  5B                        POP EBX
0061512C  8B E5                     MOV ESP,EBP
0061512E  5D                        POP EBP
0061512F  C2 10 00                  RET 0x10
