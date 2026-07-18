FUN_0074dca1:
0074DCA1  56                        PUSH ESI
0074DCA2  57                        PUSH EDI
0074DCA3  8B 7C 24 10               MOV EDI,dword ptr [ESP + 0x10]
0074DCA7  85 FF                     TEST EDI,EDI
0074DCA9  75 07                     JNZ 0x0074dcb2
0074DCAB  B8 03 40 00 80            MOV EAX,0x80004003
0074DCB0  EB 39                     JMP 0x0074dceb
LAB_0074dcb2:
0074DCB2  FF 74 24 0C               PUSH dword ptr [ESP + 0xc]
0074DCB6  E8 A9 F9 FF FF            CALL 0x0074d664
0074DCBB  8D 74 00 02               LEA ESI,[EAX + EAX*0x1 + 0x2]
0074DCBF  56                        PUSH ESI
0074DCC0  FF 15 D8 C0 85 00         CALL dword ptr [0x0085c0d8]
0074DCC6  85 C0                     TEST EAX,EAX
0074DCC8  89 07                     MOV dword ptr [EDI],EAX
0074DCCA  75 07                     JNZ 0x0074dcd3
0074DCCC  B8 0E 00 07 80            MOV EAX,0x8007000e
0074DCD1  EB 18                     JMP 0x0074dceb
LAB_0074dcd3:
0074DCD3  8B CE                     MOV ECX,ESI
0074DCD5  8B 74 24 0C               MOV ESI,dword ptr [ESP + 0xc]
0074DCD9  8B F8                     MOV EDI,EAX
0074DCDB  8B C1                     MOV EAX,ECX
0074DCDD  C1 E9 02                  SHR ECX,0x2
0074DCE0  F3 A5                     MOVSD.REP ES:EDI,ESI
0074DCE2  8B C8                     MOV ECX,EAX
0074DCE4  83 E1 03                  AND ECX,0x3
0074DCE7  33 C0                     XOR EAX,EAX
0074DCE9  F3 A4                     MOVSB.REP ES:EDI,ESI
LAB_0074dceb:
0074DCEB  5F                        POP EDI
0074DCEC  5E                        POP ESI
0074DCED  C2 08 00                  RET 0x8
