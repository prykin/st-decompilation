FUN_0062d7d0:
0062D7D0  55                        PUSH EBP
0062D7D1  8B EC                     MOV EBP,ESP
0062D7D3  53                        PUSH EBX
0062D7D4  56                        PUSH ESI
0062D7D5  8B 75 0C                  MOV ESI,dword ptr [EBP + 0xc]
0062D7D8  57                        PUSH EDI
0062D7D9  8B 7D 08                  MOV EDI,dword ptr [EBP + 0x8]
0062D7DC  33 DB                     XOR EBX,EBX
0062D7DE  C7 45 0C 08 00 00 00      MOV dword ptr [EBP + 0xc],0x8
LAB_0062d7e5:
0062D7E5  83 3F 00                  CMP dword ptr [EDI],0x0
0062D7E8  74 1B                     JZ 0x0062d805
0062D7EA  89 75 08                  MOV dword ptr [EBP + 0x8],ESI
0062D7ED  83 C6 04                  ADD ESI,0x4
0062D7F0  56                        PUSH ESI
0062D7F1  6A 00                     PUSH 0x0
0062D7F3  E8 68 28 08 00            CALL 0x006b0060
0062D7F8  89 07                     MOV dword ptr [EDI],EAX
0062D7FA  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
0062D7FD  8B 00                     MOV EAX,dword ptr [EAX]
0062D7FF  03 F0                     ADD ESI,EAX
0062D801  8D 5C 03 04               LEA EBX,[EBX + EAX*0x1 + 0x4]
LAB_0062d805:
0062D805  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
0062D808  83 C7 04                  ADD EDI,0x4
0062D80B  48                        DEC EAX
0062D80C  89 45 0C                  MOV dword ptr [EBP + 0xc],EAX
0062D80F  75 D4                     JNZ 0x0062d7e5
0062D811  5F                        POP EDI
0062D812  8B C3                     MOV EAX,EBX
0062D814  5E                        POP ESI
0062D815  5B                        POP EBX
0062D816  5D                        POP EBP
0062D817  C2 08 00                  RET 0x8
