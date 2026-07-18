FUN_004dc470:
004DC470  8B 81 45 02 00 00         MOV EAX,dword ptr [ECX + 0x245]
004DC476  85 C0                     TEST EAX,EAX
004DC478  75 20                     JNZ 0x004dc49a
004DC47A  8B 81 D0 04 00 00         MOV EAX,dword ptr [ECX + 0x4d0]
004DC480  85 C0                     TEST EAX,EAX
004DC482  75 16                     JNZ 0x004dc49a
004DC484  81 B9 D4 04 00 00 C8 00 00 00  CMP dword ptr [ECX + 0x4d4],0xc8
004DC48E  7D 0A                     JGE 0x004dc49a
004DC490  C7 81 61 02 00 00 00 00 00 00  MOV dword ptr [ECX + 0x261],0x0
LAB_004dc49a:
004DC49A  33 C0                     XOR EAX,EAX
004DC49C  C3                        RET
