FUN_005808e0:
005808E0  8B 81 1D 02 00 00         MOV EAX,dword ptr [ECX + 0x21d]
005808E6  85 C0                     TEST EAX,EAX
005808E8  75 0F                     JNZ 0x005808f9
005808EA  83 B9 5D 02 00 00 02      CMP dword ptr [ECX + 0x25d],0x2
005808F1  74 06                     JZ 0x005808f9
005808F3  B8 01 00 00 00            MOV EAX,0x1
005808F8  C3                        RET
LAB_005808f9:
005808F9  33 C0                     XOR EAX,EAX
005808FB  C3                        RET
