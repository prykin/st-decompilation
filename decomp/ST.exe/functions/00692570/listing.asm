FUN_00692570:
00692570  55                        PUSH EBP
00692571  8B EC                     MOV EBP,ESP
00692573  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
00692576  8B 55 10                  MOV EDX,dword ptr [EBP + 0x10]
00692579  85 C0                     TEST EAX,EAX
0069257B  75 01                     JNZ 0x0069257e
0069257D  4A                        DEC EDX
LAB_0069257e:
0069257E  8D 44 40 36               LEA EAX,[EAX + EAX*0x2 + 0x36]
00692582  8D 04 42                  LEA EAX,[EDX + EAX*0x2]
00692585  8D 14 80                  LEA EDX,[EAX + EAX*0x4]
00692588  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
0069258B  8D 14 50                  LEA EDX,[EAX + EDX*0x2]
0069258E  8B 04 91                  MOV EAX,dword ptr [ECX + EDX*0x4]
00692591  5D                        POP EBP
00692592  C2 0C 00                  RET 0xc
