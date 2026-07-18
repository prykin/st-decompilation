FUN_00678e00:
00678E00  55                        PUSH EBP
00678E01  8B EC                     MOV EBP,ESP
00678E03  8B 81 95 06 00 00         MOV EAX,dword ptr [ECX + 0x695]
00678E09  53                        PUSH EBX
00678E0A  56                        PUSH ESI
00678E0B  57                        PUSH EDI
00678E0C  8B 50 0C                  MOV EDX,dword ptr [EAX + 0xc]
00678E0F  33 FF                     XOR EDI,EDI
00678E11  85 D2                     TEST EDX,EDX
00678E13  0F 8E 88 00 00 00         JLE 0x00678ea1
00678E19  3B FA                     CMP EDI,EDX
LAB_00678e1b:
00678E1B  73 0D                     JNC 0x00678e2a
00678E1D  8B 48 08                  MOV ECX,dword ptr [EAX + 0x8]
00678E20  8B 70 1C                  MOV ESI,dword ptr [EAX + 0x1c]
00678E23  0F AF CF                  IMUL ECX,EDI
00678E26  03 CE                     ADD ECX,ESI
00678E28  EB 02                     JMP 0x00678e2c
LAB_00678e2a:
00678E2A  33 C9                     XOR ECX,ECX
LAB_00678e2c:
00678E2C  83 39 00                  CMP dword ptr [ECX],0x0
00678E2F  74 64                     JZ 0x00678e95
00678E31  85 C0                     TEST EAX,EAX
00678E33  74 2B                     JZ 0x00678e60
00678E35  85 FF                     TEST EDI,EDI
00678E37  7C 27                     JL 0x00678e60
00678E39  3B FA                     CMP EDI,EDX
00678E3B  7D 23                     JGE 0x00678e60
00678E3D  73 0D                     JNC 0x00678e4c
00678E3F  8B 48 08                  MOV ECX,dword ptr [EAX + 0x8]
00678E42  8B 50 1C                  MOV EDX,dword ptr [EAX + 0x1c]
00678E45  0F AF CF                  IMUL ECX,EDI
00678E48  03 CA                     ADD ECX,EDX
00678E4A  EB 02                     JMP 0x00678e4e
LAB_00678e4c:
00678E4C  33 C9                     XOR ECX,ECX
LAB_00678e4e:
00678E4E  8B 51 04                  MOV EDX,dword ptr [ECX + 0x4]
00678E51  8B 09                     MOV ECX,dword ptr [ECX]
00678E53  85 D2                     TEST EDX,EDX
00678E55  74 0B                     JZ 0x00678e62
00678E57  85 C9                     TEST ECX,ECX
00678E59  74 05                     JZ 0x00678e60
00678E5B  83 C1 20                  ADD ECX,0x20
00678E5E  EB 02                     JMP 0x00678e62
LAB_00678e60:
00678E60  33 C9                     XOR ECX,ECX
LAB_00678e62:
00678E62  8D 71 1B                  LEA ESI,[ECX + 0x1b]
00678E65  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
LAB_00678e68:
00678E68  8A 19                     MOV BL,byte ptr [ECX]
00678E6A  8A D3                     MOV DL,BL
00678E6C  3A 1E                     CMP BL,byte ptr [ESI]
00678E6E  75 1C                     JNZ 0x00678e8c
00678E70  84 D2                     TEST DL,DL
00678E72  74 14                     JZ 0x00678e88
00678E74  8A 59 01                  MOV BL,byte ptr [ECX + 0x1]
00678E77  8A D3                     MOV DL,BL
00678E79  3A 5E 01                  CMP BL,byte ptr [ESI + 0x1]
00678E7C  75 0E                     JNZ 0x00678e8c
00678E7E  83 C1 02                  ADD ECX,0x2
00678E81  83 C6 02                  ADD ESI,0x2
00678E84  84 D2                     TEST DL,DL
00678E86  75 E0                     JNZ 0x00678e68
LAB_00678e88:
00678E88  33 C9                     XOR ECX,ECX
00678E8A  EB 05                     JMP 0x00678e91
LAB_00678e8c:
00678E8C  1B C9                     SBB ECX,ECX
00678E8E  83 D9 FF                  SBB ECX,-0x1
LAB_00678e91:
00678E91  85 C9                     TEST ECX,ECX
00678E93  74 16                     JZ 0x00678eab
LAB_00678e95:
00678E95  8B 50 0C                  MOV EDX,dword ptr [EAX + 0xc]
00678E98  47                        INC EDI
00678E99  3B FA                     CMP EDI,EDX
00678E9B  0F 8C 7A FF FF FF         JL 0x00678e1b
LAB_00678ea1:
00678EA1  5F                        POP EDI
00678EA2  5E                        POP ESI
00678EA3  83 C8 FF                  OR EAX,0xffffffff
00678EA6  5B                        POP EBX
00678EA7  5D                        POP EBP
00678EA8  C2 04 00                  RET 0x4
LAB_00678eab:
00678EAB  8B C7                     MOV EAX,EDI
00678EAD  5F                        POP EDI
00678EAE  5E                        POP ESI
00678EAF  5B                        POP EBX
00678EB0  5D                        POP EBP
00678EB1  C2 04 00                  RET 0x4
