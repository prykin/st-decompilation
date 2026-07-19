LoadLand:
0042A290  55                        PUSH EBP
0042A291  8B EC                     MOV EBP,ESP
0042A293  81 EC F0 00 00 00         SUB ESP,0xf0
0042A299  A1 F8 8D 85 00            MOV EAX,[0x00858df8]
0042A29E  53                        PUSH EBX
0042A29F  56                        PUSH ESI
0042A2A0  57                        PUSH EDI
0042A2A1  8D 55 94                  LEA EDX,[EBP + -0x6c]
0042A2A4  8D 4D 90                  LEA ECX,[EBP + -0x70]
0042A2A7  6A 00                     PUSH 0x0
0042A2A9  52                        PUSH EDX
0042A2AA  89 45 90                  MOV dword ptr [EBP + -0x70],EAX
0042A2AD  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
0042A2B3  E8 38 35 30 00            CALL 0x0072d7f0
0042A2B8  8B F0                     MOV ESI,EAX
0042A2BA  83 C4 08                  ADD ESP,0x8
0042A2BD  85 F6                     TEST ESI,ESI
0042A2BF  0F 85 6E 03 00 00         JNZ 0x0042a633
0042A2C5  A1 60 67 80 00            MOV EAX,[0x00806760]
0042A2CA  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
0042A2CD  68 FF 3D 40 00            PUSH 0x403dff
0042A2D2  50                        PUSH EAX
0042A2D3  50                        PUSH EAX
0042A2D4  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
0042A2D7  50                        PUSH EAX
0042A2D8  51                        PUSH ECX
0042A2D9  E8 62 53 2C 00            CALL 0x006ef640
0042A2DE  8B D8                     MOV EBX,EAX
0042A2E0  A1 58 2A 80 00            MOV EAX,[0x00802a58]
0042A2E5  83 C4 14                  ADD ESP,0x14
0042A2E8  89 5D E8                  MOV dword ptr [EBP + -0x18],EBX
0042A2EB  85 C0                     TEST EAX,EAX
0042A2ED  74 7C                     JZ 0x0042a36b
0042A2EF  8B 15 00 4E 7F 00         MOV EDX,dword ptr [0x007f4e00]
0042A2F5  A1 18 76 80 00            MOV EAX,[0x00807618]
0042A2FA  52                        PUSH EDX
0042A2FB  50                        PUSH EAX
0042A2FC  68 85 26 00 00            PUSH 0x2685
0042A301  E8 3A 5E 28 00            CALL 0x006b0140
0042A306  8D 8D 10 FF FF FF         LEA ECX,[EBP + 0xffffff10]
0042A30C  50                        PUSH EAX
0042A30D  51                        PUSH ECX
0042A30E  FF 15 E8 BD 85 00         CALL dword ptr [0x0085bde8]
0042A314  8B 0D 58 2A 80 00         MOV ECX,dword ptr [0x00802a58]
0042A31A  83 C4 0C                  ADD ESP,0xc
0042A31D  8D 95 10 FF FF FF         LEA EDX,[EBP + 0xffffff10]
0042A323  52                        PUSH EDX
0042A324  56                        PUSH ESI
0042A325  6A 02                     PUSH 0x2
0042A327  E8 46 91 FD FF            CALL 0x00403472
0042A32C  A1 58 2A 80 00            MOV EAX,[0x00802a58]
0042A331  85 C0                     TEST EAX,EAX
0042A333  74 36                     JZ 0x0042a36b
0042A335  A1 00 4E 7F 00            MOV EAX,[0x007f4e00]
0042A33A  99                        CDQ
0042A33B  2B C2                     SUB EAX,EDX
0042A33D  D1 F8                     SAR EAX,0x1
0042A33F  50                        PUSH EAX
0042A340  A1 18 76 80 00            MOV EAX,[0x00807618]
0042A345  50                        PUSH EAX
0042A346  68 8C 26 00 00            PUSH 0x268c
0042A34B  E8 F0 5D 28 00            CALL 0x006b0140
0042A350  8B 0D 58 2A 80 00         MOV ECX,dword ptr [0x00802a58]
0042A356  50                        PUSH EAX
0042A357  56                        PUSH ESI
0042A358  E8 2E AA FD FF            CALL 0x00404d8b
0042A35D  8B 0D 58 2A 80 00         MOV ECX,dword ptr [0x00802a58]
0042A363  56                        PUSH ESI
0042A364  56                        PUSH ESI
0042A365  56                        PUSH ESI
0042A366  E8 07 91 FD FF            CALL 0x00403472
LAB_0042a36b:
0042A36B  A1 9C 67 80 00            MOV EAX,[0x0080679c]
0042A370  8D 4B 0E                  LEA ECX,[EBX + 0xe]
0042A373  83 C0 29                  ADD EAX,0x29
0042A376  BE 00 01 00 00            MOV ESI,0x100
LAB_0042a37b:
0042A37B  8A 50 01                  MOV DL,byte ptr [EAX + 0x1]
0042A37E  83 C0 04                  ADD EAX,0x4
0042A381  88 51 FF                  MOV byte ptr [ECX + -0x1],DL
0042A384  8A 50 FC                  MOV DL,byte ptr [EAX + -0x4]
0042A387  88 11                     MOV byte ptr [ECX],DL
0042A389  8A 50 FB                  MOV DL,byte ptr [EAX + -0x5]
0042A38C  88 51 01                  MOV byte ptr [ECX + 0x1],DL
0042A38F  83 C1 04                  ADD ECX,0x4
0042A392  4E                        DEC ESI
0042A393  75 E6                     JNZ 0x0042a37b
0042A395  B0 FF                     MOV AL,0xff
0042A397  68 F2 04 00 00            PUSH 0x4f2
0042A39C  88 83 09 04 00 00         MOV byte ptr [EBX + 0x409],AL
0042A3A2  88 83 0A 04 00 00         MOV byte ptr [EBX + 0x40a],AL
0042A3A8  88 83 0B 04 00 00         MOV byte ptr [EBX + 0x40b],AL
0042A3AE  E8 1D 61 28 00            CALL 0x006b04d0
0042A3B3  85 C0                     TEST EAX,EAX
0042A3B5  74 0E                     JZ 0x0042a3c5
0042A3B7  8B C8                     MOV ECX,EAX
0042A3B9  E8 E2 18 2B 00            CALL 0x006dbca0
0042A3BE  8B F0                     MOV ESI,EAX
0042A3C0  89 75 F4                  MOV dword ptr [EBP + -0xc],ESI
0042A3C3  EB 0A                     JMP 0x0042a3cf
LAB_0042a3c5:
0042A3C5  C7 45 F4 00 00 00 00      MOV dword ptr [EBP + -0xc],0x0
0042A3CC  8B 75 F4                  MOV ESI,dword ptr [EBP + -0xc]
LAB_0042a3cf:
0042A3CF  85 F6                     TEST ESI,ESI
0042A3D1  75 17                     JNZ 0x0042a3ea
0042A3D3  A1 7C D7 7E 00            MOV EAX,[0x007ed77c]
0042A3D8  68 8E 04 00 00            PUSH 0x48e
0042A3DD  68 DC 5F 7A 00            PUSH 0x7a5fdc
0042A3E2  50                        PUSH EAX
0042A3E3  6A FE                     PUSH -0x2
0042A3E5  E8 56 BA 27 00            CALL 0x006a5e40
LAB_0042a3ea:
0042A3EA  68 CC CC 3C 40            PUSH 0x403ccccc
0042A3EF  68 00 00 00 C0            PUSH 0xc0000000
0042A3F4  E8 57 3D 30 00            CALL 0x0072e150
0042A3F9  DC C0                     FADD ST0,ST0
0042A3FB  83 C4 08                  ADD ESP,0x8
0042A3FE  E8 85 3E 30 00            CALL 0x0072e288
0042A403  6A 00                     PUSH 0x0
0042A405  68 97 EE 23 40            PUSH 0x4023ee97
0042A40A  68 40 35 5E 86            PUSH 0x865e3540
0042A40F  68 00 00 24 40            PUSH 0x40240000
0042A414  6A 00                     PUSH 0x0
0042A416  68 00 00 24 40            PUSH 0x40240000
0042A41B  6A 00                     PUSH 0x0
0042A41D  68 00 00 24 C0            PUSH 0xc0240000
0042A422  6A 00                     PUSH 0x0
0042A424  68 00 00 24 40            PUSH 0x40240000
0042A429  6A 00                     PUSH 0x0
0042A42B  8B F8                     MOV EDI,EAX
0042A42D  68 00 00 24 C0            PUSH 0xc0240000
0042A432  6A 00                     PUSH 0x0
0042A434  57                        PUSH EDI
0042A435  57                        PUSH EDI
0042A436  6A 00                     PUSH 0x0
0042A438  6A 00                     PUSH 0x0
0042A43A  6A 00                     PUSH 0x0
0042A43C  8B CE                     MOV ECX,ESI
0042A43E  89 7D D4                  MOV dword ptr [EBP + -0x2c],EDI
0042A441  E8 0A 1C 2B 00            CALL 0x006dc050
0042A446  68 39 34 0C 43            PUSH 0x430c3439
0042A44B  8B CE                     MOV ECX,ESI
0042A44D  C7 86 28 01 00 00 00 00 00 00  MOV dword ptr [ESI + 0x128],0x0
0042A457  E8 34 33 2B 00            CALL 0x006dd790
0042A45C  68 98 EE 5B 43            PUSH 0x435bee98
0042A461  8B CE                     MOV ECX,ESI
0042A463  E8 98 33 2B 00            CALL 0x006dd800
0042A468  68 00 00 24 40            PUSH 0x40240000
0042A46D  6A 00                     PUSH 0x0
0042A46F  68 00 00 24 40            PUSH 0x40240000
0042A474  6A 00                     PUSH 0x0
0042A476  6A 04                     PUSH 0x4
0042A478  8B CE                     MOV ECX,ESI
0042A47A  C7 86 24 01 00 00 05 00 00 00  MOV dword ptr [ESI + 0x124],0x5
0042A484  E8 87 31 2B 00            CALL 0x006dd610
0042A489  6A 64                     PUSH 0x64
0042A48B  6A 08                     PUSH 0x8
0042A48D  6A 64                     PUSH 0x64
0042A48F  6A 00                     PUSH 0x0
0042A491  E8 FA 3D 28 00            CALL 0x006ae290
0042A496  89 45 F8                  MOV dword ptr [EBP + -0x8],EAX
0042A499  8B 83 55 04 00 00         MOV EAX,dword ptr [EBX + 0x455]
0042A49F  85 C0                     TEST EAX,EAX
0042A4A1  C7 45 EC 00 00 00 00      MOV dword ptr [EBP + -0x14],0x0
0042A4A8  0F 8E 33 01 00 00         JLE 0x0042a5e1
0042A4AE  81 C3 59 04 00 00         ADD EBX,0x459
0042A4B4  89 5D F0                  MOV dword ptr [EBP + -0x10],EBX
LAB_0042a4b7:
0042A4B7  8B 1B                     MOV EBX,dword ptr [EBX]
0042A4B9  85 DB                     TEST EBX,EBX
0042A4BB  0F 84 FD 00 00 00         JZ 0x0042a5be
0042A4C1  8B 4D F8                  MOV ECX,dword ptr [EBP + -0x8]
0042A4C4  8B 51 0C                  MOV EDX,dword ptr [ECX + 0xc]
0042A4C7  C7 41 04 00 00 00 00      MOV dword ptr [ECX + 0x4],0x0
0042A4CE  89 55 FC                  MOV dword ptr [EBP + -0x4],EDX
LAB_0042a4d1:
0042A4D1  8B 51 04                  MOV EDX,dword ptr [ECX + 0x4]
0042A4D4  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
0042A4D7  3B D0                     CMP EDX,EAX
0042A4D9  73 0F                     JNC 0x0042a4ea
0042A4DB  8B 41 08                  MOV EAX,dword ptr [ECX + 0x8]
0042A4DE  0F AF C2                  IMUL EAX,EDX
0042A4E1  03 41 1C                  ADD EAX,dword ptr [ECX + 0x1c]
0042A4E4  42                        INC EDX
0042A4E5  89 51 04                  MOV dword ptr [ECX + 0x4],EDX
0042A4E8  EB 02                     JMP 0x0042a4ec
LAB_0042a4ea:
0042A4EA  33 C0                     XOR EAX,EAX
LAB_0042a4ec:
0042A4EC  85 C0                     TEST EAX,EAX
0042A4EE  74 07                     JZ 0x0042a4f7
0042A4F0  8B 53 28                  MOV EDX,dword ptr [EBX + 0x28]
0042A4F3  3B 10                     CMP EDX,dword ptr [EAX]
0042A4F5  75 DA                     JNZ 0x0042a4d1
LAB_0042a4f7:
0042A4F7  33 C9                     XOR ECX,ECX
0042A4F9  3B C1                     CMP EAX,ECX
0042A4FB  0F 85 B7 00 00 00         JNZ 0x0042a5b8
0042A501  0F BF 43 04               MOVSX EAX,word ptr [EBX + 0x4]
0042A505  0F BF 53 06               MOVSX EDX,word ptr [EBX + 0x6]
0042A509  66 89 4B 04               MOV word ptr [EBX + 0x4],CX
0042A50D  66 89 4B 06               MOV word ptr [EBX + 0x6],CX
0042A511  66 0F B6 4B 48            MOVZX CX,byte ptr [EBX + 0x48]
0042A516  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
0042A519  89 55 DC                  MOV dword ptr [EBP + -0x24],EDX
0042A51C  0F BF 43 08               MOVSX EAX,word ptr [EBX + 0x8]
0042A520  66 89 4B 08               MOV word ptr [EBX + 0x8],CX
0042A524  8B 96 40 01 00 00         MOV EDX,dword ptr [ESI + 0x140]
0042A52A  89 13                     MOV dword ptr [EBX],EDX
0042A52C  89 9E 40 01 00 00         MOV dword ptr [ESI + 0x140],EBX
0042A532  8B 96 3C 01 00 00         MOV EDX,dword ptr [ESI + 0x13c]
0042A538  8B CE                     MOV ECX,ESI
0042A53A  42                        INC EDX
0042A53B  89 45 D8                  MOV dword ptr [EBP + -0x28],EAX
0042A53E  89 96 3C 01 00 00         MOV dword ptr [ESI + 0x13c],EDX
0042A544  E8 97 36 2B 00            CALL 0x006ddbe0
0042A549  8B CE                     MOV ECX,ESI
0042A54B  E8 00 38 2B 00            CALL 0x006ddd50
0042A550  0F AF FF                  IMUL EDI,EDI
0042A553  66 8B 4D DC               MOV CX,word ptr [EBP + -0x24]
0042A557  66 8B 55 D8               MOV DX,word ptr [EBP + -0x28]
0042A55B  33 C0                     XOR EAX,EAX
0042A55D  57                        PUSH EDI
0042A55E  89 86 40 01 00 00         MOV dword ptr [ESI + 0x140],EAX
0042A564  89 86 3C 01 00 00         MOV dword ptr [ESI + 0x13c],EAX
0042A56A  66 8B 45 FC               MOV AX,word ptr [EBP + -0x4]
0042A56E  66 89 4B 06               MOV word ptr [EBX + 0x6],CX
0042A572  66 89 43 04               MOV word ptr [EBX + 0x4],AX
0042A576  8B 43 28                  MOV EAX,dword ptr [EBX + 0x28]
0042A579  66 89 53 08               MOV word ptr [EBX + 0x8],DX
0042A57D  89 45 E0                  MOV dword ptr [EBP + -0x20],EAX
0042A580  E8 EB 06 28 00            CALL 0x006aac70
0042A585  8B CF                     MOV ECX,EDI
0042A587  89 45 E4                  MOV dword ptr [EBP + -0x1c],EAX
0042A58A  8B 76 0C                  MOV ESI,dword ptr [ESI + 0xc]
0042A58D  8B D1                     MOV EDX,ECX
0042A58F  8B F8                     MOV EDI,EAX
0042A591  C1 E9 02                  SHR ECX,0x2
0042A594  F3 A5                     MOVSD.REP ES:EDI,ESI
0042A596  8B CA                     MOV ECX,EDX
0042A598  8B 55 F8                  MOV EDX,dword ptr [EBP + -0x8]
0042A59B  83 E1 03                  AND ECX,0x3
0042A59E  F3 A4                     MOVSB.REP ES:EDI,ESI
0042A5A0  8B 45 E4                  MOV EAX,dword ptr [EBP + -0x1c]
0042A5A3  8D 4D E0                  LEA ECX,[EBP + -0x20]
0042A5A6  51                        PUSH ECX
0042A5A7  52                        PUSH EDX
0042A5A8  89 43 40                  MOV dword ptr [EBX + 0x40],EAX
0042A5AB  E8 10 3C 28 00            CALL 0x006ae1c0
0042A5B0  8B 7D D4                  MOV EDI,dword ptr [EBP + -0x2c]
0042A5B3  8B 75 F4                  MOV ESI,dword ptr [EBP + -0xc]
0042A5B6  EB 06                     JMP 0x0042a5be
LAB_0042a5b8:
0042A5B8  8B 40 04                  MOV EAX,dword ptr [EAX + 0x4]
0042A5BB  89 43 40                  MOV dword ptr [EBX + 0x40],EAX
LAB_0042a5be:
0042A5BE  8B 4D E8                  MOV ECX,dword ptr [EBP + -0x18]
0042A5C1  8B 45 EC                  MOV EAX,dword ptr [EBP + -0x14]
0042A5C4  8B 5D F0                  MOV EBX,dword ptr [EBP + -0x10]
0042A5C7  40                        INC EAX
0042A5C8  8B 91 55 04 00 00         MOV EDX,dword ptr [ECX + 0x455]
0042A5CE  83 C3 04                  ADD EBX,0x4
0042A5D1  3B C2                     CMP EAX,EDX
0042A5D3  89 45 EC                  MOV dword ptr [EBP + -0x14],EAX
0042A5D6  89 5D F0                  MOV dword ptr [EBP + -0x10],EBX
0042A5D9  0F 8C D8 FE FF FF         JL 0x0042a4b7
0042A5DF  8B D9                     MOV EBX,ECX
LAB_0042a5e1:
0042A5E1  85 F6                     TEST ESI,ESI
0042A5E3  74 10                     JZ 0x0042a5f5
0042A5E5  8B CE                     MOV ECX,ESI
0042A5E7  E8 04 17 2B 00            CALL 0x006dbcf0
0042A5EC  56                        PUSH ESI
0042A5ED  E8 BE 3C 30 00            CALL 0x0072e2b0
0042A5F2  83 C4 04                  ADD ESP,0x4
LAB_0042a5f5:
0042A5F5  8B 55 F8                  MOV EDX,dword ptr [EBP + -0x8]
0042A5F8  52                        PUSH EDX
0042A5F9  E8 12 3B 28 00            CALL 0x006ae110
0042A5FE  53                        PUSH EBX
0042A5FF  E8 E9 9F FD FF            CALL 0x004045ed
0042A604  53                        PUSH EBX
0042A605  E8 CD 6A FD FF            CALL 0x004010d7
0042A60A  8B 0D 58 2A 80 00         MOV ECX,dword ptr [0x00802a58]
0042A610  83 C4 08                  ADD ESP,0x8
0042A613  85 C9                     TEST ECX,ECX
0042A615  74 0B                     JZ 0x0042a622
0042A617  6A 00                     PUSH 0x0
0042A619  6A 00                     PUSH 0x0
0042A61B  6A 02                     PUSH 0x2
0042A61D  E8 50 8E FD FF            CALL 0x00403472
LAB_0042a622:
0042A622  8B 45 90                  MOV EAX,dword ptr [EBP + -0x70]
0042A625  A3 F8 8D 85 00            MOV [0x00858df8],EAX
0042A62A  8B C3                     MOV EAX,EBX
0042A62C  5F                        POP EDI
0042A62D  5E                        POP ESI
0042A62E  5B                        POP EBX
0042A62F  8B E5                     MOV ESP,EBP
0042A631  5D                        POP EBP
0042A632  C3                        RET
LAB_0042a633:
0042A633  8B 4D 90                  MOV ECX,dword ptr [EBP + -0x70]
0042A636  68 F8 5F 7A 00            PUSH 0x7a5ff8
0042A63B  68 CC 4C 7A 00            PUSH 0x7a4ccc
0042A640  56                        PUSH ESI
0042A641  6A 00                     PUSH 0x0
0042A643  68 02 05 00 00            PUSH 0x502
0042A648  68 DC 5F 7A 00            PUSH 0x7a5fdc
0042A64D  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
0042A653  E8 78 2E 28 00            CALL 0x006ad4d0
0042A658  83 C4 18                  ADD ESP,0x18
0042A65B  85 C0                     TEST EAX,EAX
0042A65D  74 01                     JZ 0x0042a660
0042A65F  CC                        INT3
LAB_0042a660:
0042A660  68 03 05 00 00            PUSH 0x503
0042A665  68 DC 5F 7A 00            PUSH 0x7a5fdc
0042A66A  6A 00                     PUSH 0x0
0042A66C  56                        PUSH ESI
0042A66D  E8 CE B7 27 00            CALL 0x006a5e40
0042A672  5F                        POP EDI
0042A673  5E                        POP ESI
0042A674  33 C0                     XOR EAX,EAX
0042A676  5B                        POP EBX
0042A677  8B E5                     MOV ESP,EBP
0042A679  5D                        POP EBP
0042A67A  C3                        RET
