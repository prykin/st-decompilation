FUN_0074c858:
0074C858  56                        PUSH ESI
0074C859  8B B1 A0 00 00 00         MOV ESI,dword ptr [ECX + 0xa0]
0074C85F  57                        PUSH EDI
0074C860  8D B9 A0 00 00 00         LEA EDI,[ECX + 0xa0]
0074C866  83 C6 5C                  ADD ESI,0x5c
0074C869  56                        PUSH ESI
0074C86A  FF 15 8C BB 85 00         CALL dword ptr [0x0085bb8c]
0074C870  8B 0F                     MOV ECX,dword ptr [EDI]
0074C872  8B 81 8C 00 00 00         MOV EAX,dword ptr [ECX + 0x8c]
0074C878  83 78 18 00               CMP dword ptr [EAX + 0x18],0x0
0074C87C  74 1A                     JZ 0x0074c898
0074C87E  FF 74 24 10               PUSH dword ptr [ESP + 0x10]
0074C882  8B 01                     MOV EAX,dword ptr [ECX]
0074C884  FF 74 24 10               PUSH dword ptr [ESP + 0x10]
0074C888  FF 50 34                  CALL dword ptr [EAX + 0x34]
0074C88B  56                        PUSH ESI
0074C88C  8B F8                     MOV EDI,EAX
0074C88E  FF 15 90 BB 85 00         CALL dword ptr [0x0085bb90]
0074C894  8B C7                     MOV EAX,EDI
0074C896  EB 0C                     JMP 0x0074c8a4
LAB_0074c898:
0074C898  56                        PUSH ESI
0074C899  FF 15 90 BB 85 00         CALL dword ptr [0x0085bb90]
0074C89F  B8 03 01 04 00            MOV EAX,0x40103
LAB_0074c8a4:
0074C8A4  5F                        POP EDI
0074C8A5  5E                        POP ESI
0074C8A6  C2 08 00                  RET 0x8
