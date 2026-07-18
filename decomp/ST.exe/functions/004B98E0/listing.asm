FUN_004b98e0:
004B98E0  55                        PUSH EBP
004B98E1  8B EC                     MOV EBP,ESP
004B98E3  8B 81 55 02 00 00         MOV EAX,dword ptr [ECX + 0x255]
004B98E9  85 C0                     TEST EAX,EAX
004B98EB  74 10                     JZ 0x004b98fd
004B98ED  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
004B98F0  6A 01                     PUSH 0x1
004B98F2  89 81 59 02 00 00         MOV dword ptr [ECX + 0x259],EAX
004B98F8  E8 FA 93 F4 FF            CALL 0x00402cf7
LAB_004b98fd:
004B98FD  33 C0                     XOR EAX,EAX
004B98FF  5D                        POP EBP
004B9900  C2 04 00                  RET 0x4
