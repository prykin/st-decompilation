FUN_004e6e10:
004E6E10  55                        PUSH EBP
004E6E11  8B EC                     MOV EBP,ESP
004E6E13  8B 45 10                  MOV EAX,dword ptr [EBP + 0x10]
004E6E16  8B 4D 14                  MOV ECX,dword ptr [EBP + 0x14]
004E6E19  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
004E6E1C  53                        PUSH EBX
004E6E1D  C7 00 00 00 00 00         MOV dword ptr [EAX],0x0
004E6E23  C7 01 00 00 00 00         MOV dword ptr [ECX],0x0
004E6E29  8D 4A FF                  LEA ECX,[EDX + -0x1]
004E6E2C  56                        PUSH ESI
004E6E2D  8B C1                     MOV EAX,ECX
004E6E2F  57                        PUSH EDI
004E6E30  C1 E0 05                  SHL EAX,0x5
004E6E33  33 D2                     XOR EDX,EDX
004E6E35  33 FF                     XOR EDI,EDI
004E6E37  03 C1                     ADD EAX,ECX
004E6E39  8D 04 40                  LEA EAX,[EAX + EAX*0x2]
004E6E3C  8D 0C 45 4C 0E 7C 00      LEA ECX,[EAX*0x2 + 0x7c0e4c]
LAB_004e6e43:
004E6E43  8A 59 01                  MOV BL,byte ptr [ECX + 0x1]
004E6E46  B8 01 00 00 00            MOV EAX,0x1
004E6E4B  84 DB                     TEST BL,BL
004E6E4D  74 27                     JZ 0x004e6e76
004E6E4F  8B 75 10                  MOV ESI,dword ptr [EBP + 0x10]
004E6E52  8D 34 96                  LEA ESI,[ESI + EDX*0x4]
LAB_004e6e55:
004E6E55  83 F8 03                  CMP EAX,0x3
004E6E58  7D 1C                     JGE 0x004e6e76
004E6E5A  33 DB                     XOR EBX,EBX
004E6E5C  8A 1C 01                  MOV BL,byte ptr [ECX + EAX*0x1]
004E6E5F  3B 5D 0C                  CMP EBX,dword ptr [EBP + 0xc]
004E6E62  75 09                     JNZ 0x004e6e6d
004E6E64  8D 5F 32                  LEA EBX,[EDI + 0x32]
004E6E67  42                        INC EDX
004E6E68  89 1E                     MOV dword ptr [ESI],EBX
004E6E6A  83 C6 04                  ADD ESI,0x4
LAB_004e6e6d:
004E6E6D  8A 5C 01 01               MOV BL,byte ptr [ECX + EAX*0x1 + 0x1]
004E6E71  40                        INC EAX
004E6E72  84 DB                     TEST BL,BL
004E6E74  75 DF                     JNZ 0x004e6e55
LAB_004e6e76:
004E6E76  47                        INC EDI
004E6E77  83 C1 03                  ADD ECX,0x3
004E6E7A  83 FF 42                  CMP EDI,0x42
004E6E7D  7C C4                     JL 0x004e6e43
004E6E7F  33 D2                     XOR EDX,EDX
004E6E81  33 C0                     XOR EAX,EAX
LAB_004e6e83:
004E6E83  8A 9C 40 D5 0D 7C 00      MOV BL,byte ptr [EAX + EAX*0x2 + 0x7c0dd5]
004E6E8A  B9 01 00 00 00            MOV ECX,0x1
004E6E8F  84 DB                     TEST BL,BL
004E6E91  74 2E                     JZ 0x004e6ec1
004E6E93  8B 75 14                  MOV ESI,dword ptr [EBP + 0x14]
004E6E96  8D 3C 96                  LEA EDI,[ESI + EDX*0x4]
LAB_004e6e99:
004E6E99  83 F9 03                  CMP ECX,0x3
004E6E9C  7D 23                     JGE 0x004e6ec1
004E6E9E  8D B4 40 D4 0D 7C 00      LEA ESI,[EAX + EAX*0x2 + 0x7c0dd4]
004E6EA5  33 DB                     XOR EBX,EBX
004E6EA7  8A 1C 0E                  MOV BL,byte ptr [ESI + ECX*0x1]
004E6EAA  3B 5D 0C                  CMP EBX,dword ptr [EBP + 0xc]
004E6EAD  75 09                     JNZ 0x004e6eb8
004E6EAF  8D 58 01                  LEA EBX,[EAX + 0x1]
004E6EB2  42                        INC EDX
004E6EB3  89 1F                     MOV dword ptr [EDI],EBX
004E6EB5  83 C7 04                  ADD EDI,0x4
LAB_004e6eb8:
004E6EB8  8A 5C 0E 01               MOV BL,byte ptr [ESI + ECX*0x1 + 0x1]
004E6EBC  41                        INC ECX
004E6EBD  84 DB                     TEST BL,BL
004E6EBF  75 D8                     JNZ 0x004e6e99
LAB_004e6ec1:
004E6EC1  40                        INC EAX
004E6EC2  83 F8 28                  CMP EAX,0x28
004E6EC5  7C BC                     JL 0x004e6e83
004E6EC7  5F                        POP EDI
004E6EC8  5E                        POP ESI
004E6EC9  5B                        POP EBX
004E6ECA  5D                        POP EBP
004E6ECB  C2 10 00                  RET 0x10
