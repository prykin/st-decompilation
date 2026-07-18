FUN_0075d740:
0075D740  55                        PUSH EBP
0075D741  8B EC                     MOV EBP,ESP
0075D743  83 EC 20                  SUB ESP,0x20
0075D746  8B 45 14                  MOV EAX,dword ptr [EBP + 0x14]
0075D749  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
0075D74C  56                        PUSH ESI
0075D74D  33 F6                     XOR ESI,ESI
0075D74F  8B 08                     MOV ECX,dword ptr [EAX]
0075D751  33 C0                     XOR EAX,EAX
0075D753  89 4D E4                  MOV dword ptr [EBP + -0x1c],ECX
0075D756  8B 8A 26 01 00 00         MOV ECX,dword ptr [EDX + 0x126]
0075D75C  85 C9                     TEST ECX,ECX
0075D75E  89 45 F8                  MOV dword ptr [EBP + -0x8],EAX
0075D761  89 75 FC                  MOV dword ptr [EBP + -0x4],ESI
0075D764  0F 8E 15 01 00 00         JLE 0x0075d87f
0075D76A  53                        PUSH EBX
0075D76B  57                        PUSH EDI
LAB_0075d76c:
0075D76C  8B 55 E4                  MOV EDX,dword ptr [EBP + -0x1c]
0075D76F  8B 7D 10                  MOV EDI,dword ptr [EBP + 0x10]
0075D772  33 C9                     XOR ECX,ECX
0075D774  89 4D E8                  MOV dword ptr [EBP + -0x18],ECX
0075D777  8D 04 82                  LEA EAX,[EDX + EAX*0x4]
0075D77A  EB 09                     JMP 0x0075d785
LAB_0075d77c:
0075D77C  8B 7D 10                  MOV EDI,dword ptr [EBP + 0x10]
0075D77F  8B 75 FC                  MOV ESI,dword ptr [EBP + -0x4]
0075D782  8B 45 E0                  MOV EAX,dword ptr [EBP + -0x20]
LAB_0075d785:
0075D785  8B 14 B7                  MOV EDX,dword ptr [EDI + ESI*0x4]
0075D788  85 C9                     TEST ECX,ECX
0075D78A  75 06                     JNZ 0x0075d792
0075D78C  8B 7C B7 FC               MOV EDI,dword ptr [EDI + ESI*0x4 + -0x4]
0075D790  EB 04                     JMP 0x0075d796
LAB_0075d792:
0075D792  8B 7C B7 04               MOV EDI,dword ptr [EDI + ESI*0x4 + 0x4]
LAB_0075d796:
0075D796  8B 08                     MOV ECX,dword ptr [EAX]
0075D798  83 C0 04                  ADD EAX,0x4
0075D79B  8B 5D F8                  MOV EBX,dword ptr [EBP + -0x8]
0075D79E  89 45 E0                  MOV dword ptr [EBP + -0x20],EAX
0075D7A1  33 C0                     XOR EAX,EAX
0075D7A3  43                        INC EBX
0075D7A4  8A 02                     MOV AL,byte ptr [EDX]
0075D7A6  89 5D F8                  MOV dword ptr [EBP + -0x8],EBX
0075D7A9  8B F0                     MOV ESI,EAX
0075D7AB  33 C0                     XOR EAX,EAX
0075D7AD  8A 07                     MOV AL,byte ptr [EDI]
0075D7AF  33 DB                     XOR EBX,EBX
0075D7B1  8D 34 76                  LEA ESI,[ESI + ESI*0x2]
0075D7B4  8A 5F 01                  MOV BL,byte ptr [EDI + 0x1]
0075D7B7  03 F0                     ADD ESI,EAX
0075D7B9  47                        INC EDI
0075D7BA  42                        INC EDX
0075D7BB  33 C0                     XOR EAX,EAX
0075D7BD  89 75 14                  MOV dword ptr [EBP + 0x14],ESI
0075D7C0  8A 02                     MOV AL,byte ptr [EDX]
0075D7C2  8D 04 40                  LEA EAX,[EAX + EAX*0x2]
0075D7C5  03 C3                     ADD EAX,EBX
0075D7C7  8D 1C B5 08 00 00 00      LEA EBX,[ESI*0x4 + 0x8]
0075D7CE  C1 FB 04                  SAR EBX,0x4
0075D7D1  88 19                     MOV byte ptr [ECX],BL
0075D7D3  8D 1C 70                  LEA EBX,[EAX + ESI*0x2]
0075D7D6  47                        INC EDI
0075D7D7  42                        INC EDX
0075D7D8  8D 5C 1E 07               LEA EBX,[ESI + EBX*0x1 + 0x7]
0075D7DC  41                        INC ECX
0075D7DD  C1 FB 04                  SAR EBX,0x4
0075D7E0  88 19                     MOV byte ptr [ECX],BL
0075D7E2  8B 5D 0C                  MOV EBX,dword ptr [EBP + 0xc]
0075D7E5  41                        INC ECX
0075D7E6  8B F0                     MOV ESI,EAX
0075D7E8  8B 5B 28                  MOV EBX,dword ptr [EBX + 0x28]
0075D7EB  89 75 F0                  MOV dword ptr [EBP + -0x10],ESI
0075D7EE  83 EB 02                  SUB EBX,0x2
0075D7F1  74 43                     JZ 0x0075d836
0075D7F3  89 5D EC                  MOV dword ptr [EBP + -0x14],EBX
LAB_0075d7f6:
0075D7F6  33 C0                     XOR EAX,EAX
0075D7F8  33 DB                     XOR EBX,EBX
0075D7FA  8A 02                     MOV AL,byte ptr [EDX]
0075D7FC  8A 1F                     MOV BL,byte ptr [EDI]
0075D7FE  8D 34 76                  LEA ESI,[ESI + ESI*0x2]
0075D801  8D 04 40                  LEA EAX,[EAX + EAX*0x2]
0075D804  89 75 F4                  MOV dword ptr [EBP + -0xc],ESI
0075D807  03 C3                     ADD EAX,EBX
0075D809  8B 5D 14                  MOV EBX,dword ptr [EBP + 0x14]
0075D80C  47                        INC EDI
0075D80D  42                        INC EDX
0075D80E  8D 5C 1E 08               LEA EBX,[ESI + EBX*0x1 + 0x8]
0075D812  C1 FB 04                  SAR EBX,0x4
0075D815  88 19                     MOV byte ptr [ECX],BL
0075D817  8D 5C 06 07               LEA EBX,[ESI + EAX*0x1 + 0x7]
0075D81B  8B 75 F0                  MOV ESI,dword ptr [EBP + -0x10]
0075D81E  41                        INC ECX
0075D81F  C1 FB 04                  SAR EBX,0x4
0075D822  88 19                     MOV byte ptr [ECX],BL
0075D824  8B 5D EC                  MOV EBX,dword ptr [EBP + -0x14]
0075D827  41                        INC ECX
0075D828  89 75 14                  MOV dword ptr [EBP + 0x14],ESI
0075D82B  8B F0                     MOV ESI,EAX
0075D82D  4B                        DEC EBX
0075D82E  89 75 F0                  MOV dword ptr [EBP + -0x10],ESI
0075D831  89 5D EC                  MOV dword ptr [EBP + -0x14],EBX
0075D834  75 C0                     JNZ 0x0075d7f6
LAB_0075d836:
0075D836  8B 55 14                  MOV EDX,dword ptr [EBP + 0x14]
0075D839  8D 14 42                  LEA EDX,[EDX + EAX*0x2]
0075D83C  8D 54 10 08               LEA EDX,[EAX + EDX*0x1 + 0x8]
0075D840  8D 04 85 07 00 00 00      LEA EAX,[EAX*0x4 + 0x7]
0075D847  C1 FA 04                  SAR EDX,0x4
0075D84A  C1 F8 04                  SAR EAX,0x4
0075D84D  88 11                     MOV byte ptr [ECX],DL
0075D84F  88 41 01                  MOV byte ptr [ECX + 0x1],AL
0075D852  8B 4D E8                  MOV ECX,dword ptr [EBP + -0x18]
0075D855  41                        INC ECX
0075D856  83 F9 02                  CMP ECX,0x2
0075D859  89 4D E8                  MOV dword ptr [EBP + -0x18],ECX
0075D85C  0F 8C 1A FF FF FF         JL 0x0075d77c
0075D862  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
0075D865  8B 75 FC                  MOV ESI,dword ptr [EBP + -0x4]
0075D868  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
0075D86B  46                        INC ESI
0075D86C  8B 91 26 01 00 00         MOV EDX,dword ptr [ECX + 0x126]
0075D872  89 75 FC                  MOV dword ptr [EBP + -0x4],ESI
0075D875  3B C2                     CMP EAX,EDX
0075D877  0F 8C EF FE FF FF         JL 0x0075d76c
0075D87D  5F                        POP EDI
0075D87E  5B                        POP EBX
LAB_0075d87f:
0075D87F  5E                        POP ESI
0075D880  8B E5                     MOV ESP,EBP
0075D882  5D                        POP EBP
0075D883  C2 10 00                  RET 0x10
