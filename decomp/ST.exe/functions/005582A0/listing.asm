VisibleClassTy::PrepareToSave:
005582A0  55                        PUSH EBP
005582A1  8B EC                     MOV EBP,ESP
005582A3  83 EC 64                  SUB ESP,0x64
005582A6  A1 F8 8D 85 00            MOV EAX,[0x00858df8]
005582AB  53                        PUSH EBX
005582AC  56                        PUSH ESI
005582AD  57                        PUSH EDI
005582AE  89 4D E0                  MOV dword ptr [EBP + -0x20],ECX
005582B1  33 FF                     XOR EDI,EDI
005582B3  8D 55 A0                  LEA EDX,[EBP + -0x60]
005582B6  8D 4D 9C                  LEA ECX,[EBP + -0x64]
005582B9  57                        PUSH EDI
005582BA  52                        PUSH EDX
005582BB  89 7D FC                  MOV dword ptr [EBP + -0x4],EDI
005582BE  89 7D F8                  MOV dword ptr [EBP + -0x8],EDI
005582C1  89 7D F4                  MOV dword ptr [EBP + -0xc],EDI
005582C4  89 7D F0                  MOV dword ptr [EBP + -0x10],EDI
005582C7  89 7D EC                  MOV dword ptr [EBP + -0x14],EDI
005582CA  89 45 9C                  MOV dword ptr [EBP + -0x64],EAX
005582CD  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
005582D3  E8 18 55 1D 00            CALL 0x0072d7f0
005582D8  8B F0                     MOV ESI,EAX
005582DA  83 C4 08                  ADD ESP,0x8
005582DD  3B F7                     CMP ESI,EDI
005582DF  0F 85 DD 01 00 00         JNZ 0x005584c2
005582E5  8B 5D E0                  MOV EBX,dword ptr [EBP + -0x20]
005582E8  39 BB 14 01 00 00         CMP dword ptr [EBX + 0x114],EDI
005582EE  74 3C                     JZ 0x0055832c
005582F0  8B 8B F4 00 00 00         MOV ECX,dword ptr [EBX + 0xf4]
005582F6  8D 45 F4                  LEA EAX,[EBP + -0xc]
005582F9  50                        PUSH EAX
005582FA  51                        PUSH ECX
005582FB  E8 20 7D 15 00            CALL 0x006b0020
00558300  89 45 F8                  MOV dword ptr [EBP + -0x8],EAX
00558303  8B 83 10 01 00 00         MOV EAX,dword ptr [EBX + 0x110]
00558309  8D 55 EC                  LEA EDX,[EBP + -0x14]
0055830C  52                        PUSH EDX
0055830D  50                        PUSH EAX
0055830E  E8 0D 7D 15 00            CALL 0x006b0020
00558313  89 45 F0                  MOV dword ptr [EBP + -0x10],EAX
00558316  8B 83 14 01 00 00         MOV EAX,dword ptr [EBX + 0x114]
0055831C  3B C7                     CMP EAX,EDI
0055831E  74 0C                     JZ 0x0055832c
00558320  8B 43 2C                  MOV EAX,dword ptr [EBX + 0x2c]
00558323  0F AF 43 28               IMUL EAX,dword ptr [EBX + 0x28]
00558327  C1 E0 02                  SHL EAX,0x2
0055832A  EB 02                     JMP 0x0055832e
LAB_0055832c:
0055832C  33 C0                     XOR EAX,EAX
LAB_0055832e:
0055832E  8B 4D EC                  MOV ECX,dword ptr [EBP + -0x14]
00558331  8B 55 F4                  MOV EDX,dword ptr [EBP + -0xc]
00558334  03 C1                     ADD EAX,ECX
00558336  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
00558339  8D 84 10 81 00 00 00      LEA EAX,[EAX + EDX*0x1 + 0x81]
00558340  50                        PUSH EAX
00558341  89 01                     MOV dword ptr [ECX],EAX
00558343  E8 C8 28 15 00            CALL 0x006aac10
00558348  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
0055834B  C7 00 50 00 00 00         MOV dword ptr [EAX],0x50
00558351  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
00558354  C7 42 04 FF 00 00 00      MOV dword ptr [EDX + 0x4],0xff
0055835B  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
0055835E  C7 40 08 02 00 00 00      MOV dword ptr [EAX + 0x8],0x2
00558365  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
00558368  C7 41 14 01 00 00 00      MOV dword ptr [ECX + 0x14],0x1
0055836F  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
00558372  8B 53 20                  MOV EDX,dword ptr [EBX + 0x20]
00558375  89 50 18                  MOV dword ptr [EAX + 0x18],EDX
00558378  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
0055837B  8B 4B 24                  MOV ECX,dword ptr [EBX + 0x24]
0055837E  89 4A 1C                  MOV dword ptr [EDX + 0x1c],ECX
00558381  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
00558384  8B 43 28                  MOV EAX,dword ptr [EBX + 0x28]
00558387  89 41 20                  MOV dword ptr [ECX + 0x20],EAX
0055838A  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
0055838D  8B 53 2C                  MOV EDX,dword ptr [EBX + 0x2c]
00558390  89 50 24                  MOV dword ptr [EAX + 0x24],EDX
00558393  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
00558396  8B 4B 30                  MOV ECX,dword ptr [EBX + 0x30]
00558399  89 4A 28                  MOV dword ptr [EDX + 0x28],ECX
0055839C  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
0055839F  8B 43 34                  MOV EAX,dword ptr [EBX + 0x34]
005583A2  89 41 2C                  MOV dword ptr [ECX + 0x2c],EAX
005583A5  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
005583A8  8B 53 1C                  MOV EDX,dword ptr [EBX + 0x1c]
005583AB  89 50 30                  MOV dword ptr [EAX + 0x30],EDX
005583AE  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
005583B1  8B 8B 14 01 00 00         MOV ECX,dword ptr [EBX + 0x114]
005583B7  89 4A 40                  MOV dword ptr [EDX + 0x40],ECX
005583BA  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
005583BD  8B 83 F8 00 00 00         MOV EAX,dword ptr [EBX + 0xf8]
005583C3  33 D2                     XOR EDX,EDX
005583C5  89 41 44                  MOV dword ptr [ECX + 0x44],EAX
005583C8  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
005583CB  8A 15 4D 87 80 00         MOV DL,byte ptr [0x0080874d]
005583D1  89 50 34                  MOV dword ptr [EAX + 0x34],EDX
005583D4  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
005583D7  8B 55 F4                  MOV EDX,dword ptr [EBP + -0xc]
005583DA  89 51 38                  MOV dword ptr [ECX + 0x38],EDX
005583DD  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
005583E0  8B 4D EC                  MOV ECX,dword ptr [EBP + -0x14]
005583E3  8D 93 FC 00 00 00         LEA EDX,[EBX + 0xfc]
005583E9  89 48 3C                  MOV dword ptr [EAX + 0x3c],ECX
005583EC  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
005583EF  8B 0A                     MOV ECX,dword ptr [EDX]
005583F1  83 C0 48                  ADD EAX,0x48
005583F4  89 08                     MOV dword ptr [EAX],ECX
005583F6  8B 52 04                  MOV EDX,dword ptr [EDX + 0x4]
005583F9  89 50 04                  MOV dword ptr [EAX + 0x4],EDX
005583FC  8B 83 14 01 00 00         MOV EAX,dword ptr [EBX + 0x114]
00558402  3B C7                     CMP EAX,EDI
00558404  0F 84 A3 00 00 00         JZ 0x005584ad
0055840A  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
0055840D  8D 4B 3C                  LEA ECX,[EBX + 0x3c]
00558410  05 80 00 00 00            ADD EAX,0x80
00558415  89 4D E8                  MOV dword ptr [EBP + -0x18],ECX
00558418  C7 45 E4 04 00 00 00      MOV dword ptr [EBP + -0x1c],0x4
LAB_0055841f:
0055841F  8B 55 E8                  MOV EDX,dword ptr [EBP + -0x18]
00558422  8B 32                     MOV ESI,dword ptr [EDX]
00558424  3B F7                     CMP ESI,EDI
00558426  74 22                     JZ 0x0055844a
00558428  8B 4B 28                  MOV ECX,dword ptr [EBX + 0x28]
0055842B  8B F8                     MOV EDI,EAX
0055842D  0F AF 4B 2C               IMUL ECX,dword ptr [EBX + 0x2c]
00558431  8B D1                     MOV EDX,ECX
00558433  C1 E9 02                  SHR ECX,0x2
00558436  F3 A5                     MOVSD.REP ES:EDI,ESI
00558438  8B CA                     MOV ECX,EDX
0055843A  83 E1 03                  AND ECX,0x3
0055843D  F3 A4                     MOVSB.REP ES:EDI,ESI
0055843F  8B 4B 28                  MOV ECX,dword ptr [EBX + 0x28]
00558442  0F AF 4B 2C               IMUL ECX,dword ptr [EBX + 0x2c]
00558446  03 C1                     ADD EAX,ECX
00558448  33 FF                     XOR EDI,EDI
LAB_0055844a:
0055844A  8B 55 E8                  MOV EDX,dword ptr [EBP + -0x18]
0055844D  8B 4D E4                  MOV ECX,dword ptr [EBP + -0x1c]
00558450  83 C2 04                  ADD EDX,0x4
00558453  49                        DEC ECX
00558454  89 55 E8                  MOV dword ptr [EBP + -0x18],EDX
00558457  89 4D E4                  MOV dword ptr [EBP + -0x1c],ECX
0055845A  75 C3                     JNZ 0x0055841f
0055845C  8B 75 F8                  MOV ESI,dword ptr [EBP + -0x8]
0055845F  3B F7                     CMP ESI,EDI
00558461  74 27                     JZ 0x0055848a
00558463  8B 4D F4                  MOV ECX,dword ptr [EBP + -0xc]
00558466  8B F8                     MOV EDI,EAX
00558468  8B D1                     MOV EDX,ECX
0055846A  C1 E9 02                  SHR ECX,0x2
0055846D  F3 A5                     MOVSD.REP ES:EDI,ESI
0055846F  8B CA                     MOV ECX,EDX
00558471  83 E1 03                  AND ECX,0x3
00558474  F3 A4                     MOVSB.REP ES:EDI,ESI
00558476  03 45 F4                  ADD EAX,dword ptr [EBP + -0xc]
00558479  89 45 E4                  MOV dword ptr [EBP + -0x1c],EAX
0055847C  8D 45 F8                  LEA EAX,[EBP + -0x8]
0055847F  50                        PUSH EAX
00558480  E8 DB 2B 15 00            CALL 0x006ab060
00558485  8B 45 E4                  MOV EAX,dword ptr [EBP + -0x1c]
00558488  33 FF                     XOR EDI,EDI
LAB_0055848a:
0055848A  8B 75 F0                  MOV ESI,dword ptr [EBP + -0x10]
0055848D  3B F7                     CMP ESI,EDI
0055848F  74 1C                     JZ 0x005584ad
00558491  8B 4D EC                  MOV ECX,dword ptr [EBP + -0x14]
00558494  8B F8                     MOV EDI,EAX
00558496  8B D1                     MOV EDX,ECX
00558498  8D 45 F0                  LEA EAX,[EBP + -0x10]
0055849B  C1 E9 02                  SHR ECX,0x2
0055849E  F3 A5                     MOVSD.REP ES:EDI,ESI
005584A0  8B CA                     MOV ECX,EDX
005584A2  50                        PUSH EAX
005584A3  83 E1 03                  AND ECX,0x3
005584A6  F3 A4                     MOVSB.REP ES:EDI,ESI
005584A8  E8 B3 2B 15 00            CALL 0x006ab060
LAB_005584ad:
005584AD  8B 4D 9C                  MOV ECX,dword ptr [EBP + -0x64]
005584B0  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
005584B3  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
005584B9  5F                        POP EDI
005584BA  5E                        POP ESI
005584BB  5B                        POP EBX
005584BC  8B E5                     MOV ESP,EBP
005584BE  5D                        POP EBP
005584BF  C2 04 00                  RET 0x4
LAB_005584c2:
005584C2  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
005584C5  8B 55 9C                  MOV EDX,dword ptr [EBP + -0x64]
005584C8  3B C7                     CMP EAX,EDI
005584CA  89 15 F8 8D 85 00         MOV dword ptr [0x00858df8],EDX
005584D0  74 09                     JZ 0x005584db
005584D2  8D 45 F8                  LEA EAX,[EBP + -0x8]
005584D5  50                        PUSH EAX
005584D6  E8 85 2B 15 00            CALL 0x006ab060
LAB_005584db:
005584DB  39 7D F0                  CMP dword ptr [EBP + -0x10],EDI
005584DE  74 09                     JZ 0x005584e9
005584E0  8D 4D F0                  LEA ECX,[EBP + -0x10]
005584E3  51                        PUSH ECX
005584E4  E8 77 2B 15 00            CALL 0x006ab060
LAB_005584e9:
005584E9  39 7D FC                  CMP dword ptr [EBP + -0x4],EDI
005584EC  74 09                     JZ 0x005584f7
005584EE  8D 55 FC                  LEA EDX,[EBP + -0x4]
005584F1  52                        PUSH EDX
005584F2  E8 69 2B 15 00            CALL 0x006ab060
LAB_005584f7:
005584F7  68 2C 93 7C 00            PUSH 0x7c932c
005584FC  68 CC 4C 7A 00            PUSH 0x7a4ccc
00558501  56                        PUSH ESI
00558502  57                        PUSH EDI
00558503  68 05 01 00 00            PUSH 0x105
00558508  68 CC 92 7C 00            PUSH 0x7c92cc
0055850D  E8 BE 4F 15 00            CALL 0x006ad4d0
00558512  83 C4 18                  ADD ESP,0x18
00558515  85 C0                     TEST EAX,EAX
00558517  74 01                     JZ 0x0055851a
00558519  CC                        INT3
LAB_0055851a:
0055851A  68 06 01 00 00            PUSH 0x106
0055851F  68 CC 92 7C 00            PUSH 0x7c92cc
00558524  57                        PUSH EDI
00558525  56                        PUSH ESI
00558526  E8 15 D9 14 00            CALL 0x006a5e40
0055852B  5F                        POP EDI
0055852C  5E                        POP ESI
0055852D  33 C0                     XOR EAX,EAX
0055852F  5B                        POP EBX
00558530  8B E5                     MOV ESP,EBP
00558532  5D                        POP EBP
00558533  C2 04 00                  RET 0x4
