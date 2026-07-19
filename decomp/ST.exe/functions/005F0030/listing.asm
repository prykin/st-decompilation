FUN_005f0030:
005F0030  8A 91 4E 02 00 00         MOV DL,byte ptr [ECX + 0x24e]
005F0036  33 C0                     XOR EAX,EAX
005F0038  84 D2                     TEST DL,DL
005F003A  0F 94 C0                  SETZ AL
005F003D  C3                        RET
