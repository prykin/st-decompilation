FUN_0074d59e:
0074D59E  8B 54 24 04               MOV EDX,dword ptr [ESP + 0x4]
0074D5A2  56                        PUSH ESI
0074D5A3  57                        PUSH EDI
0074D5A4  8B 7C 24 14               MOV EDI,dword ptr [ESP + 0x14]
0074D5A8  85 FF                     TEST EDI,EDI
0074D5AA  8B C2                     MOV EAX,EDX
0074D5AC  74 20                     JZ 0x0074d5ce
0074D5AE  4F                        DEC EDI
0074D5AF  74 16                     JZ 0x0074d5c7
0074D5B1  8B 74 24 10               MOV ESI,dword ptr [ESP + 0x10]
LAB_0074d5b5:
0074D5B5  66 8B 0E                  MOV CX,word ptr [ESI]
0074D5B8  66 89 0A                  MOV word ptr [EDX],CX
0074D5BB  42                        INC EDX
0074D5BC  42                        INC EDX
0074D5BD  46                        INC ESI
0074D5BE  46                        INC ESI
0074D5BF  66 85 C9                  TEST CX,CX
0074D5C2  74 03                     JZ 0x0074d5c7
0074D5C4  4F                        DEC EDI
0074D5C5  75 EE                     JNZ 0x0074d5b5
LAB_0074d5c7:
0074D5C7  85 FF                     TEST EDI,EDI
0074D5C9  75 03                     JNZ 0x0074d5ce
0074D5CB  66 21 3A                  AND word ptr [EDX],DI
LAB_0074d5ce:
0074D5CE  5F                        POP EDI
0074D5CF  5E                        POP ESI
0074D5D0  C2 0C 00                  RET 0xc
