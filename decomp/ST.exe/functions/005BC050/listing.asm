PrividerTy::DeleteCtrls:
005BC050  55                        PUSH EBP
005BC051  8B EC                     MOV EBP,ESP
005BC053  83 EC 4C                  SUB ESP,0x4c
005BC056  A1 F8 8D 85 00            MOV EAX,[0x00858df8]
005BC05B  53                        PUSH EBX
005BC05C  56                        PUSH ESI
005BC05D  89 4D F8                  MOV dword ptr [EBP + -0x8],ECX
005BC060  33 DB                     XOR EBX,EBX
005BC062  57                        PUSH EDI
005BC063  8D 55 B8                  LEA EDX,[EBP + -0x48]
005BC066  8D 4D B4                  LEA ECX,[EBP + -0x4c]
005BC069  53                        PUSH EBX
005BC06A  52                        PUSH EDX
005BC06B  89 45 B4                  MOV dword ptr [EBP + -0x4c],EAX
005BC06E  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
005BC074  E8 77 17 17 00            CALL 0x0072d7f0
005BC079  8B F0                     MOV ESI,EAX
005BC07B  83 C4 08                  ADD ESP,0x8
005BC07E  3B F3                     CMP ESI,EBX
005BC080  0F 85 EC 03 00 00         JNZ 0x005bc472
005BC086  A1 30 2A 80 00            MOV EAX,[0x00802a30]
005BC08B  3B C3                     CMP EAX,EBX
005BC08D  74 28                     JZ 0x005bc0b7
005BC08F  39 98 A9 00 00 00         CMP dword ptr [EAX + 0xa9],EBX
005BC095  74 14                     JZ 0x005bc0ab
005BC097  8B 48 1C                  MOV ECX,dword ptr [EAX + 0x1c]
005BC09A  83 F9 FF                  CMP ECX,-0x1
005BC09D  74 18                     JZ 0x005bc0b7
005BC09F  8B 40 60                  MOV EAX,dword ptr [EAX + 0x60]
005BC0A2  51                        PUSH ECX
005BC0A3  50                        PUSH EAX
005BC0A4  E8 47 7A 0F 00            CALL 0x006b3af0
005BC0A9  EB 0C                     JMP 0x005bc0b7
LAB_005bc0ab:
005BC0AB  8B 88 AD 00 00 00         MOV ECX,dword ptr [EAX + 0xad]
005BC0B1  51                        PUSH ECX
005BC0B2  E8 59 CA 0F 00            CALL 0x006b8b10
LAB_005bc0b7:
005BC0B7  8A 45 08                  MOV AL,byte ptr [EBP + 0x8]
005BC0BA  8B 75 F8                  MOV ESI,dword ptr [EBP + -0x8]
005BC0BD  3A C3                     CMP AL,BL
005BC0BF  0F 84 B7 01 00 00         JZ 0x005bc27c
005BC0C5  8B 86 73 1A 00 00         MOV EAX,dword ptr [ESI + 0x1a73]
005BC0CB  3B C3                     CMP EAX,EBX
005BC0CD  74 09                     JZ 0x005bc0d8
005BC0CF  8B 4E 0C                  MOV ECX,dword ptr [ESI + 0xc]
005BC0D2  50                        PUSH EAX
005BC0D3  E8 D8 95 12 00            CALL 0x006e56b0
LAB_005bc0d8:
005BC0D8  68 45 01 00 00            PUSH 0x145
005BC0DD  89 9E 73 1A 00 00         MOV dword ptr [ESI + 0x1a73],EBX
005BC0E3  89 9E 61 1A 00 00         MOV dword ptr [ESI + 0x1a61],EBX
005BC0E9  8B 15 A8 75 80 00         MOV EDX,dword ptr [0x008075a8]
005BC0EF  68 2E 02 00 00            PUSH 0x22e
005BC0F4  6A 51                     PUSH 0x51
005BC0F6  6A 79                     PUSH 0x79
005BC0F8  52                        PUSH EDX
005BC0F9  E8 82 9E 0F 00            CALL 0x006b5f80
005BC0FE  8B 8E 96 1C 00 00         MOV ECX,dword ptr [ESI + 0x1c96]
005BC104  3B CB                     CMP ECX,EBX
005BC106  74 1A                     JZ 0x005bc122
005BC108  E8 7D 51 E4 FF            CALL 0x0040128a
005BC10D  8B 86 96 1C 00 00         MOV EAX,dword ptr [ESI + 0x1c96]
005BC113  50                        PUSH EAX
005BC114  E8 97 21 17 00            CALL 0x0072e2b0
005BC119  83 C4 04                  ADD ESP,0x4
005BC11C  89 9E 96 1C 00 00         MOV dword ptr [ESI + 0x1c96],EBX
LAB_005bc122:
005BC122  6A 33                     PUSH 0x33
005BC124  E8 07 24 17 00            CALL 0x0072e530
005BC129  83 C4 04                  ADD ESP,0x4
005BC12C  3B C3                     CMP EAX,EBX
005BC12E  74 3A                     JZ 0x005bc16a
005BC130  BF 01 00 00 00            MOV EDI,0x1
005BC135  C6 40 02 01               MOV byte ptr [EAX + 0x2],0x1
005BC139  88 18                     MOV byte ptr [EAX],BL
005BC13B  C7 40 03 FF FF FF FF      MOV dword ptr [EAX + 0x3],0xffffffff
005BC142  C6 40 01 02               MOV byte ptr [EAX + 0x1],0x2
005BC146  89 58 07                  MOV dword ptr [EAX + 0x7],EBX
005BC149  89 58 0B                  MOV dword ptr [EAX + 0xb],EBX
005BC14C  89 58 0F                  MOV dword ptr [EAX + 0xf],EBX
005BC14F  89 78 1B                  MOV dword ptr [EAX + 0x1b],EDI
005BC152  89 78 13                  MOV dword ptr [EAX + 0x13],EDI
005BC155  C7 40 17 FF FF FF FF      MOV dword ptr [EAX + 0x17],0xffffffff
005BC15C  89 58 27                  MOV dword ptr [EAX + 0x27],EBX
005BC15F  89 58 23                  MOV dword ptr [EAX + 0x23],EBX
005BC162  89 78 2F                  MOV dword ptr [EAX + 0x2f],EDI
005BC165  89 78 2B                  MOV dword ptr [EAX + 0x2b],EDI
005BC168  EB 07                     JMP 0x005bc171
LAB_005bc16a:
005BC16A  33 C0                     XOR EAX,EAX
005BC16C  BF 01 00 00 00            MOV EDI,0x1
LAB_005bc171:
005BC171  3B C3                     CMP EAX,EBX
005BC173  89 86 96 1C 00 00         MOV dword ptr [ESI + 0x1c96],EAX
005BC179  0F 84 8E 00 00 00         JZ 0x005bc20d
005BC17F  8B 0D A8 75 80 00         MOV ECX,dword ptr [0x008075a8]
005BC185  53                        PUSH EBX
005BC186  57                        PUSH EDI
005BC187  6A 10                     PUSH 0x10
005BC189  57                        PUSH EDI
005BC18A  68 45 01 00 00            PUSH 0x145
005BC18F  68 2E 02 00 00            PUSH 0x22e
005BC194  6A 51                     PUSH 0x51
005BC196  6A 79                     PUSH 0x79
005BC198  51                        PUSH ECX
005BC199  E8 52 38 10 00            CALL 0x006bf9f0
005BC19E  8B 8E 96 1C 00 00         MOV ECX,dword ptr [ESI + 0x1c96]
005BC1A4  50                        PUSH EAX
005BC1A5  6A 51                     PUSH 0x51
005BC1A7  6A 79                     PUSH 0x79
005BC1A9  6A 02                     PUSH 0x2
005BC1AB  E8 ED 83 E4 FF            CALL 0x0040459d
005BC1B0  85 C0                     TEST EAX,EAX
005BC1B2  74 35                     JZ 0x005bc1e9
005BC1B4  8B 86 96 1C 00 00         MOV EAX,dword ptr [ESI + 0x1c96]
005BC1BA  88 58 02                  MOV byte ptr [EAX + 0x2],BL
005BC1BD  C7 40 17 FF FF FF FF      MOV dword ptr [EAX + 0x17],0xffffffff
005BC1C4  8B 86 96 1C 00 00         MOV EAX,dword ptr [ESI + 0x1c96]
005BC1CA  8B 40 03                  MOV EAX,dword ptr [EAX + 0x3]
005BC1CD  3B C3                     CMP EAX,EBX
005BC1CF  7C 0D                     JL 0x005bc1de
005BC1D1  8B 15 A8 75 80 00         MOV EDX,dword ptr [0x008075a8]
005BC1D7  50                        PUSH EAX
005BC1D8  52                        PUSH EDX
005BC1D9  E8 52 72 0F 00            CALL 0x006b3430
LAB_005bc1de:
005BC1DE  8B 8E 96 1C 00 00         MOV ECX,dword ptr [ESI + 0x1c96]
005BC1E4  E8 08 94 E4 FF            CALL 0x004055f1
LAB_005bc1e9:
005BC1E9  A1 6C 17 81 00            MOV EAX,[0x0081176c]
005BC1EE  8B 48 2C                  MOV ECX,dword ptr [EAX + 0x2c]
005BC1F1  51                        PUSH ECX
005BC1F2  57                        PUSH EDI
005BC1F3  68 45 01 00 00            PUSH 0x145
005BC1F8  68 2E 02 00 00            PUSH 0x22e
005BC1FD  6A 51                     PUSH 0x51
005BC1FF  6A 79                     PUSH 0x79
005BC201  6A 51                     PUSH 0x51
005BC203  6A 79                     PUSH 0x79
005BC205  E8 8E 60 E4 FF            CALL 0x00402298
005BC20A  83 C4 20                  ADD ESP,0x20
LAB_005bc20d:
005BC20D  8B 86 7B 1A 00 00         MOV EAX,dword ptr [ESI + 0x1a7b]
005BC213  83 F8 FF                  CMP EAX,-0x1
005BC216  74 0D                     JZ 0x005bc225
005BC218  8B 96 BF 1A 00 00         MOV EDX,dword ptr [ESI + 0x1abf]
005BC21E  50                        PUSH EAX
005BC21F  52                        PUSH EDX
005BC220  E8 CB 78 0F 00            CALL 0x006b3af0
LAB_005bc225:
005BC225  8B 86 0C 1B 00 00         MOV EAX,dword ptr [ESI + 0x1b0c]
005BC22B  83 F8 FF                  CMP EAX,-0x1
005BC22E  74 0D                     JZ 0x005bc23d
005BC230  50                        PUSH EAX
005BC231  8B 86 50 1B 00 00         MOV EAX,dword ptr [ESI + 0x1b50]
005BC237  50                        PUSH EAX
005BC238  E8 B3 78 0F 00            CALL 0x006b3af0
LAB_005bc23d:
005BC23D  8B 86 9D 1B 00 00         MOV EAX,dword ptr [ESI + 0x1b9d]
005BC243  83 F8 FF                  CMP EAX,-0x1
005BC246  74 0D                     JZ 0x005bc255
005BC248  8B 8E E1 1B 00 00         MOV ECX,dword ptr [ESI + 0x1be1]
005BC24E  50                        PUSH EAX
005BC24F  51                        PUSH ECX
005BC250  E8 9B 78 0F 00            CALL 0x006b3af0
LAB_005bc255:
005BC255  8D BE 2A 1C 00 00         LEA EDI,[ESI + 0x1c2a]
005BC25B  C7 45 FC 16 00 00 00      MOV dword ptr [EBP + -0x4],0x16
LAB_005bc262:
005BC262  8B 17                     MOV EDX,dword ptr [EDI]
005BC264  A1 A8 75 80 00            MOV EAX,[0x008075a8]
005BC269  52                        PUSH EDX
005BC26A  50                        PUSH EAX
005BC26B  E8 80 78 0F 00            CALL 0x006b3af0
005BC270  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
005BC273  83 C7 04                  ADD EDI,0x4
005BC276  48                        DEC EAX
005BC277  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
005BC27A  75 E6                     JNZ 0x005bc262
LAB_005bc27c:
005BC27C  8B 86 82 1C 00 00         MOV EAX,dword ptr [ESI + 0x1c82]
005BC282  8B 48 14                  MOV ECX,dword ptr [EAX + 0x14]
005BC285  3B CB                     CMP ECX,EBX
005BC287  75 1A                     JNZ 0x005bc2a3
005BC289  33 C9                     XOR ECX,ECX
005BC28B  66 8B 48 0E               MOV CX,word ptr [EAX + 0xe]
005BC28F  0F AF 48 04               IMUL ECX,dword ptr [EAX + 0x4]
005BC293  83 C1 1F                  ADD ECX,0x1f
005BC296  C1 E9 03                  SHR ECX,0x3
005BC299  81 E1 FC FF FF 1F         AND ECX,0x1ffffffc
005BC29F  0F AF 48 08               IMUL ECX,dword ptr [EAX + 0x8]
LAB_005bc2a3:
005BC2A3  50                        PUSH EAX
005BC2A4  89 4D FC                  MOV dword ptr [EBP + -0x4],ECX
005BC2A7  E8 F4 8C 0F 00            CALL 0x006b4fa0
005BC2AC  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
005BC2AF  8B F8                     MOV EDI,EAX
005BC2B1  8B D1                     MOV EDX,ECX
005BC2B3  33 C0                     XOR EAX,EAX
005BC2B5  C1 E9 02                  SHR ECX,0x2
005BC2B8  F3 AB                     STOSD.REP ES:EDI
005BC2BA  8B CA                     MOV ECX,EDX
005BC2BC  83 E1 03                  AND ECX,0x3
005BC2BF  F3 AA                     STOSB.REP ES:EDI
005BC2C1  8B 86 86 1C 00 00         MOV EAX,dword ptr [ESI + 0x1c86]
005BC2C7  3B C3                     CMP EAX,EBX
005BC2C9  0F 84 46 01 00 00         JZ 0x005bc415
005BC2CF  8B 4E 0C                  MOV ECX,dword ptr [ESI + 0xc]
005BC2D2  50                        PUSH EAX
005BC2D3  E8 D8 93 12 00            CALL 0x006e56b0
005BC2D8  6A 2E                     PUSH 0x2e
005BC2DA  89 9E 86 1C 00 00         MOV dword ptr [ESI + 0x1c86],EBX
005BC2E0  A1 A8 75 80 00            MOV EAX,[0x008075a8]
005BC2E5  68 2E 02 00 00            PUSH 0x22e
005BC2EA  68 97 01 00 00            PUSH 0x197
005BC2EF  6A 79                     PUSH 0x79
005BC2F1  50                        PUSH EAX
005BC2F2  E8 89 9C 0F 00            CALL 0x006b5f80
005BC2F7  8B 8E 9A 1C 00 00         MOV ECX,dword ptr [ESI + 0x1c9a]
005BC2FD  3B CB                     CMP ECX,EBX
005BC2FF  74 1A                     JZ 0x005bc31b
005BC301  E8 84 4F E4 FF            CALL 0x0040128a
005BC306  8B 8E 9A 1C 00 00         MOV ECX,dword ptr [ESI + 0x1c9a]
005BC30C  51                        PUSH ECX
005BC30D  E8 9E 1F 17 00            CALL 0x0072e2b0
005BC312  83 C4 04                  ADD ESP,0x4
005BC315  89 9E 9A 1C 00 00         MOV dword ptr [ESI + 0x1c9a],EBX
LAB_005bc31b:
005BC31B  6A 33                     PUSH 0x33
005BC31D  E8 0E 22 17 00            CALL 0x0072e530
005BC322  83 C4 04                  ADD ESP,0x4
005BC325  3B C3                     CMP EAX,EBX
005BC327  74 35                     JZ 0x005bc35e
005BC329  83 C9 FF                  OR ECX,0xffffffff
005BC32C  BF 01 00 00 00            MOV EDI,0x1
005BC331  C6 40 02 01               MOV byte ptr [EAX + 0x2],0x1
005BC335  88 18                     MOV byte ptr [EAX],BL
005BC337  89 48 03                  MOV dword ptr [EAX + 0x3],ECX
005BC33A  C6 40 01 02               MOV byte ptr [EAX + 0x1],0x2
005BC33E  89 58 07                  MOV dword ptr [EAX + 0x7],EBX
005BC341  89 58 0B                  MOV dword ptr [EAX + 0xb],EBX
005BC344  89 58 0F                  MOV dword ptr [EAX + 0xf],EBX
005BC347  89 78 1B                  MOV dword ptr [EAX + 0x1b],EDI
005BC34A  89 78 13                  MOV dword ptr [EAX + 0x13],EDI
005BC34D  89 48 17                  MOV dword ptr [EAX + 0x17],ECX
005BC350  89 58 27                  MOV dword ptr [EAX + 0x27],EBX
005BC353  89 58 23                  MOV dword ptr [EAX + 0x23],EBX
005BC356  89 78 2F                  MOV dword ptr [EAX + 0x2f],EDI
005BC359  89 78 2B                  MOV dword ptr [EAX + 0x2b],EDI
005BC35C  EB 07                     JMP 0x005bc365
LAB_005bc35e:
005BC35E  33 C0                     XOR EAX,EAX
005BC360  BF 01 00 00 00            MOV EDI,0x1
LAB_005bc365:
005BC365  3B C3                     CMP EAX,EBX
005BC367  89 86 9A 1C 00 00         MOV dword ptr [ESI + 0x1c9a],EAX
005BC36D  74 6B                     JZ 0x005bc3da
005BC36F  8B 15 A8 75 80 00         MOV EDX,dword ptr [0x008075a8]
005BC375  53                        PUSH EBX
005BC376  57                        PUSH EDI
005BC377  6A 10                     PUSH 0x10
005BC379  57                        PUSH EDI
005BC37A  6A 2E                     PUSH 0x2e
005BC37C  68 2E 02 00 00            PUSH 0x22e
005BC381  68 97 01 00 00            PUSH 0x197
005BC386  6A 79                     PUSH 0x79
005BC388  52                        PUSH EDX
005BC389  E8 62 36 10 00            CALL 0x006bf9f0
005BC38E  8B 8E 9A 1C 00 00         MOV ECX,dword ptr [ESI + 0x1c9a]
005BC394  50                        PUSH EAX
005BC395  68 97 01 00 00            PUSH 0x197
005BC39A  6A 79                     PUSH 0x79
005BC39C  57                        PUSH EDI
005BC39D  E8 FB 81 E4 FF            CALL 0x0040459d
005BC3A2  85 C0                     TEST EAX,EAX
005BC3A4  74 34                     JZ 0x005bc3da
005BC3A6  8B 86 9A 1C 00 00         MOV EAX,dword ptr [ESI + 0x1c9a]
005BC3AC  88 58 02                  MOV byte ptr [EAX + 0x2],BL
005BC3AF  C7 40 17 FF FF FF FF      MOV dword ptr [EAX + 0x17],0xffffffff
005BC3B6  8B 86 9A 1C 00 00         MOV EAX,dword ptr [ESI + 0x1c9a]
005BC3BC  8B 40 03                  MOV EAX,dword ptr [EAX + 0x3]
005BC3BF  3B C3                     CMP EAX,EBX
005BC3C1  7C 0C                     JL 0x005bc3cf
005BC3C3  50                        PUSH EAX
005BC3C4  A1 A8 75 80 00            MOV EAX,[0x008075a8]
005BC3C9  50                        PUSH EAX
005BC3CA  E8 61 70 0F 00            CALL 0x006b3430
LAB_005bc3cf:
005BC3CF  8B 8E 9A 1C 00 00         MOV ECX,dword ptr [ESI + 0x1c9a]
005BC3D5  E8 17 92 E4 FF            CALL 0x004055f1
LAB_005bc3da:
005BC3DA  8B 0D 6C 17 81 00         MOV ECX,dword ptr [0x0081176c]
005BC3E0  8B 51 2C                  MOV EDX,dword ptr [ECX + 0x2c]
005BC3E3  52                        PUSH EDX
005BC3E4  57                        PUSH EDI
005BC3E5  6A 2E                     PUSH 0x2e
005BC3E7  68 2E 02 00 00            PUSH 0x22e
005BC3EC  68 97 01 00 00            PUSH 0x197
005BC3F1  6A 79                     PUSH 0x79
005BC3F3  68 97 01 00 00            PUSH 0x197
005BC3F8  6A 79                     PUSH 0x79
005BC3FA  E8 99 5E E4 FF            CALL 0x00402298
005BC3FF  8B 86 8A 1C 00 00         MOV EAX,dword ptr [ESI + 0x1c8a]
005BC405  8B 0D A8 75 80 00         MOV ECX,dword ptr [0x008075a8]
005BC40B  83 C4 20                  ADD ESP,0x20
005BC40E  50                        PUSH EAX
005BC40F  51                        PUSH ECX
005BC410  E8 DB 76 0F 00            CALL 0x006b3af0
LAB_005bc415:
005BC415  A1 30 2A 80 00            MOV EAX,[0x00802a30]
005BC41A  3B C3                     CMP EAX,EBX
005BC41C  74 42                     JZ 0x005bc460
005BC41E  39 98 A9 00 00 00         CMP dword ptr [EAX + 0xa9],EBX
005BC424  74 2E                     JZ 0x005bc454
005BC426  8B 48 1C                  MOV ECX,dword ptr [EAX + 0x1c]
005BC429  83 F9 FF                  CMP ECX,-0x1
005BC42C  74 32                     JZ 0x005bc460
005BC42E  8B 50 38                  MOV EDX,dword ptr [EAX + 0x38]
005BC431  52                        PUSH EDX
005BC432  8B 50 34                  MOV EDX,dword ptr [EAX + 0x34]
005BC435  8B 40 60                  MOV EAX,dword ptr [EAX + 0x60]
005BC438  52                        PUSH EDX
005BC439  6A FE                     PUSH -0x2
005BC43B  51                        PUSH ECX
005BC43C  50                        PUSH EAX
005BC43D  E8 8E 70 0F 00            CALL 0x006b34d0
005BC442  8B 55 B4                  MOV EDX,dword ptr [EBP + -0x4c]
005BC445  89 15 F8 8D 85 00         MOV dword ptr [0x00858df8],EDX
005BC44B  5F                        POP EDI
005BC44C  5E                        POP ESI
005BC44D  5B                        POP EBX
005BC44E  8B E5                     MOV ESP,EBP
005BC450  5D                        POP EBP
005BC451  C2 04 00                  RET 0x4
LAB_005bc454:
005BC454  8B 88 AD 00 00 00         MOV ECX,dword ptr [EAX + 0xad]
005BC45A  51                        PUSH ECX
005BC45B  E8 00 C6 0F 00            CALL 0x006b8a60
LAB_005bc460:
005BC460  8B 55 B4                  MOV EDX,dword ptr [EBP + -0x4c]
005BC463  89 15 F8 8D 85 00         MOV dword ptr [0x00858df8],EDX
005BC469  5F                        POP EDI
005BC46A  5E                        POP ESI
005BC46B  5B                        POP EBX
005BC46C  8B E5                     MOV ESP,EBP
005BC46E  5D                        POP EBP
005BC46F  C2 04 00                  RET 0x4
LAB_005bc472:
005BC472  8B 45 B4                  MOV EAX,dword ptr [EBP + -0x4c]
005BC475  68 88 CE 7C 00            PUSH 0x7cce88
005BC47A  68 CC 4C 7A 00            PUSH 0x7a4ccc
005BC47F  56                        PUSH ESI
005BC480  53                        PUSH EBX
005BC481  68 79 02 00 00            PUSH 0x279
005BC486  68 28 CD 7C 00            PUSH 0x7ccd28
005BC48B  A3 F8 8D 85 00            MOV [0x00858df8],EAX
005BC490  E8 3B 10 0F 00            CALL 0x006ad4d0
005BC495  83 C4 18                  ADD ESP,0x18
005BC498  85 C0                     TEST EAX,EAX
005BC49A  74 01                     JZ 0x005bc49d
005BC49C  CC                        INT3
LAB_005bc49d:
005BC49D  68 79 02 00 00            PUSH 0x279
005BC4A2  68 28 CD 7C 00            PUSH 0x7ccd28
005BC4A7  53                        PUSH EBX
005BC4A8  56                        PUSH ESI
005BC4A9  E8 92 99 0E 00            CALL 0x006a5e40
005BC4AE  5F                        POP EDI
005BC4AF  5E                        POP ESI
005BC4B0  5B                        POP EBX
005BC4B1  8B E5                     MOV ESP,EBP
005BC4B3  5D                        POP EBP
005BC4B4  C2 04 00                  RET 0x4
