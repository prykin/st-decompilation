FUN_0069ff90:
0069FF90  8B 81 4A 02 00 00         MOV EAX,dword ptr [ECX + 0x24a]
0069FF96  85 C0                     TEST EAX,EAX
0069FF98  74 04                     JZ 0x0069ff9e
0069FF9A  6A 00                     PUSH 0x0
0069FF9C  FF D0                     CALL EAX
LAB_0069ff9e:
0069FF9E  C3                        RET
