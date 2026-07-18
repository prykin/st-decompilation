FUN_004c96e0:
004C96E0  56                        PUSH ESI
004C96E1  8B F1                     MOV ESI,ECX
004C96E3  8B 0D 74 A1 7F 00         MOV ECX,dword ptr [0x007fa174]
004C96E9  8A 86 3D 02 00 00         MOV AL,byte ptr [ESI + 0x23d]
004C96EF  50                        PUSH EAX
004C96F0  E8 C2 B2 F3 FF            CALL 0x004049b7
004C96F5  25 FF 00 00 00            AND EAX,0xff
004C96FA  48                        DEC EAX
004C96FB  8B C8                     MOV ECX,EAX
004C96FD  8B 86 35 02 00 00         MOV EAX,dword ptr [ESI + 0x235]
004C9703  8D 0C 41                  LEA ECX,[ECX + EAX*0x2]
004C9706  03 C1                     ADD EAX,ECX
004C9708  8B 8E 45 02 00 00         MOV ECX,dword ptr [ESI + 0x245]
004C970E  8B 14 8D 98 B1 7B 00      MOV EDX,dword ptr [ECX*0x4 + 0x7bb198]
004C9715  8D 04 40                  LEA EAX,[EAX + EAX*0x2]
004C9718  C1 E0 02                  SHL EAX,0x2
004C971B  8B 14 02                  MOV EDX,dword ptr [EDX + EAX*0x1]
004C971E  89 96 EF 05 00 00         MOV dword ptr [ESI + 0x5ef],EDX
004C9724  8B 14 8D 98 B1 7B 00      MOV EDX,dword ptr [ECX*0x4 + 0x7bb198]
004C972B  8B 54 02 04               MOV EDX,dword ptr [EDX + EAX*0x1 + 0x4]
004C972F  89 96 F3 05 00 00         MOV dword ptr [ESI + 0x5f3],EDX
004C9735  8B 0C 8D 98 B1 7B 00      MOV ECX,dword ptr [ECX*0x4 + 0x7bb198]
004C973C  8B 54 01 08               MOV EDX,dword ptr [ECX + EAX*0x1 + 0x8]
004C9740  89 96 F7 05 00 00         MOV dword ptr [ESI + 0x5f7],EDX
004C9746  5E                        POP ESI
004C9747  C3                        RET
