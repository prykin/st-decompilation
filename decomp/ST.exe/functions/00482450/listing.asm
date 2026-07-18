FUN_00482450:
00482450  55                        PUSH EBP
00482451  8B EC                     MOV EBP,ESP
00482453  83 EC 7C                  SUB ESP,0x7c
00482456  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
00482459  89 4D E0                  MOV dword ptr [EBP + -0x20],ECX
0048245C  8B 15 F8 8D 85 00         MOV EDX,dword ptr [0x00858df8]
00482462  8B C8                     MOV ECX,EAX
00482464  C1 E9 10                  SHR ECX,0x10
00482467  53                        PUSH EBX
00482468  25 FF FF 00 00            AND EAX,0xffff
0048246D  56                        PUSH ESI
0048246E  89 4D DC                  MOV dword ptr [EBP + -0x24],ECX
00482471  57                        PUSH EDI
00482472  89 45 E8                  MOV dword ptr [EBP + -0x18],EAX
00482475  8D 4D 88                  LEA ECX,[EBP + -0x78]
00482478  8D 45 84                  LEA EAX,[EBP + -0x7c]
0048247B  6A 00                     PUSH 0x0
0048247D  51                        PUSH ECX
0048247E  89 55 84                  MOV dword ptr [EBP + -0x7c],EDX
00482481  A3 F8 8D 85 00            MOV [0x00858df8],EAX
00482486  E8 65 B3 2A 00            CALL 0x0072d7f0
0048248B  8B F0                     MOV ESI,EAX
0048248D  83 C4 08                  ADD ESP,0x8
00482490  85 F6                     TEST ESI,ESI
00482492  0F 85 46 02 00 00         JNZ 0x004826de
00482498  8B 7D E8                  MOV EDI,dword ptr [EBP + -0x18]
0048249B  8B 75 E0                  MOV ESI,dword ptr [EBP + -0x20]
0048249E  85 FF                     TEST EDI,EDI
004824A0  7C 0D                     JL 0x004824af
004824A2  33 D2                     XOR EDX,EDX
004824A4  8A 96 81 02 00 00         MOV DL,byte ptr [ESI + 0x281]
004824AA  4A                        DEC EDX
004824AB  3B FA                     CMP EDI,EDX
004824AD  7E 1A                     JLE 0x004824c9
LAB_004824af:
004824AF  A1 7C D7 7E 00            MOV EAX,[0x007ed77c]
004824B4  68 4F 3D 00 00            PUSH 0x3d4f
004824B9  68 3C 9D 7A 00            PUSH 0x7a9d3c
004824BE  50                        PUSH EAX
004824BF  68 0B 00 FE AF            PUSH 0xaffe000b
004824C4  E8 77 39 22 00            CALL 0x006a5e40
LAB_004824c9:
004824C9  8B 55 DC                  MOV EDX,dword ptr [EBP + -0x24]
004824CC  8D 4D D0                  LEA ECX,[EBP + -0x30]
004824CF  51                        PUSH ECX
004824D0  8B 8C BE 82 02 00 00      MOV ECX,dword ptr [ESI + EDI*0x4 + 0x282]
004824D7  E8 94 A7 22 00            CALL 0x006acc70
004824DC  83 F8 FC                  CMP EAX,-0x4
004824DF  75 1B                     JNZ 0x004824fc
004824E1  8B 15 7C D7 7E 00         MOV EDX,dword ptr [0x007ed77c]
004824E7  68 50 3D 00 00            PUSH 0x3d50
004824EC  68 3C 9D 7A 00            PUSH 0x7a9d3c
004824F1  52                        PUSH EDX
004824F2  68 0B 00 FE AF            PUSH 0xaffe000b
004824F7  E8 44 39 22 00            CALL 0x006a5e40
LAB_004824fc:
004824FC  66 8B 46 6C               MOV AX,word ptr [ESI + 0x6c]
00482500  8B 55 D0                  MOV EDX,dword ptr [EBP + -0x30]
00482503  50                        PUSH EAX
00482504  66 8B 45 D4               MOV AX,word ptr [EBP + -0x2c]
00482508  83 EC 08                  SUB ESP,0x8
0048250B  8B CC                     MOV ECX,ESP
0048250D  89 11                     MOV dword ptr [ECX],EDX
0048250F  66 89 41 04               MOV word ptr [ECX + 0x4],AX
00482513  8D 4D C8                  LEA ECX,[EBP + -0x38]
00482516  51                        PUSH ECX
00482517  8B CE                     MOV ECX,ESI
00482519  E8 0E 0F F8 FF            CALL 0x0040342c
0048251E  8B 10                     MOV EDX,dword ptr [EAX]
00482520  66 8B 4E 41               MOV CX,word ptr [ESI + 0x41]
00482524  89 55 D0                  MOV dword ptr [EBP + -0x30],EDX
00482527  66 03 CA                  ADD CX,DX
0048252A  8B 55 0C                  MOV EDX,dword ptr [EBP + 0xc]
0048252D  66 8B 40 04               MOV AX,word ptr [EAX + 0x4]
00482531  66 89 45 D4               MOV word ptr [EBP + -0x2c],AX
00482535  66 89 0A                  MOV word ptr [EDX],CX
00482538  66 8B 4E 43               MOV CX,word ptr [ESI + 0x43]
0048253C  66 2B 4D D2               SUB CX,word ptr [EBP + -0x2e]
00482540  8B 55 10                  MOV EDX,dword ptr [EBP + 0x10]
00482543  66 89 0A                  MOV word ptr [EDX],CX
00482546  66 8B 4E 45               MOV CX,word ptr [ESI + 0x45]
0048254A  8B 55 14                  MOV EDX,dword ptr [EBP + 0x14]
0048254D  66 03 C8                  ADD CX,AX
00482550  8D 45 FC                  LEA EAX,[EBP + -0x4]
00482553  66 89 0A                  MOV word ptr [EDX],CX
00482556  8D 4D F8                  LEA ECX,[EBP + -0x8]
00482559  50                        PUSH EAX
0048255A  8D 55 F0                  LEA EDX,[EBP + -0x10]
0048255D  51                        PUSH ECX
0048255E  8B 8E 11 02 00 00         MOV ECX,dword ptr [ESI + 0x211]
00482564  52                        PUSH EDX
00482565  E8 C6 AF 25 00            CALL 0x006dd530
0048256A  D9 45 F0                  FLD float ptr [EBP + -0x10]
0048256D  D8 0D 04 07 79 00         FMUL float ptr [0x00790704]
00482573  E8 10 BD 2A 00            CALL 0x0072e288
00482578  D9 45 F8                  FLD float ptr [EBP + -0x8]
0048257B  D8 0D 04 07 79 00         FMUL float ptr [0x00790704]
00482581  0F BF C0                  MOVSX EAX,AX
00482584  99                        CDQ
00482585  89 45 C8                  MOV dword ptr [EBP + -0x38],EAX
00482588  89 55 CC                  MOV dword ptr [EBP + -0x34],EDX
0048258B  E8 F8 BC 2A 00            CALL 0x0072e288
00482590  D9 45 FC                  FLD float ptr [EBP + -0x4]
00482593  D8 0D 04 07 79 00         FMUL float ptr [0x00790704]
00482599  0F BF C0                  MOVSX EAX,AX
0048259C  99                        CDQ
0048259D  8B D8                     MOV EBX,EAX
0048259F  89 55 DC                  MOV dword ptr [EBP + -0x24],EDX
004825A2  89 5D D8                  MOV dword ptr [EBP + -0x28],EBX
004825A5  E8 DE BC 2A 00            CALL 0x0072e288
004825AA  0F BF C0                  MOVSX EAX,AX
004825AD  99                        CDQ
004825AE  8B C8                     MOV ECX,EAX
004825B0  89 55 E8                  MOV dword ptr [EBP + -0x18],EDX
004825B3  0F BF 46 43               MOVSX EAX,word ptr [ESI + 0x43]
004825B7  99                        CDQ
004825B8  8B F8                     MOV EDI,EAX
004825BA  8B 45 DC                  MOV EAX,dword ptr [EBP + -0x24]
004825BD  2B FB                     SUB EDI,EBX
004825BF  8B DA                     MOV EBX,EDX
004825C1  1B D8                     SBB EBX,EAX
004825C3  0F BF 46 41               MOVSX EAX,word ptr [ESI + 0x41]
004825C7  8B 75 C8                  MOV ESI,dword ptr [EBP + -0x38]
004825CA  99                        CDQ
004825CB  2B C6                     SUB EAX,ESI
004825CD  89 45 EC                  MOV dword ptr [EBP + -0x14],EAX
004825D0  8B 45 CC                  MOV EAX,dword ptr [EBP + -0x34]
004825D3  1B D0                     SBB EDX,EAX
004825D5  8B 45 14                  MOV EAX,dword ptr [EBP + 0x14]
004825D8  89 55 F0                  MOV dword ptr [EBP + -0x10],EDX
004825DB  0F BF 00                  MOVSX EAX,word ptr [EAX]
004825DE  99                        CDQ
004825DF  2B C1                     SUB EAX,ECX
004825E1  8B 4D E8                  MOV ECX,dword ptr [EBP + -0x18]
004825E4  1B D1                     SBB EDX,ECX
004825E6  52                        PUSH EDX
004825E7  50                        PUSH EAX
004825E8  52                        PUSH EDX
004825E9  50                        PUSH EAX
004825EA  E8 01 BF 2A 00            CALL 0x0072e4f0
004825EF  8B 4D 0C                  MOV ECX,dword ptr [EBP + 0xc]
004825F2  89 45 E4                  MOV dword ptr [EBP + -0x1c],EAX
004825F5  89 55 E8                  MOV dword ptr [EBP + -0x18],EDX
004825F8  0F BF 01                  MOVSX EAX,word ptr [ECX]
004825FB  8B 4D C8                  MOV ECX,dword ptr [EBP + -0x38]
004825FE  99                        CDQ
004825FF  8B F0                     MOV ESI,EAX
00482601  8B 45 CC                  MOV EAX,dword ptr [EBP + -0x34]
00482604  2B F1                     SUB ESI,ECX
00482606  8B 4D D8                  MOV ECX,dword ptr [EBP + -0x28]
00482609  1B D0                     SBB EDX,EAX
0048260B  89 55 CC                  MOV dword ptr [EBP + -0x34],EDX
0048260E  8B 55 10                  MOV EDX,dword ptr [EBP + 0x10]
00482611  0F BF 02                  MOVSX EAX,word ptr [EDX]
00482614  99                        CDQ
00482615  2B C1                     SUB EAX,ECX
00482617  8B 4D DC                  MOV ECX,dword ptr [EBP + -0x24]
0048261A  1B D1                     SBB EDX,ECX
0048261C  52                        PUSH EDX
0048261D  50                        PUSH EAX
0048261E  52                        PUSH EDX
0048261F  50                        PUSH EAX
00482620  E8 CB BE 2A 00            CALL 0x0072e4f0
00482625  8B C8                     MOV ECX,EAX
00482627  8B 45 CC                  MOV EAX,dword ptr [EBP + -0x34]
0048262A  50                        PUSH EAX
0048262B  56                        PUSH ESI
0048262C  50                        PUSH EAX
0048262D  56                        PUSH ESI
0048262E  89 55 F8                  MOV dword ptr [EBP + -0x8],EDX
00482631  89 4D DC                  MOV dword ptr [EBP + -0x24],ECX
00482634  E8 B7 BE 2A 00            CALL 0x0072e4f0
00482639  8B 4D DC                  MOV ECX,dword ptr [EBP + -0x24]
0048263C  03 C8                     ADD ECX,EAX
0048263E  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
00482641  13 C2                     ADC EAX,EDX
00482643  8B 55 E4                  MOV EDX,dword ptr [EBP + -0x1c]
00482646  03 CA                     ADD ECX,EDX
00482648  89 4D DC                  MOV dword ptr [EBP + -0x24],ECX
0048264B  8B 4D E8                  MOV ECX,dword ptr [EBP + -0x18]
0048264E  13 C1                     ADC EAX,ECX
00482650  8B 4D F0                  MOV ECX,dword ptr [EBP + -0x10]
00482653  89 45 F8                  MOV dword ptr [EBP + -0x8],EAX
00482656  8B 45 EC                  MOV EAX,dword ptr [EBP + -0x14]
00482659  51                        PUSH ECX
0048265A  50                        PUSH EAX
0048265B  51                        PUSH ECX
0048265C  50                        PUSH EAX
0048265D  E8 8E BE 2A 00            CALL 0x0072e4f0
00482662  53                        PUSH EBX
00482663  57                        PUSH EDI
00482664  53                        PUSH EBX
00482665  57                        PUSH EDI
00482666  89 45 C8                  MOV dword ptr [EBP + -0x38],EAX
00482669  8B F2                     MOV ESI,EDX
0048266B  E8 80 BE 2A 00            CALL 0x0072e4f0
00482670  8B 5D E4                  MOV EBX,dword ptr [EBP + -0x1c]
00482673  8B 7D E8                  MOV EDI,dword ptr [EBP + -0x18]
00482676  8B C8                     MOV ECX,EAX
00482678  8B 45 C8                  MOV EAX,dword ptr [EBP + -0x38]
0048267B  03 C1                     ADD EAX,ECX
0048267D  8B 4D DC                  MOV ECX,dword ptr [EBP + -0x24]
00482680  13 F2                     ADC ESI,EDX
00482682  8B 55 F8                  MOV EDX,dword ptr [EBP + -0x8]
00482685  03 C3                     ADD EAX,EBX
00482687  13 F7                     ADC ESI,EDI
00482689  3B F2                     CMP ESI,EDX
0048268B  7C 23                     JL 0x004826b0
0048268D  7F 04                     JG 0x00482693
0048268F  3B C1                     CMP EAX,ECX
00482691  76 1D                     JBE 0x004826b0
LAB_00482693:
00482693  8B 55 18                  MOV EDX,dword ptr [EBP + 0x18]
00482696  33 C0                     XOR EAX,EAX
00482698  C7 02 00 00 00 00         MOV dword ptr [EDX],0x0
0048269E  8B 55 84                  MOV EDX,dword ptr [EBP + -0x7c]
004826A1  89 15 F8 8D 85 00         MOV dword ptr [0x00858df8],EDX
004826A7  5F                        POP EDI
004826A8  5E                        POP ESI
004826A9  5B                        POP EBX
004826AA  8B E5                     MOV ESP,EBP
004826AC  5D                        POP EBP
004826AD  C2 14 00                  RET 0x14
LAB_004826b0:
004826B0  0F BF 45 D4               MOVSX EAX,word ptr [EBP + -0x2c]
004826B4  8B 55 84                  MOV EDX,dword ptr [EBP + -0x7c]
004826B7  83 C0 46                  ADD EAX,0x46
004826BA  33 C9                     XOR ECX,ECX
004826BC  83 F8 14                  CMP EAX,0x14
004826BF  8B 45 18                  MOV EAX,dword ptr [EBP + 0x18]
004826C2  0F 9E C1                  SETLE CL
004826C5  89 08                     MOV dword ptr [EAX],ECX
004826C7  C7 00 01 00 00 00         MOV dword ptr [EAX],0x1
004826CD  89 15 F8 8D 85 00         MOV dword ptr [0x00858df8],EDX
004826D3  33 C0                     XOR EAX,EAX
004826D5  5F                        POP EDI
004826D6  5E                        POP ESI
004826D7  5B                        POP EBX
004826D8  8B E5                     MOV ESP,EBP
004826DA  5D                        POP EBP
004826DB  C2 14 00                  RET 0x14
LAB_004826de:
004826DE  8B 45 84                  MOV EAX,dword ptr [EBP + -0x7c]
004826E1  68 F8 B8 7A 00            PUSH 0x7ab8f8
004826E6  68 CC 4C 7A 00            PUSH 0x7a4ccc
004826EB  56                        PUSH ESI
004826EC  6A 00                     PUSH 0x0
004826EE  68 5F 3D 00 00            PUSH 0x3d5f
004826F3  68 3C 9D 7A 00            PUSH 0x7a9d3c
004826F8  A3 F8 8D 85 00            MOV [0x00858df8],EAX
004826FD  E8 CE AD 22 00            CALL 0x006ad4d0
00482702  83 C4 18                  ADD ESP,0x18
00482705  85 C0                     TEST EAX,EAX
00482707  74 01                     JZ 0x0048270a
00482709  CC                        INT3
LAB_0048270a:
0048270A  68 60 3D 00 00            PUSH 0x3d60
0048270F  68 3C 9D 7A 00            PUSH 0x7a9d3c
00482714  6A 00                     PUSH 0x0
00482716  56                        PUSH ESI
00482717  E8 24 37 22 00            CALL 0x006a5e40
0048271C  5F                        POP EDI
0048271D  5E                        POP ESI
0048271E  83 C8 FF                  OR EAX,0xffffffff
00482721  5B                        POP EBX
00482722  8B E5                     MOV ESP,EBP
00482724  5D                        POP EBP
00482725  C2 14 00                  RET 0x14
