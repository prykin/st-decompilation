FUN_006517c0:
006517C0  55                        PUSH EBP
006517C1  8B EC                     MOV EBP,ESP
006517C3  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
006517C6  33 C9                     XOR ECX,ECX
006517C8  B2 08                     MOV DL,0x8
LAB_006517ca:
006517CA  38 94 08 D0 00 00 00      CMP byte ptr [EAX + ECX*0x1 + 0xd0],DL
006517D1  75 76                     JNZ 0x00651849
006517D3  41                        INC ECX
006517D4  83 F9 04                  CMP ECX,0x4
006517D7  7C F1                     JL 0x006517ca
006517D9  66 8B 08                  MOV CX,word ptr [EAX]
006517DC  66 83 F9 05               CMP CX,0x5
006517E0  7D 09                     JGE 0x006517eb
006517E2  C7 40 18 FF FF FF 3F      MOV dword ptr [EAX + 0x18],0x3fffffff
006517E9  EB 08                     JMP 0x006517f3
LAB_006517eb:
006517EB  38 90 D4 00 00 00         CMP byte ptr [EAX + 0xd4],DL
006517F1  75 56                     JNZ 0x00651849
LAB_006517f3:
006517F3  66 83 F9 06               CMP CX,0x6
006517F7  7D 09                     JGE 0x00651802
006517F9  C7 40 1C 01 00 00 00      MOV dword ptr [EAX + 0x1c],0x1
00651800  EB 08                     JMP 0x0065180a
LAB_00651802:
00651802  38 90 D5 00 00 00         CMP byte ptr [EAX + 0xd5],DL
00651808  75 3F                     JNZ 0x00651849
LAB_0065180a:
0065180A  66 83 F9 07               CMP CX,0x7
0065180E  7D 09                     JGE 0x00651819
00651810  C7 40 20 00 00 00 00      MOV dword ptr [EAX + 0x20],0x0
00651817  EB 08                     JMP 0x00651821
LAB_00651819:
00651819  38 90 D6 00 00 00         CMP byte ptr [EAX + 0xd6],DL
0065181F  75 28                     JNZ 0x00651849
LAB_00651821:
00651821  8B 48 10                  MOV ECX,dword ptr [EAX + 0x10]
00651824  85 C9                     TEST ECX,ECX
00651826  7C 21                     JL 0x00651849
00651828  8B 48 14                  MOV ECX,dword ptr [EAX + 0x14]
0065182B  85 C9                     TEST ECX,ECX
0065182D  7C 1A                     JL 0x00651849
0065182F  83 F9 02                  CMP ECX,0x2
00651832  7F 15                     JG 0x00651849
00651834  8B 48 1C                  MOV ECX,dword ptr [EAX + 0x1c]
00651837  85 C9                     TEST ECX,ECX
00651839  7C 0E                     JL 0x00651849
0065183B  8B 50 20                  MOV EDX,dword ptr [EAX + 0x20]
0065183E  33 C9                     XOR ECX,ECX
00651840  85 D2                     TEST EDX,EDX
00651842  0F 9D C1                  SETGE CL
00651845  8B C1                     MOV EAX,ECX
00651847  5D                        POP EBP
00651848  C3                        RET
LAB_00651849:
00651849  33 C0                     XOR EAX,EAX
0065184B  5D                        POP EBP
0065184C  C3                        RET
