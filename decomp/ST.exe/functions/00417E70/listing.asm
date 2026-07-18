FUN_00417e70:
00417E70  55                        PUSH EBP
00417E71  8B EC                     MOV EBP,ESP
00417E73  56                        PUSH ESI
00417E74  57                        PUSH EDI
00417E75  66 8B 7D 08               MOV DI,word ptr [EBP + 0x8]
00417E79  B8 68 01 00 00            MOV EAX,0x168
00417E7E  0F BF F7                  MOVSX ESI,DI
00417E81  99                        CDQ
00417E82  F7 FE                     IDIV ESI
00417E84  0F BF D0                  MOVSX EDX,AX
00417E87  0F AF D6                  IMUL EDX,ESI
00417E8A  81 FA 68 01 00 00         CMP EDX,0x168
00417E90  74 09                     JZ 0x00417e9b
00417E92  5F                        POP EDI
00417E93  83 C8 FF                  OR EAX,0xffffffff
00417E96  5E                        POP ESI
00417E97  5D                        POP EBP
00417E98  C2 04 00                  RET 0x4
LAB_00417e9b:
00417E9B  66 89 B9 8C 00 00 00      MOV word ptr [ECX + 0x8c],DI
00417EA2  66 89 81 86 00 00 00      MOV word ptr [ECX + 0x86],AX
00417EA9  5F                        POP EDI
00417EAA  33 C0                     XOR EAX,EAX
00417EAC  5E                        POP ESI
00417EAD  5D                        POP EBP
00417EAE  C2 04 00                  RET 0x4
