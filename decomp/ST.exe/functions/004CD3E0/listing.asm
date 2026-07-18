FUN_004cd3e0:
004CD3E0  55                        PUSH EBP
004CD3E1  8B EC                     MOV EBP,ESP
004CD3E3  8B 81 5C 04 00 00         MOV EAX,dword ptr [ECX + 0x45c]
004CD3E9  85 C0                     TEST EAX,EAX
004CD3EB  75 34                     JNZ 0x004cd421
004CD3ED  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
004CD3F0  8B 55 0C                  MOV EDX,dword ptr [EBP + 0xc]
004CD3F3  C7 81 5C 04 00 00 01 00 00 00  MOV dword ptr [ECX + 0x45c],0x1
004CD3FD  89 81 60 04 00 00         MOV dword ptr [ECX + 0x460],EAX
004CD403  89 91 64 04 00 00         MOV dword ptr [ECX + 0x464],EDX
004CD409  A1 38 2A 80 00            MOV EAX,[0x00802a38]
004CD40E  6A 02                     PUSH 0x2
004CD410  8B 90 E4 00 00 00         MOV EDX,dword ptr [EAX + 0xe4]
004CD416  89 91 68 04 00 00         MOV dword ptr [ECX + 0x468],EDX
004CD41C  E8 D0 54 F3 FF            CALL 0x004028f1
LAB_004cd421:
004CD421  33 C0                     XOR EAX,EAX
004CD423  5D                        POP EBP
004CD424  C2 08 00                  RET 0x8
