STTmMineC::LoadImagSpr:
0063E160  55                        PUSH EBP
0063E161  8B EC                     MOV EBP,ESP
0063E163  83 EC 54                  SUB ESP,0x54
0063E166  89 4D F4                  MOV dword ptr [EBP + -0xc],ECX
0063E169  8B 89 36 03 00 00         MOV ECX,dword ptr [ECX + 0x336]
0063E16F  53                        PUSH EBX
0063E170  56                        PUSH ESI
0063E171  85 C9                     TEST ECX,ECX
0063E173  57                        PUSH EDI
0063E174  C7 45 F0 00 00 00 00      MOV dword ptr [EBP + -0x10],0x0
0063E17B  0F 84 F1 01 00 00         JZ 0x0063e372
0063E181  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
0063E184  8B 41 0C                  MOV EAX,dword ptr [ECX + 0xc]
0063E187  3B D0                     CMP EDX,EAX
0063E189  73 0B                     JNC 0x0063e196
0063E18B  8B 41 08                  MOV EAX,dword ptr [ECX + 0x8]
0063E18E  0F AF C2                  IMUL EAX,EDX
0063E191  03 41 1C                  ADD EAX,dword ptr [ECX + 0x1c]
0063E194  EB 02                     JMP 0x0063e198
LAB_0063e196:
0063E196  33 C0                     XOR EAX,EAX
LAB_0063e198:
0063E198  85 C0                     TEST EAX,EAX
0063E19A  89 45 F8                  MOV dword ptr [EBP + -0x8],EAX
0063E19D  0F 84 76 01 00 00         JZ 0x0063e319
0063E1A3  8B 4D 0C                  MOV ECX,dword ptr [EBP + 0xc]
0063E1A6  85 C9                     TEST ECX,ECX
0063E1A8  74 13                     JZ 0x0063e1bd
0063E1AA  8B 48 38                  MOV ECX,dword ptr [EAX + 0x38]
0063E1AD  85 C9                     TEST ECX,ECX
0063E1AF  7C 0C                     JL 0x0063e1bd
0063E1B1  83 C8 FF                  OR EAX,0xffffffff
0063E1B4  5F                        POP EDI
0063E1B5  5E                        POP ESI
0063E1B6  5B                        POP EBX
0063E1B7  8B E5                     MOV ESP,EBP
0063E1B9  5D                        POP EBP
0063E1BA  C2 08 00                  RET 0x8
LAB_0063e1bd:
0063E1BD  A1 F8 8D 85 00            MOV EAX,[0x00858df8]
0063E1C2  8D 55 B0                  LEA EDX,[EBP + -0x50]
0063E1C5  8D 4D AC                  LEA ECX,[EBP + -0x54]
0063E1C8  6A 00                     PUSH 0x0
0063E1CA  52                        PUSH EDX
0063E1CB  89 45 AC                  MOV dword ptr [EBP + -0x54],EAX
0063E1CE  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
0063E1D4  E8 17 F6 0E 00            CALL 0x0072d7f0
0063E1D9  8B F0                     MOV ESI,EAX
0063E1DB  83 C4 08                  ADD ESP,0x8
0063E1DE  85 F6                     TEST ESI,ESI
0063E1E0  0F 85 3F 01 00 00         JNZ 0x0063e325
0063E1E6  8B 5D F8                  MOV EBX,dword ptr [EBP + -0x8]
0063E1E9  50                        PUSH EAX
0063E1EA  50                        PUSH EAX
0063E1EB  8B 15 64 67 80 00         MOV EDX,dword ptr [0x00806764]
0063E1F1  6A 01                     PUSH 0x1
0063E1F3  50                        PUSH EAX
0063E1F4  8B 03                     MOV EAX,dword ptr [EBX]
0063E1F6  6A FF                     PUSH -0x1
0063E1F8  8B 0C 85 68 1F 7D 00      MOV ECX,dword ptr [EAX*0x4 + 0x7d1f68]
0063E1FF  51                        PUSH ECX
0063E200  6A 1D                     PUSH 0x1d
0063E202  52                        PUSH EDX
0063E203  E8 E8 B8 0C 00            CALL 0x00709af0
0063E208  8B F8                     MOV EDI,EAX
0063E20A  8B 43 38                  MOV EAX,dword ptr [EBX + 0x38]
0063E20D  83 C4 20                  ADD ESP,0x20
0063E210  85 C0                     TEST EAX,EAX
0063E212  7D 38                     JGE 0x0063e24c
0063E214  8B 45 F4                  MOV EAX,dword ptr [EBP + -0xc]
0063E217  8B 4F 0D                  MOV ECX,dword ptr [EDI + 0xd]
0063E21A  6A 00                     PUSH 0x0
0063E21C  8D B0 11 02 00 00         LEA ESI,[EAX + 0x211]
0063E222  8B C1                     MOV EAX,ECX
0063E224  99                        CDQ
0063E225  2B C2                     SUB EAX,EDX
0063E227  D1 F8                     SAR EAX,0x1
0063E229  83 E8 0E                  SUB EAX,0xe
0063E22C  50                        PUSH EAX
0063E22D  8B 47 09                  MOV EAX,dword ptr [EDI + 0x9]
0063E230  99                        CDQ
0063E231  2B C2                     SUB EAX,EDX
0063E233  D1 F8                     SAR EAX,0x1
0063E235  50                        PUSH EAX
0063E236  8B 47 09                  MOV EAX,dword ptr [EDI + 0x9]
0063E239  51                        PUSH ECX
0063E23A  50                        PUSH EAX
0063E23B  6A 00                     PUSH 0x0
0063E23D  8D 4D FC                  LEA ECX,[EBP + -0x4]
0063E240  6A 01                     PUSH 0x1
0063E242  51                        PUSH ECX
0063E243  8B 0E                     MOV ECX,dword ptr [ESI]
0063E245  E8 16 A4 0A 00            CALL 0x006e8660
0063E24A  EB 2B                     JMP 0x0063e277
LAB_0063e24c:
0063E24C  8B 55 F4                  MOV EDX,dword ptr [EBP + -0xc]
0063E24F  8B C8                     MOV ECX,EAX
0063E251  89 4D FC                  MOV dword ptr [EBP + -0x4],ECX
0063E254  8B 47 0D                  MOV EAX,dword ptr [EDI + 0xd]
0063E257  8D B2 11 02 00 00         LEA ESI,[EDX + 0x211]
0063E25D  99                        CDQ
0063E25E  2B C2                     SUB EAX,EDX
0063E260  D1 F8                     SAR EAX,0x1
0063E262  83 E8 0E                  SUB EAX,0xe
0063E265  50                        PUSH EAX
0063E266  8B 47 09                  MOV EAX,dword ptr [EDI + 0x9]
0063E269  99                        CDQ
0063E26A  2B C2                     SUB EAX,EDX
0063E26C  D1 F8                     SAR EAX,0x1
0063E26E  50                        PUSH EAX
0063E26F  51                        PUSH ECX
0063E270  8B 0E                     MOV ECX,dword ptr [ESI]
0063E272  E8 B9 B5 0A 00            CALL 0x006e9830
LAB_0063e277:
0063E277  8B 47 21                  MOV EAX,dword ptr [EDI + 0x21]
0063E27A  8B 0F                     MOV ECX,dword ptr [EDI]
0063E27C  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
0063E27F  6A 01                     PUSH 0x1
0063E281  50                        PUSH EAX
0063E282  51                        PUSH ECX
0063E283  8B 0E                     MOV ECX,dword ptr [ESI]
0063E285  6A 00                     PUSH 0x0
0063E287  52                        PUSH EDX
0063E288  E8 53 B6 0A 00            CALL 0x006e98e0
0063E28D  8B 43 20                  MOV EAX,dword ptr [EBX + 0x20]
0063E290  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
0063E293  50                        PUSH EAX
0063E294  6A 00                     PUSH 0x0
0063E296  51                        PUSH ECX
0063E297  8B 0E                     MOV ECX,dword ptr [ESI]
0063E299  E8 D2 BF 0A 00            CALL 0x006ea270
0063E29E  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
0063E2A1  8B 0E                     MOV ECX,dword ptr [ESI]
0063E2A3  6A 00                     PUSH 0x0
0063E2A5  6A 00                     PUSH 0x0
0063E2A7  52                        PUSH EDX
0063E2A8  E8 33 C3 0A 00            CALL 0x006ea5e0
0063E2AD  D9 43 10                  FLD float ptr [EBX + 0x10]
0063E2B0  D8 05 FC 04 79 00         FADD float ptr [0x007904fc]
0063E2B6  51                        PUSH ECX
0063E2B7  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
0063E2BA  D9 1C 24                  FSTP float ptr [ESP]
0063E2BD  DB 43 0C                  FILD dword ptr [EBX + 0xc]
0063E2C0  51                        PUSH ECX
0063E2C1  D8 0D F8 04 79 00         FMUL float ptr [0x007904f8]
0063E2C7  D8 0D F0 04 79 00         FMUL float ptr [0x007904f0]
0063E2CD  D9 1C 24                  FSTP float ptr [ESP]
0063E2D0  DB 43 08                  FILD dword ptr [EBX + 0x8]
0063E2D3  51                        PUSH ECX
0063E2D4  8B 0E                     MOV ECX,dword ptr [ESI]
0063E2D6  D8 0D F8 04 79 00         FMUL float ptr [0x007904f8]
0063E2DC  D8 0D F0 04 79 00         FMUL float ptr [0x007904f0]
0063E2E2  D9 1C 24                  FSTP float ptr [ESP]
0063E2E5  50                        PUSH EAX
0063E2E6  E8 75 C6 0A 00            CALL 0x006ea960
0063E2EB  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
0063E2EE  6A 00                     PUSH 0x0
0063E2F0  51                        PUSH ECX
0063E2F1  8B 0E                     MOV ECX,dword ptr [ESI]
0063E2F3  E8 A8 C7 0A 00            CALL 0x006eaaa0
0063E2F8  8B 43 04                  MOV EAX,dword ptr [EBX + 0x4]
0063E2FB  85 C0                     TEST EAX,EAX
0063E2FD  74 0B                     JZ 0x0063e30a
0063E2FF  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
0063E302  8B 0E                     MOV ECX,dword ptr [ESI]
0063E304  52                        PUSH EDX
0063E305  E8 56 C8 0A 00            CALL 0x006eab60
LAB_0063e30a:
0063E30A  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
0063E30D  89 43 38                  MOV dword ptr [EBX + 0x38],EAX
0063E310  8B 4D AC                  MOV ECX,dword ptr [EBP + -0x54]
0063E313  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
LAB_0063e319:
0063E319  8B 45 F0                  MOV EAX,dword ptr [EBP + -0x10]
0063E31C  5F                        POP EDI
0063E31D  5E                        POP ESI
0063E31E  5B                        POP EBX
0063E31F  8B E5                     MOV ESP,EBP
0063E321  5D                        POP EBP
0063E322  C2 08 00                  RET 0x8
LAB_0063e325:
0063E325  8B 55 AC                  MOV EDX,dword ptr [EBP + -0x54]
0063E328  68 FC 20 7D 00            PUSH 0x7d20fc
0063E32D  68 CC 4C 7A 00            PUSH 0x7a4ccc
0063E332  56                        PUSH ESI
0063E333  6A 00                     PUSH 0x0
0063E335  68 03 06 00 00            PUSH 0x603
0063E33A  68 9C 20 7D 00            PUSH 0x7d209c
0063E33F  89 15 F8 8D 85 00         MOV dword ptr [0x00858df8],EDX
0063E345  E8 86 F1 06 00            CALL 0x006ad4d0
0063E34A  83 C4 18                  ADD ESP,0x18
0063E34D  85 C0                     TEST EAX,EAX
0063E34F  74 01                     JZ 0x0063e352
0063E351  CC                        INT3
LAB_0063e352:
0063E352  68 05 06 00 00            PUSH 0x605
0063E357  68 9C 20 7D 00            PUSH 0x7d209c
0063E35C  6A 00                     PUSH 0x0
0063E35E  56                        PUSH ESI
0063E35F  E8 DC 7A 06 00            CALL 0x006a5e40
0063E364  B8 FF FF 00 00            MOV EAX,0xffff
0063E369  5F                        POP EDI
0063E36A  5E                        POP ESI
0063E36B  5B                        POP EBX
0063E36C  8B E5                     MOV ESP,EBP
0063E36E  5D                        POP EBP
0063E36F  C2 08 00                  RET 0x8
LAB_0063e372:
0063E372  5F                        POP EDI
0063E373  5E                        POP ESI
0063E374  33 C0                     XOR EAX,EAX
0063E376  5B                        POP EBX
0063E377  8B E5                     MOV ESP,EBP
0063E379  5D                        POP EBP
0063E37A  C2 08 00                  RET 0x8
