FUN_0056f250:
0056F250  55                        PUSH EBP
0056F251  8B EC                     MOV EBP,ESP
0056F253  81 EC A4 01 00 00         SUB ESP,0x1a4
0056F259  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
0056F25C  53                        PUSH EBX
0056F25D  8B D9                     MOV EBX,ECX
0056F25F  56                        PUSH ESI
0056F260  84 C0                     TEST AL,AL
0056F262  57                        PUSH EDI
0056F263  89 5D F4                  MOV dword ptr [EBP + -0xc],EBX
0056F266  C7 45 FC 16 00 00 88      MOV dword ptr [EBP + -0x4],0x88000016
0056F26D  C6 85 5C FE FF FF 00      MOV byte ptr [EBP + 0xfffffe5c],0x0
0056F274  74 3F                     JZ 0x0056f2b5
0056F276  8B 7D 10                  MOV EDI,dword ptr [EBP + 0x10]
0056F279  85 FF                     TEST EDI,EDI
0056F27B  0F 85 81 00 00 00         JNZ 0x0056f302
0056F281  8B 0D 50 B0 79 00         MOV ECX,dword ptr [0x0079b050]
0056F287  8B 15 2C B0 79 00         MOV EDX,dword ptr [0x0079b02c]
0056F28D  25 FF 00 00 00            AND EAX,0xff
0056F292  50                        PUSH EAX
0056F293  51                        PUSH ECX
0056F294  68 DD 7D 80 00            PUSH 0x807ddd
0056F299  8D 43 60                  LEA EAX,[EBX + 0x60]
0056F29C  52                        PUSH EDX
0056F29D  50                        PUSH EAX
0056F29E  8D 8D 5C FE FF FF         LEA ECX,[EBP + 0xfffffe5c]
0056F2A4  68 F8 A1 7C 00            PUSH 0x7ca1f8
0056F2A9  51                        PUSH ECX
0056F2AA  FF 15 E8 BD 85 00         CALL dword ptr [0x0085bde8]
0056F2B0  83 C4 1C                  ADD ESP,0x1c
0056F2B3  EB 70                     JMP 0x0056f325
LAB_0056f2b5:
0056F2B5  8B 83 78 11 00 00         MOV EAX,dword ptr [EBX + 0x1178]
0056F2BB  85 C0                     TEST EAX,EAX
0056F2BD  74 37                     JZ 0x0056f2f6
0056F2BF  8B 15 44 B0 79 00         MOV EDX,dword ptr [0x0079b044]
0056F2C5  A1 2C B0 79 00            MOV EAX,[0x0079b02c]
0056F2CA  52                        PUSH EDX
0056F2CB  68 DD 7D 80 00            PUSH 0x807ddd
0056F2D0  8D 4B 60                  LEA ECX,[EBX + 0x60]
0056F2D3  50                        PUSH EAX
0056F2D4  51                        PUSH ECX
0056F2D5  8D 95 5C FE FF FF         LEA EDX,[EBP + 0xfffffe5c]
0056F2DB  68 EC A1 7C 00            PUSH 0x7ca1ec
0056F2E0  52                        PUSH EDX
0056F2E1  FF 15 E8 BD 85 00         CALL dword ptr [0x0085bde8]
0056F2E7  83 C4 18                  ADD ESP,0x18
0056F2EA  C7 83 78 11 00 00 00 00 00 00  MOV dword ptr [EBX + 0x1178],0x0
0056F2F4  EB 2F                     JMP 0x0056f325
LAB_0056f2f6:
0056F2F6  80 7D 08 03               CMP byte ptr [EBP + 0x8],0x3
0056F2FA  74 29                     JZ 0x0056f325
0056F2FC  8D BB 02 7A 00 00         LEA EDI,[EBX + 0x7a02]
LAB_0056f302:
0056F302  83 C9 FF                  OR ECX,0xffffffff
0056F305  33 C0                     XOR EAX,EAX
0056F307  F2 AE                     SCASB.REPNE ES:EDI
0056F309  F7 D1                     NOT ECX
0056F30B  2B F9                     SUB EDI,ECX
0056F30D  8D 95 5C FE FF FF         LEA EDX,[EBP + 0xfffffe5c]
0056F313  8B C1                     MOV EAX,ECX
0056F315  8B F7                     MOV ESI,EDI
0056F317  8B FA                     MOV EDI,EDX
0056F319  C1 E9 02                  SHR ECX,0x2
0056F31C  F3 A5                     MOVSD.REP ES:EDI,ESI
0056F31E  8B C8                     MOV ECX,EAX
0056F320  83 E1 03                  AND ECX,0x3
0056F323  F3 A4                     MOVSB.REP ES:EDI,ESI
LAB_0056f325:
0056F325  8A 45 08                  MOV AL,byte ptr [EBP + 0x8]
0056F328  84 C0                     TEST AL,AL
0056F32A  75 0E                     JNZ 0x0056f33a
0056F32C  8A 85 5C FE FF FF         MOV AL,byte ptr [EBP + 0xfffffe5c]
0056F332  84 C0                     TEST AL,AL
0056F334  0F 84 83 04 00 00         JZ 0x0056f7bd
LAB_0056f33a:
0056F33A  33 C0                     XOR EAX,EAX
0056F33C  8A 83 63 11 00 00         MOV AL,byte ptr [EBX + 0x1163]
0056F342  48                        DEC EAX
0056F343  74 16                     JZ 0x0056f35b
0056F345  48                        DEC EAX
0056F346  74 0B                     JZ 0x0056f353
0056F348  48                        DEC EAX
0056F349  75 19                     JNZ 0x0056f364
0056F34B  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
0056F34E  80 CC 05                  OR AH,0x5
0056F351  EB 0E                     JMP 0x0056f361
LAB_0056f353:
0056F353  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
0056F356  80 CC 02                  OR AH,0x2
0056F359  EB 06                     JMP 0x0056f361
LAB_0056f35b:
0056F35B  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
0056F35E  80 CC 01                  OR AH,0x1
LAB_0056f361:
0056F361  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
LAB_0056f364:
0056F364  8B 0D F8 8D 85 00         MOV ECX,dword ptr [0x00858df8]
0056F36A  8D 85 64 FF FF FF         LEA EAX,[EBP + 0xffffff64]
0056F370  8D 95 60 FF FF FF         LEA EDX,[EBP + 0xffffff60]
0056F376  6A 00                     PUSH 0x0
0056F378  50                        PUSH EAX
0056F379  89 8D 60 FF FF FF         MOV dword ptr [EBP + 0xffffff60],ECX
0056F37F  89 15 F8 8D 85 00         MOV dword ptr [0x00858df8],EDX
0056F385  E8 66 E4 1B 00            CALL 0x0072d7f0
0056F38A  83 C4 08                  ADD ESP,0x8
0056F38D  85 C0                     TEST EAX,EAX
0056F38F  0F 85 59 03 00 00         JNZ 0x0056f6ee
0056F395  8A 5D 08                  MOV BL,byte ptr [EBP + 0x8]
0056F398  84 DB                     TEST BL,BL
0056F39A  74 05                     JZ 0x0056f3a1
0056F39C  80 FB 03                  CMP BL,0x3
0056F39F  75 21                     JNZ 0x0056f3c2
LAB_0056f3a1:
0056F3A1  6A 00                     PUSH 0x0
0056F3A3  6A 00                     PUSH 0x0
0056F3A5  8D 8D 5C FE FF FF         LEA ECX,[EBP + 0xfffffe5c]
0056F3AB  6A 01                     PUSH 0x1
0056F3AD  51                        PUSH ECX
0056F3AE  68 45 03 00 00            PUSH 0x345
0056F3B3  E8 08 1B 18 00            CALL 0x006f0ec0
0056F3B8  8B F0                     MOV ESI,EAX
0056F3BA  83 C4 14                  ADD ESP,0x14
0056F3BD  89 75 F0                  MOV dword ptr [EBP + -0x10],ESI
0056F3C0  EB 03                     JMP 0x0056f3c5
LAB_0056f3c2:
0056F3C2  8B 75 F0                  MOV ESI,dword ptr [EBP + -0x10]
LAB_0056f3c5:
0056F3C5  84 DB                     TEST BL,BL
0056F3C7  74 09                     JZ 0x0056f3d2
0056F3C9  80 FB 03                  CMP BL,0x3
0056F3CC  0F 85 FE 02 00 00         JNZ 0x0056f6d0
LAB_0056f3d2:
0056F3D2  8B 15 50 67 80 00         MOV EDX,dword ptr [0x00806750]
0056F3D8  6A 01                     PUSH 0x1
0056F3DA  68 E4 A1 7C 00            PUSH 0x7ca1e4
0056F3DF  56                        PUSH ESI
0056F3E0  52                        PUSH EDX
0056F3E1  E8 CA 09 18 00            CALL 0x006efdb0
0056F3E6  8B 7D F4                  MOV EDI,dword ptr [EBP + -0xc]
0056F3E9  A1 7C B0 79 00            MOV EAX,[0x0079b07c]
0056F3EE  6A 01                     PUSH 0x1
0056F3F0  50                        PUSH EAX
0056F3F1  8B 8F 16 7D 00 00         MOV ECX,dword ptr [EDI + 0x7d16]
0056F3F7  8B 97 12 7D 00 00         MOV EDX,dword ptr [EDI + 0x7d12]
0056F3FD  56                        PUSH ESI
0056F3FE  51                        PUSH ECX
0056F3FF  52                        PUSH EDX
0056F400  E8 AB B9 1A 00            CALL 0x0071adb0
0056F405  8B 0D 38 2A 80 00         MOV ECX,dword ptr [0x00802a38]
0056F40B  83 C4 24                  ADD ESP,0x24
0056F40E  56                        PUSH ESI
0056F40F  E8 35 64 E9 FF            CALL 0x00405849
0056F414  8B 0D 5C B0 79 00         MOV ECX,dword ptr [0x0079b05c]
0056F41A  6A 00                     PUSH 0x0
0056F41C  6A 00                     PUSH 0x0
0056F41E  6A 00                     PUSH 0x0
0056F420  8D 87 34 11 00 00         LEA EAX,[EDI + 0x1134]
0056F426  6A 04                     PUSH 0x4
0056F428  50                        PUSH EAX
0056F429  51                        PUSH ECX
0056F42A  6A 0C                     PUSH 0xc
0056F42C  8B CE                     MOV ECX,ESI
0056F42E  E8 BD 1F 18 00            CALL 0x006f13f0
0056F433  A1 80 B0 79 00            MOV EAX,[0x0079b080]
0056F438  6A 00                     PUSH 0x0
0056F43A  6A 00                     PUSH 0x0
0056F43C  6A 00                     PUSH 0x0
0056F43E  8D 97 96 11 00 00         LEA EDX,[EDI + 0x1196]
0056F444  68 99 19 00 00            PUSH 0x1999
0056F449  52                        PUSH EDX
0056F44A  50                        PUSH EAX
0056F44B  6A 00                     PUSH 0x0
0056F44D  8B CE                     MOV ECX,ESI
0056F44F  E8 9C 1F 18 00            CALL 0x006f13f0
0056F454  8B 0D 70 B0 79 00         MOV ECX,dword ptr [0x0079b070]
0056F45A  6A 00                     PUSH 0x0
0056F45C  6A 00                     PUSH 0x0
0056F45E  6A 00                     PUSH 0x0
0056F460  81 C7 A3 4D 00 00         ADD EDI,0x4da3
0056F466  68 04 01 00 00            PUSH 0x104
0056F46B  57                        PUSH EDI
0056F46C  51                        PUSH ECX
0056F46D  6A 0C                     PUSH 0xc
0056F46F  8B CE                     MOV ECX,ESI
0056F471  E8 7A 1F 18 00            CALL 0x006f13f0
0056F476  8B 15 F8 8D 85 00         MOV EDX,dword ptr [0x00858df8]
0056F47C  8D 4D A8                  LEA ECX,[EBP + -0x58]
0056F47F  8D 45 A4                  LEA EAX,[EBP + -0x5c]
0056F482  6A 00                     PUSH 0x0
0056F484  51                        PUSH ECX
0056F485  89 55 A4                  MOV dword ptr [EBP + -0x5c],EDX
0056F488  A3 F8 8D 85 00            MOV [0x00858df8],EAX
0056F48D  E8 5E E3 1B 00            CALL 0x0072d7f0
0056F492  8B 7D F4                  MOV EDI,dword ptr [EBP + -0xc]
0056F495  8B 75 F0                  MOV ESI,dword ptr [EBP + -0x10]
0056F498  83 C4 08                  ADD ESP,0x8
0056F49B  85 C0                     TEST EAX,EAX
0056F49D  75 27                     JNZ 0x0056f4c6
0056F49F  8B 87 A7 4E 00 00         MOV EAX,dword ptr [EDI + 0x4ea7]
0056F4A5  85 C0                     TEST EAX,EAX
0056F4A7  74 13                     JZ 0x0056f4bc
0056F4A9  8B 15 74 B0 79 00         MOV EDX,dword ptr [0x0079b074]
0056F4AF  6A 01                     PUSH 0x1
0056F4B1  52                        PUSH EDX
0056F4B2  56                        PUSH ESI
0056F4B3  50                        PUSH EAX
0056F4B4  E8 77 B6 1A 00            CALL 0x0071ab30
0056F4B9  83 C4 10                  ADD ESP,0x10
LAB_0056f4bc:
0056F4BC  8B 45 A4                  MOV EAX,dword ptr [EBP + -0x5c]
0056F4BF  A3 F8 8D 85 00            MOV [0x00858df8],EAX
0056F4C4  EB 09                     JMP 0x0056f4cf
LAB_0056f4c6:
0056F4C6  8B 4D A4                  MOV ECX,dword ptr [EBP + -0x5c]
0056F4C9  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
LAB_0056f4cf:
0056F4CF  8B 87 AB 4E 00 00         MOV EAX,dword ptr [EDI + 0x4eab]
0056F4D5  85 C0                     TEST EAX,EAX
0056F4D7  74 13                     JZ 0x0056f4ec
0056F4D9  8B 15 78 B0 79 00         MOV EDX,dword ptr [0x0079b078]
0056F4DF  6A 01                     PUSH 0x1
0056F4E1  52                        PUSH EDX
0056F4E2  56                        PUSH ESI
0056F4E3  50                        PUSH EAX
0056F4E4  E8 47 B6 1A 00            CALL 0x0071ab30
0056F4E9  83 C4 10                  ADD ESP,0x10
LAB_0056f4ec:
0056F4EC  A1 98 75 80 00            MOV EAX,[0x00807598]
0056F4F1  85 C0                     TEST EAX,EAX
0056F4F3  0F 84 8B 00 00 00         JZ 0x0056f584
0056F4F9  A1 9C 67 80 00            MOV EAX,[0x0080679c]
0056F4FE  6A 01                     PUSH 0x1
0056F500  8D 48 28                  LEA ECX,[EAX + 0x28]
0056F503  51                        PUSH ECX
0056F504  50                        PUSH EAX
0056F505  E8 D6 5A 14 00            CALL 0x006b4fe0
0056F50A  50                        PUSH EAX
0056F50B  A1 9C 67 80 00            MOV EAX,[0x0080679c]
0056F510  33 D2                     XOR EDX,EDX
0056F512  66 8B 50 0E               MOV DX,word ptr [EAX + 0xe]
0056F516  52                        PUSH EDX
0056F517  68 8B 00 00 00            PUSH 0x8b
0056F51C  68 8B 00 00 00            PUSH 0x8b
0056F521  E8 9A 5B 14 00            CALL 0x006b50c0
0056F526  85 C0                     TEST EAX,EAX
0056F528  89 45 F8                  MOV dword ptr [EBP + -0x8],EAX
0056F52B  74 57                     JZ 0x0056f584
0056F52D  8B 48 08                  MOV ECX,dword ptr [EAX + 0x8]
0056F530  8B 50 04                  MOV EDX,dword ptr [EAX + 0x4]
0056F533  6A 00                     PUSH 0x0
0056F535  51                        PUSH ECX
0056F536  52                        PUSH EDX
0056F537  6A 00                     PUSH 0x0
0056F539  6A 00                     PUSH 0x0
0056F53B  6A 00                     PUSH 0x0
0056F53D  50                        PUSH EAX
0056F53E  E8 2D 4C 14 00            CALL 0x006b4170
0056F543  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
0056F546  8B 0D 98 75 80 00         MOV ECX,dword ptr [0x00807598]
0056F54C  6A 01                     PUSH 0x1
0056F54E  6A 00                     PUSH 0x0
0056F550  6A 00                     PUSH 0x0
0056F552  50                        PUSH EAX
0056F553  E8 58 7A 17 00            CALL 0x006e6fb0
0056F558  8B 4D F8                  MOV ECX,dword ptr [EBP + -0x8]
0056F55B  6A 00                     PUSH 0x0
0056F55D  6A 00                     PUSH 0x0
0056F55F  6A 00                     PUSH 0x0
0056F561  51                        PUSH ECX
0056F562  E8 E9 5A 14 00            CALL 0x006b5050
0056F567  8B 55 F8                  MOV EDX,dword ptr [EBP + -0x8]
0056F56A  50                        PUSH EAX
0056F56B  A1 84 B0 79 00            MOV EAX,[0x0079b084]
0056F570  52                        PUSH EDX
0056F571  50                        PUSH EAX
0056F572  6A 0C                     PUSH 0xc
0056F574  8B CE                     MOV ECX,ESI
0056F576  E8 75 1E 18 00            CALL 0x006f13f0
0056F57B  8D 4D F8                  LEA ECX,[EBP + -0x8]
0056F57E  51                        PUSH ECX
0056F57F  E8 DC BA 13 00            CALL 0x006ab060
LAB_0056f584:
0056F584  A1 8C B0 79 00            MOV EAX,[0x0079b08c]
0056F589  6A 00                     PUSH 0x0
0056F58B  6A 00                     PUSH 0x0
0056F58D  6A 00                     PUSH 0x0
0056F58F  8D 97 80 11 00 00         LEA EDX,[EDI + 0x1180]
0056F595  6A 01                     PUSH 0x1
0056F597  52                        PUSH EDX
0056F598  50                        PUSH EAX
0056F599  6A 0C                     PUSH 0xc
0056F59B  8B CE                     MOV ECX,ESI
0056F59D  E8 4E 1E 18 00            CALL 0x006f13f0
0056F5A2  8B 15 88 B0 79 00         MOV EDX,dword ptr [0x0079b088]
0056F5A8  6A 00                     PUSH 0x0
0056F5AA  6A 00                     PUSH 0x0
0056F5AC  6A 00                     PUSH 0x0
0056F5AE  8D 8F FE 78 00 00         LEA ECX,[EDI + 0x78fe]
0056F5B4  68 04 01 00 00            PUSH 0x104
0056F5B9  51                        PUSH ECX
0056F5BA  52                        PUSH EDX
0056F5BB  6A 00                     PUSH 0x0
0056F5BD  8B CE                     MOV ECX,ESI
0056F5BF  E8 2C 1E 18 00            CALL 0x006f13f0
0056F5C4  8B 0D 90 B0 79 00         MOV ECX,dword ptr [0x0079b090]
0056F5CA  6A 00                     PUSH 0x0
0056F5CC  6A 00                     PUSH 0x0
0056F5CE  6A 00                     PUSH 0x0
0056F5D0  8D 87 02 4F 00 00         LEA EAX,[EDI + 0x4f02]
0056F5D6  68 F0 27 00 00            PUSH 0x27f0
0056F5DB  50                        PUSH EAX
0056F5DC  51                        PUSH ECX
0056F5DD  6A 00                     PUSH 0x0
0056F5DF  8B CE                     MOV ECX,ESI
0056F5E1  E8 0A 1E 18 00            CALL 0x006f13f0
0056F5E6  8A 87 2E 11 00 00         MOV AL,byte ptr [EDI + 0x112e]
0056F5EC  8A 8F 2F 11 00 00         MOV CL,byte ptr [EDI + 0x112f]
0056F5F2  8A 97 2D 11 00 00         MOV DL,byte ptr [EDI + 0x112d]
0056F5F8  6A 00                     PUSH 0x0
0056F5FA  88 45 E9                  MOV byte ptr [EBP + -0x17],AL
0056F5FD  6A 00                     PUSH 0x0
0056F5FF  88 4D EA                  MOV byte ptr [EBP + -0x16],CL
0056F602  8B 0D 58 B0 79 00         MOV ECX,dword ptr [0x0079b058]
0056F608  6A 00                     PUSH 0x0
0056F60A  8D 45 E8                  LEA EAX,[EBP + -0x18]
0056F60D  6A 07                     PUSH 0x7
0056F60F  88 55 E8                  MOV byte ptr [EBP + -0x18],DL
0056F612  8B 97 30 11 00 00         MOV EDX,dword ptr [EDI + 0x1130]
0056F618  50                        PUSH EAX
0056F619  51                        PUSH ECX
0056F61A  68 80 00 00 00            PUSH 0x80
0056F61F  8B CE                     MOV ECX,ESI
0056F621  89 55 EB                  MOV dword ptr [EBP + -0x15],EDX
0056F624  E8 C7 1D 18 00            CALL 0x006f13f0
0056F629  A1 60 B0 79 00            MOV EAX,[0x0079b060]
0056F62E  6A 00                     PUSH 0x0
0056F630  6A 00                     PUSH 0x0
0056F632  6A 00                     PUSH 0x0
0056F634  8D 97 2F 2B 00 00         LEA EDX,[EDI + 0x2b2f]
0056F63A  68 74 22 00 00            PUSH 0x2274
0056F63F  52                        PUSH EDX
0056F640  50                        PUSH EAX
0056F641  6A 00                     PUSH 0x0
0056F643  8B CE                     MOV ECX,ESI
0056F645  E8 A6 1D 18 00            CALL 0x006f13f0
0056F64A  8B 15 68 B0 79 00         MOV EDX,dword ptr [0x0079b068]
0056F650  6A 00                     PUSH 0x0
0056F652  6A 00                     PUSH 0x0
0056F654  6A 00                     PUSH 0x0
0056F656  8D 8F AF 4E 00 00         LEA ECX,[EDI + 0x4eaf]
0056F65C  6A 04                     PUSH 0x4
0056F65E  51                        PUSH ECX
0056F65F  52                        PUSH EDX
0056F660  6A 0C                     PUSH 0xc
0056F662  8B CE                     MOV ECX,ESI
0056F664  E8 87 1D 18 00            CALL 0x006f13f0
0056F669  8B 0D 64 B0 79 00         MOV ECX,dword ptr [0x0079b064]
0056F66F  6A 00                     PUSH 0x0
0056F671  6A 00                     PUSH 0x0
0056F673  6A 00                     PUSH 0x0
0056F675  8D 87 B3 4E 00 00         LEA EAX,[EDI + 0x4eb3]
0056F67B  6A 04                     PUSH 0x4
0056F67D  50                        PUSH EAX
0056F67E  51                        PUSH ECX
0056F67F  6A 0C                     PUSH 0xc
0056F681  8B CE                     MOV ECX,ESI
0056F683  E8 68 1D 18 00            CALL 0x006f13f0
0056F688  66 83 BF D7 4E 00 00 01   CMP word ptr [EDI + 0x4ed7],0x1
0056F690  75 1F                     JNZ 0x0056f6b1
0056F692  8B 15 6C B0 79 00         MOV EDX,dword ptr [0x0079b06c]
0056F698  6A 00                     PUSH 0x0
0056F69A  6A 00                     PUSH 0x0
0056F69C  6A 00                     PUSH 0x0
0056F69E  81 C7 B7 4E 00 00         ADD EDI,0x4eb7
0056F6A4  6A 20                     PUSH 0x20
0056F6A6  57                        PUSH EDI
0056F6A7  52                        PUSH EDX
0056F6A8  6A 0C                     PUSH 0xc
0056F6AA  8B CE                     MOV ECX,ESI
0056F6AC  E8 3F 1D 18 00            CALL 0x006f13f0
LAB_0056f6b1:
0056F6B1  8B 0D 54 B0 79 00         MOV ECX,dword ptr [0x0079b054]
0056F6B7  6A 00                     PUSH 0x0
0056F6B9  6A 00                     PUSH 0x0
0056F6BB  6A 00                     PUSH 0x0
0056F6BD  8D 45 FC                  LEA EAX,[EBP + -0x4]
0056F6C0  6A 04                     PUSH 0x4
0056F6C2  50                        PUSH EAX
0056F6C3  51                        PUSH ECX
0056F6C4  68 80 00 00 00            PUSH 0x80
0056F6C9  8B CE                     MOV ECX,ESI
0056F6CB  E8 20 1D 18 00            CALL 0x006f13f0
LAB_0056f6d0:
0056F6D0  56                        PUSH ESI
0056F6D1  E8 9A 1A 18 00            CALL 0x006f1170
0056F6D6  8B 95 60 FF FF FF         MOV EDX,dword ptr [EBP + 0xffffff60]
0056F6DC  83 C4 04                  ADD ESP,0x4
0056F6DF  89 15 F8 8D 85 00         MOV dword ptr [0x00858df8],EDX
0056F6E5  5F                        POP EDI
0056F6E6  5E                        POP ESI
0056F6E7  5B                        POP EBX
0056F6E8  8B E5                     MOV ESP,EBP
0056F6EA  5D                        POP EBP
0056F6EB  C2 0C 00                  RET 0xc
LAB_0056f6ee:
0056F6EE  8B 4D F4                  MOV ECX,dword ptr [EBP + -0xc]
0056F6F1  8B 85 60 FF FF FF         MOV EAX,dword ptr [EBP + 0xffffff60]
0056F6F7  A3 F8 8D 85 00            MOV [0x00858df8],EAX
0056F6FC  8D BD 5C FE FF FF         LEA EDI,[EBP + 0xfffffe5c]
0056F702  8D 99 1A 7D 00 00         LEA EBX,[ECX + 0x7d1a]
0056F708  83 C9 FF                  OR ECX,0xffffffff
0056F70B  33 C0                     XOR EAX,EAX
0056F70D  53                        PUSH EBX
0056F70E  F2 AE                     SCASB.REPNE ES:EDI
0056F710  F7 D1                     NOT ECX
0056F712  2B F9                     SUB EDI,ECX
0056F714  8B D1                     MOV EDX,ECX
0056F716  8B F7                     MOV ESI,EDI
0056F718  8B FB                     MOV EDI,EBX
0056F71A  C1 E9 02                  SHR ECX,0x2
0056F71D  F3 A5                     MOVSD.REP ES:EDI,ESI
0056F71F  8B CA                     MOV ECX,EDX
0056F721  83 E1 03                  AND ECX,0x3
0056F724  F3 A4                     MOVSB.REP ES:EDI,ESI
0056F726  8B 3D 34 B0 79 00         MOV EDI,dword ptr [0x0079b034]
0056F72C  83 C9 FF                  OR ECX,0xffffffff
0056F72F  F2 AE                     SCASB.REPNE ES:EDI
0056F731  F7 D1                     NOT ECX
0056F733  2B F9                     SUB EDI,ECX
0056F735  8B F7                     MOV ESI,EDI
0056F737  8B D1                     MOV EDX,ECX
0056F739  8B FB                     MOV EDI,EBX
0056F73B  83 C9 FF                  OR ECX,0xffffffff
0056F73E  F2 AE                     SCASB.REPNE ES:EDI
0056F740  8B CA                     MOV ECX,EDX
0056F742  4F                        DEC EDI
0056F743  C1 E9 02                  SHR ECX,0x2
0056F746  F3 A5                     MOVSD.REP ES:EDI,ESI
0056F748  8B CA                     MOV ECX,EDX
0056F74A  83 E1 03                  AND ECX,0x3
0056F74D  F3 A4                     MOVSB.REP ES:EDI,ESI
0056F74F  FF 15 E8 BC 85 00         CALL dword ptr [0x0085bce8]
0056F755  8D BD 5C FE FF FF         LEA EDI,[EBP + 0xfffffe5c]
0056F75B  83 C9 FF                  OR ECX,0xffffffff
0056F75E  33 C0                     XOR EAX,EAX
0056F760  53                        PUSH EBX
0056F761  F2 AE                     SCASB.REPNE ES:EDI
0056F763  F7 D1                     NOT ECX
0056F765  2B F9                     SUB EDI,ECX
0056F767  8B C1                     MOV EAX,ECX
0056F769  8B F7                     MOV ESI,EDI
0056F76B  8B FB                     MOV EDI,EBX
0056F76D  C1 E9 02                  SHR ECX,0x2
0056F770  F3 A5                     MOVSD.REP ES:EDI,ESI
0056F772  8B C8                     MOV ECX,EAX
0056F774  33 C0                     XOR EAX,EAX
0056F776  83 E1 03                  AND ECX,0x3
0056F779  F3 A4                     MOVSB.REP ES:EDI,ESI
0056F77B  8B 3D 38 B0 79 00         MOV EDI,dword ptr [0x0079b038]
0056F781  83 C9 FF                  OR ECX,0xffffffff
0056F784  F2 AE                     SCASB.REPNE ES:EDI
0056F786  F7 D1                     NOT ECX
0056F788  2B F9                     SUB EDI,ECX
0056F78A  8B F7                     MOV ESI,EDI
0056F78C  8B D1                     MOV EDX,ECX
0056F78E  8B FB                     MOV EDI,EBX
0056F790  83 C9 FF                  OR ECX,0xffffffff
0056F793  F2 AE                     SCASB.REPNE ES:EDI
0056F795  8B CA                     MOV ECX,EDX
0056F797  4F                        DEC EDI
0056F798  C1 E9 02                  SHR ECX,0x2
0056F79B  F3 A5                     MOVSD.REP ES:EDI,ESI
0056F79D  8B CA                     MOV ECX,EDX
0056F79F  83 E1 03                  AND ECX,0x3
0056F7A2  F3 A4                     MOVSB.REP ES:EDI,ESI
0056F7A4  FF 15 E8 BC 85 00         CALL dword ptr [0x0085bce8]
0056F7AA  8B 0D DC 16 80 00         MOV ECX,dword ptr [0x008016dc]
0056F7B0  85 C9                     TEST ECX,ECX
0056F7B2  74 09                     JZ 0x0056f7bd
0056F7B4  6A 00                     PUSH 0x0
0056F7B6  6A 0C                     PUSH 0xc
0056F7B8  E8 3A 67 E9 FF            CALL 0x00405ef7
LAB_0056f7bd:
0056F7BD  5F                        POP EDI
0056F7BE  5E                        POP ESI
0056F7BF  5B                        POP EBX
0056F7C0  8B E5                     MOV ESP,EBP
0056F7C2  5D                        POP EBP
0056F7C3  C2 0C 00                  RET 0xc
