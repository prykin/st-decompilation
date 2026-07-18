FUN_005e7fe0:
005E7FE0  55                        PUSH EBP
005E7FE1  8B EC                     MOV EBP,ESP
005E7FE3  81 EC A4 01 00 00         SUB ESP,0x1a4
005E7FE9  A1 F8 8D 85 00            MOV EAX,[0x00858df8]
005E7FEE  53                        PUSH EBX
005E7FEF  56                        PUSH ESI
005E7FF0  89 4D FC                  MOV dword ptr [EBP + -0x4],ECX
005E7FF3  57                        PUSH EDI
005E7FF4  8D 55 A8                  LEA EDX,[EBP + -0x58]
005E7FF7  8D 4D A4                  LEA ECX,[EBP + -0x5c]
005E7FFA  6A 00                     PUSH 0x0
005E7FFC  52                        PUSH EDX
005E7FFD  C7 45 F8 00 00 00 00      MOV dword ptr [EBP + -0x8],0x0
005E8004  89 45 A4                  MOV dword ptr [EBP + -0x5c],EAX
005E8007  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
005E800D  E8 DE 57 14 00            CALL 0x0072d7f0
005E8012  8B F0                     MOV ESI,EAX
005E8014  83 C4 08                  ADD ESP,0x8
005E8017  85 F6                     TEST ESI,ESI
005E8019  0F 85 5F 03 00 00         JNZ 0x005e837e
005E801F  6A 01                     PUSH 0x1
005E8021  50                        PUSH EAX
005E8022  A1 80 67 80 00            MOV EAX,[0x00806780]
005E8027  68 90 C7 7C 00            PUSH 0x7cc790
005E802C  6A 01                     PUSH 0x1
005E802E  50                        PUSH EAX
005E802F  E8 6C 25 12 00            CALL 0x0070a5a0
005E8034  8B 0D 6C 17 81 00         MOV ECX,dword ptr [0x0081176c]
005E803A  50                        PUSH EAX
005E803B  6A 01                     PUSH 0x1
005E803D  56                        PUSH ESI
005E803E  8B 91 F0 02 00 00         MOV EDX,dword ptr [ECX + 0x2f0]
005E8044  56                        PUSH ESI
005E8045  52                        PUSH EDX
005E8046  E8 DE B1 E1 FF            CALL 0x00403229
005E804B  A1 6C 17 81 00            MOV EAX,[0x0081176c]
005E8050  83 C4 28                  ADD ESP,0x28
005E8053  8B 80 44 05 00 00         MOV EAX,dword ptr [EAX + 0x544]
005E8059  68 FF 00 00 00            PUSH 0xff
005E805E  8B 48 08                  MOV ECX,dword ptr [EAX + 0x8]
005E8061  8B 50 04                  MOV EDX,dword ptr [EAX + 0x4]
005E8064  51                        PUSH ECX
005E8065  52                        PUSH EDX
005E8066  56                        PUSH ESI
005E8067  56                        PUSH ESI
005E8068  56                        PUSH ESI
005E8069  50                        PUSH EAX
005E806A  E8 01 C1 0C 00            CALL 0x006b4170
005E806F  A1 6C 17 81 00            MOV EAX,[0x0081176c]
005E8074  8B 80 48 05 00 00         MOV EAX,dword ptr [EAX + 0x548]
005E807A  85 C0                     TEST EAX,EAX
005E807C  74 06                     JZ 0x005e8084
005E807E  50                        PUSH EAX
005E807F  E8 EC D4 0C 00            CALL 0x006b5570
LAB_005e8084:
005E8084  6A 0A                     PUSH 0xa
005E8086  6A 0A                     PUSH 0xa
005E8088  6A 00                     PUSH 0x0
005E808A  E8 61 D4 0C 00            CALL 0x006b54f0
005E808F  8B 0D 6C 17 81 00         MOV ECX,dword ptr [0x0081176c]
005E8095  8B 75 FC                  MOV ESI,dword ptr [EBP + -0x4]
005E8098  89 81 48 05 00 00         MOV dword ptr [ECX + 0x548],EAX
005E809E  8B 86 8F 1A 00 00         MOV EAX,dword ptr [ESI + 0x1a8f]
005E80A4  83 F8 FF                  CMP EAX,-0x1
005E80A7  75 42                     JNZ 0x005e80eb
005E80A9  8B 15 18 76 80 00         MOV EDX,dword ptr [0x00807618]
005E80AF  52                        PUSH EDX
005E80B0  68 2C 25 00 00            PUSH 0x252c
005E80B5  E8 86 80 0C 00            CALL 0x006b0140
005E80BA  50                        PUSH EAX
005E80BB  A1 18 76 80 00            MOV EAX,[0x00807618]
005E80C0  50                        PUSH EAX
005E80C1  68 2A 25 00 00            PUSH 0x252a
005E80C6  E8 75 80 0C 00            CALL 0x006b0140
005E80CB  50                        PUSH EAX
005E80CC  68 FC 85 7C 00            PUSH 0x7c85fc
005E80D1  68 3A F3 80 00            PUSH 0x80f33a
005E80D6  FF 15 E8 BD 85 00         CALL dword ptr [0x0085bde8]
005E80DC  83 C4 10                  ADD ESP,0x10
005E80DF  6A 00                     PUSH 0x0
005E80E1  68 3A F3 80 00            PUSH 0x80f33a
005E80E6  E9 AB 01 00 00            JMP 0x005e8296
LAB_005e80eb:
005E80EB  8A 86 93 1A 00 00         MOV AL,byte ptr [ESI + 0x1a93]
005E80F1  3C 02                     CMP AL,0x2
005E80F3  0F 82 A4 01 00 00         JC 0x005e829d
005E80F9  3C 03                     CMP AL,0x3
005E80FB  0F 87 9C 01 00 00         JA 0x005e829d
005E8101  8B 0D 44 C2 79 00         MOV ECX,dword ptr [0x0079c244]
005E8107  8B 1D E8 BD 85 00         MOV EBX,dword ptr [0x0085bde8]
005E810D  51                        PUSH ECX
005E810E  68 80 76 80 00            PUSH 0x807680
005E8113  68 E4 6E 7C 00            PUSH 0x7c6ee4
005E8118  68 3A F3 80 00            PUSH 0x80f33a
005E811D  FF D3                     CALL EBX
005E811F  8A 96 93 1A 00 00         MOV DL,byte ptr [ESI + 0x1a93]
005E8125  8B 86 8F 1A 00 00         MOV EAX,dword ptr [ESI + 0x1a8f]
005E812B  8D 4D E8                  LEA ECX,[EBP + -0x18]
005E812E  6A 00                     PUSH 0x0
005E8130  51                        PUSH ECX
005E8131  68 49 4E 40 00            PUSH 0x404e49
005E8136  6A 00                     PUSH 0x0
005E8138  68 44 CE 7C 00            PUSH 0x7cce44
005E813D  68 3A F3 80 00            PUSH 0x80f33a
005E8142  88 55 E8                  MOV byte ptr [EBP + -0x18],DL
005E8145  89 45 E9                  MOV dword ptr [EBP + -0x17],EAX
005E8148  E8 C3 D7 13 00            CALL 0x00725910
005E814D  83 C4 28                  ADD ESP,0x28
005E8150  83 F8 90                  CMP EAX,-0x70
005E8153  0F 85 E9 00 00 00         JNZ 0x005e8242
005E8159  8B 15 F8 8D 85 00         MOV EDX,dword ptr [0x00858df8]
005E815F  8D 8D 64 FF FF FF         LEA ECX,[EBP + 0xffffff64]
005E8165  8D 85 60 FF FF FF         LEA EAX,[EBP + 0xffffff60]
005E816B  6A 00                     PUSH 0x0
005E816D  51                        PUSH ECX
005E816E  89 95 60 FF FF FF         MOV dword ptr [EBP + 0xffffff60],EDX
005E8174  A3 F8 8D 85 00            MOV [0x00858df8],EAX
005E8179  E8 72 56 14 00            CALL 0x0072d7f0
005E817E  83 C4 08                  ADD ESP,0x8
005E8181  85 C0                     TEST EAX,EAX
005E8183  75 28                     JNZ 0x005e81ad
005E8185  50                        PUSH EAX
005E8186  50                        PUSH EAX
005E8187  50                        PUSH EAX
005E8188  68 16 ED 80 00            PUSH 0x80ed16
005E818D  68 45 03 00 00            PUSH 0x345
005E8192  E8 29 8D 10 00            CALL 0x006f0ec0
005E8197  8B 95 60 FF FF FF         MOV EDX,dword ptr [EBP + 0xffffff60]
005E819D  8B F8                     MOV EDI,EAX
005E819F  83 C4 14                  ADD ESP,0x14
005E81A2  89 7D F4                  MOV dword ptr [EBP + -0xc],EDI
005E81A5  89 15 F8 8D 85 00         MOV dword ptr [0x00858df8],EDX
005E81AB  EB 0E                     JMP 0x005e81bb
LAB_005e81ad:
005E81AD  8B 85 60 FF FF FF         MOV EAX,dword ptr [EBP + 0xffffff60]
005E81B3  8B 7D F4                  MOV EDI,dword ptr [EBP + -0xc]
005E81B6  A3 F8 8D 85 00            MOV [0x00858df8],EAX
LAB_005e81bb:
005E81BB  8B 75 FC                  MOV ESI,dword ptr [EBP + -0x4]
005E81BE  85 FF                     TEST EDI,EDI
005E81C0  0F 84 D7 00 00 00         JZ 0x005e829d
005E81C6  80 BE 93 1A 00 00 02      CMP byte ptr [ESI + 0x1a93],0x2
005E81CD  0F 95 C1                  SETNZ CL
005E81D0  83 C1 04                  ADD ECX,0x4
005E81D3  51                        PUSH ECX
005E81D4  8B 0D 6C 17 81 00         MOV ECX,dword ptr [0x0081176c]
005E81DA  57                        PUSH EDI
005E81DB  E8 36 A5 E1 FF            CALL 0x00402716
005E81E0  8D 95 5C FE FF FF         LEA EDX,[EBP + 0xfffffe5c]
005E81E6  6A 00                     PUSH 0x0
005E81E8  52                        PUSH EDX
005E81E9  6A 00                     PUSH 0x0
005E81EB  6A 00                     PUSH 0x0
005E81ED  68 16 ED 80 00            PUSH 0x80ed16
005E81F2  C7 45 F8 01 00 00 00      MOV dword ptr [EBP + -0x8],0x1
005E81F9  E8 32 65 14 00            CALL 0x0072e730
005E81FE  8B 0D 18 76 80 00         MOV ECX,dword ptr [0x00807618]
005E8204  83 C4 14                  ADD ESP,0x14
005E8207  8D 85 5C FE FF FF         LEA EAX,[EBP + 0xfffffe5c]
005E820D  50                        PUSH EAX
005E820E  51                        PUSH ECX
005E820F  68 2A 25 00 00            PUSH 0x252a
005E8214  E8 27 7F 0C 00            CALL 0x006b0140
005E8219  50                        PUSH EAX
005E821A  68 FC 85 7C 00            PUSH 0x7c85fc
005E821F  68 3A F3 80 00            PUSH 0x80f33a
005E8224  FF D3                     CALL EBX
005E8226  83 C4 10                  ADD ESP,0x10
005E8229  8B CE                     MOV ECX,ESI
005E822B  6A 00                     PUSH 0x0
005E822D  68 3A F3 80 00            PUSH 0x80f33a
005E8232  E8 23 A2 E1 FF            CALL 0x0040245a
005E8237  57                        PUSH EDI
005E8238  E8 33 8F 10 00            CALL 0x006f1170
005E823D  83 C4 04                  ADD ESP,0x4
005E8240  EB 5B                     JMP 0x005e829d
LAB_005e8242:
005E8242  8B 15 18 76 80 00         MOV EDX,dword ptr [0x00807618]
005E8248  52                        PUSH EDX
005E8249  68 2B 25 00 00            PUSH 0x252b
005E824E  E8 ED 7E 0C 00            CALL 0x006b0140
005E8253  50                        PUSH EAX
005E8254  A1 18 76 80 00            MOV EAX,[0x00807618]
005E8259  50                        PUSH EAX
005E825A  68 2A 25 00 00            PUSH 0x252a
005E825F  E8 DC 7E 0C 00            CALL 0x006b0140
005E8264  50                        PUSH EAX
005E8265  68 FC 85 7C 00            PUSH 0x7c85fc
005E826A  68 3A F3 80 00            PUSH 0x80f33a
005E826F  FF D3                     CALL EBX
005E8271  83 C4 10                  ADD ESP,0x10
005E8274  8B CE                     MOV ECX,ESI
005E8276  6A 00                     PUSH 0x0
005E8278  68 3A F3 80 00            PUSH 0x80f33a
005E827D  E8 D8 A1 E1 FF            CALL 0x0040245a
005E8282  8B 0D 18 76 80 00         MOV ECX,dword ptr [0x00807618]
005E8288  6A 00                     PUSH 0x0
005E828A  51                        PUSH ECX
005E828B  68 2D 25 00 00            PUSH 0x252d
005E8290  E8 AB 7E 0C 00            CALL 0x006b0140
005E8295  50                        PUSH EAX
LAB_005e8296:
005E8296  8B CE                     MOV ECX,ESI
005E8298  E8 BD A1 E1 FF            CALL 0x0040245a
LAB_005e829d:
005E829D  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
005E82A0  8B 96 8F 1A 00 00         MOV EDX,dword ptr [ESI + 0x1a8f]
005E82A6  33 DB                     XOR EBX,EBX
005E82A8  89 15 BE 87 80 00         MOV dword ptr [0x008087be],EDX
005E82AE  3B C3                     CMP EAX,EBX
005E82B0  0F 85 80 00 00 00         JNZ 0x005e8336
005E82B6  C7 46 2D 28 00 00 00      MOV dword ptr [ESI + 0x2d],0x28
005E82BD  66 C7 46 31 01 00         MOV word ptr [ESI + 0x31],0x1
005E82C3  A1 6C 17 81 00            MOV EAX,[0x0081176c]
005E82C8  8D 7E 1D                  LEA EDI,[ESI + 0x1d]
005E82CB  57                        PUSH EDI
005E82CC  8B 88 48 05 00 00         MOV ECX,dword ptr [EAX + 0x548]
005E82D2  66 8B 51 08               MOV DX,word ptr [ECX + 0x8]
005E82D6  66 89 56 33               MOV word ptr [ESI + 0x33],DX
005E82DA  A1 6C 17 81 00            MOV EAX,[0x0081176c]
005E82DF  8B 88 89 03 00 00         MOV ECX,dword ptr [EAX + 0x389]
005E82E5  51                        PUSH ECX
005E82E6  6A 02                     PUSH 0x2
005E82E8  8B CE                     MOV ECX,ESI
005E82EA  E8 91 DD 0F 00            CALL 0x006e6080
005E82EF  C7 46 2D 22 00 00 00      MOV dword ptr [ESI + 0x2d],0x22
005E82F6  66 89 5E 33               MOV word ptr [ESI + 0x33],BX
005E82FA  66 89 5E 31               MOV word ptr [ESI + 0x31],BX
005E82FE  8B 15 6C 17 81 00         MOV EDX,dword ptr [0x0081176c]
005E8304  57                        PUSH EDI
005E8305  8B CE                     MOV ECX,ESI
005E8307  8B 82 89 03 00 00         MOV EAX,dword ptr [EDX + 0x389]
005E830D  50                        PUSH EAX
005E830E  6A 02                     PUSH 0x2
005E8310  E8 6B DD 0F 00            CALL 0x006e6080
005E8315  C7 46 2D 20 00 00 00      MOV dword ptr [ESI + 0x2d],0x20
005E831C  89 5E 31                  MOV dword ptr [ESI + 0x31],EBX
005E831F  8B 0D 6C 17 81 00         MOV ECX,dword ptr [0x0081176c]
005E8325  57                        PUSH EDI
005E8326  8B 91 89 03 00 00         MOV EDX,dword ptr [ECX + 0x389]
005E832C  8B CE                     MOV ECX,ESI
005E832E  52                        PUSH EDX
005E832F  6A 02                     PUSH 0x2
005E8331  E8 4A DD 0F 00            CALL 0x006e6080
LAB_005e8336:
005E8336  A1 6C 17 81 00            MOV EAX,[0x0081176c]
005E833B  8B 80 EC 02 00 00         MOV EAX,dword ptr [EAX + 0x2ec]
005E8341  3B C3                     CMP EAX,EBX
005E8343  7C 0D                     JL 0x005e8352
005E8345  8B 0D A8 75 80 00         MOV ECX,dword ptr [0x008075a8]
005E834B  50                        PUSH EAX
005E834C  51                        PUSH ECX
005E834D  E8 7E B2 0C 00            CALL 0x006b35d0
LAB_005e8352:
005E8352  8B 15 6C 17 81 00         MOV EDX,dword ptr [0x0081176c]
005E8358  8B 82 40 05 00 00         MOV EAX,dword ptr [EDX + 0x540]
005E835E  3B C3                     CMP EAX,EBX
005E8360  7C 0C                     JL 0x005e836e
005E8362  50                        PUSH EAX
005E8363  A1 A8 75 80 00            MOV EAX,[0x008075a8]
005E8368  50                        PUSH EAX
005E8369  E8 62 B2 0C 00            CALL 0x006b35d0
LAB_005e836e:
005E836E  8B 4D A4                  MOV ECX,dword ptr [EBP + -0x5c]
005E8371  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
005E8377  5F                        POP EDI
005E8378  5E                        POP ESI
005E8379  5B                        POP EBX
005E837A  8B E5                     MOV ESP,EBP
005E837C  5D                        POP EBP
005E837D  C3                        RET
LAB_005e837e:
005E837E  8B 55 A4                  MOV EDX,dword ptr [EBP + -0x5c]
005E8381  68 D8 DD 7C 00            PUSH 0x7cddd8
005E8386  68 CC 4C 7A 00            PUSH 0x7a4ccc
005E838B  56                        PUSH ESI
005E838C  6A 00                     PUSH 0x0
005E838E  68 5E 01 00 00            PUSH 0x15e
005E8393  68 5C DD 7C 00            PUSH 0x7cdd5c
005E8398  89 15 F8 8D 85 00         MOV dword ptr [0x00858df8],EDX
005E839E  E8 2D 51 0C 00            CALL 0x006ad4d0
005E83A3  83 C4 18                  ADD ESP,0x18
005E83A6  85 C0                     TEST EAX,EAX
005E83A8  74 01                     JZ 0x005e83ab
005E83AA  CC                        INT3
LAB_005e83ab:
005E83AB  68 5E 01 00 00            PUSH 0x15e
005E83B0  68 5C DD 7C 00            PUSH 0x7cdd5c
005E83B5  6A 00                     PUSH 0x0
005E83B7  56                        PUSH ESI
005E83B8  E8 83 DA 0B 00            CALL 0x006a5e40
005E83BD  5F                        POP EDI
005E83BE  5E                        POP ESI
005E83BF  5B                        POP EBX
005E83C0  8B E5                     MOV ESP,EBP
005E83C2  5D                        POP EBP
005E83C3  C3                        RET
