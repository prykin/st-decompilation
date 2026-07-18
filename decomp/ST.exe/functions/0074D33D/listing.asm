FUN_0074d33d:
0074D33D  56                        PUSH ESI
0074D33E  8B F1                     MOV ESI,ECX
0074D340  57                        PUSH EDI
0074D341  8D 7E 18                  LEA EDI,[ESI + 0x18]
0074D344  57                        PUSH EDI
0074D345  FF 15 8C BB 85 00         CALL dword ptr [0x0085bb8c]
0074D34B  83 7E 14 00               CMP dword ptr [ESI + 0x14],0x0
0074D34F  75 0E                     JNZ 0x0074d35f
0074D351  57                        PUSH EDI
0074D352  FF 15 90 BB 85 00         CALL dword ptr [0x0085bb90]
0074D358  B8 05 40 00 80            MOV EAX,0x80004005
0074D35D  EB 27                     JMP 0x0074d386
LAB_0074d35f:
0074D35F  8B 44 24 0C               MOV EAX,dword ptr [ESP + 0xc]
0074D363  FF 76 04                  PUSH dword ptr [ESI + 0x4]
0074D366  89 46 0C                  MOV dword ptr [ESI + 0xc],EAX
0074D369  FF 15 80 BB 85 00         CALL dword ptr [0x0085bb80]
0074D36F  6A FF                     PUSH -0x1
0074D371  FF 76 08                  PUSH dword ptr [ESI + 0x8]
0074D374  FF 15 E0 BC 85 00         CALL dword ptr [0x0085bce0]
0074D37A  8B 76 10                  MOV ESI,dword ptr [ESI + 0x10]
0074D37D  57                        PUSH EDI
0074D37E  FF 15 90 BB 85 00         CALL dword ptr [0x0085bb90]
0074D384  8B C6                     MOV EAX,ESI
LAB_0074d386:
0074D386  5F                        POP EDI
0074D387  5E                        POP ESI
0074D388  C2 04 00                  RET 0x4
