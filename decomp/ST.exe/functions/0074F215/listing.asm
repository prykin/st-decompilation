FUN_0074f215:
0074F215  57                        PUSH EDI
0074F216  8B 7C 24 0C               MOV EDI,dword ptr [ESP + 0xc]
0074F21A  85 FF                     TEST EDI,EDI
0074F21C  75 07                     JNZ 0x0074f225
0074F21E  B8 03 40 00 80            MOV EAX,0x80004003
0074F223  EB 0D                     JMP 0x0074f232
LAB_0074f225:
0074F225  56                        PUSH ESI
0074F226  BE D8 1D 7A 00            MOV ESI,0x7a1dd8
0074F22B  A5                        MOVSD ES:EDI,ESI
0074F22C  A5                        MOVSD ES:EDI,ESI
0074F22D  A5                        MOVSD ES:EDI,ESI
0074F22E  A5                        MOVSD ES:EDI,ESI
0074F22F  33 C0                     XOR EAX,EAX
0074F231  5E                        POP ESI
LAB_0074f232:
0074F232  5F                        POP EDI
0074F233  C2 08 00                  RET 0x8
