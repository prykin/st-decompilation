FUN_00726470:
00726470  55                        PUSH EBP
00726471  8B EC                     MOV EBP,ESP
00726473  83 EC 50                  SUB ESP,0x50
00726476  A1 F8 8D 85 00            MOV EAX,[0x00858df8]
0072647B  56                        PUSH ESI
0072647C  8D 55 B4                  LEA EDX,[EBP + -0x4c]
0072647F  8D 4D B0                  LEA ECX,[EBP + -0x50]
00726482  6A 00                     PUSH 0x0
00726484  52                        PUSH EDX
00726485  89 45 B0                  MOV dword ptr [EBP + -0x50],EAX
00726488  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
0072648E  E8 5D 73 00 00            CALL 0x0072d7f0
00726493  8B F0                     MOV ESI,EAX
00726495  83 C4 08                  ADD ESP,0x8
00726498  85 F6                     TEST ESI,ESI
0072649A  75 43                     JNZ 0x007264df
0072649C  8B 45 10                  MOV EAX,dword ptr [EBP + 0x10]
0072649F  8B 55 0C                  MOV EDX,dword ptr [EBP + 0xc]
007264A2  8D 4D F4                  LEA ECX,[EBP + -0xc]
007264A5  50                        PUSH EAX
007264A6  51                        PUSH ECX
007264A7  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
007264AA  52                        PUSH EDX
007264AB  6A 08                     PUSH 0x8
007264AD  E8 5E BE FC FF            CALL 0x006f2310
007264B2  85 C0                     TEST EAX,EAX
007264B4  75 17                     JNZ 0x007264cd
007264B6  A1 7C D7 7E 00            MOV EAX,[0x007ed77c]
007264BB  68 09 01 00 00            PUSH 0x109
007264C0  68 8C 0C 7F 00            PUSH 0x7f0c8c
007264C5  50                        PUSH EAX
007264C6  6A FC                     PUSH -0x4
007264C8  E8 73 F9 F7 FF            CALL 0x006a5e40
LAB_007264cd:
007264CD  8B 4D B0                  MOV ECX,dword ptr [EBP + -0x50]
007264D0  0F BF 45 F8               MOVSX EAX,word ptr [EBP + -0x8]
007264D4  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
007264DA  5E                        POP ESI
007264DB  8B E5                     MOV ESP,EBP
007264DD  5D                        POP EBP
007264DE  C3                        RET
LAB_007264df:
007264DF  8B 45 10                  MOV EAX,dword ptr [EBP + 0x10]
007264E2  8B 55 B0                  MOV EDX,dword ptr [EBP + -0x50]
007264E5  85 C0                     TEST EAX,EAX
007264E7  89 15 F8 8D 85 00         MOV dword ptr [0x00858df8],EDX
007264ED  75 0C                     JNZ 0x007264fb
007264EF  83 FE FC                  CMP ESI,-0x4
007264F2  75 07                     JNZ 0x007264fb
007264F4  8B C6                     MOV EAX,ESI
007264F6  5E                        POP ESI
007264F7  8B E5                     MOV ESP,EBP
007264F9  5D                        POP EBP
007264FA  C3                        RET
LAB_007264fb:
007264FB  68 E0 0C 7F 00            PUSH 0x7f0ce0
00726500  68 CC 4C 7A 00            PUSH 0x7a4ccc
00726505  56                        PUSH ESI
00726506  6A 00                     PUSH 0x0
00726508  68 0D 01 00 00            PUSH 0x10d
0072650D  68 8C 0C 7F 00            PUSH 0x7f0c8c
00726512  E8 B9 6F F8 FF            CALL 0x006ad4d0
00726517  83 C4 18                  ADD ESP,0x18
0072651A  85 C0                     TEST EAX,EAX
0072651C  74 01                     JZ 0x0072651f
0072651E  CC                        INT3
LAB_0072651f:
0072651F  68 0F 01 00 00            PUSH 0x10f
00726524  68 8C 0C 7F 00            PUSH 0x7f0c8c
00726529  6A 00                     PUSH 0x0
0072652B  56                        PUSH ESI
0072652C  E8 0F F9 F7 FF            CALL 0x006a5e40
00726531  85 F6                     TEST ESI,ESI
00726533  7D 07                     JGE 0x0072653c
00726535  8B C6                     MOV EAX,ESI
00726537  5E                        POP ESI
00726538  8B E5                     MOV ESP,EBP
0072653A  5D                        POP EBP
0072653B  C3                        RET
LAB_0072653c:
0072653C  83 C8 FF                  OR EAX,0xffffffff
0072653F  5E                        POP ESI
00726540  8B E5                     MOV ESP,EBP
00726542  5D                        POP EBP
00726543  C3                        RET
