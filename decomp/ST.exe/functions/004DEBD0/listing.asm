FUN_004debd0:
004DEBD0  55                        PUSH EBP
004DEBD1  8B EC                     MOV EBP,ESP
004DEBD3  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
004DEBD6  85 C0                     TEST EAX,EAX
004DEBD8  89 81 D4 04 00 00         MOV dword ptr [ECX + 0x4d4],EAX
004DEBDE  7F 13                     JG 0x004debf3
004DEBE0  83 B9 D0 04 00 00 01      CMP dword ptr [ECX + 0x4d0],0x1
004DEBE7  75 0A                     JNZ 0x004debf3
004DEBE9  C7 81 D4 04 00 00 00 00 00 00  MOV dword ptr [ECX + 0x4d4],0x0
LAB_004debf3:
004DEBF3  33 C0                     XOR EAX,EAX
004DEBF5  5D                        POP EBP
004DEBF6  C2 04 00                  RET 0x4
