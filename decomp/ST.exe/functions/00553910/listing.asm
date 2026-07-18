FUN_00553910:
00553910  55                        PUSH EBP
00553911  8B EC                     MOV EBP,ESP
00553913  8B 4D 10                  MOV ECX,dword ptr [EBP + 0x10]
00553916  53                        PUSH EBX
00553917  56                        PUSH ESI
00553918  57                        PUSH EDI
00553919  85 C9                     TEST ECX,ECX
0055391B  74 43                     JZ 0x00553960
0055391D  8B 5D 08                  MOV EBX,dword ptr [EBP + 0x8]
00553920  85 DB                     TEST EBX,EBX
00553922  7C 3C                     JL 0x00553960
00553924  8B 45 14                  MOV EAX,dword ptr [EBP + 0x14]
00553927  3B D8                     CMP EBX,EAX
00553929  7D 35                     JGE 0x00553960
0055392B  8B 75 0C                  MOV ESI,dword ptr [EBP + 0xc]
0055392E  85 F6                     TEST ESI,ESI
00553930  7C 2E                     JL 0x00553960
00553932  8B 7D 18                  MOV EDI,dword ptr [EBP + 0x18]
00553935  3B F7                     CMP ESI,EDI
00553937  7D 27                     JGE 0x00553960
00553939  57                        PUSH EDI
0055393A  50                        PUSH EAX
0055393B  51                        PUSH ECX
0055393C  56                        PUSH ESI
0055393D  53                        PUSH EBX
0055393E  E8 5C E7 EA FF            CALL 0x0040209f
00553943  50                        PUSH EAX
00553944  E8 11 09 EB FF            CALL 0x0040425a
00553949  8B 4D 14                  MOV ECX,dword ptr [EBP + 0x14]
0055394C  8B 55 10                  MOV EDX,dword ptr [EBP + 0x10]
0055394F  0F BF C0                  MOVSX EAX,AX
00553952  50                        PUSH EAX
00553953  57                        PUSH EDI
00553954  51                        PUSH ECX
00553955  52                        PUSH EDX
00553956  56                        PUSH ESI
00553957  53                        PUSH EBX
00553958  E8 C5 DC EA FF            CALL 0x00401622
0055395D  83 C4 30                  ADD ESP,0x30
LAB_00553960:
00553960  5F                        POP EDI
00553961  5E                        POP ESI
00553962  5B                        POP EBX
00553963  5D                        POP EBP
00553964  C3                        RET
