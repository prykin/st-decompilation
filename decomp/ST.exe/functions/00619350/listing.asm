STJumpMineC::sub_00619350:
00619350  55                        PUSH EBP
00619351  8B EC                     MOV EBP,ESP
00619353  56                        PUSH ESI
00619354  57                        PUSH EDI
00619355  8B F1                     MOV ESI,ECX
00619357  68 04 01 00 00            PUSH 0x104
0061935C  E8 0F 19 09 00            CALL 0x006aac70
00619361  8B 4E 1C                  MOV ECX,dword ptr [ESI + 0x1c]
00619364  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
00619367  89 8E 4C 01 00 00         MOV dword ptr [ESI + 0x14c],ECX
0061936D  B9 41 00 00 00            MOV ECX,0x41
00619372  83 C6 4D                  ADD ESI,0x4d
00619375  8B F8                     MOV EDI,EAX
00619377  F3 A5                     MOVSD.REP ES:EDI,ESI
00619379  C7 40 0C 02 00 00 00      MOV dword ptr [EAX + 0xc],0x2
00619380  5F                        POP EDI
00619381  C7 02 04 01 00 00         MOV dword ptr [EDX],0x104
00619387  5E                        POP ESI
00619388  5D                        POP EBP
00619389  C2 04 00                  RET 0x4
