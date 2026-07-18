FUN_0074f1f0:
0074F1F0  56                        PUSH ESI
0074F1F1  8B 74 24 0C               MOV ESI,dword ptr [ESP + 0xc]
0074F1F5  85 F6                     TEST ESI,ESI
0074F1F7  75 07                     JNZ 0x0074f200
0074F1F9  B8 03 40 00 80            MOV EAX,0x80004003
0074F1FE  EB 11                     JMP 0x0074f211
LAB_0074f200:
0074F200  57                        PUSH EDI
0074F201  6A 10                     PUSH 0x10
0074F203  59                        POP ECX
0074F204  BF D8 1D 7A 00            MOV EDI,0x7a1dd8
0074F209  33 C0                     XOR EAX,EAX
0074F20B  F3 A6                     CMPSB.REPE ES:EDI,ESI
0074F20D  0F 95 C0                  SETNZ AL
0074F210  5F                        POP EDI
LAB_0074f211:
0074F211  5E                        POP ESI
0074F212  C2 08 00                  RET 0x8
