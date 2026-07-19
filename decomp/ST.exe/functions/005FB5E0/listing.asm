FUN_005fb5e0:
005FB5E0  8B 91 69 02 00 00         MOV EDX,dword ptr [ECX + 0x269]
005FB5E6  33 C0                     XOR EAX,EAX
005FB5E8  85 D2                     TEST EDX,EDX
005FB5EA  0F 9F C0                  SETG AL
005FB5ED  C3                        RET
