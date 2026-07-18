FUN_004c5bd0:
004C5BD0  55                        PUSH EBP
004C5BD1  8B EC                     MOV EBP,ESP
004C5BD3  51                        PUSH ECX
004C5BD4  53                        PUSH EBX
004C5BD5  56                        PUSH ESI
004C5BD6  8B F1                     MOV ESI,ECX
004C5BD8  57                        PUSH EDI
004C5BD9  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
004C5BDC  8B 86 35 02 00 00         MOV EAX,dword ptr [ESI + 0x235]
004C5BE2  66 8B BE B0 05 00 00      MOV DI,word ptr [ESI + 0x5b0]
004C5BE9  8D 0C 49                  LEA ECX,[ECX + ECX*0x2]
004C5BEC  8B 04 85 30 1E 79 00      MOV EAX,dword ptr [EAX*0x4 + 0x791e30]
004C5BF3  48                        DEC EAX
004C5BF4  F7 D8                     NEG EAX
004C5BF6  1B C0                     SBB EAX,EAX
004C5BF8  66 69 FF C9 00            IMUL DI,DI,0xc9
004C5BFD  83 C0 02                  ADD EAX,0x2
004C5C00  C1 E1 02                  SHL ECX,0x2
004C5C03  8D 14 80                  LEA EDX,[EAX + EAX*0x4]
004C5C06  8D 14 92                  LEA EDX,[EDX + EDX*0x4]
004C5C09  8D 04 D0                  LEA EAX,[EAX + EDX*0x8]
004C5C0C  99                        CDQ
004C5C0D  2B C2                     SUB EAX,EDX
004C5C0F  8B 96 FB 05 00 00         MOV EDX,dword ptr [ESI + 0x5fb]
004C5C15  D1 F8                     SAR EAX,0x1
004C5C17  66 8B 14 11               MOV DX,word ptr [ECX + EDX*0x1]
004C5C1B  66 03 D7                  ADD DX,DI
004C5C1E  8B 7D 0C                  MOV EDI,dword ptr [EBP + 0xc]
004C5C21  03 D0                     ADD EDX,EAX
004C5C23  66 89 17                  MOV word ptr [EDI],DX
004C5C26  66 8B 9E B4 05 00 00      MOV BX,word ptr [ESI + 0x5b4]
004C5C2D  8B 96 FB 05 00 00         MOV EDX,dword ptr [ESI + 0x5fb]
004C5C33  66 69 DB C9 00            IMUL BX,BX,0xc9
004C5C38  66 8B 54 11 04            MOV DX,word ptr [ECX + EDX*0x1 + 0x4]
004C5C3D  66 03 D3                  ADD DX,BX
004C5C40  8B 5D 10                  MOV EBX,dword ptr [EBP + 0x10]
004C5C43  03 D0                     ADD EDX,EAX
004C5C45  66 89 13                  MOV word ptr [EBX],DX
004C5C48  66 8B 96 B8 05 00 00      MOV DX,word ptr [ESI + 0x5b8]
004C5C4F  8B 86 FB 05 00 00         MOV EAX,dword ptr [ESI + 0x5fb]
004C5C55  66 69 D2 C8 00            IMUL DX,DX,0xc8
004C5C5A  66 8B 44 01 08            MOV AX,word ptr [ECX + EAX*0x1 + 0x8]
004C5C5F  8B 4D 14                  MOV ECX,dword ptr [EBP + 0x14]
004C5C62  66 03 C2                  ADD AX,DX
004C5C65  8B 55 18                  MOV EDX,dword ptr [EBP + 0x18]
004C5C68  66 89 01                  MOV word ptr [ECX],AX
004C5C6B  8D 45 10                  LEA EAX,[EBP + 0x10]
004C5C6E  C7 02 00 00 00 00         MOV dword ptr [EDX],0x0
004C5C74  8D 4D 0C                  LEA ECX,[EBP + 0xc]
004C5C77  50                        PUSH EAX
004C5C78  8D 55 08                  LEA EDX,[EBP + 0x8]
004C5C7B  51                        PUSH ECX
004C5C7C  8B 8E 11 02 00 00         MOV ECX,dword ptr [ESI + 0x211]
004C5C82  52                        PUSH EDX
004C5C83  E8 A8 78 21 00            CALL 0x006dd530
004C5C88  D9 45 08                  FLD float ptr [EBP + 0x8]
004C5C8B  D8 0D 04 07 79 00         FMUL float ptr [0x00790704]
004C5C91  E8 F2 85 26 00            CALL 0x0072e288
004C5C96  0F BF C0                  MOVSX EAX,AX
004C5C99  89 45 08                  MOV dword ptr [EBP + 0x8],EAX
004C5C9C  DB 45 08                  FILD dword ptr [EBP + 0x8]
004C5C9F  D9 45 0C                  FLD float ptr [EBP + 0xc]
004C5CA2  D8 0D 04 07 79 00         FMUL float ptr [0x00790704]
004C5CA8  E8 DB 85 26 00            CALL 0x0072e288
004C5CAD  0F BF C8                  MOVSX ECX,AX
004C5CB0  89 4D 08                  MOV dword ptr [EBP + 0x8],ECX
004C5CB3  DB 45 08                  FILD dword ptr [EBP + 0x8]
004C5CB6  D9 5D 08                  FSTP float ptr [EBP + 0x8]
004C5CB9  D9 45 10                  FLD float ptr [EBP + 0x10]
004C5CBC  D8 0D 04 07 79 00         FMUL float ptr [0x00790704]
004C5CC2  E8 C1 85 26 00            CALL 0x0072e288
004C5CC7  0F BF D0                  MOVSX EDX,AX
004C5CCA  0F BF 46 43               MOVSX EAX,word ptr [ESI + 0x43]
004C5CCE  89 55 0C                  MOV dword ptr [EBP + 0xc],EDX
004C5CD1  DB 45 0C                  FILD dword ptr [EBP + 0xc]
004C5CD4  0F BF 4E 41               MOVSX ECX,word ptr [ESI + 0x41]
004C5CD8  89 45 0C                  MOV dword ptr [EBP + 0xc],EAX
004C5CDB  DB 45 0C                  FILD dword ptr [EBP + 0xc]
004C5CDE  89 4D 0C                  MOV dword ptr [EBP + 0xc],ECX
004C5CE1  D8 65 08                  FSUB float ptr [EBP + 0x8]
004C5CE4  D9 5D 10                  FSTP float ptr [EBP + 0x10]
004C5CE7  DB 45 0C                  FILD dword ptr [EBP + 0xc]
004C5CEA  D8 E2                     FSUB ST0,ST2
004C5CEC  8B 55 14                  MOV EDX,dword ptr [EBP + 0x14]
004C5CEF  0F BF 02                  MOVSX EAX,word ptr [EDX]
004C5CF2  D9 5D 0C                  FSTP float ptr [EBP + 0xc]
004C5CF5  89 45 14                  MOV dword ptr [EBP + 0x14],EAX
004C5CF8  DA 6D 14                  FISUBR dword ptr [EBP + 0x14]
004C5CFB  0F BF 0F                  MOVSX ECX,word ptr [EDI]
004C5CFE  D9 C0                     FLD ST0
004C5D00  0F BF 13                  MOVSX EDX,word ptr [EBX]
004C5D03  D8 C9                     FMUL ST1
004C5D05  89 4D FC                  MOV dword ptr [EBP + -0x4],ECX
004C5D08  5F                        POP EDI
004C5D09  5E                        POP ESI
004C5D0A  5B                        POP EBX
004C5D0B  D9 5D 14                  FSTP float ptr [EBP + 0x14]
004C5D0E  DD D8                     FSTP ST0
004C5D10  DA 6D FC                  FISUBR dword ptr [EBP + -0x4]
004C5D13  89 55 FC                  MOV dword ptr [EBP + -0x4],EDX
004C5D16  DB 45 FC                  FILD dword ptr [EBP + -0x4]
004C5D19  D8 65 08                  FSUB float ptr [EBP + 0x8]
004C5D1C  D9 45 0C                  FLD float ptr [EBP + 0xc]
004C5D1F  D8 4D 0C                  FMUL float ptr [EBP + 0xc]
004C5D22  D9 45 10                  FLD float ptr [EBP + 0x10]
004C5D25  D8 4D 10                  FMUL float ptr [EBP + 0x10]
004C5D28  DE C1                     FADDP
004C5D2A  D8 45 14                  FADD float ptr [EBP + 0x14]
004C5D2D  D9 C1                     FLD ST1
004C5D2F  D8 CA                     FMUL ST2
004C5D31  D9 C3                     FLD ST3
004C5D33  D8 CC                     FMUL ST4
004C5D35  DE C1                     FADDP
004C5D37  D8 45 14                  FADD float ptr [EBP + 0x14]
004C5D3A  DE D9                     FCOMPP
004C5D3C  DF E0                     FNSTSW AX
004C5D3E  DD D8                     FSTP ST0
004C5D40  F6 C4 01                  TEST AH,0x1
004C5D43  DD D8                     FSTP ST0
004C5D45  74 11                     JZ 0x004c5d58
004C5D47  8B 45 18                  MOV EAX,dword ptr [EBP + 0x18]
004C5D4A  C7 00 00 00 00 00         MOV dword ptr [EAX],0x0
004C5D50  33 C0                     XOR EAX,EAX
004C5D52  8B E5                     MOV ESP,EBP
004C5D54  5D                        POP EBP
004C5D55  C2 14 00                  RET 0x14
LAB_004c5d58:
004C5D58  8B 4D 18                  MOV ECX,dword ptr [EBP + 0x18]
004C5D5B  33 C0                     XOR EAX,EAX
004C5D5D  C7 01 01 00 00 00         MOV dword ptr [ECX],0x1
004C5D63  8B E5                     MOV ESP,EBP
004C5D65  5D                        POP EBP
004C5D66  C2 14 00                  RET 0x14
