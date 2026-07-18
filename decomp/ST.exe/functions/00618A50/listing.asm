FUN_00618a50:
00618A50  55                        PUSH EBP
00618A51  8B EC                     MOV EBP,ESP
00618A53  53                        PUSH EBX
00618A54  56                        PUSH ESI
00618A55  8B 71 62                  MOV ESI,dword ptr [ECX + 0x62]
00618A58  83 C8 FF                  OR EAX,0xffffffff
00618A5B  85 F6                     TEST ESI,ESI
00618A5D  57                        PUSH EDI
00618A5E  74 3C                     JZ 0x00618a9c
00618A60  8B 7E 0C                  MOV EDI,dword ptr [ESI + 0xc]
00618A63  85 FF                     TEST EDI,EDI
00618A65  7E 35                     JLE 0x00618a9c
00618A67  33 D2                     XOR EDX,EDX
00618A69  85 FF                     TEST EDI,EDI
00618A6B  7E 2F                     JLE 0x00618a9c
00618A6D  8B 5D 08                  MOV EBX,dword ptr [EBP + 0x8]
00618A70  3B D7                     CMP EDX,EDI
LAB_00618a72:
00618A72  73 11                     JNC 0x00618a85
00618A74  8B 4E 08                  MOV ECX,dword ptr [ESI + 0x8]
00618A77  0F AF CA                  IMUL ECX,EDX
00618A7A  03 4E 1C                  ADD ECX,dword ptr [ESI + 0x1c]
00618A7D  85 C9                     TEST ECX,ECX
00618A7F  74 04                     JZ 0x00618a85
00618A81  39 19                     CMP dword ptr [ECX],EBX
00618A83  74 0C                     JZ 0x00618a91
LAB_00618a85:
00618A85  42                        INC EDX
00618A86  3B D7                     CMP EDX,EDI
00618A88  7C E8                     JL 0x00618a72
00618A8A  5F                        POP EDI
00618A8B  5E                        POP ESI
00618A8C  5B                        POP EBX
00618A8D  5D                        POP EBP
00618A8E  C2 08 00                  RET 0x8
LAB_00618a91:
00618A91  0F BF 41 06               MOVSX EAX,word ptr [ECX + 0x6]
00618A95  8B 4D 0C                  MOV ECX,dword ptr [EBP + 0xc]
00618A98  89 01                     MOV dword ptr [ECX],EAX
00618A9A  8B C2                     MOV EAX,EDX
LAB_00618a9c:
00618A9C  5F                        POP EDI
00618A9D  5E                        POP ESI
00618A9E  5B                        POP EBX
00618A9F  5D                        POP EBP
00618AA0  C2 08 00                  RET 0x8
