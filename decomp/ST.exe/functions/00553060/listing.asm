FUN_00553060:
00553060  55                        PUSH EBP
00553061  8B EC                     MOV EBP,ESP
00553063  8B 15 4C 2A 80 00         MOV EDX,dword ptr [0x00802a4c]
00553069  53                        PUSH EBX
0055306A  56                        PUSH ESI
0055306B  57                        PUSH EDI
0055306C  85 D2                     TEST EDX,EDX
0055306E  74 32                     JZ 0x005530a2
00553070  8B 72 0C                  MOV ESI,dword ptr [EDX + 0xc]
00553073  33 C9                     XOR ECX,ECX
00553075  85 F6                     TEST ESI,ESI
00553077  7E 29                     JLE 0x005530a2
00553079  8B 7D 08                  MOV EDI,dword ptr [EBP + 0x8]
0055307C  3B CE                     CMP ECX,ESI
LAB_0055307e:
0055307E  73 1D                     JNC 0x0055309d
00553080  8B 42 08                  MOV EAX,dword ptr [EDX + 0x8]
00553083  8B 5A 1C                  MOV EBX,dword ptr [EDX + 0x1c]
00553086  0F AF C1                  IMUL EAX,ECX
00553089  03 C3                     ADD EAX,EBX
0055308B  85 C0                     TEST EAX,EAX
0055308D  74 0E                     JZ 0x0055309d
0055308F  8B 58 02                  MOV EBX,dword ptr [EAX + 0x2]
00553092  85 DB                     TEST EBX,EBX
00553094  74 07                     JZ 0x0055309d
00553096  0F BF 18                  MOVSX EBX,word ptr [EAX]
00553099  3B DF                     CMP EBX,EDI
0055309B  74 0C                     JZ 0x005530a9
LAB_0055309d:
0055309D  41                        INC ECX
0055309E  3B CE                     CMP ECX,ESI
005530A0  7C DC                     JL 0x0055307e
LAB_005530a2:
005530A2  5F                        POP EDI
005530A3  5E                        POP ESI
005530A4  33 C0                     XOR EAX,EAX
005530A6  5B                        POP EBX
005530A7  5D                        POP EBP
005530A8  C3                        RET
LAB_005530a9:
005530A9  8B 40 02                  MOV EAX,dword ptr [EAX + 0x2]
005530AC  5F                        POP EDI
005530AD  5E                        POP ESI
005530AE  5B                        POP EBX
005530AF  5D                        POP EBP
005530B0  C3                        RET
