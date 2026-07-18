FUN_006d0390:
006D0390  55                        PUSH EBP
006D0391  8B EC                     MOV EBP,ESP
006D0393  8B 4D 18                  MOV ECX,dword ptr [EBP + 0x18]
006D0396  56                        PUSH ESI
006D0397  8B 75 14                  MOV ESI,dword ptr [EBP + 0x14]
006D039A  85 C9                     TEST ECX,ECX
006D039C  75 08                     JNZ 0x006d03a6
006D039E  56                        PUSH ESI
006D039F  E8 FC 4B FE FF            CALL 0x006b4fa0
006D03A4  8B C8                     MOV ECX,EAX
LAB_006d03a6:
006D03A6  8B 46 08                  MOV EAX,dword ptr [ESI + 0x8]
006D03A9  6A 00                     PUSH 0x0
006D03AB  99                        CDQ
006D03AC  33 C2                     XOR EAX,EDX
006D03AE  56                        PUSH ESI
006D03AF  2B C2                     SUB EAX,EDX
006D03B1  51                        PUSH ECX
006D03B2  8B 4D 10                  MOV ECX,dword ptr [EBP + 0x10]
006D03B5  8B 55 0C                  MOV EDX,dword ptr [EBP + 0xc]
006D03B8  50                        PUSH EAX
006D03B9  6A 00                     PUSH 0x0
006D03BB  6A 00                     PUSH 0x0
006D03BD  6A 00                     PUSH 0x0
006D03BF  50                        PUSH EAX
006D03C0  8B 46 04                  MOV EAX,dword ptr [ESI + 0x4]
006D03C3  50                        PUSH EAX
006D03C4  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
006D03C7  51                        PUSH ECX
006D03C8  52                        PUSH EDX
006D03C9  50                        PUSH EAX
006D03CA  FF 15 BC BA 85 00         CALL dword ptr [0x0085babc]
006D03D0  5E                        POP ESI
006D03D1  5D                        POP EBP
006D03D2  C2 14 00                  RET 0x14
