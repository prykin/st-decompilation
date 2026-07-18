FUN_0048cc80:
0048CC80  55                        PUSH EBP
0048CC81  8B EC                     MOV EBP,ESP
0048CC83  83 EC 60                  SUB ESP,0x60
0048CC86  A1 F8 8D 85 00            MOV EAX,[0x00858df8]
0048CC8B  53                        PUSH EBX
0048CC8C  56                        PUSH ESI
0048CC8D  89 4D F4                  MOV dword ptr [EBP + -0xc],ECX
0048CC90  57                        PUSH EDI
0048CC91  8D 55 A4                  LEA EDX,[EBP + -0x5c]
0048CC94  8D 4D A0                  LEA ECX,[EBP + -0x60]
0048CC97  6A 00                     PUSH 0x0
0048CC99  52                        PUSH EDX
0048CC9A  C7 45 FC C8 00 00 00      MOV dword ptr [EBP + -0x4],0xc8
0048CCA1  89 45 A0                  MOV dword ptr [EBP + -0x60],EAX
0048CCA4  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
0048CCAA  E8 41 0B 2A 00            CALL 0x0072d7f0
0048CCAF  8B F0                     MOV ESI,EAX
0048CCB1  83 C4 08                  ADD ESP,0x8
0048CCB4  85 F6                     TEST ESI,ESI
0048CCB6  0F 85 1E 01 00 00         JNZ 0x0048cdda
0048CCBC  8B 7D F4                  MOV EDI,dword ptr [EBP + -0xc]
0048CCBF  8B 87 7B 04 00 00         MOV EAX,dword ptr [EDI + 0x47b]
0048CCC5  85 C0                     TEST EAX,EAX
0048CCC7  75 12                     JNZ 0x0048ccdb
0048CCC9  6A 05                     PUSH 0x5
0048CCCB  6A 0E                     PUSH 0xe
0048CCCD  6A 0A                     PUSH 0xa
0048CCCF  56                        PUSH ESI
0048CCD0  E8 BB 15 22 00            CALL 0x006ae290
0048CCD5  89 87 7B 04 00 00         MOV dword ptr [EDI + 0x47b],EAX
LAB_0048ccdb:
0048CCDB  8B 8F 7B 04 00 00         MOV ECX,dword ptr [EDI + 0x47b]
0048CCE1  8B 41 0C                  MOV EAX,dword ptr [ECX + 0xc]
0048CCE4  85 C0                     TEST EAX,EAX
0048CCE6  0F 86 B7 00 00 00         JBE 0x0048cda3
0048CCEC  8B 5D 10                  MOV EBX,dword ptr [EBP + 0x10]
0048CCEF  8D 70 FF                  LEA ESI,[EAX + -0x1]
0048CCF2  85 F6                     TEST ESI,ESI
0048CCF4  89 45 F8                  MOV dword ptr [EBP + -0x8],EAX
0048CCF7  7C 6C                     JL 0x0048cd65
LAB_0048ccf9:
0048CCF9  8B 8F 7B 04 00 00         MOV ECX,dword ptr [EDI + 0x47b]
0048CCFF  8D 45 E4                  LEA EAX,[EBP + -0x1c]
0048CD02  50                        PUSH EAX
0048CD03  8B D6                     MOV EDX,ESI
0048CD05  E8 66 FF 21 00            CALL 0x006acc70
0048CD0A  66 8B 45 E8               MOV AX,word ptr [EBP + -0x18]
0048CD0E  66 3D FF FF               CMP AX,0xffff
0048CD12  74 4B                     JZ 0x0048cd5f
0048CD14  0F BE 4D 08               MOVSX ECX,byte ptr [EBP + 0x8]
0048CD18  39 4D E4                  CMP dword ptr [EBP + -0x1c],ECX
0048CD1B  75 45                     JNZ 0x0048cd62
0048CD1D  66 3B 45 0C               CMP AX,word ptr [EBP + 0xc]
0048CD21  75 3F                     JNZ 0x0048cd62
0048CD23  8B 55 EA                  MOV EDX,dword ptr [EBP + -0x16]
0048CD26  8B 8F 7B 04 00 00         MOV ECX,dword ptr [EDI + 0x47b]
0048CD2C  03 D3                     ADD EDX,EBX
0048CD2E  8D 45 E4                  LEA EAX,[EBP + -0x1c]
0048CD31  89 55 EA                  MOV dword ptr [EBP + -0x16],EDX
0048CD34  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
0048CD37  50                        PUSH EAX
0048CD38  56                        PUSH ESI
0048CD39  51                        PUSH ECX
0048CD3A  89 55 EE                  MOV dword ptr [EBP + -0x12],EDX
0048CD3D  E8 FE 13 22 00            CALL 0x006ae140
0048CD42  8B 15 7C D7 7E 00         MOV EDX,dword ptr [0x007ed77c]
0048CD48  68 76 4B 00 00            PUSH 0x4b76
0048CD4D  68 3C 9D 7A 00            PUSH 0x7a9d3c
0048CD52  52                        PUSH EDX
0048CD53  68 09 00 FE AF            PUSH 0xaffe0009
0048CD58  E8 E3 90 21 00            CALL 0x006a5e40
0048CD5D  EB 03                     JMP 0x0048cd62
LAB_0048cd5f:
0048CD5F  89 75 F8                  MOV dword ptr [EBP + -0x8],ESI
LAB_0048cd62:
0048CD62  4E                        DEC ESI
0048CD63  79 94                     JNS 0x0048ccf9
LAB_0048cd65:
0048CD65  0F BE 45 08               MOVSX EAX,byte ptr [EBP + 0x8]
0048CD69  66 8B 4D 0C               MOV CX,word ptr [EBP + 0xc]
0048CD6D  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
0048CD70  89 45 E4                  MOV dword ptr [EBP + -0x1c],EAX
0048CD73  66 89 4D E8               MOV word ptr [EBP + -0x18],CX
0048CD77  8B 4D F8                  MOV ECX,dword ptr [EBP + -0x8]
0048CD7A  8D 45 E4                  LEA EAX,[EBP + -0x1c]
0048CD7D  89 55 EE                  MOV dword ptr [EBP + -0x12],EDX
0048CD80  8B 97 7B 04 00 00         MOV EDX,dword ptr [EDI + 0x47b]
0048CD86  50                        PUSH EAX
0048CD87  51                        PUSH ECX
0048CD88  52                        PUSH EDX
0048CD89  89 5D EA                  MOV dword ptr [EBP + -0x16],EBX
0048CD8C  E8 AF 13 22 00            CALL 0x006ae140
0048CD91  8B 4D A0                  MOV ECX,dword ptr [EBP + -0x60]
0048CD94  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
0048CD9A  5F                        POP EDI
0048CD9B  5E                        POP ESI
0048CD9C  5B                        POP EBX
0048CD9D  8B E5                     MOV ESP,EBP
0048CD9F  5D                        POP EBP
0048CDA0  C2 0C 00                  RET 0xc
LAB_0048cda3:
0048CDA3  0F BE 45 08               MOVSX EAX,byte ptr [EBP + 0x8]
0048CDA7  66 8B 55 0C               MOV DX,word ptr [EBP + 0xc]
0048CDAB  89 45 E4                  MOV dword ptr [EBP + -0x1c],EAX
0048CDAE  8B 45 10                  MOV EAX,dword ptr [EBP + 0x10]
0048CDB1  66 89 55 E8               MOV word ptr [EBP + -0x18],DX
0048CDB5  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
0048CDB8  89 45 EA                  MOV dword ptr [EBP + -0x16],EAX
0048CDBB  8D 45 E4                  LEA EAX,[EBP + -0x1c]
0048CDBE  89 55 EE                  MOV dword ptr [EBP + -0x12],EDX
0048CDC1  50                        PUSH EAX
0048CDC2  51                        PUSH ECX
0048CDC3  E8 F8 13 22 00            CALL 0x006ae1c0
0048CDC8  8B 4D A0                  MOV ECX,dword ptr [EBP + -0x60]
0048CDCB  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
0048CDD1  5F                        POP EDI
0048CDD2  5E                        POP ESI
0048CDD3  5B                        POP EBX
0048CDD4  8B E5                     MOV ESP,EBP
0048CDD6  5D                        POP EBP
0048CDD7  C2 0C 00                  RET 0xc
LAB_0048cdda:
0048CDDA  8B 55 A0                  MOV EDX,dword ptr [EBP + -0x60]
0048CDDD  81 FE 09 00 FE AF         CMP ESI,0xaffe0009
0048CDE3  89 15 F8 8D 85 00         MOV dword ptr [0x00858df8],EDX
0048CDE9  74 36                     JZ 0x0048ce21
0048CDEB  68 E0 B9 7A 00            PUSH 0x7ab9e0
0048CDF0  68 CC 4C 7A 00            PUSH 0x7a4ccc
0048CDF5  56                        PUSH ESI
0048CDF6  6A 00                     PUSH 0x0
0048CDF8  68 84 4B 00 00            PUSH 0x4b84
0048CDFD  68 3C 9D 7A 00            PUSH 0x7a9d3c
0048CE02  E8 C9 06 22 00            CALL 0x006ad4d0
0048CE07  83 C4 18                  ADD ESP,0x18
0048CE0A  85 C0                     TEST EAX,EAX
0048CE0C  74 01                     JZ 0x0048ce0f
0048CE0E  CC                        INT3
LAB_0048ce0f:
0048CE0F  68 85 4B 00 00            PUSH 0x4b85
0048CE14  68 3C 9D 7A 00            PUSH 0x7a9d3c
0048CE19  6A 00                     PUSH 0x0
0048CE1B  56                        PUSH ESI
0048CE1C  E8 1F 90 21 00            CALL 0x006a5e40
LAB_0048ce21:
0048CE21  5F                        POP EDI
0048CE22  5E                        POP ESI
0048CE23  5B                        POP EBX
0048CE24  8B E5                     MOV ESP,EBP
0048CE26  5D                        POP EBP
0048CE27  C2 0C 00                  RET 0xc
