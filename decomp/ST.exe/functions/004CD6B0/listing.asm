FUN_004cd6b0:
004CD6B0  8B 81 31 02 00 00         MOV EAX,dword ptr [ECX + 0x231]
004CD6B6  C7 81 24 05 00 00 00 00 00 00  MOV dword ptr [ECX + 0x524],0x0
004CD6C0  83 F8 01                  CMP EAX,0x1
004CD6C3  74 05                     JZ 0x004cd6ca
004CD6C5  83 F8 03                  CMP EAX,0x3
004CD6C8  75 05                     JNZ 0x004cd6cf
LAB_004cd6ca:
004CD6CA  E8 C4 55 F3 FF            CALL 0x00402c93
LAB_004cd6cf:
004CD6CF  33 C0                     XOR EAX,EAX
004CD6D1  C3                        RET
