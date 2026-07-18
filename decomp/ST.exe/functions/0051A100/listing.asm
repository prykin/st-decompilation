HelpPanelTy::ObjProc:
0051A100  55                        PUSH EBP
0051A101  8B EC                     MOV EBP,ESP
0051A103  81 EC 9C 00 00 00         SUB ESP,0x9c
0051A109  A1 74 A1 7F 00            MOV EAX,[0x007fa174]
0051A10E  53                        PUSH EBX
0051A10F  56                        PUSH ESI
0051A110  57                        PUSH EDI
0051A111  33 FF                     XOR EDI,EDI
0051A113  89 4D C4                  MOV dword ptr [EBP + -0x3c],ECX
0051A116  3B C7                     CMP EAX,EDI
0051A118  89 7D FC                  MOV dword ptr [EBP + -0x4],EDI
0051A11B  C6 45 FB 00               MOV byte ptr [EBP + -0x5],0x0
0051A11F  0F 84 43 10 00 00         JZ 0x0051b168
0051A125  A1 F8 8D 85 00            MOV EAX,[0x00858df8]
0051A12A  8D 95 68 FF FF FF         LEA EDX,[EBP + 0xffffff68]
0051A130  8D 8D 64 FF FF FF         LEA ECX,[EBP + 0xffffff64]
0051A136  57                        PUSH EDI
0051A137  52                        PUSH EDX
0051A138  89 85 64 FF FF FF         MOV dword ptr [EBP + 0xffffff64],EAX
0051A13E  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
0051A144  E8 A7 36 21 00            CALL 0x0072d7f0
0051A149  8B F0                     MOV ESI,EAX
0051A14B  83 C4 08                  ADD ESP,0x8
0051A14E  3B F7                     CMP ESI,EDI
0051A150  0F 85 D3 0F 00 00         JNZ 0x0051b129
0051A156  8A 45 10                  MOV AL,byte ptr [EBP + 0x10]
0051A159  8B 75 C4                  MOV ESI,dword ptr [EBP + -0x3c]
0051A15C  8B 5D 0C                  MOV EBX,dword ptr [EBP + 0xc]
0051A15F  84 C0                     TEST AL,AL
0051A161  0F 85 8F 00 00 00         JNZ 0x0051a1f6
0051A167  8A 86 A1 01 00 00         MOV AL,byte ptr [ESI + 0x1a1]
0051A16D  84 C0                     TEST AL,AL
0051A16F  74 17                     JZ 0x0051a188
0051A171  3C 06                     CMP AL,0x6
0051A173  74 13                     JZ 0x0051a188
0051A175  3C 0A                     CMP AL,0xa
0051A177  74 0F                     JZ 0x0051a188
0051A179  C6 86 A2 01 00 00 00      MOV byte ptr [ESI + 0x1a2],0x0
0051A180  89 BE AB 01 00 00         MOV dword ptr [ESI + 0x1ab],EDI
0051A186  EB 12                     JMP 0x0051a19a
LAB_0051a188:
0051A188  88 86 A2 01 00 00         MOV byte ptr [ESI + 0x1a2],AL
0051A18E  8B 86 A3 01 00 00         MOV EAX,dword ptr [ESI + 0x1a3]
0051A194  89 86 AB 01 00 00         MOV dword ptr [ESI + 0x1ab],EAX
LAB_0051a19a:
0051A19A  8B 86 78 01 00 00         MOV EAX,dword ptr [ESI + 0x178]
0051A1A0  8B 7D 08                  MOV EDI,dword ptr [EBP + 0x8]
0051A1A3  85 C0                     TEST EAX,EAX
0051A1A5  C6 86 A1 01 00 00 02      MOV byte ptr [ESI + 0x1a1],0x2
0051A1AC  89 BE A3 01 00 00         MOV dword ptr [ESI + 0x1a3],EDI
0051A1B2  89 9E A7 01 00 00         MOV dword ptr [ESI + 0x1a7],EBX
0051A1B8  66 C7 86 AF 01 00 00 32 00  MOV word ptr [ESI + 0x1af],0x32
0051A1C1  66 C7 86 B1 01 00 00 05 00  MOV word ptr [ESI + 0x1b1],0x5
0051A1CA  74 2D                     JZ 0x0051a1f9
0051A1CC  C7 46 28 02 42 00 00      MOV dword ptr [ESI + 0x28],0x4202
0051A1D3  66 C7 46 2C 00 00         MOV word ptr [ESI + 0x2c],0x0
0051A1D9  66 C7 46 2E 02 00         MOV word ptr [ESI + 0x2e],0x2
0051A1DF  89 46 30                  MOV dword ptr [ESI + 0x30],EAX
0051A1E2  8B 0D 30 2A 80 00         MOV ECX,dword ptr [0x00802a30]
0051A1E8  85 C9                     TEST ECX,ECX
0051A1EA  74 0D                     JZ 0x0051a1f9
0051A1EC  8B 11                     MOV EDX,dword ptr [ECX]
0051A1EE  8D 46 18                  LEA EAX,[ESI + 0x18]
0051A1F1  50                        PUSH EAX
0051A1F2  FF 12                     CALL dword ptr [EDX]
0051A1F4  EB 03                     JMP 0x0051a1f9
LAB_0051a1f6:
0051A1F6  8B 7D 08                  MOV EDI,dword ptr [EBP + 0x8]
LAB_0051a1f9:
0051A1F9  6A 00                     PUSH 0x0
0051A1FB  53                        PUSH EBX
0051A1FC  57                        PUSH EDI
0051A1FD  E8 82 94 EE FF            CALL 0x00403684
0051A202  83 C4 0C                  ADD ESP,0xc
0051A205  8B CE                     MOV ECX,ESI
0051A207  50                        PUSH EAX
0051A208  53                        PUSH EBX
0051A209  68 FA 55 00 00            PUSH 0x55fa
0051A20E  E8 E6 9C EE FF            CALL 0x00403ef9
0051A213  8B 8E 40 02 00 00         MOV ECX,dword ptr [ESI + 0x240]
0051A219  8D 55 FC                  LEA EDX,[EBP + -0x4]
0051A21C  51                        PUSH ECX
0051A21D  53                        PUSH EBX
0051A21E  57                        PUSH EDI
0051A21F  52                        PUSH EDX
0051A220  8B CE                     MOV ECX,ESI
0051A222  E8 51 9B EE FF            CALL 0x00403d78
0051A227  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
0051A22A  8B 8E 18 02 00 00         MOV ECX,dword ptr [ESI + 0x218]
0051A230  6A 0F                     PUSH 0xf
0051A232  68 9C 01 00 00            PUSH 0x19c
0051A237  50                        PUSH EAX
0051A238  6A 00                     PUSH 0x0
0051A23A  6A 00                     PUSH 0x0
0051A23C  51                        PUSH ECX
0051A23D  8B 8E E0 01 00 00         MOV ECX,dword ptr [ESI + 0x1e0]
0051A243  E8 48 68 1F 00            CALL 0x00710a90
0051A248  8B 15 18 76 80 00         MOV EDX,dword ptr [0x00807618]
0051A24E  6A 03                     PUSH 0x3
0051A250  6A FF                     PUSH -0x1
0051A252  6A FF                     PUSH -0x1
0051A254  52                        PUSH EDX
0051A255  68 4A 56 00 00            PUSH 0x564a
0051A25A  E8 E1 5E 19 00            CALL 0x006b0140
0051A25F  8B 8E E0 01 00 00         MOV ECX,dword ptr [ESI + 0x1e0]
0051A265  50                        PUSH EAX
0051A266  E8 55 77 1F 00            CALL 0x007119c0
0051A26B  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
0051A26E  8B 7D FC                  MOV EDI,dword ptr [EBP + -0x4]
0051A271  83 C0 CE                  ADD EAX,-0x32
0051A274  83 C7 0F                  ADD EDI,0xf
0051A277  6A FF                     PUSH -0x1
0051A279  50                        PUSH EAX
0051A27A  89 7D FC                  MOV dword ptr [EBP + -0x4],EDI
0051A27D  68 A0 14 80 00            PUSH 0x8014a0
0051A282  33 FF                     XOR EDI,EDI
0051A284  E8 47 6D 19 00            CALL 0x006b0fd0
0051A289  83 C4 0C                  ADD ESP,0xc
0051A28C  85 C0                     TEST EAX,EAX
0051A28E  74 07                     JZ 0x0051a297
0051A290  BF 9B 3A 00 00            MOV EDI,0x3a9b
0051A295  EB 61                     JMP 0x0051a2f8
LAB_0051a297:
0051A297  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
0051A29A  6A FF                     PUSH -0x1
0051A29C  8D 41 CE                  LEA EAX,[ECX + -0x32]
0051A29F  50                        PUSH EAX
0051A2A0  68 90 0F 80 00            PUSH 0x800f90
0051A2A5  E8 26 6D 19 00            CALL 0x006b0fd0
0051A2AA  83 C4 0C                  ADD ESP,0xc
0051A2AD  85 C0                     TEST EAX,EAX
0051A2AF  74 07                     JZ 0x0051a2b8
0051A2B1  BF 9C 3A 00 00            MOV EDI,0x3a9c
0051A2B6  EB 40                     JMP 0x0051a2f8
LAB_0051a2b8:
0051A2B8  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
0051A2BB  6A FF                     PUSH -0x1
0051A2BD  8D 42 CE                  LEA EAX,[EDX + -0x32]
0051A2C0  50                        PUSH EAX
0051A2C1  68 60 13 80 00            PUSH 0x801360
0051A2C6  E8 05 6D 19 00            CALL 0x006b0fd0
0051A2CB  83 C4 0C                  ADD ESP,0xc
0051A2CE  85 C0                     TEST EAX,EAX
0051A2D0  74 07                     JZ 0x0051a2d9
0051A2D2  BF A8 3A 00 00            MOV EDI,0x3aa8
0051A2D7  EB 1F                     JMP 0x0051a2f8
LAB_0051a2d9:
0051A2D9  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
0051A2DC  6A FF                     PUSH -0x1
0051A2DE  83 C0 CE                  ADD EAX,-0x32
0051A2E1  50                        PUSH EAX
0051A2E2  68 80 0F 80 00            PUSH 0x800f80
0051A2E7  E8 E4 6C 19 00            CALL 0x006b0fd0
0051A2EC  83 C4 0C                  ADD ESP,0xc
0051A2EF  85 C0                     TEST EAX,EAX
0051A2F1  74 05                     JZ 0x0051a2f8
0051A2F3  BF 9D 3A 00 00            MOV EDI,0x3a9d
LAB_0051a2f8:
0051A2F8  85 FF                     TEST EDI,EDI
0051A2FA  0F 84 9B 00 00 00         JZ 0x0051a39b
0051A300  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
0051A303  8B 96 18 02 00 00         MOV EDX,dword ptr [ESI + 0x218]
0051A309  6A 0F                     PUSH 0xf
0051A30B  68 91 00 00 00            PUSH 0x91
0051A310  51                        PUSH ECX
0051A311  8B 8E E0 01 00 00         MOV ECX,dword ptr [ESI + 0x1e0]
0051A317  6A 00                     PUSH 0x0
0051A319  6A 00                     PUSH 0x0
0051A31B  52                        PUSH EDX
0051A31C  E8 6F 67 1F 00            CALL 0x00710a90
0051A321  A1 18 76 80 00            MOV EAX,[0x00807618]
0051A326  6A 03                     PUSH 0x3
0051A328  6A FF                     PUSH -0x1
0051A32A  6A FD                     PUSH -0x3
0051A32C  50                        PUSH EAX
0051A32D  68 54 56 00 00            PUSH 0x5654
0051A332  E8 09 5E 19 00            CALL 0x006b0140
0051A337  8B 8E E0 01 00 00         MOV ECX,dword ptr [ESI + 0x1e0]
0051A33D  50                        PUSH EAX
0051A33E  E8 7D 76 1F 00            CALL 0x007119c0
0051A343  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
0051A346  8B 96 18 02 00 00         MOV EDX,dword ptr [ESI + 0x218]
0051A34C  6A 0F                     PUSH 0xf
0051A34E  68 06 01 00 00            PUSH 0x106
0051A353  51                        PUSH ECX
0051A354  8B 8E E0 01 00 00         MOV ECX,dword ptr [ESI + 0x1e0]
0051A35A  68 96 00 00 00            PUSH 0x96
0051A35F  6A 00                     PUSH 0x0
0051A361  52                        PUSH EDX
0051A362  E8 29 67 1F 00            CALL 0x00710a90
0051A367  8A 15 4E 87 80 00         MOV DL,byte ptr [0x0080874e]
0051A36D  33 C0                     XOR EAX,EAX
0051A36F  80 FA 03                  CMP DL,0x3
0051A372  8B 0D 18 76 80 00         MOV ECX,dword ptr [0x00807618]
0051A378  0F 95 C0                  SETNZ AL
0051A37B  48                        DEC EAX
0051A37C  83 E0 05                  AND EAX,0x5
0051A37F  50                        PUSH EAX
0051A380  6A FF                     PUSH -0x1
0051A382  6A 01                     PUSH 0x1
0051A384  51                        PUSH ECX
0051A385  57                        PUSH EDI
0051A386  E8 B5 5D 19 00            CALL 0x006b0140
0051A38B  8B 8E E0 01 00 00         MOV ECX,dword ptr [ESI + 0x1e0]
0051A391  50                        PUSH EAX
0051A392  E8 29 76 1F 00            CALL 0x007119c0
0051A397  83 45 FC 0F               ADD dword ptr [EBP + -0x4],0xf
LAB_0051a39b:
0051A39B  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
0051A39E  8B 86 18 02 00 00         MOV EAX,dword ptr [ESI + 0x218]
0051A3A4  8B 8E E0 01 00 00         MOV ECX,dword ptr [ESI + 0x1e0]
0051A3AA  6A 0F                     PUSH 0xf
0051A3AC  68 91 00 00 00            PUSH 0x91
0051A3B1  52                        PUSH EDX
0051A3B2  6A 00                     PUSH 0x0
0051A3B4  6A 00                     PUSH 0x0
0051A3B6  50                        PUSH EAX
0051A3B7  E8 D4 66 1F 00            CALL 0x00710a90
0051A3BC  8B 0D 18 76 80 00         MOV ECX,dword ptr [0x00807618]
0051A3C2  6A 03                     PUSH 0x3
0051A3C4  6A FF                     PUSH -0x1
0051A3C6  6A FD                     PUSH -0x3
0051A3C8  51                        PUSH ECX
0051A3C9  68 56 56 00 00            PUSH 0x5656
0051A3CE  E8 6D 5D 19 00            CALL 0x006b0140
0051A3D3  8B 8E E0 01 00 00         MOV ECX,dword ptr [ESI + 0x1e0]
0051A3D9  50                        PUSH EAX
0051A3DA  E8 E1 75 1F 00            CALL 0x007119c0
0051A3DF  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
0051A3E2  8B 86 18 02 00 00         MOV EAX,dword ptr [ESI + 0x218]
0051A3E8  8B 8E E0 01 00 00         MOV ECX,dword ptr [ESI + 0x1e0]
0051A3EE  6A 0F                     PUSH 0xf
0051A3F0  68 06 01 00 00            PUSH 0x106
0051A3F5  52                        PUSH EDX
0051A3F6  68 96 00 00 00            PUSH 0x96
0051A3FB  6A 00                     PUSH 0x0
0051A3FD  50                        PUSH EAX
0051A3FE  E8 8D 66 1F 00            CALL 0x00710a90
0051A403  8B C3                     MOV EAX,EBX
0051A405  48                        DEC EAX
0051A406  74 11                     JZ 0x0051a419
0051A408  48                        DEC EAX
0051A409  74 07                     JZ 0x0051a412
0051A40B  B8 06 56 00 00            MOV EAX,0x5606
0051A410  EB 0C                     JMP 0x0051a41e
LAB_0051a412:
0051A412  B8 05 56 00 00            MOV EAX,0x5605
0051A417  EB 05                     JMP 0x0051a41e
LAB_0051a419:
0051A419  B8 04 56 00 00            MOV EAX,0x5604
LAB_0051a41e:
0051A41E  8A 15 4E 87 80 00         MOV DL,byte ptr [0x0080874e]
0051A424  33 C9                     XOR ECX,ECX
0051A426  80 FA 03                  CMP DL,0x3
0051A429  8B 15 18 76 80 00         MOV EDX,dword ptr [0x00807618]
0051A42F  0F 95 C1                  SETNZ CL
0051A432  49                        DEC ECX
0051A433  83 E1 05                  AND ECX,0x5
0051A436  51                        PUSH ECX
0051A437  6A FF                     PUSH -0x1
0051A439  6A 01                     PUSH 0x1
0051A43B  52                        PUSH EDX
0051A43C  50                        PUSH EAX
0051A43D  E8 FE 5C 19 00            CALL 0x006b0140
0051A442  8B 8E E0 01 00 00         MOV ECX,dword ptr [ESI + 0x1e0]
0051A448  50                        PUSH EAX
0051A449  E8 72 75 1F 00            CALL 0x007119c0
0051A44E  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
0051A451  8B 8E E0 01 00 00         MOV ECX,dword ptr [ESI + 0x1e0]
0051A457  83 C0 0F                  ADD EAX,0xf
0051A45A  6A 0F                     PUSH 0xf
0051A45C  68 91 00 00 00            PUSH 0x91
0051A461  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
0051A464  50                        PUSH EAX
0051A465  8B 86 18 02 00 00         MOV EAX,dword ptr [ESI + 0x218]
0051A46B  6A 00                     PUSH 0x0
0051A46D  6A 00                     PUSH 0x0
0051A46F  50                        PUSH EAX
0051A470  E8 1B 66 1F 00            CALL 0x00710a90
0051A475  8B 0D 18 76 80 00         MOV ECX,dword ptr [0x00807618]
0051A47B  6A 03                     PUSH 0x3
0051A47D  6A FF                     PUSH -0x1
0051A47F  6A FD                     PUSH -0x3
0051A481  51                        PUSH ECX
0051A482  68 F7 55 00 00            PUSH 0x55f7
0051A487  E8 B4 5C 19 00            CALL 0x006b0140
0051A48C  8B 8E E0 01 00 00         MOV ECX,dword ptr [ESI + 0x1e0]
0051A492  50                        PUSH EAX
0051A493  E8 28 75 1F 00            CALL 0x007119c0
0051A498  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
0051A49B  33 C9                     XOR ECX,ECX
0051A49D  83 FB 03                  CMP EBX,0x3
0051A4A0  8D 04 40                  LEA EAX,[EAX + EAX*0x2]
0051A4A3  89 45 F0                  MOV dword ptr [EBP + -0x10],EAX
0051A4A6  75 09                     JNZ 0x0051a4b1
0051A4A8  8B 3C 85 10 2F 7E 00      MOV EDI,dword ptr [EAX*0x4 + 0x7e2f10]
0051A4AF  EB 09                     JMP 0x0051a4ba
LAB_0051a4b1:
0051A4B1  03 C3                     ADD EAX,EBX
0051A4B3  8B 3C 85 A0 22 7E 00      MOV EDI,dword ptr [EAX*0x4 + 0x7e22a0]
LAB_0051a4ba:
0051A4BA  85 FF                     TEST EDI,EDI
0051A4BC  0F 84 F3 00 00 00         JZ 0x0051a5b5
0051A4C2  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
0051A4C5  8B 86 18 02 00 00         MOV EAX,dword ptr [ESI + 0x218]
0051A4CB  8B 8E E8 01 00 00         MOV ECX,dword ptr [ESI + 0x1e8]
0051A4D1  6A 14                     PUSH 0x14
0051A4D3  83 C2 FD                  ADD EDX,-0x3
0051A4D6  68 06 01 00 00            PUSH 0x106
0051A4DB  52                        PUSH EDX
0051A4DC  68 96 00 00 00            PUSH 0x96
0051A4E1  6A 00                     PUSH 0x0
0051A4E3  50                        PUSH EAX
0051A4E4  E8 A7 65 1F 00            CALL 0x00710a90
0051A4E9  57                        PUSH EDI
0051A4EA  68 E4 1A 7C 00            PUSH 0x7c1ae4
0051A4EF  68 3A F3 80 00            PUSH 0x80f33a
0051A4F4  FF 15 E8 BD 85 00         CALL dword ptr [0x0085bde8]
0051A4FA  8A 0D 4E 87 80 00         MOV CL,byte ptr [0x0080874e]
0051A500  83 C4 0C                  ADD ESP,0xc
0051A503  80 E9 03                  SUB CL,0x3
0051A506  F6 D9                     NEG CL
0051A508  1B C9                     SBB ECX,ECX
0051A50A  83 E1 FB                  AND ECX,0xfffffffb
0051A50D  83 C1 07                  ADD ECX,0x7
0051A510  51                        PUSH ECX
0051A511  8B 8E E8 01 00 00         MOV ECX,dword ptr [ESI + 0x1e8]
0051A517  6A FF                     PUSH -0x1
0051A519  6A 01                     PUSH 0x1
0051A51B  68 3A F3 80 00            PUSH 0x80f33a
0051A520  E8 9B 74 1F 00            CALL 0x007119c0
0051A525  8B D3                     MOV EDX,EBX
0051A527  8B 86 38 02 00 00         MOV EAX,dword ptr [ESI + 0x238]
0051A52D  83 EA 03                  SUB EDX,0x3
0051A530  F7 DA                     NEG EDX
0051A532  1B D2                     SBB EDX,EDX
0051A534  83 E2 FE                  AND EDX,0xfffffffe
0051A537  83 C2 03                  ADD EDX,0x3
0051A53A  52                        PUSH EDX
0051A53B  50                        PUSH EAX
0051A53C  E8 5F 0E 1F 00            CALL 0x0070b3a0
0051A541  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
0051A544  8B 96 18 02 00 00         MOV EDX,dword ptr [ESI + 0x218]
0051A54A  83 C4 08                  ADD ESP,0x8
0051A54D  8B F8                     MOV EDI,EAX
0051A54F  6A 3A                     PUSH 0x3a
0051A551  6A 00                     PUSH 0x0
0051A553  57                        PUSH EDI
0051A554  51                        PUSH ECX
0051A555  68 B4 00 00 00            PUSH 0xb4
0051A55A  6A 00                     PUSH 0x0
0051A55C  52                        PUSH EDX
0051A55D  E8 DE AE 19 00            CALL 0x006b5440
0051A562  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
0051A565  C7 45 CC B4 00 00 00      MOV dword ptr [EBP + -0x34],0xb4
0051A56C  8B 47 04                  MOV EAX,dword ptr [EDI + 0x4]
0051A56F  89 4D D0                  MOV dword ptr [EBP + -0x30],ECX
0051A572  89 45 D4                  MOV dword ptr [EBP + -0x2c],EAX
0051A575  8B 57 08                  MOV EDX,dword ptr [EDI + 0x8]
0051A578  8B C3                     MOV EAX,EBX
0051A57A  89 55 D8                  MOV dword ptr [EBP + -0x28],EDX
0051A57D  8B 96 D7 01 00 00         MOV EDX,dword ptr [ESI + 0x1d7]
0051A583  83 E8 03                  SUB EAX,0x3
0051A586  F7 D8                     NEG EAX
0051A588  1B C0                     SBB EAX,EAX
0051A58A  8D 4D CC                  LEA ECX,[EBP + -0x34]
0051A58D  24 FC                     AND AL,0xfc
0051A58F  51                        PUSH ECX
0051A590  05 E2 00 00 00            ADD EAX,0xe2
0051A595  52                        PUSH EDX
0051A596  C6 45 DC 01               MOV byte ptr [EBP + -0x24],0x1
0051A59A  89 45 DD                  MOV dword ptr [EBP + -0x23],EAX
0051A59D  89 5D E1                  MOV dword ptr [EBP + -0x1f],EBX
0051A5A0  E8 1B 3C 19 00            CALL 0x006ae1c0
0051A5A5  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
0051A5A8  B9 01 00 00 00            MOV ECX,0x1
0051A5AD  83 C0 14                  ADD EAX,0x14
0051A5B0  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
0051A5B3  EB 03                     JMP 0x0051a5b8
LAB_0051a5b5:
0051A5B5  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
LAB_0051a5b8:
0051A5B8  8B 55 F0                  MOV EDX,dword ptr [EBP + -0x10]
0051A5BB  8D 94 1A 69 FF FF FF      LEA EDX,[EDX + EBX*0x1 + 0xffffff69]
0051A5C2  89 55 F0                  MOV dword ptr [EBP + -0x10],EDX
0051A5C5  8B 3C 95 50 1C 7E 00      MOV EDI,dword ptr [EDX*0x4 + 0x7e1c50]
0051A5CC  85 FF                     TEST EDI,EDI
0051A5CE  0F 84 D4 00 00 00         JZ 0x0051a6a8
0051A5D4  8B 8E E8 01 00 00         MOV ECX,dword ptr [ESI + 0x1e8]
0051A5DA  6A 14                     PUSH 0x14
0051A5DC  83 C0 FD                  ADD EAX,-0x3
0051A5DF  68 06 01 00 00            PUSH 0x106
0051A5E4  50                        PUSH EAX
0051A5E5  8B 86 18 02 00 00         MOV EAX,dword ptr [ESI + 0x218]
0051A5EB  68 96 00 00 00            PUSH 0x96
0051A5F0  6A 00                     PUSH 0x0
0051A5F2  50                        PUSH EAX
0051A5F3  E8 98 64 1F 00            CALL 0x00710a90
0051A5F8  57                        PUSH EDI
0051A5F9  68 E4 1A 7C 00            PUSH 0x7c1ae4
0051A5FE  68 3A F3 80 00            PUSH 0x80f33a
0051A603  FF 15 E8 BD 85 00         CALL dword ptr [0x0085bde8]
0051A609  A0 4E 87 80 00            MOV AL,[0x0080874e]
0051A60E  83 C4 0C                  ADD ESP,0xc
0051A611  33 C9                     XOR ECX,ECX
0051A613  3C 03                     CMP AL,0x3
0051A615  0F 95 C1                  SETNZ CL
0051A618  49                        DEC ECX
0051A619  83 E1 04                  AND ECX,0x4
0051A61C  51                        PUSH ECX
0051A61D  8B 8E E8 01 00 00         MOV ECX,dword ptr [ESI + 0x1e8]
0051A623  6A FF                     PUSH -0x1
0051A625  6A 01                     PUSH 0x1
0051A627  68 3A F3 80 00            PUSH 0x80f33a
0051A62C  E8 8F 73 1F 00            CALL 0x007119c0
0051A631  8B 96 38 02 00 00         MOV EDX,dword ptr [ESI + 0x238]
0051A637  6A 00                     PUSH 0x0
0051A639  52                        PUSH EDX
0051A63A  E8 61 0D 1F 00            CALL 0x0070b3a0
0051A63F  8B 8E 18 02 00 00         MOV ECX,dword ptr [ESI + 0x218]
0051A645  83 C4 08                  ADD ESP,0x8
0051A648  8B F8                     MOV EDI,EAX
0051A64A  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
0051A64D  6A 3A                     PUSH 0x3a
0051A64F  6A 00                     PUSH 0x0
0051A651  57                        PUSH EDI
0051A652  50                        PUSH EAX
0051A653  68 B4 00 00 00            PUSH 0xb4
0051A658  6A 00                     PUSH 0x0
0051A65A  51                        PUSH ECX
0051A65B  E8 E0 AD 19 00            CALL 0x006b5440
0051A660  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
0051A663  C7 45 CC B4 00 00 00      MOV dword ptr [EBP + -0x34],0xb4
0051A66A  8B 57 04                  MOV EDX,dword ptr [EDI + 0x4]
0051A66D  89 45 D0                  MOV dword ptr [EBP + -0x30],EAX
0051A670  8B 86 D7 01 00 00         MOV EAX,dword ptr [ESI + 0x1d7]
0051A676  89 55 D4                  MOV dword ptr [EBP + -0x2c],EDX
0051A679  8B 4F 08                  MOV ECX,dword ptr [EDI + 0x8]
0051A67C  8D 55 CC                  LEA EDX,[EBP + -0x34]
0051A67F  52                        PUSH EDX
0051A680  50                        PUSH EAX
0051A681  89 4D D8                  MOV dword ptr [EBP + -0x28],ECX
0051A684  C6 45 DC 01               MOV byte ptr [EBP + -0x24],0x1
0051A688  C7 45 DD DD 00 00 00      MOV dword ptr [EBP + -0x23],0xdd
0051A68F  89 5D E1                  MOV dword ptr [EBP + -0x1f],EBX
0051A692  E8 29 3B 19 00            CALL 0x006ae1c0
0051A697  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
0051A69A  8B 55 F0                  MOV EDX,dword ptr [EBP + -0x10]
0051A69D  83 C0 14                  ADD EAX,0x14
0051A6A0  B9 01 00 00 00            MOV ECX,0x1
0051A6A5  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
LAB_0051a6a8:
0051A6A8  8B 3C 95 AC 45 85 00      MOV EDI,dword ptr [EDX*0x4 + 0x8545ac]
0051A6AF  85 FF                     TEST EDI,EDI
0051A6B1  0F 84 D4 00 00 00         JZ 0x0051a78b
0051A6B7  8B 8E 18 02 00 00         MOV ECX,dword ptr [ESI + 0x218]
0051A6BD  6A 14                     PUSH 0x14
0051A6BF  83 C0 FD                  ADD EAX,-0x3
0051A6C2  68 06 01 00 00            PUSH 0x106
0051A6C7  50                        PUSH EAX
0051A6C8  68 96 00 00 00            PUSH 0x96
0051A6CD  6A 00                     PUSH 0x0
0051A6CF  51                        PUSH ECX
0051A6D0  8B 8E E8 01 00 00         MOV ECX,dword ptr [ESI + 0x1e8]
0051A6D6  E8 B5 63 1F 00            CALL 0x00710a90
0051A6DB  57                        PUSH EDI
0051A6DC  68 E4 1A 7C 00            PUSH 0x7c1ae4
0051A6E1  68 3A F3 80 00            PUSH 0x80f33a
0051A6E6  FF 15 E8 BD 85 00         CALL dword ptr [0x0085bde8]
0051A6EC  8A 15 4E 87 80 00         MOV DL,byte ptr [0x0080874e]
0051A6F2  83 C4 0C                  ADD ESP,0xc
0051A6F5  80 EA 03                  SUB DL,0x3
0051A6F8  8B 8E E8 01 00 00         MOV ECX,dword ptr [ESI + 0x1e8]
0051A6FE  F6 DA                     NEG DL
0051A700  1B D2                     SBB EDX,EDX
0051A702  83 E2 FB                  AND EDX,0xfffffffb
0051A705  83 C2 06                  ADD EDX,0x6
0051A708  52                        PUSH EDX
0051A709  6A FF                     PUSH -0x1
0051A70B  6A 01                     PUSH 0x1
0051A70D  68 3A F3 80 00            PUSH 0x80f33a
0051A712  E8 A9 72 1F 00            CALL 0x007119c0
0051A717  8B 86 38 02 00 00         MOV EAX,dword ptr [ESI + 0x238]
0051A71D  6A 02                     PUSH 0x2
0051A71F  50                        PUSH EAX
0051A720  E8 7B 0C 1F 00            CALL 0x0070b3a0
0051A725  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
0051A728  8B 96 18 02 00 00         MOV EDX,dword ptr [ESI + 0x218]
0051A72E  83 C4 08                  ADD ESP,0x8
0051A731  8B F8                     MOV EDI,EAX
0051A733  6A 3A                     PUSH 0x3a
0051A735  6A 00                     PUSH 0x0
0051A737  57                        PUSH EDI
0051A738  51                        PUSH ECX
0051A739  68 B4 00 00 00            PUSH 0xb4
0051A73E  6A 00                     PUSH 0x0
0051A740  52                        PUSH EDX
0051A741  E8 FA AC 19 00            CALL 0x006b5440
0051A746  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
0051A749  C7 45 CC B4 00 00 00      MOV dword ptr [EBP + -0x34],0xb4
0051A750  8B 47 04                  MOV EAX,dword ptr [EDI + 0x4]
0051A753  89 4D D0                  MOV dword ptr [EBP + -0x30],ECX
0051A756  8B 8E D7 01 00 00         MOV ECX,dword ptr [ESI + 0x1d7]
0051A75C  89 45 D4                  MOV dword ptr [EBP + -0x2c],EAX
0051A75F  8B 57 08                  MOV EDX,dword ptr [EDI + 0x8]
0051A762  8D 45 CC                  LEA EAX,[EBP + -0x34]
0051A765  50                        PUSH EAX
0051A766  51                        PUSH ECX
0051A767  89 55 D8                  MOV dword ptr [EBP + -0x28],EDX
0051A76A  C6 45 DC 01               MOV byte ptr [EBP + -0x24],0x1
0051A76E  C7 45 DD DC 00 00 00      MOV dword ptr [EBP + -0x23],0xdc
0051A775  89 5D E1                  MOV dword ptr [EBP + -0x1f],EBX
0051A778  E8 43 3A 19 00            CALL 0x006ae1c0
0051A77D  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
0051A780  B9 01 00 00 00            MOV ECX,0x1
0051A785  83 C0 14                  ADD EAX,0x14
0051A788  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
LAB_0051a78b:
0051A78B  85 C9                     TEST ECX,ECX
0051A78D  75 06                     JNZ 0x0051a795
0051A78F  83 C0 0F                  ADD EAX,0xf
0051A792  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
LAB_0051a795:
0051A795  8B D3                     MOV EDX,EBX
0051A797  B9 01 00 00 00            MOV ECX,0x1
0051A79C  C1 E2 05                  SHL EDX,0x5
0051A79F  89 4D E8                  MOV dword ptr [EBP + -0x18],ECX
0051A7A2  89 4D F4                  MOV dword ptr [EBP + -0xc],ECX
0051A7A5  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
0051A7A8  03 D3                     ADD EDX,EBX
0051A7AA  8D 4C 51 8C               LEA ECX,[ECX + EDX*0x2 + -0x74]
0051A7AE  8D 14 49                  LEA EDX,[ECX + ECX*0x2]
0051A7B1  89 55 EC                  MOV dword ptr [EBP + -0x14],EDX
LAB_0051a7b4:
0051A7B4  8B 4D F4                  MOV ECX,dword ptr [EBP + -0xc]
0051A7B7  8B 55 EC                  MOV EDX,dword ptr [EBP + -0x14]
0051A7BA  81 E1 FF FF 00 00         AND ECX,0xffff
0051A7C0  8D BC 11 4C 0E 7C 00      LEA EDI,[ECX + EDX*0x1 + 0x7c0e4c]
0051A7C7  89 7D C8                  MOV dword ptr [EBP + -0x38],EDI
0051A7CA  80 3F 00                  CMP byte ptr [EDI],0x0
0051A7CD  0F 84 49 01 00 00         JZ 0x0051a91c
0051A7D3  8B 4D E8                  MOV ECX,dword ptr [EBP + -0x18]
0051A7D6  85 C9                     TEST ECX,ECX
0051A7D8  74 4B                     JZ 0x0051a825
0051A7DA  8B 8E E0 01 00 00         MOV ECX,dword ptr [ESI + 0x1e0]
0051A7E0  6A 0F                     PUSH 0xf
0051A7E2  68 91 00 00 00            PUSH 0x91
0051A7E7  50                        PUSH EAX
0051A7E8  8B 86 18 02 00 00         MOV EAX,dword ptr [ESI + 0x218]
0051A7EE  6A 00                     PUSH 0x0
0051A7F0  6A 00                     PUSH 0x0
0051A7F2  50                        PUSH EAX
0051A7F3  E8 98 62 1F 00            CALL 0x00710a90
0051A7F8  8B 0D 18 76 80 00         MOV ECX,dword ptr [0x00807618]
0051A7FE  6A 03                     PUSH 0x3
0051A800  6A FF                     PUSH -0x1
0051A802  6A FD                     PUSH -0x3
0051A804  51                        PUSH ECX
0051A805  68 57 56 00 00            PUSH 0x5657
0051A80A  E8 31 59 19 00            CALL 0x006b0140
0051A80F  8B 8E E0 01 00 00         MOV ECX,dword ptr [ESI + 0x1e0]
0051A815  50                        PUSH EAX
0051A816  E8 A5 71 1F 00            CALL 0x007119c0
0051A81B  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
0051A81E  C7 45 E8 00 00 00 00      MOV dword ptr [EBP + -0x18],0x0
LAB_0051a825:
0051A825  8B 96 18 02 00 00         MOV EDX,dword ptr [ESI + 0x218]
0051A82B  8B 8E E0 01 00 00         MOV ECX,dword ptr [ESI + 0x1e0]
0051A831  6A 0F                     PUSH 0xf
0051A833  68 06 01 00 00            PUSH 0x106
0051A838  50                        PUSH EAX
0051A839  68 96 00 00 00            PUSH 0x96
0051A83E  6A 00                     PUSH 0x0
0051A840  52                        PUSH EDX
0051A841  E8 4A 62 1F 00            CALL 0x00710a90
0051A846  8A 0D 4E 87 80 00         MOV CL,byte ptr [0x0080874e]
0051A84C  33 C0                     XOR EAX,EAX
0051A84E  80 F9 03                  CMP CL,0x3
0051A851  8B 0D 18 76 80 00         MOV ECX,dword ptr [0x00807618]
0051A857  0F 95 C0                  SETNZ AL
0051A85A  8A 17                     MOV DL,byte ptr [EDI]
0051A85C  48                        DEC EAX
0051A85D  83 E0 05                  AND EAX,0x5
0051A860  50                        PUSH EAX
0051A861  6A FF                     PUSH -0x1
0051A863  6A 01                     PUSH 0x1
0051A865  51                        PUSH ECX
0051A866  6A 00                     PUSH 0x0
0051A868  52                        PUSH EDX
0051A869  E8 BB A2 EE FF            CALL 0x00404b29
0051A86E  83 C4 08                  ADD ESP,0x8
0051A871  50                        PUSH EAX
0051A872  E8 C9 58 19 00            CALL 0x006b0140
0051A877  8B 8E E0 01 00 00         MOV ECX,dword ptr [ESI + 0x1e0]
0051A87D  50                        PUSH EAX
0051A87E  E8 3D 71 1F 00            CALL 0x007119c0
0051A883  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
0051A886  8A 07                     MOV AL,byte ptr [EDI]
0051A888  83 C1 0F                  ADD ECX,0xf
0051A88B  6A 00                     PUSH 0x0
0051A88D  50                        PUSH EAX
0051A88E  89 4D FC                  MOV dword ptr [EBP + -0x4],ECX
0051A891  E8 5A 8B EE FF            CALL 0x004033f0
0051A896  8B 8E 30 02 00 00         MOV ECX,dword ptr [ESI + 0x230]
0051A89C  50                        PUSH EAX
0051A89D  51                        PUSH ECX
0051A89E  E8 FD 0A 1F 00            CALL 0x0070b3a0
0051A8A3  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
0051A8A6  8B F8                     MOV EDI,EAX
0051A8A8  8B 86 18 02 00 00         MOV EAX,dword ptr [ESI + 0x218]
0051A8AE  57                        PUSH EDI
0051A8AF  6A 01                     PUSH 0x1
0051A8B1  52                        PUSH EDX
0051A8B2  68 96 00 00 00            PUSH 0x96
0051A8B7  50                        PUSH EAX
0051A8B8  E8 6C 89 EE FF            CALL 0x00403229
0051A8BD  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
0051A8C0  C7 45 A8 96 00 00 00      MOV dword ptr [EBP + -0x58],0x96
0051A8C7  8B 4F 04                  MOV ECX,dword ptr [EDI + 0x4]
0051A8CA  89 55 AC                  MOV dword ptr [EBP + -0x54],EDX
0051A8CD  8B 55 C8                  MOV EDX,dword ptr [EBP + -0x38]
0051A8D0  89 4D B0                  MOV dword ptr [EBP + -0x50],ECX
0051A8D3  8B 47 08                  MOV EAX,dword ptr [EDI + 0x8]
0051A8D6  33 C9                     XOR ECX,ECX
0051A8D8  8A 0A                     MOV CL,byte ptr [EDX]
0051A8DA  83 C4 24                  ADD ESP,0x24
0051A8DD  89 45 B4                  MOV dword ptr [EBP + -0x4c],EAX
0051A8E0  89 4D B9                  MOV dword ptr [EBP + -0x47],ECX
0051A8E3  8B 8E D7 01 00 00         MOV ECX,dword ptr [ESI + 0x1d7]
0051A8E9  8D 45 A8                  LEA EAX,[EBP + -0x58]
0051A8EC  50                        PUSH EAX
0051A8ED  51                        PUSH ECX
0051A8EE  C6 45 B8 05               MOV byte ptr [EBP + -0x48],0x5
0051A8F2  C7 45 BD 00 00 00 00      MOV dword ptr [EBP + -0x43],0x0
0051A8F9  E8 C2 38 19 00            CALL 0x006ae1c0
0051A8FE  8B 57 08                  MOV EDX,dword ptr [EDI + 0x8]
0051A901  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
0051A904  8B 4D F4                  MOV ECX,dword ptr [EBP + -0xc]
0051A907  41                        INC ECX
0051A908  8D 44 10 05               LEA EAX,[EAX + EDX*0x1 + 0x5]
0051A90C  66 83 F9 03               CMP CX,0x3
0051A910  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
0051A913  89 4D F4                  MOV dword ptr [EBP + -0xc],ECX
0051A916  0F 82 98 FE FF FF         JC 0x0051a7b4
LAB_0051a91c:
0051A91C  8B 8E 18 02 00 00         MOV ECX,dword ptr [ESI + 0x218]
0051A922  6A 0F                     PUSH 0xf
0051A924  68 9C 01 00 00            PUSH 0x19c
0051A929  50                        PUSH EAX
0051A92A  6A 00                     PUSH 0x0
0051A92C  6A 00                     PUSH 0x0
0051A92E  51                        PUSH ECX
0051A92F  8B 8E E0 01 00 00         MOV ECX,dword ptr [ESI + 0x1e0]
0051A935  E8 56 61 1F 00            CALL 0x00710a90
0051A93A  8B 15 18 76 80 00         MOV EDX,dword ptr [0x00807618]
0051A940  6A 03                     PUSH 0x3
0051A942  6A FF                     PUSH -0x1
0051A944  6A FF                     PUSH -0x1
0051A946  52                        PUSH EDX
0051A947  68 4B 56 00 00            PUSH 0x564b
0051A94C  E8 EF 57 19 00            CALL 0x006b0140
0051A951  8B 8E E0 01 00 00         MOV ECX,dword ptr [ESI + 0x1e0]
0051A957  50                        PUSH EAX
0051A958  E8 63 70 1F 00            CALL 0x007119c0
0051A95D  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
0051A960  8B 8E E0 01 00 00         MOV ECX,dword ptr [ESI + 0x1e0]
0051A966  83 C0 0F                  ADD EAX,0xf
0051A969  6A 0F                     PUSH 0xf
0051A96B  68 06 01 00 00            PUSH 0x106
0051A970  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
0051A973  50                        PUSH EAX
0051A974  8B 86 18 02 00 00         MOV EAX,dword ptr [ESI + 0x218]
0051A97A  68 96 00 00 00            PUSH 0x96
0051A97F  6A 00                     PUSH 0x0
0051A981  50                        PUSH EAX
0051A982  E8 09 61 1F 00            CALL 0x00710a90
0051A987  8A 15 4E 87 80 00         MOV DL,byte ptr [0x0080874e]
0051A98D  33 C9                     XOR ECX,ECX
0051A98F  80 FA 03                  CMP DL,0x3
0051A992  8B 15 18 76 80 00         MOV EDX,dword ptr [0x00807618]
0051A998  0F 95 C1                  SETNZ CL
0051A99B  49                        DEC ECX
0051A99C  83 E1 05                  AND ECX,0x5
0051A99F  51                        PUSH ECX
0051A9A0  6A FF                     PUSH -0x1
0051A9A2  6A 01                     PUSH 0x1
0051A9A4  52                        PUSH EDX
0051A9A5  68 4C 56 00 00            PUSH 0x564c
0051A9AA  E8 91 57 19 00            CALL 0x006b0140
0051A9AF  8B 8E E0 01 00 00         MOV ECX,dword ptr [ESI + 0x1e0]
0051A9B5  50                        PUSH EAX
0051A9B6  E8 05 70 1F 00            CALL 0x007119c0
0051A9BB  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
0051A9BE  8B 8E 18 02 00 00         MOV ECX,dword ptr [ESI + 0x218]
0051A9C4  6A 0F                     PUSH 0xf
0051A9C6  68 91 00 00 00            PUSH 0x91
0051A9CB  50                        PUSH EAX
0051A9CC  6A 00                     PUSH 0x0
0051A9CE  6A 00                     PUSH 0x0
0051A9D0  51                        PUSH ECX
0051A9D1  8B 8E E0 01 00 00         MOV ECX,dword ptr [ESI + 0x1e0]
0051A9D7  E8 B4 60 1F 00            CALL 0x00710a90
0051A9DC  8B 7D F0                  MOV EDI,dword ptr [EBP + -0x10]
0051A9DF  8B 14 BD 7C 41 7E 00      MOV EDX,dword ptr [EDI*0x4 + 0x7e417c]
0051A9E6  52                        PUSH EDX
0051A9E7  68 90 18 7C 00            PUSH 0x7c1890
0051A9EC  68 3A F3 80 00            PUSH 0x80f33a
0051A9F1  FF 15 E8 BD 85 00         CALL dword ptr [0x0085bde8]
0051A9F7  8B 8E E0 01 00 00         MOV ECX,dword ptr [ESI + 0x1e0]
0051A9FD  83 C4 0C                  ADD ESP,0xc
0051AA00  6A 02                     PUSH 0x2
0051AA02  6A FF                     PUSH -0x1
0051AA04  6A FD                     PUSH -0x3
0051AA06  68 3A F3 80 00            PUSH 0x80f33a
0051AA0B  E8 B0 6F 1F 00            CALL 0x007119c0
0051AA10  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
0051AA13  8B 8E E0 01 00 00         MOV ECX,dword ptr [ESI + 0x1e0]
0051AA19  83 C0 0F                  ADD EAX,0xf
0051AA1C  6A 0F                     PUSH 0xf
0051AA1E  68 06 01 00 00            PUSH 0x106
0051AA23  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
0051AA26  50                        PUSH EAX
0051AA27  8B 86 18 02 00 00         MOV EAX,dword ptr [ESI + 0x218]
0051AA2D  68 96 00 00 00            PUSH 0x96
0051AA32  6A 00                     PUSH 0x0
0051AA34  50                        PUSH EAX
0051AA35  E8 56 60 1F 00            CALL 0x00710a90
0051AA3A  8A 15 4E 87 80 00         MOV DL,byte ptr [0x0080874e]
0051AA40  33 C9                     XOR ECX,ECX
0051AA42  80 FA 03                  CMP DL,0x3
0051AA45  8B 15 18 76 80 00         MOV EDX,dword ptr [0x00807618]
0051AA4B  0F 95 C1                  SETNZ CL
0051AA4E  49                        DEC ECX
0051AA4F  83 E1 05                  AND ECX,0x5
0051AA52  51                        PUSH ECX
0051AA53  6A FF                     PUSH -0x1
0051AA55  6A 01                     PUSH 0x1
0051AA57  52                        PUSH EDX
0051AA58  68 4D 56 00 00            PUSH 0x564d
0051AA5D  E8 DE 56 19 00            CALL 0x006b0140
0051AA62  8B 8E E0 01 00 00         MOV ECX,dword ptr [ESI + 0x1e0]
0051AA68  50                        PUSH EAX
0051AA69  E8 52 6F 1F 00            CALL 0x007119c0
0051AA6E  8B 04 9D C0 3D 7E 00      MOV EAX,dword ptr [EBX*0x4 + 0x7e3dc0]
0051AA75  8D 0C 9D C0 3D 7E 00      LEA ECX,[EBX*0x4 + 0x7e3dc0]
0051AA7C  89 45 F4                  MOV dword ptr [EBP + -0xc],EAX
0051AA7F  89 4D E8                  MOV dword ptr [EBP + -0x18],ECX
0051AA82  C7 45 EC 42 00 00 00      MOV dword ptr [EBP + -0x14],0x42
LAB_0051aa89:
0051AA89  8B 09                     MOV ECX,dword ptr [ECX]
0051AA8B  8B 55 F4                  MOV EDX,dword ptr [EBP + -0xc]
0051AA8E  3B CA                     CMP ECX,EDX
0051AA90  7D 03                     JGE 0x0051aa95
0051AA92  89 4D F4                  MOV dword ptr [EBP + -0xc],ECX
LAB_0051aa95:
0051AA95  3B C8                     CMP ECX,EAX
0051AA97  7E 02                     JLE 0x0051aa9b
0051AA99  8B C1                     MOV EAX,ECX
LAB_0051aa9b:
0051AA9B  8B 4D E8                  MOV ECX,dword ptr [EBP + -0x18]
0051AA9E  8B 55 EC                  MOV EDX,dword ptr [EBP + -0x14]
0051AAA1  83 C1 0C                  ADD ECX,0xc
0051AAA4  4A                        DEC EDX
0051AAA5  89 4D E8                  MOV dword ptr [EBP + -0x18],ECX
0051AAA8  89 55 EC                  MOV dword ptr [EBP + -0x14],EDX
0051AAAB  75 DC                     JNZ 0x0051aa89
0051AAAD  8B 55 F4                  MOV EDX,dword ptr [EBP + -0xc]
0051AAB0  8B 0C BD C4 3D 7E 00      MOV ECX,dword ptr [EDI*0x4 + 0x7e3dc4]
0051AAB7  2B C2                     SUB EAX,EDX
0051AAB9  99                        CDQ
0051AABA  83 E2 03                  AND EDX,0x3
0051AABD  03 C2                     ADD EAX,EDX
0051AABF  8B 55 F4                  MOV EDX,dword ptr [EBP + -0xc]
0051AAC2  C1 F8 02                  SAR EAX,0x2
0051AAC5  03 D0                     ADD EDX,EAX
0051AAC7  3B CA                     CMP ECX,EDX
0051AAC9  7D 09                     JGE 0x0051aad4
0051AACB  C7 45 F4 13 56 00 00      MOV dword ptr [EBP + -0xc],0x5613
0051AAD2  EB 1A                     JMP 0x0051aaee
LAB_0051aad4:
0051AAD4  8B 55 F4                  MOV EDX,dword ptr [EBP + -0xc]
0051AAD7  8D 04 42                  LEA EAX,[EDX + EAX*0x2]
0051AADA  33 D2                     XOR EDX,EDX
0051AADC  3B C8                     CMP ECX,EAX
0051AADE  0F 9D C2                  SETGE DL
0051AAE1  4A                        DEC EDX
0051AAE2  83 E2 FE                  AND EDX,0xfffffffe
0051AAE5  81 C2 16 56 00 00         ADD EDX,0x5616
0051AAEB  89 55 F4                  MOV dword ptr [EBP + -0xc],EDX
LAB_0051aaee:
0051AAEE  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
0051AAF1  8B 8E 18 02 00 00         MOV ECX,dword ptr [ESI + 0x218]
0051AAF7  6A 0F                     PUSH 0xf
0051AAF9  68 91 00 00 00            PUSH 0x91
0051AAFE  50                        PUSH EAX
0051AAFF  6A 00                     PUSH 0x0
0051AB01  6A 00                     PUSH 0x0
0051AB03  51                        PUSH ECX
0051AB04  8B 8E E0 01 00 00         MOV ECX,dword ptr [ESI + 0x1e0]
0051AB0A  E8 81 5F 1F 00            CALL 0x00710a90
0051AB0F  8B 15 18 76 80 00         MOV EDX,dword ptr [0x00807618]
0051AB15  8B 45 F4                  MOV EAX,dword ptr [EBP + -0xc]
0051AB18  6A 02                     PUSH 0x2
0051AB1A  6A FF                     PUSH -0x1
0051AB1C  6A FD                     PUSH -0x3
0051AB1E  52                        PUSH EDX
0051AB1F  50                        PUSH EAX
0051AB20  E8 1B 56 19 00            CALL 0x006b0140
0051AB25  8B 8E E0 01 00 00         MOV ECX,dword ptr [ESI + 0x1e0]
0051AB2B  50                        PUSH EAX
0051AB2C  E8 8F 6E 1F 00            CALL 0x007119c0
0051AB31  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
0051AB34  8B 8E 18 02 00 00         MOV ECX,dword ptr [ESI + 0x218]
0051AB3A  83 C0 0F                  ADD EAX,0xf
0051AB3D  6A 0F                     PUSH 0xf
0051AB3F  68 06 01 00 00            PUSH 0x106
0051AB44  50                        PUSH EAX
0051AB45  68 96 00 00 00            PUSH 0x96
0051AB4A  6A 00                     PUSH 0x0
0051AB4C  51                        PUSH ECX
0051AB4D  8B 8E E0 01 00 00         MOV ECX,dword ptr [ESI + 0x1e0]
0051AB53  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
0051AB56  E8 35 5F 1F 00            CALL 0x00710a90
0051AB5B  A0 4E 87 80 00            MOV AL,[0x0080874e]
0051AB60  33 D2                     XOR EDX,EDX
0051AB62  3C 03                     CMP AL,0x3
0051AB64  A1 18 76 80 00            MOV EAX,[0x00807618]
0051AB69  0F 95 C2                  SETNZ DL
0051AB6C  4A                        DEC EDX
0051AB6D  83 E2 05                  AND EDX,0x5
0051AB70  52                        PUSH EDX
0051AB71  6A FF                     PUSH -0x1
0051AB73  6A 01                     PUSH 0x1
0051AB75  50                        PUSH EAX
0051AB76  68 5A 56 00 00            PUSH 0x565a
0051AB7B  E8 C0 55 19 00            CALL 0x006b0140
0051AB80  8B 8E E0 01 00 00         MOV ECX,dword ptr [ESI + 0x1e0]
0051AB86  50                        PUSH EAX
0051AB87  E8 34 6E 1F 00            CALL 0x007119c0
0051AB8C  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
0051AB8F  8B 96 18 02 00 00         MOV EDX,dword ptr [ESI + 0x218]
0051AB95  6A 0F                     PUSH 0xf
0051AB97  68 91 00 00 00            PUSH 0x91
0051AB9C  51                        PUSH ECX
0051AB9D  8B 8E E0 01 00 00         MOV ECX,dword ptr [ESI + 0x1e0]
0051ABA3  6A 00                     PUSH 0x0
0051ABA5  6A 00                     PUSH 0x0
0051ABA7  52                        PUSH EDX
0051ABA8  E8 E3 5E 1F 00            CALL 0x00710a90
0051ABAD  8B 0C BD 18 1B 79 00      MOV ECX,dword ptr [EDI*0x4 + 0x791b18]
0051ABB4  A1 18 76 80 00            MOV EAX,[0x00807618]
0051ABB9  F7 D9                     NEG ECX
0051ABBB  6A 02                     PUSH 0x2
0051ABBD  6A FF                     PUSH -0x1
0051ABBF  1B C9                     SBB ECX,ECX
0051ABC1  6A FD                     PUSH -0x3
0051ABC3  81 C1 3F 27 00 00         ADD ECX,0x273f
0051ABC9  50                        PUSH EAX
0051ABCA  51                        PUSH ECX
0051ABCB  E8 70 55 19 00            CALL 0x006b0140
0051ABD0  8B 8E E0 01 00 00         MOV ECX,dword ptr [ESI + 0x1e0]
0051ABD6  50                        PUSH EAX
0051ABD7  E8 E4 6D 1F 00            CALL 0x007119c0
0051ABDC  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
0051ABDF  83 C2 0F                  ADD EDX,0xf
0051ABE2  89 55 FC                  MOV dword ptr [EBP + -0x4],EDX
0051ABE5  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
0051ABE8  8D 42 CE                  LEA EAX,[EDX + -0x32]
0051ABEB  8B 0C C5 28 3E 79 00      MOV ECX,dword ptr [EAX*0x8 + 0x793e28]
0051ABF2  85 C9                     TEST ECX,ECX
0051ABF4  74 09                     JZ 0x0051abff
0051ABF6  8B 0C C5 38 40 79 00      MOV ECX,dword ptr [EAX*0x8 + 0x794038]
0051ABFD  EB 02                     JMP 0x0051ac01
LAB_0051abff:
0051ABFF  33 C9                     XOR ECX,ECX
LAB_0051ac01:
0051AC01  8D 04 40                  LEA EAX,[EAX + EAX*0x2]
0051AC04  53                        PUSH EBX
0051AC05  C1 E0 03                  SHL EAX,0x3
0051AC08  89 45 EC                  MOV dword ptr [EBP + -0x14],EAX
0051AC0B  51                        PUSH ECX
0051AC0C  8B 80 A0 2C 79 00         MOV EAX,dword ptr [EAX + 0x792ca0]
0051AC12  8D 4D FC                  LEA ECX,[EBP + -0x4]
0051AC15  50                        PUSH EAX
0051AC16  51                        PUSH ECX
0051AC17  68 96 00 00 00            PUSH 0x96
0051AC1C  8B CE                     MOV ECX,ESI
0051AC1E  E8 F4 92 EE FF            CALL 0x00403f17
0051AC23  85 C0                     TEST EAX,EAX
0051AC25  75 0B                     JNZ 0x0051ac32
0051AC27  8A 45 FB                  MOV AL,byte ptr [EBP + -0x5]
0051AC2A  C6 45 FB 00               MOV byte ptr [EBP + -0x5],0x0
0051AC2E  84 C0                     TEST AL,AL
0051AC30  74 04                     JZ 0x0051ac36
LAB_0051ac32:
0051AC32  C6 45 FB 01               MOV byte ptr [EBP + -0x5],0x1
LAB_0051ac36:
0051AC36  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
0051AC39  8D 42 CE                  LEA EAX,[EDX + -0x32]
0051AC3C  8B 0C C5 2C 3E 79 00      MOV ECX,dword ptr [EAX*0x8 + 0x793e2c]
0051AC43  85 C9                     TEST ECX,ECX
0051AC45  74 09                     JZ 0x0051ac50
0051AC47  8B 04 C5 3C 40 79 00      MOV EAX,dword ptr [EAX*0x8 + 0x79403c]
0051AC4E  EB 02                     JMP 0x0051ac52
LAB_0051ac50:
0051AC50  33 C0                     XOR EAX,EAX
LAB_0051ac52:
0051AC52  53                        PUSH EBX
0051AC53  50                        PUSH EAX
0051AC54  8B 45 EC                  MOV EAX,dword ptr [EBP + -0x14]
0051AC57  8D 55 FC                  LEA EDX,[EBP + -0x4]
0051AC5A  8B 88 AC 2C 79 00         MOV ECX,dword ptr [EAX + 0x792cac]
0051AC60  51                        PUSH ECX
0051AC61  52                        PUSH EDX
0051AC62  68 96 00 00 00            PUSH 0x96
0051AC67  8B CE                     MOV ECX,ESI
0051AC69  E8 A9 92 EE FF            CALL 0x00403f17
0051AC6E  85 C0                     TEST EAX,EAX
0051AC70  75 0B                     JNZ 0x0051ac7d
0051AC72  8A 45 FB                  MOV AL,byte ptr [EBP + -0x5]
0051AC75  C6 45 FB 00               MOV byte ptr [EBP + -0x5],0x0
0051AC79  84 C0                     TEST AL,AL
0051AC7B  74 04                     JZ 0x0051ac81
LAB_0051ac7d:
0051AC7D  C6 45 FB 01               MOV byte ptr [EBP + -0x5],0x1
LAB_0051ac81:
0051AC81  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
0051AC84  8B 8E 18 02 00 00         MOV ECX,dword ptr [ESI + 0x218]
0051AC8A  6A 0F                     PUSH 0xf
0051AC8C  68 06 01 00 00            PUSH 0x106
0051AC91  50                        PUSH EAX
0051AC92  68 96 00 00 00            PUSH 0x96
0051AC97  6A 00                     PUSH 0x0
0051AC99  51                        PUSH ECX
0051AC9A  8B 8E E0 01 00 00         MOV ECX,dword ptr [ESI + 0x1e0]
0051ACA0  E8 EB 5D 1F 00            CALL 0x00710a90
0051ACA5  A0 4E 87 80 00            MOV AL,[0x0080874e]
0051ACAA  33 D2                     XOR EDX,EDX
0051ACAC  3C 03                     CMP AL,0x3
0051ACAE  A1 18 76 80 00            MOV EAX,[0x00807618]
0051ACB3  0F 95 C2                  SETNZ DL
0051ACB6  4A                        DEC EDX
0051ACB7  83 E2 05                  AND EDX,0x5
0051ACBA  52                        PUSH EDX
0051ACBB  6A FF                     PUSH -0x1
0051ACBD  6A 01                     PUSH 0x1
0051ACBF  50                        PUSH EAX
0051ACC0  68 4E 56 00 00            PUSH 0x564e
0051ACC5  E8 76 54 19 00            CALL 0x006b0140
0051ACCA  8B 8E E0 01 00 00         MOV ECX,dword ptr [ESI + 0x1e0]
0051ACD0  50                        PUSH EAX
0051ACD1  E8 EA 6C 1F 00            CALL 0x007119c0
0051ACD6  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
0051ACD9  8B 96 18 02 00 00         MOV EDX,dword ptr [ESI + 0x218]
0051ACDF  6A 0F                     PUSH 0xf
0051ACE1  68 91 00 00 00            PUSH 0x91
0051ACE6  51                        PUSH ECX
0051ACE7  8B 8E E0 01 00 00         MOV ECX,dword ptr [ESI + 0x1e0]
0051ACED  6A 00                     PUSH 0x0
0051ACEF  6A 00                     PUSH 0x0
0051ACF1  52                        PUSH EDX
0051ACF2  E8 99 5D 1F 00            CALL 0x00710a90
0051ACF7  A1 18 76 80 00            MOV EAX,[0x00807618]
0051ACFC  33 C9                     XOR ECX,ECX
0051ACFE  83 FB 03                  CMP EBX,0x3
0051AD01  6A 02                     PUSH 0x2
0051AD03  0F 95 C1                  SETNZ CL
0051AD06  6A FF                     PUSH -0x1
0051AD08  6A FD                     PUSH -0x3
0051AD0A  81 C1 3E 27 00 00         ADD ECX,0x273e
0051AD10  50                        PUSH EAX
0051AD11  51                        PUSH ECX
0051AD12  E8 29 54 19 00            CALL 0x006b0140
0051AD17  8B 8E E0 01 00 00         MOV ECX,dword ptr [ESI + 0x1e0]
0051AD1D  50                        PUSH EAX
0051AD1E  E8 9D 6C 1F 00            CALL 0x007119c0
0051AD23  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
0051AD26  8A 45 FB                  MOV AL,byte ptr [EBP + -0x5]
0051AD29  83 C1 0F                  ADD ECX,0xf
0051AD2C  84 C0                     TEST AL,AL
0051AD2E  89 4D FC                  MOV dword ptr [EBP + -0x4],ECX
0051AD31  0F 84 F5 00 00 00         JZ 0x0051ae2c
0051AD37  8B 86 18 02 00 00         MOV EAX,dword ptr [ESI + 0x218]
0051AD3D  6A 0F                     PUSH 0xf
0051AD3F  8B D1                     MOV EDX,ECX
0051AD41  8B 8E E0 01 00 00         MOV ECX,dword ptr [ESI + 0x1e0]
0051AD47  68 06 01 00 00            PUSH 0x106
0051AD4C  33 FF                     XOR EDI,EDI
0051AD4E  52                        PUSH EDX
0051AD4F  68 96 00 00 00            PUSH 0x96
0051AD54  57                        PUSH EDI
0051AD55  50                        PUSH EAX
0051AD56  E8 35 5D 1F 00            CALL 0x00710a90
0051AD5B  8A 15 4E 87 80 00         MOV DL,byte ptr [0x0080874e]
0051AD61  33 C9                     XOR ECX,ECX
0051AD63  80 FA 03                  CMP DL,0x3
0051AD66  8B 15 18 76 80 00         MOV EDX,dword ptr [0x00807618]
0051AD6C  0F 95 C1                  SETNZ CL
0051AD6F  49                        DEC ECX
0051AD70  83 E1 05                  AND ECX,0x5
0051AD73  51                        PUSH ECX
0051AD74  6A FF                     PUSH -0x1
0051AD76  6A 01                     PUSH 0x1
0051AD78  52                        PUSH EDX
0051AD79  68 4F 56 00 00            PUSH 0x564f
0051AD7E  E8 BD 53 19 00            CALL 0x006b0140
0051AD83  8B 8E E0 01 00 00         MOV ECX,dword ptr [ESI + 0x1e0]
0051AD89  50                        PUSH EAX
0051AD8A  E8 31 6C 1F 00            CALL 0x007119c0
0051AD8F  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
0051AD92  8B 8E 18 02 00 00         MOV ECX,dword ptr [ESI + 0x218]
0051AD98  6A 0F                     PUSH 0xf
0051AD9A  68 91 00 00 00            PUSH 0x91
0051AD9F  50                        PUSH EAX
0051ADA0  57                        PUSH EDI
0051ADA1  57                        PUSH EDI
0051ADA2  51                        PUSH ECX
0051ADA3  8B 8E E0 01 00 00         MOV ECX,dword ptr [ESI + 0x1e0]
0051ADA9  E8 E2 5C 1F 00            CALL 0x00710a90
0051ADAE  8B 4D EC                  MOV ECX,dword ptr [EBP + -0x14]
0051ADB1  8B 81 A0 2C 79 00         MOV EAX,dword ptr [ECX + 0x792ca0]
0051ADB7  85 C0                     TEST EAX,EAX
0051ADB9  74 17                     JZ 0x0051add2
0051ADBB  8D 94 40 3E FE FF FF      LEA EDX,[EAX + EAX*0x2 + 0xfffffe3e]
0051ADC2  33 C0                     XOR EAX,EAX
0051ADC4  8B 3C 95 78 F6 7B 00      MOV EDI,dword ptr [EDX*0x4 + 0x7bf678]
0051ADCB  85 FF                     TEST EDI,EDI
0051ADCD  0F 95 C0                  SETNZ AL
0051ADD0  8B F8                     MOV EDI,EAX
LAB_0051add2:
0051ADD2  8B 89 AC 2C 79 00         MOV ECX,dword ptr [ECX + 0x792cac]
0051ADD8  85 C9                     TEST ECX,ECX
0051ADDA  74 1B                     JZ 0x0051adf7
0051ADDC  85 FF                     TEST EDI,EDI
0051ADDE  75 12                     JNZ 0x0051adf2
0051ADE0  8D 8C 49 3E FE FF FF      LEA ECX,[ECX + ECX*0x2 + 0xfffffe3e]
0051ADE7  8B 04 8D 78 F6 7B 00      MOV EAX,dword ptr [ECX*0x4 + 0x7bf678]
0051ADEE  85 C0                     TEST EAX,EAX
0051ADF0  74 05                     JZ 0x0051adf7
LAB_0051adf2:
0051ADF2  BF 01 00 00 00            MOV EDI,0x1
LAB_0051adf7:
0051ADF7  8B 15 18 76 80 00         MOV EDX,dword ptr [0x00807618]
0051ADFD  6A 02                     PUSH 0x2
0051ADFF  F7 DF                     NEG EDI
0051AE01  1B FF                     SBB EDI,EDI
0051AE03  6A FF                     PUSH -0x1
0051AE05  6A FD                     PUSH -0x3
0051AE07  81 C7 3F 27 00 00         ADD EDI,0x273f
0051AE0D  52                        PUSH EDX
0051AE0E  57                        PUSH EDI
0051AE0F  E8 2C 53 19 00            CALL 0x006b0140
0051AE14  8B 8E E0 01 00 00         MOV ECX,dword ptr [ESI + 0x1e0]
0051AE1A  50                        PUSH EAX
0051AE1B  E8 A0 6B 1F 00            CALL 0x007119c0
0051AE20  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
0051AE23  8B 7D F0                  MOV EDI,dword ptr [EBP + -0x10]
0051AE26  83 C0 0F                  ADD EAX,0xf
0051AE29  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
LAB_0051ae2c:
0051AE2C  83 FB 03                  CMP EBX,0x3
0051AE2F  0F 84 D4 01 00 00         JZ 0x0051b009
0051AE35  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
0051AE38  8B 8E 18 02 00 00         MOV ECX,dword ptr [ESI + 0x218]
0051AE3E  6A 0F                     PUSH 0xf
0051AE40  68 06 01 00 00            PUSH 0x106
0051AE45  50                        PUSH EAX
0051AE46  68 96 00 00 00            PUSH 0x96
0051AE4B  6A 00                     PUSH 0x0
0051AE4D  51                        PUSH ECX
0051AE4E  8B 8E E0 01 00 00         MOV ECX,dword ptr [ESI + 0x1e0]
0051AE54  E8 37 5C 1F 00            CALL 0x00710a90
0051AE59  A0 4E 87 80 00            MOV AL,[0x0080874e]
0051AE5E  33 D2                     XOR EDX,EDX
0051AE60  3C 03                     CMP AL,0x3
0051AE62  A1 18 76 80 00            MOV EAX,[0x00807618]
0051AE67  0F 95 C2                  SETNZ DL
0051AE6A  4A                        DEC EDX
0051AE6B  83 E2 05                  AND EDX,0x5
0051AE6E  52                        PUSH EDX
0051AE6F  6A FF                     PUSH -0x1
0051AE71  6A 01                     PUSH 0x1
0051AE73  50                        PUSH EAX
0051AE74  68 50 56 00 00            PUSH 0x5650
0051AE79  E8 C2 52 19 00            CALL 0x006b0140
0051AE7E  8B 8E E0 01 00 00         MOV ECX,dword ptr [ESI + 0x1e0]
0051AE84  50                        PUSH EAX
0051AE85  E8 36 6B 1F 00            CALL 0x007119c0
0051AE8A  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
0051AE8D  8B 96 18 02 00 00         MOV EDX,dword ptr [ESI + 0x218]
0051AE93  8B 3C BD F0 29 7E 00      MOV EDI,dword ptr [EDI*0x4 + 0x7e29f0]
0051AE9A  6A 0F                     PUSH 0xf
0051AE9C  68 91 00 00 00            PUSH 0x91
0051AEA1  51                        PUSH ECX
0051AEA2  8B 8E E0 01 00 00         MOV ECX,dword ptr [ESI + 0x1e0]
0051AEA8  6A 00                     PUSH 0x0
0051AEAA  6A 00                     PUSH 0x0
0051AEAC  52                        PUSH EDX
0051AEAD  E8 DE 5B 1F 00            CALL 0x00710a90
0051AEB2  A1 18 76 80 00            MOV EAX,[0x00807618]
0051AEB7  8B CF                     MOV ECX,EDI
0051AEB9  F7 D9                     NEG ECX
0051AEBB  6A 02                     PUSH 0x2
0051AEBD  6A FF                     PUSH -0x1
0051AEBF  1B C9                     SBB ECX,ECX
0051AEC1  6A FD                     PUSH -0x3
0051AEC3  81 C1 3F 27 00 00         ADD ECX,0x273f
0051AEC9  50                        PUSH EAX
0051AECA  51                        PUSH ECX
0051AECB  E8 70 52 19 00            CALL 0x006b0140
0051AED0  8B 8E E0 01 00 00         MOV ECX,dword ptr [ESI + 0x1e0]
0051AED6  50                        PUSH EAX
0051AED7  E8 E4 6A 1F 00            CALL 0x007119c0
0051AEDC  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
0051AEDF  83 C1 0F                  ADD ECX,0xf
0051AEE2  85 FF                     TEST EDI,EDI
0051AEE4  89 4D FC                  MOV dword ptr [EBP + -0x4],ECX
0051AEE7  0F 84 19 01 00 00         JZ 0x0051b006
0051AEED  8B 86 18 02 00 00         MOV EAX,dword ptr [ESI + 0x218]
0051AEF3  6A 0F                     PUSH 0xf
0051AEF5  8B D1                     MOV EDX,ECX
0051AEF7  8B 8E E0 01 00 00         MOV ECX,dword ptr [ESI + 0x1e0]
0051AEFD  68 06 01 00 00            PUSH 0x106
0051AF02  52                        PUSH EDX
0051AF03  68 96 00 00 00            PUSH 0x96
0051AF08  6A 00                     PUSH 0x0
0051AF0A  50                        PUSH EAX
0051AF0B  E8 80 5B 1F 00            CALL 0x00710a90
0051AF10  A0 4E 87 80 00            MOV AL,[0x0080874e]
0051AF15  33 C9                     XOR ECX,ECX
0051AF17  3C 03                     CMP AL,0x3
0051AF19  8B 15 18 76 80 00         MOV EDX,dword ptr [0x00807618]
0051AF1F  0F 95 C1                  SETNZ CL
0051AF22  49                        DEC ECX
0051AF23  83 E1 05                  AND ECX,0x5
0051AF26  51                        PUSH ECX
0051AF27  6A FF                     PUSH -0x1
0051AF29  6A 01                     PUSH 0x1
0051AF2B  52                        PUSH EDX
0051AF2C  68 51 56 00 00            PUSH 0x5651
0051AF31  E8 0A 52 19 00            CALL 0x006b0140
0051AF36  8B 8E E0 01 00 00         MOV ECX,dword ptr [ESI + 0x1e0]
0051AF3C  50                        PUSH EAX
0051AF3D  E8 7E 6A 1F 00            CALL 0x007119c0
0051AF42  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
0051AF45  8B 8E 18 02 00 00         MOV ECX,dword ptr [ESI + 0x218]
0051AF4B  6A 14                     PUSH 0x14
0051AF4D  83 C0 FD                  ADD EAX,-0x3
0051AF50  6A 16                     PUSH 0x16
0051AF52  50                        PUSH EAX
0051AF53  6A 5F                     PUSH 0x5f
0051AF55  6A 00                     PUSH 0x0
0051AF57  51                        PUSH ECX
0051AF58  8B 8E E8 01 00 00         MOV ECX,dword ptr [ESI + 0x1e8]
0051AF5E  E8 2D 5B 1F 00            CALL 0x00710a90
0051AF63  57                        PUSH EDI
0051AF64  68 E4 1A 7C 00            PUSH 0x7c1ae4
0051AF69  68 3A F3 80 00            PUSH 0x80f33a
0051AF6E  FF 15 E8 BD 85 00         CALL dword ptr [0x0085bde8]
0051AF74  8A 15 4E 87 80 00         MOV DL,byte ptr [0x0080874e]
0051AF7A  83 C4 0C                  ADD ESP,0xc
0051AF7D  80 EA 03                  SUB DL,0x3
0051AF80  8B 8E E8 01 00 00         MOV ECX,dword ptr [ESI + 0x1e8]
0051AF86  F6 DA                     NEG DL
0051AF88  1B D2                     SBB EDX,EDX
0051AF8A  83 E2 FB                  AND EDX,0xfffffffb
0051AF8D  83 C2 07                  ADD EDX,0x7
0051AF90  52                        PUSH EDX
0051AF91  6A FF                     PUSH -0x1
0051AF93  6A 01                     PUSH 0x1
0051AF95  68 3A F3 80 00            PUSH 0x80f33a
0051AF9A  E8 21 6A 1F 00            CALL 0x007119c0
0051AF9F  8B 86 38 02 00 00         MOV EAX,dword ptr [ESI + 0x238]
0051AFA5  6A 01                     PUSH 0x1
0051AFA7  50                        PUSH EAX
0051AFA8  E8 F3 03 1F 00            CALL 0x0070b3a0
0051AFAD  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
0051AFB0  8B 96 18 02 00 00         MOV EDX,dword ptr [ESI + 0x218]
0051AFB6  83 C4 08                  ADD ESP,0x8
0051AFB9  8B F8                     MOV EDI,EAX
0051AFBB  6A 3A                     PUSH 0x3a
0051AFBD  6A 00                     PUSH 0x0
0051AFBF  57                        PUSH EDI
0051AFC0  51                        PUSH ECX
0051AFC1  6A 7A                     PUSH 0x7a
0051AFC3  6A 00                     PUSH 0x0
0051AFC5  52                        PUSH EDX
0051AFC6  E8 75 A4 19 00            CALL 0x006b5440
0051AFCB  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
0051AFCE  C7 45 CC 7A 00 00 00      MOV dword ptr [EBP + -0x34],0x7a
0051AFD5  8B 47 04                  MOV EAX,dword ptr [EDI + 0x4]
0051AFD8  89 4D D0                  MOV dword ptr [EBP + -0x30],ECX
0051AFDB  89 45 D4                  MOV dword ptr [EBP + -0x2c],EAX
0051AFDE  8B 57 08                  MOV EDX,dword ptr [EDI + 0x8]
0051AFE1  89 55 D8                  MOV dword ptr [EBP + -0x28],EDX
0051AFE4  C6 45 DC 01               MOV byte ptr [EBP + -0x24],0x1
0051AFE8  C7 45 DD DE 00 00 00      MOV dword ptr [EBP + -0x23],0xde
0051AFEF  89 5D E1                  MOV dword ptr [EBP + -0x1f],EBX
0051AFF2  8D 45 CC                  LEA EAX,[EBP + -0x34]
0051AFF5  8B 8E D7 01 00 00         MOV ECX,dword ptr [ESI + 0x1d7]
0051AFFB  50                        PUSH EAX
0051AFFC  51                        PUSH ECX
0051AFFD  E8 BE 31 19 00            CALL 0x006ae1c0
0051B002  83 45 FC 14               ADD dword ptr [EBP + -0x4],0x14
LAB_0051b006:
0051B006  8B 7D F0                  MOV EDI,dword ptr [EBP + -0x10]
LAB_0051b009:
0051B009  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
0051B00C  8B 86 18 02 00 00         MOV EAX,dword ptr [ESI + 0x218]
0051B012  8B 8E E0 01 00 00         MOV ECX,dword ptr [ESI + 0x1e0]
0051B018  6A 0F                     PUSH 0xf
0051B01A  68 06 01 00 00            PUSH 0x106
0051B01F  52                        PUSH EDX
0051B020  68 96 00 00 00            PUSH 0x96
0051B025  6A 00                     PUSH 0x0
0051B027  50                        PUSH EAX
0051B028  E8 63 5A 1F 00            CALL 0x00710a90
0051B02D  8A 15 4E 87 80 00         MOV DL,byte ptr [0x0080874e]
0051B033  33 C9                     XOR ECX,ECX
0051B035  80 FA 03                  CMP DL,0x3
0051B038  8B 15 18 76 80 00         MOV EDX,dword ptr [0x00807618]
0051B03E  0F 95 C1                  SETNZ CL
0051B041  49                        DEC ECX
0051B042  83 E1 05                  AND ECX,0x5
0051B045  51                        PUSH ECX
0051B046  6A FF                     PUSH -0x1
0051B048  6A 01                     PUSH 0x1
0051B04A  52                        PUSH EDX
0051B04B  68 5B 56 00 00            PUSH 0x565b
0051B050  E8 EB 50 19 00            CALL 0x006b0140
0051B055  8B 8E E0 01 00 00         MOV ECX,dword ptr [ESI + 0x1e0]
0051B05B  50                        PUSH EAX
0051B05C  E8 5F 69 1F 00            CALL 0x007119c0
0051B061  C7 45 F4 00 00 00 00      MOV dword ptr [EBP + -0xc],0x0
0051B068  33 C0                     XOR EAX,EAX
0051B06A  8D 3C 7F                  LEA EDI,[EDI + EDI*0x2]
LAB_0051b06d:
0051B06D  8B C8                     MOV ECX,EAX
0051B06F  81 E1 FF FF 00 00         AND ECX,0xffff
0051B075  8A 94 39 88 19 7E 00      MOV DL,byte ptr [ECX + EDI*0x1 + 0x7e1988]
0051B07C  84 D2                     TEST DL,DL
0051B07E  75 09                     JNZ 0x0051b089
0051B080  40                        INC EAX
0051B081  66 3D 03 00               CMP AX,0x3
0051B085  72 E6                     JC 0x0051b06d
0051B087  EB 07                     JMP 0x0051b090
LAB_0051b089:
0051B089  C7 45 F4 3E 27 00 00      MOV dword ptr [EBP + -0xc],0x273e
LAB_0051b090:
0051B090  8B 45 F4                  MOV EAX,dword ptr [EBP + -0xc]
0051B093  85 C0                     TEST EAX,EAX
0051B095  75 07                     JNZ 0x0051b09e
0051B097  C7 45 F4 3F 27 00 00      MOV dword ptr [EBP + -0xc],0x273f
LAB_0051b09e:
0051B09E  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
0051B0A1  8B 86 18 02 00 00         MOV EAX,dword ptr [ESI + 0x218]
0051B0A7  8B 8E E0 01 00 00         MOV ECX,dword ptr [ESI + 0x1e0]
0051B0AD  6A 0F                     PUSH 0xf
0051B0AF  68 91 00 00 00            PUSH 0x91
0051B0B4  52                        PUSH EDX
0051B0B5  6A 00                     PUSH 0x0
0051B0B7  6A 00                     PUSH 0x0
0051B0B9  50                        PUSH EAX
0051B0BA  E8 D1 59 1F 00            CALL 0x00710a90
0051B0BF  8B 0D 18 76 80 00         MOV ECX,dword ptr [0x00807618]
0051B0C5  8B 55 F4                  MOV EDX,dword ptr [EBP + -0xc]
0051B0C8  6A 02                     PUSH 0x2
0051B0CA  6A FF                     PUSH -0x1
0051B0CC  6A FD                     PUSH -0x3
0051B0CE  51                        PUSH ECX
0051B0CF  52                        PUSH EDX
0051B0D0  E8 6B 50 19 00            CALL 0x006b0140
0051B0D5  8B 8E E0 01 00 00         MOV ECX,dword ptr [ESI + 0x1e0]
0051B0DB  50                        PUSH EAX
0051B0DC  E8 DF 68 1F 00            CALL 0x007119c0
0051B0E1  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
0051B0E4  8B 7D 08                  MOV EDI,dword ptr [EBP + 0x8]
0051B0E7  6A 02                     PUSH 0x2
0051B0E9  83 C1 0F                  ADD ECX,0xf
0051B0EC  53                        PUSH EBX
0051B0ED  57                        PUSH EDI
0051B0EE  89 4D FC                  MOV dword ptr [EBP + -0x4],ECX
0051B0F1  E8 8E 85 EE FF            CALL 0x00403684
0051B0F6  83 C4 0C                  ADD ESP,0xc
0051B0F9  8B CE                     MOV ECX,ESI
0051B0FB  50                        PUSH EAX
0051B0FC  8D 45 FC                  LEA EAX,[EBP + -0x4]
0051B0FF  50                        PUSH EAX
0051B100  E8 A6 7C EE FF            CALL 0x00402dab
0051B105  53                        PUSH EBX
0051B106  57                        PUSH EDI
0051B107  8D 4D FC                  LEA ECX,[EBP + -0x4]
0051B10A  6A 02                     PUSH 0x2
0051B10C  51                        PUSH ECX
0051B10D  8B CE                     MOV ECX,ESI
0051B10F  E8 5B 9F EE FF            CALL 0x0040506f
0051B114  8B 95 64 FF FF FF         MOV EDX,dword ptr [EBP + 0xffffff64]
0051B11A  89 15 F8 8D 85 00         MOV dword ptr [0x00858df8],EDX
0051B120  5F                        POP EDI
0051B121  5E                        POP ESI
0051B122  5B                        POP EBX
0051B123  8B E5                     MOV ESP,EBP
0051B125  5D                        POP EBP
0051B126  C2 0C 00                  RET 0xc
LAB_0051b129:
0051B129  8B 85 64 FF FF FF         MOV EAX,dword ptr [EBP + 0xffffff64]
0051B12F  68 A0 3C 7C 00            PUSH 0x7c3ca0
0051B134  68 CC 4C 7A 00            PUSH 0x7a4ccc
0051B139  56                        PUSH ESI
0051B13A  57                        PUSH EDI
0051B13B  68 EC 07 00 00            PUSH 0x7ec
0051B140  68 3C 38 7C 00            PUSH 0x7c383c
0051B145  A3 F8 8D 85 00            MOV [0x00858df8],EAX
0051B14A  E8 81 23 19 00            CALL 0x006ad4d0
0051B14F  83 C4 18                  ADD ESP,0x18
0051B152  85 C0                     TEST EAX,EAX
0051B154  74 01                     JZ 0x0051b157
0051B156  CC                        INT3
LAB_0051b157:
0051B157  68 EC 07 00 00            PUSH 0x7ec
0051B15C  68 3C 38 7C 00            PUSH 0x7c383c
0051B161  57                        PUSH EDI
0051B162  56                        PUSH ESI
0051B163  E8 D8 AC 18 00            CALL 0x006a5e40
LAB_0051b168:
0051B168  5F                        POP EDI
0051B169  5E                        POP ESI
0051B16A  5B                        POP EBX
0051B16B  8B E5                     MOV ESP,EBP
0051B16D  5D                        POP EBP
0051B16E  C2 0C 00                  RET 0xc
