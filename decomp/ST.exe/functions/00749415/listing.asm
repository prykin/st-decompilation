FUN_00749415:
00749415  33 C0                     XOR EAX,EAX
00749417  39 41 38                  CMP dword ptr [ECX + 0x38],EAX
0074941A  7E 15                     JLE 0x00749431
0074941C  39 41 40                  CMP dword ptr [ECX + 0x40],EAX
0074941F  7E 10                     JLE 0x00749431
00749421  39 41 44                  CMP dword ptr [ECX + 0x44],EAX
00749424  7E 0B                     JLE 0x00749431
00749426  33 D2                     XOR EDX,EDX
00749428  39 41 4C                  CMP dword ptr [ECX + 0x4c],EAX
0074942B  0F 94 C2                  SETZ DL
0074942E  8B C2                     MOV EAX,EDX
00749430  C3                        RET
LAB_00749431:
00749431  B8 12 02 04 80            MOV EAX,0x80040212
00749436  C3                        RET
