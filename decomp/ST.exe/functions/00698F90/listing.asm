FUN_00698f90:
00698F90  55                        PUSH EBP
00698F91  8B EC                     MOV EBP,ESP
00698F93  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
00698F96  8B 4D 14                  MOV ECX,dword ptr [EBP + 0x14]
00698F99  0F AF 45 0C               IMUL EAX,dword ptr [EBP + 0xc]
00698F9D  56                        PUSH ESI
00698F9E  57                        PUSH EDI
00698F9F  33 FF                     XOR EDI,EDI
00698FA1  2B CF                     SUB ECX,EDI
00698FA3  0F 84 FB 00 00 00         JZ 0x006990a4
00698FA9  49                        DEC ECX
00698FAA  0F 84 88 00 00 00         JZ 0x00699038
00698FB0  49                        DEC ECX
00698FB1  74 13                     JZ 0x00698fc6
00698FB3  8B 55 1C                  MOV EDX,dword ptr [EBP + 0x1c]
00698FB6  BE 22 01 00 00            MOV ESI,0x122
00698FBB  C7 02 02 00 00 00         MOV dword ptr [EDX],0x2
00698FC1  E9 2B 01 00 00            JMP 0x006990f1
LAB_00698fc6:
00698FC6  3D C4 09 00 00            CMP EAX,0x9c4
00698FCB  7D 13                     JGE 0x00698fe0
00698FCD  8B 55 1C                  MOV EDX,dword ptr [EBP + 0x1c]
00698FD0  BE 82 00 00 00            MOV ESI,0x82
00698FD5  C7 02 02 00 00 00         MOV dword ptr [EDX],0x2
00698FDB  E9 0D 01 00 00            JMP 0x006990ed
LAB_00698fe0:
00698FE0  3D 21 16 00 00            CMP EAX,0x1621
00698FE5  7D 13                     JGE 0x00698ffa
00698FE7  8B 55 1C                  MOV EDX,dword ptr [EBP + 0x1c]
00698FEA  BE 96 00 00 00            MOV ESI,0x96
00698FEF  C7 02 02 00 00 00         MOV dword ptr [EDX],0x2
00698FF5  E9 F3 00 00 00            JMP 0x006990ed
LAB_00698ffa:
00698FFA  3D A4 1F 00 00            CMP EAX,0x1fa4
00698FFF  7D 13                     JGE 0x00699014
00699001  8B 55 1C                  MOV EDX,dword ptr [EBP + 0x1c]
00699004  BE C8 00 00 00            MOV ESI,0xc8
00699009  C7 02 02 00 00 00         MOV dword ptr [EDX],0x2
0069900F  E9 D9 00 00 00            JMP 0x006990ed
LAB_00699014:
00699014  33 C9                     XOR ECX,ECX
00699016  8B 55 1C                  MOV EDX,dword ptr [EBP + 0x1c]
00699019  3D 44 2F 00 00            CMP EAX,0x2f44
0069901E  0F 9D C1                  SETGE CL
00699021  49                        DEC ECX
00699022  C7 02 02 00 00 00         MOV dword ptr [EDX],0x2
00699028  83 E1 D8                  AND ECX,0xffffffd8
0069902B  81 C1 22 01 00 00         ADD ECX,0x122
00699031  8B F1                     MOV ESI,ECX
00699033  E9 B5 00 00 00            JMP 0x006990ed
LAB_00699038:
00699038  3D C4 09 00 00            CMP EAX,0x9c4
0069903D  7D 13                     JGE 0x00699052
0069903F  8B 55 1C                  MOV EDX,dword ptr [EBP + 0x1c]
00699042  BE AA 00 00 00            MOV ESI,0xaa
00699047  C7 02 02 00 00 00         MOV dword ptr [EDX],0x2
0069904D  E9 9B 00 00 00            JMP 0x006990ed
LAB_00699052:
00699052  3D 21 16 00 00            CMP EAX,0x1621
00699057  7D 13                     JGE 0x0069906c
00699059  8B 55 1C                  MOV EDX,dword ptr [EBP + 0x1c]
0069905C  BE C8 00 00 00            MOV ESI,0xc8
00699061  C7 02 02 00 00 00         MOV dword ptr [EDX],0x2
00699067  E9 81 00 00 00            JMP 0x006990ed
LAB_0069906c:
0069906C  3D A4 1F 00 00            CMP EAX,0x1fa4
00699071  7D 10                     JGE 0x00699083
00699073  8B 55 1C                  MOV EDX,dword ptr [EBP + 0x1c]
00699076  BE 0E 01 00 00            MOV ESI,0x10e
0069907B  C7 02 02 00 00 00         MOV dword ptr [EDX],0x2
00699081  EB 6A                     JMP 0x006990ed
LAB_00699083:
00699083  33 D2                     XOR EDX,EDX
00699085  3D 44 2F 00 00            CMP EAX,0x2f44
0069908A  0F 9D C2                  SETGE DL
0069908D  4A                        DEC EDX
0069908E  83 E2 EC                  AND EDX,0xffffffec
00699091  81 C2 40 01 00 00         ADD EDX,0x140
00699097  8B F2                     MOV ESI,EDX
00699099  8B 55 1C                  MOV EDX,dword ptr [EBP + 0x1c]
0069909C  C7 02 02 00 00 00         MOV dword ptr [EDX],0x2
006990A2  EB 49                     JMP 0x006990ed
LAB_006990a4:
006990A4  3D C4 09 00 00            CMP EAX,0x9c4
006990A9  7D 07                     JGE 0x006990b2
006990AB  BE B4 00 00 00            MOV ESI,0xb4
006990B0  EB 32                     JMP 0x006990e4
LAB_006990b2:
006990B2  3D 21 16 00 00            CMP EAX,0x1621
006990B7  7D 07                     JGE 0x006990c0
006990B9  BE D2 00 00 00            MOV ESI,0xd2
006990BE  EB 24                     JMP 0x006990e4
LAB_006990c0:
006990C0  3D A4 1F 00 00            CMP EAX,0x1fa4
006990C5  7D 07                     JGE 0x006990ce
006990C7  BE 18 01 00 00            MOV ESI,0x118
006990CC  EB 16                     JMP 0x006990e4
LAB_006990ce:
006990CE  33 C9                     XOR ECX,ECX
006990D0  3D 44 2F 00 00            CMP EAX,0x2f44
006990D5  0F 9D C1                  SETGE CL
006990D8  49                        DEC ECX
006990D9  83 E1 EC                  AND ECX,0xffffffec
006990DC  81 C1 5E 01 00 00         ADD ECX,0x15e
006990E2  8B F1                     MOV ESI,ECX
LAB_006990e4:
006990E4  8B 55 1C                  MOV EDX,dword ptr [EBP + 0x1c]
006990E7  C7 02 01 00 00 00         MOV dword ptr [EDX],0x1
LAB_006990ed:
006990ED  85 F6                     TEST ESI,ESI
006990EF  7E 4A                     JLE 0x0069913b
LAB_006990f1:
006990F1  8B 0A                     MOV ECX,dword ptr [EDX]
006990F3  8B 7D 10                  MOV EDI,dword ptr [EBP + 0x10]
006990F6  83 C1 02                  ADD ECX,0x2
006990F9  53                        PUSH EBX
006990FA  0F AF CF                  IMUL ECX,EDI
006990FD  8B 5D 18                  MOV EBX,dword ptr [EBP + 0x18]
00699100  89 0B                     MOV dword ptr [EBX],ECX
00699102  8B 12                     MOV EDX,dword ptr [EDX]
00699104  42                        INC EDX
00699105  0F AF D7                  IMUL EDX,EDI
00699108  89 55 1C                  MOV dword ptr [EBP + 0x1c],EDX
0069910B  99                        CDQ
0069910C  F7 FE                     IDIV ESI
0069910E  8B 55 1C                  MOV EDX,dword ptr [EBP + 0x1c]
00699111  2B C2                     SUB EAX,EDX
00699113  2B C1                     SUB EAX,ECX
00699115  83 F8 03                  CMP EAX,0x3
00699118  7E 10                     JLE 0x0069912a
0069911A  03 C8                     ADD ECX,EAX
0069911C  B8 01 00 00 00            MOV EAX,0x1
00699121  89 0B                     MOV dword ptr [EBX],ECX
00699123  5B                        POP EBX
00699124  5F                        POP EDI
00699125  5E                        POP ESI
00699126  5D                        POP EBP
00699127  C2 18 00                  RET 0x18
LAB_0069912a:
0069912A  83 C1 03                  ADD ECX,0x3
0069912D  B8 01 00 00 00            MOV EAX,0x1
00699132  89 0B                     MOV dword ptr [EBX],ECX
00699134  5B                        POP EBX
00699135  5F                        POP EDI
00699136  5E                        POP ESI
00699137  5D                        POP EBP
00699138  C2 18 00                  RET 0x18
LAB_0069913b:
0069913B  8B C7                     MOV EAX,EDI
0069913D  5F                        POP EDI
0069913E  5E                        POP ESI
0069913F  5D                        POP EBP
00699140  C2 18 00                  RET 0x18
