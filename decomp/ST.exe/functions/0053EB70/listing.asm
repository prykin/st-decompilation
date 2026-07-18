FUN_0053eb70:
0053EB70  55                        PUSH EBP
0053EB71  8B EC                     MOV EBP,ESP
0053EB73  83 EC 48                  SUB ESP,0x48
0053EB76  A1 F8 8D 85 00            MOV EAX,[0x00858df8]
0053EB7B  53                        PUSH EBX
0053EB7C  56                        PUSH ESI
0053EB7D  89 4D FC                  MOV dword ptr [EBP + -0x4],ECX
0053EB80  57                        PUSH EDI
0053EB81  8D 55 BC                  LEA EDX,[EBP + -0x44]
0053EB84  8D 4D B8                  LEA ECX,[EBP + -0x48]
0053EB87  6A 00                     PUSH 0x0
0053EB89  52                        PUSH EDX
0053EB8A  89 45 B8                  MOV dword ptr [EBP + -0x48],EAX
0053EB8D  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
0053EB93  E8 58 EC 1E 00            CALL 0x0072d7f0
0053EB98  8B F0                     MOV ESI,EAX
0053EB9A  83 C4 08                  ADD ESP,0x8
0053EB9D  85 F6                     TEST ESI,ESI
0053EB9F  0F 85 AD 01 00 00         JNZ 0x0053ed52
0053EBA5  8B 7D 08                  MOV EDI,dword ptr [EBP + 0x8]
0053EBA8  8B 75 FC                  MOV ESI,dword ptr [EBP + -0x4]
0053EBAB  8B 47 10                  MOV EAX,dword ptr [EDI + 0x10]
0053EBAE  83 E8 02                  SUB EAX,0x2
0053EBB1  75 30                     JNZ 0x0053ebe3
0053EBB3  8B 0D A8 75 80 00         MOV ECX,dword ptr [0x008075a8]
0053EBB9  8D 46 4C                  LEA EAX,[ESI + 0x4c]
0053EBBC  50                        PUSH EAX
0053EBBD  6A 00                     PUSH 0x0
0053EBBF  6A 03                     PUSH 0x3
0053EBC1  51                        PUSH ECX
0053EBC2  E8 89 2E 17 00            CALL 0x006b1a50
0053EBC7  8B 56 58                  MOV EDX,dword ptr [ESI + 0x58]
0053EBCA  8B 46 50                  MOV EAX,dword ptr [ESI + 0x50]
0053EBCD  8B 4E 48                  MOV ECX,dword ptr [ESI + 0x48]
0053EBD0  03 C2                     ADD EAX,EDX
0053EBD2  89 46 44                  MOV dword ptr [ESI + 0x44],EAX
0053EBD5  2B C8                     SUB ECX,EAX
0053EBD7  03 0D 34 67 80 00         ADD ECX,dword ptr [0x00806734]
0053EBDD  89 8E 74 01 00 00         MOV dword ptr [ESI + 0x174],ECX
LAB_0053ebe3:
0053EBE3  57                        PUSH EDI
0053EBE4  8B CE                     MOV ECX,ESI
0053EBE6  E8 0D 2C EC FF            CALL 0x004017f8
0053EBEB  8B 47 10                  MOV EAX,dword ptr [EDI + 0x10]
0053EBEE  3D FF BF 00 00            CMP EAX,0xbfff
0053EBF3  0F 87 1E 01 00 00         JA 0x0053ed17
0053EBF9  0F 84 EF 00 00 00         JZ 0x0053ecee
0053EBFF  85 C0                     TEST EAX,EAX
0053EC01  74 23                     JZ 0x0053ec26
0053EC03  83 F8 03                  CMP EAX,0x3
0053EC06  0F 85 33 01 00 00         JNZ 0x0053ed3f
0053EC0C  8B CE                     MOV ECX,ESI
0053EC0E  E8 E2 47 EC FF            CALL 0x004033f5
0053EC13  8B 45 B8                  MOV EAX,dword ptr [EBP + -0x48]
0053EC16  A3 F8 8D 85 00            MOV [0x00858df8],EAX
0053EC1B  33 C0                     XOR EAX,EAX
0053EC1D  5F                        POP EDI
0053EC1E  5E                        POP ESI
0053EC1F  5B                        POP EBX
0053EC20  8B E5                     MOV ESP,EBP
0053EC22  5D                        POP EBP
0053EC23  C2 04 00                  RET 0x4
LAB_0053ec26:
0053EC26  33 C0                     XOR EAX,EAX
0053EC28  66 8B 86 72 01 00 00      MOV AX,word ptr [ESI + 0x172]
0053EC2F  83 E8 03                  SUB EAX,0x3
0053EC32  74 5A                     JZ 0x0053ec8e
0053EC34  48                        DEC EAX
0053EC35  0F 85 04 01 00 00         JNZ 0x0053ed3f
0053EC3B  8B 56 58                  MOV EDX,dword ptr [ESI + 0x58]
0053EC3E  8B 46 50                  MOV EAX,dword ptr [ESI + 0x50]
0053EC41  8B 4E 44                  MOV ECX,dword ptr [ESI + 0x44]
0053EC44  03 C2                     ADD EAX,EDX
0053EC46  3B C8                     CMP ECX,EAX
0053EC48  7D 06                     JGE 0x0053ec50
0053EC4A  83 C1 0F                  ADD ECX,0xf
0053EC4D  89 4E 44                  MOV dword ptr [ESI + 0x44],ECX
LAB_0053ec50:
0053EC50  39 46 44                  CMP dword ptr [ESI + 0x44],EAX
0053EC53  7C 0C                     JL 0x0053ec61
0053EC55  89 46 44                  MOV dword ptr [ESI + 0x44],EAX
0053EC58  66 C7 86 72 01 00 00 02 00  MOV word ptr [ESI + 0x172],0x2
LAB_0053ec61:
0053EC61  8B 4E 44                  MOV ECX,dword ptr [ESI + 0x44]
0053EC64  8B 56 3C                  MOV EDX,dword ptr [ESI + 0x3c]
0053EC67  8B 46 60                  MOV EAX,dword ptr [ESI + 0x60]
0053EC6A  51                        PUSH ECX
0053EC6B  8B 0D A8 75 80 00         MOV ECX,dword ptr [0x008075a8]
0053EC71  52                        PUSH EDX
0053EC72  6A FF                     PUSH -0x1
0053EC74  50                        PUSH EAX
0053EC75  51                        PUSH ECX
0053EC76  E8 C5 49 17 00            CALL 0x006b3640
0053EC7B  8B 45 B8                  MOV EAX,dword ptr [EBP + -0x48]
0053EC7E  A3 F8 8D 85 00            MOV [0x00858df8],EAX
0053EC83  33 C0                     XOR EAX,EAX
0053EC85  5F                        POP EDI
0053EC86  5E                        POP ESI
0053EC87  5B                        POP EBX
0053EC88  8B E5                     MOV ESP,EBP
0053EC8A  5D                        POP EBP
0053EC8B  C2 04 00                  RET 0x4
LAB_0053ec8e:
0053EC8E  8B 56 58                  MOV EDX,dword ptr [ESI + 0x58]
0053EC91  8B 7E 48                  MOV EDI,dword ptr [ESI + 0x48]
0053EC94  8B 46 50                  MOV EAX,dword ptr [ESI + 0x50]
0053EC97  8B 4E 44                  MOV ECX,dword ptr [ESI + 0x44]
0053EC9A  2B D7                     SUB EDX,EDI
0053EC9C  03 C2                     ADD EAX,EDX
0053EC9E  3B C8                     CMP ECX,EAX
0053ECA0  7E 06                     JLE 0x0053eca8
0053ECA2  83 C1 F1                  ADD ECX,-0xf
0053ECA5  89 4E 44                  MOV dword ptr [ESI + 0x44],ECX
LAB_0053eca8:
0053ECA8  39 46 44                  CMP dword ptr [ESI + 0x44],EAX
0053ECAB  7F 15                     JG 0x0053ecc2
0053ECAD  8B 16                     MOV EDX,dword ptr [ESI]
0053ECAF  6A 01                     PUSH 0x1
0053ECB1  8B CE                     MOV ECX,ESI
0053ECB3  89 46 44                  MOV dword ptr [ESI + 0x44],EAX
0053ECB6  66 C7 86 72 01 00 00 01 00  MOV word ptr [ESI + 0x172],0x1
0053ECBF  FF 52 18                  CALL dword ptr [EDX + 0x18]
LAB_0053ecc2:
0053ECC2  8B 46 44                  MOV EAX,dword ptr [ESI + 0x44]
0053ECC5  8B 4E 3C                  MOV ECX,dword ptr [ESI + 0x3c]
0053ECC8  8B 56 60                  MOV EDX,dword ptr [ESI + 0x60]
0053ECCB  50                        PUSH EAX
0053ECCC  A1 A8 75 80 00            MOV EAX,[0x008075a8]
0053ECD1  51                        PUSH ECX
0053ECD2  6A FF                     PUSH -0x1
0053ECD4  52                        PUSH EDX
0053ECD5  50                        PUSH EAX
0053ECD6  E8 65 49 17 00            CALL 0x006b3640
0053ECDB  8B 45 B8                  MOV EAX,dword ptr [EBP + -0x48]
0053ECDE  A3 F8 8D 85 00            MOV [0x00858df8],EAX
0053ECE3  33 C0                     XOR EAX,EAX
0053ECE5  5F                        POP EDI
0053ECE6  5E                        POP ESI
0053ECE7  5B                        POP EBX
0053ECE8  8B E5                     MOV ESP,EBP
0053ECEA  5D                        POP EBP
0053ECEB  C2 04 00                  RET 0x4
LAB_0053ecee:
0053ECEE  8B 16                     MOV EDX,dword ptr [ESI]
0053ECF0  6A 00                     PUSH 0x0
0053ECF2  8B CE                     MOV ECX,ESI
0053ECF4  FF 52 1C                  CALL dword ptr [EDX + 0x1c]
0053ECF7  68 AE 00 00 00            PUSH 0xae
0053ECFC  E8 2E 71 EC FF            CALL 0x00405e2f
0053ED01  8B 45 B8                  MOV EAX,dword ptr [EBP + -0x48]
0053ED04  83 C4 04                  ADD ESP,0x4
0053ED07  A3 F8 8D 85 00            MOV [0x00858df8],EAX
0053ED0C  33 C0                     XOR EAX,EAX
0053ED0E  5F                        POP EDI
0053ED0F  5E                        POP ESI
0053ED10  5B                        POP EBX
0053ED11  8B E5                     MOV ESP,EBP
0053ED13  5D                        POP EBP
0053ED14  C2 04 00                  RET 0x4
LAB_0053ed17:
0053ED17  3D 00 C0 00 00            CMP EAX,0xc000
0053ED1C  75 21                     JNZ 0x0053ed3f
0053ED1E  8B 1E                     MOV EBX,dword ptr [ESI]
0053ED20  6A 01                     PUSH 0x1
0053ED22  6A 00                     PUSH 0x0
0053ED24  68 4E 27 00 00            PUSH 0x274e
0053ED29  6A 00                     PUSH 0x0
0053ED2B  68 94 38 7C 00            PUSH 0x7c3894
0053ED30  E8 47 6A EC FF            CALL 0x0040577c
0053ED35  83 C4 08                  ADD ESP,0x8
0053ED38  8B CE                     MOV ECX,ESI
0053ED3A  50                        PUSH EAX
0053ED3B  57                        PUSH EDI
0053ED3C  FF 53 10                  CALL dword ptr [EBX + 0x10]
LAB_0053ed3f:
0053ED3F  8B 45 B8                  MOV EAX,dword ptr [EBP + -0x48]
0053ED42  A3 F8 8D 85 00            MOV [0x00858df8],EAX
0053ED47  33 C0                     XOR EAX,EAX
0053ED49  5F                        POP EDI
0053ED4A  5E                        POP ESI
0053ED4B  5B                        POP EBX
0053ED4C  8B E5                     MOV ESP,EBP
0053ED4E  5D                        POP EBP
0053ED4F  C2 04 00                  RET 0x4
LAB_0053ed52:
0053ED52  8B 4D B8                  MOV ECX,dword ptr [EBP + -0x48]
0053ED55  68 C0 79 7C 00            PUSH 0x7c79c0
0053ED5A  68 CC 4C 7A 00            PUSH 0x7a4ccc
0053ED5F  56                        PUSH ESI
0053ED60  6A 00                     PUSH 0x0
0053ED62  68 68 01 00 00            PUSH 0x168
0053ED67  68 70 78 7C 00            PUSH 0x7c7870
0053ED6C  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
0053ED72  E8 59 E7 16 00            CALL 0x006ad4d0
0053ED77  83 C4 18                  ADD ESP,0x18
0053ED7A  85 C0                     TEST EAX,EAX
0053ED7C  74 01                     JZ 0x0053ed7f
0053ED7E  CC                        INT3
LAB_0053ed7f:
0053ED7F  68 68 01 00 00            PUSH 0x168
0053ED84  68 70 78 7C 00            PUSH 0x7c7870
0053ED89  6A 00                     PUSH 0x0
0053ED8B  56                        PUSH ESI
0053ED8C  E8 AF 70 16 00            CALL 0x006a5e40
0053ED91  5F                        POP EDI
0053ED92  5E                        POP ESI
0053ED93  B8 FF FF 00 00            MOV EAX,0xffff
0053ED98  5B                        POP EBX
0053ED99  8B E5                     MOV ESP,EBP
0053ED9B  5D                        POP EBP
0053ED9C  C2 04 00                  RET 0x4
