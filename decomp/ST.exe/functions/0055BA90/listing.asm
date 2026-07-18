FUN_0055ba90:
0055BA90  55                        PUSH EBP
0055BA91  8B EC                     MOV EBP,ESP
0055BA93  53                        PUSH EBX
0055BA94  56                        PUSH ESI
0055BA95  8B B1 10 01 00 00         MOV ESI,dword ptr [ECX + 0x110]
0055BA9B  57                        PUSH EDI
0055BA9C  33 D2                     XOR EDX,EDX
0055BA9E  8B 7E 0C                  MOV EDI,dword ptr [ESI + 0xc]
0055BAA1  85 FF                     TEST EDI,EDI
0055BAA3  7E 25                     JLE 0x0055baca
0055BAA5  8B 4D 0C                  MOV ECX,dword ptr [EBP + 0xc]
0055BAA8  8A 5D 08                  MOV BL,byte ptr [EBP + 0x8]
0055BAAB  3B D7                     CMP EDX,EDI
LAB_0055baad:
0055BAAD  73 0B                     JNC 0x0055baba
0055BAAF  8B 46 08                  MOV EAX,dword ptr [ESI + 0x8]
0055BAB2  0F AF C2                  IMUL EAX,EDX
0055BAB5  03 46 1C                  ADD EAX,dword ptr [ESI + 0x1c]
0055BAB8  EB 02                     JMP 0x0055babc
LAB_0055baba:
0055BABA  33 C0                     XOR EAX,EAX
LAB_0055babc:
0055BABC  39 48 08                  CMP dword ptr [EAX + 0x8],ECX
0055BABF  75 04                     JNZ 0x0055bac5
0055BAC1  38 18                     CMP byte ptr [EAX],BL
0055BAC3  74 07                     JZ 0x0055bacc
LAB_0055bac5:
0055BAC5  42                        INC EDX
0055BAC6  3B D7                     CMP EDX,EDI
0055BAC8  7C E3                     JL 0x0055baad
LAB_0055baca:
0055BACA  33 C0                     XOR EAX,EAX
LAB_0055bacc:
0055BACC  5F                        POP EDI
0055BACD  5E                        POP ESI
0055BACE  5B                        POP EBX
0055BACF  5D                        POP EBP
0055BAD0  C2 08 00                  RET 0x8
