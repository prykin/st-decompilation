FUN_0075d680:
0075D680  55                        PUSH EBP
0075D681  8B EC                     MOV EBP,ESP
0075D683  8B 45 14                  MOV EAX,dword ptr [EBP + 0x14]
0075D686  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
0075D689  57                        PUSH EDI
0075D68A  C7 45 14 00 00 00 00      MOV dword ptr [EBP + 0x14],0x0
0075D691  8B 38                     MOV EDI,dword ptr [EAX]
0075D693  8B 81 26 01 00 00         MOV EAX,dword ptr [ECX + 0x126]
0075D699  85 C0                     TEST EAX,EAX
0075D69B  0F 8E 95 00 00 00         JLE 0x0075d736
0075D6A1  53                        PUSH EBX
0075D6A2  56                        PUSH ESI
0075D6A3  8B 75 10                  MOV ESI,dword ptr [EBP + 0x10]
0075D6A6  2B F7                     SUB ESI,EDI
0075D6A8  89 75 10                  MOV dword ptr [EBP + 0x10],ESI
LAB_0075d6ab:
0075D6AB  8B 0C 3E                  MOV ECX,dword ptr [ESI + EDI*0x1]
0075D6AE  8B 07                     MOV EAX,dword ptr [EDI]
0075D6B0  33 D2                     XOR EDX,EDX
0075D6B2  33 DB                     XOR EBX,EBX
0075D6B4  8A 11                     MOV DL,byte ptr [ECX]
0075D6B6  41                        INC ECX
0075D6B7  88 10                     MOV byte ptr [EAX],DL
0075D6B9  40                        INC EAX
0075D6BA  8A 19                     MOV BL,byte ptr [ECX]
0075D6BC  8D 14 52                  LEA EDX,[EDX + EDX*0x2]
0075D6BF  8D 54 1A 02               LEA EDX,[EDX + EBX*0x1 + 0x2]
0075D6C3  C1 FA 02                  SAR EDX,0x2
0075D6C6  88 10                     MOV byte ptr [EAX],DL
0075D6C8  8B 55 0C                  MOV EDX,dword ptr [EBP + 0xc]
0075D6CB  40                        INC EAX
0075D6CC  8B 52 28                  MOV EDX,dword ptr [EDX + 0x28]
0075D6CF  83 EA 02                  SUB EDX,0x2
0075D6D2  74 2D                     JZ 0x0075d701
0075D6D4  8B DA                     MOV EBX,EDX
LAB_0075d6d6:
0075D6D6  33 D2                     XOR EDX,EDX
0075D6D8  8A 11                     MOV DL,byte ptr [ECX]
0075D6DA  41                        INC ECX
0075D6DB  8D 34 52                  LEA ESI,[EDX + EDX*0x2]
0075D6DE  33 D2                     XOR EDX,EDX
0075D6E0  8A 51 FE                  MOV DL,byte ptr [ECX + -0x2]
0075D6E3  8D 54 32 01               LEA EDX,[EDX + ESI*0x1 + 0x1]
0075D6E7  C1 FA 02                  SAR EDX,0x2
0075D6EA  88 10                     MOV byte ptr [EAX],DL
0075D6EC  33 D2                     XOR EDX,EDX
0075D6EE  8A 11                     MOV DL,byte ptr [ECX]
0075D6F0  40                        INC EAX
0075D6F1  8D 54 32 02               LEA EDX,[EDX + ESI*0x1 + 0x2]
0075D6F5  C1 FA 02                  SAR EDX,0x2
0075D6F8  88 10                     MOV byte ptr [EAX],DL
0075D6FA  40                        INC EAX
0075D6FB  4B                        DEC EBX
0075D6FC  75 D8                     JNZ 0x0075d6d6
0075D6FE  8B 75 10                  MOV ESI,dword ptr [EBP + 0x10]
LAB_0075d701:
0075D701  33 D2                     XOR EDX,EDX
0075D703  33 DB                     XOR EBX,EBX
0075D705  8A 11                     MOV DL,byte ptr [ECX]
0075D707  8A 59 FF                  MOV BL,byte ptr [ECX + -0x1]
0075D70A  83 C7 04                  ADD EDI,0x4
0075D70D  8D 0C 52                  LEA ECX,[EDX + EDX*0x2]
0075D710  8D 4C 0B 01               LEA ECX,[EBX + ECX*0x1 + 0x1]
0075D714  C1 F9 02                  SAR ECX,0x2
0075D717  88 08                     MOV byte ptr [EAX],CL
0075D719  88 50 01                  MOV byte ptr [EAX + 0x1],DL
0075D71C  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
0075D71F  8B 45 14                  MOV EAX,dword ptr [EBP + 0x14]
0075D722  40                        INC EAX
0075D723  8B 8A 26 01 00 00         MOV ECX,dword ptr [EDX + 0x126]
0075D729  89 45 14                  MOV dword ptr [EBP + 0x14],EAX
0075D72C  3B C1                     CMP EAX,ECX
0075D72E  0F 8C 77 FF FF FF         JL 0x0075d6ab
0075D734  5E                        POP ESI
0075D735  5B                        POP EBX
LAB_0075d736:
0075D736  5F                        POP EDI
0075D737  5D                        POP EBP
0075D738  C2 10 00                  RET 0x10
