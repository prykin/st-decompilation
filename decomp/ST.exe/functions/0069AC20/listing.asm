FUN_0069ac20:
0069AC20  55                        PUSH EBP
0069AC21  8B EC                     MOV EBP,ESP
0069AC23  51                        PUSH ECX
0069AC24  53                        PUSH EBX
0069AC25  56                        PUSH ESI
0069AC26  57                        PUSH EDI
0069AC27  8B 7D 14                  MOV EDI,dword ptr [EBP + 0x14]
0069AC2A  B8 FF 00 00 00            MOV EAX,0xff
0069AC2F  85 FF                     TEST EDI,EDI
0069AC31  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
0069AC34  74 5B                     JZ 0x0069ac91
0069AC36  8B 4F 0C                  MOV ECX,dword ptr [EDI + 0xc]
0069AC39  33 F6                     XOR ESI,ESI
0069AC3B  85 C9                     TEST ECX,ECX
0069AC3D  89 4D 14                  MOV dword ptr [EBP + 0x14],ECX
0069AC40  7E 4F                     JLE 0x0069ac91
0069AC42  8B 5D 10                  MOV EBX,dword ptr [EBP + 0x10]
LAB_0069ac45:
0069AC45  3B 77 0C                  CMP ESI,dword ptr [EDI + 0xc]
0069AC48  73 0D                     JNC 0x0069ac57
0069AC4A  8B 47 08                  MOV EAX,dword ptr [EDI + 0x8]
0069AC4D  8B 4F 1C                  MOV ECX,dword ptr [EDI + 0x1c]
0069AC50  0F AF C6                  IMUL EAX,ESI
0069AC53  03 C1                     ADD EAX,ECX
0069AC55  EB 02                     JMP 0x0069ac59
LAB_0069ac57:
0069AC57  33 C0                     XOR EAX,EAX
LAB_0069ac59:
0069AC59  8B 4D 0C                  MOV ECX,dword ptr [EBP + 0xc]
0069AC5C  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
0069AC5F  51                        PUSH ECX
0069AC60  52                        PUSH EDX
0069AC61  0F BF 48 02               MOVSX ECX,word ptr [EAX + 0x2]
0069AC65  0F BF 10                  MOVSX EDX,word ptr [EAX]
0069AC68  51                        PUSH ECX
0069AC69  52                        PUSH EDX
0069AC6A  E8 21 23 01 00            CALL 0x006acf90
0069AC6F  3B C3                     CMP EAX,EBX
0069AC71  7C 1C                     JL 0x0069ac8f
0069AC73  3B 45 FC                  CMP EAX,dword ptr [EBP + -0x4]
0069AC76  7D 03                     JGE 0x0069ac7b
0069AC78  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
LAB_0069ac7b:
0069AC7B  8B 45 14                  MOV EAX,dword ptr [EBP + 0x14]
0069AC7E  46                        INC ESI
0069AC7F  3B F0                     CMP ESI,EAX
0069AC81  7C C2                     JL 0x0069ac45
0069AC83  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
0069AC86  5F                        POP EDI
0069AC87  5E                        POP ESI
0069AC88  5B                        POP EBX
0069AC89  8B E5                     MOV ESP,EBP
0069AC8B  5D                        POP EBP
0069AC8C  C2 10 00                  RET 0x10
LAB_0069ac8f:
0069AC8F  33 C0                     XOR EAX,EAX
LAB_0069ac91:
0069AC91  5F                        POP EDI
0069AC92  5E                        POP ESI
0069AC93  5B                        POP EBX
0069AC94  8B E5                     MOV ESP,EBP
0069AC96  5D                        POP EBP
0069AC97  C2 10 00                  RET 0x10
