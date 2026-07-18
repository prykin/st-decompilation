FUN_00496f70:
00496F70  55                        PUSH EBP
00496F71  8B EC                     MOV EBP,ESP
00496F73  A1 70 B2 7F 00            MOV EAX,[0x007fb270]
00496F78  53                        PUSH EBX
00496F79  57                        PUSH EDI
00496F7A  33 DB                     XOR EBX,EBX
00496F7C  8B 78 0C                  MOV EDI,dword ptr [EAX + 0xc]
00496F7F  0F AF 78 08               IMUL EDI,dword ptr [EAX + 0x8]
00496F83  83 C7 1C                  ADD EDI,0x1c
00496F86  85 FF                     TEST EDI,EDI
00496F88  7E 4E                     JLE 0x00496fd8
00496F8A  56                        PUSH ESI
00496F8B  EB 05                     JMP 0x00496f92
LAB_00496f8d:
00496F8D  A1 70 B2 7F 00            MOV EAX,[0x007fb270]
LAB_00496f92:
00496F92  3B 58 0C                  CMP EBX,dword ptr [EAX + 0xc]
00496F95  73 0D                     JNC 0x00496fa4
00496F97  8B 70 08                  MOV ESI,dword ptr [EAX + 0x8]
00496F9A  8B 48 1C                  MOV ECX,dword ptr [EAX + 0x1c]
00496F9D  0F AF F3                  IMUL ESI,EBX
00496FA0  03 F1                     ADD ESI,ECX
00496FA2  EB 02                     JMP 0x00496fa6
LAB_00496fa4:
00496FA4  33 F6                     XOR ESI,ESI
LAB_00496fa6:
00496FA6  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
00496FA9  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
00496FAC  50                        PUSH EAX
00496FAD  51                        PUSH ECX
00496FAE  8B 4E 04                  MOV ECX,dword ptr [ESI + 0x4]
00496FB1  33 D2                     XOR EDX,EDX
00496FB3  3B C8                     CMP ECX,EAX
00496FB5  8B 06                     MOV EAX,dword ptr [ESI]
00496FB7  0F 9C C2                  SETL DL
00496FBA  52                        PUSH EDX
00496FBB  50                        PUSH EAX
00496FBC  E8 CF 5F 21 00            CALL 0x006acf90
00496FC1  3B 46 0C                  CMP EAX,dword ptr [ESI + 0xc]
00496FC4  7D 0C                     JGE 0x00496fd2
00496FC6  8B 4D 14                  MOV ECX,dword ptr [EBP + 0x14]
00496FC9  51                        PUSH ECX
00496FCA  8B 4E 14                  MOV ECX,dword ptr [ESI + 0x14]
00496FCD  E8 EB BA F6 FF            CALL 0x00402abd
LAB_00496fd2:
00496FD2  43                        INC EBX
00496FD3  3B DF                     CMP EBX,EDI
00496FD5  7C B6                     JL 0x00496f8d
00496FD7  5E                        POP ESI
LAB_00496fd8:
00496FD8  5F                        POP EDI
00496FD9  5B                        POP EBX
00496FDA  5D                        POP EBP
00496FDB  C2 10 00                  RET 0x10
