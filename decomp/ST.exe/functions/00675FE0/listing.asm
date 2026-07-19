_AddAllGrpExch:
00675FE0  55                        PUSH EBP
00675FE1  8B EC                     MOV EBP,ESP
00675FE3  83 EC 44                  SUB ESP,0x44
00675FE6  A1 F8 8D 85 00            MOV EAX,[0x00858df8]
00675FEB  53                        PUSH EBX
00675FEC  56                        PUSH ESI
00675FED  57                        PUSH EDI
00675FEE  8D 55 C0                  LEA EDX,[EBP + -0x40]
00675FF1  8D 4D BC                  LEA ECX,[EBP + -0x44]
00675FF4  6A 00                     PUSH 0x0
00675FF6  52                        PUSH EDX
00675FF7  89 45 BC                  MOV dword ptr [EBP + -0x44],EAX
00675FFA  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
00676000  E8 EB 77 0B 00            CALL 0x0072d7f0
00676005  8B F0                     MOV ESI,EAX
00676007  83 C4 08                  ADD ESP,0x8
0067600A  85 F6                     TEST ESI,ESI
0067600C  0F 85 BC 00 00 00         JNZ 0x006760ce
00676012  8B 0D 74 A1 7F 00         MOV ECX,dword ptr [0x007fa174]
00676018  85 C9                     TEST ECX,ECX
0067601A  0F 84 9E 00 00 00         JZ 0x006760be
00676020  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
00676023  50                        PUSH EAX
00676024  E8 92 EA D8 FF            CALL 0x00404abb
00676029  8B F8                     MOV EDI,EAX
0067602B  85 FF                     TEST EDI,EDI
0067602D  0F 84 8B 00 00 00         JZ 0x006760be
00676033  8B 47 0C                  MOV EAX,dword ptr [EDI + 0xc]
00676036  85 C0                     TEST EAX,EAX
00676038  76 7A                     JBE 0x006760b4
0067603A  33 DB                     XOR EBX,EBX
0067603C  85 C0                     TEST EAX,EAX
0067603E  76 60                     JBE 0x006760a0
00676040  33 C9                     XOR ECX,ECX
00676042  3B C8                     CMP ECX,EAX
00676044  73 0B                     JNC 0x00676051
LAB_00676046:
00676046  8B 47 08                  MOV EAX,dword ptr [EDI + 0x8]
00676049  0F AF C1                  IMUL EAX,ECX
0067604C  03 47 1C                  ADD EAX,dword ptr [EDI + 0x1c]
0067604F  EB 02                     JMP 0x00676053
LAB_00676051:
00676051  33 C0                     XOR EAX,EAX
LAB_00676053:
00676053  66 8B 08                  MOV CX,word ptr [EAX]
00676056  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
00676059  6A 01                     PUSH 0x1
0067605B  51                        PUSH ECX
0067605C  8B 0D 74 A1 7F 00         MOV ECX,dword ptr [0x007fa174]
00676062  52                        PUSH EDX
00676063  E8 52 C8 D8 FF            CALL 0x004028ba
00676068  8B F0                     MOV ESI,EAX
0067606A  85 F6                     TEST ESI,ESI
0067606C  74 22                     JZ 0x00676090
0067606E  8B 06                     MOV EAX,dword ptr [ESI]
00676070  8B CE                     MOV ECX,ESI
00676072  FF 50 2C                  CALL dword ptr [EAX + 0x2c]
00676075  83 F8 78                  CMP EAX,0x78
00676078  75 16                     JNZ 0x00676090
0067607A  8B 16                     MOV EDX,dword ptr [ESI]
0067607C  8B CE                     MOV ECX,ESI
0067607E  FF 52 2C                  CALL dword ptr [EDX + 0x2c]
00676081  83 F8 78                  CMP EAX,0x78
00676084  75 0A                     JNZ 0x00676090
00676086  C7 86 69 02 00 00 FF FF FF FF  MOV dword ptr [ESI + 0x269],0xffffffff
LAB_00676090:
00676090  8B 47 0C                  MOV EAX,dword ptr [EDI + 0xc]
00676093  43                        INC EBX
00676094  8B CB                     MOV ECX,EBX
00676096  81 E1 FF FF 00 00         AND ECX,0xffff
0067609C  3B C8                     CMP ECX,EAX
0067609E  72 A6                     JC 0x00676046
LAB_006760a0:
006760A0  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
006760A3  8B 0D 74 A1 7F 00         MOV ECX,dword ptr [0x007fa174]
006760A9  6A 00                     PUSH 0x0
006760AB  57                        PUSH EDI
006760AC  6A 00                     PUSH 0x0
006760AE  50                        PUSH EAX
006760AF  E8 DB B6 D8 FF            CALL 0x0040178f
LAB_006760b4:
006760B4  85 FF                     TEST EDI,EDI
006760B6  74 06                     JZ 0x006760be
006760B8  57                        PUSH EDI
006760B9  E8 52 80 03 00            CALL 0x006ae110
LAB_006760be:
006760BE  8B 4D BC                  MOV ECX,dword ptr [EBP + -0x44]
006760C1  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
006760C7  5F                        POP EDI
006760C8  5E                        POP ESI
006760C9  5B                        POP EBX
006760CA  8B E5                     MOV ESP,EBP
006760CC  5D                        POP EBP
006760CD  C3                        RET
LAB_006760ce:
006760CE  8B 55 BC                  MOV EDX,dword ptr [EBP + -0x44]
006760D1  68 8C 2D 7D 00            PUSH 0x7d2d8c
006760D6  68 CC 4C 7A 00            PUSH 0x7a4ccc
006760DB  56                        PUSH ESI
006760DC  6A 00                     PUSH 0x0
006760DE  68 18 01 00 00            PUSH 0x118
006760E3  68 58 2D 7D 00            PUSH 0x7d2d58
006760E8  89 15 F8 8D 85 00         MOV dword ptr [0x00858df8],EDX
006760EE  E8 DD 73 03 00            CALL 0x006ad4d0
006760F3  83 C4 18                  ADD ESP,0x18
006760F6  85 C0                     TEST EAX,EAX
006760F8  74 01                     JZ 0x006760fb
006760FA  CC                        INT3
LAB_006760fb:
006760FB  68 19 01 00 00            PUSH 0x119
00676100  68 58 2D 7D 00            PUSH 0x7d2d58
00676105  6A 00                     PUSH 0x0
00676107  56                        PUSH ESI
00676108  E8 33 FD 02 00            CALL 0x006a5e40
0067610D  5F                        POP EDI
0067610E  5E                        POP ESI
0067610F  5B                        POP EBX
00676110  8B E5                     MOV ESP,EBP
00676112  5D                        POP EBP
00676113  C3                        RET
