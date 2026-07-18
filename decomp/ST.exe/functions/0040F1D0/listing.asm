FUN_0040f1d0:
0040F1D0  55                        PUSH EBP
0040F1D1  8B EC                     MOV EBP,ESP
0040F1D3  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
0040F1D6  56                        PUSH ESI
0040F1D7  8B 75 0C                  MOV ESI,dword ptr [EBP + 0xc]
0040F1DA  57                        PUSH EDI
0040F1DB  8B 41 04                  MOV EAX,dword ptr [ECX + 0x4]
0040F1DE  99                        CDQ
0040F1DF  33 C2                     XOR EAX,EDX
0040F1E1  2B C2                     SUB EAX,EDX
0040F1E3  99                        CDQ
0040F1E4  2B C2                     SUB EAX,EDX
0040F1E6  8B F8                     MOV EDI,EAX
0040F1E8  8B 46 04                  MOV EAX,dword ptr [ESI + 0x4]
0040F1EB  99                        CDQ
0040F1EC  33 C2                     XOR EAX,EDX
0040F1EE  2B C2                     SUB EAX,EDX
0040F1F0  99                        CDQ
0040F1F1  2B C2                     SUB EAX,EDX
0040F1F3  8B 11                     MOV EDX,dword ptr [ECX]
0040F1F5  8B 0E                     MOV ECX,dword ptr [ESI]
0040F1F7  D1 FF                     SAR EDI,0x1
0040F1F9  D1 F8                     SAR EAX,0x1
0040F1FB  2B C7                     SUB EAX,EDI
0040F1FD  5F                        POP EDI
0040F1FE  2B C2                     SUB EAX,EDX
0040F200  5E                        POP ESI
0040F201  03 C1                     ADD EAX,ECX
0040F203  5D                        POP EBP
0040F204  C3                        RET
