FUN_0074b469:
0074B469  53                        PUSH EBX
0074B46A  8B 5C 24 0C               MOV EBX,dword ptr [ESP + 0xc]
0074B46E  85 DB                     TEST EBX,EBX
0074B470  75 07                     JNZ 0x0074b479
0074B472  B8 03 40 00 80            MOV EAX,0x80004003
0074B477  EB 20                     JMP 0x0074b499
LAB_0074b479:
0074B479  57                        PUSH EDI
0074B47A  56                        PUSH ESI
0074B47B  8B 74 24 10               MOV ESI,dword ptr [ESP + 0x10]
0074B47F  8D 7E B4                  LEA EDI,[ESI + -0x4c]
0074B482  57                        PUSH EDI
0074B483  FF 15 8C BB 85 00         CALL dword ptr [0x0085bb8c]
0074B489  8B 46 40                  MOV EAX,dword ptr [ESI + 0x40]
0074B48C  57                        PUSH EDI
0074B48D  89 03                     MOV dword ptr [EBX],EAX
0074B48F  FF 15 90 BB 85 00         CALL dword ptr [0x0085bb90]
0074B495  5E                        POP ESI
0074B496  33 C0                     XOR EAX,EAX
0074B498  5F                        POP EDI
LAB_0074b499:
0074B499  5B                        POP EBX
0074B49A  C2 08 00                  RET 0x8
