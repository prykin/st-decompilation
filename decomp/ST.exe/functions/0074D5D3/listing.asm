FUN_0074d5d3:
0074D5D3  8B 54 24 08               MOV EDX,dword ptr [ESP + 0x8]
0074D5D7  56                        PUSH ESI
0074D5D8  8B 74 24 08               MOV ESI,dword ptr [ESP + 0x8]
0074D5DC  66 8B 06                  MOV AX,word ptr [ESI]
LAB_0074d5df:
0074D5DF  66 8B 0A                  MOV CX,word ptr [EDX]
0074D5E2  66 3B C1                  CMP AX,CX
0074D5E5  75 13                     JNZ 0x0074d5fa
0074D5E7  46                        INC ESI
0074D5E8  46                        INC ESI
0074D5E9  66 85 C0                  TEST AX,AX
0074D5EC  74 16                     JZ 0x0074d604
0074D5EE  42                        INC EDX
0074D5EF  42                        INC EDX
0074D5F0  66 85 C9                  TEST CX,CX
0074D5F3  74 0F                     JZ 0x0074d604
0074D5F5  66 8B 06                  MOV AX,word ptr [ESI]
0074D5F8  EB E5                     JMP 0x0074d5df
LAB_0074d5fa:
0074D5FA  0F B7 C0                  MOVZX EAX,AX
0074D5FD  0F B7 C9                  MOVZX ECX,CX
0074D600  2B C1                     SUB EAX,ECX
0074D602  EB 02                     JMP 0x0074d606
LAB_0074d604:
0074D604  33 C0                     XOR EAX,EAX
LAB_0074d606:
0074D606  5E                        POP ESI
0074D607  C2 08 00                  RET 0x8
