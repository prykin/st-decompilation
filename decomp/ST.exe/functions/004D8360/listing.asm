FUN_004d8360:
004D8360  A1 3C A1 7F 00            MOV EAX,[0x007fa13c]
004D8365  8B 15 38 A1 7F 00         MOV EDX,dword ptr [0x007fa138]
004D836B  3B C2                     CMP EAX,EDX
004D836D  7D 3A                     JGE 0x004d83a9
004D836F  A1 44 A1 7F 00            MOV EAX,[0x007fa144]
004D8374  8B 15 38 2A 80 00         MOV EDX,dword ptr [0x00802a38]
004D837A  56                        PUSH ESI
004D837B  8B 35 4C A1 7F 00         MOV ESI,dword ptr [0x007fa14c]
004D8381  8B 92 E4 00 00 00         MOV EDX,dword ptr [EDX + 0xe4]
004D8387  8D 34 86                  LEA ESI,[ESI + EAX*0x4]
004D838A  03 C6                     ADD EAX,ESI
004D838C  5E                        POP ESI
004D838D  3B D0                     CMP EDX,EAX
004D838F  72 18                     JC 0x004d83a9
004D8391  A1 3C A1 7F 00            MOV EAX,[0x007fa13c]
004D8396  89 15 4C A1 7F 00         MOV dword ptr [0x007fa14c],EDX
004D839C  83 C0 02                  ADD EAX,0x2
004D839F  A3 3C A1 7F 00            MOV [0x007fa13c],EAX
004D83A4  E8 69 C5 F2 FF            CALL 0x00404912
LAB_004d83a9:
004D83A9  33 C0                     XOR EAX,EAX
004D83AB  C3                        RET
