FUN_004dd770:
004DD770  55                        PUSH EBP
004DD771  8B EC                     MOV EBP,ESP
004DD773  56                        PUSH ESI
004DD774  8B F1                     MOV ESI,ECX
004DD776  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
004DD779  8B 86 D4 04 00 00         MOV EAX,dword ptr [ESI + 0x4d4]
004DD77F  3B C1                     CMP EAX,ECX
004DD781  75 24                     JNZ 0x004dd7a7
004DD783  6A 00                     PUSH 0x0
004DD785  8B CE                     MOV ECX,ESI
004DD787  C7 86 D0 04 00 00 01 00 00 00  MOV dword ptr [ESI + 0x4d0],0x1
004DD791  E8 61 55 F2 FF            CALL 0x00402cf7
004DD796  8B 16                     MOV EDX,dword ptr [ESI]
004DD798  68 15 04 00 00            PUSH 0x415
004DD79D  6A 03                     PUSH 0x3
004DD79F  8B CE                     MOV ECX,ESI
004DD7A1  FF 92 90 00 00 00         CALL dword ptr [EDX + 0x90]
LAB_004dd7a7:
004DD7A7  33 C0                     XOR EAX,EAX
004DD7A9  5E                        POP ESI
004DD7AA  5D                        POP EBP
004DD7AB  C2 04 00                  RET 0x4
