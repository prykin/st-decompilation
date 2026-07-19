FUN_004952c0:
004952C0  8B 91 3A 07 00 00         MOV EDX,dword ptr [ECX + 0x73a]
004952C6  33 C0                     XOR EAX,EAX
004952C8  85 D2                     TEST EDX,EDX
004952CA  0F 9F C0                  SETG AL
004952CD  C3                        RET
