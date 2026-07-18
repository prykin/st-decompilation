FUN_00552f50:
00552F50  55                        PUSH EBP
00552F51  8B EC                     MOV EBP,ESP
00552F53  83 EC 50                  SUB ESP,0x50
00552F56  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
00552F59  53                        PUSH EBX
00552F5A  56                        PUSH ESI
00552F5B  33 F6                     XOR ESI,ESI
00552F5D  3B C6                     CMP EAX,ESI
00552F5F  57                        PUSH EDI
00552F60  89 75 FC                  MOV dword ptr [EBP + -0x4],ESI
00552F63  7D 09                     JGE 0x00552f6e
00552F65  33 C0                     XOR EAX,EAX
00552F67  5F                        POP EDI
00552F68  5E                        POP ESI
00552F69  5B                        POP EBX
00552F6A  8B E5                     MOV ESP,EBP
00552F6C  5D                        POP EBP
00552F6D  C3                        RET
LAB_00552f6e:
00552F6E  A1 F8 8D 85 00            MOV EAX,[0x00858df8]
00552F73  8D 55 B4                  LEA EDX,[EBP + -0x4c]
00552F76  8D 4D B0                  LEA ECX,[EBP + -0x50]
00552F79  56                        PUSH ESI
00552F7A  52                        PUSH EDX
00552F7B  89 45 B0                  MOV dword ptr [EBP + -0x50],EAX
00552F7E  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
00552F84  E8 67 A8 1D 00            CALL 0x0072d7f0
00552F89  83 C4 08                  ADD ESP,0x8
00552F8C  3B C6                     CMP EAX,ESI
00552F8E  75 65                     JNZ 0x00552ff5
00552F90  8B 7D 08                  MOV EDI,dword ptr [EBP + 0x8]
00552F93  8D 5C 3F 01               LEA EBX,[EDI + EDI*0x1 + 0x1]
00552F97  8B C3                     MOV EAX,EBX
00552F99  0F AF C3                  IMUL EAX,EBX
00552F9C  50                        PUSH EAX
00552F9D  E8 CE 7C 15 00            CALL 0x006aac70
00552FA2  3B DE                     CMP EBX,ESI
00552FA4  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
00552FA7  89 75 F4                  MOV dword ptr [EBP + -0xc],ESI
00552FAA  89 75 F8                  MOV dword ptr [EBP + -0x8],ESI
00552FAD  7E 33                     JLE 0x00552fe2
LAB_00552faf:
00552FAF  33 F6                     XOR ESI,ESI
LAB_00552fb1:
00552FB1  8B 4D F8                  MOV ECX,dword ptr [EBP + -0x8]
00552FB4  51                        PUSH ECX
00552FB5  56                        PUSH ESI
00552FB6  57                        PUSH EDI
00552FB7  57                        PUSH EDI
00552FB8  E8 1B 9F 15 00            CALL 0x006aced8
00552FBD  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
00552FC0  83 C4 10                  ADD ESP,0x10
00552FC3  3B C7                     CMP EAX,EDI
00552FC5  8B 45 F4                  MOV EAX,dword ptr [EBP + -0xc]
00552FC8  0F 9E C2                  SETLE DL
00552FCB  88 14 08                  MOV byte ptr [EAX + ECX*0x1],DL
00552FCE  40                        INC EAX
00552FCF  46                        INC ESI
00552FD0  89 45 F4                  MOV dword ptr [EBP + -0xc],EAX
00552FD3  3B F3                     CMP ESI,EBX
00552FD5  7C DA                     JL 0x00552fb1
00552FD7  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
00552FDA  40                        INC EAX
00552FDB  3B C3                     CMP EAX,EBX
00552FDD  89 45 F8                  MOV dword ptr [EBP + -0x8],EAX
00552FE0  7C CD                     JL 0x00552faf
LAB_00552fe2:
00552FE2  8B 55 B0                  MOV EDX,dword ptr [EBP + -0x50]
00552FE5  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
00552FE8  89 15 F8 8D 85 00         MOV dword ptr [0x00858df8],EDX
00552FEE  5F                        POP EDI
00552FEF  5E                        POP ESI
00552FF0  5B                        POP EBX
00552FF1  8B E5                     MOV ESP,EBP
00552FF3  5D                        POP EBP
00552FF4  C3                        RET
LAB_00552ff5:
00552FF5  8B 45 B0                  MOV EAX,dword ptr [EBP + -0x50]
00552FF8  A3 F8 8D 85 00            MOV [0x00858df8],EAX
00552FFD  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
00553000  3B C6                     CMP EAX,ESI
00553002  75 09                     JNZ 0x0055300d
00553004  8D 4D FC                  LEA ECX,[EBP + -0x4]
00553007  51                        PUSH ECX
00553008  E8 53 80 15 00            CALL 0x006ab060
LAB_0055300d:
0055300D  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
00553010  5F                        POP EDI
00553011  5E                        POP ESI
00553012  5B                        POP EBX
00553013  8B E5                     MOV ESP,EBP
00553015  5D                        POP EBP
00553016  C3                        RET
