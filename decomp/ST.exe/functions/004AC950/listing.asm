FUN_004ac950:
004AC950  55                        PUSH EBP
004AC951  8B EC                     MOV EBP,ESP
004AC953  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
004AC956  8B 49 20                  MOV ECX,dword ptr [ECX + 0x20]
004AC959  56                        PUSH ESI
004AC95A  57                        PUSH EDI
004AC95B  8D 04 C0                  LEA EAX,[EAX + EAX*0x8]
004AC95E  8B 74 81 10               MOV ESI,dword ptr [ECX + EAX*0x4 + 0x10]
004AC962  8B 54 81 14               MOV EDX,dword ptr [ECX + EAX*0x4 + 0x14]
004AC966  8B 3C 81                  MOV EDI,dword ptr [ECX + EAX*0x4]
004AC969  8D 0C 81                  LEA ECX,[ECX + EAX*0x4]
004AC96C  3B F2                     CMP ESI,EDX
004AC96E  8B 41 18                  MOV EAX,dword ptr [ECX + 0x18]
004AC971  8B 3F                     MOV EDI,dword ptr [EDI]
004AC973  74 3B                     JZ 0x004ac9b0
004AC975  3B C2                     CMP EAX,EDX
004AC977  75 08                     JNZ 0x004ac981
004AC979  8B C6                     MOV EAX,ESI
004AC97B  5F                        POP EDI
004AC97C  5E                        POP ESI
004AC97D  5D                        POP EBP
004AC97E  C2 04 00                  RET 0x4
LAB_004ac981:
004AC981  F6 41 0F 02               TEST byte ptr [ECX + 0xf],0x2
004AC985  74 1D                     JZ 0x004ac9a4
004AC987  3B F2                     CMP ESI,EDX
004AC989  7D 0C                     JGE 0x004ac997
004AC98B  48                        DEC EAX
004AC98C  79 22                     JNS 0x004ac9b0
004AC98E  8D 47 FF                  LEA EAX,[EDI + -0x1]
004AC991  5F                        POP EDI
004AC992  5E                        POP ESI
004AC993  5D                        POP EBP
004AC994  C2 04 00                  RET 0x4
LAB_004ac997:
004AC997  40                        INC EAX
004AC998  3B C7                     CMP EAX,EDI
004AC99A  75 14                     JNZ 0x004ac9b0
004AC99C  5F                        POP EDI
004AC99D  33 C0                     XOR EAX,EAX
004AC99F  5E                        POP ESI
004AC9A0  5D                        POP EBP
004AC9A1  C2 04 00                  RET 0x4
LAB_004ac9a4:
004AC9A4  3B F2                     CMP ESI,EDX
004AC9A6  7D 07                     JGE 0x004ac9af
004AC9A8  5F                        POP EDI
004AC9A9  40                        INC EAX
004AC9AA  5E                        POP ESI
004AC9AB  5D                        POP EBP
004AC9AC  C2 04 00                  RET 0x4
LAB_004ac9af:
004AC9AF  48                        DEC EAX
LAB_004ac9b0:
004AC9B0  5F                        POP EDI
004AC9B1  5E                        POP ESI
004AC9B2  5D                        POP EBP
004AC9B3  C2 04 00                  RET 0x4
