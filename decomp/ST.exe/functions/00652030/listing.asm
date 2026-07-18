FUN_00652030:
00652030  55                        PUSH EBP
00652031  8B EC                     MOV EBP,ESP
00652033  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
00652036  33 C9                     XOR ECX,ECX
00652038  B2 08                     MOV DL,0x8
LAB_0065203a:
0065203A  38 94 08 D0 00 00 00      CMP byte ptr [EAX + ECX*0x1 + 0xd0],DL
00652041  75 2D                     JNZ 0x00652070
00652043  41                        INC ECX
00652044  83 F9 09                  CMP ECX,0x9
00652047  7C F1                     JL 0x0065203a
00652049  66 8B 08                  MOV CX,word ptr [EAX]
0065204C  66 83 F9 0A               CMP CX,0xa
00652050  7D 16                     JGE 0x00652068
00652052  C7 40 2C 00 00 00 00      MOV dword ptr [EAX + 0x2c],0x0
LAB_00652059:
00652059  66 83 F9 0B               CMP CX,0xb
0065205D  7D 15                     JGE 0x00652074
0065205F  C7 40 30 00 00 00 00      MOV dword ptr [EAX + 0x30],0x0
00652066  EB 18                     JMP 0x00652080
LAB_00652068:
00652068  38 90 D9 00 00 00         CMP byte ptr [EAX + 0xd9],DL
0065206E  74 E9                     JZ 0x00652059
LAB_00652070:
00652070  33 C0                     XOR EAX,EAX
00652072  5D                        POP EBP
00652073  C3                        RET
LAB_00652074:
00652074  38 90 DA 00 00 00         CMP byte ptr [EAX + 0xda],DL
0065207A  74 04                     JZ 0x00652080
0065207C  33 C0                     XOR EAX,EAX
0065207E  5D                        POP EBP
0065207F  C3                        RET
LAB_00652080:
00652080  66 83 F9 0C               CMP CX,0xc
00652084  7D 12                     JGE 0x00652098
00652086  C7 40 34 00 00 00 00      MOV dword ptr [EAX + 0x34],0x0
LAB_0065208d:
0065208D  8B 48 10                  MOV ECX,dword ptr [EAX + 0x10]
00652090  85 C9                     TEST ECX,ECX
00652092  7D 10                     JGE 0x006520a4
00652094  33 C0                     XOR EAX,EAX
00652096  5D                        POP EBP
00652097  C3                        RET
LAB_00652098:
00652098  38 90 DB 00 00 00         CMP byte ptr [EAX + 0xdb],DL
0065209E  74 ED                     JZ 0x0065208d
006520A0  33 C0                     XOR EAX,EAX
006520A2  5D                        POP EBP
006520A3  C3                        RET
LAB_006520a4:
006520A4  8B 48 20                  MOV ECX,dword ptr [EAX + 0x20]
006520A7  85 C9                     TEST ECX,ECX
006520A9  7D 04                     JGE 0x006520af
006520AB  33 C0                     XOR EAX,EAX
006520AD  5D                        POP EBP
006520AE  C3                        RET
LAB_006520af:
006520AF  8B 48 24                  MOV ECX,dword ptr [EAX + 0x24]
006520B2  85 C9                     TEST ECX,ECX
006520B4  7D 04                     JGE 0x006520ba
006520B6  33 C0                     XOR EAX,EAX
006520B8  5D                        POP EBP
006520B9  C3                        RET
LAB_006520ba:
006520BA  8B 50 28                  MOV EDX,dword ptr [EAX + 0x28]
006520BD  33 C9                     XOR ECX,ECX
006520BF  85 D2                     TEST EDX,EDX
006520C1  0F 9D C1                  SETGE CL
006520C4  8B C1                     MOV EAX,ECX
006520C6  5D                        POP EBP
006520C7  C3                        RET
