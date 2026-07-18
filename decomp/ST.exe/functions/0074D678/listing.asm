FUN_0074d678:
0074D678  55                        PUSH EBP
0074D679  8B EC                     MOV EBP,ESP
0074D67B  81 EC 00 02 00 00         SUB ESP,0x200
0074D681  56                        PUSH ESI
0074D682  57                        PUSH EDI
0074D683  33 FF                     XOR EDI,EDI
0074D685  8D 85 00 FF FF FF         LEA EAX,[EBP + 0xffffff00]
0074D68B  57                        PUSH EDI
0074D68C  57                        PUSH EDI
0074D68D  68 00 01 00 00            PUSH 0x100
0074D692  50                        PUSH EAX
0074D693  6A FF                     PUSH -0x1
0074D695  FF 75 0C                  PUSH dword ptr [EBP + 0xc]
0074D698  57                        PUSH EDI
0074D699  FF 15 00 BC 85 00         CALL dword ptr [0x0085bc00]
0074D69F  50                        PUSH EAX
0074D6A0  FF 15 28 BC 85 00         CALL dword ptr [0x0085bc28]
0074D6A6  8D 45 10                  LEA EAX,[EBP + 0x10]
0074D6A9  50                        PUSH EAX
0074D6AA  8D 85 00 FF FF FF         LEA EAX,[EBP + 0xffffff00]
0074D6B0  50                        PUSH EAX
0074D6B1  8D 85 00 FE FF FF         LEA EAX,[EBP + 0xfffffe00]
0074D6B7  50                        PUSH EAX
0074D6B8  FF 15 DC BD 85 00         CALL dword ptr [0x0085bddc]
0074D6BE  8B F0                     MOV ESI,EAX
0074D6C0  8D 46 01                  LEA EAX,[ESI + 0x1]
0074D6C3  50                        PUSH EAX
0074D6C4  8D 85 00 FE FF FF         LEA EAX,[EBP + 0xfffffe00]
0074D6CA  FF 75 08                  PUSH dword ptr [EBP + 0x8]
0074D6CD  6A FF                     PUSH -0x1
0074D6CF  50                        PUSH EAX
0074D6D0  57                        PUSH EDI
0074D6D1  57                        PUSH EDI
0074D6D2  FF 15 68 BB 85 00         CALL dword ptr [0x0085bb68]
0074D6D8  8B C6                     MOV EAX,ESI
0074D6DA  5F                        POP EDI
0074D6DB  5E                        POP ESI
0074D6DC  C9                        LEAVE
0074D6DD  C3                        RET
