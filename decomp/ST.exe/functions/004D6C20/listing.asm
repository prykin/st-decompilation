FUN_004d6c20:
004D6C20  8B 81 A0 02 00 00         MOV EAX,dword ptr [ECX + 0x2a0]
004D6C26  85 C0                     TEST EAX,EAX
004D6C28  75 10                     JNZ 0x004d6c3a
004D6C2A  8B 81 E4 02 00 00         MOV EAX,dword ptr [ECX + 0x2e4]
004D6C30  85 C0                     TEST EAX,EAX
004D6C32  75 06                     JNZ 0x004d6c3a
004D6C34  B8 01 00 00 00            MOV EAX,0x1
004D6C39  C3                        RET
LAB_004d6c3a:
004D6C3A  33 C0                     XOR EAX,EAX
004D6C3C  C3                        RET
