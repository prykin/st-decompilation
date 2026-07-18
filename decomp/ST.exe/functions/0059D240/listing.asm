FUN_0059d240:
0059D240  55                        PUSH EBP
0059D241  8B EC                     MOV EBP,ESP
0059D243  81 EC C0 08 00 00         SUB ESP,0x8c0
0059D249  53                        PUSH EBX
0059D24A  56                        PUSH ESI
0059D24B  89 4D FC                  MOV dword ptr [EBP + -0x4],ECX
0059D24E  57                        PUSH EDI
0059D24F  B9 1E 02 00 00            MOV ECX,0x21e
0059D254  33 C0                     XOR EAX,EAX
0059D256  8D BD 40 F7 FF FF         LEA EDI,[EBP + 0xfffff740]
0059D25C  8D 55 BC                  LEA EDX,[EBP + -0x44]
0059D25F  F3 AB                     STOSD.REP ES:EDI
0059D261  A1 F8 8D 85 00            MOV EAX,[0x00858df8]
0059D266  8D 4D B8                  LEA ECX,[EBP + -0x48]
0059D269  6A 00                     PUSH 0x0
0059D26B  52                        PUSH EDX
0059D26C  89 45 B8                  MOV dword ptr [EBP + -0x48],EAX
0059D26F  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
0059D275  E8 76 05 19 00            CALL 0x0072d7f0
0059D27A  8B F0                     MOV ESI,EAX
0059D27C  83 C4 08                  ADD ESP,0x8
0059D27F  85 F6                     TEST ESI,ESI
0059D281  0F 85 4C 03 00 00         JNZ 0x0059d5d3
0059D287  8B 5D FC                  MOV EBX,dword ptr [EBP + -0x4]
0059D28A  8B 83 8E 1E 00 00         MOV EAX,dword ptr [EBX + 0x1e8e]
0059D290  8D B3 8E 1E 00 00         LEA ESI,[EBX + 0x1e8e]
0059D296  85 C0                     TEST EAX,EAX
0059D298  74 06                     JZ 0x0059d2a0
0059D29A  56                        PUSH ESI
0059D29B  E8 C0 DD 10 00            CALL 0x006ab060
LAB_0059d2a0:
0059D2A0  8B 83 92 1E 00 00         MOV EAX,dword ptr [EBX + 0x1e92]
0059D2A6  8D BB 92 1E 00 00         LEA EDI,[EBX + 0x1e92]
0059D2AC  85 C0                     TEST EAX,EAX
0059D2AE  74 06                     JZ 0x0059d2b6
0059D2B0  57                        PUSH EDI
0059D2B1  E8 AA DD 10 00            CALL 0x006ab060
LAB_0059d2b6:
0059D2B6  8B 43 5D                  MOV EAX,dword ptr [EBX + 0x5d]
0059D2B9  6A 01                     PUSH 0x1
0059D2BB  8D 48 28                  LEA ECX,[EAX + 0x28]
0059D2BE  51                        PUSH ECX
0059D2BF  50                        PUSH EAX
0059D2C0  E8 1B 7D 11 00            CALL 0x006b4fe0
0059D2C5  8B 53 5D                  MOV EDX,dword ptr [EBX + 0x5d]
0059D2C8  50                        PUSH EAX
0059D2C9  33 C0                     XOR EAX,EAX
0059D2CB  B9 C8 02 00 00            MOV ECX,0x2c8
0059D2D0  66 8B 42 0E               MOV AX,word ptr [EDX + 0xe]
0059D2D4  8B 93 4C 1B 00 00         MOV EDX,dword ptr [EBX + 0x1b4c]
0059D2DA  50                        PUSH EAX
0059D2DB  2B CA                     SUB ECX,EDX
0059D2DD  68 49 01 00 00            PUSH 0x149
0059D2E2  51                        PUSH ECX
0059D2E3  E8 D8 7D 11 00            CALL 0x006b50c0
0059D2E8  6A 08                     PUSH 0x8
0059D2EA  68 4C 01 00 00            PUSH 0x14c
0059D2EF  89 06                     MOV dword ptr [ESI],EAX
0059D2F1  8B 15 9C 75 80 00         MOV EDX,dword ptr [0x0080759c]
0059D2F7  68 E1 02 00 00            PUSH 0x2e1
0059D2FC  6A 72                     PUSH 0x72
0059D2FE  6A 22                     PUSH 0x22
0059D300  52                        PUSH EDX
0059D301  E8 7A 75 12 00            CALL 0x006c4880
0059D306  8B 16                     MOV EDX,dword ptr [ESI]
0059D308  33 C9                     XOR ECX,ECX
0059D30A  3B D1                     CMP EDX,ECX
0059D30C  89 07                     MOV dword ptr [EDI],EAX
0059D30E  0F 84 92 02 00 00         JZ 0x0059d5a6
0059D314  3B C1                     CMP EAX,ECX
0059D316  0F 84 8A 02 00 00         JZ 0x0059d5a6
0059D31C  8B BB 73 1A 00 00         MOV EDI,dword ptr [EBX + 0x1a73]
0059D322  89 8D 40 F7 FF FF         MOV dword ptr [EBP + 0xfffff740],ECX
0059D328  89 8D 4C F7 FF FF         MOV dword ptr [EBP + 0xfffff74c],ECX
0059D32E  8B 8B 4C 1B 00 00         MOV ECX,dword ptr [EBX + 0x1b4c]
0059D334  B8 C8 02 00 00            MOV EAX,0x2c8
0059D339  BE 02 00 00 00            MOV ESI,0x2
0059D33E  2B C1                     SUB EAX,ECX
0059D340  89 B5 44 F7 FF FF         MOV dword ptr [EBP + 0xfffff744],ESI
0059D346  C7 85 60 F7 FF FF 28 00 00 00  MOV dword ptr [EBP + 0xfffff760],0x28
0059D350  C7 85 64 F7 FF FF 73 00 00 00  MOV dword ptr [EBP + 0xfffff764],0x73
0059D35A  C7 85 48 F7 FF FF 01 00 00 00  MOV dword ptr [EBP + 0xfffff748],0x1
0059D364  89 85 50 F7 FF FF         MOV dword ptr [EBP + 0xfffff750],EAX
0059D36A  8B 87 A0 00 00 00         MOV EAX,dword ptr [EDI + 0xa0]
0059D370  85 C0                     TEST EAX,EAX
0059D372  74 09                     JZ 0x0059d37d
0059D374  57                        PUSH EDI
0059D375  E8 16 34 17 00            CALL 0x00710790
0059D37A  83 C4 04                  ADD ESP,0x4
LAB_0059d37d:
0059D37D  8B 8F 8A 00 00 00         MOV ECX,dword ptr [EDI + 0x8a]
0059D383  B8 49 01 00 00            MOV EAX,0x149
0059D388  99                        CDQ
0059D389  F7 F9                     IDIV ECX
0059D38B  8B 93 D9 1B 00 00         MOV EDX,dword ptr [EBX + 0x1bd9]
0059D391  89 8D 54 F7 FF FF         MOV dword ptr [EBP + 0xfffff754],ECX
0059D397  33 C9                     XOR ECX,ECX
0059D399  89 95 08 F8 FF FF         MOV dword ptr [EBP + 0xfffff808],EDX
0059D39F  8B 93 E1 1B 00 00         MOV EDX,dword ptr [EBX + 0x1be1]
0059D3A5  89 8D F4 F7 FF FF         MOV dword ptr [EBP + 0xfffff7f4],ECX
0059D3AB  89 8D FC F7 FF FF         MOV dword ptr [EBP + 0xfffff7fc],ECX
0059D3B1  8B 8B D5 1B 00 00         MOV ECX,dword ptr [EBX + 0x1bd5]
0059D3B7  89 8D 04 F8 FF FF         MOV dword ptr [EBP + 0xfffff804],ECX
0059D3BD  8B 8B DD 1B 00 00         MOV ECX,dword ptr [EBX + 0x1bdd]
0059D3C3  89 B5 7C F7 FF FF         MOV dword ptr [EBP + 0xfffff77c],ESI
0059D3C9  89 B5 F8 F7 FF FF         MOV dword ptr [EBP + 0xfffff7f8],ESI
0059D3CF  89 B5 00 F8 FF FF         MOV dword ptr [EBP + 0xfffff800],ESI
0059D3D5  89 8D 0C F8 FF FF         MOV dword ptr [EBP + 0xfffff80c],ECX
0059D3DB  89 B5 60 F8 FF FF         MOV dword ptr [EBP + 0xfffff860],ESI
0059D3E1  89 B5 78 F9 FF FF         MOV dword ptr [EBP + 0xfffff978],ESI
0059D3E7  B9 5F 00 00 00            MOV ECX,0x5f
0059D3EC  8D B5 FC F7 FF FF         LEA ESI,[EBP + 0xfffff7fc]
0059D3F2  8D BD 7C F9 FF FF         LEA EDI,[EBP + 0xfffff97c]
0059D3F8  C7 85 58 F7 FF FF 01 00 00 00  MOV dword ptr [EBP + 0xfffff758],0x1
0059D402  C7 85 80 F7 FF FF 82 69 00 00  MOV dword ptr [EBP + 0xfffff780],0x6982
0059D40C  C7 85 F0 F7 FF FF 04 00 00 00  MOV dword ptr [EBP + 0xfffff7f0],0x4
0059D416  89 95 10 F8 FF FF         MOV dword ptr [EBP + 0xfffff810],EDX
0059D41C  C7 85 0C F9 FF FF F4 01 00 00  MOV dword ptr [EBP + 0xfffff90c],0x1f4
0059D426  C7 85 10 F9 FF FF 32 00 00 00  MOV dword ptr [EBP + 0xfffff910],0x32
0059D430  C7 85 64 F8 FF FF 34 63 00 00  MOV dword ptr [EBP + 0xfffff864],0x6334
0059D43A  8B 93 48 1B 00 00         MOV EDX,dword ptr [EBX + 0x1b48]
0059D440  6A 00                     PUSH 0x0
0059D442  89 85 5C F7 FF FF         MOV dword ptr [EBP + 0xfffff75c],EAX
0059D448  8B 43 08                  MOV EAX,dword ptr [EBX + 0x8]
0059D44B  89 85 78 F7 FF FF         MOV dword ptr [EBP + 0xfffff778],EAX
0059D451  89 85 5C F8 FF FF         MOV dword ptr [EBP + 0xfffff85c],EAX
0059D457  F3 A5                     MOVSD.REP ES:EDI,ESI
0059D459  8B 8B 44 1B 00 00         MOV ECX,dword ptr [EBX + 0x1b44]
0059D45F  89 95 88 F9 FF FF         MOV dword ptr [EBP + 0xfffff988],EDX
0059D465  8B 93 50 1B 00 00         MOV EDX,dword ptr [EBX + 0x1b50]
0059D46B  89 8D 84 F9 FF FF         MOV dword ptr [EBP + 0xfffff984],ECX
0059D471  8B 8B 4C 1B 00 00         MOV ECX,dword ptr [EBX + 0x1b4c]
0059D477  89 85 4C FB FF FF         MOV dword ptr [EBP + 0xfffffb4c],EAX
0059D47D  89 8D 8C F9 FF FF         MOV dword ptr [EBP + 0xfffff98c],ECX
0059D483  8B 8B 66 1C 00 00         MOV ECX,dword ptr [EBX + 0x1c66]
0059D489  89 8D 08 FB FF FF         MOV dword ptr [EBP + 0xfffffb08],ECX
0059D48F  8B 8B 6E 1C 00 00         MOV ECX,dword ptr [EBX + 0x1c6e]
0059D495  89 95 90 F9 FF FF         MOV dword ptr [EBP + 0xfffff990],EDX
0059D49B  8B 93 6A 1C 00 00         MOV EDX,dword ptr [EBX + 0x1c6a]
0059D4A1  89 8D 10 FB FF FF         MOV dword ptr [EBP + 0xfffffb10],ECX
0059D4A7  8B 4B 0C                  MOV ECX,dword ptr [EBX + 0xc]
0059D4AA  8D 85 40 F7 FF FF         LEA EAX,[EBP + 0xfffff740]
0059D4B0  8D B3 14 1B 00 00         LEA ESI,[EBX + 0x1b14]
0059D4B6  50                        PUSH EAX
0059D4B7  C7 85 E4 F9 FF FF 33 63 00 00  MOV dword ptr [EBP + 0xfffff9e4],0x6333
0059D4C1  C7 85 F8 FA FF FF 03 00 00 00  MOV dword ptr [EBP + 0xfffffaf8],0x3
0059D4CB  C7 85 FC FA FF FF 01 00 00 00  MOV dword ptr [EBP + 0xfffffafc],0x1
0059D4D5  C7 85 04 FB FF FF 00 00 00 00  MOV dword ptr [EBP + 0xfffffb04],0x0
0059D4DF  89 95 0C FB FF FF         MOV dword ptr [EBP + 0xfffffb0c],EDX
0059D4E5  C7 85 14 FB FF FF E7 00 00 00  MOV dword ptr [EBP + 0xfffffb14],0xe7
0059D4EF  C7 85 18 FB FF FF 0E 00 00 00  MOV dword ptr [EBP + 0xfffffb18],0xe
0059D4F9  C7 85 50 FB FF FF 02 00 00 00  MOV dword ptr [EBP + 0xfffffb50],0x2
0059D503  C7 85 54 FB FF FF 35 63 00 00  MOV dword ptr [EBP + 0xfffffb54],0x6335
0059D50D  8B 11                     MOV EDX,dword ptr [ECX]
0059D50F  6A 00                     PUSH 0x0
0059D511  56                        PUSH ESI
0059D512  6A 08                     PUSH 0x8
0059D514  FF 52 08                  CALL dword ptr [EDX + 0x8]
0059D517  8B 16                     MOV EDX,dword ptr [ESI]
0059D519  8D 4B 1D                  LEA ECX,[EBX + 0x1d]
0059D51C  51                        PUSH ECX
0059D51D  52                        PUSH EDX
0059D51E  6A 02                     PUSH 0x2
0059D520  8B CB                     MOV ECX,EBX
0059D522  C7 43 2D 05 00 00 00      MOV dword ptr [EBX + 0x2d],0x5
0059D529  E8 52 8B 14 00            CALL 0x006e6080
0059D52E  8B 83 2C 1B 00 00         MOV EAX,dword ptr [EBX + 0x1b2c]
0059D534  83 F8 FF                  CMP EAX,-0x1
0059D537  74 1D                     JZ 0x0059d556
0059D539  8B 8B 48 1B 00 00         MOV ECX,dword ptr [EBX + 0x1b48]
0059D53F  8B 93 44 1B 00 00         MOV EDX,dword ptr [EBX + 0x1b44]
0059D545  51                        PUSH ECX
0059D546  52                        PUSH EDX
0059D547  6A FE                     PUSH -0x2
0059D549  50                        PUSH EAX
0059D54A  8B 83 70 1B 00 00         MOV EAX,dword ptr [EBX + 0x1b70]
0059D550  50                        PUSH EAX
0059D551  E8 7A 5F 11 00            CALL 0x006b34d0
LAB_0059d556:
0059D556  8B 83 BD 1B 00 00         MOV EAX,dword ptr [EBX + 0x1bbd]
0059D55C  83 F8 FF                  CMP EAX,-0x1
0059D55F  74 1D                     JZ 0x0059d57e
0059D561  8B 8B D9 1B 00 00         MOV ECX,dword ptr [EBX + 0x1bd9]
0059D567  8B 93 D5 1B 00 00         MOV EDX,dword ptr [EBX + 0x1bd5]
0059D56D  51                        PUSH ECX
0059D56E  52                        PUSH EDX
0059D56F  6A FE                     PUSH -0x2
0059D571  50                        PUSH EAX
0059D572  8B 83 01 1C 00 00         MOV EAX,dword ptr [EBX + 0x1c01]
0059D578  50                        PUSH EAX
0059D579  E8 52 5F 11 00            CALL 0x006b34d0
LAB_0059d57e:
0059D57E  8B 83 4E 1C 00 00         MOV EAX,dword ptr [EBX + 0x1c4e]
0059D584  83 F8 FF                  CMP EAX,-0x1
0059D587  74 1D                     JZ 0x0059d5a6
0059D589  8B 8B 6A 1C 00 00         MOV ECX,dword ptr [EBX + 0x1c6a]
0059D58F  8B 93 66 1C 00 00         MOV EDX,dword ptr [EBX + 0x1c66]
0059D595  51                        PUSH ECX
0059D596  52                        PUSH EDX
0059D597  6A FE                     PUSH -0x2
0059D599  50                        PUSH EAX
0059D59A  8B 83 92 1C 00 00         MOV EAX,dword ptr [EBX + 0x1c92]
0059D5A0  50                        PUSH EAX
0059D5A1  E8 2A 5F 11 00            CALL 0x006b34d0
LAB_0059d5a6:
0059D5A6  8D 4B 1D                  LEA ECX,[EBX + 0x1d]
0059D5A9  C7 43 2D 61 00 00 00      MOV dword ptr [EBX + 0x2d],0x61
0059D5B0  51                        PUSH ECX
0059D5B1  6A 00                     PUSH 0x0
0059D5B3  6A 0F                     PUSH 0xf
0059D5B5  8B CB                     MOV ECX,EBX
0059D5B7  C7 43 35 00 00 00 00      MOV dword ptr [EBX + 0x35],0x0
0059D5BE  E8 BD 8A 14 00            CALL 0x006e6080
0059D5C3  8B 55 B8                  MOV EDX,dword ptr [EBP + -0x48]
0059D5C6  89 15 F8 8D 85 00         MOV dword ptr [0x00858df8],EDX
0059D5CC  5F                        POP EDI
0059D5CD  5E                        POP ESI
0059D5CE  5B                        POP EBX
0059D5CF  8B E5                     MOV ESP,EBP
0059D5D1  5D                        POP EBP
0059D5D2  C3                        RET
LAB_0059d5d3:
0059D5D3  8B 45 B8                  MOV EAX,dword ptr [EBP + -0x48]
0059D5D6  68 28 C3 7C 00            PUSH 0x7cc328
0059D5DB  68 CC 4C 7A 00            PUSH 0x7a4ccc
0059D5E0  56                        PUSH ESI
0059D5E1  6A 00                     PUSH 0x0
0059D5E3  68 66 06 00 00            PUSH 0x666
0059D5E8  68 70 BF 7C 00            PUSH 0x7cbf70
0059D5ED  A3 F8 8D 85 00            MOV [0x00858df8],EAX
0059D5F2  E8 D9 FE 10 00            CALL 0x006ad4d0
0059D5F7  83 C4 18                  ADD ESP,0x18
0059D5FA  85 C0                     TEST EAX,EAX
0059D5FC  74 01                     JZ 0x0059d5ff
0059D5FE  CC                        INT3
LAB_0059d5ff:
0059D5FF  68 66 06 00 00            PUSH 0x666
0059D604  68 70 BF 7C 00            PUSH 0x7cbf70
0059D609  6A 00                     PUSH 0x0
0059D60B  56                        PUSH ESI
0059D60C  E8 2F 88 10 00            CALL 0x006a5e40
0059D611  5F                        POP EDI
0059D612  5E                        POP ESI
0059D613  5B                        POP EBX
0059D614  8B E5                     MOV ESP,EBP
0059D616  5D                        POP EBP
0059D617  C3                        RET
