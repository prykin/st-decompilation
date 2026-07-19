FUN_004838b0:
004838B0  8B 91 55 04 00 00         MOV EDX,dword ptr [ECX + 0x455]
004838B6  B8 01 00 00 00            MOV EAX,0x1
004838BB  3B D0                     CMP EDX,EAX
004838BD  74 08                     JZ 0x004838c7
004838BF  39 81 C0 02 00 00         CMP dword ptr [ECX + 0x2c0],EAX
004838C5  75 02                     JNZ 0x004838c9
LAB_004838c7:
004838C7  33 C0                     XOR EAX,EAX
LAB_004838c9:
004838C9  C3                        RET
