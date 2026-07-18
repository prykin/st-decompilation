FUN_00650090:
00650090  55                        PUSH EBP
00650091  8B EC                     MOV EBP,ESP
00650093  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
00650096  53                        PUSH EBX
00650097  33 D2                     XOR EDX,EDX
00650099  33 C9                     XOR ECX,ECX
0065009B  BB 08 00 00 00            MOV EBX,0x8
LAB_006500a0:
006500A0  38 9C 08 D0 00 00 00      CMP byte ptr [EAX + ECX*0x1 + 0xd0],BL
006500A7  0F 85 AE 00 00 00         JNZ 0x0065015b
006500AD  41                        INC ECX
006500AE  83 F9 02                  CMP ECX,0x2
006500B1  7C ED                     JL 0x006500a0
006500B3  66 8B 08                  MOV CX,word ptr [EAX]
006500B6  66 83 F9 03               CMP CX,0x3
006500BA  7D 0E                     JGE 0x006500ca
006500BC  89 50 10                  MOV dword ptr [EAX + 0x10],EDX
LAB_006500bf:
006500BF  66 83 F9 04               CMP CX,0x4
006500C3  7D 12                     JGE 0x006500d7
006500C5  89 50 14                  MOV dword ptr [EAX + 0x14],EDX
006500C8  EB 1A                     JMP 0x006500e4
LAB_006500ca:
006500CA  38 98 D2 00 00 00         CMP byte ptr [EAX + 0xd2],BL
006500D0  74 ED                     JZ 0x006500bf
006500D2  33 C0                     XOR EAX,EAX
006500D4  5B                        POP EBX
006500D5  5D                        POP EBP
006500D6  C3                        RET
LAB_006500d7:
006500D7  38 98 D3 00 00 00         CMP byte ptr [EAX + 0xd3],BL
006500DD  74 05                     JZ 0x006500e4
006500DF  33 C0                     XOR EAX,EAX
006500E1  5B                        POP EBX
006500E2  5D                        POP EBP
006500E3  C3                        RET
LAB_006500e4:
006500E4  66 83 F9 05               CMP CX,0x5
006500E8  7D 0E                     JGE 0x006500f8
006500EA  89 50 18                  MOV dword ptr [EAX + 0x18],EDX
LAB_006500ed:
006500ED  66 83 F9 06               CMP CX,0x6
006500F1  7D 12                     JGE 0x00650105
006500F3  89 50 1C                  MOV dword ptr [EAX + 0x1c],EDX
006500F6  EB 1A                     JMP 0x00650112
LAB_006500f8:
006500F8  38 98 D4 00 00 00         CMP byte ptr [EAX + 0xd4],BL
006500FE  74 ED                     JZ 0x006500ed
00650100  33 C0                     XOR EAX,EAX
00650102  5B                        POP EBX
00650103  5D                        POP EBP
00650104  C3                        RET
LAB_00650105:
00650105  38 98 D5 00 00 00         CMP byte ptr [EAX + 0xd5],BL
0065010B  74 05                     JZ 0x00650112
0065010D  33 C0                     XOR EAX,EAX
0065010F  5B                        POP EBX
00650110  5D                        POP EBP
00650111  C3                        RET
LAB_00650112:
00650112  83 CA FF                  OR EDX,0xffffffff
00650115  66 83 F9 07               CMP CX,0x7
00650119  7D 0D                     JGE 0x00650128
0065011B  89 50 20                  MOV dword ptr [EAX + 0x20],EDX
LAB_0065011e:
0065011E  66 3B CB                  CMP CX,BX
00650121  7D 12                     JGE 0x00650135
00650123  89 50 24                  MOV dword ptr [EAX + 0x24],EDX
00650126  EB 1A                     JMP 0x00650142
LAB_00650128:
00650128  38 98 D6 00 00 00         CMP byte ptr [EAX + 0xd6],BL
0065012E  74 EE                     JZ 0x0065011e
00650130  33 C0                     XOR EAX,EAX
00650132  5B                        POP EBX
00650133  5D                        POP EBP
00650134  C3                        RET
LAB_00650135:
00650135  38 98 D7 00 00 00         CMP byte ptr [EAX + 0xd7],BL
0065013B  74 05                     JZ 0x00650142
0065013D  33 C0                     XOR EAX,EAX
0065013F  5B                        POP EBX
00650140  5D                        POP EBP
00650141  C3                        RET
LAB_00650142:
00650142  66 83 F9 09               CMP CX,0x9
00650146  7D 0B                     JGE 0x00650153
00650148  89 50 28                  MOV dword ptr [EAX + 0x28],EDX
LAB_0065014b:
0065014B  B8 01 00 00 00            MOV EAX,0x1
00650150  5B                        POP EBX
00650151  5D                        POP EBP
00650152  C3                        RET
LAB_00650153:
00650153  38 98 D8 00 00 00         CMP byte ptr [EAX + 0xd8],BL
00650159  74 F0                     JZ 0x0065014b
LAB_0065015b:
0065015B  33 C0                     XOR EAX,EAX
0065015D  5B                        POP EBX
0065015E  5D                        POP EBP
0065015F  C3                        RET
