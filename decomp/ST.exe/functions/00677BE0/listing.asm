FUN_00677be0:
00677BE0  55                        PUSH EBP
00677BE1  8B EC                     MOV EBP,ESP
00677BE3  83 EC 6C                  SUB ESP,0x6c
00677BE6  A1 F8 8D 85 00            MOV EAX,[0x00858df8]
00677BEB  53                        PUSH EBX
00677BEC  56                        PUSH ESI
00677BED  57                        PUSH EDI
00677BEE  8D 55 98                  LEA EDX,[EBP + -0x68]
00677BF1  8D 4D 94                  LEA ECX,[EBP + -0x6c]
00677BF4  6A 00                     PUSH 0x0
00677BF6  52                        PUSH EDX
00677BF7  C7 45 EC 00 00 00 00      MOV dword ptr [EBP + -0x14],0x0
00677BFE  89 45 94                  MOV dword ptr [EBP + -0x6c],EAX
00677C01  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
00677C07  E8 E4 5B 0B 00            CALL 0x0072d7f0
00677C0C  8B F0                     MOV ESI,EAX
00677C0E  83 C4 08                  ADD ESP,0x8
00677C11  85 F6                     TEST ESI,ESI
00677C13  0F 85 CA 01 00 00         JNZ 0x00677de3
00677C19  8B 0D 60 A1 7F 00         MOV ECX,dword ptr [0x007fa160]
00677C1F  85 C9                     TEST ECX,ECX
00677C21  75 1D                     JNZ 0x00677c40
00677C23  A1 7C D7 7E 00            MOV EAX,[0x007ed77c]
00677C28  68 9C 03 00 00            PUSH 0x39c
00677C2D  68 58 2D 7D 00            PUSH 0x7d2d58
00677C32  50                        PUSH EAX
00677C33  6A CC                     PUSH -0x34
00677C35  E8 06 E2 02 00            CALL 0x006a5e40
00677C3A  8B 0D 60 A1 7F 00         MOV ECX,dword ptr [0x007fa160]
LAB_00677c40:
00677C40  8B 59 0C                  MOV EBX,dword ptr [ECX + 0xc]
00677C43  4B                        DEC EBX
00677C44  89 5D F4                  MOV dword ptr [EBP + -0xc],EBX
00677C47  0F 88 83 01 00 00         JS 0x00677dd0
LAB_00677c4d:
00677C4D  3B 59 0C                  CMP EBX,dword ptr [ECX + 0xc]
00677C50  73 0D                     JNC 0x00677c5f
00677C52  8B 41 08                  MOV EAX,dword ptr [ECX + 0x8]
00677C55  8B 51 1C                  MOV EDX,dword ptr [ECX + 0x1c]
00677C58  0F AF C3                  IMUL EAX,EBX
00677C5B  03 C2                     ADD EAX,EDX
00677C5D  EB 02                     JMP 0x00677c61
LAB_00677c5f:
00677C5F  33 C0                     XOR EAX,EAX
LAB_00677c61:
00677C61  8B 38                     MOV EDI,dword ptr [EAX]
00677C63  85 FF                     TEST EDI,EDI
00677C65  0F 84 41 01 00 00         JZ 0x00677dac
00677C6B  8B 17                     MOV EDX,dword ptr [EDI]
00677C6D  8B CF                     MOV ECX,EDI
00677C6F  FF 92 2C 01 00 00         CALL dword ptr [EDX + 0x12c]
00677C75  66 3B 45 08               CMP AX,word ptr [EBP + 0x8]
00677C79  89 45 E8                  MOV dword ptr [EBP + -0x18],EAX
00677C7C  0F 85 24 01 00 00         JNZ 0x00677da6
00677C82  66 8B 75 0C               MOV SI,word ptr [EBP + 0xc]
00677C86  66 85 F6                  TEST SI,SI
00677C89  74 15                     JZ 0x00677ca0
00677C8B  8B 07                     MOV EAX,dword ptr [EDI]
00677C8D  8B CF                     MOV ECX,EDI
00677C8F  FF 90 30 01 00 00         CALL dword ptr [EAX + 0x130]
00677C95  0F BF CE                  MOVSX ECX,SI
00677C98  3B C1                     CMP EAX,ECX
00677C9A  0F 85 06 01 00 00         JNZ 0x00677da6
LAB_00677ca0:
00677CA0  8B 45 10                  MOV EAX,dword ptr [EBP + 0x10]
00677CA3  BB 01 00 00 00            MOV EBX,0x1
00677CA8  85 C0                     TEST EAX,EAX
00677CAA  89 5D F0                  MOV dword ptr [EBP + -0x10],EBX
00677CAD  74 48                     JZ 0x00677cf7
00677CAF  80 38 00                  CMP byte ptr [EAX],0x0
00677CB2  74 43                     JZ 0x00677cf7
00677CB4  8B 17                     MOV EDX,dword ptr [EDI]
00677CB6  8D 45 D8                  LEA EAX,[EBP + -0x28]
00677CB9  50                        PUSH EAX
00677CBA  8B CF                     MOV ECX,EDI
00677CBC  FF 52 74                  CALL dword ptr [EDX + 0x74]
00677CBF  8B 45 10                  MOV EAX,dword ptr [EBP + 0x10]
00677CC2  8D 75 D8                  LEA ESI,[EBP + -0x28]
LAB_00677cc5:
00677CC5  8A 10                     MOV DL,byte ptr [EAX]
00677CC7  8A CA                     MOV CL,DL
00677CC9  3A 16                     CMP DL,byte ptr [ESI]
00677CCB  75 1C                     JNZ 0x00677ce9
00677CCD  84 C9                     TEST CL,CL
00677CCF  74 14                     JZ 0x00677ce5
00677CD1  8A 50 01                  MOV DL,byte ptr [EAX + 0x1]
00677CD4  8A CA                     MOV CL,DL
00677CD6  3A 56 01                  CMP DL,byte ptr [ESI + 0x1]
00677CD9  75 0E                     JNZ 0x00677ce9
00677CDB  83 C0 02                  ADD EAX,0x2
00677CDE  83 C6 02                  ADD ESI,0x2
00677CE1  84 C9                     TEST CL,CL
00677CE3  75 E0                     JNZ 0x00677cc5
LAB_00677ce5:
00677CE5  33 C0                     XOR EAX,EAX
00677CE7  EB 05                     JMP 0x00677cee
LAB_00677ce9:
00677CE9  1B C0                     SBB EAX,EAX
00677CEB  83 D8 FF                  SBB EAX,-0x1
LAB_00677cee:
00677CEE  85 C0                     TEST EAX,EAX
00677CF0  74 05                     JZ 0x00677cf7
00677CF2  33 DB                     XOR EBX,EBX
00677CF4  89 5D F0                  MOV dword ptr [EBP + -0x10],EBX
LAB_00677cf7:
00677CF7  85 DB                     TEST EBX,EBX
00677CF9  0F 84 A4 00 00 00         JZ 0x00677da3
00677CFF  66 8B 75 20               MOV SI,word ptr [EBP + 0x20]
00677D03  66 85 F6                  TEST SI,SI
00677D06  7E 7A                     JLE 0x00677d82
00677D08  66 83 7D 24 00            CMP word ptr [EBP + 0x24],0x0
00677D0D  7E 73                     JLE 0x00677d82
00677D0F  66 83 7D 28 00            CMP word ptr [EBP + 0x28],0x0
00677D14  7E 6C                     JLE 0x00677d82
00677D16  8D 45 FA                  LEA EAX,[EBP + -0x6]
00677D19  8D 4D FC                  LEA ECX,[EBP + -0x4]
00677D1C  50                        PUSH EAX
00677D1D  8D 55 FE                  LEA EDX,[EBP + -0x2]
00677D20  51                        PUSH ECX
00677D21  52                        PUSH EDX
00677D22  8B CF                     MOV ECX,EDI
00677D24  E8 E2 E1 D8 FF            CALL 0x00405f0b
00677D29  66 8B 45 FE               MOV AX,word ptr [EBP + -0x2]
00677D2D  66 8B 5D 14               MOV BX,word ptr [EBP + 0x14]
00677D31  66 3B C3                  CMP AX,BX
00677D34  7C 45                     JL 0x00677d7b
00677D36  66 8B 4D FC               MOV CX,word ptr [EBP + -0x4]
00677D3A  66 3B 4D 18               CMP CX,word ptr [EBP + 0x18]
00677D3E  7C 3B                     JL 0x00677d7b
00677D40  66 8B 55 FA               MOV DX,word ptr [EBP + -0x6]
00677D44  66 3B 55 1C               CMP DX,word ptr [EBP + 0x1c]
00677D48  7C 31                     JL 0x00677d7b
00677D4A  0F BF DB                  MOVSX EBX,BX
00677D4D  0F BF F6                  MOVSX ESI,SI
00677D50  0F BF C0                  MOVSX EAX,AX
00677D53  03 DE                     ADD EBX,ESI
00677D55  3B C3                     CMP EAX,EBX
00677D57  7D 22                     JGE 0x00677d7b
00677D59  0F BF 45 18               MOVSX EAX,word ptr [EBP + 0x18]
00677D5D  0F BF 75 24               MOVSX ESI,word ptr [EBP + 0x24]
00677D61  0F BF C9                  MOVSX ECX,CX
00677D64  03 C6                     ADD EAX,ESI
00677D66  3B C8                     CMP ECX,EAX
00677D68  7D 11                     JGE 0x00677d7b
00677D6A  0F BF 45 1C               MOVSX EAX,word ptr [EBP + 0x1c]
00677D6E  0F BF 4D 28               MOVSX ECX,word ptr [EBP + 0x28]
00677D72  0F BF D2                  MOVSX EDX,DX
00677D75  03 C1                     ADD EAX,ECX
00677D77  3B D0                     CMP EDX,EAX
00677D79  7C 04                     JL 0x00677d7f
LAB_00677d7b:
00677D7B  33 DB                     XOR EBX,EBX
00677D7D  EB 03                     JMP 0x00677d82
LAB_00677d7f:
00677D7F  8B 5D F0                  MOV EBX,dword ptr [EBP + -0x10]
LAB_00677d82:
00677D82  85 DB                     TEST EBX,EBX
00677D84  74 1D                     JZ 0x00677da3
00677D86  8B 45 2C                  MOV EAX,dword ptr [EBP + 0x2c]
00677D89  85 C0                     TEST EAX,EAX
00677D8B  74 16                     JZ 0x00677da3
00677D8D  8B 4D 30                  MOV ECX,dword ptr [EBP + 0x30]
00677D90  8B 55 F4                  MOV EDX,dword ptr [EBP + -0xc]
00677D93  51                        PUSH ECX
00677D94  8B 4D E8                  MOV ECX,dword ptr [EBP + -0x18]
00677D97  57                        PUSH EDI
00677D98  52                        PUSH EDX
00677D99  51                        PUSH ECX
00677D9A  FF D0                     CALL EAX
00677D9C  83 C4 10                  ADD ESP,0x10
00677D9F  85 C0                     TEST EAX,EAX
00677DA1  75 26                     JNZ 0x00677dc9
LAB_00677da3:
00677DA3  8B 5D F4                  MOV EBX,dword ptr [EBP + -0xc]
LAB_00677da6:
00677DA6  8B 0D 60 A1 7F 00         MOV ECX,dword ptr [0x007fa160]
LAB_00677dac:
00677DAC  4B                        DEC EBX
00677DAD  89 5D F4                  MOV dword ptr [EBP + -0xc],EBX
00677DB0  0F 89 97 FE FF FF         JNS 0x00677c4d
00677DB6  8B 55 94                  MOV EDX,dword ptr [EBP + -0x6c]
00677DB9  8B 45 EC                  MOV EAX,dword ptr [EBP + -0x14]
00677DBC  89 15 F8 8D 85 00         MOV dword ptr [0x00858df8],EDX
00677DC2  5F                        POP EDI
00677DC3  5E                        POP ESI
00677DC4  5B                        POP EBX
00677DC5  8B E5                     MOV ESP,EBP
00677DC7  5D                        POP EBP
00677DC8  C3                        RET
LAB_00677dc9:
00677DC9  C7 45 EC FF FF FF FF      MOV dword ptr [EBP + -0x14],0xffffffff
LAB_00677dd0:
00677DD0  8B 55 94                  MOV EDX,dword ptr [EBP + -0x6c]
00677DD3  8B 45 EC                  MOV EAX,dword ptr [EBP + -0x14]
00677DD6  89 15 F8 8D 85 00         MOV dword ptr [0x00858df8],EDX
00677DDC  5F                        POP EDI
00677DDD  5E                        POP ESI
00677DDE  5B                        POP EBX
00677DDF  8B E5                     MOV ESP,EBP
00677DE1  5D                        POP EBP
00677DE2  C3                        RET
LAB_00677de3:
00677DE3  8B 45 94                  MOV EAX,dword ptr [EBP + -0x6c]
00677DE6  68 14 2E 7D 00            PUSH 0x7d2e14
00677DEB  68 CC 4C 7A 00            PUSH 0x7a4ccc
00677DF0  56                        PUSH ESI
00677DF1  6A 00                     PUSH 0x0
00677DF3  68 BA 03 00 00            PUSH 0x3ba
00677DF8  68 58 2D 7D 00            PUSH 0x7d2d58
00677DFD  A3 F8 8D 85 00            MOV [0x00858df8],EAX
00677E02  E8 C9 56 03 00            CALL 0x006ad4d0
00677E07  83 C4 18                  ADD ESP,0x18
00677E0A  85 C0                     TEST EAX,EAX
00677E0C  74 01                     JZ 0x00677e0f
00677E0E  CC                        INT3
LAB_00677e0f:
00677E0F  68 BB 03 00 00            PUSH 0x3bb
00677E14  68 58 2D 7D 00            PUSH 0x7d2d58
00677E19  6A 00                     PUSH 0x0
00677E1B  56                        PUSH ESI
00677E1C  E8 1F E0 02 00            CALL 0x006a5e40
00677E21  8B C6                     MOV EAX,ESI
00677E23  5F                        POP EDI
00677E24  5E                        POP ESI
00677E25  5B                        POP EBX
00677E26  8B E5                     MOV ESP,EBP
00677E28  5D                        POP EBP
00677E29  C3                        RET
