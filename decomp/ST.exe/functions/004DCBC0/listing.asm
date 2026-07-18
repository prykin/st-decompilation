FUN_004dcbc0:
004DCBC0  8B 81 31 02 00 00         MOV EAX,dword ptr [ECX + 0x231]
004DCBC6  85 C0                     TEST EAX,EAX
004DCBC8  75 05                     JNZ 0x004dcbcf
004DCBCA  E8 F3 63 F2 FF            CALL 0x00402fc2
LAB_004dcbcf:
004DCBCF  33 C0                     XOR EAX,EAX
004DCBD1  C3                        RET
