FUN_0067bb50:
0067BB50  55                        PUSH EBP
0067BB51  8B EC                     MOV EBP,ESP
0067BB53  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
0067BB56  56                        PUSH ESI
0067BB57  33 C9                     XOR ECX,ECX
0067BB59  57                        PUSH EDI
0067BB5A  8B 72 0C                  MOV ESI,dword ptr [EDX + 0xc]
0067BB5D  85 F6                     TEST ESI,ESI
0067BB5F  7E 25                     JLE 0x0067bb86
0067BB61  3B CE                     CMP ECX,ESI
LAB_0067bb63:
0067BB63  73 1C                     JNC 0x0067bb81
0067BB65  8B 42 08                  MOV EAX,dword ptr [EDX + 0x8]
0067BB68  8B 7A 1C                  MOV EDI,dword ptr [EDX + 0x1c]
0067BB6B  0F AF C1                  IMUL EAX,ECX
0067BB6E  03 C7                     ADD EAX,EDI
0067BB70  85 C0                     TEST EAX,EAX
0067BB72  74 0D                     JZ 0x0067bb81
0067BB74  66 83 38 00               CMP word ptr [EAX],0x0
0067BB78  76 07                     JBE 0x0067bb81
0067BB7A  8B 78 0C                  MOV EDI,dword ptr [EAX + 0xc]
0067BB7D  85 FF                     TEST EDI,EDI
0067BB7F  7C 07                     JL 0x0067bb88
LAB_0067bb81:
0067BB81  41                        INC ECX
0067BB82  3B CE                     CMP ECX,ESI
0067BB84  7C DD                     JL 0x0067bb63
LAB_0067bb86:
0067BB86  33 C0                     XOR EAX,EAX
LAB_0067bb88:
0067BB88  5F                        POP EDI
0067BB89  5E                        POP ESI
0067BB8A  5D                        POP EBP
0067BB8B  C3                        RET
