FUN_0074bad7:
0074BAD7  53                        PUSH EBX
0074BAD8  56                        PUSH ESI
0074BAD9  57                        PUSH EDI
0074BADA  8B 7C 24 10               MOV EDI,dword ptr [ESP + 0x10]
0074BADE  8B F1                     MOV ESI,ECX
0074BAE0  39 7E 40                  CMP dword ptr [ESI + 0x40],EDI
0074BAE3  74 12                     JZ 0x0074baf7
0074BAE5  57                        PUSH EDI
0074BAE6  FF 15 D8 C0 85 00         CALL dword ptr [0x0085c0d8]
0074BAEC  8B D8                     MOV EBX,EAX
0074BAEE  85 DB                     TEST EBX,EBX
0074BAF0  75 0E                     JNZ 0x0074bb00
0074BAF2  3B 7E 40                  CMP EDI,dword ptr [ESI + 0x40]
0074BAF5  77 05                     JA 0x0074bafc
LAB_0074baf7:
0074BAF7  8B 46 44                  MOV EAX,dword ptr [ESI + 0x44]
0074BAFA  EB 1B                     JMP 0x0074bb17
LAB_0074bafc:
0074BAFC  33 C0                     XOR EAX,EAX
0074BAFE  EB 17                     JMP 0x0074bb17
LAB_0074bb00:
0074BB00  83 7E 40 00               CMP dword ptr [ESI + 0x40],0x0
0074BB04  74 09                     JZ 0x0074bb0f
0074BB06  FF 76 44                  PUSH dword ptr [ESI + 0x44]
0074BB09  FF 15 DC C0 85 00         CALL dword ptr [0x0085c0dc]
LAB_0074bb0f:
0074BB0F  89 7E 40                  MOV dword ptr [ESI + 0x40],EDI
0074BB12  89 5E 44                  MOV dword ptr [ESI + 0x44],EBX
0074BB15  8B C3                     MOV EAX,EBX
LAB_0074bb17:
0074BB17  5F                        POP EDI
0074BB18  5E                        POP ESI
0074BB19  5B                        POP EBX
0074BB1A  C2 04 00                  RET 0x4
