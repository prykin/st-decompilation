FUN_0060d340:
0060D340  8B 91 44 02 00 00         MOV EDX,dword ptr [ECX + 0x244]
0060D346  33 C0                     XOR EAX,EAX
0060D348  85 D2                     TEST EDX,EDX
0060D34A  74 28                     JZ 0x0060d374
0060D34C  83 B9 0D 02 00 00 05      CMP dword ptr [ECX + 0x20d],0x5
0060D353  75 1F                     JNZ 0x0060d374
0060D355  83 B9 48 02 00 00 01      CMP dword ptr [ECX + 0x248],0x1
0060D35C  75 16                     JNZ 0x0060d374
0060D35E  A1 38 2A 80 00            MOV EAX,[0x00802a38]
0060D363  8B 90 E4 00 00 00         MOV EDX,dword ptr [EAX + 0xe4]
0060D369  B8 01 00 00 00            MOV EAX,0x1
0060D36E  89 91 50 02 00 00         MOV dword ptr [ECX + 0x250],EDX
LAB_0060d374:
0060D374  C3                        RET
