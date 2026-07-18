FUN_0040f220:
0040F220  55                        PUSH EBP
0040F221  8B EC                     MOV EBP,ESP
0040F223  8B 4D 0C                  MOV ECX,dword ptr [EBP + 0xc]
0040F226  56                        PUSH ESI
0040F227  8B 41 10                  MOV EAX,dword ptr [ECX + 0x10]
0040F22A  8B 49 0C                  MOV ECX,dword ptr [ECX + 0xc]
0040F22D  99                        CDQ
0040F22E  33 C2                     XOR EAX,EDX
0040F230  2B C2                     SUB EAX,EDX
0040F232  99                        CDQ
0040F233  2B C2                     SUB EAX,EDX
0040F235  8B F0                     MOV ESI,EAX
0040F237  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
0040F23A  D1 FE                     SAR ESI,0x1
0040F23C  8B 50 0C                  MOV EDX,dword ptr [EAX + 0xc]
0040F23F  8B 40 10                  MOV EAX,dword ptr [EAX + 0x10]
0040F242  2B CA                     SUB ECX,EDX
0040F244  99                        CDQ
0040F245  33 C2                     XOR EAX,EDX
0040F247  03 F1                     ADD ESI,ECX
0040F249  2B C2                     SUB EAX,EDX
0040F24B  99                        CDQ
0040F24C  2B C2                     SUB EAX,EDX
0040F24E  D1 F8                     SAR EAX,0x1
0040F250  2B F0                     SUB ESI,EAX
0040F252  8B C6                     MOV EAX,ESI
0040F254  5E                        POP ESI
0040F255  5D                        POP EBP
0040F256  C3                        RET
