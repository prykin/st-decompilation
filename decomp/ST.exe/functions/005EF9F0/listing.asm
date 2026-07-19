FUN_005ef9f0:
005EF9F0  8B 91 1D 02 00 00         MOV EDX,dword ptr [ECX + 0x21d]
005EF9F6  33 C0                     XOR EAX,EAX
005EF9F8  85 D2                     TEST EDX,EDX
005EF9FA  0F 94 C0                  SETZ AL
005EF9FD  C3                        RET
