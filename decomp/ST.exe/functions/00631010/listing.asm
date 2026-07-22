STManRuinC::sub_00631010:
00631010  55                        PUSH EBP
00631011  8B EC                     MOV EBP,ESP
00631013  83 EC 1C                  SUB ESP,0x1c
00631016  53                        PUSH EBX
00631017  8B D9                     MOV EBX,ECX
00631019  56                        PUSH ESI
0063101A  8B 4B 38                  MOV ECX,dword ptr [EBX + 0x38]
0063101D  85 C9                     TEST ECX,ECX
0063101F  0F 84 0B 01 00 00         JZ 0x00631130
00631025  8B 41 0C                  MOV EAX,dword ptr [ECX + 0xc]
00631028  8D 50 FF                  LEA EDX,[EAX + -0x1]
0063102B  85 D2                     TEST EDX,EDX
0063102D  89 55 FC                  MOV dword ptr [EBP + -0x4],EDX
00631030  0F 8C FA 00 00 00         JL 0x00631130
00631036  3B D0                     CMP EDX,EAX
00631038  73 0B                     JNC 0x00631045
0063103A  8B 41 08                  MOV EAX,dword ptr [ECX + 0x8]
0063103D  0F AF C2                  IMUL EAX,EDX
00631040  03 41 1C                  ADD EAX,dword ptr [ECX + 0x1c]
00631043  EB 02                     JMP 0x00631047
LAB_00631045:
00631045  33 C0                     XOR EAX,EAX
LAB_00631047:
00631047  8B 15 38 2A 80 00         MOV EDX,dword ptr [0x00802a38]
0063104D  8B 48 0C                  MOV ECX,dword ptr [EAX + 0xc]
00631050  81 C1 EE 02 00 00         ADD ECX,0x2ee
00631056  3B 8A E4 00 00 00         CMP ECX,dword ptr [EDX + 0xe4]
0063105C  0F 83 CE 00 00 00         JNC 0x00631130
00631062  57                        PUSH EDI
00631063  B9 06 00 00 00            MOV ECX,0x6
00631068  8B F0                     MOV ESI,EAX
0063106A  8B 40 10                  MOV EAX,dword ptr [EAX + 0x10]
0063106D  8D 7D E4                  LEA EDI,[EBP + -0x1c]
00631070  50                        PUSH EAX
00631071  F3 A5                     MOVSD.REP ES:EDI,ESI
00631073  8B 0D 98 75 80 00         MOV ECX,dword ptr [0x00807598]
00631079  E8 52 81 0B 00            CALL 0x006e91d0
0063107E  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
00631081  51                        PUSH ECX
00631082  8B CB                     MOV ECX,EBX
00631084  E8 91 35 DD FF            CALL 0x0040461a
00631089  85 C0                     TEST EAX,EAX
0063108B  5F                        POP EDI
0063108C  0F 84 9E 00 00 00         JZ 0x00631130
00631092  0F BF 45 EA               MOVSX EAX,word ptr [EBP + -0x16]
00631096  8B 55 F8                  MOV EDX,dword ptr [EBP + -0x8]
00631099  8B 4D EC                  MOV ECX,dword ptr [EBP + -0x14]
0063109C  52                        PUSH EDX
0063109D  50                        PUSH EAX
0063109E  0F BF 55 E8               MOVSX EDX,word ptr [EBP + -0x18]
006310A2  0F BF 45 E6               MOVSX EAX,word ptr [EBP + -0x1a]
006310A6  51                        PUSH ECX
006310A7  52                        PUSH EDX
006310A8  0F BF 4D E4               MOVSX ECX,word ptr [EBP + -0x1c]
006310AC  50                        PUSH EAX
006310AD  51                        PUSH ECX
006310AE  8B CB                     MOV ECX,EBX
006310B0  E8 A2 0C DD FF            CALL 0x00401d57
006310B5  8B 53 5C                  MOV EDX,dword ptr [EBX + 0x5c]
006310B8  8B 43 58                  MOV EAX,dword ptr [EBX + 0x58]
006310BB  8B 4B 54                  MOV ECX,dword ptr [EBX + 0x54]
006310BE  52                        PUSH EDX
006310BF  50                        PUSH EAX
006310C0  BE 01 00 00 00            MOV ESI,0x1
006310C5  51                        PUSH ECX
006310C6  8B CB                     MOV ECX,EBX
006310C8  89 73 44                  MOV dword ptr [EBX + 0x44],ESI
006310CB  E8 D6 3F DD FF            CALL 0x004050a6
006310D0  85 C0                     TEST EAX,EAX
006310D2  89 43 48                  MOV dword ptr [EBX + 0x48],EAX
006310D5  7E 22                     JLE 0x006310f9
006310D7  8B 53 50                  MOV EDX,dword ptr [EBX + 0x50]
006310DA  8B 43 4C                  MOV EAX,dword ptr [EBX + 0x4c]
006310DD  8B 4B 40                  MOV ECX,dword ptr [EBX + 0x40]
006310E0  52                        PUSH EDX
006310E1  56                        PUSH ESI
006310E2  56                        PUSH ESI
006310E3  50                        PUSH EAX
006310E4  51                        PUSH ECX
006310E5  8B CB                     MOV ECX,EBX
006310E7  E8 B3 4B DD FF            CALL 0x00405c9f
006310EC  85 C0                     TEST EAX,EAX
006310EE  74 0C                     JZ 0x006310fc
006310F0  C7 43 44 02 00 00 00      MOV dword ptr [EBX + 0x44],0x2
006310F7  EB 03                     JMP 0x006310fc
LAB_006310f9:
006310F9  89 73 44                  MOV dword ptr [EBX + 0x44],ESI
LAB_006310fc:
006310FC  8B 53 61                  MOV EDX,dword ptr [EBX + 0x61]
006310FF  8D 43 40                  LEA EAX,[EBX + 0x40]
00631102  52                        PUSH EDX
00631103  50                        PUSH EAX
00631104  8B CB                     MOV ECX,EBX
00631106  E8 BF 4D DD FF            CALL 0x00405eca
0063110B  85 C0                     TEST EAX,EAX
0063110D  75 1A                     JNZ 0x00631129
0063110F  8B 43 48                  MOV EAX,dword ptr [EBX + 0x48]
00631112  85 C0                     TEST EAX,EAX
00631114  74 13                     JZ 0x00631129
00631116  8B 43 61                  MOV EAX,dword ptr [EBX + 0x61]
00631119  85 C0                     TEST EAX,EAX
0063111B  74 0C                     JZ 0x00631129
0063111D  8B 0D 98 75 80 00         MOV ECX,dword ptr [0x00807598]
00631123  50                        PUSH EAX
00631124  E8 77 7A 0B 00            CALL 0x006e8ba0
LAB_00631129:
00631129  C7 43 61 FF FF FF FF      MOV dword ptr [EBX + 0x61],0xffffffff
LAB_00631130:
00631130  5E                        POP ESI
00631131  5B                        POP EBX
00631132  8B E5                     MOV ESP,EBP
00631134  5D                        POP EBP
00631135  C3                        RET
