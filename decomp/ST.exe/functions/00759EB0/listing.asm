FUN_00759eb0:
00759EB0  55                        PUSH EBP
00759EB1  8B EC                     MOV EBP,ESP
00759EB3  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
00759EB6  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
00759EB9  8B 55 14                  MOV EDX,dword ptr [EBP + 0x14]
00759EBC  8D 04 81                  LEA EAX,[ECX + EAX*0x4]
00759EBF  8B 4D 10                  MOV ECX,dword ptr [EBP + 0x10]
00759EC2  8D 14 91                  LEA EDX,[ECX + EDX*0x4]
00759EC5  8B 4D 18                  MOV ECX,dword ptr [EBP + 0x18]
00759EC8  85 C9                     TEST ECX,ECX
00759ECA  7E 2D                     JLE 0x00759ef9
00759ECC  53                        PUSH EBX
00759ECD  56                        PUSH ESI
00759ECE  57                        PUSH EDI
00759ECF  89 4D 0C                  MOV dword ptr [EBP + 0xc],ECX
LAB_00759ed2:
00759ED2  8B 4D 1C                  MOV ECX,dword ptr [EBP + 0x1c]
00759ED5  8B 30                     MOV ESI,dword ptr [EAX]
00759ED7  8B 3A                     MOV EDI,dword ptr [EDX]
00759ED9  8B D9                     MOV EBX,ECX
00759EDB  C1 E9 02                  SHR ECX,0x2
00759EDE  F3 A5                     MOVSD.REP ES:EDI,ESI
00759EE0  8B CB                     MOV ECX,EBX
00759EE2  83 C0 04                  ADD EAX,0x4
00759EE5  83 E1 03                  AND ECX,0x3
00759EE8  83 C2 04                  ADD EDX,0x4
00759EEB  F3 A4                     MOVSB.REP ES:EDI,ESI
00759EED  8B 4D 0C                  MOV ECX,dword ptr [EBP + 0xc]
00759EF0  49                        DEC ECX
00759EF1  89 4D 0C                  MOV dword ptr [EBP + 0xc],ECX
00759EF4  75 DC                     JNZ 0x00759ed2
00759EF6  5F                        POP EDI
00759EF7  5E                        POP ESI
00759EF8  5B                        POP EBX
LAB_00759ef9:
00759EF9  5D                        POP EBP
00759EFA  C2 18 00                  RET 0x18
