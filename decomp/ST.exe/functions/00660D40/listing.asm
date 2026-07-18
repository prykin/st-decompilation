FUN_00660d40:
00660D40  55                        PUSH EBP
00660D41  8B EC                     MOV EBP,ESP
00660D43  83 EC 58                  SUB ESP,0x58
00660D46  57                        PUSH EDI
00660D47  8B F9                     MOV EDI,ECX
00660D49  89 7D FC                  MOV dword ptr [EBP + -0x4],EDI
00660D4C  8B 87 84 02 00 00         MOV EAX,dword ptr [EDI + 0x284]
00660D52  85 C0                     TEST EAX,EAX
00660D54  0F 84 9B 01 00 00         JZ 0x00660ef5
00660D5A  8B 87 0B 02 00 00         MOV EAX,dword ptr [EDI + 0x20b]
00660D60  85 C0                     TEST EAX,EAX
00660D62  0F 84 8D 01 00 00         JZ 0x00660ef5
00660D68  8B 0D 74 A1 7F 00         MOV ECX,dword ptr [0x007fa174]
00660D6E  85 C9                     TEST ECX,ECX
00660D70  0F 84 7F 01 00 00         JZ 0x00660ef5
00660D76  8A 47 24                  MOV AL,byte ptr [EDI + 0x24]
00660D79  50                        PUSH EAX
00660D7A  E8 46 10 DA FF            CALL 0x00401dc5
00660D7F  89 45 F4                  MOV dword ptr [EBP + -0xc],EAX
00660D82  8B 87 0B 02 00 00         MOV EAX,dword ptr [EDI + 0x20b]
00660D88  33 D2                     XOR EDX,EDX
00660D8A  8B 48 0C                  MOV ECX,dword ptr [EAX + 0xc]
00660D8D  89 55 F8                  MOV dword ptr [EBP + -0x8],EDX
00660D90  85 C9                     TEST ECX,ECX
00660D92  0F 8E 5D 01 00 00         JLE 0x00660ef5
00660D98  53                        PUSH EBX
00660D99  56                        PUSH ESI
00660D9A  3B D1                     CMP EDX,ECX
LAB_00660d9c:
00660D9C  73 0D                     JNC 0x00660dab
00660D9E  8B 70 08                  MOV ESI,dword ptr [EAX + 0x8]
00660DA1  8B 48 1C                  MOV ECX,dword ptr [EAX + 0x1c]
00660DA4  0F AF F2                  IMUL ESI,EDX
00660DA7  03 F1                     ADD ESI,ECX
00660DA9  EB 02                     JMP 0x00660dad
LAB_00660dab:
00660DAB  33 F6                     XOR ESI,ESI
LAB_00660dad:
00660DAD  66 8B 4F 7B               MOV CX,word ptr [EDI + 0x7b]
00660DB1  33 DB                     XOR EBX,EBX
00660DB3  66 8B C1                  MOV AX,CX
00660DB6  66 48                     DEC AX
00660DB8  66 F7 D8                  NEG AX
00660DBB  1B C0                     SBB EAX,EAX
00660DBD  83 E0 02                  AND EAX,0x2
00660DC0  40                        INC EAX
00660DC1  85 C0                     TEST EAX,EAX
00660DC3  0F 8E 15 01 00 00         JLE 0x00660ede
LAB_00660dc9:
00660DC9  8B 04 9E                  MOV EAX,dword ptr [ESI + EBX*0x4]
00660DCC  85 C0                     TEST EAX,EAX
00660DCE  0F 84 EF 00 00 00         JZ 0x00660ec3
00660DD4  83 7E 28 00               CMP dword ptr [ESI + 0x28],0x0
00660DD8  0F 85 E5 00 00 00         JNZ 0x00660ec3
00660DDE  83 7E 24 00               CMP dword ptr [ESI + 0x24],0x0
00660DE2  0F 85 DB 00 00 00         JNZ 0x00660ec3
00660DE8  83 F8 01                  CMP EAX,0x1
00660DEB  72 05                     JC 0x00660df2
00660DED  83 F8 29                  CMP EAX,0x29
00660DF0  72 0A                     JC 0x00660dfc
LAB_00660df2:
00660DF2  66 83 F9 01               CMP CX,0x1
00660DF6  0F 85 C7 00 00 00         JNZ 0x00660ec3
LAB_00660dfc:
00660DFC  B9 12 00 00 00            MOV ECX,0x12
00660E01  33 C0                     XOR EAX,EAX
00660E03  8D 7D A8                  LEA EDI,[EBP + -0x58]
00660E06  F3 AB                     STOSD.REP ES:EDI
00660E08  66 AB                     STOSW ES:EDI
00660E0A  8B 0C 9E                  MOV ECX,dword ptr [ESI + EBX*0x4]
00660E0D  33 C0                     XOR EAX,EAX
00660E0F  3B D8                     CMP EBX,EAX
00660E11  89 4D A8                  MOV dword ptr [EBP + -0x58],ECX
00660E14  75 0A                     JNZ 0x00660e20
00660E16  66 8B 4E 0C               MOV CX,word ptr [ESI + 0xc]
00660E1A  66 89 4D AE               MOV word ptr [EBP + -0x52],CX
00660E1E  EB 04                     JMP 0x00660e24
LAB_00660e20:
00660E20  66 89 45 AE               MOV word ptr [EBP + -0x52],AX
LAB_00660e24:
00660E24  8B 4D F4                  MOV ECX,dword ptr [EBP + -0xc]
00660E27  66 89 55 AC               MOV word ptr [EBP + -0x54],DX
00660E2B  3B C8                     CMP ECX,EAX
00660E2D  74 0F                     JZ 0x00660e3e
00660E2F  8B 81 5C 06 00 00         MOV EAX,dword ptr [ECX + 0x65c]
00660E35  8D 50 01                  LEA EDX,[EAX + 0x1]
00660E38  89 91 5C 06 00 00         MOV dword ptr [ECX + 0x65c],EDX
LAB_00660e3e:
00660E3E  8B 7D FC                  MOV EDI,dword ptr [EBP + -0x4]
00660E41  89 45 B0                  MOV dword ptr [EBP + -0x50],EAX
00660E44  66 8B 47 7D               MOV AX,word ptr [EDI + 0x7d]
00660E48  66 89 45 B4               MOV word ptr [EBP + -0x4c],AX
00660E4C  66 8B 4E 0E               MOV CX,word ptr [ESI + 0xe]
00660E50  66 89 4D BE               MOV word ptr [EBP + -0x42],CX
00660E54  66 8B 56 10               MOV DX,word ptr [ESI + 0x10]
00660E58  66 89 55 C0               MOV word ptr [EBP + -0x40],DX
00660E5C  66 8B 46 12               MOV AX,word ptr [ESI + 0x12]
00660E60  66 89 45 C2               MOV word ptr [EBP + -0x3e],AX
00660E64  8A 46 14                  MOV AL,byte ptr [ESI + 0x14]
00660E67  84 C0                     TEST AL,AL
00660E69  7C 09                     JL 0x00660e74
00660E6B  3C 08                     CMP AL,0x8
00660E6D  7D 05                     JGE 0x00660e74
00660E6F  88 45 C4                  MOV byte ptr [EBP + -0x3c],AL
00660E72  EB 19                     JMP 0x00660e8d
LAB_00660e74:
00660E74  8A 87 81 00 00 00         MOV AL,byte ptr [EDI + 0x81]
00660E7A  84 C0                     TEST AL,AL
00660E7C  7C 09                     JL 0x00660e87
00660E7E  3C 08                     CMP AL,0x8
00660E80  7D 05                     JGE 0x00660e87
00660E82  88 45 C4                  MOV byte ptr [EBP + -0x3c],AL
00660E85  EB 06                     JMP 0x00660e8d
LAB_00660e87:
00660E87  8A 4F 24                  MOV CL,byte ptr [EDI + 0x24]
00660E8A  88 4D C4                  MOV byte ptr [EBP + -0x3c],CL
LAB_00660e8d:
00660E8D  8D 56 15                  LEA EDX,[ESI + 0x15]
00660E90  6A 0E                     PUSH 0xe
00660E92  8D 45 C5                  LEA EAX,[EBP + -0x3b]
00660E95  52                        PUSH EDX
00660E96  50                        PUSH EAX
00660E97  E8 A4 D4 0C 00            CALL 0x0072e340
00660E9C  83 C4 0C                  ADD ESP,0xc
00660E9F  85 DB                     TEST EBX,EBX
00660EA1  75 06                     JNZ 0x00660ea9
00660EA3  0F BF 47 7F               MOVSX EAX,word ptr [EDI + 0x7f]
00660EA7  EB 02                     JMP 0x00660eab
LAB_00660ea9:
00660EA9  33 C0                     XOR EAX,EAX
LAB_00660eab:
00660EAB  6A 01                     PUSH 0x1
00660EAD  8D 4D A8                  LEA ECX,[EBP + -0x58]
00660EB0  50                        PUSH EAX
00660EB1  51                        PUSH ECX
00660EB2  8B 8F 84 02 00 00         MOV ECX,dword ptr [EDI + 0x284]
00660EB8  E8 01 48 DA FF            CALL 0x004056be
00660EBD  8B 55 F8                  MOV EDX,dword ptr [EBP + -0x8]
00660EC0  8B 7D FC                  MOV EDI,dword ptr [EBP + -0x4]
LAB_00660ec3:
00660EC3  66 8B 4F 7B               MOV CX,word ptr [EDI + 0x7b]
00660EC7  43                        INC EBX
00660EC8  66 8B C1                  MOV AX,CX
00660ECB  66 48                     DEC AX
00660ECD  66 F7 D8                  NEG AX
00660ED0  1B C0                     SBB EAX,EAX
00660ED2  83 E0 02                  AND EAX,0x2
00660ED5  40                        INC EAX
00660ED6  3B D8                     CMP EBX,EAX
00660ED8  0F 8C EB FE FF FF         JL 0x00660dc9
LAB_00660ede:
00660EDE  8B 87 0B 02 00 00         MOV EAX,dword ptr [EDI + 0x20b]
00660EE4  42                        INC EDX
00660EE5  89 55 F8                  MOV dword ptr [EBP + -0x8],EDX
00660EE8  8B 48 0C                  MOV ECX,dword ptr [EAX + 0xc]
00660EEB  3B D1                     CMP EDX,ECX
00660EED  0F 8C A9 FE FF FF         JL 0x00660d9c
00660EF3  5E                        POP ESI
00660EF4  5B                        POP EBX
LAB_00660ef5:
00660EF5  5F                        POP EDI
00660EF6  8B E5                     MOV ESP,EBP
00660EF8  5D                        POP EBP
00660EF9  C3                        RET
