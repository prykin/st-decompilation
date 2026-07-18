FUN_00627eb0:
00627EB0  55                        PUSH EBP
00627EB1  8B EC                     MOV EBP,ESP
00627EB3  83 EC 78                  SUB ESP,0x78
00627EB6  A1 F8 8D 85 00            MOV EAX,[0x00858df8]
00627EBB  53                        PUSH EBX
00627EBC  56                        PUSH ESI
00627EBD  89 4D F4                  MOV dword ptr [EBP + -0xc],ECX
00627EC0  33 DB                     XOR EBX,EBX
00627EC2  57                        PUSH EDI
00627EC3  8D 55 8C                  LEA EDX,[EBP + -0x74]
00627EC6  8D 4D 88                  LEA ECX,[EBP + -0x78]
00627EC9  53                        PUSH EBX
00627ECA  52                        PUSH EDX
00627ECB  89 45 88                  MOV dword ptr [EBP + -0x78],EAX
00627ECE  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
00627ED4  E8 17 59 10 00            CALL 0x0072d7f0
00627ED9  8B F0                     MOV ESI,EAX
00627EDB  83 C4 08                  ADD ESP,0x8
00627EDE  3B F3                     CMP ESI,EBX
00627EE0  0F 85 B9 0C 00 00         JNZ 0x00628b9f
00627EE6  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
00627EE9  8B 41 10                  MOV EAX,dword ptr [ECX + 0x10]
00627EEC  3D 0F 01 00 00            CMP EAX,0x10f
00627EF1  0F 87 8D 0C 00 00         JA 0x00628b84
00627EF7  0F 84 5C 0C 00 00         JZ 0x00628b59
00627EFD  2B C3                     SUB EAX,EBX
00627EFF  0F 84 82 01 00 00         JZ 0x00628087
00627F05  83 E8 02                  SUB EAX,0x2
00627F08  74 41                     JZ 0x00627f4b
00627F0A  48                        DEC EAX
00627F0B  0F 85 7B 0C 00 00         JNZ 0x00628b8c
00627F11  8B 75 F4                  MOV ESI,dword ptr [EBP + -0xc]
00627F14  8B 86 C6 00 00 00         MOV EAX,dword ptr [ESI + 0xc6]
00627F1A  3B C3                     CMP EAX,EBX
00627F1C  0F 8C 6A 0C 00 00         JL 0x00628b8c
00627F22  8B 0D 98 75 80 00         MOV ECX,dword ptr [0x00807598]
00627F28  50                        PUSH EAX
00627F29  E8 72 0C 0C 00            CALL 0x006e8ba0
00627F2E  8B 45 88                  MOV EAX,dword ptr [EBP + -0x78]
00627F31  C7 86 C6 00 00 00 FF FF FF FF  MOV dword ptr [ESI + 0xc6],0xffffffff
00627F3B  A3 F8 8D 85 00            MOV [0x00858df8],EAX
00627F40  33 C0                     XOR EAX,EAX
00627F42  5F                        POP EDI
00627F43  5E                        POP ESI
00627F44  5B                        POP EBX
00627F45  8B E5                     MOV ESP,EBP
00627F47  5D                        POP EBP
00627F48  C2 04 00                  RET 0x4
LAB_00627f4b:
00627F4B  8B 71 14                  MOV ESI,dword ptr [ECX + 0x14]
00627F4E  83 7E 0C 02               CMP dword ptr [ESI + 0xc],0x2
00627F52  0F 84 B6 00 00 00         JZ 0x0062800e
00627F58  8B 5D F4                  MOV EBX,dword ptr [EBP + -0xc]
00627F5B  B9 11 00 00 00            MOV ECX,0x11
00627F60  8B FB                     MOV EDI,EBX
00627F62  F3 A5                     MOVSD.REP ES:EDI,ESI
00627F64  66 A5                     MOVSW ES:EDI,ESI
00627F66  A1 38 2A 80 00            MOV EAX,[0x00802a38]
00627F6B  8B 88 E4 00 00 00         MOV ECX,dword ptr [EAX + 0xe4]
00627F71  51                        PUSH ECX
00627F72  53                        PUSH EBX
00627F73  8B CB                     MOV ECX,EBX
00627F75  E8 6A 93 DD FF            CALL 0x004012e4
00627F7A  33 D2                     XOR EDX,EDX
00627F7C  8B CB                     MOV ECX,EBX
00627F7E  8A 93 D6 00 00 00         MOV DL,byte ptr [EBX + 0xd6]
00627F84  52                        PUSH EDX
00627F85  E8 9D D7 DD FF            CALL 0x00405727
00627F8A  8B 43 3C                  MOV EAX,dword ptr [EBX + 0x3c]
00627F8D  85 C0                     TEST EAX,EAX
00627F8F  74 3D                     JZ 0x00627fce
00627F91  C7 83 C2 00 00 00 01 00 00 00  MOV dword ptr [EBX + 0xc2],0x1
00627F9B  89 83 04 01 00 00         MOV dword ptr [EBX + 0x104],EAX
00627FA1  8B 9B C6 00 00 00         MOV EBX,dword ptr [EBX + 0xc6]
00627FA7  85 DB                     TEST EBX,EBX
00627FA9  0F 8C DD 0B 00 00         JL 0x00628b8c
00627FAF  8B 0D 98 75 80 00         MOV ECX,dword ptr [0x00807598]
00627FB5  53                        PUSH EBX
00627FB6  E8 A5 2B 0C 00            CALL 0x006eab60
00627FBB  8B 45 88                  MOV EAX,dword ptr [EBP + -0x78]
00627FBE  A3 F8 8D 85 00            MOV [0x00858df8],EAX
00627FC3  33 C0                     XOR EAX,EAX
00627FC5  5F                        POP EDI
00627FC6  5E                        POP ESI
00627FC7  5B                        POP EBX
00627FC8  8B E5                     MOV ESP,EBP
00627FCA  5D                        POP EBP
00627FCB  C2 04 00                  RET 0x4
LAB_00627fce:
00627FCE  8B 83 C6 00 00 00         MOV EAX,dword ptr [EBX + 0xc6]
00627FD4  C7 83 C2 00 00 00 02 00 00 00  MOV dword ptr [EBX + 0xc2],0x2
00627FDE  85 C0                     TEST EAX,EAX
00627FE0  0F 8C A6 0B 00 00         JL 0x00628b8c
00627FE6  8B 0D 98 75 80 00         MOV ECX,dword ptr [0x00807598]
00627FEC  6A 00                     PUSH 0x0
00627FEE  50                        PUSH EAX
00627FEF  E8 AC 2A 0C 00            CALL 0x006eaaa0
00627FF4  8B 45 88                  MOV EAX,dword ptr [EBP + -0x78]
00627FF7  C6 83 C1 00 00 00 01      MOV byte ptr [EBX + 0xc1],0x1
00627FFE  A3 F8 8D 85 00            MOV [0x00858df8],EAX
00628003  33 C0                     XOR EAX,EAX
00628005  5F                        POP EDI
00628006  5E                        POP ESI
00628007  5B                        POP EBX
00628008  8B E5                     MOV ESP,EBP
0062800A  5D                        POP EBP
0062800B  C2 04 00                  RET 0x4
LAB_0062800e:
0062800E  56                        PUSH ESI
0062800F  8B 75 F4                  MOV ESI,dword ptr [EBP + -0xc]
00628012  8B CE                     MOV ECX,ESI
00628014  E8 54 B9 DD FF            CALL 0x0040396d
00628019  B9 0B 00 00 00            MOV ECX,0xb
0062801E  33 C0                     XOR EAX,EAX
00628020  8D BE D7 00 00 00         LEA EDI,[ESI + 0xd7]
00628026  F3 AB                     STOSD.REP ES:EDI
00628028  AA                        STOSB ES:EDI
00628029  8B 86 C2 00 00 00         MOV EAX,dword ptr [ESI + 0xc2]
0062802F  83 F8 03                  CMP EAX,0x3
00628032  75 20                     JNZ 0x00628054
00628034  8B CE                     MOV ECX,ESI
00628036  E8 90 B0 DD FF            CALL 0x004030cb
0062803B  8B 45 88                  MOV EAX,dword ptr [EBP + -0x78]
0062803E  89 9E C2 00 00 00         MOV dword ptr [ESI + 0xc2],EBX
00628044  A3 F8 8D 85 00            MOV [0x00858df8],EAX
00628049  33 C0                     XOR EAX,EAX
0062804B  5F                        POP EDI
0062804C  5E                        POP ESI
0062804D  5B                        POP EBX
0062804E  8B E5                     MOV ESP,EBP
00628050  5D                        POP EBP
00628051  C2 04 00                  RET 0x4
LAB_00628054:
00628054  8A 8E D6 00 00 00         MOV CL,byte ptr [ESI + 0xd6]
0062805A  84 C9                     TEST CL,CL
0062805C  0F 84 2A 0B 00 00         JZ 0x00628b8c
00628062  83 F8 02                  CMP EAX,0x2
00628065  0F 85 21 0B 00 00         JNZ 0x00628b8c
0062806B  6A 01                     PUSH 0x1
0062806D  8B CE                     MOV ECX,ESI
0062806F  E8 B3 D6 DD FF            CALL 0x00405727
00628074  8B 45 88                  MOV EAX,dword ptr [EBP + -0x78]
00628077  A3 F8 8D 85 00            MOV [0x00858df8],EAX
0062807C  33 C0                     XOR EAX,EAX
0062807E  5F                        POP EDI
0062807F  5E                        POP ESI
00628080  5B                        POP EBX
00628081  8B E5                     MOV ESP,EBP
00628083  5D                        POP EBP
00628084  C2 04 00                  RET 0x4
LAB_00628087:
00628087  8B 75 F4                  MOV ESI,dword ptr [EBP + -0xc]
0062808A  8A 86 D6 00 00 00         MOV AL,byte ptr [ESI + 0xd6]
00628090  84 C0                     TEST AL,AL
00628092  75 20                     JNZ 0x006280b4
00628094  8A 46 40                  MOV AL,byte ptr [ESI + 0x40]
00628097  84 C0                     TEST AL,AL
00628099  74 19                     JZ 0x006280b4
0062809B  8B CE                     MOV ECX,ESI
0062809D  E8 32 93 DD FF            CALL 0x004013d4
006280A2  84 C0                     TEST AL,AL
006280A4  88 86 D6 00 00 00         MOV byte ptr [ESI + 0xd6],AL
006280AA  74 08                     JZ 0x006280b4
006280AC  53                        PUSH EBX
006280AD  8B CE                     MOV ECX,ESI
006280AF  E8 1C D8 DD FF            CALL 0x004058d0
LAB_006280b4:
006280B4  8B 86 C2 00 00 00         MOV EAX,dword ptr [ESI + 0xc2]
006280BA  48                        DEC EAX
006280BB  83 F8 03                  CMP EAX,0x3
006280BE  0F 87 C8 0A 00 00         JA 0x00628b8c
switchD_006280c4::switchD:
006280C4  FF 24 85 EC 8B 62 00      JMP dword ptr [EAX*0x4 + 0x628bec]
switchD_006280c4::caseD_1:
006280CB  8B 4E 3C                  MOV ECX,dword ptr [ESI + 0x3c]
006280CE  49                        DEC ECX
006280CF  8B C1                     MOV EAX,ECX
006280D1  89 4E 3C                  MOV dword ptr [ESI + 0x3c],ECX
006280D4  3B C3                     CMP EAX,EBX
006280D6  0F 8F B0 0A 00 00         JG 0x00628b8c
006280DC  8B 86 B2 00 00 00         MOV EAX,dword ptr [ESI + 0xb2]
006280E2  8B 8E B6 00 00 00         MOV ECX,dword ptr [ESI + 0xb6]
006280E8  3B C1                     CMP EAX,ECX
006280EA  C7 86 C2 00 00 00 02 00 00 00  MOV dword ptr [ESI + 0xc2],0x2
006280F4  7C 06                     JL 0x006280fc
006280F6  89 9E B2 00 00 00         MOV dword ptr [ESI + 0xb2],EBX
LAB_006280fc:
006280FC  8A 86 D6 00 00 00         MOV AL,byte ptr [ESI + 0xd6]
00628102  84 C0                     TEST AL,AL
00628104  0F 84 82 0A 00 00         JZ 0x00628b8c
0062810A  8B 86 C6 00 00 00         MOV EAX,dword ptr [ESI + 0xc6]
00628110  3B C3                     CMP EAX,EBX
00628112  0F 8C 74 0A 00 00         JL 0x00628b8c
00628118  8B 0D 98 75 80 00         MOV ECX,dword ptr [0x00807598]
0062811E  53                        PUSH EBX
0062811F  50                        PUSH EAX
00628120  E8 7B 29 0C 00            CALL 0x006eaaa0
00628125  8B 8E B2 00 00 00         MOV ECX,dword ptr [ESI + 0xb2]
0062812B  8B 96 C6 00 00 00         MOV EDX,dword ptr [ESI + 0xc6]
00628131  51                        PUSH ECX
00628132  C6 86 C1 00 00 00 01      MOV byte ptr [ESI + 0xc1],0x1
00628139  8B 0D 98 75 80 00         MOV ECX,dword ptr [0x00807598]
0062813F  53                        PUSH EBX
00628140  52                        PUSH EDX
00628141  E8 2A 21 0C 00            CALL 0x006ea270
00628146  DB 46 46                  FILD dword ptr [ESI + 0x46]
00628149  8B 96 C6 00 00 00         MOV EDX,dword ptr [ESI + 0xc6]
0062814F  51                        PUSH ECX
00628150  D8 0D F8 04 79 00         FMUL float ptr [0x007904f8]
00628156  D8 0D F0 04 79 00         FMUL float ptr [0x007904f0]
0062815C  D9 55 F8                  FST float ptr [EBP + -0x8]
0062815F  D9 5E 6A                  FSTP float ptr [ESI + 0x6a]
00628162  DB 46 4A                  FILD dword ptr [ESI + 0x4a]
00628165  8B 4D F8                  MOV ECX,dword ptr [EBP + -0x8]
00628168  D8 0D F8 04 79 00         FMUL float ptr [0x007904f8]
0062816E  D8 0D F0 04 79 00         FMUL float ptr [0x007904f0]
00628174  D9 55 FC                  FST float ptr [EBP + -0x4]
00628177  D9 5E 6E                  FSTP float ptr [ESI + 0x6e]
0062817A  DB 46 4E                  FILD dword ptr [ESI + 0x4e]
0062817D  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
00628180  D8 0D F8 04 79 00         FMUL float ptr [0x007904f8]
00628186  D8 0D F0 04 79 00         FMUL float ptr [0x007904f0]
0062818C  D9 56 72                  FST float ptr [ESI + 0x72]
0062818F  D8 05 FC 04 79 00         FADD float ptr [0x007904fc]
00628195  D9 1C 24                  FSTP float ptr [ESP]
00628198  50                        PUSH EAX
00628199  51                        PUSH ECX
0062819A  8B 0D 98 75 80 00         MOV ECX,dword ptr [0x00807598]
006281A0  52                        PUSH EDX
006281A1  E8 BA 27 0C 00            CALL 0x006ea960
006281A6  8B 3D 88 2A 80 00         MOV EDI,dword ptr [0x00802a88]
006281AC  3B FB                     CMP EDI,EBX
006281AE  0F 84 D8 09 00 00         JZ 0x00628b8c
006281B4  8B 4E 4E                  MOV ECX,dword ptr [ESI + 0x4e]
006281B7  B8 1F 85 EB 51            MOV EAX,0x51eb851f
006281BC  3B CB                     CMP ECX,EBX
006281BE  7C 14                     JL 0x006281d4
006281C0  F7 E9                     IMUL ECX
006281C2  C1 FA 06                  SAR EDX,0x6
006281C5  8B C2                     MOV EAX,EDX
006281C7  C1 E8 1F                  SHR EAX,0x1f
006281CA  03 D0                     ADD EDX,EAX
006281CC  0F BF CA                  MOVSX ECX,DX
006281CF  89 4D F8                  MOV dword ptr [EBP + -0x8],ECX
006281D2  EB 13                     JMP 0x006281e7
LAB_006281d4:
006281D4  F7 E9                     IMUL ECX
006281D6  C1 FA 06                  SAR EDX,0x6
006281D9  8B C2                     MOV EAX,EDX
006281DB  C1 E8 1F                  SHR EAX,0x1f
006281DE  03 D0                     ADD EDX,EAX
006281E0  0F BF C2                  MOVSX EAX,DX
006281E3  48                        DEC EAX
006281E4  89 45 F8                  MOV dword ptr [EBP + -0x8],EAX
LAB_006281e7:
006281E7  8B 4E 4A                  MOV ECX,dword ptr [ESI + 0x4a]
006281EA  B8 79 19 8C 02            MOV EAX,0x28c1979
006281EF  3B CB                     CMP ECX,EBX
006281F1  7C 10                     JL 0x00628203
006281F3  F7 E9                     IMUL ECX
006281F5  D1 FA                     SAR EDX,0x1
006281F7  8B CA                     MOV ECX,EDX
006281F9  C1 E9 1F                  SHR ECX,0x1f
006281FC  03 D1                     ADD EDX,ECX
006281FE  0F BF DA                  MOVSX EBX,DX
00628201  EB 0F                     JMP 0x00628212
LAB_00628203:
00628203  F7 E9                     IMUL ECX
00628205  D1 FA                     SAR EDX,0x1
00628207  8B C2                     MOV EAX,EDX
00628209  C1 E8 1F                  SHR EAX,0x1f
0062820C  03 D0                     ADD EDX,EAX
0062820E  0F BF DA                  MOVSX EBX,DX
00628211  4B                        DEC EBX
LAB_00628212:
00628212  8B 4E 46                  MOV ECX,dword ptr [ESI + 0x46]
00628215  B8 79 19 8C 02            MOV EAX,0x28c1979
0062821A  85 C9                     TEST ECX,ECX
0062821C  7C 10                     JL 0x0062822e
0062821E  F7 E9                     IMUL ECX
00628220  D1 FA                     SAR EDX,0x1
00628222  8B CA                     MOV ECX,EDX
00628224  C1 E9 1F                  SHR ECX,0x1f
00628227  03 D1                     ADD EDX,ECX
00628229  0F BF C2                  MOVSX EAX,DX
0062822C  EB 0F                     JMP 0x0062823d
LAB_0062822e:
0062822E  F7 E9                     IMUL ECX
00628230  D1 FA                     SAR EDX,0x1
00628232  8B C2                     MOV EAX,EDX
00628234  C1 E8 1F                  SHR EAX,0x1f
00628237  03 D0                     ADD EDX,EAX
00628239  0F BF C2                  MOVSX EAX,DX
0062823C  48                        DEC EAX
LAB_0062823d:
0062823D  80 3D 4D 87 80 00 FF      CMP byte ptr [0x0080874d],0xff
00628244  0F 84 96 00 00 00         JZ 0x006282e0
0062824A  8B 8F F8 00 00 00         MOV ECX,dword ptr [EDI + 0xf8]
00628250  85 C9                     TEST ECX,ECX
00628252  0F 84 88 00 00 00         JZ 0x006282e0
00628258  8D 4D E4                  LEA ECX,[EBP + -0x1c]
0062825B  8D 55 E8                  LEA EDX,[EBP + -0x18]
0062825E  51                        PUSH ECX
0062825F  52                        PUSH EDX
00628260  53                        PUSH EBX
00628261  50                        PUSH EAX
00628262  8B 87 0C 01 00 00         MOV EAX,dword ptr [EDI + 0x10c]
00628268  8B CF                     MOV ECX,EDI
0062826A  50                        PUSH EAX
0062826B  E8 E3 BC DD FF            CALL 0x00403f53
00628270  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
00628273  85 C0                     TEST EAX,EAX
00628275  7C 69                     JL 0x006282e0
00628277  8B D8                     MOV EBX,EAX
00628279  83 FB 05                  CMP EBX,0x5
0062827C  7D 62                     JGE 0x006282e0
0062827E  8B 4D E8                  MOV ECX,dword ptr [EBP + -0x18]
00628281  8B 55 E4                  MOV EDX,dword ptr [EBP + -0x1c]
00628284  85 C9                     TEST ECX,ECX
LAB_00628286:
00628286  7C 1E                     JL 0x006282a6
00628288  3B 4F 30                  CMP ECX,dword ptr [EDI + 0x30]
0062828B  7D 19                     JGE 0x006282a6
0062828D  8B 04 9D D0 AE 79 00      MOV EAX,dword ptr [EBX*0x4 + 0x79aed0]
00628294  03 C2                     ADD EAX,EDX
00628296  85 C0                     TEST EAX,EAX
00628298  7C 0C                     JL 0x006282a6
0062829A  3B 47 34                  CMP EAX,dword ptr [EDI + 0x34]
0062829D  7D 07                     JGE 0x006282a6
0062829F  B8 01 00 00 00            MOV EAX,0x1
006282A4  EB 02                     JMP 0x006282a8
LAB_006282a6:
006282A6  33 C0                     XOR EAX,EAX
LAB_006282a8:
006282A8  85 C0                     TEST EAX,EAX
006282AA  74 26                     JZ 0x006282d2
006282AC  8B 47 4C                  MOV EAX,dword ptr [EDI + 0x4c]
006282AF  85 C0                     TEST EAX,EAX
006282B1  74 1F                     JZ 0x006282d2
006282B3  8B 1C 9D D0 AE 79 00      MOV EBX,dword ptr [EBX*0x4 + 0x79aed0]
006282BA  03 DA                     ADD EBX,EDX
006282BC  0F AF 5F 30               IMUL EBX,dword ptr [EDI + 0x30]
006282C0  03 D8                     ADD EBX,EAX
006282C2  33 C0                     XOR EAX,EAX
006282C4  8A 04 0B                  MOV AL,byte ptr [EBX + ECX*0x1]
006282C7  33 C9                     XOR ECX,ECX
006282C9  85 C0                     TEST EAX,EAX
006282CB  0F 95 C1                  SETNZ CL
006282CE  8B C1                     MOV EAX,ECX
006282D0  EB 13                     JMP 0x006282e5
LAB_006282d2:
006282D2  83 C8 FF                  OR EAX,0xffffffff
006282D5  33 C9                     XOR ECX,ECX
006282D7  85 C0                     TEST EAX,EAX
006282D9  0F 95 C1                  SETNZ CL
006282DC  8B C1                     MOV EAX,ECX
006282DE  EB 05                     JMP 0x006282e5
LAB_006282e0:
006282E0  B8 01 00 00 00            MOV EAX,0x1
LAB_006282e5:
006282E5  83 F8 01                  CMP EAX,0x1
006282E8  8A 86 C1 00 00 00         MOV AL,byte ptr [ESI + 0xc1]
006282EE  0F 85 35 08 00 00         JNZ 0x00628b29
006282F4  E9 FA 07 00 00            JMP 0x00628af3
switchD_006280c4::caseD_2:
006282F9  8B 0D 38 2A 80 00         MOV ECX,dword ptr [0x00802a38]
006282FF  8B 91 E4 00 00 00         MOV EDX,dword ptr [ECX + 0xe4]
00628305  8B CE                     MOV ECX,ESI
00628307  52                        PUSH EDX
00628308  E8 BD C7 DD FF            CALL 0x00404aca
0062830D  8B F8                     MOV EDI,EAX
0062830F  3B FB                     CMP EDI,EBX
00628311  0F 8E 37 02 00 00         JLE 0x0062854e
00628317  A1 38 2A 80 00            MOV EAX,[0x00802a38]
0062831C  8B 96 AA 00 00 00         MOV EDX,dword ptr [ESI + 0xaa]
00628322  8A 8E D6 00 00 00         MOV CL,byte ptr [ESI + 0xd6]
00628328  8B 80 E4 00 00 00         MOV EAX,dword ptr [EAX + 0xe4]
0062832E  8B F8                     MOV EDI,EAX
00628330  2B FA                     SUB EDI,EDX
00628332  84 C9                     TEST CL,CL
00628334  74 54                     JZ 0x0062838a
00628336  A8 01                     TEST AL,0x1
00628338  75 50                     JNZ 0x0062838a
0062833A  8B 4E 14                  MOV ECX,dword ptr [ESI + 0x14]
0062833D  81 E1 00 FF 00 00         AND ECX,0xff00
00628343  81 F9 00 04 00 00         CMP ECX,0x400
00628349  75 1A                     JNZ 0x00628365
0062834B  8B 56 5A                  MOV EDX,dword ptr [ESI + 0x5a]
0062834E  8B 46 4E                  MOV EAX,dword ptr [ESI + 0x4e]
00628351  83 C2 05                  ADD EDX,0x5
00628354  3B C2                     CMP EAX,EDX
00628356  7D 32                     JGE 0x0062838a
00628358  53                        PUSH EBX
00628359  53                        PUSH EBX
0062835A  6A FF                     PUSH -0x1
0062835C  53                        PUSH EBX
0062835D  53                        PUSH EBX
0062835E  53                        PUSH EBX
0062835F  53                        PUSH EBX
00628360  53                        PUSH EBX
00628361  53                        PUSH EBX
00628362  50                        PUSH EAX
00628363  EB 0E                     JMP 0x00628373
LAB_00628365:
00628365  8B 56 4E                  MOV EDX,dword ptr [ESI + 0x4e]
00628368  53                        PUSH EBX
00628369  53                        PUSH EBX
0062836A  6A FF                     PUSH -0x1
0062836C  53                        PUSH EBX
0062836D  53                        PUSH EBX
0062836E  53                        PUSH EBX
0062836F  53                        PUSH EBX
00628370  53                        PUSH EBX
00628371  53                        PUSH EBX
00628372  52                        PUSH EDX
LAB_00628373:
00628373  8B 46 4A                  MOV EAX,dword ptr [ESI + 0x4a]
00628376  8B 4E 46                  MOV ECX,dword ptr [ESI + 0x46]
00628379  50                        PUSH EAX
0062837A  51                        PUSH ECX
0062837B  8B 0D 7C 2A 80 00         MOV ECX,dword ptr [0x00802a7c]
00628381  53                        PUSH EBX
00628382  53                        PUSH EBX
00628383  6A 01                     PUSH 0x1
00628385  E8 A9 90 DD FF            CALL 0x00401433
LAB_0062838a:
0062838A  83 FF 19                  CMP EDI,0x19
0062838D  72 2E                     JC 0x006283bd
0062838F  83 FF 2D                  CMP EDI,0x2d
00628392  73 11                     JNC 0x006283a5
00628394  8B 15 38 2A 80 00         MOV EDX,dword ptr [0x00802a38]
0062839A  F6 82 E4 00 00 00 01      TEST byte ptr [EDX + 0xe4],0x1
006283A1  75 20                     JNZ 0x006283c3
006283A3  EB 18                     JMP 0x006283bd
LAB_006283a5:
006283A5  A1 38 2A 80 00            MOV EAX,[0x00802a38]
006283AA  33 D2                     XOR EDX,EDX
006283AC  B9 03 00 00 00            MOV ECX,0x3
006283B1  8B 80 E4 00 00 00         MOV EAX,dword ptr [EAX + 0xe4]
006283B7  F7 F1                     DIV ECX
006283B9  85 D2                     TEST EDX,EDX
006283BB  75 06                     JNZ 0x006283c3
LAB_006283bd:
006283BD  FF 86 B2 00 00 00         INC dword ptr [ESI + 0xb2]
LAB_006283c3:
006283C3  8B 96 B2 00 00 00         MOV EDX,dword ptr [ESI + 0xb2]
006283C9  8B 86 B6 00 00 00         MOV EAX,dword ptr [ESI + 0xb6]
006283CF  3B D0                     CMP EDX,EAX
006283D1  7C 06                     JL 0x006283d9
006283D3  89 9E B2 00 00 00         MOV dword ptr [ESI + 0xb2],EBX
LAB_006283d9:
006283D9  8A 86 D6 00 00 00         MOV AL,byte ptr [ESI + 0xd6]
006283DF  84 C0                     TEST AL,AL
006283E1  0F 84 A5 07 00 00         JZ 0x00628b8c
006283E7  8B 86 B2 00 00 00         MOV EAX,dword ptr [ESI + 0xb2]
006283ED  8B 8E C6 00 00 00         MOV ECX,dword ptr [ESI + 0xc6]
006283F3  50                        PUSH EAX
006283F4  53                        PUSH EBX
006283F5  51                        PUSH ECX
006283F6  8B 0D 98 75 80 00         MOV ECX,dword ptr [0x00807598]
006283FC  E8 6F 1E 0C 00            CALL 0x006ea270
00628401  DB 46 46                  FILD dword ptr [ESI + 0x46]
00628404  51                        PUSH ECX
00628405  8B 8E C6 00 00 00         MOV ECX,dword ptr [ESI + 0xc6]
0062840B  D8 0D F8 04 79 00         FMUL float ptr [0x007904f8]
00628411  D8 0D F0 04 79 00         FMUL float ptr [0x007904f0]
00628417  D9 55 F8                  FST float ptr [EBP + -0x8]
0062841A  D9 5E 6A                  FSTP float ptr [ESI + 0x6a]
0062841D  DB 46 4A                  FILD dword ptr [ESI + 0x4a]
00628420  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
00628423  D8 0D F8 04 79 00         FMUL float ptr [0x007904f8]
00628429  D8 0D F0 04 79 00         FMUL float ptr [0x007904f0]
0062842F  D9 55 FC                  FST float ptr [EBP + -0x4]
00628432  D9 5E 6E                  FSTP float ptr [ESI + 0x6e]
00628435  DB 46 4E                  FILD dword ptr [ESI + 0x4e]
00628438  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
0062843B  D8 0D F8 04 79 00         FMUL float ptr [0x007904f8]
00628441  D8 0D F0 04 79 00         FMUL float ptr [0x007904f0]
00628447  D9 56 72                  FST float ptr [ESI + 0x72]
0062844A  D8 05 FC 04 79 00         FADD float ptr [0x007904fc]
00628450  D9 1C 24                  FSTP float ptr [ESP]
00628453  52                        PUSH EDX
00628454  50                        PUSH EAX
00628455  51                        PUSH ECX
00628456  8B 0D 98 75 80 00         MOV ECX,dword ptr [0x00807598]
0062845C  E8 FF 24 0C 00            CALL 0x006ea960
00628461  8B 3D 88 2A 80 00         MOV EDI,dword ptr [0x00802a88]
00628467  3B FB                     CMP EDI,EBX
00628469  0F 84 1D 07 00 00         JZ 0x00628b8c
0062846F  8B 4E 4E                  MOV ECX,dword ptr [ESI + 0x4e]
00628472  B8 1F 85 EB 51            MOV EAX,0x51eb851f
00628477  3B CB                     CMP ECX,EBX
00628479  7C 14                     JL 0x0062848f
0062847B  F7 E9                     IMUL ECX
0062847D  C1 FA 06                  SAR EDX,0x6
00628480  8B C2                     MOV EAX,EDX
00628482  C1 E8 1F                  SHR EAX,0x1f
00628485  03 D0                     ADD EDX,EAX
00628487  0F BF CA                  MOVSX ECX,DX
0062848A  89 4D F8                  MOV dword ptr [EBP + -0x8],ECX
0062848D  EB 13                     JMP 0x006284a2
LAB_0062848f:
0062848F  F7 E9                     IMUL ECX
00628491  C1 FA 06                  SAR EDX,0x6
00628494  8B C2                     MOV EAX,EDX
00628496  C1 E8 1F                  SHR EAX,0x1f
00628499  03 D0                     ADD EDX,EAX
0062849B  0F BF C2                  MOVSX EAX,DX
0062849E  48                        DEC EAX
0062849F  89 45 F8                  MOV dword ptr [EBP + -0x8],EAX
LAB_006284a2:
006284A2  8B 4E 4A                  MOV ECX,dword ptr [ESI + 0x4a]
006284A5  B8 79 19 8C 02            MOV EAX,0x28c1979
006284AA  3B CB                     CMP ECX,EBX
006284AC  7C 10                     JL 0x006284be
006284AE  F7 E9                     IMUL ECX
006284B0  D1 FA                     SAR EDX,0x1
006284B2  8B CA                     MOV ECX,EDX
006284B4  C1 E9 1F                  SHR ECX,0x1f
006284B7  03 D1                     ADD EDX,ECX
006284B9  0F BF DA                  MOVSX EBX,DX
006284BC  EB 0F                     JMP 0x006284cd
LAB_006284be:
006284BE  F7 E9                     IMUL ECX
006284C0  D1 FA                     SAR EDX,0x1
006284C2  8B C2                     MOV EAX,EDX
006284C4  C1 E8 1F                  SHR EAX,0x1f
006284C7  03 D0                     ADD EDX,EAX
006284C9  0F BF DA                  MOVSX EBX,DX
006284CC  4B                        DEC EBX
LAB_006284cd:
006284CD  8B 4E 46                  MOV ECX,dword ptr [ESI + 0x46]
006284D0  B8 79 19 8C 02            MOV EAX,0x28c1979
006284D5  85 C9                     TEST ECX,ECX
006284D7  7C 10                     JL 0x006284e9
006284D9  F7 E9                     IMUL ECX
006284DB  D1 FA                     SAR EDX,0x1
006284DD  8B CA                     MOV ECX,EDX
006284DF  C1 E9 1F                  SHR ECX,0x1f
006284E2  03 D1                     ADD EDX,ECX
006284E4  0F BF C2                  MOVSX EAX,DX
006284E7  EB 0F                     JMP 0x006284f8
LAB_006284e9:
006284E9  F7 E9                     IMUL ECX
006284EB  D1 FA                     SAR EDX,0x1
006284ED  8B C2                     MOV EAX,EDX
006284EF  C1 E8 1F                  SHR EAX,0x1f
006284F2  03 D0                     ADD EDX,EAX
006284F4  0F BF C2                  MOVSX EAX,DX
006284F7  48                        DEC EAX
LAB_006284f8:
006284F8  80 3D 4D 87 80 00 FF      CMP byte ptr [0x0080874d],0xff
006284FF  0F 84 DB FD FF FF         JZ 0x006282e0
00628505  8B 8F F8 00 00 00         MOV ECX,dword ptr [EDI + 0xf8]
0062850B  85 C9                     TEST ECX,ECX
0062850D  0F 84 CD FD FF FF         JZ 0x006282e0
00628513  8D 4D DC                  LEA ECX,[EBP + -0x24]
00628516  8D 55 E0                  LEA EDX,[EBP + -0x20]
00628519  51                        PUSH ECX
0062851A  52                        PUSH EDX
0062851B  53                        PUSH EBX
0062851C  50                        PUSH EAX
0062851D  8B 87 0C 01 00 00         MOV EAX,dword ptr [EDI + 0x10c]
00628523  8B CF                     MOV ECX,EDI
00628525  50                        PUSH EAX
00628526  E8 28 BA DD FF            CALL 0x00403f53
0062852B  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
0062852E  85 C0                     TEST EAX,EAX
00628530  0F 8C AA FD FF FF         JL 0x006282e0
00628536  8B D8                     MOV EBX,EAX
00628538  83 FB 05                  CMP EBX,0x5
0062853B  0F 8D 9F FD FF FF         JGE 0x006282e0
00628541  8B 4D E0                  MOV ECX,dword ptr [EBP + -0x20]
00628544  8B 55 DC                  MOV EDX,dword ptr [EBP + -0x24]
00628547  85 C9                     TEST ECX,ECX
00628549  E9 38 FD FF FF            JMP 0x00628286
LAB_0062854e:
0062854E  8B CE                     MOV ECX,ESI
00628550  E8 60 C1 DD FF            CALL 0x004046b5
00628555  8B CE                     MOV ECX,ESI
00628557  E8 78 8E DD FF            CALL 0x004013d4
0062855C  84 C0                     TEST AL,AL
0062855E  88 86 D6 00 00 00         MOV byte ptr [ESI + 0xd6],AL
00628564  74 0B                     JZ 0x00628571
00628566  6A 01                     PUSH 0x1
00628568  8B CE                     MOV ECX,ESI
0062856A  E8 E4 D7 DD FF            CALL 0x00405d53
0062856F  EB 28                     JMP 0x00628599
LAB_00628571:
00628571  53                        PUSH EBX
00628572  8B CE                     MOV ECX,ESI
00628574  E8 DA D7 DD FF            CALL 0x00405d53
00628579  8B 86 C6 00 00 00         MOV EAX,dword ptr [ESI + 0xc6]
0062857F  3B C3                     CMP EAX,EBX
00628581  7C 16                     JL 0x00628599
00628583  8B 0D 98 75 80 00         MOV ECX,dword ptr [0x00807598]
00628589  50                        PUSH EAX
0062858A  E8 11 06 0C 00            CALL 0x006e8ba0
0062858F  C7 86 C6 00 00 00 FF FF FF FF  MOV dword ptr [ESI + 0xc6],0xffffffff
LAB_00628599:
00628599  83 FF FF                  CMP EDI,-0x1
0062859C  C7 86 C2 00 00 00 03 00 00 00  MOV dword ptr [ESI + 0xc2],0x3
006285A6  0F 85 E0 05 00 00         JNZ 0x00628b8c
006285AC  8B 45 88                  MOV EAX,dword ptr [EBP + -0x78]
006285AF  C7 46 76 02 00 00 00      MOV dword ptr [ESI + 0x76],0x2
006285B6  A3 F8 8D 85 00            MOV [0x00858df8],EAX
006285BB  33 C0                     XOR EAX,EAX
006285BD  5F                        POP EDI
006285BE  5E                        POP ESI
006285BF  5B                        POP EBX
006285C0  8B E5                     MOV ESP,EBP
006285C2  5D                        POP EBP
006285C3  C2 04 00                  RET 0x4
switchD_006280c4::caseD_3:
006285C6  8B 96 B2 00 00 00         MOV EDX,dword ptr [ESI + 0xb2]
006285CC  8A 8E BF 00 00 00         MOV CL,byte ptr [ESI + 0xbf]
006285D2  42                        INC EDX
006285D3  84 C9                     TEST CL,CL
006285D5  89 96 B2 00 00 00         MOV dword ptr [ESI + 0xb2],EDX
006285DB  8B C2                     MOV EAX,EDX
006285DD  74 27                     JZ 0x00628606
006285DF  83 F8 0F                  CMP EAX,0xf
006285E2  75 22                     JNZ 0x00628606
006285E4  8A 86 D6 00 00 00         MOV AL,byte ptr [ESI + 0xd6]
006285EA  84 C0                     TEST AL,AL
006285EC  74 18                     JZ 0x00628606
006285EE  8B 86 C6 00 00 00         MOV EAX,dword ptr [ESI + 0xc6]
006285F4  3B C3                     CMP EAX,EBX
006285F6  7C 0E                     JL 0x00628606
006285F8  8B 0D 98 75 80 00         MOV ECX,dword ptr [0x00807598]
006285FE  6A 01                     PUSH 0x1
00628600  50                        PUSH EAX
00628601  E8 AA 16 0C 00            CALL 0x006e9cb0
LAB_00628606:
00628606  8B 8E B2 00 00 00         MOV ECX,dword ptr [ESI + 0xb2]
0062860C  8B 86 B6 00 00 00         MOV EAX,dword ptr [ESI + 0xb6]
00628612  3B C8                     CMP ECX,EAX
00628614  75 21                     JNZ 0x00628637
00628616  8A 86 D6 00 00 00         MOV AL,byte ptr [ESI + 0xd6]
0062861C  84 C0                     TEST AL,AL
0062861E  74 17                     JZ 0x00628637
00628620  8B 86 C6 00 00 00         MOV EAX,dword ptr [ESI + 0xc6]
00628626  3B C3                     CMP EAX,EBX
00628628  7C 0D                     JL 0x00628637
0062862A  8B 0D 98 75 80 00         MOV ECX,dword ptr [0x00807598]
00628630  53                        PUSH EBX
00628631  50                        PUSH EAX
00628632  E8 09 17 0C 00            CALL 0x006e9d40
LAB_00628637:
00628637  83 BE B2 00 00 00 05      CMP dword ptr [ESI + 0xb2],0x5
0062863E  75 24                     JNZ 0x00628664
00628640  8B CE                     MOV ECX,ESI
00628642  E8 65 C4 DD FF            CALL 0x00404aac
00628647  85 C0                     TEST EAX,EAX
00628649  74 19                     JZ 0x00628664
0062864B  83 7E 76 02               CMP dword ptr [ESI + 0x76],0x2
0062864F  74 13                     JZ 0x00628664
00628651  8B 56 4E                  MOV EDX,dword ptr [ESI + 0x4e]
00628654  8B 46 4A                  MOV EAX,dword ptr [ESI + 0x4a]
00628657  8B 4E 46                  MOV ECX,dword ptr [ESI + 0x46]
0062865A  52                        PUSH EDX
0062865B  50                        PUSH EAX
0062865C  51                        PUSH ECX
0062865D  8B CE                     MOV ECX,ESI
0062865F  E8 07 97 DD FF            CALL 0x00401d6b
LAB_00628664:
00628664  8B 86 B2 00 00 00         MOV EAX,dword ptr [ESI + 0xb2]
0062866A  8B 8E BA 00 00 00         MOV ECX,dword ptr [ESI + 0xba]
00628670  3B C1                     CMP EAX,ECX
00628672  7C 20                     JL 0x00628694
00628674  8B CE                     MOV ECX,ESI
00628676  E8 50 AA DD FF            CALL 0x004030cb
0062867B  8B 45 88                  MOV EAX,dword ptr [EBP + -0x78]
0062867E  89 9E C2 00 00 00         MOV dword ptr [ESI + 0xc2],EBX
00628684  A3 F8 8D 85 00            MOV [0x00858df8],EAX
00628689  33 C0                     XOR EAX,EAX
0062868B  5F                        POP EDI
0062868C  5E                        POP ESI
0062868D  5B                        POP EBX
0062868E  8B E5                     MOV ESP,EBP
00628690  5D                        POP EBP
00628691  C2 04 00                  RET 0x4
LAB_00628694:
00628694  8A 8E D6 00 00 00         MOV CL,byte ptr [ESI + 0xd6]
0062869A  84 C9                     TEST CL,CL
0062869C  0F 84 EA 04 00 00         JZ 0x00628b8c
006286A2  3B 86 B6 00 00 00         CMP EAX,dword ptr [ESI + 0xb6]
006286A8  0F 8D FD 01 00 00         JGE 0x006288ab
006286AE  8B 96 C6 00 00 00         MOV EDX,dword ptr [ESI + 0xc6]
006286B4  8B 0D 98 75 80 00         MOV ECX,dword ptr [0x00807598]
006286BA  50                        PUSH EAX
006286BB  6A 00                     PUSH 0x0
006286BD  52                        PUSH EDX
006286BE  E8 AD 1B 0C 00            CALL 0x006ea270
006286C3  DB 46 46                  FILD dword ptr [ESI + 0x46]
006286C6  8B 96 C6 00 00 00         MOV EDX,dword ptr [ESI + 0xc6]
006286CC  51                        PUSH ECX
006286CD  D8 0D F8 04 79 00         FMUL float ptr [0x007904f8]
006286D3  D8 0D F0 04 79 00         FMUL float ptr [0x007904f0]
006286D9  D9 55 F8                  FST float ptr [EBP + -0x8]
006286DC  D9 5E 6A                  FSTP float ptr [ESI + 0x6a]
006286DF  DB 46 4A                  FILD dword ptr [ESI + 0x4a]
006286E2  8B 4D F8                  MOV ECX,dword ptr [EBP + -0x8]
006286E5  D8 0D F8 04 79 00         FMUL float ptr [0x007904f8]
006286EB  D8 0D F0 04 79 00         FMUL float ptr [0x007904f0]
006286F1  D9 55 FC                  FST float ptr [EBP + -0x4]
006286F4  D9 5E 6E                  FSTP float ptr [ESI + 0x6e]
006286F7  DB 46 4E                  FILD dword ptr [ESI + 0x4e]
006286FA  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
006286FD  D8 0D F8 04 79 00         FMUL float ptr [0x007904f8]
00628703  D8 0D F0 04 79 00         FMUL float ptr [0x007904f0]
00628709  D9 56 72                  FST float ptr [ESI + 0x72]
0062870C  D8 05 FC 04 79 00         FADD float ptr [0x007904fc]
00628712  D9 1C 24                  FSTP float ptr [ESP]
00628715  50                        PUSH EAX
00628716  51                        PUSH ECX
00628717  8B 0D 98 75 80 00         MOV ECX,dword ptr [0x00807598]
0062871D  52                        PUSH EDX
0062871E  E8 3D 22 0C 00            CALL 0x006ea960
00628723  8B 3D 88 2A 80 00         MOV EDI,dword ptr [0x00802a88]
00628729  85 FF                     TEST EDI,EDI
0062872B  0F 84 7A 01 00 00         JZ 0x006288ab
00628731  8B 4E 4E                  MOV ECX,dword ptr [ESI + 0x4e]
00628734  B8 1F 85 EB 51            MOV EAX,0x51eb851f
00628739  85 C9                     TEST ECX,ECX
0062873B  7C 14                     JL 0x00628751
0062873D  F7 E9                     IMUL ECX
0062873F  C1 FA 06                  SAR EDX,0x6
00628742  8B C2                     MOV EAX,EDX
00628744  C1 E8 1F                  SHR EAX,0x1f
00628747  03 D0                     ADD EDX,EAX
00628749  0F BF CA                  MOVSX ECX,DX
0062874C  89 4D F8                  MOV dword ptr [EBP + -0x8],ECX
0062874F  EB 13                     JMP 0x00628764
LAB_00628751:
00628751  F7 E9                     IMUL ECX
00628753  C1 FA 06                  SAR EDX,0x6
00628756  8B C2                     MOV EAX,EDX
00628758  C1 E8 1F                  SHR EAX,0x1f
0062875B  03 D0                     ADD EDX,EAX
0062875D  0F BF C2                  MOVSX EAX,DX
00628760  48                        DEC EAX
00628761  89 45 F8                  MOV dword ptr [EBP + -0x8],EAX
LAB_00628764:
00628764  8B 4E 4A                  MOV ECX,dword ptr [ESI + 0x4a]
00628767  B8 79 19 8C 02            MOV EAX,0x28c1979
0062876C  85 C9                     TEST ECX,ECX
0062876E  7C 10                     JL 0x00628780
00628770  F7 E9                     IMUL ECX
00628772  D1 FA                     SAR EDX,0x1
00628774  8B CA                     MOV ECX,EDX
00628776  C1 E9 1F                  SHR ECX,0x1f
00628779  03 D1                     ADD EDX,ECX
0062877B  0F BF DA                  MOVSX EBX,DX
0062877E  EB 0F                     JMP 0x0062878f
LAB_00628780:
00628780  F7 E9                     IMUL ECX
00628782  D1 FA                     SAR EDX,0x1
00628784  8B C2                     MOV EAX,EDX
00628786  C1 E8 1F                  SHR EAX,0x1f
00628789  03 D0                     ADD EDX,EAX
0062878B  0F BF DA                  MOVSX EBX,DX
0062878E  4B                        DEC EBX
LAB_0062878f:
0062878F  8B 4E 46                  MOV ECX,dword ptr [ESI + 0x46]
00628792  B8 79 19 8C 02            MOV EAX,0x28c1979
00628797  85 C9                     TEST ECX,ECX
00628799  7C 10                     JL 0x006287ab
0062879B  F7 E9                     IMUL ECX
0062879D  D1 FA                     SAR EDX,0x1
0062879F  8B CA                     MOV ECX,EDX
006287A1  C1 E9 1F                  SHR ECX,0x1f
006287A4  03 D1                     ADD EDX,ECX
006287A6  0F BF C2                  MOVSX EAX,DX
006287A9  EB 0F                     JMP 0x006287ba
LAB_006287ab:
006287AB  F7 E9                     IMUL ECX
006287AD  D1 FA                     SAR EDX,0x1
006287AF  8B C2                     MOV EAX,EDX
006287B1  C1 E8 1F                  SHR EAX,0x1f
006287B4  03 D0                     ADD EDX,EAX
006287B6  0F BF C2                  MOVSX EAX,DX
006287B9  48                        DEC EAX
LAB_006287ba:
006287BA  80 3D 4D 87 80 00 FF      CMP byte ptr [0x0080874d],0xff
006287C1  0F 84 96 00 00 00         JZ 0x0062885d
006287C7  8B 8F F8 00 00 00         MOV ECX,dword ptr [EDI + 0xf8]
006287CD  85 C9                     TEST ECX,ECX
006287CF  0F 84 88 00 00 00         JZ 0x0062885d
006287D5  8D 4D D4                  LEA ECX,[EBP + -0x2c]
006287D8  8D 55 D8                  LEA EDX,[EBP + -0x28]
006287DB  51                        PUSH ECX
006287DC  52                        PUSH EDX
006287DD  53                        PUSH EBX
006287DE  50                        PUSH EAX
006287DF  8B 87 0C 01 00 00         MOV EAX,dword ptr [EDI + 0x10c]
006287E5  8B CF                     MOV ECX,EDI
006287E7  50                        PUSH EAX
006287E8  E8 66 B7 DD FF            CALL 0x00403f53
006287ED  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
006287F0  85 C0                     TEST EAX,EAX
006287F2  7C 69                     JL 0x0062885d
006287F4  8B D8                     MOV EBX,EAX
006287F6  83 FB 05                  CMP EBX,0x5
006287F9  7D 62                     JGE 0x0062885d
006287FB  8B 4D D8                  MOV ECX,dword ptr [EBP + -0x28]
006287FE  8B 55 D4                  MOV EDX,dword ptr [EBP + -0x2c]
00628801  85 C9                     TEST ECX,ECX
00628803  7C 1E                     JL 0x00628823
00628805  3B 4F 30                  CMP ECX,dword ptr [EDI + 0x30]
00628808  7D 19                     JGE 0x00628823
0062880A  8B 04 9D D0 AE 79 00      MOV EAX,dword ptr [EBX*0x4 + 0x79aed0]
00628811  03 C2                     ADD EAX,EDX
00628813  85 C0                     TEST EAX,EAX
00628815  7C 0C                     JL 0x00628823
00628817  3B 47 34                  CMP EAX,dword ptr [EDI + 0x34]
0062881A  7D 07                     JGE 0x00628823
0062881C  B8 01 00 00 00            MOV EAX,0x1
00628821  EB 02                     JMP 0x00628825
LAB_00628823:
00628823  33 C0                     XOR EAX,EAX
LAB_00628825:
00628825  85 C0                     TEST EAX,EAX
00628827  74 26                     JZ 0x0062884f
00628829  8B 47 4C                  MOV EAX,dword ptr [EDI + 0x4c]
0062882C  85 C0                     TEST EAX,EAX
0062882E  74 1F                     JZ 0x0062884f
00628830  8B 1C 9D D0 AE 79 00      MOV EBX,dword ptr [EBX*0x4 + 0x79aed0]
00628837  03 DA                     ADD EBX,EDX
00628839  0F AF 5F 30               IMUL EBX,dword ptr [EDI + 0x30]
0062883D  03 D8                     ADD EBX,EAX
0062883F  33 C0                     XOR EAX,EAX
00628841  8A 04 0B                  MOV AL,byte ptr [EBX + ECX*0x1]
00628844  33 C9                     XOR ECX,ECX
00628846  85 C0                     TEST EAX,EAX
00628848  0F 95 C1                  SETNZ CL
0062884B  8B C1                     MOV EAX,ECX
0062884D  EB 13                     JMP 0x00628862
LAB_0062884f:
0062884F  83 C8 FF                  OR EAX,0xffffffff
00628852  33 C9                     XOR ECX,ECX
00628854  85 C0                     TEST EAX,EAX
00628856  0F 95 C1                  SETNZ CL
00628859  8B C1                     MOV EAX,ECX
0062885B  EB 05                     JMP 0x00628862
LAB_0062885d:
0062885D  B8 01 00 00 00            MOV EAX,0x1
LAB_00628862:
00628862  83 F8 01                  CMP EAX,0x1
00628865  8A 86 C1 00 00 00         MOV AL,byte ptr [ESI + 0xc1]
0062886B  75 21                     JNZ 0x0062888e
0062886D  84 C0                     TEST AL,AL
0062886F  75 3A                     JNZ 0x006288ab
00628871  8B 96 C6 00 00 00         MOV EDX,dword ptr [ESI + 0xc6]
00628877  8B 0D 98 75 80 00         MOV ECX,dword ptr [0x00807598]
0062887D  6A 00                     PUSH 0x0
0062887F  52                        PUSH EDX
00628880  E8 1B 22 0C 00            CALL 0x006eaaa0
00628885  C6 86 C1 00 00 00 01      MOV byte ptr [ESI + 0xc1],0x1
0062888C  EB 1D                     JMP 0x006288ab
LAB_0062888e:
0062888E  3C 01                     CMP AL,0x1
00628890  75 19                     JNZ 0x006288ab
00628892  8B 86 C6 00 00 00         MOV EAX,dword ptr [ESI + 0xc6]
00628898  8B 0D 98 75 80 00         MOV ECX,dword ptr [0x00807598]
0062889E  50                        PUSH EAX
0062889F  E8 BC 22 0C 00            CALL 0x006eab60
006288A4  C6 86 C1 00 00 00 00      MOV byte ptr [ESI + 0xc1],0x0
LAB_006288ab:
006288AB  8A 86 BF 00 00 00         MOV AL,byte ptr [ESI + 0xbf]
006288B1  84 C0                     TEST AL,AL
006288B3  0F 84 D3 02 00 00         JZ 0x00628b8c
006288B9  8B 8E B2 00 00 00         MOV ECX,dword ptr [ESI + 0xb2]
006288BF  83 F9 0F                  CMP ECX,0xf
006288C2  0F 8C C4 02 00 00         JL 0x00628b8c
006288C8  8B 46 14                  MOV EAX,dword ptr [ESI + 0x14]
006288CB  C1 E8 08                  SHR EAX,0x8
006288CE  25 FF 00 00 00            AND EAX,0xff
006288D3  3D 80 00 00 00            CMP EAX,0x80
006288D8  0F 87 AE 02 00 00         JA 0x00628b8c
006288DE  33 D2                     XOR EDX,EDX
006288E0  8A 90 04 8C 62 00         MOV DL,byte ptr [EAX + 0x628c04]
switchD_006288e6::switchD:
006288E6  FF 24 95 FC 8B 62 00      JMP dword ptr [EDX*0x4 + 0x628bfc]
switchD_006288e6::caseD_0:
006288ED  80 7E 14 04               CMP byte ptr [ESI + 0x14],0x4
006288F1  73 2B                     JNC 0x0062891e
006288F3  8B 86 C6 00 00 00         MOV EAX,dword ptr [ESI + 0xc6]
006288F9  83 C1 03                  ADD ECX,0x3
006288FC  51                        PUSH ECX
006288FD  8B 0D 98 75 80 00         MOV ECX,dword ptr [0x00807598]
00628903  6A 01                     PUSH 0x1
00628905  50                        PUSH EAX
00628906  E8 65 19 0C 00            CALL 0x006ea270
0062890B  8B 45 88                  MOV EAX,dword ptr [EBP + -0x78]
0062890E  A3 F8 8D 85 00            MOV [0x00858df8],EAX
00628913  33 C0                     XOR EAX,EAX
00628915  5F                        POP EDI
00628916  5E                        POP ESI
00628917  5B                        POP EBX
00628918  8B E5                     MOV ESP,EBP
0062891A  5D                        POP EBP
0062891B  C2 04 00                  RET 0x4
LAB_0062891e:
0062891E  83 C1 F1                  ADD ECX,-0xf
00628921  51                        PUSH ECX
00628922  8B 8E C6 00 00 00         MOV ECX,dword ptr [ESI + 0xc6]
00628928  6A 01                     PUSH 0x1
0062892A  51                        PUSH ECX
0062892B  8B 0D 98 75 80 00         MOV ECX,dword ptr [0x00807598]
00628931  E8 3A 19 0C 00            CALL 0x006ea270
00628936  8B 45 88                  MOV EAX,dword ptr [EBP + -0x78]
00628939  A3 F8 8D 85 00            MOV [0x00858df8],EAX
0062893E  33 C0                     XOR EAX,EAX
00628940  5F                        POP EDI
00628941  5E                        POP ESI
00628942  5B                        POP EBX
00628943  8B E5                     MOV ESP,EBP
00628945  5D                        POP EBP
00628946  C2 04 00                  RET 0x4
switchD_006280c4::caseD_4:
00628949  DB 46 46                  FILD dword ptr [ESI + 0x46]
0062894C  51                        PUSH ECX
0062894D  8B 8E C6 00 00 00         MOV ECX,dword ptr [ESI + 0xc6]
00628953  D8 0D F8 04 79 00         FMUL float ptr [0x007904f8]
00628959  D8 0D F0 04 79 00         FMUL float ptr [0x007904f0]
0062895F  D9 55 F8                  FST float ptr [EBP + -0x8]
00628962  D9 5E 6A                  FSTP float ptr [ESI + 0x6a]
00628965  DB 46 4A                  FILD dword ptr [ESI + 0x4a]
00628968  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
0062896B  D8 0D F8 04 79 00         FMUL float ptr [0x007904f8]
00628971  D8 0D F0 04 79 00         FMUL float ptr [0x007904f0]
00628977  D9 55 FC                  FST float ptr [EBP + -0x4]
0062897A  D9 5E 6E                  FSTP float ptr [ESI + 0x6e]
0062897D  DB 46 4E                  FILD dword ptr [ESI + 0x4e]
00628980  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
00628983  D8 0D F8 04 79 00         FMUL float ptr [0x007904f8]
00628989  D8 0D F0 04 79 00         FMUL float ptr [0x007904f0]
0062898F  D9 56 72                  FST float ptr [ESI + 0x72]
00628992  D8 05 FC 04 79 00         FADD float ptr [0x007904fc]
00628998  D9 1C 24                  FSTP float ptr [ESP]
0062899B  52                        PUSH EDX
0062899C  50                        PUSH EAX
0062899D  51                        PUSH ECX
0062899E  8B 0D 98 75 80 00         MOV ECX,dword ptr [0x00807598]
006289A4  E8 B7 1F 0C 00            CALL 0x006ea960
006289A9  8B 3D 88 2A 80 00         MOV EDI,dword ptr [0x00802a88]
006289AF  3B FB                     CMP EDI,EBX
006289B1  0F 84 D5 01 00 00         JZ 0x00628b8c
006289B7  8B 4E 4E                  MOV ECX,dword ptr [ESI + 0x4e]
006289BA  B8 1F 85 EB 51            MOV EAX,0x51eb851f
006289BF  3B CB                     CMP ECX,EBX
006289C1  7C 14                     JL 0x006289d7
006289C3  F7 E9                     IMUL ECX
006289C5  C1 FA 06                  SAR EDX,0x6
006289C8  8B C2                     MOV EAX,EDX
006289CA  C1 E8 1F                  SHR EAX,0x1f
006289CD  03 D0                     ADD EDX,EAX
006289CF  0F BF CA                  MOVSX ECX,DX
006289D2  89 4D F8                  MOV dword ptr [EBP + -0x8],ECX
006289D5  EB 13                     JMP 0x006289ea
LAB_006289d7:
006289D7  F7 E9                     IMUL ECX
006289D9  C1 FA 06                  SAR EDX,0x6
006289DC  8B C2                     MOV EAX,EDX
006289DE  C1 E8 1F                  SHR EAX,0x1f
006289E1  03 D0                     ADD EDX,EAX
006289E3  0F BF C2                  MOVSX EAX,DX
006289E6  48                        DEC EAX
006289E7  89 45 F8                  MOV dword ptr [EBP + -0x8],EAX
LAB_006289ea:
006289EA  8B 4E 4A                  MOV ECX,dword ptr [ESI + 0x4a]
006289ED  B8 79 19 8C 02            MOV EAX,0x28c1979
006289F2  3B CB                     CMP ECX,EBX
006289F4  7C 10                     JL 0x00628a06
006289F6  F7 E9                     IMUL ECX
006289F8  D1 FA                     SAR EDX,0x1
006289FA  8B CA                     MOV ECX,EDX
006289FC  C1 E9 1F                  SHR ECX,0x1f
006289FF  03 D1                     ADD EDX,ECX
00628A01  0F BF DA                  MOVSX EBX,DX
00628A04  EB 0F                     JMP 0x00628a15
LAB_00628a06:
00628A06  F7 E9                     IMUL ECX
00628A08  D1 FA                     SAR EDX,0x1
00628A0A  8B C2                     MOV EAX,EDX
00628A0C  C1 E8 1F                  SHR EAX,0x1f
00628A0F  03 D0                     ADD EDX,EAX
00628A11  0F BF DA                  MOVSX EBX,DX
00628A14  4B                        DEC EBX
LAB_00628a15:
00628A15  8B 4E 46                  MOV ECX,dword ptr [ESI + 0x46]
00628A18  B8 79 19 8C 02            MOV EAX,0x28c1979
00628A1D  85 C9                     TEST ECX,ECX
00628A1F  7C 10                     JL 0x00628a31
00628A21  F7 E9                     IMUL ECX
00628A23  D1 FA                     SAR EDX,0x1
00628A25  8B CA                     MOV ECX,EDX
00628A27  C1 E9 1F                  SHR ECX,0x1f
00628A2A  03 D1                     ADD EDX,ECX
00628A2C  0F BF C2                  MOVSX EAX,DX
00628A2F  EB 0F                     JMP 0x00628a40
LAB_00628a31:
00628A31  F7 E9                     IMUL ECX
00628A33  D1 FA                     SAR EDX,0x1
00628A35  8B C2                     MOV EAX,EDX
00628A37  C1 E8 1F                  SHR EAX,0x1f
00628A3A  03 D0                     ADD EDX,EAX
00628A3C  0F BF C2                  MOVSX EAX,DX
00628A3F  48                        DEC EAX
LAB_00628a40:
00628A40  80 3D 4D 87 80 00 FF      CMP byte ptr [0x0080874d],0xff
00628A47  0F 84 96 00 00 00         JZ 0x00628ae3
00628A4D  8B 8F F8 00 00 00         MOV ECX,dword ptr [EDI + 0xf8]
00628A53  85 C9                     TEST ECX,ECX
00628A55  0F 84 88 00 00 00         JZ 0x00628ae3
00628A5B  8D 4D CC                  LEA ECX,[EBP + -0x34]
00628A5E  8D 55 D0                  LEA EDX,[EBP + -0x30]
00628A61  51                        PUSH ECX
00628A62  52                        PUSH EDX
00628A63  53                        PUSH EBX
00628A64  50                        PUSH EAX
00628A65  8B 87 0C 01 00 00         MOV EAX,dword ptr [EDI + 0x10c]
00628A6B  8B CF                     MOV ECX,EDI
00628A6D  50                        PUSH EAX
00628A6E  E8 E0 B4 DD FF            CALL 0x00403f53
00628A73  8B 4D F8                  MOV ECX,dword ptr [EBP + -0x8]
00628A76  85 C9                     TEST ECX,ECX
00628A78  7C 69                     JL 0x00628ae3
00628A7A  83 F9 05                  CMP ECX,0x5
00628A7D  7D 64                     JGE 0x00628ae3
00628A7F  8B 55 D0                  MOV EDX,dword ptr [EBP + -0x30]
00628A82  8B 5D CC                  MOV EBX,dword ptr [EBP + -0x34]
00628A85  85 D2                     TEST EDX,EDX
00628A87  7C 1E                     JL 0x00628aa7
00628A89  3B 57 30                  CMP EDX,dword ptr [EDI + 0x30]
00628A8C  7D 19                     JGE 0x00628aa7
00628A8E  8B 04 8D D0 AE 79 00      MOV EAX,dword ptr [ECX*0x4 + 0x79aed0]
00628A95  03 C3                     ADD EAX,EBX
00628A97  85 C0                     TEST EAX,EAX
00628A99  7C 0C                     JL 0x00628aa7
00628A9B  3B 47 34                  CMP EAX,dword ptr [EDI + 0x34]
00628A9E  7D 07                     JGE 0x00628aa7
00628AA0  B8 01 00 00 00            MOV EAX,0x1
00628AA5  EB 02                     JMP 0x00628aa9
LAB_00628aa7:
00628AA7  33 C0                     XOR EAX,EAX
LAB_00628aa9:
00628AA9  85 C0                     TEST EAX,EAX
00628AAB  74 28                     JZ 0x00628ad5
00628AAD  8B 47 4C                  MOV EAX,dword ptr [EDI + 0x4c]
00628AB0  85 C0                     TEST EAX,EAX
00628AB2  74 21                     JZ 0x00628ad5
00628AB4  8B 0C 8D D0 AE 79 00      MOV ECX,dword ptr [ECX*0x4 + 0x79aed0]
00628ABB  03 CB                     ADD ECX,EBX
00628ABD  0F AF 4F 30               IMUL ECX,dword ptr [EDI + 0x30]
00628AC1  03 CA                     ADD ECX,EDX
00628AC3  33 D2                     XOR EDX,EDX
00628AC5  8A 14 01                  MOV DL,byte ptr [ECX + EAX*0x1]
00628AC8  33 C9                     XOR ECX,ECX
00628ACA  8B C2                     MOV EAX,EDX
00628ACC  85 C0                     TEST EAX,EAX
00628ACE  0F 95 C1                  SETNZ CL
00628AD1  8B C1                     MOV EAX,ECX
00628AD3  EB 13                     JMP 0x00628ae8
LAB_00628ad5:
00628AD5  83 C8 FF                  OR EAX,0xffffffff
00628AD8  33 C9                     XOR ECX,ECX
00628ADA  85 C0                     TEST EAX,EAX
00628ADC  0F 95 C1                  SETNZ CL
00628ADF  8B C1                     MOV EAX,ECX
00628AE1  EB 05                     JMP 0x00628ae8
LAB_00628ae3:
00628AE3  B8 01 00 00 00            MOV EAX,0x1
LAB_00628ae8:
00628AE8  83 F8 01                  CMP EAX,0x1
00628AEB  8A 86 C1 00 00 00         MOV AL,byte ptr [ESI + 0xc1]
00628AF1  75 36                     JNZ 0x00628b29
LAB_00628af3:
00628AF3  84 C0                     TEST AL,AL
00628AF5  0F 85 91 00 00 00         JNZ 0x00628b8c
00628AFB  8B 96 C6 00 00 00         MOV EDX,dword ptr [ESI + 0xc6]
00628B01  8B 0D 98 75 80 00         MOV ECX,dword ptr [0x00807598]
00628B07  6A 00                     PUSH 0x0
00628B09  52                        PUSH EDX
00628B0A  E8 91 1F 0C 00            CALL 0x006eaaa0
00628B0F  8B 45 88                  MOV EAX,dword ptr [EBP + -0x78]
00628B12  C6 86 C1 00 00 00 01      MOV byte ptr [ESI + 0xc1],0x1
00628B19  A3 F8 8D 85 00            MOV [0x00858df8],EAX
00628B1E  33 C0                     XOR EAX,EAX
00628B20  5F                        POP EDI
00628B21  5E                        POP ESI
00628B22  5B                        POP EBX
00628B23  8B E5                     MOV ESP,EBP
00628B25  5D                        POP EBP
00628B26  C2 04 00                  RET 0x4
LAB_00628b29:
00628B29  3C 01                     CMP AL,0x1
00628B2B  75 5F                     JNZ 0x00628b8c
00628B2D  8B 86 C6 00 00 00         MOV EAX,dword ptr [ESI + 0xc6]
00628B33  8B 0D 98 75 80 00         MOV ECX,dword ptr [0x00807598]
00628B39  50                        PUSH EAX
00628B3A  E8 21 20 0C 00            CALL 0x006eab60
00628B3F  8B 45 88                  MOV EAX,dword ptr [EBP + -0x78]
00628B42  C6 86 C1 00 00 00 00      MOV byte ptr [ESI + 0xc1],0x0
00628B49  A3 F8 8D 85 00            MOV [0x00858df8],EAX
00628B4E  33 C0                     XOR EAX,EAX
00628B50  5F                        POP EDI
00628B51  5E                        POP ESI
00628B52  5B                        POP EBX
00628B53  8B E5                     MOV ESP,EBP
00628B55  5D                        POP EBP
00628B56  C2 04 00                  RET 0x4
LAB_00628b59:
00628B59  8D 4D EC                  LEA ECX,[EBP + -0x14]
00628B5C  51                        PUSH ECX
00628B5D  8B 4D F4                  MOV ECX,dword ptr [EBP + -0xc]
00628B60  E8 19 B1 DD FF            CALL 0x00403c7e
00628B65  8D 55 F0                  LEA EDX,[EBP + -0x10]
00628B68  89 45 F0                  MOV dword ptr [EBP + -0x10],EAX
00628B6B  52                        PUSH EDX
00628B6C  E8 EF 24 08 00            CALL 0x006ab060
00628B71  8B 45 88                  MOV EAX,dword ptr [EBP + -0x78]
00628B74  A3 F8 8D 85 00            MOV [0x00858df8],EAX
00628B79  33 C0                     XOR EAX,EAX
00628B7B  5F                        POP EDI
00628B7C  5E                        POP ESI
00628B7D  5B                        POP EBX
00628B7E  8B E5                     MOV ESP,EBP
00628B80  5D                        POP EBP
00628B81  C2 04 00                  RET 0x4
LAB_00628b84:
00628B84  2D 12 01 00 00            SUB EAX,0x112
00628B89  74 01                     JZ 0x00628b8c
00628B8B  48                        DEC EAX
switchD_006280c4::default:
00628B8C  8B 45 88                  MOV EAX,dword ptr [EBP + -0x78]
00628B8F  A3 F8 8D 85 00            MOV [0x00858df8],EAX
00628B94  33 C0                     XOR EAX,EAX
00628B96  5F                        POP EDI
00628B97  5E                        POP ESI
00628B98  5B                        POP EBX
00628B99  8B E5                     MOV ESP,EBP
00628B9B  5D                        POP EBP
00628B9C  C2 04 00                  RET 0x4
LAB_00628b9f:
00628B9F  8B 4D 88                  MOV ECX,dword ptr [EBP + -0x78]
00628BA2  68 78 13 7D 00            PUSH 0x7d1378
00628BA7  68 CC 4C 7A 00            PUSH 0x7a4ccc
00628BAC  56                        PUSH ESI
00628BAD  53                        PUSH EBX
00628BAE  68 18 02 00 00            PUSH 0x218
00628BB3  68 54 13 7D 00            PUSH 0x7d1354
00628BB8  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
00628BBE  E8 0D 49 08 00            CALL 0x006ad4d0
00628BC3  83 C4 18                  ADD ESP,0x18
00628BC6  85 C0                     TEST EAX,EAX
00628BC8  74 01                     JZ 0x00628bcb
00628BCA  CC                        INT3
LAB_00628bcb:
00628BCB  68 1A 02 00 00            PUSH 0x21a
00628BD0  68 54 13 7D 00            PUSH 0x7d1354
00628BD5  53                        PUSH EBX
00628BD6  56                        PUSH ESI
00628BD7  E8 64 D2 07 00            CALL 0x006a5e40
00628BDC  5F                        POP EDI
00628BDD  5E                        POP ESI
00628BDE  B8 FF FF 00 00            MOV EAX,0xffff
00628BE3  5B                        POP EBX
00628BE4  8B E5                     MOV ESP,EBP
00628BE6  5D                        POP EBP
00628BE7  C2 04 00                  RET 0x4
