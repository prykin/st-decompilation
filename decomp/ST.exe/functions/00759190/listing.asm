FUN_00759190:
00759190  55                        PUSH EBP
00759191  8B EC                     MOV EBP,ESP
00759193  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
00759196  33 C9                     XOR ECX,ECX
00759198  8B 90 A6 01 00 00         MOV EDX,dword ptr [EAX + 0x1a6]
0075919E  89 88 D0 00 00 00         MOV dword ptr [EAX + 0xd0],ECX
007591A4  89 88 88 00 00 00         MOV dword ptr [EAX + 0x88],ECX
007591AA  89 88 8E 01 00 00         MOV dword ptr [EAX + 0x18e],ECX
007591B0  89 4A 50                  MOV dword ptr [EDX + 0x50],ECX
007591B3  8B 90 A6 01 00 00         MOV EDX,dword ptr [EAX + 0x1a6]
007591B9  89 4A 54                  MOV dword ptr [EDX + 0x54],ECX
007591BC  8B 80 A6 01 00 00         MOV EAX,dword ptr [EAX + 0x1a6]
007591C2  89 48 5C                  MOV dword ptr [EAX + 0x5c],ECX
007591C5  5D                        POP EBP
007591C6  C2 04 00                  RET 0x4
