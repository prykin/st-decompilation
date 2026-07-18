FUN_00693e60:
00693E60  55                        PUSH EBP
00693E61  8B EC                     MOV EBP,ESP
00693E63  8B 81 99 19 00 00         MOV EAX,dword ptr [ECX + 0x1999]
00693E69  85 C0                     TEST EAX,EAX
00693E6B  75 21                     JNZ 0x00693e8e
00693E6D  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
00693E70  85 C0                     TEST EAX,EAX
00693E72  7C 1A                     JL 0x00693e8e
00693E74  83 F8 08                  CMP EAX,0x8
00693E77  7D 15                     JGE 0x00693e8e
00693E79  8D 04 C0                  LEA EAX,[EAX + EAX*0x8]
00693E7C  8D 0C C1                  LEA ECX,[ECX + EAX*0x8]
00693E7F  03 C1                     ADD EAX,ECX
00693E81  80 78 33 FF               CMP byte ptr [EAX + 0x33],0xff
00693E85  74 07                     JZ 0x00693e8e
00693E87  83 C0 11                  ADD EAX,0x11
00693E8A  5D                        POP EBP
00693E8B  C2 04 00                  RET 0x4
LAB_00693e8e:
00693E8E  33 C0                     XOR EAX,EAX
00693E90  5D                        POP EBP
00693E91  C2 04 00                  RET 0x4
