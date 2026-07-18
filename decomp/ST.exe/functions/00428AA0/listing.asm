FUN_00428aa0:
00428AA0  55                        PUSH EBP
00428AA1  8B EC                     MOV EBP,ESP
00428AA3  8B 0D 58 2A 80 00         MOV ECX,dword ptr [0x00802a58]
00428AA9  85 C9                     TEST ECX,ECX
00428AAB  75 05                     JNZ 0x00428ab2
00428AAD  83 C8 FF                  OR EAX,0xffffffff
00428AB0  5D                        POP EBP
00428AB1  C3                        RET
LAB_00428ab2:
00428AB2  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
00428AB5  85 C0                     TEST EAX,EAX
00428AB7  7D 36                     JGE 0x00428aef
00428AB9  F7 D8                     NEG EAX
00428ABB  50                        PUSH EAX
00428ABC  A1 18 76 80 00            MOV EAX,[0x00807618]
00428AC1  50                        PUSH EAX
00428AC2  68 81 26 00 00            PUSH 0x2681
00428AC7  E8 74 76 28 00            CALL 0x006b0140
00428ACC  8B 0D 58 2A 80 00         MOV ECX,dword ptr [0x00802a58]
00428AD2  50                        PUSH EAX
00428AD3  6A 00                     PUSH 0x0
00428AD5  E8 B1 C2 FD FF            CALL 0x00404d8b
00428ADA  8B 0D 58 2A 80 00         MOV ECX,dword ptr [0x00802a58]
00428AE0  6A 00                     PUSH 0x0
00428AE2  6A 00                     PUSH 0x0
00428AE4  6A 00                     PUSH 0x0
00428AE6  E8 87 A9 FD FF            CALL 0x00403472
00428AEB  33 C0                     XOR EAX,EAX
00428AED  5D                        POP EBP
00428AEE  C3                        RET
LAB_00428aef:
00428AEF  6A 00                     PUSH 0x0
00428AF1  50                        PUSH EAX
00428AF2  6A 01                     PUSH 0x1
00428AF4  E8 79 A9 FD FF            CALL 0x00403472
00428AF9  33 C0                     XOR EAX,EAX
00428AFB  5D                        POP EBP
00428AFC  C3                        RET
