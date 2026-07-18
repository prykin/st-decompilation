FUN_00755330:
00755330  55                        PUSH EBP
00755331  8B EC                     MOV EBP,ESP
00755333  83 EC 08                  SUB ESP,0x8
00755336  53                        PUSH EBX
00755337  56                        PUSH ESI
00755338  8B 75 08                  MOV ESI,dword ptr [EBP + 0x8]
0075533B  57                        PUSH EDI
0075533C  8B 7D 0C                  MOV EDI,dword ptr [EBP + 0xc]
0075533F  8D 45 08                  LEA EAX,[EBP + 0x8]
00755342  50                        PUSH EAX
00755343  57                        PUSH EDI
00755344  56                        PUSH ESI
00755345  C7 45 FC FF FF FF FF      MOV dword ptr [EBP + -0x4],0xffffffff
0075534C  E8 EF F6 F7 FF            CALL 0x006d4a40
00755351  85 C0                     TEST EAX,EAX
00755353  75 59                     JNZ 0x007553ae
00755355  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
00755358  85 C0                     TEST EAX,EAX
0075535A  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
0075535D  74 74                     JZ 0x007553d3
0075535F  8B 5D 10                  MOV EBX,dword ptr [EBP + 0x10]
00755362  8D 4D FC                  LEA ECX,[EBP + -0x4]
00755365  51                        PUSH ECX
00755366  53                        PUSH EBX
00755367  56                        PUSH ESI
00755368  E8 D3 F6 F7 FF            CALL 0x006d4a40
0075536D  85 C0                     TEST EAX,EAX
0075536F  75 3D                     JNZ 0x007553ae
00755371  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
00755374  8B D1                     MOV EDX,ECX
00755376  89 4D F8                  MOV dword ptr [EBP + -0x8],ECX
00755379  3B D3                     CMP EDX,EBX
0075537B  74 22                     JZ 0x0075539f
LAB_0075537d:
0075537D  85 C9                     TEST ECX,ECX
0075537F  74 1A                     JZ 0x0075539b
00755381  8D 55 F8                  LEA EDX,[EBP + -0x8]
00755384  8B F9                     MOV EDI,ECX
00755386  52                        PUSH EDX
00755387  51                        PUSH ECX
00755388  56                        PUSH ESI
00755389  E8 B2 F6 F7 FF            CALL 0x006d4a40
0075538E  85 C0                     TEST EAX,EAX
00755390  75 1C                     JNZ 0x007553ae
00755392  8B 4D F8                  MOV ECX,dword ptr [EBP + -0x8]
00755395  3B CB                     CMP ECX,EBX
00755397  75 E4                     JNZ 0x0075537d
00755399  EB 04                     JMP 0x0075539f
LAB_0075539b:
0075539B  85 DB                     TEST EBX,EBX
0075539D  75 0B                     JNZ 0x007553aa
LAB_0075539f:
0075539F  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
007553A2  50                        PUSH EAX
007553A3  57                        PUSH EDI
007553A4  56                        PUSH ESI
007553A5  E8 F6 F6 F7 FF            CALL 0x006d4aa0
LAB_007553aa:
007553AA  85 C0                     TEST EAX,EAX
007553AC  74 20                     JZ 0x007553ce
LAB_007553ae:
007553AE  8B 0D 7C D7 7E 00         MOV ECX,dword ptr [0x007ed77c]
007553B4  6A 26                     PUSH 0x26
007553B6  68 08 2D 7F 00            PUSH 0x7f2d08
007553BB  51                        PUSH ECX
007553BC  50                        PUSH EAX
007553BD  E8 7E 0A F5 FF            CALL 0x006a5e40
007553C2  5F                        POP EDI
007553C3  5E                        POP ESI
007553C4  83 C8 FF                  OR EAX,0xffffffff
007553C7  5B                        POP EBX
007553C8  8B E5                     MOV ESP,EBP
007553CA  5D                        POP EBP
007553CB  C2 0C 00                  RET 0xc
LAB_007553ce:
007553CE  3B 7D 0C                  CMP EDI,dword ptr [EBP + 0xc]
007553D1  75 0C                     JNZ 0x007553df
LAB_007553d3:
007553D3  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
007553D6  5F                        POP EDI
007553D7  5E                        POP ESI
007553D8  5B                        POP EBX
007553D9  8B E5                     MOV ESP,EBP
007553DB  5D                        POP EBP
007553DC  C2 0C 00                  RET 0xc
LAB_007553df:
007553DF  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
007553E2  5F                        POP EDI
007553E3  5E                        POP ESI
007553E4  5B                        POP EBX
007553E5  8B E5                     MOV ESP,EBP
007553E7  5D                        POP EBP
007553E8  C2 0C 00                  RET 0xc
