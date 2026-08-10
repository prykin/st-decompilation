FUN_0074f266:
0074F266  56                        PUSH ESI
0074F267  8B 74 24 0C               MOV ESI,dword ptr [ESP + 0xc]
0074F26B  85 F6                     TEST ESI,ESI
0074F26D  75 07                     JNZ 0x0074f276
0074F26F  B8 03 40 00 80            MOV EAX,0x80004003
0074F274  EB 11                     JMP 0x0074f287
LAB_0074f276:
0074F276  57                        PUSH EDI
0074F277  6A 10                     PUSH 0x10
0074F279  59                        POP ECX
0074F27A  BF D8 1D 7A 00            MOV EDI,0x7a1dd8
0074F27F  33 C0                     XOR EAX,EAX
0074F281  F3 A6                     CMPSB.REPE ES:EDI,ESI
0074F283  0F 95 C0                  SETNZ AL
0074F286  5F                        POP EDI
LAB_0074f287:
0074F287  5E                        POP ESI
0074F288  C2 08 00                  RET 0x8
