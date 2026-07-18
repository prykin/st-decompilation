FUN_004ff380:
004FF380  55                        PUSH EBP
004FF381  8B EC                     MOV EBP,ESP
004FF383  81 EC 8C 00 00 00         SUB ESP,0x8c
004FF389  A1 F8 8D 85 00            MOV EAX,[0x00858df8]
004FF38E  53                        PUSH EBX
004FF38F  56                        PUSH ESI
004FF390  89 4D B8                  MOV dword ptr [EBP + -0x48],ECX
004FF393  57                        PUSH EDI
004FF394  8D 95 78 FF FF FF         LEA EDX,[EBP + 0xffffff78]
004FF39A  8D 8D 74 FF FF FF         LEA ECX,[EBP + 0xffffff74]
004FF3A0  6A 00                     PUSH 0x0
004FF3A2  52                        PUSH EDX
004FF3A3  89 85 74 FF FF FF         MOV dword ptr [EBP + 0xffffff74],EAX
004FF3A9  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
004FF3AF  E8 3C E4 22 00            CALL 0x0072d7f0
004FF3B4  8B F0                     MOV ESI,EAX
004FF3B6  83 C4 08                  ADD ESP,0x8
004FF3B9  85 F6                     TEST ESI,ESI
004FF3BB  0F 85 43 08 00 00         JNZ 0x004ffc04
004FF3C1  8B 5D B8                  MOV EBX,dword ptr [EBP + -0x48]
004FF3C4  B9 0D 00 00 00            MOV ECX,0xd
004FF3C9  8D 7D BC                  LEA EDI,[EBP + -0x44]
004FF3CC  8D 93 63 0B 00 00         LEA EDX,[EBX + 0xb63]
004FF3D2  8B F2                     MOV ESI,EDX
004FF3D4  F3 A5                     MOVSD.REP ES:EDI,ESI
004FF3D6  66 A5                     MOVSW ES:EDI,ESI
004FF3D8  B9 0C 00 00 00            MOV ECX,0xc
004FF3DD  8B FA                     MOV EDI,EDX
004FF3DF  F3 AB                     STOSD.REP ES:EDI
004FF3E1  66 AB                     STOSW ES:EDI
004FF3E3  8B 83 4B 0B 00 00         MOV EAX,dword ptr [EBX + 0xb4b]
004FF3E9  8B 93 95 0B 00 00         MOV EDX,dword ptr [EBX + 0xb95]
004FF3EF  8D 4D EE                  LEA ECX,[EBP + -0x12]
004FF3F2  89 45 EE                  MOV dword ptr [EBP + -0x12],EAX
004FF3F5  E8 46 0A 1B 00            CALL 0x006afe40
004FF3FA  8B 8B 95 0B 00 00         MOV ECX,dword ptr [EBX + 0xb95]
004FF400  8D B3 63 0B 00 00         LEA ESI,[EBX + 0xb63]
004FF406  56                        PUSH ESI
004FF407  6A 01                     PUSH 0x1
004FF409  C7 41 0C 00 00 00 00      MOV dword ptr [ECX + 0xc],0x0
004FF410  8B 55 EE                  MOV EDX,dword ptr [EBP + -0x12]
004FF413  89 93 4B 0B 00 00         MOV dword ptr [EBX + 0xb4b],EDX
004FF419  8B 0D 74 A1 7F 00         MOV ECX,dword ptr [0x007fa174]
004FF41F  E8 98 41 F0 FF            CALL 0x004035bc
004FF424  8A 45 BC                  MOV AL,byte ptr [EBP + -0x44]
004FF427  8A 0E                     MOV CL,byte ptr [ESI]
004FF429  3A C1                     CMP AL,CL
004FF42B  74 78                     JZ 0x004ff4a5
004FF42D  8B 0D 84 16 80 00         MOV ECX,dword ptr [0x00801684]
004FF433  85 C9                     TEST ECX,ECX
004FF435  74 07                     JZ 0x004ff43e
004FF437  6A 00                     PUSH 0x0
004FF439  E8 35 26 F0 FF            CALL 0x00401a73
LAB_004ff43e:
004FF43E  8B 0D 78 16 80 00         MOV ECX,dword ptr [0x00801678]
004FF444  85 C9                     TEST ECX,ECX
004FF446  74 07                     JZ 0x004ff44f
004FF448  8B 11                     MOV EDX,dword ptr [ECX]
004FF44A  6A 00                     PUSH 0x0
004FF44C  FF 52 1C                  CALL dword ptr [EDX + 0x1c]
LAB_004ff44f:
004FF44F  8B 0D EC 16 80 00         MOV ECX,dword ptr [0x008016ec]
004FF455  85 C9                     TEST ECX,ECX
004FF457  74 07                     JZ 0x004ff460
004FF459  8B 01                     MOV EAX,dword ptr [ECX]
004FF45B  6A 00                     PUSH 0x0
004FF45D  FF 50 1C                  CALL dword ptr [EAX + 0x1c]
LAB_004ff460:
004FF460  8B 0D 48 2A 80 00         MOV ECX,dword ptr [0x00802a48]
004FF466  85 C9                     TEST ECX,ECX
004FF468  74 07                     JZ 0x004ff471
004FF46A  8B 11                     MOV EDX,dword ptr [ECX]
004FF46C  6A 00                     PUSH 0x0
004FF46E  FF 52 1C                  CALL dword ptr [EDX + 0x1c]
LAB_004ff471:
004FF471  8B 0D 8C 16 80 00         MOV ECX,dword ptr [0x0080168c]
004FF477  85 C9                     TEST ECX,ECX
004FF479  74 07                     JZ 0x004ff482
004FF47B  8B 01                     MOV EAX,dword ptr [ECX]
004FF47D  6A 00                     PUSH 0x0
004FF47F  FF 50 1C                  CALL dword ptr [EAX + 0x1c]
LAB_004ff482:
004FF482  6A 01                     PUSH 0x1
004FF484  8B CB                     MOV ECX,EBX
004FF486  E8 B9 27 F0 FF            CALL 0x00401c44
004FF48B  8B CB                     MOV ECX,EBX
004FF48D  E8 B6 41 F0 FF            CALL 0x00403648
004FF492  8B 95 74 FF FF FF         MOV EDX,dword ptr [EBP + 0xffffff74]
004FF498  89 15 F8 8D 85 00         MOV dword ptr [0x00858df8],EDX
004FF49E  5F                        POP EDI
004FF49F  5E                        POP ESI
004FF4A0  5B                        POP EBX
004FF4A1  8B E5                     MOV ESP,EBP
004FF4A3  5D                        POP EBP
004FF4A4  C3                        RET
LAB_004ff4a5:
004FF4A5  8A 8B 80 0B 00 00         MOV CL,byte ptr [EBX + 0xb80]
004FF4AB  8A 45 D9                  MOV AL,byte ptr [EBP + -0x27]
004FF4AE  3A C8                     CMP CL,AL
004FF4B0  74 55                     JZ 0x004ff507
004FF4B2  8B 0D 84 16 80 00         MOV ECX,dword ptr [0x00801684]
004FF4B8  85 C9                     TEST ECX,ECX
004FF4BA  74 07                     JZ 0x004ff4c3
004FF4BC  6A 00                     PUSH 0x0
004FF4BE  E8 B0 25 F0 FF            CALL 0x00401a73
LAB_004ff4c3:
004FF4C3  8B 0D 78 16 80 00         MOV ECX,dword ptr [0x00801678]
004FF4C9  85 C9                     TEST ECX,ECX
004FF4CB  74 07                     JZ 0x004ff4d4
004FF4CD  8B 11                     MOV EDX,dword ptr [ECX]
004FF4CF  6A 00                     PUSH 0x0
004FF4D1  FF 52 1C                  CALL dword ptr [EDX + 0x1c]
LAB_004ff4d4:
004FF4D4  8B 0D EC 16 80 00         MOV ECX,dword ptr [0x008016ec]
004FF4DA  85 C9                     TEST ECX,ECX
004FF4DC  74 07                     JZ 0x004ff4e5
004FF4DE  8B 01                     MOV EAX,dword ptr [ECX]
004FF4E0  6A 00                     PUSH 0x0
004FF4E2  FF 50 1C                  CALL dword ptr [EAX + 0x1c]
LAB_004ff4e5:
004FF4E5  8B 0D 48 2A 80 00         MOV ECX,dword ptr [0x00802a48]
004FF4EB  85 C9                     TEST ECX,ECX
004FF4ED  74 07                     JZ 0x004ff4f6
004FF4EF  8B 11                     MOV EDX,dword ptr [ECX]
004FF4F1  6A 00                     PUSH 0x0
004FF4F3  FF 52 1C                  CALL dword ptr [EDX + 0x1c]
LAB_004ff4f6:
004FF4F6  8B 0D 8C 16 80 00         MOV ECX,dword ptr [0x0080168c]
004FF4FC  85 C9                     TEST ECX,ECX
004FF4FE  74 07                     JZ 0x004ff507
004FF500  8B 01                     MOV EAX,dword ptr [ECX]
004FF502  6A 00                     PUSH 0x0
004FF504  FF 50 1C                  CALL dword ptr [EAX + 0x1c]
LAB_004ff507:
004FF507  80 BB 63 0B 00 00 02      CMP byte ptr [EBX + 0xb63],0x2
004FF50E  0F 85 0F 02 00 00         JNZ 0x004ff723
004FF514  8B 8B 95 0B 00 00         MOV ECX,dword ptr [EBX + 0xb95]
004FF51A  8B 45 EE                  MOV EAX,dword ptr [EBP + -0x12]
004FF51D  8B 51 0C                  MOV EDX,dword ptr [ECX + 0xc]
004FF520  8B 48 0C                  MOV ECX,dword ptr [EAX + 0xc]
004FF523  3B D1                     CMP EDX,ECX
004FF525  75 0D                     JNZ 0x004ff534
004FF527  8A 4D BD                  MOV CL,byte ptr [EBP + -0x43]
004FF52A  8A 83 64 0B 00 00         MOV AL,byte ptr [EBX + 0xb64]
004FF530  3A C8                     CMP CL,AL
004FF532  74 09                     JZ 0x004ff53d
LAB_004ff534:
004FF534  6A 01                     PUSH 0x1
004FF536  8B CB                     MOV ECX,EBX
004FF538  E8 07 27 F0 FF            CALL 0x00401c44
LAB_004ff53d:
004FF53D  B9 05 00 00 00            MOV ECX,0x5
004FF542  8D BB 8D 0B 00 00         LEA EDI,[EBX + 0xb8d]
004FF548  8D 75 E6                  LEA ESI,[EBP + -0x1a]
004FF54B  33 D2                     XOR EDX,EDX
004FF54D  F3 A6                     CMPSB.REPE ES:EDI,ESI
004FF54F  74 4C                     JZ 0x004ff59d
004FF551  6A 01                     PUSH 0x1
004FF553  8B CB                     MOV ECX,EBX
004FF555  E8 1D 44 F0 FF            CALL 0x00403977
004FF55A  80 3D 4E 87 80 00 03      CMP byte ptr [0x0080874e],0x3
004FF561  0F 94 C0                  SETZ AL
004FF564  83 C0 02                  ADD EAX,0x2
004FF567  3C 0B                     CMP AL,0xb
004FF569  88 45 FC                  MOV byte ptr [EBP + -0x4],AL
004FF56C  73 2F                     JNC 0x004ff59d
004FF56E  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
004FF571  25 FF 00 00 00            AND EAX,0xff
004FF576  8B 8C 83 48 01 00 00      MOV ECX,dword ptr [EBX + EAX*0x4 + 0x148]
004FF57D  85 C9                     TEST ECX,ECX
004FF57F  7C 1C                     JL 0x004ff59d
004FF581  8B 94 83 94 00 00 00      MOV EDX,dword ptr [EBX + EAX*0x4 + 0x94]
004FF588  8B 44 83 3C               MOV EAX,dword ptr [EBX + EAX*0x4 + 0x3c]
004FF58C  52                        PUSH EDX
004FF58D  50                        PUSH EAX
004FF58E  6A FF                     PUSH -0x1
004FF590  51                        PUSH ECX
004FF591  8B 0D A8 75 80 00         MOV ECX,dword ptr [0x008075a8]
004FF597  51                        PUSH ECX
004FF598  E8 A3 40 1B 00            CALL 0x006b3640
LAB_004ff59d:
004FF59D  8B 93 95 0B 00 00         MOV EDX,dword ptr [EBX + 0xb95]
004FF5A3  8B 4D EE                  MOV ECX,dword ptr [EBP + -0x12]
004FF5A6  E8 A5 64 1B 00            CALL 0x006b5a50
004FF5AB  85 C0                     TEST EAX,EAX
004FF5AD  0F 84 70 01 00 00         JZ 0x004ff723
004FF5B3  8B 83 58 09 00 00         MOV EAX,dword ptr [EBX + 0x958]
004FF5B9  6A 3C                     PUSH 0x3c
004FF5BB  8B 50 04                  MOV EDX,dword ptr [EAX + 0x4]
004FF5BE  52                        PUSH EDX
004FF5BF  6A 00                     PUSH 0x0
004FF5C1  6A 00                     PUSH 0x0
004FF5C3  6A 00                     PUSH 0x0
004FF5C5  50                        PUSH EAX
004FF5C6  8B 83 84 01 00 00         MOV EAX,dword ptr [EBX + 0x184]
004FF5CC  6A 00                     PUSH 0x0
004FF5CE  6A 00                     PUSH 0x0
004FF5D0  6A 00                     PUSH 0x0
004FF5D2  50                        PUSH EAX
004FF5D3  E8 18 60 1B 00            CALL 0x006b55f0
004FF5D8  8B 8B 95 0B 00 00         MOV ECX,dword ptr [EBX + 0xb95]
004FF5DE  A1 18 76 80 00            MOV EAX,[0x00807618]
004FF5E3  8B 51 0C                  MOV EDX,dword ptr [ECX + 0xc]
004FF5E6  52                        PUSH EDX
004FF5E7  50                        PUSH EAX
004FF5E8  68 B9 36 00 00            PUSH 0x36b9
004FF5ED  E8 4E 0B 1B 00            CALL 0x006b0140
004FF5F2  8B 8B 13 02 00 00         MOV ECX,dword ptr [EBX + 0x213]
004FF5F8  50                        PUSH EAX
004FF5F9  68 5C 24 7C 00            PUSH 0x7c245c
004FF5FE  51                        PUSH ECX
004FF5FF  FF 15 E8 BD 85 00         CALL dword ptr [0x0085bde8]
004FF605  8B 93 58 09 00 00         MOV EDX,dword ptr [EBX + 0x958]
004FF60B  8B 8B 84 01 00 00         MOV ECX,dword ptr [EBX + 0x184]
004FF611  83 C4 10                  ADD ESP,0x10
004FF614  8B 42 04                  MOV EAX,dword ptr [EDX + 0x4]
004FF617  83 E8 04                  SUB EAX,0x4
004FF61A  6A 2D                     PUSH 0x2d
004FF61C  50                        PUSH EAX
004FF61D  6A 0F                     PUSH 0xf
004FF61F  6A 02                     PUSH 0x2
004FF621  6A 00                     PUSH 0x0
004FF623  51                        PUSH ECX
004FF624  8B 8B B8 01 00 00         MOV ECX,dword ptr [EBX + 0x1b8]
004FF62A  E8 61 14 21 00            CALL 0x00710a90
004FF62F  8B 93 13 02 00 00         MOV EDX,dword ptr [EBX + 0x213]
004FF635  8B 8B B8 01 00 00         MOV ECX,dword ptr [EBX + 0x1b8]
004FF63B  6A FF                     PUSH -0x1
004FF63D  6A FF                     PUSH -0x1
004FF63F  6A 00                     PUSH 0x0
004FF641  6A FF                     PUSH -0x1
004FF643  6A FE                     PUSH -0x2
004FF645  52                        PUSH EDX
004FF646  E8 25 25 21 00            CALL 0x00711b70
004FF64B  8B 83 4C 01 00 00         MOV EAX,dword ptr [EBX + 0x14c]
004FF651  85 C0                     TEST EAX,EAX
004FF653  7C 19                     JL 0x004ff66e
004FF655  8B 8B 98 00 00 00         MOV ECX,dword ptr [EBX + 0x98]
004FF65B  8B 53 40                  MOV EDX,dword ptr [EBX + 0x40]
004FF65E  51                        PUSH ECX
004FF65F  52                        PUSH EDX
004FF660  6A FF                     PUSH -0x1
004FF662  50                        PUSH EAX
004FF663  A1 A8 75 80 00            MOV EAX,[0x008075a8]
004FF668  50                        PUSH EAX
004FF669  E8 D2 3F 1B 00            CALL 0x006b3640
LAB_004ff66e:
004FF66E  80 3D 4E 87 80 00 03      CMP byte ptr [0x0080874e],0x3
004FF675  75 16                     JNZ 0x004ff68d
004FF677  8A 4D D8                  MOV CL,byte ptr [EBP + -0x28]
004FF67A  8A 83 7F 0B 00 00         MOV AL,byte ptr [EBX + 0xb7f]
004FF680  3A C8                     CMP CL,AL
004FF682  74 09                     JZ 0x004ff68d
004FF684  6A 01                     PUSH 0x1
004FF686  8B CB                     MOV ECX,EBX
004FF688  E8 DA 2F F0 FF            CALL 0x00402667
LAB_004ff68d:
004FF68D  8B 55 EE                  MOV EDX,dword ptr [EBP + -0x12]
004FF690  C7 45 F4 01 00 00 00      MOV dword ptr [EBP + -0xc],0x1
004FF697  C7 45 F8 00 00 00 00      MOV dword ptr [EBP + -0x8],0x0
004FF69E  8B 42 0C                  MOV EAX,dword ptr [EDX + 0xc]
004FF6A1  85 C0                     TEST EAX,EAX
004FF6A3  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
004FF6A6  76 63                     JBE 0x004ff70b
004FF6A8  8B BB 95 0B 00 00         MOV EDI,dword ptr [EBX + 0xb95]
004FF6AE  8B 57 0C                  MOV EDX,dword ptr [EDI + 0xc]
LAB_004ff6b1:
004FF6B1  8B 75 F8                  MOV ESI,dword ptr [EBP + -0x8]
004FF6B4  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
004FF6B7  3B F0                     CMP ESI,EAX
004FF6B9  73 0E                     JNC 0x004ff6c9
004FF6BB  8B 4D EE                  MOV ECX,dword ptr [EBP + -0x12]
004FF6BE  8B 41 08                  MOV EAX,dword ptr [ECX + 0x8]
004FF6C1  0F AF C6                  IMUL EAX,ESI
004FF6C4  03 41 1C                  ADD EAX,dword ptr [ECX + 0x1c]
004FF6C7  EB 02                     JMP 0x004ff6cb
LAB_004ff6c9:
004FF6C9  33 C0                     XOR EAX,EAX
LAB_004ff6cb:
004FF6CB  8B 30                     MOV ESI,dword ptr [EAX]
004FF6CD  33 C9                     XOR ECX,ECX
004FF6CF  85 D2                     TEST EDX,EDX
004FF6D1  76 23                     JBE 0x004ff6f6
004FF6D3  3B CA                     CMP ECX,EDX
004FF6D5  73 0B                     JNC 0x004ff6e2
LAB_004ff6d7:
004FF6D7  8B 47 08                  MOV EAX,dword ptr [EDI + 0x8]
004FF6DA  0F AF C1                  IMUL EAX,ECX
004FF6DD  03 47 1C                  ADD EAX,dword ptr [EDI + 0x1c]
004FF6E0  EB 02                     JMP 0x004ff6e4
LAB_004ff6e2:
004FF6E2  33 C0                     XOR EAX,EAX
LAB_004ff6e4:
004FF6E4  39 30                     CMP dword ptr [EAX],ESI
004FF6E6  74 07                     JZ 0x004ff6ef
004FF6E8  41                        INC ECX
004FF6E9  3B CA                     CMP ECX,EDX
004FF6EB  72 EA                     JC 0x004ff6d7
004FF6ED  EB 07                     JMP 0x004ff6f6
LAB_004ff6ef:
004FF6EF  C7 45 F4 00 00 00 00      MOV dword ptr [EBP + -0xc],0x0
LAB_004ff6f6:
004FF6F6  8B 45 F4                  MOV EAX,dword ptr [EBP + -0xc]
004FF6F9  85 C0                     TEST EAX,EAX
004FF6FB  74 26                     JZ 0x004ff723
004FF6FD  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
004FF700  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
004FF703  40                        INC EAX
004FF704  3B C1                     CMP EAX,ECX
004FF706  89 45 F8                  MOV dword ptr [EBP + -0x8],EAX
004FF709  72 A6                     JC 0x004ff6b1
LAB_004ff70b:
004FF70B  8B 45 F4                  MOV EAX,dword ptr [EBP + -0xc]
004FF70E  85 C0                     TEST EAX,EAX
004FF710  74 11                     JZ 0x004ff723
004FF712  8B 0D 78 16 80 00         MOV ECX,dword ptr [0x00801678]
004FF718  85 C9                     TEST ECX,ECX
004FF71A  74 07                     JZ 0x004ff723
004FF71C  8B 01                     MOV EAX,dword ptr [ECX]
004FF71E  6A 00                     PUSH 0x0
004FF720  FF 50 1C                  CALL dword ptr [EAX + 0x1c]
LAB_004ff723:
004FF723  8A 83 63 0B 00 00         MOV AL,byte ptr [EBX + 0xb63]
004FF729  3C 01                     CMP AL,0x1
004FF72B  74 0C                     JZ 0x004ff739
004FF72D  3C 04                     CMP AL,0x4
004FF72F  74 08                     JZ 0x004ff739
004FF731  3C 03                     CMP AL,0x3
004FF733  0F 85 B8 04 00 00         JNZ 0x004ffbf1
LAB_004ff739:
004FF739  8B 4D C4                  MOV ECX,dword ptr [EBP + -0x3c]
004FF73C  8B 83 6B 0B 00 00         MOV EAX,dword ptr [EBX + 0xb6b]
004FF742  3B C8                     CMP ECX,EAX
004FF744  75 1A                     JNZ 0x004ff760
004FF746  8A 55 BD                  MOV DL,byte ptr [EBP + -0x43]
004FF749  8A 83 64 0B 00 00         MOV AL,byte ptr [EBX + 0xb64]
004FF74F  3A D0                     CMP DL,AL
004FF751  75 0D                     JNZ 0x004ff760
004FF753  8A 45 BE                  MOV AL,byte ptr [EBP + -0x42]
004FF756  8A 8B 65 0B 00 00         MOV CL,byte ptr [EBX + 0xb65]
004FF75C  3A C1                     CMP AL,CL
004FF75E  74 5E                     JZ 0x004ff7be
LAB_004ff760:
004FF760  8B 0D 84 16 80 00         MOV ECX,dword ptr [0x00801684]
004FF766  85 C9                     TEST ECX,ECX
004FF768  74 07                     JZ 0x004ff771
004FF76A  6A 00                     PUSH 0x0
004FF76C  E8 02 23 F0 FF            CALL 0x00401a73
LAB_004ff771:
004FF771  8B 0D 78 16 80 00         MOV ECX,dword ptr [0x00801678]
004FF777  85 C9                     TEST ECX,ECX
004FF779  74 07                     JZ 0x004ff782
004FF77B  8B 11                     MOV EDX,dword ptr [ECX]
004FF77D  6A 00                     PUSH 0x0
004FF77F  FF 52 1C                  CALL dword ptr [EDX + 0x1c]
LAB_004ff782:
004FF782  8B 0D EC 16 80 00         MOV ECX,dword ptr [0x008016ec]
004FF788  85 C9                     TEST ECX,ECX
004FF78A  74 07                     JZ 0x004ff793
004FF78C  8B 01                     MOV EAX,dword ptr [ECX]
004FF78E  6A 00                     PUSH 0x0
004FF790  FF 50 1C                  CALL dword ptr [EAX + 0x1c]
LAB_004ff793:
004FF793  8B 0D 48 2A 80 00         MOV ECX,dword ptr [0x00802a48]
004FF799  85 C9                     TEST ECX,ECX
004FF79B  74 07                     JZ 0x004ff7a4
004FF79D  8B 11                     MOV EDX,dword ptr [ECX]
004FF79F  6A 00                     PUSH 0x0
004FF7A1  FF 52 1C                  CALL dword ptr [EDX + 0x1c]
LAB_004ff7a4:
004FF7A4  8B 0D 8C 16 80 00         MOV ECX,dword ptr [0x0080168c]
004FF7AA  85 C9                     TEST ECX,ECX
004FF7AC  74 07                     JZ 0x004ff7b5
004FF7AE  8B 01                     MOV EAX,dword ptr [ECX]
004FF7B0  6A 00                     PUSH 0x0
004FF7B2  FF 50 1C                  CALL dword ptr [EAX + 0x1c]
LAB_004ff7b5:
004FF7B5  6A 01                     PUSH 0x1
004FF7B7  8B CB                     MOV ECX,EBX
004FF7B9  E8 86 24 F0 FF            CALL 0x00401c44
LAB_004ff7be:
004FF7BE  8B 83 66 0B 00 00         MOV EAX,dword ptr [EBX + 0xb66]
004FF7C4  8B 75 BF                  MOV ESI,dword ptr [EBP + -0x41]
004FF7C7  3B F0                     CMP ESI,EAX
004FF7C9  75 0D                     JNZ 0x004ff7d8
004FF7CB  8A 4D C3                  MOV CL,byte ptr [EBP + -0x3d]
004FF7CE  8A 93 6A 0B 00 00         MOV DL,byte ptr [EBX + 0xb6a]
004FF7D4  3A CA                     CMP CL,DL
004FF7D6  74 6C                     JZ 0x004ff844
LAB_004ff7d8:
004FF7D8  83 FE 07                  CMP ESI,0x7
004FF7DB  74 60                     JZ 0x004ff83d
004FF7DD  83 FE 13                  CMP ESI,0x13
004FF7E0  74 5B                     JZ 0x004ff83d
004FF7E2  83 F8 07                  CMP EAX,0x7
004FF7E5  74 56                     JZ 0x004ff83d
004FF7E7  83 F8 13                  CMP EAX,0x13
004FF7EA  74 51                     JZ 0x004ff83d
004FF7EC  8B 93 58 09 00 00         MOV EDX,dword ptr [EBX + 0x958]
004FF7F2  8B 83 84 01 00 00         MOV EAX,dword ptr [EBX + 0x184]
004FF7F8  6A 20                     PUSH 0x20
004FF7FA  6A 4E                     PUSH 0x4e
004FF7FC  6A 00                     PUSH 0x0
004FF7FE  6A 01                     PUSH 0x1
004FF800  6A 00                     PUSH 0x0
004FF802  52                        PUSH EDX
004FF803  6A 00                     PUSH 0x0
004FF805  6A 01                     PUSH 0x1
004FF807  6A 00                     PUSH 0x0
004FF809  50                        PUSH EAX
004FF80A  E8 E1 5D 1B 00            CALL 0x006b55f0
004FF80F  6A 01                     PUSH 0x1
004FF811  8B CB                     MOV ECX,EBX
004FF813  E8 AF 50 F0 FF            CALL 0x004048c7
004FF818  8B 83 4C 01 00 00         MOV EAX,dword ptr [EBX + 0x14c]
004FF81E  85 C0                     TEST EAX,EAX
004FF820  7C 22                     JL 0x004ff844
004FF822  8B 8B 98 00 00 00         MOV ECX,dword ptr [EBX + 0x98]
004FF828  8B 53 40                  MOV EDX,dword ptr [EBX + 0x40]
004FF82B  51                        PUSH ECX
004FF82C  52                        PUSH EDX
004FF82D  6A FF                     PUSH -0x1
004FF82F  50                        PUSH EAX
004FF830  A1 A8 75 80 00            MOV EAX,[0x008075a8]
004FF835  50                        PUSH EAX
004FF836  E8 05 3E 1B 00            CALL 0x006b3640
004FF83B  EB 07                     JMP 0x004ff844
LAB_004ff83d:
004FF83D  8B CB                     MOV ECX,EBX
004FF83F  E8 04 3E F0 FF            CALL 0x00403648
LAB_004ff844:
004FF844  8D BB 6F 0B 00 00         LEA EDI,[EBX + 0xb6f]
004FF84A  8D 75 C8                  LEA ESI,[EBP + -0x38]
LAB_004ff84d:
004FF84D  8A 0E                     MOV CL,byte ptr [ESI]
004FF84F  8A 17                     MOV DL,byte ptr [EDI]
004FF851  8A C1                     MOV AL,CL
004FF853  3A CA                     CMP CL,DL
004FF855  75 1E                     JNZ 0x004ff875
004FF857  84 C0                     TEST AL,AL
004FF859  74 16                     JZ 0x004ff871
004FF85B  8A 56 01                  MOV DL,byte ptr [ESI + 0x1]
004FF85E  8A 4F 01                  MOV CL,byte ptr [EDI + 0x1]
004FF861  8A C2                     MOV AL,DL
004FF863  3A D1                     CMP DL,CL
004FF865  75 0E                     JNZ 0x004ff875
004FF867  83 C6 02                  ADD ESI,0x2
004FF86A  83 C7 02                  ADD EDI,0x2
004FF86D  84 C0                     TEST AL,AL
004FF86F  75 DC                     JNZ 0x004ff84d
LAB_004ff871:
004FF871  33 C0                     XOR EAX,EAX
004FF873  EB 05                     JMP 0x004ff87a
LAB_004ff875:
004FF875  1B C0                     SBB EAX,EAX
004FF877  83 D8 FF                  SBB EAX,-0x1
LAB_004ff87a:
004FF87A  85 C0                     TEST EAX,EAX
004FF87C  74 50                     JZ 0x004ff8ce
004FF87E  8B 83 58 09 00 00         MOV EAX,dword ptr [EBX + 0x958]
004FF884  8B 8B 84 01 00 00         MOV ECX,dword ptr [EBX + 0x184]
004FF88A  6A 20                     PUSH 0x20
004FF88C  6A 4E                     PUSH 0x4e
004FF88E  6A 00                     PUSH 0x0
004FF890  6A 01                     PUSH 0x1
004FF892  6A 00                     PUSH 0x0
004FF894  50                        PUSH EAX
004FF895  6A 00                     PUSH 0x0
004FF897  6A 01                     PUSH 0x1
004FF899  6A 00                     PUSH 0x0
004FF89B  51                        PUSH ECX
004FF89C  E8 4F 5D 1B 00            CALL 0x006b55f0
004FF8A1  6A 01                     PUSH 0x1
004FF8A3  8B CB                     MOV ECX,EBX
004FF8A5  E8 1D 50 F0 FF            CALL 0x004048c7
004FF8AA  8B 83 4C 01 00 00         MOV EAX,dword ptr [EBX + 0x14c]
004FF8B0  85 C0                     TEST EAX,EAX
004FF8B2  7C 1A                     JL 0x004ff8ce
004FF8B4  8B 93 98 00 00 00         MOV EDX,dword ptr [EBX + 0x98]
004FF8BA  8B 4B 40                  MOV ECX,dword ptr [EBX + 0x40]
004FF8BD  52                        PUSH EDX
004FF8BE  8B 15 A8 75 80 00         MOV EDX,dword ptr [0x008075a8]
004FF8C4  51                        PUSH ECX
004FF8C5  6A FF                     PUSH -0x1
004FF8C7  50                        PUSH EAX
004FF8C8  52                        PUSH EDX
004FF8C9  E8 72 3D 1B 00            CALL 0x006b3640
LAB_004ff8ce:
004FF8CE  8A 45 D7                  MOV AL,byte ptr [EBP + -0x29]
004FF8D1  8A 8B 7E 0B 00 00         MOV CL,byte ptr [EBX + 0xb7e]
004FF8D7  3A C1                     CMP AL,CL
004FF8D9  74 4F                     JZ 0x004ff92a
004FF8DB  8B 8B 58 09 00 00         MOV ECX,dword ptr [EBX + 0x958]
004FF8E1  8B 93 84 01 00 00         MOV EDX,dword ptr [EBX + 0x184]
004FF8E7  6A 11                     PUSH 0x11
004FF8E9  6A 4E                     PUSH 0x4e
004FF8EB  6A 1F                     PUSH 0x1f
004FF8ED  6A 01                     PUSH 0x1
004FF8EF  6A 00                     PUSH 0x0
004FF8F1  51                        PUSH ECX
004FF8F2  6A 1F                     PUSH 0x1f
004FF8F4  6A 01                     PUSH 0x1
004FF8F6  6A 00                     PUSH 0x0
004FF8F8  52                        PUSH EDX
004FF8F9  E8 F2 5C 1B 00            CALL 0x006b55f0
004FF8FE  6A 01                     PUSH 0x1
004FF900  8B CB                     MOV ECX,EBX
004FF902  E8 BD 20 F0 FF            CALL 0x004019c4
004FF907  8B 83 4C 01 00 00         MOV EAX,dword ptr [EBX + 0x14c]
004FF90D  85 C0                     TEST EAX,EAX
004FF90F  7C 19                     JL 0x004ff92a
004FF911  8B 8B 98 00 00 00         MOV ECX,dword ptr [EBX + 0x98]
004FF917  8B 53 40                  MOV EDX,dword ptr [EBX + 0x40]
004FF91A  51                        PUSH ECX
004FF91B  52                        PUSH EDX
004FF91C  6A FF                     PUSH -0x1
004FF91E  50                        PUSH EAX
004FF91F  A1 A8 75 80 00            MOV EAX,[0x008075a8]
004FF924  50                        PUSH EAX
004FF925  E8 16 3D 1B 00            CALL 0x006b3640
LAB_004ff92a:
004FF92A  80 3D 4E 87 80 00 03      CMP byte ptr [0x0080874e],0x3
004FF931  75 1F                     JNZ 0x004ff952
004FF933  80 BB 6A 0B 00 00 03      CMP byte ptr [EBX + 0xb6a],0x3
004FF93A  75 16                     JNZ 0x004ff952
004FF93C  8A 4D D8                  MOV CL,byte ptr [EBP + -0x28]
004FF93F  8A 83 7F 0B 00 00         MOV AL,byte ptr [EBX + 0xb7f]
004FF945  3A C8                     CMP CL,AL
004FF947  74 09                     JZ 0x004ff952
004FF949  6A 01                     PUSH 0x1
004FF94B  8B CB                     MOV ECX,EBX
004FF94D  E8 15 2D F0 FF            CALL 0x00402667
LAB_004ff952:
004FF952  8B 83 66 0B 00 00         MOV EAX,dword ptr [EBX + 0xb66]
004FF958  83 F8 07                  CMP EAX,0x7
004FF95B  0F 84 A3 00 00 00         JZ 0x004ffa04
004FF961  83 F8 13                  CMP EAX,0x13
004FF964  0F 84 9A 00 00 00         JZ 0x004ffa04
004FF96A  83 F8 1B                  CMP EAX,0x1b
004FF96D  0F 84 91 00 00 00         JZ 0x004ffa04
004FF973  66 8B 55 DA               MOV DX,word ptr [EBP + -0x26]
004FF977  66 3B 93 81 0B 00 00      CMP DX,word ptr [EBX + 0xb81]
004FF97E  75 45                     JNZ 0x004ff9c5
004FF980  66 8B 45 DE               MOV AX,word ptr [EBP + -0x22]
004FF984  66 3B 83 85 0B 00 00      CMP AX,word ptr [EBX + 0xb85]
004FF98B  75 38                     JNZ 0x004ff9c5
004FF98D  66 8B 4D E2               MOV CX,word ptr [EBP + -0x1e]
004FF991  66 3B 8B 89 0B 00 00      CMP CX,word ptr [EBX + 0xb89]
004FF998  75 2B                     JNZ 0x004ff9c5
004FF99A  66 8B 55 DC               MOV DX,word ptr [EBP + -0x24]
004FF99E  66 3B 93 83 0B 00 00      CMP DX,word ptr [EBX + 0xb83]
004FF9A5  75 1E                     JNZ 0x004ff9c5
004FF9A7  66 8B 45 E0               MOV AX,word ptr [EBP + -0x20]
004FF9AB  66 3B 83 87 0B 00 00      CMP AX,word ptr [EBX + 0xb87]
004FF9B2  75 11                     JNZ 0x004ff9c5
004FF9B4  66 8B 4D E4               MOV CX,word ptr [EBP + -0x1c]
004FF9B8  66 3B 8B 8B 0B 00 00      CMP CX,word ptr [EBX + 0xb8b]
004FF9BF  0F 84 CC 01 00 00         JZ 0x004ffb91
LAB_004ff9c5:
004FF9C5  8B 93 58 09 00 00         MOV EDX,dword ptr [EBX + 0x958]
004FF9CB  8B 83 84 01 00 00         MOV EAX,dword ptr [EBX + 0x184]
004FF9D1  6A 24                     PUSH 0x24
004FF9D3  6A 4E                     PUSH 0x4e
004FF9D5  6A 2F                     PUSH 0x2f
004FF9D7  6A 01                     PUSH 0x1
004FF9D9  6A 00                     PUSH 0x0
004FF9DB  52                        PUSH EDX
004FF9DC  6A 2F                     PUSH 0x2f
004FF9DE  6A 01                     PUSH 0x1
004FF9E0  6A 00                     PUSH 0x0
004FF9E2  50                        PUSH EAX
004FF9E3  E8 08 5C 1B 00            CALL 0x006b55f0
004FF9E8  6A 01                     PUSH 0x1
004FF9EA  8B CB                     MOV ECX,EBX
004FF9EC  E8 A3 2C F0 FF            CALL 0x00402694
004FF9F1  8B 83 4C 01 00 00         MOV EAX,dword ptr [EBX + 0x14c]
004FF9F7  85 C0                     TEST EAX,EAX
004FF9F9  0F 8C 92 01 00 00         JL 0x004ffb91
004FF9FF  E9 74 01 00 00            JMP 0x004ffb78
LAB_004ffa04:
004FFA04  8B 8B 81 0B 00 00         MOV ECX,dword ptr [EBX + 0xb81]
004FFA0A  8B 45 DA                  MOV EAX,dword ptr [EBP + -0x26]
004FFA0D  3B C8                     CMP ECX,EAX
004FFA0F  74 46                     JZ 0x004ffa57
004FFA11  8B 93 58 09 00 00         MOV EDX,dword ptr [EBX + 0x958]
004FFA17  8B 83 84 01 00 00         MOV EAX,dword ptr [EBX + 0x184]
004FFA1D  6A 24                     PUSH 0x24
004FFA1F  6A 4E                     PUSH 0x4e
004FFA21  6A 2F                     PUSH 0x2f
004FFA23  6A 01                     PUSH 0x1
004FFA25  6A 00                     PUSH 0x0
004FFA27  52                        PUSH EDX
004FFA28  6A 2F                     PUSH 0x2f
004FFA2A  6A 01                     PUSH 0x1
004FFA2C  6A 00                     PUSH 0x0
004FFA2E  50                        PUSH EAX
004FFA2F  E8 BC 5B 1B 00            CALL 0x006b55f0
004FFA34  8B 83 4C 01 00 00         MOV EAX,dword ptr [EBX + 0x14c]
004FFA3A  85 C0                     TEST EAX,EAX
004FFA3C  7C 19                     JL 0x004ffa57
004FFA3E  8B 8B 98 00 00 00         MOV ECX,dword ptr [EBX + 0x98]
004FFA44  8B 53 40                  MOV EDX,dword ptr [EBX + 0x40]
004FFA47  51                        PUSH ECX
004FFA48  52                        PUSH EDX
004FFA49  6A FF                     PUSH -0x1
004FFA4B  50                        PUSH EAX
004FFA4C  A1 A8 75 80 00            MOV EAX,[0x008075a8]
004FFA51  50                        PUSH EAX
004FFA52  E8 E9 3B 1B 00            CALL 0x006b3640
LAB_004ffa57:
004FFA57  8B 83 81 0B 00 00         MOV EAX,dword ptr [EBX + 0xb81]
004FFA5D  85 C0                     TEST EAX,EAX
004FFA5F  0F 84 2C 01 00 00         JZ 0x004ffb91
004FFA65  3B 45 DA                  CMP EAX,dword ptr [EBP + -0x26]
004FFA68  74 74                     JZ 0x004ffade
004FFA6A  8A 8B 85 0B 00 00         MOV CL,byte ptr [EBX + 0xb85]
004FFA70  51                        PUSH ECX
004FFA71  50                        PUSH EAX
004FFA72  E8 7E 5C F0 FF            CALL 0x004056f5
004FFA77  8B 93 BE 02 00 00         MOV EDX,dword ptr [EBX + 0x2be]
004FFA7D  50                        PUSH EAX
004FFA7E  52                        PUSH EDX
004FFA7F  E8 1C B9 20 00            CALL 0x0070b3a0
004FFA84  50                        PUSH EAX
004FFA85  8B 83 84 01 00 00         MOV EAX,dword ptr [EBX + 0x184]
004FFA8B  6A 01                     PUSH 0x1
004FFA8D  6A 31                     PUSH 0x31
004FFA8F  6A 0B                     PUSH 0xb
004FFA91  50                        PUSH EAX
004FFA92  E8 92 37 F0 FF            CALL 0x00403229
004FFA97  8B 8B CA 02 00 00         MOV ECX,dword ptr [EBX + 0x2ca]
004FFA9D  6A 01                     PUSH 0x1
004FFA9F  51                        PUSH ECX
004FFAA0  E8 FB B8 20 00            CALL 0x0070b3a0
004FFAA5  8B 93 84 01 00 00         MOV EDX,dword ptr [EBX + 0x184]
004FFAAB  50                        PUSH EAX
004FFAAC  6A 06                     PUSH 0x6
004FFAAE  6A 30                     PUSH 0x30
004FFAB0  6A 0A                     PUSH 0xa
004FFAB2  52                        PUSH EDX
004FFAB3  E8 71 37 F0 FF            CALL 0x00403229
004FFAB8  8B 83 4C 01 00 00         MOV EAX,dword ptr [EBX + 0x14c]
004FFABE  83 C4 40                  ADD ESP,0x40
004FFAC1  85 C0                     TEST EAX,EAX
004FFAC3  7C 19                     JL 0x004ffade
004FFAC5  8B 8B 98 00 00 00         MOV ECX,dword ptr [EBX + 0x98]
004FFACB  8B 53 40                  MOV EDX,dword ptr [EBX + 0x40]
004FFACE  51                        PUSH ECX
004FFACF  52                        PUSH EDX
004FFAD0  6A FF                     PUSH -0x1
004FFAD2  50                        PUSH EAX
004FFAD3  A1 A8 75 80 00            MOV EAX,[0x008075a8]
004FFAD8  50                        PUSH EAX
004FFAD9  E8 62 3B 1B 00            CALL 0x006b3640
LAB_004ffade:
004FFADE  8B 8B 84 01 00 00         MOV ECX,dword ptr [EBX + 0x184]
004FFAE4  6A 00                     PUSH 0x0
004FFAE6  6A 21                     PUSH 0x21
004FFAE8  6A 07                     PUSH 0x7
004FFAEA  6A 31                     PUSH 0x31
004FFAEC  6A 3B                     PUSH 0x3b
004FFAEE  6A 00                     PUSH 0x0
004FFAF0  51                        PUSH ECX
004FFAF1  E8 7A 46 1B 00            CALL 0x006b4170
004FFAF6  8A 8B 86 0B 00 00         MOV CL,byte ptr [EBX + 0xb86]
004FFAFC  88 4D FC                  MOV byte ptr [EBP + -0x4],CL
004FFAFF  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
004FFB02  25 FF 00 00 00            AND EAX,0xff
004FFB07  8B D0                     MOV EDX,EAX
004FFB09  C1 E2 05                  SHL EDX,0x5
004FFB0C  03 D0                     ADD EDX,EAX
004FFB0E  B8 1F 85 EB 51            MOV EAX,0x51eb851f
004FFB13  F7 E2                     MUL EDX
004FFB15  C1 EA 05                  SHR EDX,0x5
004FFB18  84 C9                     TEST CL,CL
004FFB1A  88 55 FC                  MOV byte ptr [EBP + -0x4],DL
004FFB1D  76 08                     JBE 0x004ffb27
004FFB1F  84 D2                     TEST DL,DL
004FFB21  75 04                     JNZ 0x004ffb27
004FFB23  C6 45 FC 01               MOV byte ptr [EBP + -0x4],0x1
LAB_004ffb27:
004FFB27  80 F9 46                  CMP CL,0x46
004FFB2A  72 04                     JC 0x004ffb30
004FFB2C  33 D2                     XOR EDX,EDX
004FFB2E  EB 0B                     JMP 0x004ffb3b
LAB_004ffb30:
004FFB30  80 F9 14                  CMP CL,0x14
004FFB33  1B D2                     SBB EDX,EDX
004FFB35  83 E2 05                  AND EDX,0x5
004FFB38  83 C2 05                  ADD EDX,0x5
LAB_004ffb3b:
004FFB3B  8B 8B 8A 02 00 00         MOV ECX,dword ptr [EBX + 0x28a]
004FFB41  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
004FFB44  25 FF 00 00 00            AND EAX,0xff
004FFB49  8B 71 08                  MOV ESI,dword ptr [ECX + 0x8]
004FFB4C  50                        PUSH EAX
004FFB4D  2B F0                     SUB ESI,EAX
004FFB4F  6A 05                     PUSH 0x5
004FFB51  56                        PUSH ESI
004FFB52  52                        PUSH EDX
004FFB53  8B 93 84 01 00 00         MOV EDX,dword ptr [EBX + 0x184]
004FFB59  6A 00                     PUSH 0x0
004FFB5B  51                        PUSH ECX
004FFB5C  B9 52 00 00 00            MOV ECX,0x52
004FFB61  2B C8                     SUB ECX,EAX
004FFB63  51                        PUSH ECX
004FFB64  6A 3C                     PUSH 0x3c
004FFB66  6A 00                     PUSH 0x0
004FFB68  52                        PUSH EDX
004FFB69  E8 82 5A 1B 00            CALL 0x006b55f0
004FFB6E  8B 83 4C 01 00 00         MOV EAX,dword ptr [EBX + 0x14c]
004FFB74  85 C0                     TEST EAX,EAX
004FFB76  7C 19                     JL 0x004ffb91
LAB_004ffb78:
004FFB78  8B 8B 98 00 00 00         MOV ECX,dword ptr [EBX + 0x98]
004FFB7E  8B 53 40                  MOV EDX,dword ptr [EBX + 0x40]
004FFB81  51                        PUSH ECX
004FFB82  52                        PUSH EDX
004FFB83  6A FF                     PUSH -0x1
004FFB85  50                        PUSH EAX
004FFB86  A1 A8 75 80 00            MOV EAX,[0x008075a8]
004FFB8B  50                        PUSH EAX
004FFB8C  E8 AF 3A 1B 00            CALL 0x006b3640
LAB_004ffb91:
004FFB91  B9 05 00 00 00            MOV ECX,0x5
004FFB96  8D BB 8D 0B 00 00         LEA EDI,[EBX + 0xb8d]
004FFB9C  8D 75 E6                  LEA ESI,[EBP + -0x1a]
004FFB9F  33 D2                     XOR EDX,EDX
004FFBA1  F3 A6                     CMPSB.REPE ES:EDI,ESI
004FFBA3  74 4C                     JZ 0x004ffbf1
004FFBA5  6A 01                     PUSH 0x1
004FFBA7  8B CB                     MOV ECX,EBX
004FFBA9  E8 C9 3D F0 FF            CALL 0x00403977
004FFBAE  80 3D 4E 87 80 00 03      CMP byte ptr [0x0080874e],0x3
004FFBB5  0F 94 C0                  SETZ AL
004FFBB8  83 C0 02                  ADD EAX,0x2
004FFBBB  3C 0B                     CMP AL,0xb
004FFBBD  88 45 FC                  MOV byte ptr [EBP + -0x4],AL
004FFBC0  73 2F                     JNC 0x004ffbf1
004FFBC2  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
004FFBC5  25 FF 00 00 00            AND EAX,0xff
004FFBCA  8B 8C 83 48 01 00 00      MOV ECX,dword ptr [EBX + EAX*0x4 + 0x148]
004FFBD1  85 C9                     TEST ECX,ECX
004FFBD3  7C 1C                     JL 0x004ffbf1
004FFBD5  8B 94 83 94 00 00 00      MOV EDX,dword ptr [EBX + EAX*0x4 + 0x94]
004FFBDC  8B 44 83 3C               MOV EAX,dword ptr [EBX + EAX*0x4 + 0x3c]
004FFBE0  52                        PUSH EDX
004FFBE1  50                        PUSH EAX
004FFBE2  6A FF                     PUSH -0x1
004FFBE4  51                        PUSH ECX
004FFBE5  8B 0D A8 75 80 00         MOV ECX,dword ptr [0x008075a8]
004FFBEB  51                        PUSH ECX
004FFBEC  E8 4F 3A 1B 00            CALL 0x006b3640
LAB_004ffbf1:
004FFBF1  8B 95 74 FF FF FF         MOV EDX,dword ptr [EBP + 0xffffff74]
004FFBF7  89 15 F8 8D 85 00         MOV dword ptr [0x00858df8],EDX
004FFBFD  5F                        POP EDI
004FFBFE  5E                        POP ESI
004FFBFF  5B                        POP EBX
004FFC00  8B E5                     MOV ESP,EBP
004FFC02  5D                        POP EBP
004FFC03  C3                        RET
LAB_004ffc04:
004FFC04  8B 85 74 FF FF FF         MOV EAX,dword ptr [EBP + 0xffffff74]
004FFC0A  68 9C 24 7C 00            PUSH 0x7c249c
004FFC0F  68 CC 4C 7A 00            PUSH 0x7a4ccc
004FFC14  56                        PUSH ESI
004FFC15  6A 00                     PUSH 0x0
004FFC17  68 67 01 00 00            PUSH 0x167
004FFC1C  68 CC 23 7C 00            PUSH 0x7c23cc
004FFC21  A3 F8 8D 85 00            MOV [0x00858df8],EAX
004FFC26  E8 A5 D8 1A 00            CALL 0x006ad4d0
004FFC2B  83 C4 18                  ADD ESP,0x18
004FFC2E  85 C0                     TEST EAX,EAX
004FFC30  74 01                     JZ 0x004ffc33
004FFC32  CC                        INT3
LAB_004ffc33:
004FFC33  68 67 01 00 00            PUSH 0x167
004FFC38  68 CC 23 7C 00            PUSH 0x7c23cc
004FFC3D  6A 00                     PUSH 0x0
004FFC3F  56                        PUSH ESI
004FFC40  E8 FB 61 1A 00            CALL 0x006a5e40
004FFC45  5F                        POP EDI
004FFC46  5E                        POP ESI
004FFC47  5B                        POP EBX
004FFC48  8B E5                     MOV ESP,EBP
004FFC4A  5D                        POP EBP
004FFC4B  C3                        RET
