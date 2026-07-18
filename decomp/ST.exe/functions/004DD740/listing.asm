FUN_004dd740:
004DD740  8B 81 D4 04 00 00         MOV EAX,dword ptr [ECX + 0x4d4]
004DD746  85 C0                     TEST EAX,EAX
004DD748  75 0D                     JNZ 0x004dd757
004DD74A  8B 81 D0 04 00 00         MOV EAX,dword ptr [ECX + 0x4d0]
004DD750  85 C0                     TEST EAX,EAX
004DD752  75 03                     JNZ 0x004dd757
004DD754  33 C0                     XOR EAX,EAX
004DD756  C3                        RET
LAB_004dd757:
004DD757  B8 01 00 00 00            MOV EAX,0x1
004DD75C  C3                        RET
