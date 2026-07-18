FUN_00555600:
00555600  55                        PUSH EBP
00555601  8B EC                     MOV EBP,ESP
00555603  81 EC 04 01 00 00         SUB ESP,0x104
00555609  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
0055560C  8D 8D FC FE FF FF         LEA ECX,[EBP + 0xfffffefc]
00555612  50                        PUSH EAX
00555613  68 80 76 80 00            PUSH 0x807680
00555618  68 E4 6E 7C 00            PUSH 0x7c6ee4
0055561D  51                        PUSH ECX
0055561E  FF 15 E8 BD 85 00         CALL dword ptr [0x0085bde8]
00555624  8D 95 FC FE FF FF         LEA EDX,[EBP + 0xfffffefc]
0055562A  68 F0 8F 7C 00            PUSH 0x7c8ff0
0055562F  52                        PUSH EDX
00555630  E8 3B 94 1D 00            CALL 0x0072ea70
00555635  83 C4 18                  ADD ESP,0x18
00555638  8B E5                     MOV ESP,EBP
0055563A  5D                        POP EBP
0055563B  C2 04 00                  RET 0x4
