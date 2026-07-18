FUN_0043e9a0:
0043E9A0  55                        PUSH EBP
0043E9A1  8B EC                     MOV EBP,ESP
0043E9A3  83 EC 10                  SUB ESP,0x10
0043E9A6  0F BF 45 1C               MOVSX EAX,word ptr [EBP + 0x1c]
0043E9AA  53                        PUSH EBX
0043E9AB  56                        PUSH ESI
0043E9AC  0F BF 4D 20               MOVSX ECX,word ptr [EBP + 0x20]
0043E9B0  57                        PUSH EDI
0043E9B1  0F BF 7D 10               MOVSX EDI,word ptr [EBP + 0x10]
0043E9B5  89 7D FC                  MOV dword ptr [EBP + -0x4],EDI
0043E9B8  8D 5C 38 FF               LEA EBX,[EAX + EDI*0x1 + -0x1]
0043E9BC  0F BF 45 14               MOVSX EAX,word ptr [EBP + 0x14]
0043E9C0  89 45 1C                  MOV dword ptr [EBP + 0x1c],EAX
0043E9C3  89 5D F8                  MOV dword ptr [EBP + -0x8],EBX
0043E9C6  8D 54 01 FF               LEA EDX,[ECX + EAX*0x1 + -0x1]
0043E9CA  0F BF 45 18               MOVSX EAX,word ptr [EBP + 0x18]
0043E9CE  0F BF 4D 24               MOVSX ECX,word ptr [EBP + 0x24]
0043E9D2  89 55 14                  MOV dword ptr [EBP + 0x14],EDX
0043E9D5  8D 54 01 FF               LEA EDX,[ECX + EAX*0x1 + -0x1]
0043E9D9  33 C9                     XOR ECX,ECX
0043E9DB  3B F9                     CMP EDI,ECX
0043E9DD  89 4D 10                  MOV dword ptr [EBP + 0x10],ECX
0043E9E0  7D 05                     JGE 0x0043e9e7
0043E9E2  89 4D FC                  MOV dword ptr [EBP + -0x4],ECX
0043E9E5  8B F9                     MOV EDI,ECX
LAB_0043e9e7:
0043E9E7  0F BF 0D 40 B2 7F 00      MOVSX ECX,word ptr [0x007fb240]
0043E9EE  8D 71 FF                  LEA ESI,[ECX + -0x1]
0043E9F1  3B DE                     CMP EBX,ESI
0043E9F3  7E 03                     JLE 0x0043e9f8
0043E9F5  89 75 F8                  MOV dword ptr [EBP + -0x8],ESI
LAB_0043e9f8:
0043E9F8  8B 75 1C                  MOV ESI,dword ptr [EBP + 0x1c]
0043E9FB  85 F6                     TEST ESI,ESI
0043E9FD  7D 07                     JGE 0x0043ea06
0043E9FF  C7 45 1C 00 00 00 00      MOV dword ptr [EBP + 0x1c],0x0
LAB_0043ea06:
0043EA06  0F BF 35 42 B2 7F 00      MOVSX ESI,word ptr [0x007fb242]
0043EA0D  8B 5D 14                  MOV EBX,dword ptr [EBP + 0x14]
0043EA10  4E                        DEC ESI
0043EA11  3B DE                     CMP EBX,ESI
0043EA13  7E 03                     JLE 0x0043ea18
0043EA15  89 75 14                  MOV dword ptr [EBP + 0x14],ESI
LAB_0043ea18:
0043EA18  85 C0                     TEST EAX,EAX
0043EA1A  7D 02                     JGE 0x0043ea1e
0043EA1C  33 C0                     XOR EAX,EAX
LAB_0043ea1e:
0043EA1E  0F BF 35 44 B2 7F 00      MOVSX ESI,word ptr [0x007fb244]
0043EA25  4E                        DEC ESI
0043EA26  3B D6                     CMP EDX,ESI
0043EA28  7E 02                     JLE 0x0043ea2c
0043EA2A  8B D6                     MOV EDX,ESI
LAB_0043ea2c:
0043EA2C  0F BF 1D 46 B2 7F 00      MOVSX EBX,word ptr [0x007fb246]
0043EA33  0F AF 4D 1C               IMUL ECX,dword ptr [EBP + 0x1c]
0043EA37  8D 70 FF                  LEA ESI,[EAX + -0x1]
0043EA3A  0F AF F3                  IMUL ESI,EBX
0043EA3D  8B DF                     MOV EBX,EDI
0043EA3F  03 DE                     ADD EBX,ESI
0043EA41  03 CB                     ADD ECX,EBX
0043EA43  3B C2                     CMP EAX,EDX
0043EA45  0F 8F 0C 01 00 00         JG 0x0043eb57
0043EA4B  8B 5D F8                  MOV EBX,dword ptr [EBP + -0x8]
0043EA4E  2B D0                     SUB EDX,EAX
0043EA50  66 A1 40 B2 7F 00         MOV AX,[0x007fb240]
0043EA56  42                        INC EDX
0043EA57  89 55 18                  MOV dword ptr [EBP + 0x18],EDX
0043EA5A  EB 03                     JMP 0x0043ea5f
LAB_0043ea5c:
0043EA5C  8B 4D 24                  MOV ECX,dword ptr [EBP + 0x24]
LAB_0043ea5f:
0043EA5F  0F BF 15 46 B2 7F 00      MOVSX EDX,word ptr [0x007fb246]
0043EA66  8B 75 1C                  MOV ESI,dword ptr [EBP + 0x1c]
0043EA69  03 CA                     ADD ECX,EDX
0043EA6B  0F BF D0                  MOVSX EDX,AX
0043EA6E  89 4D 24                  MOV dword ptr [EBP + 0x24],ECX
0043EA71  2B CA                     SUB ECX,EDX
0043EA73  8B 55 14                  MOV EDX,dword ptr [EBP + 0x14]
0043EA76  3B F2                     CMP ESI,EDX
0043EA78  0F 8F CC 00 00 00         JG 0x0043eb4a
0043EA7E  2B D6                     SUB EDX,ESI
0043EA80  42                        INC EDX
0043EA81  89 55 20                  MOV dword ptr [EBP + 0x20],EDX
LAB_0043ea84:
0043EA84  0F BF F0                  MOVSX ESI,AX
0043EA87  03 CE                     ADD ECX,ESI
0043EA89  3B FB                     CMP EDI,EBX
0043EA8B  89 4D F4                  MOV dword ptr [EBP + -0xc],ECX
0043EA8E  0F 8F AC 00 00 00         JG 0x0043eb40
0043EA94  8D 3C CD F8 FF FF FF      LEA EDI,[ECX*0x8 + 0xfffffff8]
0043EA9B  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
0043EA9E  2B D9                     SUB EBX,ECX
0043EAA0  43                        INC EBX
LAB_0043eaa1:
0043EAA1  A1 48 B2 7F 00            MOV EAX,[0x007fb248]
0043EAA6  83 C7 08                  ADD EDI,0x8
0043EAA9  8B 34 07                  MOV ESI,dword ptr [EDI + EAX*0x1]
0043EAAC  85 F6                     TEST ESI,ESI
0043EAAE  74 77                     JZ 0x0043eb27
0043EAB0  0F BE 4D 08               MOVSX ECX,byte ptr [EBP + 0x8]
0043EAB4  39 4E 24                  CMP dword ptr [ESI + 0x24],ECX
0043EAB7  75 6E                     JNZ 0x0043eb27
0043EAB9  85 F6                     TEST ESI,ESI
0043EABB  74 6A                     JZ 0x0043eb27
0043EABD  8B 16                     MOV EDX,dword ptr [ESI]
0043EABF  8B CE                     MOV ECX,ESI
0043EAC1  FF 52 2C                  CALL dword ptr [EDX + 0x2c]
0043EAC4  3B 45 0C                  CMP EAX,dword ptr [EBP + 0xc]
0043EAC7  75 5E                     JNZ 0x0043eb27
0043EAC9  8B 06                     MOV EAX,dword ptr [ESI]
0043EACB  8B CE                     MOV ECX,ESI
0043EACD  FF 90 F8 00 00 00         CALL dword ptr [EAX + 0xf8]
0043EAD3  85 C0                     TEST EAX,EAX
0043EAD5  74 50                     JZ 0x0043eb27
0043EAD7  8B 4D 28                  MOV ECX,dword ptr [EBP + 0x28]
0043EADA  85 C9                     TEST ECX,ECX
0043EADC  74 31                     JZ 0x0043eb0f
0043EADE  8B 55 0C                  MOV EDX,dword ptr [EBP + 0xc]
0043EAE1  8D 42 C8                  LEA EAX,[EDX + -0x38]
0043EAE4  83 F8 26                  CMP EAX,0x26
0043EAE7  77 3E                     JA 0x0043eb27
0043EAE9  33 D2                     XOR EDX,EDX
0043EAEB  8A 90 6C EB 43 00         MOV DL,byte ptr [EAX + 0x43eb6c]
switchD_0043eaf1::switchD:
0043EAF1  FF 24 95 64 EB 43 00      JMP dword ptr [EDX*0x4 + 0x43eb64]
switchD_0043eaf1::caseD_38:
0043EAF8  83 F9 01                  CMP ECX,0x1
0043EAFB  75 2A                     JNZ 0x0043eb27
0043EAFD  8B 06                     MOV EAX,dword ptr [ESI]
0043EAFF  8D 4D F0                  LEA ECX,[EBP + -0x10]
0043EB02  51                        PUSH ECX
0043EB03  8B CE                     MOV ECX,ESI
0043EB05  FF 90 88 00 00 00         CALL dword ptr [EAX + 0x88]
0043EB0B  85 C0                     TEST EAX,EAX
0043EB0D  7E 18                     JLE 0x0043eb27
LAB_0043eb0f:
0043EB0F  80 7D 2C FF               CMP byte ptr [EBP + 0x2c],0xff
0043EB13  74 0F                     JZ 0x0043eb24
0043EB15  8B 16                     MOV EDX,dword ptr [ESI]
0043EB17  8B CE                     MOV ECX,ESI
0043EB19  FF 52 6C                  CALL dword ptr [EDX + 0x6c]
0043EB1C  0F BE 4D 2C               MOVSX ECX,byte ptr [EBP + 0x2c]
0043EB20  3B C1                     CMP EAX,ECX
0043EB22  75 03                     JNZ 0x0043eb27
LAB_0043eb24:
0043EB24  FF 45 10                  INC dword ptr [EBP + 0x10]
switchD_0043eaf1::caseD_3a:
0043EB27  4B                        DEC EBX
0043EB28  0F 85 73 FF FF FF         JNZ 0x0043eaa1
0043EB2E  8B 5D F8                  MOV EBX,dword ptr [EBP + -0x8]
0043EB31  8B 7D FC                  MOV EDI,dword ptr [EBP + -0x4]
0043EB34  66 A1 40 B2 7F 00         MOV AX,[0x007fb240]
0043EB3A  8B 55 20                  MOV EDX,dword ptr [EBP + 0x20]
0043EB3D  8B 4D F4                  MOV ECX,dword ptr [EBP + -0xc]
LAB_0043eb40:
0043EB40  4A                        DEC EDX
0043EB41  89 55 20                  MOV dword ptr [EBP + 0x20],EDX
0043EB44  0F 85 3A FF FF FF         JNZ 0x0043ea84
LAB_0043eb4a:
0043EB4A  8B 4D 18                  MOV ECX,dword ptr [EBP + 0x18]
0043EB4D  49                        DEC ECX
0043EB4E  89 4D 18                  MOV dword ptr [EBP + 0x18],ECX
0043EB51  0F 85 05 FF FF FF         JNZ 0x0043ea5c
LAB_0043eb57:
0043EB57  66 8B 45 10               MOV AX,word ptr [EBP + 0x10]
0043EB5B  5F                        POP EDI
0043EB5C  5E                        POP ESI
0043EB5D  5B                        POP EBX
0043EB5E  8B E5                     MOV ESP,EBP
0043EB60  5D                        POP EBP
0043EB61  C2 28 00                  RET 0x28
