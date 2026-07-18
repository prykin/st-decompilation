FUN_004eccc0:
004ECCC0  83 B9 AC 05 00 00 6F      CMP dword ptr [ECX + 0x5ac],0x6f
004ECCC7  75 07                     JNZ 0x004eccd0
004ECCC9  6A 08                     PUSH 0x8
004ECCCB  E8 20 5D F1 FF            CALL 0x004029f0
LAB_004eccd0:
004ECCD0  33 C0                     XOR EAX,EAX
004ECCD2  C3                        RET
