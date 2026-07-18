FUN_006b75c0:
006B75C0  55                        PUSH EBP
006B75C1  8B EC                     MOV EBP,ESP
006B75C3  53                        PUSH EBX
006B75C4  56                        PUSH ESI
006B75C5  8B 75 10                  MOV ESI,dword ptr [EBP + 0x10]
006B75C8  57                        PUSH EDI
006B75C9  8B 7D 08                  MOV EDI,dword ptr [EBP + 0x8]
006B75CC  6A 00                     PUSH 0x0
006B75CE  8D 45 10                  LEA EAX,[EBP + 0x10]
006B75D1  6A FF                     PUSH -0x1
006B75D3  50                        PUSH EAX
006B75D4  56                        PUSH ESI
006B75D5  57                        PUSH EDI
006B75D6  E8 35 FF FF FF            CALL 0x006b7510
006B75DB  85 C0                     TEST EAX,EAX
006B75DD  75 5D                     JNZ 0x006b763c
006B75DF  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
006B75E2  85 C0                     TEST EAX,EAX
006B75E4  7E 54                     JLE 0x006b763a
006B75E6  8B 45 10                  MOV EAX,dword ptr [EBP + 0x10]
006B75E9  85 C0                     TEST EAX,EAX
006B75EB  7F 4D                     JG 0x006b763a
006B75ED  8B 1D DC BE 85 00         MOV EBX,dword ptr [0x0085bedc]
006B75F3  FF D3                     CALL EBX
006B75F5  6A 00                     PUSH 0x0
006B75F7  8D 4D 10                  LEA ECX,[EBP + 0x10]
006B75FA  6A FF                     PUSH -0x1
006B75FC  51                        PUSH ECX
006B75FD  56                        PUSH ESI
006B75FE  57                        PUSH EDI
006B75FF  89 45 08                  MOV dword ptr [EBP + 0x8],EAX
006B7602  E8 09 FF FF FF            CALL 0x006b7510
006B7607  85 C0                     TEST EAX,EAX
006B7609  75 31                     JNZ 0x006b763c
LAB_006b760b:
006B760B  8B 45 10                  MOV EAX,dword ptr [EBP + 0x10]
006B760E  85 C0                     TEST EAX,EAX
006B7610  7F 28                     JG 0x006b763a
006B7612  FF D3                     CALL EBX
006B7614  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
006B7617  8B 4D 0C                  MOV ECX,dword ptr [EBP + 0xc]
006B761A  2B C2                     SUB EAX,EDX
006B761C  3B C1                     CMP EAX,ECX
006B761E  7D 1A                     JGE 0x006b763a
006B7620  6A 00                     PUSH 0x0
006B7622  8D 55 10                  LEA EDX,[EBP + 0x10]
006B7625  6A FF                     PUSH -0x1
006B7627  52                        PUSH EDX
006B7628  56                        PUSH ESI
006B7629  57                        PUSH EDI
006B762A  E8 E1 FE FF FF            CALL 0x006b7510
006B762F  85 C0                     TEST EAX,EAX
006B7631  74 D8                     JZ 0x006b760b
006B7633  5F                        POP EDI
006B7634  5E                        POP ESI
006B7635  5B                        POP EBX
006B7636  5D                        POP EBP
006B7637  C2 0C 00                  RET 0xc
LAB_006b763a:
006B763A  33 C0                     XOR EAX,EAX
LAB_006b763c:
006B763C  5F                        POP EDI
006B763D  5E                        POP ESI
006B763E  5B                        POP EBX
006B763F  5D                        POP EBP
006B7640  C2 0C 00                  RET 0xc
