FUN_00715050:
00715050  55                        PUSH EBP
00715051  8B EC                     MOV EBP,ESP
00715053  83 EC 4C                  SUB ESP,0x4c
00715056  A1 F8 8D 85 00            MOV EAX,[0x00858df8]
0071505B  56                        PUSH ESI
0071505C  57                        PUSH EDI
0071505D  8D 55 B8                  LEA EDX,[EBP + -0x48]
00715060  8D 4D B4                  LEA ECX,[EBP + -0x4c]
00715063  6A 00                     PUSH 0x0
00715065  52                        PUSH EDX
00715066  C7 45 FC 00 00 00 00      MOV dword ptr [EBP + -0x4],0x0
0071506D  C7 45 F8 00 00 00 00      MOV dword ptr [EBP + -0x8],0x0
00715074  89 45 B4                  MOV dword ptr [EBP + -0x4c],EAX
00715077  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
0071507D  E8 6E 87 01 00            CALL 0x0072d7f0
00715082  8B F0                     MOV ESI,EAX
00715084  83 C4 08                  ADD ESP,0x8
00715087  85 F6                     TEST ESI,ESI
00715089  75 76                     JNZ 0x00715101
0071508B  8B 75 08                  MOV ESI,dword ptr [EBP + 0x8]
0071508E  85 F6                     TEST ESI,ESI
00715090  75 14                     JNZ 0x007150a6
00715092  A1 7C D7 7E 00            MOV EAX,[0x007ed77c]
00715097  6A 16                     PUSH 0x16
00715099  68 FC 03 7F 00            PUSH 0x7f03fc
0071509E  50                        PUSH EAX
0071509F  6A CC                     PUSH -0x34
007150A1  E8 9A 0D F9 FF            CALL 0x006a5e40
LAB_007150a6:
007150A6  8B 4D 10                  MOV ECX,dword ptr [EBP + 0x10]
007150A9  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
007150AC  8D 55 FC                  LEA EDX,[EBP + -0x4]
007150AF  51                        PUSH ECX
007150B0  52                        PUSH EDX
007150B1  50                        PUSH EAX
007150B2  6A 14                     PUSH 0x14
007150B4  8B CE                     MOV ECX,ESI
007150B6  E8 25 CC FD FF            CALL 0x006f1ce0
007150BB  85 C0                     TEST EAX,EAX
007150BD  75 0F                     JNZ 0x007150ce
007150BF  8B 4D B4                  MOV ECX,dword ptr [EBP + -0x4c]
007150C2  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
007150C8  5F                        POP EDI
007150C9  5E                        POP ESI
007150CA  8B E5                     MOV ESP,EBP
007150CC  5D                        POP EBP
007150CD  C3                        RET
LAB_007150ce:
007150CE  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
007150D1  52                        PUSH EDX
007150D2  6A 00                     PUSH 0x0
007150D4  E8 87 AF F9 FF            CALL 0x006b0060
007150D9  8B F8                     MOV EDI,EAX
007150DB  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
007150DE  85 C0                     TEST EAX,EAX
007150E0  89 7D F8                  MOV dword ptr [EBP + -0x8],EDI
007150E3  74 0B                     JZ 0x007150f0
007150E5  8D 45 FC                  LEA EAX,[EBP + -0x4]
007150E8  8B CE                     MOV ECX,ESI
007150EA  50                        PUSH EAX
007150EB  E8 F0 CF FD FF            CALL 0x006f20e0
LAB_007150f0:
007150F0  8B 4D B4                  MOV ECX,dword ptr [EBP + -0x4c]
007150F3  8B C7                     MOV EAX,EDI
007150F5  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
007150FB  5F                        POP EDI
007150FC  5E                        POP ESI
007150FD  8B E5                     MOV ESP,EBP
007150FF  5D                        POP EBP
00715100  C3                        RET
LAB_00715101:
00715101  8B 55 B4                  MOV EDX,dword ptr [EBP + -0x4c]
00715104  68 F0 03 7F 00            PUSH 0x7f03f0
00715109  68 CC 4C 7A 00            PUSH 0x7a4ccc
0071510E  56                        PUSH ESI
0071510F  6A 00                     PUSH 0x0
00715111  6A 1F                     PUSH 0x1f
00715113  68 FC 03 7F 00            PUSH 0x7f03fc
00715118  89 15 F8 8D 85 00         MOV dword ptr [0x00858df8],EDX
0071511E  E8 AD 83 F9 FF            CALL 0x006ad4d0
00715123  83 C4 18                  ADD ESP,0x18
00715126  85 C0                     TEST EAX,EAX
00715128  74 01                     JZ 0x0071512b
0071512A  CC                        INT3
LAB_0071512b:
0071512B  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
0071512E  85 C0                     TEST EAX,EAX
00715130  74 0C                     JZ 0x0071513e
00715132  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
00715135  8D 45 FC                  LEA EAX,[EBP + -0x4]
00715138  50                        PUSH EAX
00715139  E8 A2 CF FD FF            CALL 0x006f20e0
LAB_0071513e:
0071513E  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
00715141  85 C0                     TEST EAX,EAX
00715143  74 06                     JZ 0x0071514b
00715145  50                        PUSH EAX
00715146  E8 C5 8F F9 FF            CALL 0x006ae110
LAB_0071514b:
0071514B  6A 24                     PUSH 0x24
0071514D  68 FC 03 7F 00            PUSH 0x7f03fc
00715152  6A 00                     PUSH 0x0
00715154  56                        PUSH ESI
00715155  E8 E6 0C F9 FF            CALL 0x006a5e40
0071515A  5F                        POP EDI
0071515B  33 C0                     XOR EAX,EAX
0071515D  5E                        POP ESI
0071515E  8B E5                     MOV ESP,EBP
00715160  5D                        POP EBP
00715161  C3                        RET
