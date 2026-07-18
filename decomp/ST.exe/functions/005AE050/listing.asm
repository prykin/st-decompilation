FUN_005ae050:
005AE050  55                        PUSH EBP
005AE051  8B EC                     MOV EBP,ESP
005AE053  81 EC FC 00 00 00         SUB ESP,0xfc
005AE059  A1 F8 8D 85 00            MOV EAX,[0x00858df8]
005AE05E  53                        PUSH EBX
005AE05F  56                        PUSH ESI
005AE060  89 4D F4                  MOV dword ptr [EBP + -0xc],ECX
005AE063  57                        PUSH EDI
005AE064  8D 55 90                  LEA EDX,[EBP + -0x70]
005AE067  8D 4D 8C                  LEA ECX,[EBP + -0x74]
005AE06A  6A 00                     PUSH 0x0
005AE06C  52                        PUSH EDX
005AE06D  89 45 8C                  MOV dword ptr [EBP + -0x74],EAX
005AE070  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
005AE076  E8 75 F7 17 00            CALL 0x0072d7f0
005AE07B  8B F0                     MOV ESI,EAX
005AE07D  83 C4 08                  ADD ESP,0x8
005AE080  85 F6                     TEST ESI,ESI
005AE082  0F 85 CE 05 00 00         JNZ 0x005ae656
005AE088  6A 01                     PUSH 0x1
005AE08A  50                        PUSH EAX
005AE08B  A1 80 67 80 00            MOV EAX,[0x00806780]
005AE090  68 90 C7 7C 00            PUSH 0x7cc790
005AE095  6A 01                     PUSH 0x1
005AE097  50                        PUSH EAX
005AE098  E8 03 C5 15 00            CALL 0x0070a5a0
005AE09D  8B 0D 6C 17 81 00         MOV ECX,dword ptr [0x0081176c]
005AE0A3  50                        PUSH EAX
005AE0A4  6A 01                     PUSH 0x1
005AE0A6  56                        PUSH ESI
005AE0A7  8B 91 F0 02 00 00         MOV EDX,dword ptr [ECX + 0x2f0]
005AE0AD  56                        PUSH ESI
005AE0AE  52                        PUSH EDX
005AE0AF  E8 75 51 E5 FF            CALL 0x00403229
005AE0B4  A1 6C 17 81 00            MOV EAX,[0x0081176c]
005AE0B9  83 C4 28                  ADD ESP,0x28
005AE0BC  8B 80 44 05 00 00         MOV EAX,dword ptr [EAX + 0x544]
005AE0C2  68 FF 00 00 00            PUSH 0xff
005AE0C7  8B 48 08                  MOV ECX,dword ptr [EAX + 0x8]
005AE0CA  8B 50 04                  MOV EDX,dword ptr [EAX + 0x4]
005AE0CD  51                        PUSH ECX
005AE0CE  52                        PUSH EDX
005AE0CF  56                        PUSH ESI
005AE0D0  56                        PUSH ESI
005AE0D1  56                        PUSH ESI
005AE0D2  50                        PUSH EAX
005AE0D3  E8 98 60 10 00            CALL 0x006b4170
005AE0D8  A1 6C 17 81 00            MOV EAX,[0x0081176c]
005AE0DD  8B 80 48 05 00 00         MOV EAX,dword ptr [EAX + 0x548]
005AE0E3  85 C0                     TEST EAX,EAX
005AE0E5  74 06                     JZ 0x005ae0ed
005AE0E7  50                        PUSH EAX
005AE0E8  E8 83 74 10 00            CALL 0x006b5570
LAB_005ae0ed:
005AE0ED  6A 0A                     PUSH 0xa
005AE0EF  6A 0A                     PUSH 0xa
005AE0F1  6A 00                     PUSH 0x0
005AE0F3  E8 F8 73 10 00            CALL 0x006b54f0
005AE0F8  8B 0D 6C 17 81 00         MOV ECX,dword ptr [0x0081176c]
005AE0FE  8B 5D F4                  MOV EBX,dword ptr [EBP + -0xc]
005AE101  89 81 48 05 00 00         MOV dword ptr [ECX + 0x548],EAX
005AE107  8B 93 9F 1C 00 00         MOV EDX,dword ptr [EBX + 0x1c9f]
005AE10D  8B 8B 97 1C 00 00         MOV ECX,dword ptr [EBX + 0x1c97]
005AE113  8B 42 08                  MOV EAX,dword ptr [EDX + 0x8]
005AE116  8B 51 08                  MOV EDX,dword ptr [ECX + 0x8]
005AE119  03 D0                     ADD EDX,EAX
005AE11B  85 D2                     TEST EDX,EDX
005AE11D  0F 8E 61 01 00 00         JLE 0x005ae284
005AE123  39 45 08                  CMP dword ptr [EBP + 0x8],EAX
005AE126  0F 82 58 01 00 00         JC 0x005ae284
005AE12C  8D BB A7 1D 00 00         LEA EDI,[EBX + 0x1da7]
005AE132  83 C9 FF                  OR ECX,0xffffffff
005AE135  33 C0                     XOR EAX,EAX
005AE137  8D 93 AF 1F 00 00         LEA EDX,[EBX + 0x1faf]
005AE13D  F2 AE                     SCASB.REPNE ES:EDI
005AE13F  F7 D1                     NOT ECX
005AE141  2B F9                     SUB EDI,ECX
005AE143  89 55 EC                  MOV dword ptr [EBP + -0x14],EDX
005AE146  8B C1                     MOV EAX,ECX
005AE148  8B F7                     MOV ESI,EDI
005AE14A  8B FA                     MOV EDI,EDX
005AE14C  C1 E9 02                  SHR ECX,0x2
005AE14F  F3 A5                     MOVSD.REP ES:EDI,ESI
005AE151  8B C8                     MOV ECX,EAX
005AE153  83 E1 03                  AND ECX,0x3
005AE156  F3 A4                     MOVSB.REP ES:EDI,ESI
005AE158  8A 83 5F 1A 00 00         MOV AL,byte ptr [EBX + 0x1a5f]
005AE15E  3C 09                     CMP AL,0x9
005AE160  72 43                     JC 0x005ae1a5
005AE162  3C 0C                     CMP AL,0xc
005AE164  76 0D                     JBE 0x005ae173
005AE166  3C 13                     CMP AL,0x13
005AE168  75 3B                     JNZ 0x005ae1a5
005AE16A  80 3D 00 34 80 00 0C      CMP byte ptr [0x00803400],0xc
005AE171  75 32                     JNZ 0x005ae1a5
LAB_005ae173:
005AE173  8B 3D 6C C0 79 00         MOV EDI,dword ptr [0x0079c06c]
005AE179  83 C9 FF                  OR ECX,0xffffffff
005AE17C  33 C0                     XOR EAX,EAX
005AE17E  F2 AE                     SCASB.REPNE ES:EDI
005AE180  F7 D1                     NOT ECX
005AE182  2B F9                     SUB EDI,ECX
005AE184  8B C1                     MOV EAX,ECX
005AE186  8B F7                     MOV ESI,EDI
005AE188  8B FA                     MOV EDI,EDX
005AE18A  8B D0                     MOV EDX,EAX
005AE18C  83 C9 FF                  OR ECX,0xffffffff
005AE18F  33 C0                     XOR EAX,EAX
005AE191  F2 AE                     SCASB.REPNE ES:EDI
005AE193  8B CA                     MOV ECX,EDX
005AE195  4F                        DEC EDI
005AE196  C1 E9 02                  SHR ECX,0x2
005AE199  F3 A5                     MOVSD.REP ES:EDI,ESI
005AE19B  8B CA                     MOV ECX,EDX
005AE19D  8B 55 EC                  MOV EDX,dword ptr [EBP + -0x14]
005AE1A0  83 E1 03                  AND ECX,0x3
005AE1A3  F3 A4                     MOVSB.REP ES:EDI,ESI
LAB_005ae1a5:
005AE1A5  8B 8B 9F 1C 00 00         MOV ECX,dword ptr [EBX + 0x1c9f]
005AE1AB  8B 9B 97 1C 00 00         MOV EBX,dword ptr [EBX + 0x1c97]
005AE1B1  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
005AE1B4  8B 71 08                  MOV ESI,dword ptr [ECX + 0x8]
005AE1B7  8B 4B 08                  MOV ECX,dword ptr [EBX + 0x8]
005AE1BA  2B C6                     SUB EAX,ESI
005AE1BC  3B C1                     CMP EAX,ECX
005AE1BE  7D 08                     JGE 0x005ae1c8
005AE1C0  8B 4B 14                  MOV ECX,dword ptr [EBX + 0x14]
005AE1C3  8B 04 81                  MOV EAX,dword ptr [ECX + EAX*0x4]
005AE1C6  EB 02                     JMP 0x005ae1ca
LAB_005ae1c8:
005AE1C8  33 C0                     XOR EAX,EAX
LAB_005ae1ca:
005AE1CA  8B F8                     MOV EDI,EAX
005AE1CC  83 C9 FF                  OR ECX,0xffffffff
005AE1CF  33 C0                     XOR EAX,EAX
005AE1D1  6A 00                     PUSH 0x0
005AE1D3  F2 AE                     SCASB.REPNE ES:EDI
005AE1D5  F7 D1                     NOT ECX
005AE1D7  2B F9                     SUB EDI,ECX
005AE1D9  8B F7                     MOV ESI,EDI
005AE1DB  8B D9                     MOV EBX,ECX
005AE1DD  8B FA                     MOV EDI,EDX
005AE1DF  83 C9 FF                  OR ECX,0xffffffff
005AE1E2  F2 AE                     SCASB.REPNE ES:EDI
005AE1E4  8B CB                     MOV ECX,EBX
005AE1E6  4F                        DEC EDI
005AE1E7  C1 E9 02                  SHR ECX,0x2
005AE1EA  F3 A5                     MOVSD.REP ES:EDI,ESI
005AE1EC  8B CB                     MOV ECX,EBX
005AE1EE  8D 85 48 FF FF FF         LEA EAX,[EBP + 0xffffff48]
005AE1F4  83 E1 03                  AND ECX,0x3
005AE1F7  F3 A4                     MOVSB.REP ES:EDI,ESI
005AE1F9  8B 15 F8 8D 85 00         MOV EDX,dword ptr [0x00858df8]
005AE1FF  8D 8D 4C FF FF FF         LEA ECX,[EBP + 0xffffff4c]
005AE205  51                        PUSH ECX
005AE206  89 95 48 FF FF FF         MOV dword ptr [EBP + 0xffffff48],EDX
005AE20C  A3 F8 8D 85 00            MOV [0x00858df8],EAX
005AE211  E8 DA F5 17 00            CALL 0x0072d7f0
005AE216  8B 5D F4                  MOV EBX,dword ptr [EBP + -0xc]
005AE219  83 C4 08                  ADD ESP,0x8
005AE21C  85 C0                     TEST EAX,EAX
005AE21E  75 2C                     JNZ 0x005ae24c
005AE220  6A 00                     PUSH 0x0
005AE222  6A 00                     PUSH 0x0
005AE224  8D 93 AF 1F 00 00         LEA EDX,[EBX + 0x1faf]
005AE22A  6A 00                     PUSH 0x0
005AE22C  52                        PUSH EDX
005AE22D  68 45 03 00 00            PUSH 0x345
005AE232  E8 89 2C 14 00            CALL 0x006f0ec0
005AE237  8B F0                     MOV ESI,EAX
005AE239  8B 85 48 FF FF FF         MOV EAX,dword ptr [EBP + 0xffffff48]
005AE23F  83 C4 14                  ADD ESP,0x14
005AE242  89 75 F0                  MOV dword ptr [EBP + -0x10],ESI
005AE245  A3 F8 8D 85 00            MOV [0x00858df8],EAX
005AE24A  EB 0F                     JMP 0x005ae25b
LAB_005ae24c:
005AE24C  8B 8D 48 FF FF FF         MOV ECX,dword ptr [EBP + 0xffffff48]
005AE252  8B 75 F0                  MOV ESI,dword ptr [EBP + -0x10]
005AE255  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
LAB_005ae25b:
005AE25B  85 F6                     TEST ESI,ESI
005AE25D  0F 84 9F 03 00 00         JZ 0x005ae602
005AE263  8A 93 5F 1A 00 00         MOV DL,byte ptr [EBX + 0x1a5f]
005AE269  8B 0D 6C 17 81 00         MOV ECX,dword ptr [0x0081176c]
005AE26F  52                        PUSH EDX
005AE270  56                        PUSH ESI
005AE271  E8 A0 44 E5 FF            CALL 0x00402716
005AE276  56                        PUSH ESI
005AE277  E8 F4 2E 14 00            CALL 0x006f1170
005AE27C  83 C4 04                  ADD ESP,0x4
005AE27F  E9 7E 03 00 00            JMP 0x005ae602
LAB_005ae284:
005AE284  83 C9 FF                  OR ECX,0xffffffff
005AE287  89 0D BE 87 80 00         MOV dword ptr [0x008087be],ECX
005AE28D  8A 83 5F 1A 00 00         MOV AL,byte ptr [EBX + 0x1a5f]
005AE293  3C 03                     CMP AL,0x3
005AE295  0F 85 9A 02 00 00         JNZ 0x005ae535
005AE29B  8B 83 97 1C 00 00         MOV EAX,dword ptr [EBX + 0x1c97]
005AE2A1  8B 93 9F 1C 00 00         MOV EDX,dword ptr [EBX + 0x1c9f]
005AE2A7  8B 40 08                  MOV EAX,dword ptr [EAX + 0x8]
005AE2AA  8B 72 08                  MOV ESI,dword ptr [EDX + 0x8]
005AE2AD  03 C6                     ADD EAX,ESI
005AE2AF  85 C0                     TEST EAX,EAX
005AE2B1  0F 8E 7E 02 00 00         JLE 0x005ae535
005AE2B7  8D BB A7 1D 00 00         LEA EDI,[EBX + 0x1da7]
005AE2BD  33 C0                     XOR EAX,EAX
005AE2BF  F2 AE                     SCASB.REPNE ES:EDI
005AE2C1  F7 D1                     NOT ECX
005AE2C3  2B F9                     SUB EDI,ECX
005AE2C5  8D 93 AF 1F 00 00         LEA EDX,[EBX + 0x1faf]
005AE2CB  8B C1                     MOV EAX,ECX
005AE2CD  8B F7                     MOV ESI,EDI
005AE2CF  8B FA                     MOV EDI,EDX
005AE2D1  52                        PUSH EDX
005AE2D2  C1 E9 02                  SHR ECX,0x2
005AE2D5  F3 A5                     MOVSD.REP ES:EDI,ESI
005AE2D7  8B C8                     MOV ECX,EAX
005AE2D9  52                        PUSH EDX
005AE2DA  83 E1 03                  AND ECX,0x3
005AE2DD  C7 45 F8 01 00 00 00      MOV dword ptr [EBP + -0x8],0x1
005AE2E4  F3 A4                     MOVSB.REP ES:EDI,ESI
005AE2E6  89 55 EC                  MOV dword ptr [EBP + -0x14],EDX
005AE2E9  E8 92 9F 10 00            CALL 0x006b8280
005AE2EE  8B 9B 9F 1C 00 00         MOV EBX,dword ptr [EBX + 0x1c9f]
005AE2F4  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
005AE2F7  3B 43 08                  CMP EAX,dword ptr [EBX + 0x8]
005AE2FA  7D 08                     JGE 0x005ae304
005AE2FC  8B 4B 14                  MOV ECX,dword ptr [EBX + 0x14]
005AE2FF  8B 3C 81                  MOV EDI,dword ptr [ECX + EAX*0x4]
005AE302  EB 02                     JMP 0x005ae306
LAB_005ae304:
005AE304  33 FF                     XOR EDI,EDI
LAB_005ae306:
005AE306  83 C9 FF                  OR ECX,0xffffffff
005AE309  33 C0                     XOR EAX,EAX
005AE30B  F2 AE                     SCASB.REPNE ES:EDI
005AE30D  8B 5D EC                  MOV EBX,dword ptr [EBP + -0x14]
005AE310  F7 D1                     NOT ECX
005AE312  2B F9                     SUB EDI,ECX
005AE314  53                        PUSH EBX
005AE315  8B F7                     MOV ESI,EDI
005AE317  8B D1                     MOV EDX,ECX
005AE319  8B FB                     MOV EDI,EBX
005AE31B  83 C9 FF                  OR ECX,0xffffffff
005AE31E  F2 AE                     SCASB.REPNE ES:EDI
005AE320  8B CA                     MOV ECX,EDX
005AE322  4F                        DEC EDI
005AE323  C1 E9 02                  SHR ECX,0x2
005AE326  F3 A5                     MOVSD.REP ES:EDI,ESI
005AE328  8B CA                     MOV ECX,EDX
005AE32A  53                        PUSH EBX
005AE32B  83 E1 03                  AND ECX,0x3
005AE32E  F3 A4                     MOVSB.REP ES:EDI,ESI
005AE330  E8 4B 9F 10 00            CALL 0x006b8280
005AE335  8B 3D 60 C0 79 00         MOV EDI,dword ptr [0x0079c060]
005AE33B  83 C9 FF                  OR ECX,0xffffffff
005AE33E  33 C0                     XOR EAX,EAX
005AE340  6A 00                     PUSH 0x0
005AE342  F2 AE                     SCASB.REPNE ES:EDI
005AE344  F7 D1                     NOT ECX
005AE346  2B F9                     SUB EDI,ECX
005AE348  8B F7                     MOV ESI,EDI
005AE34A  8B D1                     MOV EDX,ECX
005AE34C  8B FB                     MOV EDI,EBX
005AE34E  83 C9 FF                  OR ECX,0xffffffff
005AE351  F2 AE                     SCASB.REPNE ES:EDI
005AE353  8B CA                     MOV ECX,EDX
005AE355  4F                        DEC EDI
005AE356  C1 E9 02                  SHR ECX,0x2
005AE359  F3 A5                     MOVSD.REP ES:EDI,ESI
005AE35B  8B CA                     MOV ECX,EDX
005AE35D  8D 95 08 FF FF FF         LEA EDX,[EBP + 0xffffff08]
005AE363  83 E1 03                  AND ECX,0x3
005AE366  52                        PUSH EDX
005AE367  F3 A4                     MOVSB.REP ES:EDI,ESI
005AE369  A1 F8 8D 85 00            MOV EAX,[0x00858df8]
005AE36E  8D 8D 04 FF FF FF         LEA ECX,[EBP + 0xffffff04]
005AE374  89 85 04 FF FF FF         MOV dword ptr [EBP + 0xffffff04],EAX
005AE37A  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
005AE380  E8 6B F4 17 00            CALL 0x0072d7f0
005AE385  83 C4 08                  ADD ESP,0x8
005AE388  85 C0                     TEST EAX,EAX
005AE38A  0F 85 8F 01 00 00         JNZ 0x005ae51f
005AE390  8B 5D F4                  MOV EBX,dword ptr [EBP + -0xc]
005AE393  50                        PUSH EAX
005AE394  50                        PUSH EAX
005AE395  50                        PUSH EAX
005AE396  8D 83 AF 1F 00 00         LEA EAX,[EBX + 0x1faf]
005AE39C  50                        PUSH EAX
005AE39D  68 45 03 00 00            PUSH 0x345
005AE3A2  E8 19 2B 14 00            CALL 0x006f0ec0
005AE3A7  8B F0                     MOV ESI,EAX
005AE3A9  A1 CB C4 80 00            MOV EAX,[0x0080c4cb]
005AE3AE  83 C4 14                  ADD ESP,0x14
005AE3B1  89 75 F0                  MOV dword ptr [EBP + -0x10],ESI
005AE3B4  85 C0                     TEST EAX,EAX
005AE3B6  74 06                     JZ 0x005ae3be
005AE3B8  50                        PUSH EAX
005AE3B9  E8 B2 71 10 00            CALL 0x006b5570
LAB_005ae3be:
005AE3BE  8B 0D 74 C0 79 00         MOV ECX,dword ptr [0x0079c074]
005AE3C4  6A 00                     PUSH 0x0
005AE3C6  51                        PUSH ECX
005AE3C7  56                        PUSH ESI
005AE3C8  E8 43 C6 16 00            CALL 0x0071aa10
005AE3CD  83 C4 0C                  ADD ESP,0xc
005AE3D0  A3 CB C4 80 00            MOV [0x0080c4cb],EAX
005AE3D5  B9 41 00 00 00            MOV ECX,0x41
005AE3DA  33 C0                     XOR EAX,EAX
005AE3DC  BF 16 ED 80 00            MOV EDI,0x80ed16
005AE3E1  50                        PUSH EAX
005AE3E2  F3 AB                     STOSD.REP ES:EDI
005AE3E4  A1 64 C0 79 00            MOV EAX,[0x0079c064]
005AE3E9  8D 55 FC                  LEA EDX,[EBP + -0x4]
005AE3EC  52                        PUSH EDX
005AE3ED  50                        PUSH EAX
005AE3EE  6A 0C                     PUSH 0xc
005AE3F0  8B CE                     MOV ECX,ESI
005AE3F2  C7 45 FC 16 ED 80 00      MOV dword ptr [EBP + -0x4],0x80ed16
005AE3F9  E8 E2 38 14 00            CALL 0x006f1ce0
005AE3FE  85 C0                     TEST EAX,EAX
005AE400  75 07                     JNZ 0x005ae409
005AE402  33 F6                     XOR ESI,ESI
005AE404  89 75 F8                  MOV dword ptr [EBP + -0x8],ESI
005AE407  EB 03                     JMP 0x005ae40c
LAB_005ae409:
005AE409  8B 75 F8                  MOV ESI,dword ptr [EBP + -0x8]
LAB_005ae40c:
005AE40C  8B 15 68 C0 79 00         MOV EDX,dword ptr [0x0079c068]
005AE412  8B 7D F0                  MOV EDI,dword ptr [EBP + -0x10]
005AE415  8D 4D FC                  LEA ECX,[EBP + -0x4]
005AE418  6A 00                     PUSH 0x0
005AE41A  51                        PUSH ECX
005AE41B  52                        PUSH EDX
005AE41C  6A 0C                     PUSH 0xc
005AE41E  8B CF                     MOV ECX,EDI
005AE420  C7 45 FC 4E 87 80 00      MOV dword ptr [EBP + -0x4],0x80874e
005AE427  E8 B4 38 14 00            CALL 0x006f1ce0
005AE42C  57                        PUSH EDI
005AE42D  E8 3E 2D 14 00            CALL 0x006f1170
005AE432  A1 6C 17 81 00            MOV EAX,[0x0081176c]
005AE437  83 C4 04                  ADD ESP,0x4
005AE43A  8B 80 48 05 00 00         MOV EAX,dword ptr [EAX + 0x548]
005AE440  85 C0                     TEST EAX,EAX
005AE442  74 06                     JZ 0x005ae44a
005AE444  50                        PUSH EAX
005AE445  E8 26 71 10 00            CALL 0x006b5570
LAB_005ae44a:
005AE44A  A1 CB C4 80 00            MOV EAX,[0x0080c4cb]
005AE44F  85 C0                     TEST EAX,EAX
005AE451  0F 84 94 00 00 00         JZ 0x005ae4eb
005AE457  8B 0D 6C 17 81 00         MOV ECX,dword ptr [0x0081176c]
005AE45D  6A 01                     PUSH 0x1
005AE45F  6A 00                     PUSH 0x0
005AE461  6A FF                     PUSH -0x1
005AE463  8B 41 34                  MOV EAX,dword ptr [ECX + 0x34]
005AE466  6A 00                     PUSH 0x0
005AE468  C7 40 7E 01 00 00 00      MOV dword ptr [EAX + 0x7e],0x1
005AE46F  05 9E 00 00 00            ADD EAX,0x9e
005AE474  66 C7 00 00 00            MOV word ptr [EAX],0x0
005AE479  8A 15 54 C8 7C 00         MOV DL,byte ptr [0x007cc854]
005AE47F  88 10                     MOV byte ptr [EAX],DL
005AE481  A1 6C 17 81 00            MOV EAX,[0x0081176c]
005AE486  8B 88 44 05 00 00         MOV ECX,dword ptr [EAX + 0x544]
005AE48C  8B 51 04                  MOV EDX,dword ptr [ECX + 0x4]
005AE48F  8B 0D CB C4 80 00         MOV ECX,dword ptr [0x0080c4cb]
005AE495  83 EA 14                  SUB EDX,0x14
005AE498  52                        PUSH EDX
005AE499  68 EC 21 7C 00            PUSH 0x7c21ec
005AE49E  68 D8 21 7C 00            PUSH 0x7c21d8
005AE4A3  51                        PUSH ECX
005AE4A4  8B 48 34                  MOV ECX,dword ptr [EAX + 0x34]
005AE4A7  E8 34 42 16 00            CALL 0x007126e0
005AE4AC  8B 15 6C 17 81 00         MOV EDX,dword ptr [0x0081176c]
005AE4B2  89 82 48 05 00 00         MOV dword ptr [EDX + 0x548],EAX
005AE4B8  A1 6C 17 81 00            MOV EAX,[0x0081176c]
005AE4BD  8B 88 48 05 00 00         MOV ECX,dword ptr [EAX + 0x548]
005AE4C3  85 C9                     TEST ECX,ECX
005AE4C5  75 4B                     JNZ 0x005ae512
005AE4C7  6A 0A                     PUSH 0xa
005AE4C9  6A 0A                     PUSH 0xa
005AE4CB  6A 00                     PUSH 0x0
005AE4CD  E8 1E 70 10 00            CALL 0x006b54f0
005AE4D2  8B 0D 6C 17 81 00         MOV ECX,dword ptr [0x0081176c]
005AE4D8  89 81 48 05 00 00         MOV dword ptr [ECX + 0x548],EAX
005AE4DE  8B 85 04 FF FF FF         MOV EAX,dword ptr [EBP + 0xffffff04]
005AE4E4  A3 F8 8D 85 00            MOV [0x00858df8],EAX
005AE4E9  EB 4F                     JMP 0x005ae53a
LAB_005ae4eb:
005AE4EB  6A 0A                     PUSH 0xa
005AE4ED  6A 0A                     PUSH 0xa
005AE4EF  6A 00                     PUSH 0x0
005AE4F1  E8 FA 6F 10 00            CALL 0x006b54f0
005AE4F6  6A 0A                     PUSH 0xa
005AE4F8  6A 0A                     PUSH 0xa
005AE4FA  6A 00                     PUSH 0x0
005AE4FC  A3 CB C4 80 00            MOV [0x0080c4cb],EAX
005AE501  E8 EA 6F 10 00            CALL 0x006b54f0
005AE506  8B 15 6C 17 81 00         MOV EDX,dword ptr [0x0081176c]
005AE50C  89 82 48 05 00 00         MOV dword ptr [EDX + 0x548],EAX
LAB_005ae512:
005AE512  8B 85 04 FF FF FF         MOV EAX,dword ptr [EBP + 0xffffff04]
005AE518  A3 F8 8D 85 00            MOV [0x00858df8],EAX
005AE51D  EB 1B                     JMP 0x005ae53a
LAB_005ae51f:
005AE51F  8B 8D 04 FF FF FF         MOV ECX,dword ptr [EBP + 0xffffff04]
005AE525  8B 5D F4                  MOV EBX,dword ptr [EBP + -0xc]
005AE528  33 F6                     XOR ESI,ESI
005AE52A  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
005AE530  89 75 F8                  MOV dword ptr [EBP + -0x8],ESI
005AE533  EB 05                     JMP 0x005ae53a
LAB_005ae535:
005AE535  33 F6                     XOR ESI,ESI
005AE537  89 75 F8                  MOV dword ptr [EBP + -0x8],ESI
LAB_005ae53a:
005AE53A  C7 43 2D 28 00 00 00      MOV dword ptr [EBX + 0x2d],0x28
005AE541  66 C7 43 31 01 00         MOV word ptr [EBX + 0x31],0x1
005AE547  8B 15 6C 17 81 00         MOV EDX,dword ptr [0x0081176c]
005AE54D  8D 7B 1D                  LEA EDI,[EBX + 0x1d]
005AE550  57                        PUSH EDI
005AE551  8B 82 48 05 00 00         MOV EAX,dword ptr [EDX + 0x548]
005AE557  66 8B 48 08               MOV CX,word ptr [EAX + 0x8]
005AE55B  66 89 4B 33               MOV word ptr [EBX + 0x33],CX
005AE55F  8B 15 6C 17 81 00         MOV EDX,dword ptr [0x0081176c]
005AE565  8B CB                     MOV ECX,EBX
005AE567  8B 82 89 03 00 00         MOV EAX,dword ptr [EDX + 0x389]
005AE56D  50                        PUSH EAX
005AE56E  6A 02                     PUSH 0x2
005AE570  E8 0B 7B 13 00            CALL 0x006e6080
005AE575  33 C0                     XOR EAX,EAX
005AE577  C7 43 2D 22 00 00 00      MOV dword ptr [EBX + 0x2d],0x22
005AE57E  66 89 43 31               MOV word ptr [EBX + 0x31],AX
005AE582  66 89 43 33               MOV word ptr [EBX + 0x33],AX
005AE586  8B 0D 6C 17 81 00         MOV ECX,dword ptr [0x0081176c]
005AE58C  57                        PUSH EDI
005AE58D  8B 91 89 03 00 00         MOV EDX,dword ptr [ECX + 0x389]
005AE593  8B CB                     MOV ECX,EBX
005AE595  52                        PUSH EDX
005AE596  6A 02                     PUSH 0x2
005AE598  E8 E3 7A 13 00            CALL 0x006e6080
005AE59D  33 C0                     XOR EAX,EAX
005AE59F  C7 43 2D 20 00 00 00      MOV dword ptr [EBX + 0x2d],0x20
005AE5A6  85 F6                     TEST ESI,ESI
005AE5A8  0F 95 C0                  SETNZ AL
005AE5AB  89 43 31                  MOV dword ptr [EBX + 0x31],EAX
005AE5AE  8B 0D 6C 17 81 00         MOV ECX,dword ptr [0x0081176c]
005AE5B4  57                        PUSH EDI
005AE5B5  8B 91 89 03 00 00         MOV EDX,dword ptr [ECX + 0x389]
005AE5BB  8B CB                     MOV ECX,EBX
005AE5BD  52                        PUSH EDX
005AE5BE  6A 02                     PUSH 0x2
005AE5C0  E8 BB 7A 13 00            CALL 0x006e6080
005AE5C5  8B 93 5B 1A 00 00         MOV EDX,dword ptr [EBX + 0x1a5b]
005AE5CB  8B 82 E6 02 00 00         MOV EAX,dword ptr [EDX + 0x2e6]
005AE5D1  85 C0                     TEST EAX,EAX
005AE5D3  74 2D                     JZ 0x005ae602
005AE5D5  B9 06 00 00 00            MOV ECX,0x6
005AE5DA  33 C0                     XOR EAX,EAX
005AE5DC  8D 7D D0                  LEA EDI,[EBP + -0x30]
005AE5DF  F3 AB                     STOSD.REP ES:EDI
005AE5E1  F7 DE                     NEG ESI
005AE5E3  1B F6                     SBB ESI,ESI
005AE5E5  83 E6 02                  AND ESI,0x2
005AE5E8  66 AB                     STOSW ES:EDI
005AE5EA  4E                        DEC ESI
005AE5EB  8D 45 D0                  LEA EAX,[EBP + -0x30]
005AE5EE  66 89 75 D0               MOV word ptr [EBP + -0x30],SI
005AE5F2  66 89 75 D2               MOV word ptr [EBP + -0x2e],SI
005AE5F6  8B 8A E6 02 00 00         MOV ECX,dword ptr [EDX + 0x2e6]
005AE5FC  50                        PUSH EAX
005AE5FD  E8 4F 65 E5 FF            CALL 0x00404b51
LAB_005ae602:
005AE602  80 BB 5F 1A 00 00 03      CMP byte ptr [EBX + 0x1a5f],0x3
005AE609  74 1D                     JZ 0x005ae628
005AE60B  8B 0D 6C 17 81 00         MOV ECX,dword ptr [0x0081176c]
005AE611  8B 81 EC 02 00 00         MOV EAX,dword ptr [ECX + 0x2ec]
005AE617  85 C0                     TEST EAX,EAX
005AE619  7C 0D                     JL 0x005ae628
005AE61B  8B 15 A8 75 80 00         MOV EDX,dword ptr [0x008075a8]
005AE621  50                        PUSH EAX
005AE622  52                        PUSH EDX
005AE623  E8 A8 4F 10 00            CALL 0x006b35d0
LAB_005ae628:
005AE628  A1 6C 17 81 00            MOV EAX,[0x0081176c]
005AE62D  8B 80 40 05 00 00         MOV EAX,dword ptr [EAX + 0x540]
005AE633  85 C0                     TEST EAX,EAX
005AE635  7C 0D                     JL 0x005ae644
005AE637  8B 0D A8 75 80 00         MOV ECX,dword ptr [0x008075a8]
005AE63D  50                        PUSH EAX
005AE63E  51                        PUSH ECX
005AE63F  E8 8C 4F 10 00            CALL 0x006b35d0
LAB_005ae644:
005AE644  8B 55 8C                  MOV EDX,dword ptr [EBP + -0x74]
005AE647  89 15 F8 8D 85 00         MOV dword ptr [0x00858df8],EDX
005AE64D  5F                        POP EDI
005AE64E  5E                        POP ESI
005AE64F  5B                        POP EBX
005AE650  8B E5                     MOV ESP,EBP
005AE652  5D                        POP EBP
005AE653  C2 04 00                  RET 0x4
LAB_005ae656:
005AE656  8B 45 8C                  MOV EAX,dword ptr [EBP + -0x74]
005AE659  68 30 C8 7C 00            PUSH 0x7cc830
005AE65E  68 CC 4C 7A 00            PUSH 0x7a4ccc
005AE663  56                        PUSH ESI
005AE664  6A 00                     PUSH 0x0
005AE666  68 C0 02 00 00            PUSH 0x2c0
005AE66B  68 28 C7 7C 00            PUSH 0x7cc728
005AE670  A3 F8 8D 85 00            MOV [0x00858df8],EAX
005AE675  E8 56 EE 0F 00            CALL 0x006ad4d0
005AE67A  83 C4 18                  ADD ESP,0x18
005AE67D  85 C0                     TEST EAX,EAX
005AE67F  74 01                     JZ 0x005ae682
005AE681  CC                        INT3
LAB_005ae682:
005AE682  68 C0 02 00 00            PUSH 0x2c0
005AE687  68 28 C7 7C 00            PUSH 0x7cc728
005AE68C  6A 00                     PUSH 0x0
005AE68E  56                        PUSH ESI
005AE68F  E8 AC 77 0F 00            CALL 0x006a5e40
005AE694  5F                        POP EDI
005AE695  5E                        POP ESI
005AE696  5B                        POP EBX
005AE697  8B E5                     MOV ESP,EBP
005AE699  5D                        POP EBP
005AE69A  C2 04 00                  RET 0x4
