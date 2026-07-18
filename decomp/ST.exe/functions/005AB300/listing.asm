ChooseMapTy::InitChooseMap:
005AB300  55                        PUSH EBP
005AB301  8B EC                     MOV EBP,ESP
005AB303  81 EC 68 08 00 00         SUB ESP,0x868
005AB309  A1 F8 8D 85 00            MOV EAX,[0x00858df8]
005AB30E  53                        PUSH EBX
005AB30F  56                        PUSH ESI
005AB310  89 4D F4                  MOV dword ptr [EBP + -0xc],ECX
005AB313  57                        PUSH EDI
005AB314  8D 95 B8 FD FF FF         LEA EDX,[EBP + 0xfffffdb8]
005AB31A  8D 8D B4 FD FF FF         LEA ECX,[EBP + 0xfffffdb4]
005AB320  6A 00                     PUSH 0x0
005AB322  52                        PUSH EDX
005AB323  89 85 B4 FD FF FF         MOV dword ptr [EBP + 0xfffffdb4],EAX
005AB329  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
005AB32F  E8 BC 24 18 00            CALL 0x0072d7f0
005AB334  8B F0                     MOV ESI,EAX
005AB336  83 C4 08                  ADD ESP,0x8
005AB339  85 F6                     TEST ESI,ESI
005AB33B  0F 85 C0 11 00 00         JNZ 0x005ac501
005AB341  8B 5D F4                  MOV EBX,dword ptr [EBP + -0xc]
005AB344  8A 45 08                  MOV AL,byte ptr [EBP + 0x8]
005AB347  88 83 5F 1A 00 00         MOV byte ptr [EBX + 0x1a5f],AL
005AB34D  A1 6C 17 81 00            MOV EAX,[0x0081176c]
005AB352  80 B8 EB 02 00 00 02      CMP byte ptr [EAX + 0x2eb],0x2
005AB359  76 07                     JBE 0x005ab362
005AB35B  C6 80 EB 02 00 00 02      MOV byte ptr [EAX + 0x2eb],0x2
LAB_005ab362:
005AB362  A1 30 2A 80 00            MOV EAX,[0x00802a30]
005AB367  C7 05 2E F3 80 00 00 00 00 00  MOV dword ptr [0x0080f32e],0x0
005AB371  85 C0                     TEST EAX,EAX
005AB373  74 2A                     JZ 0x005ab39f
005AB375  8B 88 A9 00 00 00         MOV ECX,dword ptr [EAX + 0xa9]
005AB37B  85 C9                     TEST ECX,ECX
005AB37D  74 14                     JZ 0x005ab393
005AB37F  8B 48 1C                  MOV ECX,dword ptr [EAX + 0x1c]
005AB382  83 F9 FF                  CMP ECX,-0x1
005AB385  74 18                     JZ 0x005ab39f
005AB387  51                        PUSH ECX
005AB388  8B 48 60                  MOV ECX,dword ptr [EAX + 0x60]
005AB38B  51                        PUSH ECX
005AB38C  E8 5F 87 10 00            CALL 0x006b3af0
005AB391  EB 0C                     JMP 0x005ab39f
LAB_005ab393:
005AB393  8B 90 AD 00 00 00         MOV EDX,dword ptr [EAX + 0xad]
005AB399  52                        PUSH EDX
005AB39A  E8 71 D7 10 00            CALL 0x006b8b10
LAB_005ab39f:
005AB39F  BF 80 76 80 00            MOV EDI,0x807680
005AB3A4  83 C9 FF                  OR ECX,0xffffffff
005AB3A7  33 C0                     XOR EAX,EAX
005AB3A9  8D 93 A3 1C 00 00         LEA EDX,[EBX + 0x1ca3]
005AB3AF  F2 AE                     SCASB.REPNE ES:EDI
005AB3B1  F7 D1                     NOT ECX
005AB3B3  2B F9                     SUB EDI,ECX
005AB3B5  8B C1                     MOV EAX,ECX
005AB3B7  8B F7                     MOV ESI,EDI
005AB3B9  8B FA                     MOV EDI,EDX
005AB3BB  C1 E9 02                  SHR ECX,0x2
005AB3BE  F3 A5                     MOVSD.REP ES:EDI,ESI
005AB3C0  8B C8                     MOV ECX,EAX
005AB3C2  33 C0                     XOR EAX,EAX
005AB3C4  83 E1 03                  AND ECX,0x3
005AB3C7  F3 A4                     MOVSB.REP ES:EDI,ESI
005AB3C9  8A 83 5F 1A 00 00         MOV AL,byte ptr [EBX + 0x1a5f]
005AB3CF  8D 70 FF                  LEA ESI,[EAX + -0x1]
005AB3D2  83 FE 12                  CMP ESI,0x12
005AB3D5  0F 87 0F 01 00 00         JA 0x005ab4ea
005AB3DB  33 C9                     XOR ECX,ECX
005AB3DD  8A 8E 60 C5 5A 00         MOV CL,byte ptr [ESI + 0x5ac560]
switchD_005ab3e3::switchD:
005AB3E3  FF 24 8D 4C C5 5A 00      JMP dword ptr [ECX*0x4 + 0x5ac54c]
switchD_005ab3e3::caseD_9:
005AB3EA  8B 3D 4C C0 79 00         MOV EDI,dword ptr [0x0079c04c]
005AB3F0  83 C9 FF                  OR ECX,0xffffffff
005AB3F3  33 C0                     XOR EAX,EAX
005AB3F5  F2 AE                     SCASB.REPNE ES:EDI
005AB3F7  F7 D1                     NOT ECX
005AB3F9  2B F9                     SUB EDI,ECX
005AB3FB  8B F7                     MOV ESI,EDI
005AB3FD  8B D1                     MOV EDX,ECX
005AB3FF  8D BB A3 1C 00 00         LEA EDI,[EBX + 0x1ca3]
005AB405  83 C9 FF                  OR ECX,0xffffffff
005AB408  F2 AE                     SCASB.REPNE ES:EDI
005AB40A  8B CA                     MOV ECX,EDX
005AB40C  4F                        DEC EDI
005AB40D  C1 E9 02                  SHR ECX,0x2
005AB410  F3 A5                     MOVSD.REP ES:EDI,ESI
005AB412  8B CA                     MOV ECX,EDX
005AB414  83 E1 03                  AND ECX,0x3
005AB417  F3 A4                     MOVSB.REP ES:EDI,ESI
005AB419  BF DD 7D 80 00            MOV EDI,0x807ddd
005AB41E  83 C9 FF                  OR ECX,0xffffffff
005AB421  F2 AE                     SCASB.REPNE ES:EDI
005AB423  F7 D1                     NOT ECX
005AB425  2B F9                     SUB EDI,ECX
005AB427  8B F7                     MOV ESI,EDI
005AB429  8B D1                     MOV EDX,ECX
005AB42B  8D BB A3 1C 00 00         LEA EDI,[EBX + 0x1ca3]
005AB431  83 C9 FF                  OR ECX,0xffffffff
005AB434  F2 AE                     SCASB.REPNE ES:EDI
005AB436  8B CA                     MOV ECX,EDX
005AB438  4F                        DEC EDI
005AB439  C1 E9 02                  SHR ECX,0x2
005AB43C  F3 A5                     MOVSD.REP ES:EDI,ESI
005AB43E  8B CA                     MOV ECX,EDX
005AB440  8D 83 A3 1C 00 00         LEA EAX,[EBX + 0x1ca3]
005AB446  83 E1 03                  AND ECX,0x3
005AB449  50                        PUSH EAX
005AB44A  F3 A4                     MOVSB.REP ES:EDI,ESI
005AB44C  50                        PUSH EAX
005AB44D  E8 2E CE 10 00            CALL 0x006b8280
005AB452  E9 93 00 00 00            JMP 0x005ab4ea
switchD_005ab3e3::caseD_1:
005AB457  8B 3D 50 C0 79 00         MOV EDI,dword ptr [0x0079c050]
005AB45D  83 C9 FF                  OR ECX,0xffffffff
005AB460  33 C0                     XOR EAX,EAX
005AB462  F2 AE                     SCASB.REPNE ES:EDI
005AB464  F7 D1                     NOT ECX
005AB466  2B F9                     SUB EDI,ECX
005AB468  8B C1                     MOV EAX,ECX
005AB46A  8B F7                     MOV ESI,EDI
005AB46C  89 45 F8                  MOV dword ptr [EBP + -0x8],EAX
005AB46F  8B FA                     MOV EDI,EDX
005AB471  83 C9 FF                  OR ECX,0xffffffff
005AB474  33 C0                     XOR EAX,EAX
005AB476  F2 AE                     SCASB.REPNE ES:EDI
005AB478  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
005AB47B  4F                        DEC EDI
005AB47C  EB 5E                     JMP 0x005ab4dc
switchD_005ab3e3::caseD_3:
005AB47E  8B 3D 54 C0 79 00         MOV EDI,dword ptr [0x0079c054]
005AB484  83 C9 FF                  OR ECX,0xffffffff
005AB487  33 C0                     XOR EAX,EAX
005AB489  F2 AE                     SCASB.REPNE ES:EDI
005AB48B  F7 D1                     NOT ECX
005AB48D  2B F9                     SUB EDI,ECX
005AB48F  8B C1                     MOV EAX,ECX
005AB491  8B F7                     MOV ESI,EDI
005AB493  8B FA                     MOV EDI,EDX
005AB495  8B D0                     MOV EDX,EAX
005AB497  83 C9 FF                  OR ECX,0xffffffff
005AB49A  33 C0                     XOR EAX,EAX
005AB49C  F2 AE                     SCASB.REPNE ES:EDI
005AB49E  8B CA                     MOV ECX,EDX
005AB4A0  4F                        DEC EDI
005AB4A1  C1 E9 02                  SHR ECX,0x2
005AB4A4  F3 A5                     MOVSD.REP ES:EDI,ESI
005AB4A6  8B CA                     MOV ECX,EDX
005AB4A8  EB 3B                     JMP 0x005ab4e5
switchD_005ab3e3::caseD_13:
005AB4AA  80 3D 00 34 80 00 0C      CMP byte ptr [0x00803400],0xc
005AB4B1  0F 84 33 FF FF FF         JZ 0x005ab3ea
005AB4B7  8B 3D 50 C0 79 00         MOV EDI,dword ptr [0x0079c050]
005AB4BD  83 C9 FF                  OR ECX,0xffffffff
005AB4C0  33 C0                     XOR EAX,EAX
005AB4C2  F2 AE                     SCASB.REPNE ES:EDI
005AB4C4  F7 D1                     NOT ECX
005AB4C6  2B F9                     SUB EDI,ECX
005AB4C8  8B C1                     MOV EAX,ECX
005AB4CA  8B F7                     MOV ESI,EDI
005AB4CC  89 45 F8                  MOV dword ptr [EBP + -0x8],EAX
005AB4CF  8B FA                     MOV EDI,EDX
005AB4D1  83 C9 FF                  OR ECX,0xffffffff
005AB4D4  33 C0                     XOR EAX,EAX
005AB4D6  F2 AE                     SCASB.REPNE ES:EDI
005AB4D8  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
005AB4DB  4F                        DEC EDI
LAB_005ab4dc:
005AB4DC  8B C8                     MOV ECX,EAX
005AB4DE  C1 E9 02                  SHR ECX,0x2
005AB4E1  F3 A5                     MOVSD.REP ES:EDI,ESI
005AB4E3  8B C8                     MOV ECX,EAX
LAB_005ab4e5:
005AB4E5  83 E1 03                  AND ECX,0x3
005AB4E8  F3 A4                     MOVSB.REP ES:EDI,ESI
switchD_005ab3e3::caseD_6:
005AB4EA  8D BB A3 1C 00 00         LEA EDI,[EBX + 0x1ca3]
005AB4F0  83 C9 FF                  OR ECX,0xffffffff
005AB4F3  33 C0                     XOR EAX,EAX
005AB4F5  8D 93 A7 1D 00 00         LEA EDX,[EBX + 0x1da7]
005AB4FB  F2 AE                     SCASB.REPNE ES:EDI
005AB4FD  F7 D1                     NOT ECX
005AB4FF  2B F9                     SUB EDI,ECX
005AB501  52                        PUSH EDX
005AB502  8B C1                     MOV EAX,ECX
005AB504  8B F7                     MOV ESI,EDI
005AB506  8B FA                     MOV EDI,EDX
005AB508  52                        PUSH EDX
005AB509  C1 E9 02                  SHR ECX,0x2
005AB50C  F3 A5                     MOVSD.REP ES:EDI,ESI
005AB50E  8B C8                     MOV ECX,EAX
005AB510  83 E1 03                  AND ECX,0x3
005AB513  F3 A4                     MOVSB.REP ES:EDI,ESI
005AB515  E8 A6 C3 10 00            CALL 0x006b78c0
005AB51A  6A 01                     PUSH 0x1
005AB51C  8D 83 A7 1D 00 00         LEA EAX,[EBX + 0x1da7]
005AB522  6A 00                     PUSH 0x0
005AB524  50                        PUSH EAX
005AB525  FF 15 FC BC 85 00         CALL dword ptr [0x0085bcfc]
005AB52B  83 F8 FF                  CMP EAX,-0x1
005AB52E  89 83 8F 1C 00 00         MOV dword ptr [EBX + 0x1c8f],EAX
005AB534  75 0A                     JNZ 0x005ab540
005AB536  C7 83 8F 1C 00 00 00 00 00 00  MOV dword ptr [EBX + 0x1c8f],0x0
LAB_005ab540:
005AB540  8D 83 A3 1C 00 00         LEA EAX,[EBX + 0x1ca3]
005AB546  33 FF                     XOR EDI,EDI
005AB548  50                        PUSH EAX
005AB549  50                        PUSH EAX
005AB54A  E8 31 CD 10 00            CALL 0x006b8280
005AB54F  8D 83 A7 1D 00 00         LEA EAX,[EBX + 0x1da7]
005AB555  50                        PUSH EAX
005AB556  50                        PUSH EAX
005AB557  E8 24 CD 10 00            CALL 0x006b8280
005AB55C  8B 0D 80 67 80 00         MOV ECX,dword ptr [0x00806780]
005AB562  6A 01                     PUSH 0x1
005AB564  57                        PUSH EDI
005AB565  68 9C C7 7C 00            PUSH 0x7cc79c
005AB56A  51                        PUSH ECX
005AB56B  E8 80 F4 15 00            CALL 0x0070a9f0
005AB570  8B 15 6C 17 81 00         MOV EDX,dword ptr [0x0081176c]
005AB576  83 C4 10                  ADD ESP,0x10
005AB579  89 42 2C                  MOV dword ptr [EDX + 0x2c],EAX
005AB57C  A1 6C 17 81 00            MOV EAX,[0x0081176c]
005AB581  8D 95 98 F7 FF FF         LEA EDX,[EBP + 0xfffff798]
005AB587  57                        PUSH EDI
005AB588  8B 48 2C                  MOV ECX,dword ptr [EAX + 0x2c]
005AB58B  52                        PUSH EDX
005AB58C  89 4B 5D                  MOV dword ptr [EBX + 0x5d],ECX
005AB58F  A1 6C 17 81 00            MOV EAX,[0x0081176c]
005AB594  8B 48 2C                  MOV ECX,dword ptr [EAX + 0x2c]
005AB597  51                        PUSH ECX
005AB598  E8 C3 0D 11 00            CALL 0x006bc360
005AB59D  8B 93 5B 1A 00 00         MOV EDX,dword ptr [EBX + 0x1a5b]
005AB5A3  8D 8D 98 F7 FF FF         LEA ECX,[EBP + 0xfffff798]
005AB5A9  C7 82 40 01 00 00 1F 00 00 00  MOV dword ptr [EDX + 0x140],0x1f
005AB5B3  8B 83 5B 1A 00 00         MOV EAX,dword ptr [EBX + 0x1a5b]
005AB5B9  05 44 01 00 00            ADD EAX,0x144
005AB5BE  50                        PUSH EAX
005AB5BF  6A 15                     PUSH 0x15
005AB5C1  68 8B 00 00 00            PUSH 0x8b
005AB5C6  68 00 01 00 00            PUSH 0x100
005AB5CB  57                        PUSH EDI
005AB5CC  51                        PUSH ECX
005AB5CD  E8 AE D1 16 00            CALL 0x00718780
005AB5D2  8B 15 84 67 80 00         MOV EDX,dword ptr [0x00806784]
005AB5D8  57                        PUSH EDI
005AB5D9  57                        PUSH EDI
005AB5DA  6A 01                     PUSH 0x1
005AB5DC  57                        PUSH EDI
005AB5DD  6A FF                     PUSH -0x1
005AB5DF  68 84 C0 7C 00            PUSH 0x7cc084
005AB5E4  6A 0B                     PUSH 0xb
005AB5E6  52                        PUSH EDX
005AB5E7  E8 04 E5 15 00            CALL 0x00709af0
005AB5EC  6A 01                     PUSH 0x1
005AB5EE  89 83 7F 1C 00 00         MOV dword ptr [EBX + 0x1c7f],EAX
005AB5F4  A1 80 67 80 00            MOV EAX,[0x00806780]
005AB5F9  57                        PUSH EDI
005AB5FA  68 90 C7 7C 00            PUSH 0x7cc790
005AB5FF  6A 01                     PUSH 0x1
005AB601  50                        PUSH EAX
005AB602  E8 99 EF 15 00            CALL 0x0070a5a0
005AB607  8B 0D 6C 17 81 00         MOV ECX,dword ptr [0x0081176c]
005AB60D  83 C4 4C                  ADD ESP,0x4c
005AB610  8B 91 F0 02 00 00         MOV EDX,dword ptr [ECX + 0x2f0]
005AB616  50                        PUSH EAX
005AB617  6A 01                     PUSH 0x1
005AB619  57                        PUSH EDI
005AB61A  57                        PUSH EDI
005AB61B  52                        PUSH EDX
005AB61C  E8 08 7C E5 FF            CALL 0x00403229
005AB621  8D 8B B3 20 00 00         LEA ECX,[EBX + 0x20b3]
005AB627  B8 01 01 01 01            MOV EAX,0x1010101
005AB62C  8B 75 0C                  MOV ESI,dword ptr [EBP + 0xc]
005AB62F  83 C4 14                  ADD ESP,0x14
005AB632  89 01                     MOV dword ptr [ECX],EAX
005AB634  88 41 04                  MOV byte ptr [ECX + 0x4],AL
005AB637  33 C0                     XOR EAX,EAX
005AB639  8A 83 5F 1A 00 00         MOV AL,byte ptr [EBX + 0x1a5f]
005AB63F  48                        DEC EAX
005AB640  83 F8 0A                  CMP EAX,0xa
005AB643  77 0F                     JA 0x005ab654
005AB645  33 D2                     XOR EDX,EDX
005AB647  8A 90 7C C5 5A 00         MOV DL,byte ptr [EAX + 0x5ac57c]
switchD_005ab64d::switchD:
005AB64D  FF 24 95 74 C5 5A 00      JMP dword ptr [EDX*0x4 + 0x5ac574]
switchD_005ab64d::caseD_4:
005AB654  8B C6                     MOV EAX,ESI
005AB656  25 FF 00 00 00            AND EAX,0xff
005AB65B  83 C0 FC                  ADD EAX,-0x4
005AB65E  83 F8 10                  CMP EAX,0x10
005AB661  77 16                     JA 0x005ab679
005AB663  33 C9                     XOR ECX,ECX
005AB665  8A 88 90 C5 5A 00         MOV CL,byte ptr [EAX + 0x5ac590]
switchD_005ab66b::switchD:
005AB66B  FF 24 8D 88 C5 5A 00      JMP dword ptr [ECX*0x4 + 0x5ac588]
switchD_005ab64d::caseD_1:
005AB672  C6 83 B7 20 00 00 00      MOV byte ptr [EBX + 0x20b7],0x0
switchD_005ab66b::caseD_6:
005AB679  81 E6 FF 00 00 00         AND ESI,0xff
005AB67F  4E                        DEC ESI
005AB680  83 FE 13                  CMP ESI,0x13
005AB683  89 75 F8                  MOV dword ptr [EBP + -0x8],ESI
005AB686  77 1D                     JA 0x005ab6a5
005AB688  33 D2                     XOR EDX,EDX
005AB68A  8A 96 B0 C5 5A 00         MOV DL,byte ptr [ESI + 0x5ac5b0]
switchD_005ab690::switchD:
005AB690  FF 24 95 A4 C5 5A 00      JMP dword ptr [EDX*0x4 + 0x5ac5a4]
switchD_005ab690::caseD_1:
005AB697  C6 83 B4 20 00 00 00      MOV byte ptr [EBX + 0x20b4],0x0
switchD_005ab690::caseD_6:
005AB69E  C6 83 B5 20 00 00 00      MOV byte ptr [EBX + 0x20b5],0x0
switchD_005ab690::caseD_3:
005AB6A5  A1 6C 17 81 00            MOV EAX,[0x0081176c]
005AB6AA  68 FF 00 00 00            PUSH 0xff
005AB6AF  8B 80 44 05 00 00         MOV EAX,dword ptr [EAX + 0x544]
005AB6B5  8B 48 08                  MOV ECX,dword ptr [EAX + 0x8]
005AB6B8  8B 50 04                  MOV EDX,dword ptr [EAX + 0x4]
005AB6BB  51                        PUSH ECX
005AB6BC  52                        PUSH EDX
005AB6BD  57                        PUSH EDI
005AB6BE  57                        PUSH EDI
005AB6BF  57                        PUSH EDI
005AB6C0  50                        PUSH EAX
005AB6C1  E8 AA 8A 10 00            CALL 0x006b4170
005AB6C6  A1 6C 17 81 00            MOV EAX,[0x0081176c]
005AB6CB  8B 80 48 05 00 00         MOV EAX,dword ptr [EAX + 0x548]
005AB6D1  3B C7                     CMP EAX,EDI
005AB6D3  74 06                     JZ 0x005ab6db
005AB6D5  50                        PUSH EAX
005AB6D6  E8 95 9E 10 00            CALL 0x006b5570
LAB_005ab6db:
005AB6DB  6A 0A                     PUSH 0xa
005AB6DD  6A 0A                     PUSH 0xa
005AB6DF  57                        PUSH EDI
005AB6E0  E8 0B 9E 10 00            CALL 0x006b54f0
005AB6E5  8B 0D 6C 17 81 00         MOV ECX,dword ptr [0x0081176c]
005AB6EB  89 81 48 05 00 00         MOV dword ptr [ECX + 0x548],EAX
005AB6F1  8B 15 6C 17 81 00         MOV EDX,dword ptr [0x0081176c]
005AB6F7  39 BA 89 03 00 00         CMP dword ptr [EDX + 0x389],EDI
005AB6FD  74 62                     JZ 0x005ab761
005AB6FF  C7 43 2D 28 00 00 00      MOV dword ptr [EBX + 0x2d],0x28
005AB706  66 C7 43 31 01 00         MOV word ptr [EBX + 0x31],0x1
005AB70C  A1 6C 17 81 00            MOV EAX,[0x0081176c]
005AB711  8D 73 1D                  LEA ESI,[EBX + 0x1d]
005AB714  56                        PUSH ESI
005AB715  8B 88 48 05 00 00         MOV ECX,dword ptr [EAX + 0x548]
005AB71B  66 8B 51 08               MOV DX,word ptr [ECX + 0x8]
005AB71F  66 89 53 33               MOV word ptr [EBX + 0x33],DX
005AB723  A1 6C 17 81 00            MOV EAX,[0x0081176c]
005AB728  8B 88 89 03 00 00         MOV ECX,dword ptr [EAX + 0x389]
005AB72E  51                        PUSH ECX
005AB72F  6A 02                     PUSH 0x2
005AB731  8B CB                     MOV ECX,EBX
005AB733  E8 48 A9 13 00            CALL 0x006e6080
005AB738  C7 43 2D 22 00 00 00      MOV dword ptr [EBX + 0x2d],0x22
005AB73F  66 89 7B 31               MOV word ptr [EBX + 0x31],DI
005AB743  66 89 7B 33               MOV word ptr [EBX + 0x33],DI
005AB747  8B 15 6C 17 81 00         MOV EDX,dword ptr [0x0081176c]
005AB74D  56                        PUSH ESI
005AB74E  8B CB                     MOV ECX,EBX
005AB750  8B 82 89 03 00 00         MOV EAX,dword ptr [EDX + 0x389]
005AB756  50                        PUSH EAX
005AB757  6A 02                     PUSH 0x2
005AB759  E8 22 A9 13 00            CALL 0x006e6080
005AB75E  8B 75 F8                  MOV ESI,dword ptr [EBP + -0x8]
LAB_005ab761:
005AB761  83 FE 13                  CMP ESI,0x13
005AB764  77 0F                     JA 0x005ab775
005AB766  33 C9                     XOR ECX,ECX
005AB768  8A 8E CC C5 5A 00         MOV CL,byte ptr [ESI + 0x5ac5cc]
switchD_005ab76e::switchD:
005AB76E  FF 24 8D C4 C5 5A 00      JMP dword ptr [ECX*0x4 + 0x5ac5c4]
switchD_005ab76e::caseD_2:
005AB775  8B 15 9C 75 80 00         MOV EDX,dword ptr [0x0080759c]
005AB77B  57                        PUSH EDI
005AB77C  6A 01                     PUSH 0x1
005AB77E  52                        PUSH EDX
005AB77F  E8 BF 65 E5 FF            CALL 0x00401d43
005AB784  83 C4 0C                  ADD ESP,0xc
switchD_005ab76e::caseD_0:
005AB787  8B 83 5B 1A 00 00         MOV EAX,dword ptr [EBX + 0x1a5b]
005AB78D  8B 88 E6 02 00 00         MOV ECX,dword ptr [EAX + 0x2e6]
005AB793  3B CF                     CMP ECX,EDI
005AB795  74 1A                     JZ 0x005ab7b1
005AB797  E8 F5 99 E5 FF            CALL 0x00405191
005AB79C  8B 8B 5B 1A 00 00         MOV ECX,dword ptr [EBX + 0x1a5b]
005AB7A2  8B 43 08                  MOV EAX,dword ptr [EBX + 0x8]
005AB7A5  8B 91 E6 02 00 00         MOV EDX,dword ptr [ECX + 0x2e6]
005AB7AB  89 82 AB 1C 00 00         MOV dword ptr [EDX + 0x1cab],EAX
LAB_005ab7b1:
005AB7B1  6A 01                     PUSH 0x1
005AB7B3  8B CB                     MOV ECX,EBX
005AB7B5  E8 6B 6F E5 FF            CALL 0x00402725
005AB7BA  8B 0D A8 75 80 00         MOV ECX,dword ptr [0x008075a8]
005AB7C0  57                        PUSH EDI
005AB7C1  57                        PUSH EDI
005AB7C2  57                        PUSH EDI
005AB7C3  6A 07                     PUSH 0x7
005AB7C5  8D B3 70 1A 00 00         LEA ESI,[EBX + 0x1a70]
005AB7CB  6A 31                     PUSH 0x31
005AB7CD  51                        PUSH ECX
005AB7CE  8B CE                     MOV ECX,ESI
005AB7D0  E8 CB A0 16 00            CALL 0x007158a0
005AB7D5  A1 84 67 80 00            MOV EAX,[0x00806784]
005AB7DA  8B 16                     MOV EDX,dword ptr [ESI]
005AB7DC  6A FF                     PUSH -0x1
005AB7DE  68 4C C0 7C 00            PUSH 0x7cc04c
005AB7E3  57                        PUSH EDI
005AB7E4  6A 07                     PUSH 0x7
005AB7E6  50                        PUSH EAX
005AB7E7  8B CE                     MOV ECX,ESI
005AB7E9  FF 52 04                  CALL dword ptr [EDX + 0x4]
005AB7EC  57                        PUSH EDI
005AB7ED  57                        PUSH EDI
005AB7EE  C7 83 8C 1A 00 00 F8 02 00 00  MOV dword ptr [EBX + 0x1a8c],0x2f8
005AB7F8  C7 83 90 1A 00 00 3C 00 00 00  MOV dword ptr [EBX + 0x1a90],0x3c
005AB802  89 BB 78 1A 00 00         MOV dword ptr [EBX + 0x1a78],EDI
005AB808  8B 0D A8 75 80 00         MOV ECX,dword ptr [0x008075a8]
005AB80E  57                        PUSH EDI
005AB80F  6A 07                     PUSH 0x7
005AB811  8D B3 01 1B 00 00         LEA ESI,[EBX + 0x1b01]
005AB817  6A 31                     PUSH 0x31
005AB819  51                        PUSH ECX
005AB81A  8B CE                     MOV ECX,ESI
005AB81C  E8 7F A0 16 00            CALL 0x007158a0
005AB821  A1 84 67 80 00            MOV EAX,[0x00806784]
005AB826  8B 16                     MOV EDX,dword ptr [ESI]
005AB828  6A FF                     PUSH -0x1
005AB82A  68 40 C0 7C 00            PUSH 0x7cc040
005AB82F  57                        PUSH EDI
005AB830  6A 07                     PUSH 0x7
005AB832  50                        PUSH EAX
005AB833  8B CE                     MOV ECX,ESI
005AB835  FF 52 04                  CALL dword ptr [EDX + 0x4]
005AB838  57                        PUSH EDI
005AB839  57                        PUSH EDI
005AB83A  C7 83 1D 1B 00 00 F8 02 00 00  MOV dword ptr [EBX + 0x1b1d],0x2f8
005AB844  C7 83 21 1B 00 00 B8 01 00 00  MOV dword ptr [EBX + 0x1b21],0x1b8
005AB84E  89 BB 09 1B 00 00         MOV dword ptr [EBX + 0x1b09],EDI
005AB854  8B 0D A8 75 80 00         MOV ECX,dword ptr [0x008075a8]
005AB85A  57                        PUSH EDI
005AB85B  6A 07                     PUSH 0x7
005AB85D  8D B3 92 1B 00 00         LEA ESI,[EBX + 0x1b92]
005AB863  6A 31                     PUSH 0x31
005AB865  51                        PUSH ECX
005AB866  8B CE                     MOV ECX,ESI
005AB868  E8 33 A0 16 00            CALL 0x007158a0
005AB86D  A1 84 67 80 00            MOV EAX,[0x00806784]
005AB872  8B 16                     MOV EDX,dword ptr [ESI]
005AB874  6A FF                     PUSH -0x1
005AB876  68 34 C0 7C 00            PUSH 0x7cc034
005AB87B  57                        PUSH EDI
005AB87C  6A 07                     PUSH 0x7
005AB87E  50                        PUSH EAX
005AB87F  8B CE                     MOV ECX,ESI
005AB881  FF 52 04                  CALL dword ptr [EDX + 0x4]
005AB884  8B 43 5D                  MOV EAX,dword ptr [EBX + 0x5d]
005AB887  6A 01                     PUSH 0x1
005AB889  C7 83 AE 1B 00 00 FE 02 00 00  MOV dword ptr [EBX + 0x1bae],0x2fe
005AB893  C7 83 B2 1B 00 00 5C 00 00 00  MOV dword ptr [EBX + 0x1bb2],0x5c
005AB89D  8D 48 28                  LEA ECX,[EAX + 0x28]
005AB8A0  89 BB 9A 1B 00 00         MOV dword ptr [EBX + 0x1b9a],EDI
005AB8A6  51                        PUSH ECX
005AB8A7  50                        PUSH EAX
005AB8A8  E8 33 97 10 00            CALL 0x006b4fe0
005AB8AD  8B 53 5D                  MOV EDX,dword ptr [EBX + 0x5d]
005AB8B0  50                        PUSH EAX
005AB8B1  33 C0                     XOR EAX,EAX
005AB8B3  66 8B 42 0E               MOV AX,word ptr [EDX + 0xe]
005AB8B7  50                        PUSH EAX
005AB8B8  68 8F 01 00 00            PUSH 0x18f
005AB8BD  68 E4 01 00 00            PUSH 0x1e4
005AB8C2  E8 F9 97 10 00            CALL 0x006b50c0
005AB8C7  89 83 7B 1C 00 00         MOV dword ptr [EBX + 0x1c7b],EAX
005AB8CD  8B 70 14                  MOV ESI,dword ptr [EAX + 0x14]
005AB8D0  3B F7                     CMP ESI,EDI
005AB8D2  75 1A                     JNZ 0x005ab8ee
005AB8D4  33 F6                     XOR ESI,ESI
005AB8D6  66 8B 70 0E               MOV SI,word ptr [EAX + 0xe]
005AB8DA  0F AF 70 04               IMUL ESI,dword ptr [EAX + 0x4]
005AB8DE  83 C6 1F                  ADD ESI,0x1f
005AB8E1  C1 EE 03                  SHR ESI,0x3
005AB8E4  81 E6 FC FF FF 1F         AND ESI,0x1ffffffc
005AB8EA  0F AF 70 08               IMUL ESI,dword ptr [EAX + 0x8]
LAB_005ab8ee:
005AB8EE  50                        PUSH EAX
005AB8EF  E8 AC 96 10 00            CALL 0x006b4fa0
005AB8F4  8B CE                     MOV ECX,ESI
005AB8F6  8B F8                     MOV EDI,EAX
005AB8F8  8B D1                     MOV EDX,ECX
005AB8FA  33 C0                     XOR EAX,EAX
005AB8FC  C1 E9 02                  SHR ECX,0x2
005AB8FF  F3 AB                     STOSD.REP ES:EDI
005AB901  8B CA                     MOV ECX,EDX
005AB903  8D B3 23 1C 00 00         LEA ESI,[EBX + 0x1c23]
005AB909  83 E1 03                  AND ECX,0x3
005AB90C  F3 AA                     STOSB.REP ES:EDI
005AB90E  BF 3F 00 00 00            MOV EDI,0x3f
LAB_005ab913:
005AB913  8B 83 7B 1C 00 00         MOV EAX,dword ptr [EBX + 0x1c7b]
005AB919  8B 15 A8 75 80 00         MOV EDX,dword ptr [0x008075a8]
005AB91F  53                        PUSH EBX
005AB920  6A 13                     PUSH 0x13
005AB922  8B 48 04                  MOV ECX,dword ptr [EAX + 0x4]
005AB925  51                        PUSH ECX
005AB926  68 3A 21 40 00            PUSH 0x40213a
005AB92B  6A 31                     PUSH 0x31
005AB92D  56                        PUSH ESI
005AB92E  52                        PUSH EDX
005AB92F  E8 FC 69 10 00            CALL 0x006b2330
005AB934  8B 06                     MOV EAX,dword ptr [ESI]
005AB936  8B 0D A8 75 80 00         MOV ECX,dword ptr [0x008075a8]
005AB93C  57                        PUSH EDI
005AB93D  68 14 01 00 00            PUSH 0x114
005AB942  6A FF                     PUSH -0x1
005AB944  50                        PUSH EAX
005AB945  51                        PUSH ECX
005AB946  E8 F5 7C 10 00            CALL 0x006b3640
005AB94B  83 C7 13                  ADD EDI,0x13
005AB94E  83 C6 04                  ADD ESI,0x4
005AB951  81 FF E1 01 00 00         CMP EDI,0x1e1
005AB957  7C BA                     JL 0x005ab913
005AB959  33 FF                     XOR EDI,EDI
005AB95B  8B CB                     MOV ECX,EBX
005AB95D  57                        PUSH EDI
005AB95E  E8 FA 5D E5 FF            CALL 0x0040175d
005AB963  8B 93 93 1C 00 00         MOV EDX,dword ptr [EBX + 0x1c93]
005AB969  8B CB                     MOV ECX,EBX
005AB96B  52                        PUSH EDX
005AB96C  E8 9B 81 E5 FF            CALL 0x00403b0c
005AB971  8B 83 5B 1A 00 00         MOV EAX,dword ptr [EBX + 0x1a5b]
005AB977  8B 15 A8 75 80 00         MOV EDX,dword ptr [0x008075a8]
005AB97D  05 40 01 00 00            ADD EAX,0x140
005AB982  8D 4D FC                  LEA ECX,[EBP + -0x4]
005AB985  50                        PUSH EAX
005AB986  68 9D 01 00 00            PUSH 0x19d
005AB98B  68 04 02 00 00            PUSH 0x204
005AB990  68 D2 42 40 00            PUSH 0x4042d2
005AB995  6A 32                     PUSH 0x32
005AB997  51                        PUSH ECX
005AB998  52                        PUSH EDX
005AB999  E8 92 69 10 00            CALL 0x006b2330
005AB99E  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
005AB9A1  8B 0D A8 75 80 00         MOV ECX,dword ptr [0x008075a8]
005AB9A7  6A 38                     PUSH 0x38
005AB9A9  83 CE FF                  OR ESI,0xffffffff
005AB9AC  68 12 01 00 00            PUSH 0x112
005AB9B1  56                        PUSH ESI
005AB9B2  50                        PUSH EAX
005AB9B3  51                        PUSH ECX
005AB9B4  E8 87 7C 10 00            CALL 0x006b3640
005AB9B9  6A 33                     PUSH 0x33
005AB9BB  E8 70 2B 18 00            CALL 0x0072e530
005AB9C0  83 C4 04                  ADD ESP,0x4
005AB9C3  3B C7                     CMP EAX,EDI
005AB9C5  74 33                     JZ 0x005ab9fa
005AB9C7  B9 01 00 00 00            MOV ECX,0x1
005AB9CC  C6 40 02 01               MOV byte ptr [EAX + 0x2],0x1
005AB9D0  C6 00 00                  MOV byte ptr [EAX],0x0
005AB9D3  89 70 03                  MOV dword ptr [EAX + 0x3],ESI
005AB9D6  C6 40 01 02               MOV byte ptr [EAX + 0x1],0x2
005AB9DA  89 78 07                  MOV dword ptr [EAX + 0x7],EDI
005AB9DD  89 78 0B                  MOV dword ptr [EAX + 0xb],EDI
005AB9E0  89 78 0F                  MOV dword ptr [EAX + 0xf],EDI
005AB9E3  89 48 1B                  MOV dword ptr [EAX + 0x1b],ECX
005AB9E6  89 48 13                  MOV dword ptr [EAX + 0x13],ECX
005AB9E9  89 70 17                  MOV dword ptr [EAX + 0x17],ESI
005AB9EC  89 78 27                  MOV dword ptr [EAX + 0x27],EDI
005AB9EF  89 78 23                  MOV dword ptr [EAX + 0x23],EDI
005AB9F2  89 48 2F                  MOV dword ptr [EAX + 0x2f],ECX
005AB9F5  89 48 2B                  MOV dword ptr [EAX + 0x2b],ECX
005AB9F8  EB 02                     JMP 0x005ab9fc
LAB_005ab9fa:
005AB9FA  33 C0                     XOR EAX,EAX
LAB_005ab9fc:
005AB9FC  3B C7                     CMP EAX,EDI
005AB9FE  89 83 B8 20 00 00         MOV dword ptr [EBX + 0x20b8],EAX
005ABA04  0F 84 D5 00 00 00         JZ 0x005abadf
005ABA0A  8B 15 A8 75 80 00         MOV EDX,dword ptr [0x008075a8]
005ABA10  57                        PUSH EDI
005ABA11  6A 01                     PUSH 0x1
005ABA13  6A 10                     PUSH 0x10
005ABA15  6A 01                     PUSH 0x1
005ABA17  68 9D 01 00 00            PUSH 0x19d
005ABA1C  68 04 02 00 00            PUSH 0x204
005ABA21  6A 38                     PUSH 0x38
005ABA23  68 12 01 00 00            PUSH 0x112
005ABA28  52                        PUSH EDX
005ABA29  E8 C2 3F 11 00            CALL 0x006bf9f0
005ABA2E  8B 8B B8 20 00 00         MOV ECX,dword ptr [EBX + 0x20b8]
005ABA34  50                        PUSH EAX
005ABA35  6A 38                     PUSH 0x38
005ABA37  68 12 01 00 00            PUSH 0x112
005ABA3C  6A 02                     PUSH 0x2
005ABA3E  E8 5A 8B E5 FF            CALL 0x0040459d
005ABA43  85 C0                     TEST EAX,EAX
005ABA45  0F 84 94 00 00 00         JZ 0x005abadf
005ABA4B  8B 83 B8 20 00 00         MOV EAX,dword ptr [EBX + 0x20b8]
005ABA51  8B 48 13                  MOV ECX,dword ptr [EAX + 0x13]
005ABA54  C6 40 02 01               MOV byte ptr [EAX + 0x2],0x1
005ABA58  89 48 17                  MOV dword ptr [EAX + 0x17],ECX
005ABA5B  8B 83 B8 20 00 00         MOV EAX,dword ptr [EBX + 0x20b8]
005ABA61  8B 40 03                  MOV EAX,dword ptr [EAX + 0x3]
005ABA64  3B C7                     CMP EAX,EDI
005ABA66  7C 0D                     JL 0x005aba75
005ABA68  8B 15 A8 75 80 00         MOV EDX,dword ptr [0x008075a8]
005ABA6E  50                        PUSH EAX
005ABA6F  52                        PUSH EDX
005ABA70  E8 7B 80 10 00            CALL 0x006b3af0
LAB_005aba75:
005ABA75  8B 83 74 1A 00 00         MOV EAX,dword ptr [EBX + 0x1a74]
005ABA7B  3B C6                     CMP EAX,ESI
005ABA7D  74 0D                     JZ 0x005aba8c
005ABA7F  50                        PUSH EAX
005ABA80  8B 83 B8 1A 00 00         MOV EAX,dword ptr [EBX + 0x1ab8]
005ABA86  50                        PUSH EAX
005ABA87  E8 64 80 10 00            CALL 0x006b3af0
LAB_005aba8c:
005ABA8C  8B 83 05 1B 00 00         MOV EAX,dword ptr [EBX + 0x1b05]
005ABA92  3B C6                     CMP EAX,ESI
005ABA94  74 0D                     JZ 0x005abaa3
005ABA96  8B 8B 49 1B 00 00         MOV ECX,dword ptr [EBX + 0x1b49]
005ABA9C  50                        PUSH EAX
005ABA9D  51                        PUSH ECX
005ABA9E  E8 4D 80 10 00            CALL 0x006b3af0
LAB_005abaa3:
005ABAA3  8B 83 96 1B 00 00         MOV EAX,dword ptr [EBX + 0x1b96]
005ABAA9  3B C6                     CMP EAX,ESI
005ABAAB  74 0D                     JZ 0x005ababa
005ABAAD  8B 93 DA 1B 00 00         MOV EDX,dword ptr [EBX + 0x1bda]
005ABAB3  50                        PUSH EAX
005ABAB4  52                        PUSH EDX
005ABAB5  E8 36 80 10 00            CALL 0x006b3af0
LAB_005ababa:
005ABABA  8D B3 23 1C 00 00         LEA ESI,[EBX + 0x1c23]
005ABAC0  BF 16 00 00 00            MOV EDI,0x16
LAB_005abac5:
005ABAC5  8B 06                     MOV EAX,dword ptr [ESI]
005ABAC7  8B 0D A8 75 80 00         MOV ECX,dword ptr [0x008075a8]
005ABACD  50                        PUSH EAX
005ABACE  51                        PUSH ECX
005ABACF  E8 1C 80 10 00            CALL 0x006b3af0
005ABAD4  83 C6 04                  ADD ESI,0x4
005ABAD7  4F                        DEC EDI
005ABAD8  75 EB                     JNZ 0x005abac5
005ABADA  33 FF                     XOR EDI,EDI
005ABADC  83 CE FF                  OR ESI,0xffffffff
LAB_005abadf:
005ABADF  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
005ABAE2  3B C6                     CMP EAX,ESI
005ABAE4  74 10                     JZ 0x005abaf6
005ABAE6  8B 15 A8 75 80 00         MOV EDX,dword ptr [0x008075a8]
005ABAEC  50                        PUSH EAX
005ABAED  52                        PUSH EDX
005ABAEE  E8 BD 80 10 00            CALL 0x006b3bb0
005ABAF3  89 75 FC                  MOV dword ptr [EBP + -0x4],ESI
LAB_005abaf6:
005ABAF6  8A 83 B4 20 00 00         MOV AL,byte ptr [EBX + 0x20b4]
005ABAFC  84 C0                     TEST AL,AL
005ABAFE  0F 84 8D 01 00 00         JZ 0x005abc91
005ABB04  8B 83 5B 1A 00 00         MOV EAX,dword ptr [EBX + 0x1a5b]
005ABB0A  8B 15 A8 75 80 00         MOV EDX,dword ptr [0x008075a8]
005ABB10  05 40 01 00 00            ADD EAX,0x140
005ABB15  8D 4D FC                  LEA ECX,[EBP + -0x4]
005ABB18  50                        PUSH EAX
005ABB19  68 21 01 00 00            PUSH 0x121
005ABB1E  68 F9 00 00 00            PUSH 0xf9
005ABB23  68 D2 42 40 00            PUSH 0x4042d2
005ABB28  6A 32                     PUSH 0x32
005ABB2A  51                        PUSH ECX
005ABB2B  52                        PUSH EDX
005ABB2C  E8 FF 67 10 00            CALL 0x006b2330
005ABB31  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
005ABB34  8B 0D A8 75 80 00         MOV ECX,dword ptr [0x008075a8]
005ABB3A  68 B4 00 00 00            PUSH 0xb4
005ABB3F  6A 0A                     PUSH 0xa
005ABB41  56                        PUSH ESI
005ABB42  50                        PUSH EAX
005ABB43  51                        PUSH ECX
005ABB44  E8 F7 7A 10 00            CALL 0x006b3640
005ABB49  6A 33                     PUSH 0x33
005ABB4B  E8 E0 29 18 00            CALL 0x0072e530
005ABB50  83 C4 04                  ADD ESP,0x4
005ABB53  3B C7                     CMP EAX,EDI
005ABB55  74 33                     JZ 0x005abb8a
005ABB57  B9 01 00 00 00            MOV ECX,0x1
005ABB5C  C6 40 02 01               MOV byte ptr [EAX + 0x2],0x1
005ABB60  C6 00 00                  MOV byte ptr [EAX],0x0
005ABB63  89 70 03                  MOV dword ptr [EAX + 0x3],ESI
005ABB66  C6 40 01 02               MOV byte ptr [EAX + 0x1],0x2
005ABB6A  89 78 07                  MOV dword ptr [EAX + 0x7],EDI
005ABB6D  89 78 0B                  MOV dword ptr [EAX + 0xb],EDI
005ABB70  89 78 0F                  MOV dword ptr [EAX + 0xf],EDI
005ABB73  89 48 1B                  MOV dword ptr [EAX + 0x1b],ECX
005ABB76  89 48 13                  MOV dword ptr [EAX + 0x13],ECX
005ABB79  89 70 17                  MOV dword ptr [EAX + 0x17],ESI
005ABB7C  89 78 27                  MOV dword ptr [EAX + 0x27],EDI
005ABB7F  89 78 23                  MOV dword ptr [EAX + 0x23],EDI
005ABB82  89 48 2F                  MOV dword ptr [EAX + 0x2f],ECX
005ABB85  89 48 2B                  MOV dword ptr [EAX + 0x2b],ECX
005ABB88  EB 02                     JMP 0x005abb8c
LAB_005abb8a:
005ABB8A  33 C0                     XOR EAX,EAX
LAB_005abb8c:
005ABB8C  3B C7                     CMP EAX,EDI
005ABB8E  89 83 BC 20 00 00         MOV dword ptr [EBX + 0x20bc],EAX
005ABB94  0F 84 D7 00 00 00         JZ 0x005abc71
005ABB9A  8B 15 A8 75 80 00         MOV EDX,dword ptr [0x008075a8]
005ABBA0  57                        PUSH EDI
005ABBA1  6A 01                     PUSH 0x1
005ABBA3  6A 10                     PUSH 0x10
005ABBA5  6A 01                     PUSH 0x1
005ABBA7  68 21 01 00 00            PUSH 0x121
005ABBAC  68 F9 00 00 00            PUSH 0xf9
005ABBB1  68 B4 00 00 00            PUSH 0xb4
005ABBB6  6A 0A                     PUSH 0xa
005ABBB8  52                        PUSH EDX
005ABBB9  E8 32 3E 11 00            CALL 0x006bf9f0
005ABBBE  8B 8B BC 20 00 00         MOV ECX,dword ptr [EBX + 0x20bc]
005ABBC4  50                        PUSH EAX
005ABBC5  68 B4 00 00 00            PUSH 0xb4
005ABBCA  6A 0A                     PUSH 0xa
005ABBCC  6A 04                     PUSH 0x4
005ABBCE  E8 CA 89 E5 FF            CALL 0x0040459d
005ABBD3  85 C0                     TEST EAX,EAX
005ABBD5  0F 84 96 00 00 00         JZ 0x005abc71
005ABBDB  8B 83 BC 20 00 00         MOV EAX,dword ptr [EBX + 0x20bc]
005ABBE1  8B 48 13                  MOV ECX,dword ptr [EAX + 0x13]
005ABBE4  C6 40 02 01               MOV byte ptr [EAX + 0x2],0x1
005ABBE8  89 48 17                  MOV dword ptr [EAX + 0x17],ECX
005ABBEB  8B 83 BC 20 00 00         MOV EAX,dword ptr [EBX + 0x20bc]
005ABBF1  8B 40 03                  MOV EAX,dword ptr [EAX + 0x3]
005ABBF4  3B C7                     CMP EAX,EDI
005ABBF6  7C 0D                     JL 0x005abc05
005ABBF8  8B 15 A8 75 80 00         MOV EDX,dword ptr [0x008075a8]
005ABBFE  50                        PUSH EAX
005ABBFF  52                        PUSH EDX
005ABC00  E8 EB 7E 10 00            CALL 0x006b3af0
LAB_005abc05:
005ABC05  A1 6C 17 81 00            MOV EAX,[0x0081176c]
005ABC0A  8B 88 91 03 00 00         MOV ECX,dword ptr [EAX + 0x391]
005ABC10  3B CE                     CMP ECX,ESI
005ABC12  74 12                     JZ 0x005abc26
005ABC14  8B 80 D5 03 00 00         MOV EAX,dword ptr [EAX + 0x3d5]
005ABC1A  51                        PUSH ECX
005ABC1B  50                        PUSH EAX
005ABC1C  E8 CF 7E 10 00            CALL 0x006b3af0
005ABC21  A1 6C 17 81 00            MOV EAX,[0x0081176c]
LAB_005abc26:
005ABC26  8B 88 22 04 00 00         MOV ECX,dword ptr [EAX + 0x422]
005ABC2C  3B CE                     CMP ECX,ESI
005ABC2E  74 12                     JZ 0x005abc42
005ABC30  51                        PUSH ECX
005ABC31  8B 88 66 04 00 00         MOV ECX,dword ptr [EAX + 0x466]
005ABC37  51                        PUSH ECX
005ABC38  E8 B3 7E 10 00            CALL 0x006b3af0
005ABC3D  A1 6C 17 81 00            MOV EAX,[0x0081176c]
LAB_005abc42:
005ABC42  8B 88 B3 04 00 00         MOV ECX,dword ptr [EAX + 0x4b3]
005ABC48  3B CE                     CMP ECX,ESI
005ABC4A  74 12                     JZ 0x005abc5e
005ABC4C  8B 90 F7 04 00 00         MOV EDX,dword ptr [EAX + 0x4f7]
005ABC52  51                        PUSH ECX
005ABC53  52                        PUSH EDX
005ABC54  E8 97 7E 10 00            CALL 0x006b3af0
005ABC59  A1 6C 17 81 00            MOV EAX,[0x0081176c]
LAB_005abc5e:
005ABC5E  8B 80 40 05 00 00         MOV EAX,dword ptr [EAX + 0x540]
005ABC64  8B 0D A8 75 80 00         MOV ECX,dword ptr [0x008075a8]
005ABC6A  50                        PUSH EAX
005ABC6B  51                        PUSH ECX
005ABC6C  E8 7F 7E 10 00            CALL 0x006b3af0
LAB_005abc71:
005ABC71  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
005ABC74  3B C6                     CMP EAX,ESI
005ABC76  0F 84 B1 00 00 00         JZ 0x005abd2d
005ABC7C  8B 15 A8 75 80 00         MOV EDX,dword ptr [0x008075a8]
005ABC82  50                        PUSH EAX
005ABC83  52                        PUSH EDX
005ABC84  E8 27 7F 10 00            CALL 0x006b3bb0
005ABC89  89 75 FC                  MOV dword ptr [EBP + -0x4],ESI
005ABC8C  E9 9C 00 00 00            JMP 0x005abd2d
LAB_005abc91:
005ABC91  A1 6C 17 81 00            MOV EAX,[0x0081176c]
005ABC96  8B 88 91 03 00 00         MOV ECX,dword ptr [EAX + 0x391]
005ABC9C  3B CE                     CMP ECX,ESI
005ABC9E  74 22                     JZ 0x005abcc2
005ABCA0  8B 90 AD 03 00 00         MOV EDX,dword ptr [EAX + 0x3ad]
005ABCA6  52                        PUSH EDX
005ABCA7  8B 90 A9 03 00 00         MOV EDX,dword ptr [EAX + 0x3a9]
005ABCAD  8B 80 D5 03 00 00         MOV EAX,dword ptr [EAX + 0x3d5]
005ABCB3  52                        PUSH EDX
005ABCB4  6A FE                     PUSH -0x2
005ABCB6  51                        PUSH ECX
005ABCB7  50                        PUSH EAX
005ABCB8  E8 13 78 10 00            CALL 0x006b34d0
005ABCBD  A1 6C 17 81 00            MOV EAX,[0x0081176c]
LAB_005abcc2:
005ABCC2  8B 88 22 04 00 00         MOV ECX,dword ptr [EAX + 0x422]
005ABCC8  3B CE                     CMP ECX,ESI
005ABCCA  74 22                     JZ 0x005abcee
005ABCCC  8B 90 3E 04 00 00         MOV EDX,dword ptr [EAX + 0x43e]
005ABCD2  52                        PUSH EDX
005ABCD3  8B 90 3A 04 00 00         MOV EDX,dword ptr [EAX + 0x43a]
005ABCD9  8B 80 66 04 00 00         MOV EAX,dword ptr [EAX + 0x466]
005ABCDF  52                        PUSH EDX
005ABCE0  6A FE                     PUSH -0x2
005ABCE2  51                        PUSH ECX
005ABCE3  50                        PUSH EAX
005ABCE4  E8 E7 77 10 00            CALL 0x006b34d0
005ABCE9  A1 6C 17 81 00            MOV EAX,[0x0081176c]
LAB_005abcee:
005ABCEE  8B 88 B3 04 00 00         MOV ECX,dword ptr [EAX + 0x4b3]
005ABCF4  3B CE                     CMP ECX,ESI
005ABCF6  74 22                     JZ 0x005abd1a
005ABCF8  8B 90 CF 04 00 00         MOV EDX,dword ptr [EAX + 0x4cf]
005ABCFE  52                        PUSH EDX
005ABCFF  8B 90 CB 04 00 00         MOV EDX,dword ptr [EAX + 0x4cb]
005ABD05  8B 80 F7 04 00 00         MOV EAX,dword ptr [EAX + 0x4f7]
005ABD0B  52                        PUSH EDX
005ABD0C  6A FE                     PUSH -0x2
005ABD0E  51                        PUSH ECX
005ABD0F  50                        PUSH EAX
005ABD10  E8 BB 77 10 00            CALL 0x006b34d0
005ABD15  A1 6C 17 81 00            MOV EAX,[0x0081176c]
LAB_005abd1a:
005ABD1A  8B 88 40 05 00 00         MOV ECX,dword ptr [EAX + 0x540]
005ABD20  8B 15 A8 75 80 00         MOV EDX,dword ptr [0x008075a8]
005ABD26  51                        PUSH ECX
005ABD27  52                        PUSH EDX
005ABD28  E8 03 77 10 00            CALL 0x006b3430
LAB_005abd2d:
005ABD2D  8A 83 B7 20 00 00         MOV AL,byte ptr [EBX + 0x20b7]
005ABD33  84 C0                     TEST AL,AL
005ABD35  0F 84 E4 01 00 00         JZ 0x005abf1f
005ABD3B  8B 83 5B 1A 00 00         MOV EAX,dword ptr [EBX + 0x1a5b]
005ABD41  8B 15 A8 75 80 00         MOV EDX,dword ptr [0x008075a8]
005ABD47  05 40 01 00 00            ADD EAX,0x140
005ABD4C  8D 4D FC                  LEA ECX,[EBP + -0x4]
005ABD4F  50                        PUSH EAX
005ABD50  6A 62                     PUSH 0x62
005ABD52  68 90 01 00 00            PUSH 0x190
005ABD57  68 61 3B 40 00            PUSH 0x403b61
005ABD5C  6A 32                     PUSH 0x32
005ABD5E  51                        PUSH ECX
005ABD5F  52                        PUSH EDX
005ABD60  E8 CB 65 10 00            CALL 0x006b2330
005ABD65  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
005ABD68  8B 0D A8 75 80 00         MOV ECX,dword ptr [0x008075a8]
005ABD6E  68 F1 01 00 00            PUSH 0x1f1
005ABD73  68 C8 00 00 00            PUSH 0xc8
005ABD78  56                        PUSH ESI
005ABD79  50                        PUSH EAX
005ABD7A  51                        PUSH ECX
005ABD7B  E8 C0 78 10 00            CALL 0x006b3640
005ABD80  A1 6C 17 81 00            MOV EAX,[0x0081176c]
005ABD85  8B 88 60 05 00 00         MOV ECX,dword ptr [EAX + 0x560]
005ABD8B  3B CE                     CMP ECX,ESI
005ABD8D  74 22                     JZ 0x005abdb1
005ABD8F  8B 90 7C 05 00 00         MOV EDX,dword ptr [EAX + 0x57c]
005ABD95  52                        PUSH EDX
005ABD96  8B 90 78 05 00 00         MOV EDX,dword ptr [EAX + 0x578]
005ABD9C  8B 80 A4 05 00 00         MOV EAX,dword ptr [EAX + 0x5a4]
005ABDA2  52                        PUSH EDX
005ABDA3  6A FE                     PUSH -0x2
005ABDA5  51                        PUSH ECX
005ABDA6  50                        PUSH EAX
005ABDA7  E8 24 77 10 00            CALL 0x006b34d0
005ABDAC  A1 6C 17 81 00            MOV EAX,[0x0081176c]
LAB_005abdb1:
005ABDB1  8B 88 F1 05 00 00         MOV ECX,dword ptr [EAX + 0x5f1]
005ABDB7  3B CE                     CMP ECX,ESI
005ABDB9  74 1D                     JZ 0x005abdd8
005ABDBB  8B 90 0D 06 00 00         MOV EDX,dword ptr [EAX + 0x60d]
005ABDC1  52                        PUSH EDX
005ABDC2  8B 90 09 06 00 00         MOV EDX,dword ptr [EAX + 0x609]
005ABDC8  8B 80 35 06 00 00         MOV EAX,dword ptr [EAX + 0x635]
005ABDCE  52                        PUSH EDX
005ABDCF  6A FE                     PUSH -0x2
005ABDD1  51                        PUSH ECX
005ABDD2  50                        PUSH EAX
005ABDD3  E8 F8 76 10 00            CALL 0x006b34d0
LAB_005abdd8:
005ABDD8  6A 33                     PUSH 0x33
005ABDDA  E8 51 27 18 00            CALL 0x0072e530
005ABDDF  83 C4 04                  ADD ESP,0x4
005ABDE2  3B C7                     CMP EAX,EDI
005ABDE4  74 33                     JZ 0x005abe19
005ABDE6  B9 01 00 00 00            MOV ECX,0x1
005ABDEB  C6 40 02 01               MOV byte ptr [EAX + 0x2],0x1
005ABDEF  C6 00 00                  MOV byte ptr [EAX],0x0
005ABDF2  89 70 03                  MOV dword ptr [EAX + 0x3],ESI
005ABDF5  C6 40 01 02               MOV byte ptr [EAX + 0x1],0x2
005ABDF9  89 78 07                  MOV dword ptr [EAX + 0x7],EDI
005ABDFC  89 78 0B                  MOV dword ptr [EAX + 0xb],EDI
005ABDFF  89 78 0F                  MOV dword ptr [EAX + 0xf],EDI
005ABE02  89 48 1B                  MOV dword ptr [EAX + 0x1b],ECX
005ABE05  89 48 13                  MOV dword ptr [EAX + 0x13],ECX
005ABE08  89 70 17                  MOV dword ptr [EAX + 0x17],ESI
005ABE0B  89 78 27                  MOV dword ptr [EAX + 0x27],EDI
005ABE0E  89 78 23                  MOV dword ptr [EAX + 0x23],EDI
005ABE11  89 48 2F                  MOV dword ptr [EAX + 0x2f],ECX
005ABE14  89 48 2B                  MOV dword ptr [EAX + 0x2b],ECX
005ABE17  EB 02                     JMP 0x005abe1b
LAB_005abe19:
005ABE19  33 C0                     XOR EAX,EAX
LAB_005abe1b:
005ABE1B  3B C7                     CMP EAX,EDI
005ABE1D  89 83 C0 20 00 00         MOV dword ptr [EBX + 0x20c0],EAX
005ABE23  0F 84 D6 00 00 00         JZ 0x005abeff
005ABE29  8B 0D A8 75 80 00         MOV ECX,dword ptr [0x008075a8]
005ABE2F  57                        PUSH EDI
005ABE30  6A 01                     PUSH 0x1
005ABE32  6A 10                     PUSH 0x10
005ABE34  6A 01                     PUSH 0x1
005ABE36  6A 62                     PUSH 0x62
005ABE38  68 90 01 00 00            PUSH 0x190
005ABE3D  68 F1 01 00 00            PUSH 0x1f1
005ABE42  68 C8 00 00 00            PUSH 0xc8
005ABE47  51                        PUSH ECX
005ABE48  E8 A3 3B 11 00            CALL 0x006bf9f0
005ABE4D  8B 8B C0 20 00 00         MOV ECX,dword ptr [EBX + 0x20c0]
005ABE53  50                        PUSH EAX
005ABE54  68 F1 01 00 00            PUSH 0x1f1
005ABE59  68 C8 00 00 00            PUSH 0xc8
005ABE5E  6A 01                     PUSH 0x1
005ABE60  E8 38 87 E5 FF            CALL 0x0040459d
005ABE65  85 C0                     TEST EAX,EAX
005ABE67  0F 84 92 00 00 00         JZ 0x005abeff
005ABE6D  8B 83 C0 20 00 00         MOV EAX,dword ptr [EBX + 0x20c0]
005ABE73  8B 50 13                  MOV EDX,dword ptr [EAX + 0x13]
005ABE76  C6 40 02 01               MOV byte ptr [EAX + 0x2],0x1
005ABE7A  89 50 17                  MOV dword ptr [EAX + 0x17],EDX
005ABE7D  8B 83 C0 20 00 00         MOV EAX,dword ptr [EBX + 0x20c0]
005ABE83  8B 40 03                  MOV EAX,dword ptr [EAX + 0x3]
005ABE86  3B C7                     CMP EAX,EDI
005ABE88  7C 0C                     JL 0x005abe96
005ABE8A  50                        PUSH EAX
005ABE8B  A1 A8 75 80 00            MOV EAX,[0x008075a8]
005ABE90  50                        PUSH EAX
005ABE91  E8 5A 7C 10 00            CALL 0x006b3af0
LAB_005abe96:
005ABE96  A1 6C 17 81 00            MOV EAX,[0x0081176c]
005ABE9B  8B 88 60 05 00 00         MOV ECX,dword ptr [EAX + 0x560]
005ABEA1  3B CE                     CMP ECX,ESI
005ABEA3  74 12                     JZ 0x005abeb7
005ABEA5  51                        PUSH ECX
005ABEA6  8B 88 A4 05 00 00         MOV ECX,dword ptr [EAX + 0x5a4]
005ABEAC  51                        PUSH ECX
005ABEAD  E8 3E 7C 10 00            CALL 0x006b3af0
005ABEB2  A1 6C 17 81 00            MOV EAX,[0x0081176c]
LAB_005abeb7:
005ABEB7  8B 88 F1 05 00 00         MOV ECX,dword ptr [EAX + 0x5f1]
005ABEBD  3B CE                     CMP ECX,ESI
005ABEBF  74 12                     JZ 0x005abed3
005ABEC1  8B 90 35 06 00 00         MOV EDX,dword ptr [EAX + 0x635]
005ABEC7  51                        PUSH ECX
005ABEC8  52                        PUSH EDX
005ABEC9  E8 22 7C 10 00            CALL 0x006b3af0
005ABECE  A1 6C 17 81 00            MOV EAX,[0x0081176c]
LAB_005abed3:
005ABED3  8B 80 58 05 00 00         MOV EAX,dword ptr [EAX + 0x558]
005ABED9  8B 0D A8 75 80 00         MOV ECX,dword ptr [0x008075a8]
005ABEDF  50                        PUSH EAX
005ABEE0  51                        PUSH ECX
005ABEE1  E8 0A 7C 10 00            CALL 0x006b3af0
005ABEE6  8B 15 6C 17 81 00         MOV EDX,dword ptr [0x0081176c]
005ABEEC  8B 0D A8 75 80 00         MOV ECX,dword ptr [0x008075a8]
005ABEF2  8B 82 54 05 00 00         MOV EAX,dword ptr [EDX + 0x554]
005ABEF8  50                        PUSH EAX
005ABEF9  51                        PUSH ECX
005ABEFA  E8 F1 7B 10 00            CALL 0x006b3af0
LAB_005abeff:
005ABEFF  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
005ABF02  3B C6                     CMP EAX,ESI
005ABF04  0F 84 1F 01 00 00         JZ 0x005ac029
005ABF0A  8B 15 A8 75 80 00         MOV EDX,dword ptr [0x008075a8]
005ABF10  50                        PUSH EAX
005ABF11  52                        PUSH EDX
005ABF12  E8 99 7C 10 00            CALL 0x006b3bb0
005ABF17  89 75 FC                  MOV dword ptr [EBP + -0x4],ESI
005ABF1A  E9 0A 01 00 00            JMP 0x005ac029
LAB_005abf1f:
005ABF1F  8A 83 5F 1A 00 00         MOV AL,byte ptr [EBX + 0x1a5f]
005ABF25  3C 0C                     CMP AL,0xc
005ABF27  74 78                     JZ 0x005abfa1
005ABF29  3C 04                     CMP AL,0x4
005ABF2B  74 74                     JZ 0x005abfa1
005ABF2D  3C 05                     CMP AL,0x5
005ABF2F  74 70                     JZ 0x005abfa1
005ABF31  3C 13                     CMP AL,0x13
005ABF33  74 6C                     JZ 0x005abfa1
005ABF35  A1 6C 17 81 00            MOV EAX,[0x0081176c]
005ABF3A  8B 88 60 05 00 00         MOV ECX,dword ptr [EAX + 0x560]
005ABF40  3B CE                     CMP ECX,ESI
005ABF42  74 12                     JZ 0x005abf56
005ABF44  8B 80 A4 05 00 00         MOV EAX,dword ptr [EAX + 0x5a4]
005ABF4A  51                        PUSH ECX
005ABF4B  50                        PUSH EAX
005ABF4C  E8 9F 7B 10 00            CALL 0x006b3af0
005ABF51  A1 6C 17 81 00            MOV EAX,[0x0081176c]
LAB_005abf56:
005ABF56  8B 88 F1 05 00 00         MOV ECX,dword ptr [EAX + 0x5f1]
005ABF5C  3B CE                     CMP ECX,ESI
005ABF5E  74 12                     JZ 0x005abf72
005ABF60  51                        PUSH ECX
005ABF61  8B 88 35 06 00 00         MOV ECX,dword ptr [EAX + 0x635]
005ABF67  51                        PUSH ECX
005ABF68  E8 83 7B 10 00            CALL 0x006b3af0
005ABF6D  A1 6C 17 81 00            MOV EAX,[0x0081176c]
LAB_005abf72:
005ABF72  8B 90 58 05 00 00         MOV EDX,dword ptr [EAX + 0x558]
005ABF78  A1 A8 75 80 00            MOV EAX,[0x008075a8]
005ABF7D  52                        PUSH EDX
005ABF7E  50                        PUSH EAX
005ABF7F  E8 6C 7B 10 00            CALL 0x006b3af0
005ABF84  8B 0D 6C 17 81 00         MOV ECX,dword ptr [0x0081176c]
005ABF8A  A1 A8 75 80 00            MOV EAX,[0x008075a8]
005ABF8F  8B 91 54 05 00 00         MOV EDX,dword ptr [ECX + 0x554]
005ABF95  52                        PUSH EDX
005ABF96  50                        PUSH EAX
005ABF97  E8 54 7B 10 00            CALL 0x006b3af0
005ABF9C  E9 88 00 00 00            JMP 0x005ac029
LAB_005abfa1:
005ABFA1  A1 6C 17 81 00            MOV EAX,[0x0081176c]
005ABFA6  8B 88 60 05 00 00         MOV ECX,dword ptr [EAX + 0x560]
005ABFAC  3B CE                     CMP ECX,ESI
005ABFAE  74 22                     JZ 0x005abfd2
005ABFB0  8B 90 7C 05 00 00         MOV EDX,dword ptr [EAX + 0x57c]
005ABFB6  52                        PUSH EDX
005ABFB7  8B 90 78 05 00 00         MOV EDX,dword ptr [EAX + 0x578]
005ABFBD  8B 80 A4 05 00 00         MOV EAX,dword ptr [EAX + 0x5a4]
005ABFC3  52                        PUSH EDX
005ABFC4  6A FE                     PUSH -0x2
005ABFC6  51                        PUSH ECX
005ABFC7  50                        PUSH EAX
005ABFC8  E8 03 75 10 00            CALL 0x006b34d0
005ABFCD  A1 6C 17 81 00            MOV EAX,[0x0081176c]
LAB_005abfd2:
005ABFD2  8B 88 F1 05 00 00         MOV ECX,dword ptr [EAX + 0x5f1]
005ABFD8  3B CE                     CMP ECX,ESI
005ABFDA  74 22                     JZ 0x005abffe
005ABFDC  8B 90 0D 06 00 00         MOV EDX,dword ptr [EAX + 0x60d]
005ABFE2  52                        PUSH EDX
005ABFE3  8B 90 09 06 00 00         MOV EDX,dword ptr [EAX + 0x609]
005ABFE9  8B 80 35 06 00 00         MOV EAX,dword ptr [EAX + 0x635]
005ABFEF  52                        PUSH EDX
005ABFF0  6A FE                     PUSH -0x2
005ABFF2  51                        PUSH ECX
005ABFF3  50                        PUSH EAX
005ABFF4  E8 D7 74 10 00            CALL 0x006b34d0
005ABFF9  A1 6C 17 81 00            MOV EAX,[0x0081176c]
LAB_005abffe:
005ABFFE  8B 88 58 05 00 00         MOV ECX,dword ptr [EAX + 0x558]
005AC004  8B 15 A8 75 80 00         MOV EDX,dword ptr [0x008075a8]
005AC00A  51                        PUSH ECX
005AC00B  52                        PUSH EDX
005AC00C  E8 1F 74 10 00            CALL 0x006b3430
005AC011  A1 6C 17 81 00            MOV EAX,[0x0081176c]
005AC016  8B 15 A8 75 80 00         MOV EDX,dword ptr [0x008075a8]
005AC01C  8B 88 54 05 00 00         MOV ECX,dword ptr [EAX + 0x554]
005AC022  51                        PUSH ECX
005AC023  52                        PUSH EDX
005AC024  E8 07 74 10 00            CALL 0x006b3430
LAB_005ac029:
005AC029  8B 43 5D                  MOV EAX,dword ptr [EBX + 0x5d]
005AC02C  6A 01                     PUSH 0x1
005AC02E  8D 48 28                  LEA ECX,[EAX + 0x28]
005AC031  51                        PUSH ECX
005AC032  50                        PUSH EAX
005AC033  E8 A8 8F 10 00            CALL 0x006b4fe0
005AC038  8B 53 5D                  MOV EDX,dword ptr [EBX + 0x5d]
005AC03B  50                        PUSH EAX
005AC03C  33 C0                     XOR EAX,EAX
005AC03E  66 8B 42 0E               MOV AX,word ptr [EDX + 0xe]
005AC042  50                        PUSH EAX
005AC043  6A 18                     PUSH 0x18
005AC045  68 72 01 00 00            PUSH 0x172
005AC04A  E8 71 90 10 00            CALL 0x006b50c0
005AC04F  89 83 8B 1C 00 00         MOV dword ptr [EBX + 0x1c8b],EAX
005AC055  8B 70 14                  MOV ESI,dword ptr [EAX + 0x14]
005AC058  3B F7                     CMP ESI,EDI
005AC05A  75 1A                     JNZ 0x005ac076
005AC05C  33 F6                     XOR ESI,ESI
005AC05E  66 8B 70 0E               MOV SI,word ptr [EAX + 0xe]
005AC062  0F AF 70 04               IMUL ESI,dword ptr [EAX + 0x4]
005AC066  83 C6 1F                  ADD ESI,0x1f
005AC069  C1 EE 03                  SHR ESI,0x3
005AC06C  81 E6 FC FF FF 1F         AND ESI,0x1ffffffc
005AC072  0F AF 70 08               IMUL ESI,dword ptr [EAX + 0x8]
LAB_005ac076:
005AC076  50                        PUSH EAX
005AC077  E8 24 8F 10 00            CALL 0x006b4fa0
005AC07C  8B CE                     MOV ECX,ESI
005AC07E  8B F8                     MOV EDI,EAX
005AC080  8B D1                     MOV EDX,ECX
005AC082  83 C8 FF                  OR EAX,0xffffffff
005AC085  C1 E9 02                  SHR ECX,0x2
005AC088  F3 AB                     STOSD.REP ES:EDI
005AC08A  8B CA                     MOV ECX,EDX
005AC08C  6A 0D                     PUSH 0xd
005AC08E  83 E1 03                  AND ECX,0x3
005AC091  F3 AA                     STOSB.REP ES:EDI
005AC093  8B 8B 5B 1A 00 00         MOV ECX,dword ptr [EBX + 0x1a5b]
005AC099  8B 83 8B 1C 00 00         MOV EAX,dword ptr [EBX + 0x1c8b]
005AC09F  8B 91 40 01 00 00         MOV EDX,dword ptr [ECX + 0x140]
005AC0A5  8B 48 04                  MOV ECX,dword ptr [EAX + 0x4]
005AC0A8  52                        PUSH EDX
005AC0A9  49                        DEC ECX
005AC0AA  6A 01                     PUSH 0x1
005AC0AC  51                        PUSH ECX
005AC0AD  6A 01                     PUSH 0x1
005AC0AF  6A 00                     PUSH 0x0
005AC0B1  6A 00                     PUSH 0x0
005AC0B3  50                        PUSH EAX
005AC0B4  E8 57 9A 10 00            CALL 0x006b5b10
005AC0B9  8B 83 8B 1C 00 00         MOV EAX,dword ptr [EBX + 0x1c8b]
005AC0BF  8B 0D A8 75 80 00         MOV ECX,dword ptr [0x008075a8]
005AC0C5  50                        PUSH EAX
005AC0C6  8D BB 87 1C 00 00         LEA EDI,[EBX + 0x1c87]
005AC0CC  8B 50 08                  MOV EDX,dword ptr [EAX + 0x8]
005AC0CF  8B 40 04                  MOV EAX,dword ptr [EAX + 0x4]
005AC0D2  52                        PUSH EDX
005AC0D3  50                        PUSH EAX
005AC0D4  68 CF 4A 40 00            PUSH 0x404acf
005AC0D9  6A 31                     PUSH 0x31
005AC0DB  57                        PUSH EDI
005AC0DC  51                        PUSH ECX
005AC0DD  E8 4E 62 10 00            CALL 0x006b2330
005AC0E2  8B 17                     MOV EDX,dword ptr [EDI]
005AC0E4  A1 A8 75 80 00            MOV EAX,[0x008075a8]
005AC0E9  68 D3 01 00 00            PUSH 0x1d3
005AC0EE  68 12 01 00 00            PUSH 0x112
005AC0F3  6A FF                     PUSH -0x1
005AC0F5  52                        PUSH EDX
005AC0F6  50                        PUSH EAX
005AC0F7  E8 44 75 10 00            CALL 0x006b3640
005AC0FC  8B 0F                     MOV ECX,dword ptr [EDI]
005AC0FE  8B 15 A8 75 80 00         MOV EDX,dword ptr [0x008075a8]
005AC104  51                        PUSH ECX
005AC105  52                        PUSH EDX
005AC106  E8 E5 79 10 00            CALL 0x006b3af0
005AC10B  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
005AC10E  83 F8 13                  CMP EAX,0x13
005AC111  77 0F                     JA 0x005ac122
005AC113  33 C9                     XOR ECX,ECX
005AC115  8A 88 E8 C5 5A 00         MOV CL,byte ptr [EAX + 0x5ac5e8]
switchD_005ac11b::switchD:
005AC11B  FF 24 8D E0 C5 5A 00      JMP dword ptr [ECX*0x4 + 0x5ac5e0]
switchD_005ac11b::caseD_2:
005AC122  8B 53 5D                  MOV EDX,dword ptr [EBX + 0x5d]
005AC125  A1 A8 75 80 00            MOV EAX,[0x008075a8]
005AC12A  8B 0D 9C 75 80 00         MOV ECX,dword ptr [0x0080759c]
005AC130  6A 00                     PUSH 0x0
005AC132  6A 02                     PUSH 0x2
005AC134  6A 0A                     PUSH 0xa
005AC136  52                        PUSH EDX
005AC137  50                        PUSH EAX
005AC138  51                        PUSH ECX
005AC139  E8 4C 83 E5 FF            CALL 0x0040448a
005AC13E  83 C4 18                  ADD ESP,0x18
switchD_005ac11b::caseD_0:
005AC141  8B 83 B8 20 00 00         MOV EAX,dword ptr [EBX + 0x20b8]
005AC147  85 C0                     TEST EAX,EAX
005AC149  74 19                     JZ 0x005ac164
005AC14B  80 38 00                  CMP byte ptr [EAX],0x0
005AC14E  74 14                     JZ 0x005ac164
005AC150  8B 40 03                  MOV EAX,dword ptr [EAX + 0x3]
005AC153  85 C0                     TEST EAX,EAX
005AC155  7C 0D                     JL 0x005ac164
005AC157  8B 15 A8 75 80 00         MOV EDX,dword ptr [0x008075a8]
005AC15D  50                        PUSH EAX
005AC15E  52                        PUSH EDX
005AC15F  E8 CC 72 10 00            CALL 0x006b3430
LAB_005ac164:
005AC164  8B 83 BC 20 00 00         MOV EAX,dword ptr [EBX + 0x20bc]
005AC16A  85 C0                     TEST EAX,EAX
005AC16C  74 18                     JZ 0x005ac186
005AC16E  80 38 00                  CMP byte ptr [EAX],0x0
005AC171  74 13                     JZ 0x005ac186
005AC173  8B 40 03                  MOV EAX,dword ptr [EAX + 0x3]
005AC176  85 C0                     TEST EAX,EAX
005AC178  7C 0C                     JL 0x005ac186
005AC17A  50                        PUSH EAX
005AC17B  A1 A8 75 80 00            MOV EAX,[0x008075a8]
005AC180  50                        PUSH EAX
005AC181  E8 AA 72 10 00            CALL 0x006b3430
LAB_005ac186:
005AC186  8B 83 C0 20 00 00         MOV EAX,dword ptr [EBX + 0x20c0]
005AC18C  85 C0                     TEST EAX,EAX
005AC18E  74 19                     JZ 0x005ac1a9
005AC190  80 38 00                  CMP byte ptr [EAX],0x0
005AC193  74 14                     JZ 0x005ac1a9
005AC195  8B 40 03                  MOV EAX,dword ptr [EAX + 0x3]
005AC198  85 C0                     TEST EAX,EAX
005AC19A  7C 0D                     JL 0x005ac1a9
005AC19C  8B 0D A8 75 80 00         MOV ECX,dword ptr [0x008075a8]
005AC1A2  50                        PUSH EAX
005AC1A3  51                        PUSH ECX
005AC1A4  E8 87 72 10 00            CALL 0x006b3430
LAB_005ac1a9:
005AC1A9  8B 3D 30 2A 80 00         MOV EDI,dword ptr [0x00802a30]
005AC1AF  85 FF                     TEST EDI,EDI
005AC1B1  74 4D                     JZ 0x005ac200
005AC1B3  8B 97 C9 00 00 00         MOV EDX,dword ptr [EDI + 0xc9]
005AC1B9  8B 87 C5 00 00 00         MOV EAX,dword ptr [EDI + 0xc5]
005AC1BF  52                        PUSH EDX
005AC1C0  50                        PUSH EAX
005AC1C1  6A 00                     PUSH 0x0
005AC1C3  8B CF                     MOV ECX,EDI
005AC1C5  C6 87 93 04 00 00 01      MOV byte ptr [EDI + 0x493],0x1
005AC1CC  66 C7 87 94 04 00 00 FF FF  MOV word ptr [EDI + 0x494],0xffff
005AC1D5  E8 A4 8E E5 FF            CALL 0x0040507e
005AC1DA  8B 8F C9 00 00 00         MOV ECX,dword ptr [EDI + 0xc9]
005AC1E0  8B 97 C5 00 00 00         MOV EDX,dword ptr [EDI + 0xc5]
005AC1E6  51                        PUSH ECX
005AC1E7  52                        PUSH EDX
005AC1E8  8B CF                     MOV ECX,EDI
005AC1EA  E8 2F 62 E5 FF            CALL 0x0040241e
005AC1EF  C6 87 D2 00 00 00 00      MOV byte ptr [EDI + 0xd2],0x0
005AC1F6  C7 87 DF 04 00 00 FF FF FF FF  MOV dword ptr [EDI + 0x4df],0xffffffff
LAB_005ac200:
005AC200  B9 7E 00 00 00            MOV ECX,0x7e
005AC205  33 C0                     XOR EAX,EAX
005AC207  8D BD F8 FD FF FF         LEA EDI,[EBP + 0xfffffdf8]
005AC20D  33 D2                     XOR EDX,EDX
005AC20F  F3 AB                     STOSD.REP ES:EDI
005AC211  8A 93 5F 1A 00 00         MOV DL,byte ptr [EBX + 0x1a5f]
005AC217  B9 02 00 00 00            MOV ECX,0x2
005AC21C  66 AB                     STOSW ES:EDI
005AC21E  AA                        STOSB ES:EDI
005AC21F  8B 43 08                  MOV EAX,dword ptr [EBX + 0x8]
005AC222  8B FA                     MOV EDI,EDX
005AC224  C6 43 65 03               MOV byte ptr [EBX + 0x65],0x3
005AC228  C7 85 BB FE FF FF 40 23 00 00  MOV dword ptr [EBP + 0xfffffebb],0x2340
005AC232  8D 77 FC                  LEA ESI,[EDI + -0x4]
005AC235  89 85 C8 FE FF FF         MOV dword ptr [EBP + 0xfffffec8],EAX
005AC23B  83 FE 0F                  CMP ESI,0xf
005AC23E  89 8D CC FE FF FF         MOV dword ptr [EBP + 0xfffffecc],ECX
005AC244  C7 85 D0 FE FF FF 43 69 00 00  MOV dword ptr [EBP + 0xfffffed0],0x6943
005AC24E  C7 85 E2 FE FF FF BC 24 00 00  MOV dword ptr [EBP + 0xfffffee2],0x24bc
005AC258  89 85 EF FE FF FF         MOV dword ptr [EBP + 0xfffffeef],EAX
005AC25E  89 8D F3 FE FF FF         MOV dword ptr [EBP + 0xfffffef3],ECX
005AC264  77 27                     JA 0x005ac28d
005AC266  33 D2                     XOR EDX,EDX
005AC268  8A 96 08 C6 5A 00         MOV DL,byte ptr [ESI + 0x5ac608]
switchD_005ac26e::switchD:
005AC26E  FF 24 95 FC C5 5A 00      JMP dword ptr [EDX*0x4 + 0x5ac5fc]
switchD_005ac26e::caseD_4:
005AC275  C7 85 F7 FE FF FF 4D 69 00 00  MOV dword ptr [EBP + 0xfffffef7],0x694d
005AC27F  EB 20                     JMP 0x005ac2a1
switchD_005ac26e::caseD_13:
005AC281  C7 85 F7 FE FF FF 51 69 00 00  MOV dword ptr [EBP + 0xfffffef7],0x6951
005AC28B  EB 14                     JMP 0x005ac2a1
switchD_005ac26e::caseD_6:
005AC28D  C7 85 F7 FE FF FF 43 69 00 00  MOV dword ptr [EBP + 0xfffffef7],0x6943
005AC297  C7 85 FB FE FF FF 01 00 00 00  MOV dword ptr [EBP + 0xfffffefb],0x1
LAB_005ac2a1:
005AC2A1  4F                        DEC EDI
005AC2A2  83 FF 12                  CMP EDI,0x12
005AC2A5  0F 87 7E 01 00 00         JA 0x005ac429
005AC2AB  33 D2                     XOR EDX,EDX
005AC2AD  8A 97 34 C6 5A 00         MOV DL,byte ptr [EDI + 0x5ac634]
switchD_005ac2b3::switchD:
005AC2B3  FF 24 95 18 C6 5A 00      JMP dword ptr [EDX*0x4 + 0x5ac618]
switchD_005ac2b3::caseD_9:
005AC2BA  C7 85 1F FE FF FF 3E 23 00 00  MOV dword ptr [EBP + 0xfffffe1f],0x233e
005AC2C4  89 85 2C FE FF FF         MOV dword ptr [EBP + 0xfffffe2c],EAX
005AC2CA  89 8D 30 FE FF FF         MOV dword ptr [EBP + 0xfffffe30],ECX
005AC2D0  C7 85 34 FE FF FF 49 69 00 00  MOV dword ptr [EBP + 0xfffffe34],0x6949
005AC2DA  E9 4A 01 00 00            JMP 0x005ac429
switchD_005ac2b3::caseD_1:
005AC2DF  C7 85 F8 FD FF FF 48 23 00 00  MOV dword ptr [EBP + 0xfffffdf8],0x2348
005AC2E9  89 85 05 FE FF FF         MOV dword ptr [EBP + 0xfffffe05],EAX
005AC2EF  89 8D 09 FE FF FF         MOV dword ptr [EBP + 0xfffffe09],ECX
005AC2F5  C7 85 0D FE FF FF 4B 69 00 00  MOV dword ptr [EBP + 0xfffffe0d],0x694b
005AC2FF  C7 85 1F FE FF FF 43 23 00 00  MOV dword ptr [EBP + 0xfffffe1f],0x2343
005AC309  89 85 2C FE FF FF         MOV dword ptr [EBP + 0xfffffe2c],EAX
005AC30F  89 8D 30 FE FF FF         MOV dword ptr [EBP + 0xfffffe30],ECX
005AC315  C7 85 34 FE FF FF 4A 69 00 00  MOV dword ptr [EBP + 0xfffffe34],0x694a
005AC31F  C7 85 46 FE FF FF 49 23 00 00  MOV dword ptr [EBP + 0xfffffe46],0x2349
005AC329  89 85 53 FE FF FF         MOV dword ptr [EBP + 0xfffffe53],EAX
005AC32F  89 8D 57 FE FF FF         MOV dword ptr [EBP + 0xfffffe57],ECX
005AC335  C7 85 5B FE FF FF 4C 69 00 00  MOV dword ptr [EBP + 0xfffffe5b],0x694c
005AC33F  E9 E5 00 00 00            JMP 0x005ac429
switchD_005ac2b3::caseD_4:
005AC344  C7 85 1F FE FF FF 57 23 00 00  MOV dword ptr [EBP + 0xfffffe1f],0x2357
005AC34E  89 85 2C FE FF FF         MOV dword ptr [EBP + 0xfffffe2c],EAX
005AC354  89 8D 30 FE FF FF         MOV dword ptr [EBP + 0xfffffe30],ECX
005AC35A  C7 85 34 FE FF FF 4E 69 00 00  MOV dword ptr [EBP + 0xfffffe34],0x694e
005AC364  C7 85 46 FE FF FF 49 23 00 00  MOV dword ptr [EBP + 0xfffffe46],0x2349
005AC36E  89 85 53 FE FF FF         MOV dword ptr [EBP + 0xfffffe53],EAX
005AC374  89 8D 57 FE FF FF         MOV dword ptr [EBP + 0xfffffe57],ECX
005AC37A  C7 85 5B FE FF FF 4C 69 00 00  MOV dword ptr [EBP + 0xfffffe5b],0x694c
005AC384  E9 A0 00 00 00            JMP 0x005ac429
switchD_005ac2b3::caseD_13:
005AC389  8A 15 00 34 80 00         MOV DL,byte ptr [0x00803400]
005AC38F  80 FA 0C                  CMP DL,0xc
005AC392  75 22                     JNZ 0x005ac3b6
switchD_005ac2b3::caseD_c:
005AC394  C7 85 1F FE FF FF 3E 23 00 00  MOV dword ptr [EBP + 0xfffffe1f],0x233e
005AC39E  89 85 2C FE FF FF         MOV dword ptr [EBP + 0xfffffe2c],EAX
005AC3A4  89 8D 30 FE FF FF         MOV dword ptr [EBP + 0xfffffe30],ECX
005AC3AA  C7 85 34 FE FF FF 4E 69 00 00  MOV dword ptr [EBP + 0xfffffe34],0x694e
005AC3B4  EB 73                     JMP 0x005ac429
LAB_005ac3b6:
005AC3B6  80 FA 04                  CMP DL,0x4
005AC3B9  C7 85 1F FE FF FF 57 23 00 00  MOV dword ptr [EBP + 0xfffffe1f],0x2357
005AC3C3  89 85 2C FE FF FF         MOV dword ptr [EBP + 0xfffffe2c],EAX
005AC3C9  89 8D 30 FE FF FF         MOV dword ptr [EBP + 0xfffffe30],ECX
005AC3CF  C7 85 34 FE FF FF 4E 69 00 00  MOV dword ptr [EBP + 0xfffffe34],0x694e
005AC3D9  72 4E                     JC 0x005ac429
005AC3DB  80 FA 05                  CMP DL,0x5
005AC3DE  77 49                     JA 0x005ac429
005AC3E0  C7 85 46 FE FF FF 49 23 00 00  MOV dword ptr [EBP + 0xfffffe46],0x2349
005AC3EA  89 85 53 FE FF FF         MOV dword ptr [EBP + 0xfffffe53],EAX
005AC3F0  89 8D 57 FE FF FF         MOV dword ptr [EBP + 0xfffffe57],ECX
005AC3F6  C7 85 5B FE FF FF 4C 69 00 00  MOV dword ptr [EBP + 0xfffffe5b],0x694c
005AC400  EB 27                     JMP 0x005ac429
switchD_005ac2b3::caseD_3:
005AC402  C6 83 B5 20 00 00 00      MOV byte ptr [EBX + 0x20b5],0x0
005AC409  C7 85 1F FE FF FF 43 23 00 00  MOV dword ptr [EBP + 0xfffffe1f],0x2343
005AC413  89 85 2C FE FF FF         MOV dword ptr [EBP + 0xfffffe2c],EAX
005AC419  89 8D 30 FE FF FF         MOV dword ptr [EBP + 0xfffffe30],ECX
005AC41F  C7 85 34 FE FF FF 56 69 00 00  MOV dword ptr [EBP + 0xfffffe34],0x6956
switchD_005ac2b3::caseD_6:
005AC429  8B 93 5B 1A 00 00         MOV EDX,dword ptr [EBX + 0x1a5b]
005AC42F  8B 82 E6 02 00 00         MOV EAX,dword ptr [EDX + 0x2e6]
005AC435  85 C0                     TEST EAX,EAX
005AC437  74 42                     JZ 0x005ac47b
005AC439  B9 06 00 00 00            MOV ECX,0x6
005AC43E  83 C8 FF                  OR EAX,0xffffffff
005AC441  8D BD 98 FD FF FF         LEA EDI,[EBP + 0xfffffd98]
005AC447  6A 00                     PUSH 0x0
005AC449  F3 AB                     STOSD.REP ES:EDI
005AC44B  66 AB                     STOSW ES:EDI
005AC44D  8B 8A E6 02 00 00         MOV ECX,dword ptr [EDX + 0x2e6]
005AC453  8D 85 F8 FD FF FF         LEA EAX,[EBP + 0xfffffdf8]
005AC459  6A 00                     PUSH 0x0
005AC45B  50                        PUSH EAX
005AC45C  6A 00                     PUSH 0x0
005AC45E  E8 B4 52 E5 FF            CALL 0x00401717
005AC463  8B 93 5B 1A 00 00         MOV EDX,dword ptr [EBX + 0x1a5b]
005AC469  8D 8D 98 FD FF FF         LEA ECX,[EBP + 0xfffffd98]
005AC46F  51                        PUSH ECX
005AC470  8B 8A E6 02 00 00         MOV ECX,dword ptr [EDX + 0x2e6]
005AC476  E8 D6 86 E5 FF            CALL 0x00404b51
LAB_005ac47b:
005AC47B  A0 A0 67 80 00            MOV AL,[0x008067a0]
005AC480  84 C0                     TEST AL,AL
005AC482  74 34                     JZ 0x005ac4b8
005AC484  A1 64 17 81 00            MOV EAX,[0x00811764]
005AC489  85 C0                     TEST EAX,EAX
005AC48B  74 2B                     JZ 0x005ac4b8
005AC48D  83 C0 18                  ADD EAX,0x18
005AC490  50                        PUSH EAX
005AC491  8D 85 98 FB FF FF         LEA EAX,[EBP + 0xfffffb98]
005AC497  50                        PUSH EAX
005AC498  E8 C3 9C 10 00            CALL 0x006b6160
005AC49D  8D 8D 98 FB FF FF         LEA ECX,[EBP + 0xfffffb98]
005AC4A3  C6 85 B8 FB FF FF 00      MOV byte ptr [EBP + 0xfffffbb8],0x0
005AC4AA  51                        PUSH ECX
005AC4AB  6A 04                     PUSH 0x4
005AC4AD  B9 90 2A 80 00            MOV ECX,0x802a90
005AC4B2  FF 15 70 C0 85 00         CALL dword ptr [0x0085c070]
LAB_005ac4b8:
005AC4B8  6A 00                     PUSH 0x0
005AC4BA  B9 58 76 80 00            MOV ECX,0x807658
005AC4BF  E8 D8 6D E5 FF            CALL 0x0040329c
005AC4C4  F6 05 01 73 80 00 08      TEST byte ptr [0x00807301],0x8
005AC4CB  74 12                     JZ 0x005ac4df
005AC4CD  6A 00                     PUSH 0x0
005AC4CF  6A 00                     PUSH 0x0
005AC4D1  6A 02                     PUSH 0x2
005AC4D3  6A 14                     PUSH 0x14
005AC4D5  B9 58 76 80 00            MOV ECX,0x807658
005AC4DA  E8 F2 6A E5 FF            CALL 0x00402fd1
LAB_005ac4df:
005AC4DF  6A FF                     PUSH -0x1
005AC4E1  6A 00                     PUSH 0x0
005AC4E3  6A 0B                     PUSH 0xb
005AC4E5  8B CB                     MOV ECX,EBX
005AC4E7  E8 05 87 E5 FF            CALL 0x00404bf1
005AC4EC  8B 95 B4 FD FF FF         MOV EDX,dword ptr [EBP + 0xfffffdb4]
005AC4F2  89 15 F8 8D 85 00         MOV dword ptr [0x00858df8],EDX
005AC4F8  5F                        POP EDI
005AC4F9  5E                        POP ESI
005AC4FA  5B                        POP EBX
005AC4FB  8B E5                     MOV ESP,EBP
005AC4FD  5D                        POP EBP
005AC4FE  C2 08 00                  RET 0x8
LAB_005ac501:
005AC501  8B 85 B4 FD FF FF         MOV EAX,dword ptr [EBP + 0xfffffdb4]
005AC507  68 70 C7 7C 00            PUSH 0x7cc770
005AC50C  68 CC 4C 7A 00            PUSH 0x7a4ccc
005AC511  56                        PUSH ESI
005AC512  6A 00                     PUSH 0x0
005AC514  68 5A 01 00 00            PUSH 0x15a
005AC519  68 28 C7 7C 00            PUSH 0x7cc728
005AC51E  A3 F8 8D 85 00            MOV [0x00858df8],EAX
005AC523  E8 A8 0F 10 00            CALL 0x006ad4d0
005AC528  83 C4 18                  ADD ESP,0x18
005AC52B  85 C0                     TEST EAX,EAX
005AC52D  74 01                     JZ 0x005ac530
005AC52F  CC                        INT3
LAB_005ac530:
005AC530  68 5A 01 00 00            PUSH 0x15a
005AC535  68 28 C7 7C 00            PUSH 0x7cc728
005AC53A  6A 00                     PUSH 0x0
005AC53C  56                        PUSH ESI
005AC53D  E8 FE 98 0F 00            CALL 0x006a5e40
005AC542  5F                        POP EDI
005AC543  5E                        POP ESI
005AC544  5B                        POP EBX
005AC545  8B E5                     MOV ESP,EBP
005AC547  5D                        POP EBP
005AC548  C2 08 00                  RET 0x8
