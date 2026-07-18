FUN_00502fc0:
00502FC0  55                        PUSH EBP
00502FC1  8B EC                     MOV EBP,ESP
00502FC3  81 EC A8 00 00 00         SUB ESP,0xa8
00502FC9  A1 F8 8D 85 00            MOV EAX,[0x00858df8]
00502FCE  53                        PUSH EBX
00502FCF  56                        PUSH ESI
00502FD0  89 4D F8                  MOV dword ptr [EBP + -0x8],ECX
00502FD3  57                        PUSH EDI
00502FD4  8D 95 5C FF FF FF         LEA EDX,[EBP + 0xffffff5c]
00502FDA  8D 8D 58 FF FF FF         LEA ECX,[EBP + 0xffffff58]
00502FE0  6A 00                     PUSH 0x0
00502FE2  52                        PUSH EDX
00502FE3  C6 45 FC 00               MOV byte ptr [EBP + -0x4],0x0
00502FE7  89 85 58 FF FF FF         MOV dword ptr [EBP + 0xffffff58],EAX
00502FED  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
00502FF3  E8 F8 A7 22 00            CALL 0x0072d7f0
00502FF8  8B F0                     MOV ESI,EAX
00502FFA  83 C4 08                  ADD ESP,0x8
00502FFD  85 F6                     TEST ESI,ESI
00502FFF  0F 85 DF 02 00 00         JNZ 0x005032e4
00503005  8B 5D F8                  MOV EBX,dword ptr [EBP + -0x8]
00503008  B9 17 00 00 00            MOV ECX,0x17
0050300D  8D 7D 9C                  LEA EDI,[EBP + -0x64]
00503010  8D 93 99 0B 00 00         LEA EDX,[EBX + 0xb99]
00503016  8B F2                     MOV ESI,EDX
00503018  52                        PUSH EDX
00503019  F3 A5                     MOVSD.REP ES:EDI,ESI
0050301B  B9 17 00 00 00            MOV ECX,0x17
00503020  8B FA                     MOV EDI,EDX
00503022  F3 AB                     STOSD.REP ES:EDI
00503024  8B 0D 74 A1 7F 00         MOV ECX,dword ptr [0x007fa174]
0050302A  6A 02                     PUSH 0x2
0050302C  E8 8B 05 F0 FF            CALL 0x004035bc
00503031  8A 83 9E 0B 00 00         MOV AL,byte ptr [EBX + 0xb9e]
00503037  8A 4D A1                  MOV CL,byte ptr [EBP + -0x5f]
0050303A  3A C8                     CMP CL,AL
0050303C  0F 85 7B 02 00 00         JNZ 0x005032bd
00503042  25 FF 00 00 00            AND EAX,0xff
00503047  48                        DEC EAX
00503048  83 F8 03                  CMP EAX,0x3
0050304B  0F 87 81 02 00 00         JA 0x005032d2
switchD_00503051::switchD:
00503051  FF 24 85 30 33 50 00      JMP dword ptr [EAX*0x4 + 0x503330]
switchD_00503051::caseD_1:
00503058  8B 45 9C                  MOV EAX,dword ptr [EBP + -0x64]
0050305B  8B 8B 99 0B 00 00         MOV ECX,dword ptr [EBX + 0xb99]
00503061  8D B3 99 0B 00 00         LEA ESI,[EBX + 0xb99]
00503067  3B C1                     CMP EAX,ECX
00503069  0F 85 4E 02 00 00         JNZ 0x005032bd
0050306F  8A 4D A0                  MOV CL,byte ptr [EBP + -0x60]
00503072  8A 83 9D 0B 00 00         MOV AL,byte ptr [EBX + 0xb9d]
00503078  3A C8                     CMP CL,AL
0050307A  0F 85 3D 02 00 00         JNZ 0x005032bd
00503080  8D 55 9C                  LEA EDX,[EBP + -0x64]
00503083  8B CB                     MOV ECX,EBX
00503085  52                        PUSH EDX
00503086  56                        PUSH ESI
00503087  E8 62 0F F0 FF            CALL 0x00403fee
0050308C  8B 36                     MOV ESI,dword ptr [ESI]
0050308E  8D 46 E6                  LEA EAX,[ESI + -0x1a]
00503091  83 F8 0A                  CMP EAX,0xa
00503094  0F 87 38 02 00 00         JA 0x005032d2
0050309A  33 C9                     XOR ECX,ECX
0050309C  8A 88 4C 33 50 00         MOV CL,byte ptr [EAX + 0x50334c]
switchD_005030a2::switchD:
005030A2  FF 24 8D 40 33 50 00      JMP dword ptr [ECX*0x4 + 0x503340]
switchD_005030a2::caseD_1a:
005030A9  8A 83 B6 0B 00 00         MOV AL,byte ptr [EBX + 0xbb6]
005030AF  8A 4D B9                  MOV CL,byte ptr [EBP + -0x47]
005030B2  3A C1                     CMP AL,CL
005030B4  0F 84 18 02 00 00         JZ 0x005032d2
005030BA  A8 FE                     TEST AL,0xfe
005030BC  C6 45 FC 00               MOV byte ptr [EBP + -0x4],0x0
005030C0  76 49                     JBE 0x0050310b
LAB_005030c2:
005030C2  8B 93 B6 02 00 00         MOV EDX,dword ptr [EBX + 0x2b6]
005030C8  6A 03                     PUSH 0x3
005030CA  52                        PUSH EDX
005030CB  E8 D0 82 20 00            CALL 0x0070b3a0
005030D0  8B 93 8C 01 00 00         MOV EDX,dword ptr [EBX + 0x18c]
005030D6  50                        PUSH EAX
005030D7  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
005030DA  6A 01                     PUSH 0x1
005030DC  25 FF 00 00 00            AND EAX,0xff
005030E1  68 87 00 00 00            PUSH 0x87
005030E6  8D 0C 85 3F 00 00 00      LEA ECX,[EAX*0x4 + 0x3f]
005030ED  51                        PUSH ECX
005030EE  52                        PUSH EDX
005030EF  E8 35 01 F0 FF            CALL 0x00403229
005030F4  8A 45 FC                  MOV AL,byte ptr [EBP + -0x4]
005030F7  8A 8B B6 0B 00 00         MOV CL,byte ptr [EBX + 0xbb6]
005030FD  83 C4 1C                  ADD ESP,0x1c
00503100  FE C0                     INC AL
00503102  D0 E9                     SHR CL,0x1
00503104  3A C1                     CMP AL,CL
00503106  88 45 FC                  MOV byte ptr [EBP + -0x4],AL
00503109  72 B7                     JC 0x005030c2
LAB_0050310b:
0050310B  80 7D FC 14               CMP byte ptr [EBP + -0x4],0x14
0050310F  73 42                     JNC 0x00503153
00503111  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
00503114  BF 14 00 00 00            MOV EDI,0x14
00503119  25 FF 00 00 00            AND EAX,0xff
0050311E  2B F8                     SUB EDI,EAX
00503120  8D 34 85 3F 00 00 00      LEA ESI,[EAX*0x4 + 0x3f]
LAB_00503127:
00503127  8B 93 B6 02 00 00         MOV EDX,dword ptr [EBX + 0x2b6]
0050312D  6A 00                     PUSH 0x0
0050312F  52                        PUSH EDX
00503130  E8 6B 82 20 00            CALL 0x0070b3a0
00503135  50                        PUSH EAX
00503136  8B 83 8C 01 00 00         MOV EAX,dword ptr [EBX + 0x18c]
0050313C  6A 01                     PUSH 0x1
0050313E  68 87 00 00 00            PUSH 0x87
00503143  56                        PUSH ESI
00503144  50                        PUSH EAX
00503145  E8 DF 00 F0 FF            CALL 0x00403229
0050314A  83 C4 1C                  ADD ESP,0x1c
0050314D  83 C6 04                  ADD ESI,0x4
00503150  4F                        DEC EDI
00503151  75 D4                     JNZ 0x00503127
LAB_00503153:
00503153  8B 83 54 01 00 00         MOV EAX,dword ptr [EBX + 0x154]
00503159  85 C0                     TEST EAX,EAX
0050315B  0F 8C 71 01 00 00         JL 0x005032d2
00503161  8B 8B A0 00 00 00         MOV ECX,dword ptr [EBX + 0xa0]
00503167  8B 53 48                  MOV EDX,dword ptr [EBX + 0x48]
0050316A  51                        PUSH ECX
0050316B  52                        PUSH EDX
0050316C  6A FF                     PUSH -0x1
0050316E  50                        PUSH EAX
0050316F  A1 A8 75 80 00            MOV EAX,[0x008075a8]
00503174  50                        PUSH EAX
00503175  E8 C6 04 1B 00            CALL 0x006b3640
0050317A  8B 85 58 FF FF FF         MOV EAX,dword ptr [EBP + 0xffffff58]
00503180  A3 F8 8D 85 00            MOV [0x00858df8],EAX
00503185  5F                        POP EDI
00503186  5E                        POP ESI
00503187  5B                        POP EBX
00503188  8B E5                     MOV ESP,EBP
0050318A  5D                        POP EBP
0050318B  C3                        RET
switchD_005030a2::caseD_1b:
0050318C  8A 83 CD 0B 00 00         MOV AL,byte ptr [EBX + 0xbcd]
00503192  8A 4D D0                  MOV CL,byte ptr [EBP + -0x30]
00503195  3A C1                     CMP AL,CL
00503197  0F 84 35 01 00 00         JZ 0x005032d2
0050319D  3C FF                     CMP AL,0xff
0050319F  74 50                     JZ 0x005031f1
005031A1  84 C0                     TEST AL,AL
005031A3  C6 45 FC 00               MOV byte ptr [EBP + -0x4],0x0
005031A7  76 48                     JBE 0x005031f1
LAB_005031a9:
005031A9  8B 8B B6 02 00 00         MOV ECX,dword ptr [EBX + 0x2b6]
005031AF  6A 01                     PUSH 0x1
005031B1  51                        PUSH ECX
005031B2  E8 E9 81 20 00            CALL 0x0070b3a0
005031B7  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
005031BA  8B 8B 8C 01 00 00         MOV ECX,dword ptr [EBX + 0x18c]
005031C0  81 E2 FF 00 00 00         AND EDX,0xff
005031C6  50                        PUSH EAX
005031C7  6A 01                     PUSH 0x1
005031C9  68 87 00 00 00            PUSH 0x87
005031CE  8D 04 95 3F 00 00 00      LEA EAX,[EDX*0x4 + 0x3f]
005031D5  50                        PUSH EAX
005031D6  51                        PUSH ECX
005031D7  E8 4D 00 F0 FF            CALL 0x00403229
005031DC  8A 45 FC                  MOV AL,byte ptr [EBP + -0x4]
005031DF  8A 8B CD 0B 00 00         MOV CL,byte ptr [EBX + 0xbcd]
005031E5  83 C4 1C                  ADD ESP,0x1c
005031E8  FE C0                     INC AL
005031EA  3A C1                     CMP AL,CL
005031EC  88 45 FC                  MOV byte ptr [EBP + -0x4],AL
005031EF  72 B8                     JC 0x005031a9
LAB_005031f1:
005031F1  80 7D FC 14               CMP byte ptr [EBP + -0x4],0x14
005031F5  73 42                     JNC 0x00503239
005031F7  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
005031FA  BF 14 00 00 00            MOV EDI,0x14
005031FF  25 FF 00 00 00            AND EAX,0xff
00503204  2B F8                     SUB EDI,EAX
00503206  8D 34 85 3F 00 00 00      LEA ESI,[EAX*0x4 + 0x3f]
LAB_0050320d:
0050320D  8B 93 B6 02 00 00         MOV EDX,dword ptr [EBX + 0x2b6]
00503213  6A 00                     PUSH 0x0
00503215  52                        PUSH EDX
00503216  E8 85 81 20 00            CALL 0x0070b3a0
0050321B  50                        PUSH EAX
0050321C  8B 83 8C 01 00 00         MOV EAX,dword ptr [EBX + 0x18c]
00503222  6A 01                     PUSH 0x1
00503224  68 87 00 00 00            PUSH 0x87
00503229  56                        PUSH ESI
0050322A  50                        PUSH EAX
0050322B  E8 F9 FF EF FF            CALL 0x00403229
00503230  83 C4 1C                  ADD ESP,0x1c
00503233  83 C6 04                  ADD ESI,0x4
00503236  4F                        DEC EDI
00503237  75 D4                     JNZ 0x0050320d
LAB_00503239:
00503239  8B 83 54 01 00 00         MOV EAX,dword ptr [EBX + 0x154]
0050323F  85 C0                     TEST EAX,EAX
00503241  0F 8C 8B 00 00 00         JL 0x005032d2
00503247  8B 8B A0 00 00 00         MOV ECX,dword ptr [EBX + 0xa0]
0050324D  8B 53 48                  MOV EDX,dword ptr [EBX + 0x48]
00503250  51                        PUSH ECX
00503251  52                        PUSH EDX
00503252  6A FF                     PUSH -0x1
00503254  50                        PUSH EAX
00503255  A1 A8 75 80 00            MOV EAX,[0x008075a8]
0050325A  50                        PUSH EAX
0050325B  E8 E0 03 1B 00            CALL 0x006b3640
00503260  8B 85 58 FF FF FF         MOV EAX,dword ptr [EBP + 0xffffff58]
00503266  A3 F8 8D 85 00            MOV [0x00858df8],EAX
0050326B  5F                        POP EDI
0050326C  5E                        POP ESI
0050326D  5B                        POP EBX
0050326E  8B E5                     MOV ESP,EBP
00503270  5D                        POP EBP
00503271  C3                        RET
switchD_00503051::caseD_2:
00503272  8B 4D 9C                  MOV ECX,dword ptr [EBP + -0x64]
00503275  8B 93 99 0B 00 00         MOV EDX,dword ptr [EBX + 0xb99]
0050327B  8D 83 99 0B 00 00         LEA EAX,[EBX + 0xb99]
00503281  3B CA                     CMP ECX,EDX
00503283  75 38                     JNZ 0x005032bd
00503285  8A 55 A0                  MOV DL,byte ptr [EBP + -0x60]
00503288  8A 8B 9D 0B 00 00         MOV CL,byte ptr [EBX + 0xb9d]
0050328E  3A D1                     CMP DL,CL
00503290  75 2B                     JNZ 0x005032bd
00503292  8D 4D 9C                  LEA ECX,[EBP + -0x64]
00503295  51                        PUSH ECX
00503296  50                        PUSH EAX
00503297  8B CB                     MOV ECX,EBX
00503299  E8 50 0D F0 FF            CALL 0x00403fee
0050329E  8B 85 58 FF FF FF         MOV EAX,dword ptr [EBP + 0xffffff58]
005032A4  A3 F8 8D 85 00            MOV [0x00858df8],EAX
005032A9  5F                        POP EDI
005032AA  5E                        POP ESI
005032AB  5B                        POP EBX
005032AC  8B E5                     MOV ESP,EBP
005032AE  5D                        POP EBP
005032AF  C3                        RET
switchD_00503051::caseD_4:
005032B0  8B 55 9C                  MOV EDX,dword ptr [EBP + -0x64]
005032B3  8B 83 99 0B 00 00         MOV EAX,dword ptr [EBX + 0xb99]
005032B9  3B D0                     CMP EDX,EAX
005032BB  74 15                     JZ 0x005032d2
LAB_005032bd:
005032BD  8B CB                     MOV ECX,EBX
005032BF  E8 27 E8 EF FF            CALL 0x00401aeb
005032C4  8B CB                     MOV ECX,EBX
005032C6  E8 A3 F6 EF FF            CALL 0x0040296e
005032CB  8B CB                     MOV ECX,EBX
005032CD  E8 8A E0 EF FF            CALL 0x0040135c
switchD_00503051::default:
005032D2  8B 85 58 FF FF FF         MOV EAX,dword ptr [EBP + 0xffffff58]
005032D8  A3 F8 8D 85 00            MOV [0x00858df8],EAX
005032DD  5F                        POP EDI
005032DE  5E                        POP ESI
005032DF  5B                        POP EBX
005032E0  8B E5                     MOV ESP,EBP
005032E2  5D                        POP EBP
005032E3  C3                        RET
LAB_005032e4:
005032E4  8B 8D 58 FF FF FF         MOV ECX,dword ptr [EBP + 0xffffff58]
005032EA  68 20 26 7C 00            PUSH 0x7c2620
005032EF  68 CC 4C 7A 00            PUSH 0x7a4ccc
005032F4  56                        PUSH ESI
005032F5  6A 00                     PUSH 0x0
005032F7  68 34 02 00 00            PUSH 0x234
005032FC  68 24 25 7C 00            PUSH 0x7c2524
00503301  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
00503307  E8 C4 A1 1A 00            CALL 0x006ad4d0
0050330C  83 C4 18                  ADD ESP,0x18
0050330F  85 C0                     TEST EAX,EAX
00503311  74 01                     JZ 0x00503314
00503313  CC                        INT3
LAB_00503314:
00503314  68 34 02 00 00            PUSH 0x234
00503319  68 24 25 7C 00            PUSH 0x7c2524
0050331E  6A 00                     PUSH 0x0
00503320  56                        PUSH ESI
00503321  E8 1A 2B 1A 00            CALL 0x006a5e40
00503326  5F                        POP EDI
00503327  5E                        POP ESI
00503328  5B                        POP EBX
00503329  8B E5                     MOV ESP,EBP
0050332B  5D                        POP EBP
0050332C  C3                        RET
