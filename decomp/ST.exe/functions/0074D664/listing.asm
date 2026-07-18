FUN_0074d664:
0074D664  8B 4C 24 04               MOV ECX,dword ptr [ESP + 0x4]
0074D668  33 C0                     XOR EAX,EAX
LAB_0074d66a:
0074D66A  66 83 39 00               CMP word ptr [ECX],0x0
0074D66E  74 05                     JZ 0x0074d675
0074D670  40                        INC EAX
0074D671  41                        INC ECX
0074D672  41                        INC ECX
0074D673  EB F5                     JMP 0x0074d66a
LAB_0074d675:
0074D675  C2 04 00                  RET 0x4
