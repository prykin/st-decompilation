FUN_00725e30:
00725E30  55                        PUSH EBP
00725E31  8B EC                     MOV EBP,ESP
00725E33  57                        PUSH EDI
00725E34  8B 7D 08                  MOV EDI,dword ptr [EBP + 0x8]
00725E37  8B 07                     MOV EAX,dword ptr [EDI]
00725E39  85 C0                     TEST EAX,EAX
00725E3B  74 38                     JZ 0x00725e75
00725E3D  56                        PUSH ESI
00725E3E  33 F6                     XOR ESI,ESI
00725E40  66 39 70 23               CMP word ptr [EAX + 0x23],SI
00725E44  7E 28                     JLE 0x00725e6e
LAB_00725e46:
00725E46  8B 48 25                  MOV ECX,dword ptr [EAX + 0x25]
00725E49  85 C9                     TEST ECX,ECX
00725E4B  74 0C                     JZ 0x00725e59
00725E4D  8D 44 B0 2D               LEA EAX,[EAX + ESI*0x4 + 0x2d]
00725E51  50                        PUSH EAX
00725E52  E8 89 C2 FC FF            CALL 0x006f20e0
00725E57  EB 0A                     JMP 0x00725e63
LAB_00725e59:
00725E59  8D 4C B0 2D               LEA ECX,[EAX + ESI*0x4 + 0x2d]
00725E5D  51                        PUSH ECX
00725E5E  E8 FD 51 F8 FF            CALL 0x006ab060
LAB_00725e63:
00725E63  8B 07                     MOV EAX,dword ptr [EDI]
00725E65  46                        INC ESI
00725E66  0F BF 50 23               MOVSX EDX,word ptr [EAX + 0x23]
00725E6A  3B F2                     CMP ESI,EDX
00725E6C  7C D8                     JL 0x00725e46
LAB_00725e6e:
00725E6E  57                        PUSH EDI
00725E6F  E8 EC 51 F8 FF            CALL 0x006ab060
00725E74  5E                        POP ESI
LAB_00725e75:
00725E75  5F                        POP EDI
00725E76  5D                        POP EBP
00725E77  C3                        RET
