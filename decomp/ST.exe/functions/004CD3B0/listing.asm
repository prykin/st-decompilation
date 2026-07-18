FUN_004cd3b0:
004CD3B0  8B 81 5C 04 00 00         MOV EAX,dword ptr [ECX + 0x45c]
004CD3B6  85 C0                     TEST EAX,EAX
004CD3B8  74 05                     JZ 0x004cd3bf
004CD3BA  E8 5F 87 F3 FF            CALL 0x00405b1e
LAB_004cd3bf:
004CD3BF  33 C0                     XOR EAX,EAX
004CD3C1  C3                        RET
