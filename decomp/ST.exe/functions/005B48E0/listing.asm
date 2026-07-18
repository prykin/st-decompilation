FUN_005b48e0:
005B48E0  55                        PUSH EBP
005B48E1  8B EC                     MOV EBP,ESP
005B48E3  83 EC 50                  SUB ESP,0x50
005B48E6  A1 F8 8D 85 00            MOV EAX,[0x00858df8]
005B48EB  53                        PUSH EBX
005B48EC  56                        PUSH ESI
005B48ED  89 4D FC                  MOV dword ptr [EBP + -0x4],ECX
005B48F0  57                        PUSH EDI
005B48F1  8D 55 B4                  LEA EDX,[EBP + -0x4c]
005B48F4  8D 4D B0                  LEA ECX,[EBP + -0x50]
005B48F7  6A 00                     PUSH 0x0
005B48F9  52                        PUSH EDX
005B48FA  89 45 B0                  MOV dword ptr [EBP + -0x50],EAX
005B48FD  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
005B4903  E8 E8 8E 17 00            CALL 0x0072d7f0
005B4908  8B F0                     MOV ESI,EAX
005B490A  83 C4 08                  ADD ESP,0x8
005B490D  85 F6                     TEST ESI,ESI
005B490F  0F 85 A8 01 00 00         JNZ 0x005b4abd
005B4915  8B 5D FC                  MOV EBX,dword ptr [EBP + -0x4]
005B4918  8B 83 CF 1A 00 00         MOV EAX,dword ptr [EBX + 0x1acf]
005B491E  85 C0                     TEST EAX,EAX
005B4920  74 39                     JZ 0x005b495b
005B4922  8D B3 A7 1A 00 00         LEA ESI,[EBX + 0x1aa7]
005B4928  BF 0A 00 00 00            MOV EDI,0xa
LAB_005b492d:
005B492D  8B 06                     MOV EAX,dword ptr [ESI]
005B492F  85 C0                     TEST EAX,EAX
005B4931  74 22                     JZ 0x005b4955
005B4933  8B 48 0C                  MOV ECX,dword ptr [EAX + 0xc]
005B4936  8B 50 08                  MOV EDX,dword ptr [EAX + 0x8]
005B4939  51                        PUSH ECX
005B493A  8B 48 04                  MOV ECX,dword ptr [EAX + 0x4]
005B493D  52                        PUSH EDX
005B493E  8B 10                     MOV EDX,dword ptr [EAX]
005B4940  A1 A8 75 80 00            MOV EAX,[0x008075a8]
005B4945  51                        PUSH ECX
005B4946  52                        PUSH EDX
005B4947  50                        PUSH EAX
005B4948  E8 33 16 10 00            CALL 0x006b5f80
005B494D  8B 0E                     MOV ECX,dword ptr [ESI]
005B494F  51                        PUSH ECX
005B4950  E8 6B 01 11 00            CALL 0x006c4ac0
LAB_005b4955:
005B4955  83 C6 04                  ADD ESI,0x4
005B4958  4F                        DEC EDI
005B4959  75 D2                     JNZ 0x005b492d
LAB_005b495b:
005B495B  8B 83 CF 1A 00 00         MOV EAX,dword ptr [EBX + 0x1acf]
005B4961  33 D2                     XOR EDX,EDX
005B4963  85 C0                     TEST EAX,EAX
005B4965  0F 94 C2                  SETZ DL
005B4968  33 FF                     XOR EDI,EDI
005B496A  B8 44 02 00 00            MOV EAX,0x244
005B496F  89 93 CF 1A 00 00         MOV dword ptr [EBX + 0x1acf],EDX
005B4975  89 7D F4                  MOV dword ptr [EBP + -0xc],EDI
005B4978  89 45 F8                  MOV dword ptr [EBP + -0x8],EAX
005B497B  EB 03                     JMP 0x005b4980
LAB_005b497d:
005B497D  8B 5D FC                  MOV EBX,dword ptr [EBP + -0x4]
LAB_005b4980:
005B4980  8B 0D 6C 17 81 00         MOV ECX,dword ptr [0x0081176c]
005B4986  8B 34 08                  MOV ESI,dword ptr [EAX + ECX*0x1]
005B4989  85 F6                     TEST ESI,ESI
005B498B  0F 84 FF 00 00 00         JZ 0x005b4a90
005B4991  8A 84 0F 70 02 00 00      MOV AL,byte ptr [EDI + ECX*0x1 + 0x270]
005B4998  8D BC 0F 5C 02 00 00      LEA EDI,[EDI + ECX*0x1 + 0x25c]
005B499F  84 C0                     TEST AL,AL
005B49A1  74 05                     JZ 0x005b49a8
005B49A3  8B 47 0C                  MOV EAX,dword ptr [EDI + 0xc]
005B49A6  EB 03                     JMP 0x005b49ab
LAB_005b49a8:
005B49A8  8B 47 08                  MOV EAX,dword ptr [EDI + 0x8]
LAB_005b49ab:
005B49AB  8B 4B 61                  MOV ECX,dword ptr [EBX + 0x61]
005B49AE  8B 5F 10                  MOV EBX,dword ptr [EDI + 0x10]
005B49B1  2B CB                     SUB ECX,EBX
005B49B3  3B C8                     CMP ECX,EAX
005B49B5  0F 82 D5 00 00 00         JC 0x005b4a90
005B49BB  0F BF 56 29               MOVSX EDX,word ptr [ESI + 0x29]
005B49BF  52                        PUSH EDX
005B49C0  56                        PUSH ESI
005B49C1  E8 DA 69 15 00            CALL 0x0070b3a0
005B49C6  0F BF 4E 2C               MOVSX ECX,word ptr [ESI + 0x2c]
005B49CA  8B 57 04                  MOV EDX,dword ptr [EDI + 0x4]
005B49CD  8B D8                     MOV EBX,EAX
005B49CF  0F BF 46 2E               MOVSX EAX,word ptr [ESI + 0x2e]
005B49D3  83 C4 08                  ADD ESP,0x8
005B49D6  50                        PUSH EAX
005B49D7  8B 07                     MOV EAX,dword ptr [EDI]
005B49D9  51                        PUSH ECX
005B49DA  8B 0D A8 75 80 00         MOV ECX,dword ptr [0x008075a8]
005B49E0  52                        PUSH EDX
005B49E1  50                        PUSH EAX
005B49E2  51                        PUSH ECX
005B49E3  E8 98 15 10 00            CALL 0x006b5f80
005B49E8  8B 57 04                  MOV EDX,dword ptr [EDI + 0x4]
005B49EB  8B 07                     MOV EAX,dword ptr [EDI]
005B49ED  53                        PUSH EBX
005B49EE  6A 01                     PUSH 0x1
005B49F0  52                        PUSH EDX
005B49F1  50                        PUSH EAX
005B49F2  E8 41 ED E4 FF            CALL 0x00403738
005B49F7  8A 47 14                  MOV AL,byte ptr [EDI + 0x14]
005B49FA  83 C4 10                  ADD ESP,0x10
005B49FD  84 C0                     TEST AL,AL
005B49FF  74 04                     JZ 0x005b4a05
005B4A01  C6 47 14 00               MOV byte ptr [EDI + 0x14],0x0
LAB_005b4a05:
005B4A05  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
005B4A08  0F BF 47 15               MOVSX EAX,word ptr [EDI + 0x15]
005B4A0C  8B 51 61                  MOV EDX,dword ptr [ECX + 0x61]
005B4A0F  83 F8 03                  CMP EAX,0x3
005B4A12  89 57 10                  MOV dword ptr [EDI + 0x10],EDX
005B4A15  77 79                     JA 0x005b4a90
switchD_005b4a17::switchD:
005B4A17  FF 24 85 04 4B 5B 00      JMP dword ptr [EAX*0x4 + 0x5b4b04]
switchD_005b4a17::caseD_0:
005B4A1E  66 FF 46 29               INC word ptr [ESI + 0x29]
005B4A22  66 8B 46 29               MOV AX,word ptr [ESI + 0x29]
005B4A26  66 3B 46 23               CMP AX,word ptr [ESI + 0x23]
005B4A2A  7C 64                     JL 0x005b4a90
005B4A2C  66 C7 46 29 00 00         MOV word ptr [ESI + 0x29],0x0
005B4A32  C6 47 14 01               MOV byte ptr [EDI + 0x14],0x1
005B4A36  EB 58                     JMP 0x005b4a90
switchD_005b4a17::caseD_2:
005B4A38  66 FF 46 29               INC word ptr [ESI + 0x29]
005B4A3C  66 8B 4E 29               MOV CX,word ptr [ESI + 0x29]
005B4A40  66 8B 46 23               MOV AX,word ptr [ESI + 0x23]
005B4A44  66 3B C8                  CMP CX,AX
005B4A47  7C 47                     JL 0x005b4a90
005B4A49  48                        DEC EAX
005B4A4A  66 89 46 29               MOV word ptr [ESI + 0x29],AX
005B4A4E  C6 47 14 01               MOV byte ptr [EDI + 0x14],0x1
005B4A52  66 C7 47 15 03 00         MOV word ptr [EDI + 0x15],0x3
005B4A58  EB 36                     JMP 0x005b4a90
switchD_005b4a17::caseD_1:
005B4A5A  66 FF 4E 29               DEC word ptr [ESI + 0x29]
005B4A5E  66 83 7E 29 00            CMP word ptr [ESI + 0x29],0x0
005B4A63  7D 2B                     JGE 0x005b4a90
005B4A65  66 8B 46 23               MOV AX,word ptr [ESI + 0x23]
005B4A69  66 48                     DEC AX
005B4A6B  66 89 46 29               MOV word ptr [ESI + 0x29],AX
005B4A6F  C6 47 14 01               MOV byte ptr [EDI + 0x14],0x1
005B4A73  EB 1B                     JMP 0x005b4a90
switchD_005b4a17::caseD_3:
005B4A75  66 FF 4E 29               DEC word ptr [ESI + 0x29]
005B4A79  66 83 7E 29 00            CMP word ptr [ESI + 0x29],0x0
005B4A7E  7D 10                     JGE 0x005b4a90
005B4A80  66 C7 46 29 00 00         MOV word ptr [ESI + 0x29],0x0
005B4A86  C6 47 14 01               MOV byte ptr [EDI + 0x14],0x1
005B4A8A  66 C7 47 15 02 00         MOV word ptr [EDI + 0x15],0x2
switchD_005b4a17::default:
005B4A90  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
005B4A93  8B 7D F4                  MOV EDI,dword ptr [EBP + -0xc]
005B4A96  83 C0 04                  ADD EAX,0x4
005B4A99  83 C7 17                  ADD EDI,0x17
005B4A9C  3D 5C 02 00 00            CMP EAX,0x25c
005B4AA1  89 45 F8                  MOV dword ptr [EBP + -0x8],EAX
005B4AA4  89 7D F4                  MOV dword ptr [EBP + -0xc],EDI
005B4AA7  0F 8C D0 FE FF FF         JL 0x005b497d
005B4AAD  8B 4D B0                  MOV ECX,dword ptr [EBP + -0x50]
005B4AB0  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
005B4AB6  5F                        POP EDI
005B4AB7  5E                        POP ESI
005B4AB8  5B                        POP EBX
005B4AB9  8B E5                     MOV ESP,EBP
005B4ABB  5D                        POP EBP
005B4ABC  C3                        RET
LAB_005b4abd:
005B4ABD  8B 55 B0                  MOV EDX,dword ptr [EBP + -0x50]
005B4AC0  68 F8 C9 7C 00            PUSH 0x7cc9f8
005B4AC5  68 CC 4C 7A 00            PUSH 0x7a4ccc
005B4ACA  56                        PUSH ESI
005B4ACB  6A 00                     PUSH 0x0
005B4ACD  68 BA 01 00 00            PUSH 0x1ba
005B4AD2  68 E8 C8 7C 00            PUSH 0x7cc8e8
005B4AD7  89 15 F8 8D 85 00         MOV dword ptr [0x00858df8],EDX
005B4ADD  E8 EE 89 0F 00            CALL 0x006ad4d0
005B4AE2  83 C4 18                  ADD ESP,0x18
005B4AE5  85 C0                     TEST EAX,EAX
005B4AE7  74 01                     JZ 0x005b4aea
005B4AE9  CC                        INT3
LAB_005b4aea:
005B4AEA  68 BA 01 00 00            PUSH 0x1ba
005B4AEF  68 E8 C8 7C 00            PUSH 0x7cc8e8
005B4AF4  6A 00                     PUSH 0x0
005B4AF6  56                        PUSH ESI
005B4AF7  E8 44 13 0F 00            CALL 0x006a5e40
005B4AFC  5F                        POP EDI
005B4AFD  5E                        POP ESI
005B4AFE  5B                        POP EBX
005B4AFF  8B E5                     MOV ESP,EBP
005B4B01  5D                        POP EBP
005B4B02  C3                        RET
