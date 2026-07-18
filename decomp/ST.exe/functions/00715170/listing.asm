FUN_00715170:
00715170  55                        PUSH EBP
00715171  8B EC                     MOV EBP,ESP
00715173  83 EC 58                  SUB ESP,0x58
00715176  A1 F8 8D 85 00            MOV EAX,[0x00858df8]
0071517B  53                        PUSH EBX
0071517C  56                        PUSH ESI
0071517D  57                        PUSH EDI
0071517E  8D 55 AC                  LEA EDX,[EBP + -0x54]
00715181  8D 4D A8                  LEA ECX,[EBP + -0x58]
00715184  6A 00                     PUSH 0x0
00715186  52                        PUSH EDX
00715187  C7 45 FC 00 00 00 00      MOV dword ptr [EBP + -0x4],0x0
0071518E  89 45 A8                  MOV dword ptr [EBP + -0x58],EAX
00715191  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
00715197  E8 54 86 01 00            CALL 0x0072d7f0
0071519C  8B F0                     MOV ESI,EAX
0071519E  83 C4 08                  ADD ESP,0x8
007151A1  85 F6                     TEST ESI,ESI
007151A3  0F 85 80 00 00 00         JNZ 0x00715229
007151A9  8B 75 08                  MOV ESI,dword ptr [EBP + 0x8]
007151AC  8B 7D 10                  MOV EDI,dword ptr [EBP + 0x10]
007151AF  8B 5D 0C                  MOV EBX,dword ptr [EBP + 0xc]
007151B2  85 F6                     TEST ESI,ESI
007151B4  74 0F                     JZ 0x007151c5
007151B6  85 DB                     TEST EBX,EBX
007151B8  74 0B                     JZ 0x007151c5
007151BA  85 FF                     TEST EDI,EDI
007151BC  74 07                     JZ 0x007151c5
007151BE  8B 46 1C                  MOV EAX,dword ptr [ESI + 0x1c]
007151C1  85 C0                     TEST EAX,EAX
007151C3  75 14                     JNZ 0x007151d9
LAB_007151c5:
007151C5  A1 7C D7 7E 00            MOV EAX,[0x007ed77c]
007151CA  6A 3A                     PUSH 0x3a
007151CC  68 FC 03 7F 00            PUSH 0x7f03fc
007151D1  50                        PUSH EAX
007151D2  6A CC                     PUSH -0x34
007151D4  E8 67 0C F9 FF            CALL 0x006a5e40
LAB_007151d9:
007151D9  8B 4E 0C                  MOV ECX,dword ptr [ESI + 0xc]
007151DC  8D 55 F8                  LEA EDX,[EBP + -0x8]
007151DF  52                        PUSH EDX
007151E0  56                        PUSH ESI
007151E1  89 4D EC                  MOV dword ptr [EBP + -0x14],ECX
007151E4  E8 37 AE F9 FF            CALL 0x006b0020
007151E9  8B 4D 14                  MOV ECX,dword ptr [EBP + 0x14]
007151EC  6A 00                     PUSH 0x0
007151EE  51                        PUSH ECX
007151EF  8B 4D F8                  MOV ECX,dword ptr [EBP + -0x8]
007151F2  8D 55 EC                  LEA EDX,[EBP + -0x14]
007151F5  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
007151F8  52                        PUSH EDX
007151F9  51                        PUSH ECX
007151FA  50                        PUSH EAX
007151FB  57                        PUSH EDI
007151FC  6A 14                     PUSH 0x14
007151FE  8B CB                     MOV ECX,EBX
00715200  E8 EB C1 FD FF            CALL 0x006f13f0
00715205  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
00715208  85 C0                     TEST EAX,EAX
0071520A  74 09                     JZ 0x00715215
0071520C  8D 55 FC                  LEA EDX,[EBP + -0x4]
0071520F  52                        PUSH EDX
00715210  E8 4B 5E F9 FF            CALL 0x006ab060
LAB_00715215:
00715215  8B 45 A8                  MOV EAX,dword ptr [EBP + -0x58]
00715218  A3 F8 8D 85 00            MOV [0x00858df8],EAX
0071521D  B8 01 00 00 00            MOV EAX,0x1
00715222  5F                        POP EDI
00715223  5E                        POP ESI
00715224  5B                        POP EBX
00715225  8B E5                     MOV ESP,EBP
00715227  5D                        POP EBP
00715228  C3                        RET
LAB_00715229:
00715229  8B 4D A8                  MOV ECX,dword ptr [EBP + -0x58]
0071522C  68 14 04 7F 00            PUSH 0x7f0414
00715231  68 CC 4C 7A 00            PUSH 0x7a4ccc
00715236  56                        PUSH ESI
00715237  6A 00                     PUSH 0x0
00715239  6A 45                     PUSH 0x45
0071523B  68 FC 03 7F 00            PUSH 0x7f03fc
00715240  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
00715246  E8 85 82 F9 FF            CALL 0x006ad4d0
0071524B  83 C4 18                  ADD ESP,0x18
0071524E  85 C0                     TEST EAX,EAX
00715250  74 01                     JZ 0x00715253
00715252  CC                        INT3
LAB_00715253:
00715253  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
00715256  85 C0                     TEST EAX,EAX
00715258  74 09                     JZ 0x00715263
0071525A  8D 55 FC                  LEA EDX,[EBP + -0x4]
0071525D  52                        PUSH EDX
0071525E  E8 FD 5D F9 FF            CALL 0x006ab060
LAB_00715263:
00715263  6A 49                     PUSH 0x49
00715265  68 FC 03 7F 00            PUSH 0x7f03fc
0071526A  6A 00                     PUSH 0x0
0071526C  56                        PUSH ESI
0071526D  E8 CE 0B F9 FF            CALL 0x006a5e40
00715272  5F                        POP EDI
00715273  5E                        POP ESI
00715274  33 C0                     XOR EAX,EAX
00715276  5B                        POP EBX
00715277  8B E5                     MOV ESP,EBP
00715279  5D                        POP EBP
0071527A  C3                        RET
