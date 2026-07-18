FUN_0064a5b0:
0064A5B0  55                        PUSH EBP
0064A5B1  8B EC                     MOV EBP,ESP
0064A5B3  56                        PUSH ESI
0064A5B4  8B 35 F8 18 81 00         MOV ESI,dword ptr [0x008118f8]
0064A5BA  85 F6                     TEST ESI,ESI
0064A5BC  74 4F                     JZ 0x0064a60d
0064A5BE  A0 4A 73 80 00            MOV AL,[0x0080734a]
0064A5C3  84 C0                     TEST AL,AL
0064A5C5  74 46                     JZ 0x0064a60d
0064A5C7  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
0064A5CA  57                        PUSH EDI
0064A5CB  8D 45 08                  LEA EAX,[EBP + 0x8]
0064A5CE  6A 00                     PUSH 0x0
0064A5D0  50                        PUSH EAX
0064A5D1  8B FA                     MOV EDI,EDX
0064A5D3  83 C9 FF                  OR ECX,0xffffffff
0064A5D6  33 C0                     XOR EAX,EAX
0064A5D8  F2 AE                     SCASB.REPNE ES:EDI
0064A5DA  F7 D1                     NOT ECX
0064A5DC  49                        DEC ECX
0064A5DD  51                        PUSH ECX
0064A5DE  52                        PUSH EDX
0064A5DF  56                        PUSH ESI
0064A5E0  8B 35 90 BC 85 00         MOV ESI,dword ptr [0x0085bc90]
0064A5E6  FF D6                     CALL ESI
0064A5E8  8D 4D 08                  LEA ECX,[EBP + 0x8]
0064A5EB  6A 00                     PUSH 0x0
0064A5ED  51                        PUSH ECX
0064A5EE  BF 00 2A 7D 00            MOV EDI,0x7d2a00
0064A5F3  83 C9 FF                  OR ECX,0xffffffff
0064A5F6  33 C0                     XOR EAX,EAX
0064A5F8  F2 AE                     SCASB.REPNE ES:EDI
0064A5FA  8B 15 F8 18 81 00         MOV EDX,dword ptr [0x008118f8]
0064A600  F7 D1                     NOT ECX
0064A602  49                        DEC ECX
0064A603  51                        PUSH ECX
0064A604  68 00 2A 7D 00            PUSH 0x7d2a00
0064A609  52                        PUSH EDX
0064A60A  FF D6                     CALL ESI
0064A60C  5F                        POP EDI
LAB_0064a60d:
0064A60D  5E                        POP ESI
0064A60E  5D                        POP EBP
0064A60F  C3                        RET
