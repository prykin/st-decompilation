FUN_00677960:
00677960  55                        PUSH EBP
00677961  8B EC                     MOV EBP,ESP
00677963  83 EC 58                  SUB ESP,0x58
00677966  A1 F8 8D 85 00            MOV EAX,[0x00858df8]
0067796B  53                        PUSH EBX
0067796C  56                        PUSH ESI
0067796D  57                        PUSH EDI
0067796E  8D 55 AC                  LEA EDX,[EBP + -0x54]
00677971  8D 4D A8                  LEA ECX,[EBP + -0x58]
00677974  6A 00                     PUSH 0x0
00677976  52                        PUSH EDX
00677977  C7 45 F0 00 00 00 00      MOV dword ptr [EBP + -0x10],0x0
0067797E  89 45 A8                  MOV dword ptr [EBP + -0x58],EAX
00677981  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
00677987  E8 64 5E 0B 00            CALL 0x0072d7f0
0067798C  8B F0                     MOV ESI,EAX
0067798E  83 C4 08                  ADD ESP,0x8
00677991  85 F6                     TEST ESI,ESI
00677993  0F 85 5C 01 00 00         JNZ 0x00677af5
00677999  A1 5C A1 7F 00            MOV EAX,[0x007fa15c]
0067799E  85 C0                     TEST EAX,EAX
006779A0  75 17                     JNZ 0x006779b9
006779A2  A1 7C D7 7E 00            MOV EAX,[0x007ed77c]
006779A7  68 6B 03 00 00            PUSH 0x36b
006779AC  68 58 2D 7D 00            PUSH 0x7d2d58
006779B1  50                        PUSH EAX
006779B2  6A CC                     PUSH -0x34
006779B4  E8 87 E4 02 00            CALL 0x006a5e40
LAB_006779b9:
006779B9  8B 0D 5C A1 7F 00         MOV ECX,dword ptr [0x007fa15c]
006779BF  8B 79 0C                  MOV EDI,dword ptr [ECX + 0xc]
006779C2  4F                        DEC EDI
006779C3  89 7D F4                  MOV dword ptr [EBP + -0xc],EDI
006779C6  0F 88 16 01 00 00         JS 0x00677ae2
006779CC  EB 06                     JMP 0x006779d4
LAB_006779ce:
006779CE  8B 0D 5C A1 7F 00         MOV ECX,dword ptr [0x007fa15c]
LAB_006779d4:
006779D4  8B 41 0C                  MOV EAX,dword ptr [ECX + 0xc]
006779D7  66 8B 5D 08               MOV BX,word ptr [EBP + 0x8]
006779DB  3B F8                     CMP EDI,EAX
006779DD  73 0D                     JNC 0x006779ec
006779DF  8B 41 08                  MOV EAX,dword ptr [ECX + 0x8]
006779E2  8B 51 1C                  MOV EDX,dword ptr [ECX + 0x1c]
006779E5  0F AF C7                  IMUL EAX,EDI
006779E8  03 C2                     ADD EAX,EDX
006779EA  EB 02                     JMP 0x006779ee
LAB_006779ec:
006779EC  33 C0                     XOR EAX,EAX
LAB_006779ee:
006779EE  8B 30                     MOV ESI,dword ptr [EAX]
006779F0  85 F6                     TEST ESI,ESI
006779F2  0F 84 C6 00 00 00         JZ 0x00677abe
006779F8  66 85 DB                  TEST BX,BX
006779FB  74 12                     JZ 0x00677a0f
006779FD  8B 16                     MOV EDX,dword ptr [ESI]
006779FF  8B CE                     MOV ECX,ESI
00677A01  FF 52 2C                  CALL dword ptr [EDX + 0x2c]
00677A04  0F BF CB                  MOVSX ECX,BX
00677A07  3B C8                     CMP ECX,EAX
00677A09  0F 85 AF 00 00 00         JNZ 0x00677abe
LAB_00677a0f:
00677A0F  66 8B 5D 18               MOV BX,word ptr [EBP + 0x18]
00677A13  B8 01 00 00 00            MOV EAX,0x1
00677A18  66 85 DB                  TEST BX,BX
00677A1B  89 45 EC                  MOV dword ptr [EBP + -0x14],EAX
00677A1E  7E 7A                     JLE 0x00677a9a
00677A20  66 83 7D 1C 00            CMP word ptr [EBP + 0x1c],0x0
00677A25  7E 73                     JLE 0x00677a9a
00677A27  66 83 7D 20 00            CMP word ptr [EBP + 0x20],0x0
00677A2C  7E 6C                     JLE 0x00677a9a
00677A2E  8D 55 FA                  LEA EDX,[EBP + -0x6]
00677A31  8D 45 FC                  LEA EAX,[EBP + -0x4]
00677A34  52                        PUSH EDX
00677A35  8D 4D FE                  LEA ECX,[EBP + -0x2]
00677A38  50                        PUSH EAX
00677A39  51                        PUSH ECX
00677A3A  8B CE                     MOV ECX,ESI
00677A3C  E8 84 9E D8 FF            CALL 0x004018c5
00677A41  66 8B 45 FE               MOV AX,word ptr [EBP + -0x2]
00677A45  66 8B 7D 0C               MOV DI,word ptr [EBP + 0xc]
00677A49  66 3B C7                  CMP AX,DI
00677A4C  7C 45                     JL 0x00677a93
00677A4E  66 8B 4D FC               MOV CX,word ptr [EBP + -0x4]
00677A52  66 3B 4D 10               CMP CX,word ptr [EBP + 0x10]
00677A56  7C 3B                     JL 0x00677a93
00677A58  66 8B 55 FA               MOV DX,word ptr [EBP + -0x6]
00677A5C  66 3B 55 14               CMP DX,word ptr [EBP + 0x14]
00677A60  7C 31                     JL 0x00677a93
00677A62  0F BF FF                  MOVSX EDI,DI
00677A65  0F BF DB                  MOVSX EBX,BX
00677A68  0F BF C0                  MOVSX EAX,AX
00677A6B  03 FB                     ADD EDI,EBX
00677A6D  3B C7                     CMP EAX,EDI
00677A6F  7D 22                     JGE 0x00677a93
00677A71  0F BF 45 10               MOVSX EAX,word ptr [EBP + 0x10]
00677A75  0F BF 7D 1C               MOVSX EDI,word ptr [EBP + 0x1c]
00677A79  0F BF C9                  MOVSX ECX,CX
00677A7C  03 C7                     ADD EAX,EDI
00677A7E  3B C8                     CMP ECX,EAX
00677A80  7D 11                     JGE 0x00677a93
00677A82  0F BF 45 14               MOVSX EAX,word ptr [EBP + 0x14]
00677A86  0F BF 4D 20               MOVSX ECX,word ptr [EBP + 0x20]
00677A8A  0F BF D2                  MOVSX EDX,DX
00677A8D  03 C1                     ADD EAX,ECX
00677A8F  3B D0                     CMP EDX,EAX
00677A91  7C 04                     JL 0x00677a97
LAB_00677a93:
00677A93  33 C0                     XOR EAX,EAX
00677A95  EB 03                     JMP 0x00677a9a
LAB_00677a97:
00677A97  8B 45 EC                  MOV EAX,dword ptr [EBP + -0x14]
LAB_00677a9a:
00677A9A  85 C0                     TEST EAX,EAX
00677A9C  74 1D                     JZ 0x00677abb
00677A9E  8B 45 24                  MOV EAX,dword ptr [EBP + 0x24]
00677AA1  85 C0                     TEST EAX,EAX
00677AA3  74 16                     JZ 0x00677abb
00677AA5  8B 4D 28                  MOV ECX,dword ptr [EBP + 0x28]
00677AA8  8B 7D F4                  MOV EDI,dword ptr [EBP + -0xc]
00677AAB  51                        PUSH ECX
00677AAC  56                        PUSH ESI
00677AAD  57                        PUSH EDI
00677AAE  6A 00                     PUSH 0x0
00677AB0  FF D0                     CALL EAX
00677AB2  83 C4 10                  ADD ESP,0x10
00677AB5  85 C0                     TEST EAX,EAX
00677AB7  75 22                     JNZ 0x00677adb
00677AB9  EB 03                     JMP 0x00677abe
LAB_00677abb:
00677ABB  8B 7D F4                  MOV EDI,dword ptr [EBP + -0xc]
LAB_00677abe:
00677ABE  4F                        DEC EDI
00677ABF  89 7D F4                  MOV dword ptr [EBP + -0xc],EDI
00677AC2  0F 89 06 FF FF FF         JNS 0x006779ce
00677AC8  8B 55 A8                  MOV EDX,dword ptr [EBP + -0x58]
00677ACB  8B 45 F0                  MOV EAX,dword ptr [EBP + -0x10]
00677ACE  89 15 F8 8D 85 00         MOV dword ptr [0x00858df8],EDX
00677AD4  5F                        POP EDI
00677AD5  5E                        POP ESI
00677AD6  5B                        POP EBX
00677AD7  8B E5                     MOV ESP,EBP
00677AD9  5D                        POP EBP
00677ADA  C3                        RET
LAB_00677adb:
00677ADB  C7 45 F0 FF FF FF FF      MOV dword ptr [EBP + -0x10],0xffffffff
LAB_00677ae2:
00677AE2  8B 55 A8                  MOV EDX,dword ptr [EBP + -0x58]
00677AE5  8B 45 F0                  MOV EAX,dword ptr [EBP + -0x10]
00677AE8  89 15 F8 8D 85 00         MOV dword ptr [0x00858df8],EDX
00677AEE  5F                        POP EDI
00677AEF  5E                        POP ESI
00677AF0  5B                        POP EBX
00677AF1  8B E5                     MOV ESP,EBP
00677AF3  5D                        POP EBP
00677AF4  C3                        RET
LAB_00677af5:
00677AF5  8B 45 A8                  MOV EAX,dword ptr [EBP + -0x58]
00677AF8  68 04 2E 7D 00            PUSH 0x7d2e04
00677AFD  68 CC 4C 7A 00            PUSH 0x7a4ccc
00677B02  56                        PUSH ESI
00677B03  6A 00                     PUSH 0x0
00677B05  68 7F 03 00 00            PUSH 0x37f
00677B0A  68 58 2D 7D 00            PUSH 0x7d2d58
00677B0F  A3 F8 8D 85 00            MOV [0x00858df8],EAX
00677B14  E8 B7 59 03 00            CALL 0x006ad4d0
00677B19  83 C4 18                  ADD ESP,0x18
00677B1C  85 C0                     TEST EAX,EAX
00677B1E  74 01                     JZ 0x00677b21
00677B20  CC                        INT3
LAB_00677b21:
00677B21  68 80 03 00 00            PUSH 0x380
00677B26  68 58 2D 7D 00            PUSH 0x7d2d58
00677B2B  6A 00                     PUSH 0x0
00677B2D  56                        PUSH ESI
00677B2E  E8 0D E3 02 00            CALL 0x006a5e40
00677B33  8B C6                     MOV EAX,ESI
00677B35  5F                        POP EDI
00677B36  5E                        POP ESI
00677B37  5B                        POP EBX
00677B38  8B E5                     MOV ESP,EBP
00677B3A  5D                        POP EBP
00677B3B  C3                        RET
