FUN_004ceb00:
004CEB00  55                        PUSH EBP
004CEB01  8B EC                     MOV EBP,ESP
004CEB03  83 EC 68                  SUB ESP,0x68
004CEB06  A1 38 2A 80 00            MOV EAX,[0x00802a38]
004CEB0B  53                        PUSH EBX
004CEB0C  8B D9                     MOV EBX,ECX
004CEB0E  56                        PUSH ESI
004CEB0F  8B 80 E4 00 00 00         MOV EAX,dword ptr [EAX + 0xe4]
004CEB15  57                        PUSH EDI
004CEB16  8B 8B CC 03 00 00         MOV ECX,dword ptr [EBX + 0x3cc]
004CEB1C  8B B3 D0 03 00 00         MOV ESI,dword ptr [EBX + 0x3d0]
004CEB22  03 CE                     ADD ECX,ESI
004CEB24  33 FF                     XOR EDI,EDI
004CEB26  3B C1                     CMP EAX,ECX
004CEB28  89 7D F4                  MOV dword ptr [EBP + -0xc],EDI
004CEB2B  0F 82 43 06 00 00         JC 0x004cf174
004CEB31  89 83 CC 03 00 00         MOV dword ptr [EBX + 0x3cc],EAX
004CEB37  8B 83 D0 04 00 00         MOV EAX,dword ptr [EBX + 0x4d0]
004CEB3D  48                        DEC EAX
004CEB3E  83 F8 04                  CMP EAX,0x4
004CEB41  0F 87 2D 06 00 00         JA 0x004cf174
switchD_004ceb47::switchD:
004CEB47  FF 24 85 80 F1 4C 00      JMP dword ptr [EAX*0x4 + 0x4cf180]
switchD_004ceb47::caseD_1:
004CEB4E  8B 83 AC 05 00 00         MOV EAX,dword ptr [EBX + 0x5ac]
004CEB54  83 C0 CE                  ADD EAX,-0x32
004CEB57  83 F8 2A                  CMP EAX,0x2a
004CEB5A  0F 87 14 06 00 00         JA 0x004cf174
004CEB60  33 D2                     XOR EDX,EDX
004CEB62  8A 90 A0 F1 4C 00         MOV DL,byte ptr [EAX + 0x4cf1a0]
switchD_004ceb68::switchD:
004CEB68  FF 24 95 94 F1 4C 00      JMP dword ptr [EDX*0x4 + 0x4cf194]
switchD_004ceb68::caseD_40:
004CEB6F  6A 0E                     PUSH 0xe
004CEB71  8D 8B D5 01 00 00         LEA ECX,[EBX + 0x1d5]
004CEB77  E8 33 57 F3 FF            CALL 0x004042af
004CEB7C  8B 8B F5 01 00 00         MOV ECX,dword ptr [EBX + 0x1f5]
004CEB82  3B 81 0C 02 00 00         CMP EAX,dword ptr [ECX + 0x20c]
004CEB88  0F 85 E6 05 00 00         JNZ 0x004cf174
switchD_004ceb68::caseD_32:
004CEB8E  8B 45 F4                  MOV EAX,dword ptr [EBP + -0xc]
004CEB91  89 BB DC 04 00 00         MOV dword ptr [EBX + 0x4dc],EDI
004CEB97  5F                        POP EDI
004CEB98  C7 83 D0 04 00 00 02 00 00 00  MOV dword ptr [EBX + 0x4d0],0x2
004CEBA2  5E                        POP ESI
004CEBA3  5B                        POP EBX
004CEBA4  8B E5                     MOV ESP,EBP
004CEBA6  5D                        POP EBP
004CEBA7  C2 04 00                  RET 0x4
switchD_004ceb47::caseD_2:
004CEBAA  8B 53 24                  MOV EDX,dword ptr [EBX + 0x24]
004CEBAD  57                        PUSH EDI
004CEBAE  52                        PUSH EDX
004CEBAF  E8 D3 42 F3 FF            CALL 0x00402e87
004CEBB4  83 C4 08                  ADD ESP,0x8
004CEBB7  85 C0                     TEST EAX,EAX
004CEBB9  0F 84 08 02 00 00         JZ 0x004cedc7
004CEBBF  8B 83 AC 05 00 00         MOV EAX,dword ptr [EBX + 0x5ac]
004CEBC5  83 F8 32                  CMP EAX,0x32
004CEBC8  74 0A                     JZ 0x004cebd4
004CEBCA  83 F8 5C                  CMP EAX,0x5c
004CEBCD  BA 01 00 00 00            MOV EDX,0x1
004CEBD2  75 05                     JNZ 0x004cebd9
LAB_004cebd4:
004CEBD4  BA 02 00 00 00            MOV EDX,0x2
LAB_004cebd9:
004CEBD9  8B 8B B4 05 00 00         MOV ECX,dword ptr [EBX + 0x5b4]
004CEBDF  89 4D F8                  MOV dword ptr [EBP + -0x8],ECX
004CEBE2  8D 34 11                  LEA ESI,[ECX + EDX*0x1]
004CEBE5  3B CE                     CMP ECX,ESI
004CEBE7  89 75 E8                  MOV dword ptr [EBP + -0x18],ESI
004CEBEA  0F 8D 84 05 00 00         JGE 0x004cf174
004CEBF0  8B 83 B0 05 00 00         MOV EAX,dword ptr [EBX + 0x5b0]
004CEBF6  66 8B 3D 40 B2 7F 00      MOV DI,word ptr [0x007fb240]
004CEBFD  03 D0                     ADD EDX,EAX
004CEBFF  89 45 EC                  MOV dword ptr [EBP + -0x14],EAX
004CEC02  89 55 F0                  MOV dword ptr [EBP + -0x10],EDX
LAB_004cec05:
004CEC05  3B C2                     CMP EAX,EDX
004CEC07  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
004CEC0A  7D 78                     JGE 0x004cec84
004CEC0C  66 8B 93 B8 05 00 00      MOV DX,word ptr [EBX + 0x5b8]
004CEC13  66 42                     INC DX
004CEC15  89 55 08                  MOV dword ptr [EBP + 0x8],EDX
004CEC18  EB 03                     JMP 0x004cec1d
LAB_004cec1a:
004CEC1A  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
LAB_004cec1d:
004CEC1D  66 85 C0                  TEST AX,AX
004CEC20  7C 73                     JL 0x004cec95
004CEC22  66 3B C7                  CMP AX,DI
004CEC25  7D 6E                     JGE 0x004cec95
004CEC27  66 85 C9                  TEST CX,CX
004CEC2A  7C 69                     JL 0x004cec95
004CEC2C  66 3B 0D 42 B2 7F 00      CMP CX,word ptr [0x007fb242]
004CEC33  7D 60                     JGE 0x004cec95
004CEC35  66 85 D2                  TEST DX,DX
004CEC38  7C 5B                     JL 0x004cec95
004CEC3A  66 3B 15 44 B2 7F 00      CMP DX,word ptr [0x007fb244]
004CEC41  7D 52                     JGE 0x004cec95
004CEC43  0F BF 35 46 B2 7F 00      MOVSX ESI,word ptr [0x007fb246]
004CEC4A  0F BF D2                  MOVSX EDX,DX
004CEC4D  0F AF D6                  IMUL EDX,ESI
004CEC50  0F BF F7                  MOVSX ESI,DI
004CEC53  0F BF F9                  MOVSX EDI,CX
004CEC56  0F AF F7                  IMUL ESI,EDI
004CEC59  03 D6                     ADD EDX,ESI
004CEC5B  0F BF F0                  MOVSX ESI,AX
004CEC5E  03 D6                     ADD EDX,ESI
004CEC60  8B 35 48 B2 7F 00         MOV ESI,dword ptr [0x007fb248]
004CEC66  83 3C D6 00               CMP dword ptr [ESI + EDX*0x8],0x0
004CEC6A  74 29                     JZ 0x004cec95
004CEC6C  8B 55 F0                  MOV EDX,dword ptr [EBP + -0x10]
004CEC6F  66 8B 3D 40 B2 7F 00      MOV DI,word ptr [0x007fb240]
004CEC76  40                        INC EAX
004CEC77  3B C2                     CMP EAX,EDX
004CEC79  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
004CEC7C  7C 9C                     JL 0x004cec1a
004CEC7E  8B 45 EC                  MOV EAX,dword ptr [EBP + -0x14]
004CEC81  8B 75 E8                  MOV ESI,dword ptr [EBP + -0x18]
LAB_004cec84:
004CEC84  41                        INC ECX
004CEC85  3B CE                     CMP ECX,ESI
004CEC87  89 4D F8                  MOV dword ptr [EBP + -0x8],ECX
004CEC8A  0F 8D E4 04 00 00         JGE 0x004cf174
004CEC90  E9 70 FF FF FF            JMP 0x004cec05
LAB_004cec95:
004CEC95  89 83 E0 04 00 00         MOV dword ptr [EBX + 0x4e0],EAX
004CEC9B  8B 83 B8 05 00 00         MOV EAX,dword ptr [EBX + 0x5b8]
004CECA1  BE 01 00 00 00            MOV ESI,0x1
004CECA6  40                        INC EAX
004CECA7  89 B3 DC 04 00 00         MOV dword ptr [EBX + 0x4dc],ESI
004CECAD  89 8B E4 04 00 00         MOV dword ptr [EBX + 0x4e4],ECX
004CECB3  89 83 E8 04 00 00         MOV dword ptr [EBX + 0x4e8],EAX
004CECB9  A1 CC 0B 80 00            MOV EAX,[0x00800bcc]
004CECBE  85 C0                     TEST EAX,EAX
004CECC0  75 07                     JNZ 0x004cecc9
004CECC2  8B CB                     MOV ECX,EBX
004CECC4  E8 EC 45 F3 FF            CALL 0x004032b5
LAB_004cecc9:
004CECC9  8B 8B E8 04 00 00         MOV ECX,dword ptr [EBX + 0x4e8]
004CECCF  8B 93 E4 04 00 00         MOV EDX,dword ptr [EBX + 0x4e4]
004CECD5  8B 83 E0 04 00 00         MOV EAX,dword ptr [EBX + 0x4e0]
004CECDB  51                        PUSH ECX
004CECDC  8B 0D CC 0B 80 00         MOV ECX,dword ptr [0x00800bcc]
004CECE2  52                        PUSH EDX
004CECE3  50                        PUSH EAX
004CECE4  E8 99 28 F3 FF            CALL 0x00401582
004CECE9  6A 00                     PUSH 0x0
004CECEB  8B CB                     MOV ECX,EBX
004CECED  C7 83 D0 04 00 00 03 00 00 00  MOV dword ptr [EBX + 0x4d0],0x3
004CECF7  89 B3 D0 03 00 00         MOV dword ptr [EBX + 0x3d0],ESI
004CECFD  E8 F5 3F F3 FF            CALL 0x00402cf7
004CED02  8B 83 AC 05 00 00         MOV EAX,dword ptr [EBX + 0x5ac]
004CED08  83 F8 5C                  CMP EAX,0x5c
004CED0B  75 1D                     JNZ 0x004ced2a
004CED0D  8B 13                     MOV EDX,dword ptr [EBX]
004CED0F  68 9B 03 00 00            PUSH 0x39b
004CED14  6A 03                     PUSH 0x3
004CED16  8B CB                     MOV ECX,EBX
004CED18  FF 92 90 00 00 00         CALL dword ptr [EDX + 0x90]
004CED1E  8B 45 F4                  MOV EAX,dword ptr [EBP + -0xc]
004CED21  5F                        POP EDI
004CED22  5E                        POP ESI
004CED23  5B                        POP EBX
004CED24  8B E5                     MOV ESP,EBP
004CED26  5D                        POP EBP
004CED27  C2 04 00                  RET 0x4
LAB_004ced2a:
004CED2A  83 F8 32                  CMP EAX,0x32
004CED2D  75 50                     JNZ 0x004ced7f
004CED2F  8A 83 3D 02 00 00         MOV AL,byte ptr [EBX + 0x23d]
004CED35  8B 0D 74 A1 7F 00         MOV ECX,dword ptr [0x007fa174]
004CED3B  50                        PUSH EAX
004CED3C  E8 76 5C F3 FF            CALL 0x004049b7
004CED41  3C 02                     CMP AL,0x2
004CED43  75 1D                     JNZ 0x004ced62
004CED45  8B 13                     MOV EDX,dword ptr [EBX]
004CED47  68 C1 02 00 00            PUSH 0x2c1
004CED4C  6A 03                     PUSH 0x3
004CED4E  8B CB                     MOV ECX,EBX
004CED50  FF 92 90 00 00 00         CALL dword ptr [EDX + 0x90]
004CED56  8B 45 F4                  MOV EAX,dword ptr [EBP + -0xc]
004CED59  5F                        POP EDI
004CED5A  5E                        POP ESI
004CED5B  5B                        POP EBX
004CED5C  8B E5                     MOV ESP,EBP
004CED5E  5D                        POP EBP
004CED5F  C2 04 00                  RET 0x4
LAB_004ced62:
004CED62  8B 03                     MOV EAX,dword ptr [EBX]
004CED64  68 F9 01 00 00            PUSH 0x1f9
004CED69  6A 03                     PUSH 0x3
004CED6B  8B CB                     MOV ECX,EBX
004CED6D  FF 90 90 00 00 00         CALL dword ptr [EAX + 0x90]
004CED73  8B 45 F4                  MOV EAX,dword ptr [EBP + -0xc]
004CED76  5F                        POP EDI
004CED77  5E                        POP ESI
004CED78  5B                        POP EBX
004CED79  8B E5                     MOV ESP,EBP
004CED7B  5D                        POP EBP
004CED7C  C2 04 00                  RET 0x4
LAB_004ced7f:
004CED7F  83 F8 40                  CMP EAX,0x40
004CED82  75 1D                     JNZ 0x004ceda1
004CED84  8B 13                     MOV EDX,dword ptr [EBX]
004CED86  68 54 02 00 00            PUSH 0x254
004CED8B  6A 03                     PUSH 0x3
004CED8D  8B CB                     MOV ECX,EBX
004CED8F  FF 92 90 00 00 00         CALL dword ptr [EDX + 0x90]
004CED95  8B 45 F4                  MOV EAX,dword ptr [EBP + -0xc]
004CED98  5F                        POP EDI
004CED99  5E                        POP ESI
004CED9A  5B                        POP EBX
004CED9B  8B E5                     MOV ESP,EBP
004CED9D  5D                        POP EBP
004CED9E  C2 04 00                  RET 0x4
LAB_004ceda1:
004CEDA1  83 F8 49                  CMP EAX,0x49
004CEDA4  0F 85 CA 03 00 00         JNZ 0x004cf174
004CEDAA  8B 03                     MOV EAX,dword ptr [EBX]
004CEDAC  68 20 03 00 00            PUSH 0x320
004CEDB1  6A 03                     PUSH 0x3
004CEDB3  8B CB                     MOV ECX,EBX
004CEDB5  FF 90 90 00 00 00         CALL dword ptr [EAX + 0x90]
004CEDBB  8B 45 F4                  MOV EAX,dword ptr [EBP + -0xc]
004CEDBE  5F                        POP EDI
004CEDBF  5E                        POP ESI
004CEDC0  5B                        POP EBX
004CEDC1  8B E5                     MOV ESP,EBP
004CEDC3  5D                        POP EBP
004CEDC4  C2 04 00                  RET 0x4
LAB_004cedc7:
004CEDC7  8B 0D 98 17 81 00         MOV ECX,dword ptr [0x00811798]
004CEDCD  3B CF                     CMP ECX,EDI
004CEDCF  0F 84 9F 03 00 00         JZ 0x004cf174
004CEDD5  8B 53 24                  MOV EDX,dword ptr [EBX + 0x24]
004CEDD8  6A 08                     PUSH 0x8
004CEDDA  52                        PUSH EDX
004CEDDB  E8 14 3D F3 FF            CALL 0x00402af4
004CEDE0  8B 45 F4                  MOV EAX,dword ptr [EBP + -0xc]
004CEDE3  5F                        POP EDI
004CEDE4  5E                        POP ESI
004CEDE5  5B                        POP EBX
004CEDE6  8B E5                     MOV ESP,EBP
004CEDE8  5D                        POP EBP
004CEDE9  C2 04 00                  RET 0x4
switchD_004ceb47::caseD_3:
004CEDEC  8B 83 AC 05 00 00         MOV EAX,dword ptr [EBX + 0x5ac]
004CEDF2  83 F8 32                  CMP EAX,0x32
004CEDF5  74 0A                     JZ 0x004cee01
004CEDF7  83 F8 5C                  CMP EAX,0x5c
004CEDFA  BF 01 00 00 00            MOV EDI,0x1
004CEDFF  75 05                     JNZ 0x004cee06
LAB_004cee01:
004CEE01  BF 02 00 00 00            MOV EDI,0x2
LAB_004cee06:
004CEE06  8D B3 D5 01 00 00         LEA ESI,[EBX + 0x1d5]
004CEE0C  6A 09                     PUSH 0x9
004CEE0E  8B CE                     MOV ECX,ESI
004CEE10  E8 9A 54 F3 FF            CALL 0x004042af
004CEE15  8B 8B F5 01 00 00         MOV ECX,dword ptr [EBX + 0x1f5]
004CEE1B  8B 91 54 01 00 00         MOV EDX,dword ptr [ECX + 0x154]
004CEE21  03 D7                     ADD EDX,EDI
004CEE23  3B C2                     CMP EAX,EDX
004CEE25  7C 15                     JL 0x004cee3c
004CEE27  8B 83 FF 05 00 00         MOV EAX,dword ptr [EBX + 0x5ff]
004CEE2D  8B 48 1C                  MOV ECX,dword ptr [EAX + 0x1c]
004CEE30  F6 C5 40                  TEST CH,0x40
004CEE33  75 07                     JNZ 0x004cee3c
004CEE35  8B CB                     MOV ECX,EBX
004CEE37  E8 E2 3F F3 FF            CALL 0x00402e1e
LAB_004cee3c:
004CEE3C  6A 0E                     PUSH 0xe
004CEE3E  8B CE                     MOV ECX,ESI
004CEE40  E8 6A 54 F3 FF            CALL 0x004042af
004CEE45  8B 8B F5 01 00 00         MOV ECX,dword ptr [EBX + 0x1f5]
004CEE4B  3B 81 0C 02 00 00         CMP EAX,dword ptr [ECX + 0x20c]
004CEE51  0F 85 1D 03 00 00         JNZ 0x004cf174
004CEE57  8B 93 E8 04 00 00         MOV EDX,dword ptr [EBX + 0x4e8]
004CEE5D  8B 83 E4 04 00 00         MOV EAX,dword ptr [EBX + 0x4e4]
004CEE63  8B 8B E0 04 00 00         MOV ECX,dword ptr [EBX + 0x4e0]
004CEE69  52                        PUSH EDX
004CEE6A  50                        PUSH EAX
004CEE6B  51                        PUSH ECX
004CEE6C  8B 0D CC 0B 80 00         MOV ECX,dword ptr [0x00800bcc]
004CEE72  E8 5D 2F F3 FF            CALL 0x00401dd4
004CEE77  B9 11 00 00 00            MOV ECX,0x11
004CEE7C  33 C0                     XOR EAX,EAX
004CEE7E  8D 7D 98                  LEA EDI,[EBP + -0x68]
004CEE81  8D 55 E4                  LEA EDX,[EBP + -0x1c]
004CEE84  F3 AB                     STOSD.REP ES:EDI
004CEE86  AA                        STOSB ES:EDI
004CEE87  8D 45 F8                  LEA EAX,[EBP + -0x8]
004CEE8A  52                        PUSH EDX
004CEE8B  8D 4D FC                  LEA ECX,[EBP + -0x4]
004CEE8E  50                        PUSH EAX
004CEE8F  51                        PUSH ECX
004CEE90  8B CB                     MOV ECX,EBX
004CEE92  C7 83 DC 04 00 00 00 00 00 00  MOV dword ptr [EBX + 0x4dc],0x0
004CEE9C  E8 F4 68 F3 FF            CALL 0x00405795
004CEEA1  66 8B 8B E0 04 00 00      MOV CX,word ptr [EBX + 0x4e0]
004CEEA8  B8 01 00 00 00            MOV EAX,0x1
004CEEAD  89 45 A4                  MOV dword ptr [EBP + -0x5c],EAX
004CEEB0  89 45 A0                  MOV dword ptr [EBP + -0x60],EAX
004CEEB3  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
004CEEB6  8B 53 24                  MOV EDX,dword ptr [EBX + 0x24]
004CEEB9  89 45 B0                  MOV dword ptr [EBP + -0x50],EAX
004CEEBC  66 8B 83 E4 04 00 00      MOV AX,word ptr [EBX + 0x4e4]
004CEEC3  66 89 45 B6               MOV word ptr [EBP + -0x4a],AX
004CEEC7  66 8B 45 FC               MOV AX,word ptr [EBP + -0x4]
004CEECB  66 89 4D B4               MOV word ptr [EBP + -0x4c],CX
004CEECF  66 8B 8B E8 04 00 00      MOV CX,word ptr [EBX + 0x4e8]
004CEED6  66 89 45 BA               MOV word ptr [EBP + -0x46],AX
004CEEDA  66 8B 45 E4               MOV AX,word ptr [EBP + -0x1c]
004CEEDE  66 89 4D B8               MOV word ptr [EBP + -0x48],CX
004CEEE2  66 8B 4D F8               MOV CX,word ptr [EBP + -0x8]
004CEEE6  66 89 45 BE               MOV word ptr [EBP + -0x42],AX
004CEEEA  8B 83 71 03 00 00         MOV EAX,dword ptr [EBX + 0x371]
004CEEF0  66 89 4D BC               MOV word ptr [EBP + -0x44],CX
004CEEF4  66 8B 4B 32               MOV CX,word ptr [EBX + 0x32]
004CEEF8  85 C0                     TEST EAX,EAX
004CEEFA  C7 45 98 14 00 00 00      MOV dword ptr [EBP + -0x68],0x14
004CEF01  89 55 9C                  MOV dword ptr [EBP + -0x64],EDX
004CEF04  66 89 4D C0               MOV word ptr [EBP + -0x40],CX
004CEF08  66 C7 45 C2 FE FF         MOV word ptr [EBP + -0x3e],0xfffe
004CEF0E  7C 04                     JL 0x004cef14
004CEF10  66 89 45 C2               MOV word ptr [EBP + -0x3e],AX
LAB_004cef14:
004CEF14  8B 83 2C 04 00 00         MOV EAX,dword ptr [EBX + 0x42c]
004CEF1A  83 C9 FF                  OR ECX,0xffffffff
004CEF1D  85 C0                     TEST EAX,EAX
004CEF1F  74 23                     JZ 0x004cef44
004CEF21  66 8B 83 30 04 00 00      MOV AX,word ptr [EBX + 0x430]
004CEF28  66 89 45 C4               MOV word ptr [EBP + -0x3c],AX
004CEF2C  66 8B 83 34 04 00 00      MOV AX,word ptr [EBX + 0x434]
004CEF33  66 89 45 C6               MOV word ptr [EBP + -0x3a],AX
004CEF37  66 8B 83 38 04 00 00      MOV AX,word ptr [EBX + 0x438]
004CEF3E  66 89 45 C8               MOV word ptr [EBP + -0x38],AX
004CEF42  EB 0C                     JMP 0x004cef50
LAB_004cef44:
004CEF44  66 89 4D C8               MOV word ptr [EBP + -0x38],CX
004CEF48  66 89 4D C6               MOV word ptr [EBP + -0x3a],CX
004CEF4C  66 89 4D C4               MOV word ptr [EBP + -0x3c],CX
LAB_004cef50:
004CEF50  8B 83 79 03 00 00         MOV EAX,dword ptr [EBX + 0x379]
004CEF56  89 55 AC                  MOV dword ptr [EBP + -0x54],EDX
004CEF59  3D FF 00 00 00            CMP EAX,0xff
004CEF5E  74 03                     JZ 0x004cef63
004CEF60  89 45 AC                  MOV dword ptr [EBP + -0x54],EAX
LAB_004cef63:
004CEF63  8D BB 7D 03 00 00         LEA EDI,[EBX + 0x37d]
004CEF69  33 C0                     XOR EAX,EAX
004CEF6B  F2 AE                     SCASB.REPNE ES:EDI
004CEF6D  F7 D1                     NOT ECX
004CEF6F  2B F9                     SUB EDI,ECX
004CEF71  8D 55 CA                  LEA EDX,[EBP + -0x36]
004CEF74  8B C1                     MOV EAX,ECX
004CEF76  8B F7                     MOV ESI,EDI
004CEF78  8B FA                     MOV EDI,EDX
004CEF7A  8D 55 98                  LEA EDX,[EBP + -0x68]
004CEF7D  C1 E9 02                  SHR ECX,0x2
004CEF80  F3 A5                     MOVSD.REP ES:EDI,ESI
004CEF82  8B C8                     MOV ECX,EAX
004CEF84  6A 00                     PUSH 0x0
004CEF86  83 E1 03                  AND ECX,0x3
004CEF89  8D 45 E0                  LEA EAX,[EBP + -0x20]
004CEF8C  F3 A4                     MOVSB.REP ES:EDI,ESI
004CEF8E  8B 8B 75 03 00 00         MOV ECX,dword ptr [EBX + 0x375]
004CEF94  52                        PUSH EDX
004CEF95  50                        PUSH EAX
004CEF96  89 4D D9                  MOV dword ptr [EBP + -0x27],ECX
004CEF99  8B 0D 38 2A 80 00         MOV ECX,dword ptr [0x00802a38]
004CEF9F  6A 00                     PUSH 0x0
004CEFA1  6A 14                     PUSH 0x14
004CEFA3  E8 1A 2C F3 FF            CALL 0x00401bc2
004CEFA8  8B 4D E0                  MOV ECX,dword ptr [EBP + -0x20]
004CEFAB  8B 43 10                  MOV EAX,dword ptr [EBX + 0x10]
004CEFAE  8B 51 18                  MOV EDX,dword ptr [ECX + 0x18]
004CEFB1  33 C9                     XOR ECX,ECX
004CEFB3  89 93 D4 04 00 00         MOV dword ptr [EBX + 0x4d4],EDX
004CEFB9  C7 83 D8 04 00 00 00 00 00 00  MOV dword ptr [EBX + 0x4d8],0x0
004CEFC3  8A 88 2D 11 00 00         MOV CL,byte ptr [EAX + 0x112d]
004CEFC9  8B 43 24                  MOV EAX,dword ptr [EBX + 0x24]
004CEFCC  3B C1                     CMP EAX,ECX
004CEFCE  75 59                     JNZ 0x004cf029
004CEFD0  8B 93 FD 01 00 00         MOV EDX,dword ptr [EBX + 0x1fd]
004CEFD6  8B 83 F9 01 00 00         MOV EAX,dword ptr [EBX + 0x1f9]
004CEFDC  52                        PUSH EDX
004CEFDD  50                        PUSH EAX
004CEFDE  6A 00                     PUSH 0x0
004CEFE0  E8 76 3D F3 FF            CALL 0x00402d5b
004CEFE5  8A 4B 24                  MOV CL,byte ptr [EBX + 0x24]
004CEFE8  83 C4 0C                  ADD ESP,0xc
004CEFEB  51                        PUSH ECX
004CEFEC  8B 0D 74 A1 7F 00         MOV ECX,dword ptr [0x007fa174]
004CEFF2  E8 C0 59 F3 FF            CALL 0x004049b7
004CEFF7  25 FF 00 00 00            AND EAX,0xff
004CEFFC  48                        DEC EAX
004CEFFD  74 1C                     JZ 0x004cf01b
004CEFFF  48                        DEC EAX
004CF000  74 09                     JZ 0x004cf00b
004CF002  48                        DEC EAX
004CF003  75 24                     JNZ 0x004cf029
004CF005  8B 13                     MOV EDX,dword ptr [EBX]
004CF007  6A 67                     PUSH 0x67
004CF009  EB 14                     JMP 0x004cf01f
LAB_004cf00b:
004CF00B  8B 03                     MOV EAX,dword ptr [EBX]
004CF00D  6A 66                     PUSH 0x66
004CF00F  6A 06                     PUSH 0x6
004CF011  8B CB                     MOV ECX,EBX
004CF013  FF 90 90 00 00 00         CALL dword ptr [EAX + 0x90]
004CF019  EB 0E                     JMP 0x004cf029
LAB_004cf01b:
004CF01B  8B 13                     MOV EDX,dword ptr [EBX]
004CF01D  6A 65                     PUSH 0x65
LAB_004cf01f:
004CF01F  6A 06                     PUSH 0x6
004CF021  8B CB                     MOV ECX,EBX
004CF023  FF 92 90 00 00 00         CALL dword ptr [EDX + 0x90]
FUN_004ceb00::cf_common_exit_004CF029:
004CF029  6A 01                     PUSH 0x1
004CF02B  8B CB                     MOV ECX,EBX
004CF02D  C7 83 D0 04 00 00 04 00 00 00  MOV dword ptr [EBX + 0x4d0],0x4
004CF037  C7 83 D0 03 00 00 05 00 00 00  MOV dword ptr [EBX + 0x3d0],0x5
004CF041  E8 B1 3C F3 FF            CALL 0x00402cf7
004CF046  8B CB                     MOV ECX,EBX
004CF048  E8 C9 45 F3 FF            CALL 0x00403616
004CF04D  8B 45 F4                  MOV EAX,dword ptr [EBP + -0xc]
004CF050  5F                        POP EDI
004CF051  5E                        POP ESI
004CF052  5B                        POP EBX
004CF053  8B E5                     MOV ESP,EBP
004CF055  5D                        POP EBP
004CF056  C2 04 00                  RET 0x4
switchD_004ceb47::caseD_4:
004CF059  39 BB D8 04 00 00         CMP dword ptr [EBX + 0x4d8],EDI
004CF05F  0F 84 0F 01 00 00         JZ 0x004cf174
004CF065  8B 83 AC 05 00 00         MOV EAX,dword ptr [EBX + 0x5ac]
004CF06B  8D 70 CE                  LEA ESI,[EAX + -0x32]
004CF06E  83 FE 2A                  CMP ESI,0x2a
004CF071  0F 87 F4 00 00 00         JA 0x004cf16b
004CF077  33 C9                     XOR ECX,ECX
004CF079  8A 8E D8 F1 4C 00         MOV CL,byte ptr [ESI + 0x4cf1d8]
switchD_004cf07f::switchD:
004CF07F  FF 24 8D CC F1 4C 00      JMP dword ptr [ECX*0x4 + 0x4cf1cc]
switchD_004cf07f::caseD_32:
004CF086  83 F8 5C                  CMP EAX,0x5c
004CF089  C7 83 D0 04 00 00 05 00 00 00  MOV dword ptr [EBX + 0x4d0],0x5
004CF093  C7 83 D0 03 00 00 01 00 00 00  MOV dword ptr [EBX + 0x3d0],0x1
004CF09D  75 16                     JNZ 0x004cf0b5
004CF09F  8B 13                     MOV EDX,dword ptr [EBX]
004CF0A1  68 9C 03 00 00            PUSH 0x39c
004CF0A6  6A 03                     PUSH 0x3
004CF0A8  8B CB                     MOV ECX,EBX
004CF0AA  FF 92 90 00 00 00         CALL dword ptr [EDX + 0x90]
004CF0B0  E9 B6 00 00 00            JMP 0x004cf16b
LAB_004cf0b5:
004CF0B5  83 F8 32                  CMP EAX,0x32
004CF0B8  75 3F                     JNZ 0x004cf0f9
004CF0BA  8A 83 3D 02 00 00         MOV AL,byte ptr [EBX + 0x23d]
004CF0C0  8B 0D 74 A1 7F 00         MOV ECX,dword ptr [0x007fa174]
004CF0C6  50                        PUSH EAX
004CF0C7  E8 EB 58 F3 FF            CALL 0x004049b7
004CF0CC  3C 02                     CMP AL,0x2
004CF0CE  75 16                     JNZ 0x004cf0e6
004CF0D0  8B 13                     MOV EDX,dword ptr [EBX]
004CF0D2  68 C2 02 00 00            PUSH 0x2c2
004CF0D7  6A 03                     PUSH 0x3
004CF0D9  8B CB                     MOV ECX,EBX
004CF0DB  FF 92 90 00 00 00         CALL dword ptr [EDX + 0x90]
004CF0E1  E9 85 00 00 00            JMP 0x004cf16b
LAB_004cf0e6:
004CF0E6  8B 03                     MOV EAX,dword ptr [EBX]
004CF0E8  68 FA 01 00 00            PUSH 0x1fa
004CF0ED  6A 03                     PUSH 0x3
004CF0EF  8B CB                     MOV ECX,EBX
004CF0F1  FF 90 90 00 00 00         CALL dword ptr [EAX + 0x90]
004CF0F7  EB 72                     JMP 0x004cf16b
LAB_004cf0f9:
004CF0F9  83 F8 40                  CMP EAX,0x40
004CF0FC  75 13                     JNZ 0x004cf111
004CF0FE  8B 13                     MOV EDX,dword ptr [EBX]
004CF100  68 55 02 00 00            PUSH 0x255
004CF105  6A 03                     PUSH 0x3
004CF107  8B CB                     MOV ECX,EBX
004CF109  FF 92 90 00 00 00         CALL dword ptr [EDX + 0x90]
004CF10F  EB 5A                     JMP 0x004cf16b
LAB_004cf111:
004CF111  83 F8 49                  CMP EAX,0x49
004CF114  75 55                     JNZ 0x004cf16b
004CF116  8B 03                     MOV EAX,dword ptr [EBX]
004CF118  68 21 03 00 00            PUSH 0x321
004CF11D  6A 03                     PUSH 0x3
004CF11F  8B CB                     MOV ECX,EBX
004CF121  FF 90 90 00 00 00         CALL dword ptr [EAX + 0x90]
004CF127  EB 42                     JMP 0x004cf16b
switchD_004ceb47::caseD_5:
004CF129  6A 0E                     PUSH 0xe
004CF12B  8D 8B D5 01 00 00         LEA ECX,[EBX + 0x1d5]
004CF131  E8 79 51 F3 FF            CALL 0x004042af
004CF136  8B 8B F5 01 00 00         MOV ECX,dword ptr [EBX + 0x1f5]
004CF13C  3B 81 0C 02 00 00         CMP EAX,dword ptr [ECX + 0x20c]
004CF142  75 30                     JNZ 0x004cf174
004CF144  8B 83 AC 05 00 00         MOV EAX,dword ptr [EBX + 0x5ac]
004CF14A  C7 83 D0 03 00 00 05 00 00 00  MOV dword ptr [EBX + 0x3d0],0x5
004CF154  83 F8 32                  CMP EAX,0x32
004CF157  74 05                     JZ 0x004cf15e
004CF159  83 F8 5C                  CMP EAX,0x5c
004CF15C  75 0D                     JNZ 0x004cf16b
switchD_004cf07f::caseD_40:
004CF15E  89 BB D0 04 00 00         MOV dword ptr [EBX + 0x4d0],EDI
004CF164  C7 45 F4 01 00 00 00      MOV dword ptr [EBP + -0xc],0x1
switchD_004cf07f::caseD_33:
004CF16B  6A 01                     PUSH 0x1
004CF16D  8B CB                     MOV ECX,EBX
004CF16F  E8 83 3B F3 FF            CALL 0x00402cf7
switchD_004ceb47::default:
004CF174  8B 45 F4                  MOV EAX,dword ptr [EBP + -0xc]
004CF177  5F                        POP EDI
004CF178  5E                        POP ESI
004CF179  5B                        POP EBX
004CF17A  8B E5                     MOV ESP,EBP
004CF17C  5D                        POP EBP
004CF17D  C2 04 00                  RET 0x4
