FUN_004c7c20:
004C7C20  8B 91 61 03 00 00         MOV EDX,dword ptr [ECX + 0x361]
004C7C26  33 C0                     XOR EAX,EAX
004C7C28  85 D2                     TEST EDX,EDX
004C7C2A  75 05                     JNZ 0x004c7c31
004C7C2C  B8 01 00 00 00            MOV EAX,0x1
LAB_004c7c31:
004C7C31  C2 0C 00                  RET 0xc
