FUN_005dc050:
005DC050  55                        PUSH EBP
005DC051  8B EC                     MOV EBP,ESP
005DC053  81 EC 98 00 00 00         SUB ESP,0x98
005DC059  A1 F8 8D 85 00            MOV EAX,[0x00858df8]
005DC05E  53                        PUSH EBX
005DC05F  56                        PUSH ESI
005DC060  89 4D E8                  MOV dword ptr [EBP + -0x18],ECX
005DC063  57                        PUSH EDI
005DC064  8D 95 6C FF FF FF         LEA EDX,[EBP + 0xffffff6c]
005DC06A  8D 8D 68 FF FF FF         LEA ECX,[EBP + 0xffffff68]
005DC070  6A 00                     PUSH 0x0
005DC072  52                        PUSH EDX
005DC073  89 85 68 FF FF FF         MOV dword ptr [EBP + 0xffffff68],EAX
005DC079  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
005DC07F  E8 6C 17 15 00            CALL 0x0072d7f0
005DC084  8B F0                     MOV ESI,EAX
005DC086  83 C4 08                  ADD ESP,0x8
005DC089  85 F6                     TEST ESI,ESI
005DC08B  0F 85 CA 04 00 00         JNZ 0x005dc55b
005DC091  8B 5D 08                  MOV EBX,dword ptr [EBP + 0x8]
005DC094  85 DB                     TEST EBX,EBX
005DC096  0F 84 AA 04 00 00         JZ 0x005dc546
005DC09C  8B 75 E8                  MOV ESI,dword ptr [EBP + -0x18]
005DC09F  8B 86 F4 02 00 00         MOV EAX,dword ptr [ESI + 0x2f4]
005DC0A5  8D BE F4 02 00 00         LEA EDI,[ESI + 0x2f4]
005DC0AB  85 C0                     TEST EAX,EAX
005DC0AD  74 06                     JZ 0x005dc0b5
005DC0AF  57                        PUSH EDI
005DC0B0  E8 AB EF 0C 00            CALL 0x006ab060
LAB_005dc0b5:
005DC0B5  A1 DC C1 79 00            MOV EAX,[0x0079c1dc]
005DC0BA  6A 00                     PUSH 0x0
005DC0BC  6A 02                     PUSH 0x2
005DC0BE  50                        PUSH EAX
005DC0BF  6A 0C                     PUSH 0xc
005DC0C1  53                        PUSH EBX
005DC0C2  E8 D9 E4 12 00            CALL 0x0070a5a0
005DC0C7  83 C4 14                  ADD ESP,0x14
005DC0CA  89 07                     MOV dword ptr [EDI],EAX
005DC0CC  85 C0                     TEST EAX,EAX
005DC0CE  74 30                     JZ 0x005dc100
005DC0D0  8B 0D 9C 75 80 00         MOV ECX,dword ptr [0x0080759c]
005DC0D6  6A 00                     PUSH 0x0
005DC0D8  8B 91 B4 04 00 00         MOV EDX,dword ptr [ECX + 0x4b4]
005DC0DE  52                        PUSH EDX
005DC0DF  6A 00                     PUSH 0x0
005DC0E1  50                        PUSH EAX
005DC0E2  E8 A9 BE 0E 00            CALL 0x006c7f90
005DC0E7  8B 07                     MOV EAX,dword ptr [EDI]
005DC0E9  8B 8E F0 02 00 00         MOV ECX,dword ptr [ESI + 0x2f0]
005DC0EF  6A 00                     PUSH 0x0
005DC0F1  6A 00                     PUSH 0x0
005DC0F3  50                        PUSH EAX
005DC0F4  6A 14                     PUSH 0x14
005DC0F6  6A 14                     PUSH 0x14
005DC0F8  6A 00                     PUSH 0x0
005DC0FA  51                        PUSH ECX
005DC0FB  E8 40 93 0D 00            CALL 0x006b5440
LAB_005dc100:
005DC100  A1 C7 C4 80 00            MOV EAX,[0x0080c4c7]
005DC105  85 C0                     TEST EAX,EAX
005DC107  74 06                     JZ 0x005dc10f
005DC109  50                        PUSH EAX
005DC10A  E8 61 94 0D 00            CALL 0x006b5570
LAB_005dc10f:
005DC10F  8B 15 D0 C1 79 00         MOV EDX,dword ptr [0x0079c1d0]
005DC115  6A 00                     PUSH 0x0
005DC117  52                        PUSH EDX
005DC118  53                        PUSH EBX
005DC119  E8 F2 E8 13 00            CALL 0x0071aa10
005DC11E  83 C4 0C                  ADD ESP,0xc
005DC121  A3 C7 C4 80 00            MOV [0x0080c4c7],EAX
005DC126  85 C0                     TEST EAX,EAX
005DC128  75 0F                     JNZ 0x005dc139
005DC12A  6A 0A                     PUSH 0xa
005DC12C  6A 0A                     PUSH 0xa
005DC12E  50                        PUSH EAX
005DC12F  E8 BC 93 0D 00            CALL 0x006b54f0
005DC134  A3 C7 C4 80 00            MOV [0x0080c4c7],EAX
LAB_005dc139:
005DC139  A1 CB C4 80 00            MOV EAX,[0x0080c4cb]
005DC13E  85 C0                     TEST EAX,EAX
005DC140  74 06                     JZ 0x005dc148
005DC142  50                        PUSH EAX
005DC143  E8 28 94 0D 00            CALL 0x006b5570
LAB_005dc148:
005DC148  A1 D4 C1 79 00            MOV EAX,[0x0079c1d4]
005DC14D  6A 00                     PUSH 0x0
005DC14F  50                        PUSH EAX
005DC150  53                        PUSH EBX
005DC151  E8 BA E8 13 00            CALL 0x0071aa10
005DC156  83 C4 0C                  ADD ESP,0xc
005DC159  A3 CB C4 80 00            MOV [0x0080c4cb],EAX
005DC15E  85 C0                     TEST EAX,EAX
005DC160  75 0F                     JNZ 0x005dc171
005DC162  6A 0A                     PUSH 0xa
005DC164  6A 0A                     PUSH 0xa
005DC166  50                        PUSH EAX
005DC167  E8 84 93 0D 00            CALL 0x006b54f0
005DC16C  A3 CB C4 80 00            MOV [0x0080c4cb],EAX
LAB_005dc171:
005DC171  A1 D8 C1 79 00            MOV EAX,[0x0079c1d8]
005DC176  8D 55 FC                  LEA EDX,[EBP + -0x4]
005DC179  8D 4D F4                  LEA ECX,[EBP + -0xc]
005DC17C  6A 00                     PUSH 0x0
005DC17E  52                        PUSH EDX
005DC17F  BF B6 87 80 00            MOV EDI,0x8087b6
005DC184  89 4D EC                  MOV dword ptr [EBP + -0x14],ECX
005DC187  50                        PUSH EAX
005DC188  6A 00                     PUSH 0x0
005DC18A  8B CB                     MOV ECX,EBX
005DC18C  89 7D FC                  MOV dword ptr [EBP + -0x4],EDI
005DC18F  E8 4C 5B 11 00            CALL 0x006f1ce0
005DC194  85 C0                     TEST EAX,EAX
005DC196  0F 84 70 03 00 00         JZ 0x005dc50c
005DC19C  8A 45 0C                  MOV AL,byte ptr [EBP + 0xc]
005DC19F  3C 0C                     CMP AL,0xc
005DC1A1  74 11                     JZ 0x005dc1b4
005DC1A3  3C 10                     CMP AL,0x10
005DC1A5  74 0D                     JZ 0x005dc1b4
005DC1A7  3C 13                     CMP AL,0x13
005DC1A9  75 2A                     JNZ 0x005dc1d5
005DC1AB  80 3D 00 34 80 00 0C      CMP byte ptr [0x00803400],0xc
005DC1B2  75 21                     JNZ 0x005dc1d5
LAB_005dc1b4:
005DC1B4  8B 15 C8 C1 79 00         MOV EDX,dword ptr [0x0079c1c8]
005DC1BA  8D 4D EC                  LEA ECX,[EBP + -0x14]
005DC1BD  6A 00                     PUSH 0x0
005DC1BF  51                        PUSH ECX
005DC1C0  52                        PUSH EDX
005DC1C1  68 80 00 00 00            PUSH 0x80
005DC1C6  8B CB                     MOV ECX,EBX
005DC1C8  E8 13 5B 11 00            CALL 0x006f1ce0
005DC1CD  85 C0                     TEST EAX,EAX
005DC1CF  0F 84 37 03 00 00         JZ 0x005dc50c
LAB_005dc1d5:
005DC1D5  B9 20 76 80 00            MOV ECX,0x807620
005DC1DA  C6 05 B5 87 80 00 00      MOV byte ptr [0x008087b5],0x0
005DC1E1  E8 CD 63 E2 FF            CALL 0x004025b3
005DC1E6  B9 41 00 00 00            MOV ECX,0x41
005DC1EB  33 C0                     XOR EAX,EAX
005DC1ED  BF C3 C3 80 00            MOV EDI,0x80c3c3
005DC1F2  50                        PUSH EAX
005DC1F3  F3 AB                     STOSD.REP ES:EDI
005DC1F5  8B 0D CC C1 79 00         MOV ECX,dword ptr [0x0079c1cc]
005DC1FB  8D 45 FC                  LEA EAX,[EBP + -0x4]
005DC1FE  50                        PUSH EAX
005DC1FF  51                        PUSH ECX
005DC200  6A 0C                     PUSH 0xc
005DC202  8B CB                     MOV ECX,EBX
005DC204  C7 45 FC C3 C3 80 00      MOV dword ptr [EBP + -0x4],0x80c3c3
005DC20B  E8 D0 5A 11 00            CALL 0x006f1ce0
005DC210  8B 0D CB C4 80 00         MOV ECX,dword ptr [0x0080c4cb]
005DC216  33 FF                     XOR EDI,EDI
005DC218  8B 41 08                  MOV EAX,dword ptr [ECX + 0x8]
005DC21B  85 C0                     TEST EAX,EAX
005DC21D  7E 31                     JLE 0x005dc250
005DC21F  3B F8                     CMP EDI,EAX
005DC221  7D 08                     JGE 0x005dc22b
LAB_005dc223:
005DC223  8B 51 14                  MOV EDX,dword ptr [ECX + 0x14]
005DC226  8B 04 BA                  MOV EAX,dword ptr [EDX + EDI*0x4]
005DC229  EB 02                     JMP 0x005dc22d
LAB_005dc22b:
005DC22B  33 C0                     XOR EAX,EAX
LAB_005dc22d:
005DC22D  68 B4 72 7C 00            PUSH 0x7c72b4
005DC232  50                        PUSH EAX
005DC233  8B 86 48 05 00 00         MOV EAX,dword ptr [ESI + 0x548]
005DC239  50                        PUSH EAX
005DC23A  E8 61 53 E2 FF            CALL 0x004015a0
005DC23F  8B 0D CB C4 80 00         MOV ECX,dword ptr [0x0080c4cb]
005DC245  83 C4 0C                  ADD ESP,0xc
005DC248  47                        INC EDI
005DC249  8B 41 08                  MOV EAX,dword ptr [ECX + 0x8]
005DC24C  3B F8                     CMP EDI,EAX
005DC24E  7C D3                     JL 0x005dc223
LAB_005dc250:
005DC250  8B 46 34                  MOV EAX,dword ptr [ESI + 0x34]
005DC253  6A 01                     PUSH 0x1
005DC255  6A 00                     PUSH 0x0
005DC257  6A FF                     PUSH -0x1
005DC259  C7 40 7E 01 00 00 00      MOV dword ptr [EAX + 0x7e],0x1
005DC260  05 9E 00 00 00            ADD EAX,0x9e
005DC265  6A 00                     PUSH 0x0
005DC267  66 C7 00 00 00            MOV word ptr [EAX],0x0
005DC26C  8A 0D 54 C8 7C 00         MOV CL,byte ptr [0x007cc854]
005DC272  88 08                     MOV byte ptr [EAX],CL
005DC274  8B 96 44 05 00 00         MOV EDX,dword ptr [ESI + 0x544]
005DC27A  8B 8E 48 05 00 00         MOV ECX,dword ptr [ESI + 0x548]
005DC280  8B 42 04                  MOV EAX,dword ptr [EDX + 0x4]
005DC283  83 E8 14                  SUB EAX,0x14
005DC286  50                        PUSH EAX
005DC287  68 EC 21 7C 00            PUSH 0x7c21ec
005DC28C  68 D8 21 7C 00            PUSH 0x7c21d8
005DC291  51                        PUSH ECX
005DC292  8B 4E 34                  MOV ECX,dword ptr [ESI + 0x34]
005DC295  E8 46 64 13 00            CALL 0x007126e0
005DC29A  89 45 F0                  MOV dword ptr [EBP + -0x10],EAX
005DC29D  8B 86 48 05 00 00         MOV EAX,dword ptr [ESI + 0x548]
005DC2A3  85 C0                     TEST EAX,EAX
005DC2A5  74 06                     JZ 0x005dc2ad
005DC2A7  50                        PUSH EAX
005DC2A8  E8 C3 92 0D 00            CALL 0x006b5570
LAB_005dc2ad:
005DC2AD  6A 0A                     PUSH 0xa
005DC2AF  6A 0A                     PUSH 0xa
005DC2B1  6A 00                     PUSH 0x0
005DC2B3  E8 38 92 0D 00            CALL 0x006b54f0
005DC2B8  89 86 48 05 00 00         MOV dword ptr [ESI + 0x548],EAX
005DC2BE  8B 15 18 76 80 00         MOV EDX,dword ptr [0x00807618]
005DC2C4  52                        PUSH EDX
005DC2C5  68 47 23 00 00            PUSH 0x2347
005DC2CA  8D 7E 3C                  LEA EDI,[ESI + 0x3c]
005DC2CD  E8 6E 3E 0D 00            CALL 0x006b0140
005DC2D2  8B 1D E8 BD 85 00         MOV EBX,dword ptr [0x0085bde8]
005DC2D8  50                        PUSH EAX
005DC2D9  68 00 D8 7C 00            PUSH 0x7cd800
005DC2DE  57                        PUSH EDI
005DC2DF  FF D3                     CALL EBX
005DC2E1  8B 86 48 05 00 00         MOV EAX,dword ptr [ESI + 0x548]
005DC2E7  83 C4 0C                  ADD ESP,0xc
005DC2EA  57                        PUSH EDI
005DC2EB  50                        PUSH EAX
005DC2EC  E8 AF 97 0D 00            CALL 0x006b5aa0
005DC2F1  68 C3 C3 80 00            PUSH 0x80c3c3
005DC2F6  68 F8 D7 7C 00            PUSH 0x7cd7f8
005DC2FB  57                        PUSH EDI
005DC2FC  FF D3                     CALL EBX
005DC2FE  8B 8E 48 05 00 00         MOV ECX,dword ptr [ESI + 0x548]
005DC304  83 C4 0C                  ADD ESP,0xc
005DC307  57                        PUSH EDI
005DC308  51                        PUSH ECX
005DC309  E8 92 97 0D 00            CALL 0x006b5aa0
005DC30E  8B 96 48 05 00 00         MOV EDX,dword ptr [ESI + 0x548]
005DC314  68 5C 3B 7C 00            PUSH 0x7c3b5c
005DC319  52                        PUSH EDX
005DC31A  E8 81 97 0D 00            CALL 0x006b5aa0
005DC31F  A1 C4 87 80 00            MOV EAX,[0x008087c4]
005DC324  8B 15 18 76 80 00         MOV EDX,dword ptr [0x00807618]
005DC32A  33 C9                     XOR ECX,ECX
005DC32C  25 FF FF 00 00            AND EAX,0xffff
005DC331  66 8B 0D C2 87 80 00      MOV CX,word ptr [0x008087c2]
005DC338  50                        PUSH EAX
005DC339  51                        PUSH ECX
005DC33A  52                        PUSH EDX
005DC33B  68 44 23 00 00            PUSH 0x2344
005DC340  E8 FB 3D 0D 00            CALL 0x006b0140
005DC345  50                        PUSH EAX
005DC346  68 E0 D7 7C 00            PUSH 0x7cd7e0
005DC34B  57                        PUSH EDI
005DC34C  FF D3                     CALL EBX
005DC34E  8B 86 48 05 00 00         MOV EAX,dword ptr [ESI + 0x548]
005DC354  83 C4 14                  ADD ESP,0x14
005DC357  57                        PUSH EDI
005DC358  50                        PUSH EAX
005DC359  E8 42 97 0D 00            CALL 0x006b5aa0
005DC35E  8B 15 18 76 80 00         MOV EDX,dword ptr [0x00807618]
005DC364  33 C9                     XOR ECX,ECX
005DC366  8A 0D C6 87 80 00         MOV CL,byte ptr [0x008087c6]
005DC36C  51                        PUSH ECX
005DC36D  52                        PUSH EDX
005DC36E  68 45 23 00 00            PUSH 0x2345
005DC373  E8 C8 3D 0D 00            CALL 0x006b0140
005DC378  50                        PUSH EAX
005DC379  68 D0 D7 7C 00            PUSH 0x7cd7d0
005DC37E  57                        PUSH EDI
005DC37F  FF D3                     CALL EBX
005DC381  8B 86 48 05 00 00         MOV EAX,dword ptr [ESI + 0x548]
005DC387  83 C4 10                  ADD ESP,0x10
005DC38A  57                        PUSH EDI
005DC38B  50                        PUSH EAX
005DC38C  E8 0F 97 0D 00            CALL 0x006b5aa0
005DC391  8B 8E 48 05 00 00         MOV ECX,dword ptr [ESI + 0x548]
005DC397  68 5C 3B 7C 00            PUSH 0x7c3b5c
005DC39C  51                        PUSH ECX
005DC39D  E8 FE 96 0D 00            CALL 0x006b5aa0
005DC3A2  8B 4D 0C                  MOV ECX,dword ptr [EBP + 0xc]
005DC3A5  8B D1                     MOV EDX,ECX
005DC3A7  81 E2 FF 00 00 00         AND EDX,0xff
005DC3AD  8D 42 FF                  LEA EAX,[EDX + -0x1]
005DC3B0  83 F8 12                  CMP EAX,0x12
005DC3B3  77 4C                     JA 0x005dc401
005DC3B5  33 D2                     XOR EDX,EDX
005DC3B7  8A 90 B0 C5 5D 00         MOV DL,byte ptr [EAX + 0x5dc5b0]
switchD_005dc3bd::switchD:
005DC3BD  FF 24 95 A8 C5 5D 00      JMP dword ptr [EDX*0x4 + 0x5dc5a8]
switchD_005dc3bd::caseD_1:
005DC3C4  A1 18 76 80 00            MOV EAX,[0x00807618]
005DC3C9  50                        PUSH EAX
005DC3CA  68 46 23 00 00            PUSH 0x2346
005DC3CF  E8 6C 3D 0D 00            CALL 0x006b0140
005DC3D4  50                        PUSH EAX
005DC3D5  68 00 D8 7C 00            PUSH 0x7cd800
005DC3DA  57                        PUSH EDI
005DC3DB  FF D3                     CALL EBX
005DC3DD  8B 8E 48 05 00 00         MOV ECX,dword ptr [ESI + 0x548]
005DC3E3  83 C4 0C                  ADD ESP,0xc
005DC3E6  57                        PUSH EDI
005DC3E7  51                        PUSH ECX
005DC3E8  E8 B3 96 0D 00            CALL 0x006b5aa0
005DC3ED  8B 96 48 05 00 00         MOV EDX,dword ptr [ESI + 0x548]
005DC3F3  68 5C 3B 7C 00            PUSH 0x7c3b5c
005DC3F8  52                        PUSH EDX
005DC3F9  E8 A2 96 0D 00            CALL 0x006b5aa0
005DC3FE  8B 4D 0C                  MOV ECX,dword ptr [EBP + 0xc]
switchD_005dc3bd::caseD_3:
005DC401  8B 5D F0                  MOV EBX,dword ptr [EBP + -0x10]
005DC404  85 DB                     TEST EBX,EBX
005DC406  74 46                     JZ 0x005dc44e
005DC408  8B 43 08                  MOV EAX,dword ptr [EBX + 0x8]
005DC40B  85 C0                     TEST EAX,EAX
005DC40D  74 0A                     JZ 0x005dc419
005DC40F  8B 4E 34                  MOV ECX,dword ptr [ESI + 0x34]
005DC412  53                        PUSH EBX
005DC413  53                        PUSH EBX
005DC414  E8 B7 65 13 00            CALL 0x007129d0
LAB_005dc419:
005DC419  8B 43 08                  MOV EAX,dword ptr [EBX + 0x8]
005DC41C  33 FF                     XOR EDI,EDI
005DC41E  85 C0                     TEST EAX,EAX
005DC420  7E 23                     JLE 0x005dc445
005DC422  3B F8                     CMP EDI,EAX
005DC424  7D 08                     JGE 0x005dc42e
LAB_005dc426:
005DC426  8B 43 14                  MOV EAX,dword ptr [EBX + 0x14]
005DC429  8B 04 B8                  MOV EAX,dword ptr [EAX + EDI*0x4]
005DC42C  EB 02                     JMP 0x005dc430
LAB_005dc42e:
005DC42E  33 C0                     XOR EAX,EAX
LAB_005dc430:
005DC430  8B 8E 48 05 00 00         MOV ECX,dword ptr [ESI + 0x548]
005DC436  50                        PUSH EAX
005DC437  51                        PUSH ECX
005DC438  E8 63 96 0D 00            CALL 0x006b5aa0
005DC43D  8B 43 08                  MOV EAX,dword ptr [EBX + 0x8]
005DC440  47                        INC EDI
005DC441  3B F8                     CMP EDI,EAX
005DC443  7C E1                     JL 0x005dc426
LAB_005dc445:
005DC445  53                        PUSH EBX
005DC446  E8 25 91 0D 00            CALL 0x006b5570
005DC44B  8B 4D 0C                  MOV ECX,dword ptr [EBP + 0xc]
LAB_005dc44e:
005DC44E  80 F9 0C                  CMP CL,0xc
005DC451  74 13                     JZ 0x005dc466
005DC453  80 F9 10                  CMP CL,0x10
005DC456  74 0E                     JZ 0x005dc466
005DC458  80 F9 13                  CMP CL,0x13
005DC45B  75 2C                     JNZ 0x005dc489
005DC45D  80 3D 00 34 80 00 0C      CMP byte ptr [0x00803400],0xc
005DC464  75 23                     JNZ 0x005dc489
LAB_005dc466:
005DC466  8A 55 F4                  MOV DL,byte ptr [EBP + -0xc]
005DC469  8A 45 F5                  MOV AL,byte ptr [EBP + -0xb]
005DC46C  8A 4D F6                  MOV CL,byte ptr [EBP + -0xa]
005DC46F  88 15 4D 87 80 00         MOV byte ptr [0x0080874d],DL
005DC475  8B 55 F7                  MOV EDX,dword ptr [EBP + -0x9]
005DC478  A2 4E 87 80 00            MOV [0x0080874e],AL
005DC47D  88 0D 4F 87 80 00         MOV byte ptr [0x0080874f],CL
005DC483  89 15 50 87 80 00         MOV dword ptr [0x00808750],EDX
LAB_005dc489:
005DC489  8B 86 48 05 00 00         MOV EAX,dword ptr [ESI + 0x548]
005DC48F  BB 01 00 00 00            MOV EBX,0x1
005DC494  C7 45 D8 28 00 00 00      MOV dword ptr [EBP + -0x28],0x28
005DC49B  66 89 5D DC               MOV word ptr [EBP + -0x24],BX
005DC49F  66 8B 48 08               MOV CX,word ptr [EAX + 0x8]
005DC4A3  8B 86 89 03 00 00         MOV EAX,dword ptr [ESI + 0x389]
005DC4A9  33 FF                     XOR EDI,EDI
005DC4AB  66 89 4D DE               MOV word ptr [EBP + -0x22],CX
005DC4AF  3B C7                     CMP EAX,EDI
005DC4B1  74 0E                     JZ 0x005dc4c1
005DC4B3  8D 55 C8                  LEA EDX,[EBP + -0x38]
005DC4B6  8B CE                     MOV ECX,ESI
005DC4B8  52                        PUSH EDX
005DC4B9  50                        PUSH EAX
005DC4BA  6A 02                     PUSH 0x2
005DC4BC  E8 AF 94 10 00            CALL 0x006e5970
LAB_005dc4c1:
005DC4C1  8B 86 89 03 00 00         MOV EAX,dword ptr [ESI + 0x389]
005DC4C7  C7 45 D8 22 00 00 00      MOV dword ptr [EBP + -0x28],0x22
005DC4CE  3B C7                     CMP EAX,EDI
005DC4D0  66 89 7D DE               MOV word ptr [EBP + -0x22],DI
005DC4D4  66 89 7D DC               MOV word ptr [EBP + -0x24],DI
005DC4D8  74 0E                     JZ 0x005dc4e8
005DC4DA  8D 4D C8                  LEA ECX,[EBP + -0x38]
005DC4DD  51                        PUSH ECX
005DC4DE  50                        PUSH EAX
005DC4DF  6A 02                     PUSH 0x2
005DC4E1  8B CE                     MOV ECX,ESI
005DC4E3  E8 88 94 10 00            CALL 0x006e5970
LAB_005dc4e8:
005DC4E8  8B 86 89 03 00 00         MOV EAX,dword ptr [ESI + 0x389]
005DC4EE  C7 45 D8 20 00 00 00      MOV dword ptr [EBP + -0x28],0x20
005DC4F5  3B C7                     CMP EAX,EDI
005DC4F7  89 5D DC                  MOV dword ptr [EBP + -0x24],EBX
005DC4FA  74 1F                     JZ 0x005dc51b
005DC4FC  8D 55 C8                  LEA EDX,[EBP + -0x38]
005DC4FF  8B CE                     MOV ECX,ESI
005DC501  52                        PUSH EDX
005DC502  50                        PUSH EAX
005DC503  6A 02                     PUSH 0x2
005DC505  E8 66 94 10 00            CALL 0x006e5970
005DC50A  EB 0F                     JMP 0x005dc51b
LAB_005dc50c:
005DC50C  B9 66 06 00 00            MOV ECX,0x666
005DC511  33 C0                     XOR EAX,EAX
005DC513  F3 AB                     STOSD.REP ES:EDI
005DC515  AA                        STOSB ES:EDI
005DC516  BB 01 00 00 00            MOV EBX,0x1
LAB_005dc51b:
005DC51B  8B B6 E6 02 00 00         MOV ESI,dword ptr [ESI + 0x2e6]
005DC521  85 F6                     TEST ESI,ESI
005DC523  74 21                     JZ 0x005dc546
005DC525  B9 06 00 00 00            MOV ECX,0x6
005DC52A  33 C0                     XOR EAX,EAX
005DC52C  8D 7D AC                  LEA EDI,[EBP + -0x54]
005DC52F  F3 AB                     STOSD.REP ES:EDI
005DC531  66 AB                     STOSW ES:EDI
005DC533  8D 45 AC                  LEA EAX,[EBP + -0x54]
005DC536  8B CE                     MOV ECX,ESI
005DC538  50                        PUSH EAX
005DC539  66 89 5D AC               MOV word ptr [EBP + -0x54],BX
005DC53D  66 89 5D AE               MOV word ptr [EBP + -0x52],BX
005DC541  E8 0B 86 E2 FF            CALL 0x00404b51
LAB_005dc546:
005DC546  8B 8D 68 FF FF FF         MOV ECX,dword ptr [EBP + 0xffffff68]
005DC54C  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
005DC552  5F                        POP EDI
005DC553  5E                        POP ESI
005DC554  5B                        POP EBX
005DC555  8B E5                     MOV ESP,EBP
005DC557  5D                        POP EBP
005DC558  C2 08 00                  RET 0x8
LAB_005dc55b:
005DC55B  8B 95 68 FF FF FF         MOV EDX,dword ptr [EBP + 0xffffff68]
005DC561  68 B0 D7 7C 00            PUSH 0x7cd7b0
005DC566  68 CC 4C 7A 00            PUSH 0x7a4ccc
005DC56B  56                        PUSH ESI
005DC56C  6A 00                     PUSH 0x0
005DC56E  68 31 02 00 00            PUSH 0x231
005DC573  68 18 D7 7C 00            PUSH 0x7cd718
005DC578  89 15 F8 8D 85 00         MOV dword ptr [0x00858df8],EDX
005DC57E  E8 4D 0F 0D 00            CALL 0x006ad4d0
005DC583  83 C4 18                  ADD ESP,0x18
005DC586  85 C0                     TEST EAX,EAX
005DC588  74 01                     JZ 0x005dc58b
005DC58A  CC                        INT3
LAB_005dc58b:
005DC58B  68 31 02 00 00            PUSH 0x231
005DC590  68 18 D7 7C 00            PUSH 0x7cd718
005DC595  6A 00                     PUSH 0x0
005DC597  56                        PUSH ESI
005DC598  E8 A3 98 0C 00            CALL 0x006a5e40
005DC59D  5F                        POP EDI
005DC59E  5E                        POP ESI
005DC59F  5B                        POP EBX
005DC5A0  8B E5                     MOV ESP,EBP
005DC5A2  5D                        POP EBP
005DC5A3  C2 08 00                  RET 0x8
