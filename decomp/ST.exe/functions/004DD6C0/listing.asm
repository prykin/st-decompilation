FUN_004dd6c0:
004DD6C0  55                        PUSH EBP
004DD6C1  8B EC                     MOV EBP,ESP
004DD6C3  8B 81 D4 04 00 00         MOV EAX,dword ptr [ECX + 0x4d4]
004DD6C9  85 C0                     TEST EAX,EAX
004DD6CB  75 12                     JNZ 0x004dd6df
004DD6CD  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
004DD6D0  89 81 D4 04 00 00         MOV dword ptr [ECX + 0x4d4],EAX
004DD6D6  B8 01 00 00 00            MOV EAX,0x1
004DD6DB  5D                        POP EBP
004DD6DC  C2 04 00                  RET 0x4
LAB_004dd6df:
004DD6DF  33 C0                     XOR EAX,EAX
004DD6E1  5D                        POP EBP
004DD6E2  C2 04 00                  RET 0x4
