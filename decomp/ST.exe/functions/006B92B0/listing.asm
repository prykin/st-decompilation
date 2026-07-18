FUN_006b92b0:
006B92B0  55                        PUSH EBP
006B92B1  8B EC                     MOV EBP,ESP
006B92B3  83 EC 40                  SUB ESP,0x40
006B92B6  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
006B92B9  53                        PUSH EBX
006B92BA  56                        PUSH ESI
006B92BB  8B 01                     MOV EAX,dword ptr [ECX]
006B92BD  F7 40 08 00 00 00 03      TEST dword ptr [EAX + 0x8],0x3000000
006B92C4  0F 85 FF 01 00 00         JNZ 0x006b94c9
006B92CA  8B 75 0C                  MOV ESI,dword ptr [EBP + 0xc]
006B92CD  83 C1 10                  ADD ECX,0x10
006B92D0  57                        PUSH EDI
006B92D1  8B 01                     MOV EAX,dword ptr [ECX]
006B92D3  89 45 F0                  MOV dword ptr [EBP + -0x10],EAX
006B92D6  8B 51 04                  MOV EDX,dword ptr [ECX + 0x4]
006B92D9  89 55 F4                  MOV dword ptr [EBP + -0xc],EDX
006B92DC  8B D6                     MOV EDX,ESI
006B92DE  8B 41 08                  MOV EAX,dword ptr [ECX + 0x8]
006B92E1  89 45 F8                  MOV dword ptr [EBP + -0x8],EAX
006B92E4  8B 02                     MOV EAX,dword ptr [EDX]
006B92E6  8B 49 0C                  MOV ECX,dword ptr [ECX + 0xc]
006B92E9  89 45 E0                  MOV dword ptr [EBP + -0x20],EAX
006B92EC  89 4D FC                  MOV dword ptr [EBP + -0x4],ECX
006B92EF  8B 4A 04                  MOV ECX,dword ptr [EDX + 0x4]
006B92F2  89 4D E4                  MOV dword ptr [EBP + -0x1c],ECX
006B92F5  8B CE                     MOV ECX,ESI
006B92F7  8B 42 08                  MOV EAX,dword ptr [EDX + 0x8]
006B92FA  89 45 E8                  MOV dword ptr [EBP + -0x18],EAX
006B92FD  8B 5A 0C                  MOV EBX,dword ptr [EDX + 0xc]
006B9300  8B 11                     MOV EDX,dword ptr [ECX]
006B9302  89 55 C0                  MOV dword ptr [EBP + -0x40],EDX
006B9305  8D 55 F0                  LEA EDX,[EBP + -0x10]
006B9308  8B 41 04                  MOV EAX,dword ptr [ECX + 0x4]
006B930B  52                        PUSH EDX
006B930C  8B D6                     MOV EDX,ESI
006B930E  89 5D EC                  MOV dword ptr [EBP + -0x14],EBX
006B9311  8B 79 08                  MOV EDI,dword ptr [ECX + 0x8]
006B9314  89 45 C4                  MOV dword ptr [EBP + -0x3c],EAX
006B9317  89 7D C8                  MOV dword ptr [EBP + -0x38],EDI
006B931A  8B 49 0C                  MOV ECX,dword ptr [ECX + 0xc]
006B931D  89 4D CC                  MOV dword ptr [EBP + -0x34],ECX
006B9320  8D 4D D0                  LEA ECX,[EBP + -0x30]
006B9323  E8 38 71 FF FF            CALL 0x006b0460
006B9328  85 C0                     TEST EAX,EAX
006B932A  0F 84 28 01 00 00         JZ 0x006b9458
006B9330  8B 4E 08                  MOV ECX,dword ptr [ESI + 0x8]
006B9333  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
006B9336  8B 5D D8                  MOV EBX,dword ptr [EBP + -0x28]
006B9339  8B 55 D0                  MOV EDX,dword ptr [EBP + -0x30]
006B933C  33 FF                     XOR EDI,EDI
006B933E  3B C1                     CMP EAX,ECX
006B9340  7D 10                     JGE 0x006b9352
006B9342  3B 55 F0                  CMP EDX,dword ptr [EBP + -0x10]
006B9345  75 1E                     JNZ 0x006b9365
006B9347  3B D8                     CMP EBX,EAX
006B9349  75 1A                     JNZ 0x006b9365
006B934B  BF 01 00 00 00            MOV EDI,0x1
006B9350  EB 15                     JMP 0x006b9367
LAB_006b9352:
006B9352  3B C1                     CMP EAX,ECX
006B9354  7E 11                     JLE 0x006b9367
006B9356  3B 16                     CMP EDX,dword ptr [ESI]
006B9358  75 0B                     JNZ 0x006b9365
006B935A  3B D9                     CMP EBX,ECX
006B935C  75 07                     JNZ 0x006b9365
006B935E  BF 01 00 00 00            MOV EDI,0x1
006B9363  EB 02                     JMP 0x006b9367
LAB_006b9365:
006B9365  33 FF                     XOR EDI,EDI
LAB_006b9367:
006B9367  8B 46 0C                  MOV EAX,dword ptr [ESI + 0xc]
006B936A  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
006B936D  8B 5D D4                  MOV EBX,dword ptr [EBP + -0x2c]
006B9370  3B D0                     CMP EDX,EAX
006B9372  8B 55 DC                  MOV EDX,dword ptr [EBP + -0x24]
006B9375  89 45 0C                  MOV dword ptr [EBP + 0xc],EAX
006B9378  7D 11                     JGE 0x006b938b
006B937A  3B 5D F4                  CMP EBX,dword ptr [EBP + -0xc]
006B937D  75 26                     JNZ 0x006b93a5
006B937F  3B 55 FC                  CMP EDX,dword ptr [EBP + -0x4]
006B9382  75 21                     JNZ 0x006b93a5
006B9384  B8 01 00 00 00            MOV EAX,0x1
006B9389  EB 1C                     JMP 0x006b93a7
LAB_006b938b:
006B938B  8B 5D FC                  MOV EBX,dword ptr [EBP + -0x4]
006B938E  3B D8                     CMP EBX,EAX
006B9390  8B 5D D4                  MOV EBX,dword ptr [EBP + -0x2c]
006B9393  7E 14                     JLE 0x006b93a9
006B9395  3B 5E 04                  CMP EBX,dword ptr [ESI + 0x4]
006B9398  75 0B                     JNZ 0x006b93a5
006B939A  3B D0                     CMP EDX,EAX
006B939C  75 07                     JNZ 0x006b93a5
006B939E  B8 01 00 00 00            MOV EAX,0x1
006B93A3  EB 02                     JMP 0x006b93a7
LAB_006b93a5:
006B93A5  33 C0                     XOR EAX,EAX
LAB_006b93a7:
006B93A7  0B F8                     OR EDI,EAX
LAB_006b93a9:
006B93A9  85 FF                     TEST EDI,EDI
006B93AB  74 4D                     JZ 0x006b93fa
006B93AD  8B 16                     MOV EDX,dword ptr [ESI]
006B93AF  8B 45 F0                  MOV EAX,dword ptr [EBP + -0x10]
006B93B2  3B D0                     CMP EDX,EAX
006B93B4  7D 05                     JGE 0x006b93bb
006B93B6  89 55 F0                  MOV dword ptr [EBP + -0x10],EDX
006B93B9  8B C2                     MOV EAX,EDX
LAB_006b93bb:
006B93BB  03 D1                     ADD EDX,ECX
006B93BD  8B 4D F8                  MOV ECX,dword ptr [EBP + -0x8]
006B93C0  03 C8                     ADD ECX,EAX
006B93C2  3B D1                     CMP EDX,ECX
006B93C4  7E 02                     JLE 0x006b93c8
006B93C6  8B CA                     MOV ECX,EDX
LAB_006b93c8:
006B93C8  8B 76 04                  MOV ESI,dword ptr [ESI + 0x4]
006B93CB  2B C8                     SUB ECX,EAX
006B93CD  89 4D F8                  MOV dword ptr [EBP + -0x8],ECX
006B93D0  8B 4D F4                  MOV ECX,dword ptr [EBP + -0xc]
006B93D3  3B F1                     CMP ESI,ECX
006B93D5  7D 05                     JGE 0x006b93dc
006B93D7  89 75 F4                  MOV dword ptr [EBP + -0xc],ESI
006B93DA  8B CE                     MOV ECX,ESI
LAB_006b93dc:
006B93DC  8B 55 0C                  MOV EDX,dword ptr [EBP + 0xc]
006B93DF  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
006B93E2  03 D6                     ADD EDX,ESI
006B93E4  03 C1                     ADD EAX,ECX
006B93E6  3B D0                     CMP EDX,EAX
006B93E8  7E 02                     JLE 0x006b93ec
006B93EA  8B C2                     MOV EAX,EDX
LAB_006b93ec:
006B93EC  8B 5D EC                  MOV EBX,dword ptr [EBP + -0x14]
006B93EF  2B C1                     SUB EAX,ECX
006B93F1  33 FF                     XOR EDI,EDI
006B93F3  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
006B93F6  33 F6                     XOR ESI,ESI
006B93F8  EB 60                     JMP 0x006b945a
LAB_006b93fa:
006B93FA  8B 46 04                  MOV EAX,dword ptr [ESI + 0x4]
006B93FD  8B 4D D0                  MOV ECX,dword ptr [EBP + -0x30]
006B9400  3B D8                     CMP EBX,EAX
006B9402  8B 06                     MOV EAX,dword ptr [ESI]
006B9404  75 29                     JNZ 0x006b942f
006B9406  3B C8                     CMP ECX,EAX
006B9408  75 0B                     JNZ 0x006b9415
006B940A  8B 45 D8                  MOV EAX,dword ptr [EBP + -0x28]
006B940D  8B 4D C0                  MOV ECX,dword ptr [EBP + -0x40]
006B9410  03 C8                     ADD ECX,EAX
006B9412  89 4D C0                  MOV dword ptr [EBP + -0x40],ECX
LAB_006b9415:
006B9415  8B 4D E4                  MOV ECX,dword ptr [EBP + -0x1c]
006B9418  8B 7D C8                  MOV EDI,dword ptr [EBP + -0x38]
006B941B  8B 75 D8                  MOV ESI,dword ptr [EBP + -0x28]
006B941E  8B 5D EC                  MOV EBX,dword ptr [EBP + -0x14]
006B9421  03 CA                     ADD ECX,EDX
006B9423  2B FE                     SUB EDI,ESI
006B9425  8B 75 E8                  MOV ESI,dword ptr [EBP + -0x18]
006B9428  89 4D E4                  MOV dword ptr [EBP + -0x1c],ECX
006B942B  2B DA                     SUB EBX,EDX
006B942D  EB 2B                     JMP 0x006b945a
LAB_006b942f:
006B942F  3B C8                     CMP ECX,EAX
006B9431  75 0B                     JNZ 0x006b943e
006B9433  8B 45 D8                  MOV EAX,dword ptr [EBP + -0x28]
006B9436  8B 4D E0                  MOV ECX,dword ptr [EBP + -0x20]
006B9439  03 C8                     ADD ECX,EAX
006B943B  89 4D E0                  MOV dword ptr [EBP + -0x20],ECX
LAB_006b943e:
006B943E  8B 75 E8                  MOV ESI,dword ptr [EBP + -0x18]
006B9441  8B 4D D8                  MOV ECX,dword ptr [EBP + -0x28]
006B9444  8B 45 CC                  MOV EAX,dword ptr [EBP + -0x34]
006B9447  8B 7D C8                  MOV EDI,dword ptr [EBP + -0x38]
006B944A  2B F1                     SUB ESI,ECX
006B944C  2B C2                     SUB EAX,EDX
006B944E  89 5D E4                  MOV dword ptr [EBP + -0x1c],EBX
006B9451  8B DA                     MOV EBX,EDX
006B9453  89 45 CC                  MOV dword ptr [EBP + -0x34],EAX
006B9456  EB 02                     JMP 0x006b945a
LAB_006b9458:
006B9458  33 F6                     XOR ESI,ESI
LAB_006b945a:
006B945A  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
006B945D  8B 55 F8                  MOV EDX,dword ptr [EBP + -0x8]
006B9460  8B 45 F4                  MOV EAX,dword ptr [EBP + -0xc]
006B9463  51                        PUSH ECX
006B9464  8B 4D F0                  MOV ECX,dword ptr [EBP + -0x10]
006B9467  52                        PUSH EDX
006B9468  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
006B946B  50                        PUSH EAX
006B946C  51                        PUSH ECX
006B946D  6A 00                     PUSH 0x0
006B946F  8B 02                     MOV EAX,dword ptr [EDX]
006B9471  6A 00                     PUSH 0x0
006B9473  50                        PUSH EAX
006B9474  E8 E7 17 00 00            CALL 0x006bac60
006B9479  85 FF                     TEST EDI,EDI
006B947B  74 20                     JZ 0x006b949d
006B947D  8B 45 CC                  MOV EAX,dword ptr [EBP + -0x34]
006B9480  85 C0                     TEST EAX,EAX
006B9482  74 19                     JZ 0x006b949d
006B9484  8B 4D C4                  MOV ECX,dword ptr [EBP + -0x3c]
006B9487  8B 55 C0                  MOV EDX,dword ptr [EBP + -0x40]
006B948A  50                        PUSH EAX
006B948B  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
006B948E  57                        PUSH EDI
006B948F  51                        PUSH ECX
006B9490  8B 08                     MOV ECX,dword ptr [EAX]
006B9492  52                        PUSH EDX
006B9493  6A 00                     PUSH 0x0
006B9495  6A 00                     PUSH 0x0
006B9497  51                        PUSH ECX
006B9498  E8 C3 17 00 00            CALL 0x006bac60
LAB_006b949d:
006B949D  85 F6                     TEST ESI,ESI
006B949F  5F                        POP EDI
006B94A0  74 31                     JZ 0x006b94d3
006B94A2  85 DB                     TEST EBX,EBX
006B94A4  74 2D                     JZ 0x006b94d3
006B94A6  8B 55 E4                  MOV EDX,dword ptr [EBP + -0x1c]
006B94A9  8B 45 E0                  MOV EAX,dword ptr [EBP + -0x20]
006B94AC  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
006B94AF  53                        PUSH EBX
006B94B0  56                        PUSH ESI
006B94B1  52                        PUSH EDX
006B94B2  8B 11                     MOV EDX,dword ptr [ECX]
006B94B4  50                        PUSH EAX
006B94B5  6A 00                     PUSH 0x0
006B94B7  6A 00                     PUSH 0x0
006B94B9  52                        PUSH EDX
006B94BA  E8 A1 17 00 00            CALL 0x006bac60
006B94BF  5E                        POP ESI
006B94C0  33 C0                     XOR EAX,EAX
006B94C2  5B                        POP EBX
006B94C3  8B E5                     MOV ESP,EBP
006B94C5  5D                        POP EBP
006B94C6  C2 08 00                  RET 0x8
LAB_006b94c9:
006B94C9  6A 00                     PUSH 0x0
006B94CB  6A 00                     PUSH 0x0
006B94CD  50                        PUSH EAX
006B94CE  E8 9D 1E 00 00            CALL 0x006bb370
LAB_006b94d3:
006B94D3  5E                        POP ESI
006B94D4  33 C0                     XOR EAX,EAX
006B94D6  5B                        POP EBX
006B94D7  8B E5                     MOV ESP,EBP
006B94D9  5D                        POP EBP
006B94DA  C2 08 00                  RET 0x8
