FUN_0074ae8e:
0074AE8E  56                        PUSH ESI
0074AE8F  57                        PUSH EDI
0074AE90  8B F1                     MOV ESI,ECX
0074AE92  FF 15 DC BE 85 00         CALL dword ptr [0x0085bedc]
0074AE98  8B C8                     MOV ECX,EAX
0074AE9A  8B 86 DC 00 00 00         MOV EAX,dword ptr [ESI + 0xdc]
0074AEA0  2B 8E E4 00 00 00         SUB ECX,dword ptr [ESI + 0xe4]
0074AEA6  8D 14 00                  LEA EDX,[EAX + EAX*0x1]
0074AEA9  69 C9 10 27 00 00         IMUL ECX,ECX,0x2710
0074AEAF  3B CA                     CMP ECX,EDX
0074AEB1  7C 0C                     JL 0x0074aebf
0074AEB3  8B 96 E0 00 00 00         MOV EDX,dword ptr [ESI + 0xe0]
0074AEB9  D1 E2                     SHL EDX,0x1
0074AEBB  3B CA                     CMP ECX,EDX
0074AEBD  7D 11                     JGE 0x0074aed0
LAB_0074aebf:
0074AEBF  8D 14 41                  LEA EDX,[ECX + EAX*0x2]
0074AEC2  6A 04                     PUSH 0x4
0074AEC4  03 C2                     ADD EAX,EDX
0074AEC6  5F                        POP EDI
0074AEC7  99                        CDQ
0074AEC8  F7 FF                     IDIV EDI
0074AECA  89 86 DC 00 00 00         MOV dword ptr [ESI + 0xdc],EAX
LAB_0074aed0:
0074AED0  89 8E E0 00 00 00         MOV dword ptr [ESI + 0xe0],ECX
0074AED6  8B CE                     MOV ECX,ESI
0074AED8  E8 39 FF FF FF            CALL 0x0074ae16
0074AEDD  5F                        POP EDI
0074AEDE  5E                        POP ESI
0074AEDF  C2 04 00                  RET 0x4
