FUN_0075e0c0:
0075E0C0  55                        PUSH EBP
0075E0C1  8B EC                     MOV EBP,ESP
0075E0C3  56                        PUSH ESI
0075E0C4  8B 75 1C                  MOV ESI,dword ptr [EBP + 0x1c]
0075E0C7  57                        PUSH EDI
0075E0C8  8B 7D 18                  MOV EDI,dword ptr [EBP + 0x18]
0075E0CB  8B 16                     MOV EDX,dword ptr [ESI]
0075E0CD  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
0075E0D0  8D 14 97                  LEA EDX,[EDI + EDX*0x4]
0075E0D3  8B 7D 10                  MOV EDI,dword ptr [EBP + 0x10]
0075E0D6  8B 88 B2 01 00 00         MOV ECX,dword ptr [EAX + 0x1b2]
0075E0DC  52                        PUSH EDX
0075E0DD  8B 17                     MOV EDX,dword ptr [EDI]
0075E0DF  52                        PUSH EDX
0075E0E0  8B 55 0C                  MOV EDX,dword ptr [EBP + 0xc]
0075E0E3  52                        PUSH EDX
0075E0E4  50                        PUSH EAX
0075E0E5  FF 51 0C                  CALL dword ptr [ECX + 0xc]
0075E0E8  8B 0E                     MOV ECX,dword ptr [ESI]
0075E0EA  41                        INC ECX
0075E0EB  89 0E                     MOV dword ptr [ESI],ECX
0075E0ED  8B 07                     MOV EAX,dword ptr [EDI]
0075E0EF  40                        INC EAX
0075E0F0  89 07                     MOV dword ptr [EDI],EAX
0075E0F2  5F                        POP EDI
0075E0F3  5E                        POP ESI
0075E0F4  5D                        POP EBP
0075E0F5  C2 1C 00                  RET 0x1c
