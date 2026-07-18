FUN_0074e31d:
0074E31D  8B 44 24 08               MOV EAX,dword ptr [ESP + 0x8]
0074E321  85 C0                     TEST EAX,EAX
0074E323  75 07                     JNZ 0x0074e32c
0074E325  B8 03 40 00 80            MOV EAX,0x80004003
0074E32A  EB 08                     JMP 0x0074e334
LAB_0074e32c:
0074E32C  C7 00 01 00 00 00         MOV dword ptr [EAX],0x1
0074E332  33 C0                     XOR EAX,EAX
LAB_0074e334:
0074E334  C2 08 00                  RET 0x8
