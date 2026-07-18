FUN_0075dc70:
0075DC70  55                        PUSH EBP
0075DC71  8B EC                     MOV EBP,ESP
0075DC73  83 EC 08                  SUB ESP,0x8
0075DC76  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
0075DC79  53                        PUSH EBX
0075DC7A  57                        PUSH EDI
0075DC7B  8B 58 1C                  MOV EBX,dword ptr [EAX + 0x1c]
0075DC7E  8B 78 68                  MOV EDI,dword ptr [EAX + 0x68]
0075DC81  8B 45 18                  MOV EAX,dword ptr [EBP + 0x18]
0075DC84  89 5D FC                  MOV dword ptr [EBP + -0x4],EBX
0075DC87  48                        DEC EAX
0075DC88  89 7D F8                  MOV dword ptr [EBP + -0x8],EDI
0075DC8B  78 65                     JS 0x0075dcf2
0075DC8D  8B 4D 10                  MOV ECX,dword ptr [EBP + 0x10]
0075DC90  40                        INC EAX
0075DC91  56                        PUSH ESI
0075DC92  89 45 18                  MOV dword ptr [EBP + 0x18],EAX
0075DC95  8D 14 8D 00 00 00 00      LEA EDX,[ECX*0x4 + 0x0]
0075DC9C  89 55 08                  MOV dword ptr [EBP + 0x8],EDX
LAB_0075dc9f:
0075DC9F  33 F6                     XOR ESI,ESI
0075DCA1  85 DB                     TEST EBX,EBX
0075DCA3  7E 2E                     JLE 0x0075dcd3
0075DCA5  8B 55 0C                  MOV EDX,dword ptr [EBP + 0xc]
LAB_0075dca8:
0075DCA8  8B 02                     MOV EAX,dword ptr [EDX]
0075DCAA  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
0075DCAD  8B 0C 08                  MOV ECX,dword ptr [EAX + ECX*0x1]
0075DCB0  8B 45 14                  MOV EAX,dword ptr [EBP + 0x14]
0075DCB3  8B 00                     MOV EAX,dword ptr [EAX]
0075DCB5  03 C6                     ADD EAX,ESI
0075DCB7  85 FF                     TEST EDI,EDI
0075DCB9  76 10                     JBE 0x0075dccb
LAB_0075dcbb:
0075DCBB  8A 19                     MOV BL,byte ptr [ECX]
0075DCBD  41                        INC ECX
0075DCBE  88 18                     MOV byte ptr [EAX],BL
0075DCC0  8B 5D FC                  MOV EBX,dword ptr [EBP + -0x4]
0075DCC3  03 C3                     ADD EAX,EBX
0075DCC5  4F                        DEC EDI
0075DCC6  75 F3                     JNZ 0x0075dcbb
0075DCC8  8B 7D F8                  MOV EDI,dword ptr [EBP + -0x8]
LAB_0075dccb:
0075DCCB  46                        INC ESI
0075DCCC  83 C2 04                  ADD EDX,0x4
0075DCCF  3B F3                     CMP ESI,EBX
0075DCD1  7C D5                     JL 0x0075dca8
LAB_0075dcd3:
0075DCD3  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
0075DCD6  8B 4D 14                  MOV ECX,dword ptr [EBP + 0x14]
0075DCD9  B8 04 00 00 00            MOV EAX,0x4
0075DCDE  03 D0                     ADD EDX,EAX
0075DCE0  03 C8                     ADD ECX,EAX
0075DCE2  8B 45 18                  MOV EAX,dword ptr [EBP + 0x18]
0075DCE5  89 55 08                  MOV dword ptr [EBP + 0x8],EDX
0075DCE8  48                        DEC EAX
0075DCE9  89 4D 14                  MOV dword ptr [EBP + 0x14],ECX
0075DCEC  89 45 18                  MOV dword ptr [EBP + 0x18],EAX
0075DCEF  75 AE                     JNZ 0x0075dc9f
0075DCF1  5E                        POP ESI
LAB_0075dcf2:
0075DCF2  5F                        POP EDI
0075DCF3  5B                        POP EBX
0075DCF4  8B E5                     MOV ESP,EBP
0075DCF6  5D                        POP EBP
0075DCF7  C2 14 00                  RET 0x14
