FUN_0074f236:
0074F236  56                        PUSH ESI
0074F237  8B 74 24 0C               MOV ESI,dword ptr [ESP + 0xc]
0074F23B  85 F6                     TEST ESI,ESI
0074F23D  75 07                     JNZ 0x0074f246
0074F23F  B8 03 40 00 80            MOV EAX,0x80004003
0074F244  EB 1C                     JMP 0x0074f262
LAB_0074f246:
0074F246  57                        PUSH EDI
0074F247  6A 10                     PUSH 0x10
0074F249  59                        POP ECX
0074F24A  BF D8 1D 7A 00            MOV EDI,0x7a1dd8
0074F24F  33 C0                     XOR EAX,EAX
0074F251  F3 A6                     CMPSB.REPE ES:EDI,ESI
0074F253  0F 95 C0                  SETNZ AL
0074F256  48                        DEC EAX
0074F257  5F                        POP EDI
0074F258  25 A9 FF F8 7F            AND EAX,0x7ff8ffa9
0074F25D  05 57 00 07 80            ADD EAX,0x80070057
LAB_0074f262:
0074F262  5E                        POP ESI
0074F263  C2 08 00                  RET 0x8
