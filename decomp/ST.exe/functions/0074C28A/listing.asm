FUN_0074c28a:
0074C28A  53                        PUSH EBX
0074C28B  8B 1D 8C BB 85 00         MOV EBX,dword ptr [0x0085bb8c]
0074C291  55                        PUSH EBP
0074C292  56                        PUSH ESI
0074C293  8B 74 24 10               MOV ESI,dword ptr [ESP + 0x10]
0074C297  57                        PUSH EDI
0074C298  8D 6E 50                  LEA EBP,[ESI + 0x50]
0074C29B  55                        PUSH EBP
0074C29C  FF D3                     CALL EBX
0074C29E  8B 46 08                  MOV EAX,dword ptr [ESI + 0x8]
0074C2A1  6A 01                     PUSH 0x1
0074C2A3  5F                        POP EDI
0074C2A4  33 D2                     XOR EDX,EDX
0074C2A6  3B C7                     CMP EAX,EDI
0074C2A8  89 54 24 14               MOV dword ptr [ESP + 0x14],EDX
0074C2AC  74 65                     JZ 0x0074c313
0074C2AE  8B 8E 80 00 00 00         MOV ECX,dword ptr [ESI + 0x80]
0074C2B4  3B CA                     CMP ECX,EDX
0074C2B6  74 41                     JZ 0x0074c2f9
0074C2B8  39 51 18                  CMP dword ptr [ECX + 0x18],EDX
0074C2BB  74 3C                     JZ 0x0074c2f9
0074C2BD  8B 8E 84 00 00 00         MOV ECX,dword ptr [ESI + 0x84]
0074C2C3  39 51 18                  CMP dword ptr [ECX + 0x18],EDX
0074C2C6  74 48                     JZ 0x0074c310
0074C2C8  3B C2                     CMP EAX,EDX
0074C2CA  75 1A                     JNZ 0x0074c2e6
0074C2CC  8D 7E 68                  LEA EDI,[ESI + 0x68]
0074C2CF  57                        PUSH EDI
0074C2D0  FF D3                     CALL EBX
0074C2D2  8B 46 F4                  MOV EAX,dword ptr [ESI + -0xc]
0074C2D5  8D 4E F4                  LEA ECX,[ESI + -0xc]
0074C2D8  FF 50 38                  CALL dword ptr [EAX + 0x38]
0074C2DB  57                        PUSH EDI
0074C2DC  89 44 24 18               MOV dword ptr [ESP + 0x18],EAX
0074C2E0  FF 15 90 BB 85 00         CALL dword ptr [0x0085bb90]
LAB_0074c2e6:
0074C2E6  83 7C 24 14 00            CMP dword ptr [ESP + 0x14],0x0
0074C2EB  7C 26                     JL 0x0074c313
0074C2ED  56                        PUSH ESI
0074C2EE  E8 F2 AD FF FF            CALL 0x007470e5
0074C2F3  89 44 24 14               MOV dword ptr [ESP + 0x14],EAX
0074C2F7  EB 1A                     JMP 0x0074c313
LAB_0074c2f9:
0074C2F9  8B 8E 84 00 00 00         MOV ECX,dword ptr [ESI + 0x84]
0074C2FF  3B CA                     CMP ECX,EDX
0074C301  74 0D                     JZ 0x0074c310
0074C303  39 56 44                  CMP dword ptr [ESI + 0x44],EDX
0074C306  75 08                     JNZ 0x0074c310
0074C308  8B 01                     MOV EAX,dword ptr [ECX]
0074C30A  FF 50 4C                  CALL dword ptr [EAX + 0x4c]
0074C30D  89 7E 44                  MOV dword ptr [ESI + 0x44],EDI
LAB_0074c310:
0074C310  89 7E 08                  MOV dword ptr [ESI + 0x8],EDI
LAB_0074c313:
0074C313  83 66 48 00               AND dword ptr [ESI + 0x48],0x0
0074C317  83 66 4C 00               AND dword ptr [ESI + 0x4c],0x0
0074C31B  55                        PUSH EBP
0074C31C  FF 15 90 BB 85 00         CALL dword ptr [0x0085bb90]
0074C322  5F                        POP EDI
0074C323  5E                        POP ESI
0074C324  8B 44 24 0C               MOV EAX,dword ptr [ESP + 0xc]
0074C328  5D                        POP EBP
0074C329  5B                        POP EBX
0074C32A  C2 04 00                  RET 0x4
