FUN_0072eb70:
0072EB70  55                        PUSH EBP
0072EB71  8B EC                     MOV EBP,ESP
0072EB73  83 EC 0C                  SUB ESP,0xc
0072EB76  53                        PUSH EBX
0072EB77  56                        PUSH ESI
0072EB78  57                        PUSH EDI
LAB_0072eb79:
0072EB79  83 7D 08 00               CMP dword ptr [EBP + 0x8],0x0
0072EB7D  75 1E                     JNZ 0x0072eb9d
0072EB7F  68 74 FE 79 00            PUSH 0x79fe74
0072EB84  6A 00                     PUSH 0x0
0072EB86  6A 2F                     PUSH 0x2f
0072EB88  68 6C FE 79 00            PUSH 0x79fe6c
0072EB8D  6A 02                     PUSH 0x2
0072EB8F  E8 0C 24 00 00            CALL 0x00730fa0
0072EB94  83 C4 14                  ADD ESP,0x14
0072EB97  83 F8 01                  CMP EAX,0x1
0072EB9A  75 01                     JNZ 0x0072eb9d
0072EB9C  CC                        INT3
LAB_0072eb9d:
0072EB9D  33 C0                     XOR EAX,EAX
0072EB9F  85 C0                     TEST EAX,EAX
0072EBA1  75 D6                     JNZ 0x0072eb79
LAB_0072eba3:
0072EBA3  83 7D 0C 00               CMP dword ptr [EBP + 0xc],0x0
0072EBA7  75 1E                     JNZ 0x0072ebc7
0072EBA9  68 5C FE 79 00            PUSH 0x79fe5c
0072EBAE  6A 00                     PUSH 0x0
0072EBB0  6A 30                     PUSH 0x30
0072EBB2  68 6C FE 79 00            PUSH 0x79fe6c
0072EBB7  6A 02                     PUSH 0x2
0072EBB9  E8 E2 23 00 00            CALL 0x00730fa0
0072EBBE  83 C4 14                  ADD ESP,0x14
0072EBC1  83 F8 01                  CMP EAX,0x1
0072EBC4  75 01                     JNZ 0x0072ebc7
0072EBC6  CC                        INT3
LAB_0072ebc7:
0072EBC7  33 C9                     XOR ECX,ECX
0072EBC9  85 C9                     TEST ECX,ECX
0072EBCB  75 D6                     JNZ 0x0072eba3
0072EBCD  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
0072EBD0  52                        PUSH EDX
0072EBD1  E8 3A 80 00 00            CALL 0x00736c10
0072EBD6  83 C4 04                  ADD ESP,0x4
0072EBD9  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
0072EBDC  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
0072EBDF  50                        PUSH EAX
0072EBE0  E8 BB 86 00 00            CALL 0x007372a0
0072EBE5  83 C4 04                  ADD ESP,0x4
0072EBE8  89 45 F8                  MOV dword ptr [EBP + -0x8],EAX
0072EBEB  8B 4D 0C                  MOV ECX,dword ptr [EBP + 0xc]
0072EBEE  51                        PUSH ECX
0072EBEF  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
0072EBF2  52                        PUSH EDX
0072EBF3  6A 01                     PUSH 0x1
0072EBF5  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
0072EBF8  50                        PUSH EAX
0072EBF9  E8 C2 88 00 00            CALL 0x007374c0
0072EBFE  83 C4 10                  ADD ESP,0x10
0072EC01  89 45 F4                  MOV dword ptr [EBP + -0xc],EAX
0072EC04  8B 4D 0C                  MOV ECX,dword ptr [EBP + 0xc]
0072EC07  51                        PUSH ECX
0072EC08  8B 55 F8                  MOV EDX,dword ptr [EBP + -0x8]
0072EC0B  52                        PUSH EDX
0072EC0C  E8 EF 87 00 00            CALL 0x00737400
0072EC11  83 C4 08                  ADD ESP,0x8
0072EC14  8B 45 F4                  MOV EAX,dword ptr [EBP + -0xc]
0072EC17  2B 45 FC                  SUB EAX,dword ptr [EBP + -0x4]
0072EC1A  F7 D8                     NEG EAX
0072EC1C  1B C0                     SBB EAX,EAX
0072EC1E  5F                        POP EDI
0072EC1F  5E                        POP ESI
0072EC20  5B                        POP EBX
0072EC21  8B E5                     MOV ESP,EBP
0072EC23  5D                        POP EBP
0072EC24  C3                        RET
