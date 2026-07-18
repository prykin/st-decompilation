FUN_0073c530:
0073C530  55                        PUSH EBP
0073C531  8B EC                     MOV EBP,ESP
0073C533  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
0073C536  8B 08                     MOV ECX,dword ptr [EAX]
0073C538  83 C1 04                  ADD ECX,0x4
0073C53B  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
0073C53E  89 0A                     MOV dword ptr [EDX],ECX
0073C540  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
0073C543  8B 08                     MOV ECX,dword ptr [EAX]
0073C545  8B 41 FC                  MOV EAX,dword ptr [ECX + -0x4]
0073C548  5D                        POP EBP
0073C549  C3                        RET
