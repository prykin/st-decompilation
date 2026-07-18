FUN_00553880:
00553880  55                        PUSH EBP
00553881  8B EC                     MOV EBP,ESP
00553883  8B 4D 10                  MOV ECX,dword ptr [EBP + 0x10]
00553886  53                        PUSH EBX
00553887  56                        PUSH ESI
00553888  57                        PUSH EDI
00553889  85 C9                     TEST ECX,ECX
0055388B  74 4B                     JZ 0x005538d8
0055388D  8B 7D 08                  MOV EDI,dword ptr [EBP + 0x8]
00553890  85 FF                     TEST EDI,EDI
00553892  7C 44                     JL 0x005538d8
00553894  8B 5D 14                  MOV EBX,dword ptr [EBP + 0x14]
00553897  3B FB                     CMP EDI,EBX
00553899  7D 3D                     JGE 0x005538d8
0055389B  8B 75 0C                  MOV ESI,dword ptr [EBP + 0xc]
0055389E  85 F6                     TEST ESI,ESI
005538A0  7C 36                     JL 0x005538d8
005538A2  8B 45 18                  MOV EAX,dword ptr [EBP + 0x18]
005538A5  3B F0                     CMP ESI,EAX
005538A7  7D 2F                     JGE 0x005538d8
005538A9  50                        PUSH EAX
005538AA  53                        PUSH EBX
005538AB  51                        PUSH ECX
005538AC  56                        PUSH ESI
005538AD  57                        PUSH EDI
005538AE  E8 EC E7 EA FF            CALL 0x0040209f
005538B3  50                        PUSH EAX
005538B4  E8 1A F5 EA FF            CALL 0x00402dd3
005538B9  0F AF F3                  IMUL ESI,EBX
005538BC  8B 4D 10                  MOV ECX,dword ptr [EBP + 0x10]
005538BF  03 F7                     ADD ESI,EDI
005538C1  83 C4 18                  ADD ESP,0x18
005538C4  66 0F B6 14 0E            MOVZX DX,byte ptr [ESI + ECX*0x1]
005538C9  33 C9                     XOR ECX,ECX
005538CB  66 3B C2                  CMP AX,DX
005538CE  0F 94 C1                  SETZ CL
005538D1  5F                        POP EDI
005538D2  5E                        POP ESI
005538D3  8B C1                     MOV EAX,ECX
005538D5  5B                        POP EBX
005538D6  5D                        POP EBP
005538D7  C3                        RET
LAB_005538d8:
005538D8  5F                        POP EDI
005538D9  5E                        POP ESI
005538DA  B8 01 00 00 00            MOV EAX,0x1
005538DF  5B                        POP EBX
005538E0  5D                        POP EBP
005538E1  C3                        RET
