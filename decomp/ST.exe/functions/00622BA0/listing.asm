FUN_00622ba0:
00622BA0  55                        PUSH EBP
00622BA1  8B EC                     MOV EBP,ESP
00622BA3  83 EC 0C                  SUB ESP,0xc
00622BA6  53                        PUSH EBX
00622BA7  56                        PUSH ESI
00622BA8  8B F1                     MOV ESI,ECX
00622BAA  57                        PUSH EDI
00622BAB  C7 45 FC 00 00 00 00      MOV dword ptr [EBP + -0x4],0x0
00622BB2  8B 86 76 02 00 00         MOV EAX,dword ptr [ESI + 0x276]
00622BB8  89 86 C2 02 00 00         MOV dword ptr [ESI + 0x2c2],EAX
00622BBE  8B 8E 7A 02 00 00         MOV ECX,dword ptr [ESI + 0x27a]
00622BC4  89 8E C6 02 00 00         MOV dword ptr [ESI + 0x2c6],ECX
00622BCA  8B 96 7E 02 00 00         MOV EDX,dword ptr [ESI + 0x27e]
00622BD0  66 8B 8E C6 02 00 00      MOV CX,word ptr [ESI + 0x2c6]
00622BD7  89 96 CA 02 00 00         MOV dword ptr [ESI + 0x2ca],EDX
00622BDD  66 8B 86 C2 02 00 00      MOV AX,word ptr [ESI + 0x2c2]
00622BE4  66 8B 96 CA 02 00 00      MOV DX,word ptr [ESI + 0x2ca]
00622BEB  66 89 46 41               MOV word ptr [ESI + 0x41],AX
00622BEF  66 89 4E 43               MOV word ptr [ESI + 0x43],CX
00622BF3  66 89 56 45               MOV word ptr [ESI + 0x45],DX
00622BF7  8B 0D A0 B2 7F 00         MOV ECX,dword ptr [0x007fb2a0]
00622BFD  E8 1A 2C DE FF            CALL 0x0040581c
00622C02  50                        PUSH EAX
00622C03  8B CE                     MOV ECX,ESI
00622C05  E8 0A F8 DD FF            CALL 0x00402414
00622C0A  66 8B 8E C6 02 00 00      MOV CX,word ptr [ESI + 0x2c6]
00622C11  66 8B 86 C2 02 00 00      MOV AX,word ptr [ESI + 0x2c2]
00622C18  66 8B 96 CA 02 00 00      MOV DX,word ptr [ESI + 0x2ca]
00622C1F  66 89 4E 56               MOV word ptr [ESI + 0x56],CX
00622C23  8B 8E C2 02 00 00         MOV ECX,dword ptr [ESI + 0x2c2]
00622C29  66 89 46 54               MOV word ptr [ESI + 0x54],AX
00622C2D  85 C9                     TEST ECX,ECX
00622C2F  66 89 56 58               MOV word ptr [ESI + 0x58],DX
00622C33  B8 79 19 8C 02            MOV EAX,0x28c1979
00622C38  7C 10                     JL 0x00622c4a
00622C3A  F7 E9                     IMUL ECX
00622C3C  D1 FA                     SAR EDX,0x1
00622C3E  8B C2                     MOV EAX,EDX
00622C40  C1 E8 1F                  SHR EAX,0x1f
00622C43  03 D0                     ADD EDX,EAX
00622C45  0F BF FA                  MOVSX EDI,DX
00622C48  EB 0F                     JMP 0x00622c59
LAB_00622c4a:
00622C4A  F7 E9                     IMUL ECX
00622C4C  D1 FA                     SAR EDX,0x1
00622C4E  8B CA                     MOV ECX,EDX
00622C50  C1 E9 1F                  SHR ECX,0x1f
00622C53  03 D1                     ADD EDX,ECX
00622C55  0F BF FA                  MOVSX EDI,DX
00622C58  4F                        DEC EDI
LAB_00622c59:
00622C59  8B 8E C6 02 00 00         MOV ECX,dword ptr [ESI + 0x2c6]
00622C5F  66 89 7E 47               MOV word ptr [ESI + 0x47],DI
00622C63  85 C9                     TEST ECX,ECX
00622C65  B8 79 19 8C 02            MOV EAX,0x28c1979
00622C6A  7C 10                     JL 0x00622c7c
00622C6C  F7 E9                     IMUL ECX
00622C6E  D1 FA                     SAR EDX,0x1
00622C70  8B C2                     MOV EAX,EDX
00622C72  C1 E8 1F                  SHR EAX,0x1f
00622C75  03 D0                     ADD EDX,EAX
00622C77  0F BF CA                  MOVSX ECX,DX
00622C7A  EB 0F                     JMP 0x00622c8b
LAB_00622c7c:
00622C7C  F7 E9                     IMUL ECX
00622C7E  D1 FA                     SAR EDX,0x1
00622C80  8B CA                     MOV ECX,EDX
00622C82  C1 E9 1F                  SHR ECX,0x1f
00622C85  03 D1                     ADD EDX,ECX
00622C87  0F BF CA                  MOVSX ECX,DX
00622C8A  49                        DEC ECX
LAB_00622c8b:
00622C8B  8B 96 CA 02 00 00         MOV EDX,dword ptr [ESI + 0x2ca]
00622C91  66 89 4E 49               MOV word ptr [ESI + 0x49],CX
00622C95  85 D2                     TEST EDX,EDX
00622C97  B8 1F 85 EB 51            MOV EAX,0x51eb851f
00622C9C  7C 11                     JL 0x00622caf
00622C9E  F7 EA                     IMUL EDX
00622CA0  C1 FA 06                  SAR EDX,0x6
00622CA3  8B C2                     MOV EAX,EDX
00622CA5  C1 E8 1F                  SHR EAX,0x1f
00622CA8  03 D0                     ADD EDX,EAX
00622CAA  0F BF C2                  MOVSX EAX,DX
00622CAD  EB 10                     JMP 0x00622cbf
LAB_00622caf:
00622CAF  F7 EA                     IMUL EDX
00622CB1  C1 FA 06                  SAR EDX,0x6
00622CB4  8B C2                     MOV EAX,EDX
00622CB6  C1 E8 1F                  SHR EAX,0x1f
00622CB9  03 D0                     ADD EDX,EAX
00622CBB  0F BF C2                  MOVSX EAX,DX
00622CBE  48                        DEC EAX
LAB_00622cbf:
00622CBF  66 89 4E 5D               MOV word ptr [ESI + 0x5d],CX
00622CC3  8B 8E 72 02 00 00         MOV ECX,dword ptr [ESI + 0x272]
00622CC9  51                        PUSH ECX
00622CCA  8B CE                     MOV ECX,ESI
00622CCC  66 89 46 4B               MOV word ptr [ESI + 0x4b],AX
00622CD0  66 89 7E 5B               MOV word ptr [ESI + 0x5b],DI
00622CD4  66 89 46 5F               MOV word ptr [ESI + 0x5f],AX
00622CD8  E8 BE 2E DE FF            CALL 0x00405b9b
00622CDD  88 86 AD 02 00 00         MOV byte ptr [ESI + 0x2ad],AL
00622CE3  8B 15 38 2A 80 00         MOV EDX,dword ptr [0x00802a38]
00622CE9  3C 02                     CMP AL,0x2
00622CEB  8B 8A E4 00 00 00         MOV ECX,dword ptr [EDX + 0xe4]
00622CF1  89 8E 5F 03 00 00         MOV dword ptr [ESI + 0x35f],ECX
00622CF7  75 0A                     JNZ 0x00622d03
00622CF9  C7 86 42 03 00 00 FF FF FF FF  MOV dword ptr [ESI + 0x342],0xffffffff
LAB_00622d03:
00622D03  66 8B 46 49               MOV AX,word ptr [ESI + 0x49]
00622D07  66 8B 56 47               MOV DX,word ptr [ESI + 0x47]
00622D0B  66 69 C0 C9 00            IMUL AX,AX,0xc9
00622D10  66 69 D2 C9 00            IMUL DX,DX,0xc9
00622D15  83 C0 64                  ADD EAX,0x64
00622D18  8D 4A 64                  LEA ECX,[EDX + 0x64]
00622D1B  66 89 46 3C               MOV word ptr [ESI + 0x3c],AX
00622D1F  66 8B 46 4B               MOV AX,word ptr [ESI + 0x4b]
00622D23  66 69 C0 C8 00            IMUL AX,AX,0xc8
00622D28  66 89 4E 3A               MOV word ptr [ESI + 0x3a],CX
00622D2C  C6 86 13 03 00 00 01      MOV byte ptr [ESI + 0x313],0x1
00622D33  8D 50 32                  LEA EDX,[EAX + 0x32]
00622D36  83 C0 64                  ADD EAX,0x64
00622D39  0F BF C0                  MOVSX EAX,AX
00622D3C  83 E8 32                  SUB EAX,0x32
00622D3F  66 89 56 3E               MOV word ptr [ESI + 0x3e],DX
00622D43  89 86 8A 02 00 00         MOV dword ptr [ESI + 0x28a],EAX
00622D49  C6 86 8E 00 00 00 01      MOV byte ptr [ESI + 0x8e],0x1
00622D50  0F BF C1                  MOVSX EAX,CX
00622D53  0F BF CA                  MOVSX ECX,DX
00622D56  8B 96 CA 02 00 00         MOV EDX,dword ptr [ESI + 0x2ca]
00622D5C  51                        PUSH ECX
00622D5D  8B 8E C2 02 00 00         MOV ECX,dword ptr [ESI + 0x2c2]
00622D63  50                        PUSH EAX
00622D64  50                        PUSH EAX
00622D65  8B 86 C6 02 00 00         MOV EAX,dword ptr [ESI + 0x2c6]
00622D6B  52                        PUSH EDX
00622D6C  50                        PUSH EAX
00622D6D  51                        PUSH ECX
00622D6E  E8 9A A1 08 00            CALL 0x006acf0d
00622D73  89 86 F6 02 00 00         MOV dword ptr [ESI + 0x2f6],EAX
00622D79  8A 86 AD 02 00 00         MOV AL,byte ptr [ESI + 0x2ad]
00622D7F  83 C4 18                  ADD ESP,0x18
00622D82  3C 03                     CMP AL,0x3
00622D84  75 09                     JNZ 0x00622d8f
00622D86  C6 86 52 03 00 00 00      MOV byte ptr [ESI + 0x352],0x0
00622D8D  EB 07                     JMP 0x00622d96
LAB_00622d8f:
00622D8F  C6 86 52 03 00 00 01      MOV byte ptr [ESI + 0x352],0x1
LAB_00622d96:
00622D96  3C 02                     CMP AL,0x2
00622D98  76 4B                     JBE 0x00622de5
00622D9A  3C 03                     CMP AL,0x3
00622D9C  75 7C                     JNZ 0x00622e1a
00622D9E  8B 0D 88 2A 80 00         MOV ECX,dword ptr [0x00802a88]
00622DA4  85 C9                     TEST ECX,ECX
00622DA6  74 72                     JZ 0x00622e1a
00622DA8  8B 56 18                  MOV EDX,dword ptr [ESI + 0x18]
00622DAB  A1 C0 02 7D 00            MOV EAX,[0x007d02c0]
00622DB0  6A FF                     PUSH -0x1
00622DB2  52                        PUSH EDX
00622DB3  8B 56 24                  MOV EDX,dword ptr [ESI + 0x24]
00622DB6  50                        PUSH EAX
00622DB7  0F BF 46 4B               MOVSX EAX,word ptr [ESI + 0x4b]
00622DBB  52                        PUSH EDX
00622DBC  50                        PUSH EAX
00622DBD  0F BF 56 49               MOVSX EDX,word ptr [ESI + 0x49]
00622DC1  0F BF 46 47               MOVSX EAX,word ptr [ESI + 0x47]
00622DC5  52                        PUSH EDX
00622DC6  50                        PUSH EAX
00622DC7  E8 C0 0A DE FF            CALL 0x0040388c
00622DCC  33 C9                     XOR ECX,ECX
00622DCE  8A 8E AD 02 00 00         MOV CL,byte ptr [ESI + 0x2ad]
00622DD4  8B 14 8D B4 02 7D 00      MOV EDX,dword ptr [ECX*0x4 + 0x7d02b4]
00622DDB  8B CE                     MOV ECX,ESI
00622DDD  52                        PUSH EDX
00622DDE  E8 5C FD DD FF            CALL 0x00402b3f
00622DE3  EB 35                     JMP 0x00622e1a
LAB_00622de5:
00622DE5  8B 0D 88 2A 80 00         MOV ECX,dword ptr [0x00802a88]
00622DEB  85 C9                     TEST ECX,ECX
00622DED  74 2B                     JZ 0x00622e1a
00622DEF  8B 56 18                  MOV EDX,dword ptr [ESI + 0x18]
00622DF2  25 FF 00 00 00            AND EAX,0xff
00622DF7  6A FF                     PUSH -0x1
00622DF9  52                        PUSH EDX
00622DFA  8B 04 85 B4 02 7D 00      MOV EAX,dword ptr [EAX*0x4 + 0x7d02b4]
00622E01  8B 56 24                  MOV EDX,dword ptr [ESI + 0x24]
00622E04  50                        PUSH EAX
00622E05  52                        PUSH EDX
00622E06  0F BF 46 4B               MOVSX EAX,word ptr [ESI + 0x4b]
00622E0A  0F BF 56 49               MOVSX EDX,word ptr [ESI + 0x49]
00622E0E  50                        PUSH EAX
00622E0F  52                        PUSH EDX
00622E10  0F BF 46 47               MOVSX EAX,word ptr [ESI + 0x47]
00622E14  50                        PUSH EAX
00622E15  E8 72 0A DE FF            CALL 0x0040388c
LAB_00622e1a:
00622E1A  66 8B 5E 47               MOV BX,word ptr [ESI + 0x47]
00622E1E  66 85 DB                  TEST BX,BX
00622E21  0F 8C 13 01 00 00         JL 0x00622f3a
00622E27  66 8B 56 49               MOV DX,word ptr [ESI + 0x49]
00622E2B  66 85 D2                  TEST DX,DX
00622E2E  0F 8C 06 01 00 00         JL 0x00622f3a
00622E34  66 8B 46 4B               MOV AX,word ptr [ESI + 0x4b]
00622E38  66 85 C0                  TEST AX,AX
00622E3B  0F 8C F9 00 00 00         JL 0x00622f3a
00622E41  66 3B 1D 40 B2 7F 00      CMP BX,word ptr [0x007fb240]
00622E48  0F 8D EC 00 00 00         JGE 0x00622f3a
00622E4E  66 3B 15 42 B2 7F 00      CMP DX,word ptr [0x007fb242]
00622E55  0F 8D DF 00 00 00         JGE 0x00622f3a
00622E5B  66 3D 05 00               CMP AX,0x5
00622E5F  0F 8D D5 00 00 00         JGE 0x00622f3a
00622E65  66 8B 8E 82 02 00 00      MOV CX,word ptr [ESI + 0x282]
00622E6C  66 89 4E 3A               MOV word ptr [ESI + 0x3a],CX
00622E70  66 8B 8E 86 02 00 00      MOV CX,word ptr [ESI + 0x286]
00622E77  66 89 4E 3C               MOV word ptr [ESI + 0x3c],CX
00622E7B  66 8B 8E 8A 02 00 00      MOV CX,word ptr [ESI + 0x28a]
00622E82  66 89 4E 3E               MOV word ptr [ESI + 0x3e],CX
00622E86  8A 8E 13 03 00 00         MOV CL,byte ptr [ESI + 0x313]
00622E8C  84 C9                     TEST CL,CL
00622E8E  0F 84 9F 00 00 00         JZ 0x00622f33
00622E94  33 C9                     XOR ECX,ECX
00622E96  8A 8E 8E 00 00 00         MOV CL,byte ptr [ESI + 0x8e]
00622E9C  8B F9                     MOV EDI,ECX
00622E9E  0F BF C8                  MOVSX ECX,AX
00622EA1  0F BF C3                  MOVSX EAX,BX
00622EA4  0F BF D2                  MOVSX EDX,DX
00622EA7  66 85 C0                  TEST AX,AX
00622EAA  89 7D F8                  MOV dword ptr [EBP + -0x8],EDI
00622EAD  89 55 F4                  MOV dword ptr [EBP + -0xc],EDX
00622EB0  7C 63                     JL 0x00622f15
00622EB2  66 3B 05 40 B2 7F 00      CMP AX,word ptr [0x007fb240]
00622EB9  7D 5A                     JGE 0x00622f15
00622EBB  66 85 D2                  TEST DX,DX
00622EBE  7C 55                     JL 0x00622f15
00622EC0  66 3B 15 42 B2 7F 00      CMP DX,word ptr [0x007fb242]
00622EC7  7D 4C                     JGE 0x00622f15
00622EC9  66 85 C9                  TEST CX,CX
00622ECC  7C 47                     JL 0x00622f15
00622ECE  66 3B 0D 44 B2 7F 00      CMP CX,word ptr [0x007fb244]
00622ED5  7D 3E                     JGE 0x00622f15
00622ED7  0F BF 1D 46 B2 7F 00      MOVSX EBX,word ptr [0x007fb246]
00622EDE  0F BF F9                  MOVSX EDI,CX
00622EE1  0F AF DF                  IMUL EBX,EDI
00622EE4  0F BF 3D 40 B2 7F 00      MOVSX EDI,word ptr [0x007fb240]
00622EEB  0F BF D2                  MOVSX EDX,DX
00622EEE  0F AF FA                  IMUL EDI,EDX
00622EF1  0F BF D0                  MOVSX EDX,AX
00622EF4  03 DF                     ADD EBX,EDI
00622EF6  8B 7D F8                  MOV EDI,dword ptr [EBP + -0x8]
00622EF9  03 DA                     ADD EBX,EDX
00622EFB  8B D7                     MOV EDX,EDI
00622EFD  81 E2 FF 00 00 00         AND EDX,0xff
00622F03  8D 14 5A                  LEA EDX,[EDX + EBX*0x2]
00622F06  8B 1D 48 B2 7F 00         MOV EBX,dword ptr [0x007fb248]
00622F0C  83 3C 93 00               CMP dword ptr [EBX + EDX*0x4],0x0
00622F10  75 28                     JNZ 0x00622f3a
00622F12  8B 55 F4                  MOV EDX,dword ptr [EBP + -0xc]
LAB_00622f15:
00622F15  8B 5E 18                  MOV EBX,dword ptr [ESI + 0x18]
00622F18  53                        PUSH EBX
00622F19  56                        PUSH ESI
00622F1A  57                        PUSH EDI
00622F1B  51                        PUSH ECX
00622F1C  8B 0D 84 B2 7F 00         MOV ECX,dword ptr [0x007fb284]
00622F22  52                        PUSH EDX
00622F23  50                        PUSH EAX
00622F24  E8 FC E3 DD FF            CALL 0x00401325
00622F29  85 C0                     TEST EAX,EAX
00622F2B  75 0D                     JNZ 0x00622f3a
00622F2D  FE 86 14 03 00 00         INC byte ptr [ESI + 0x314]
LAB_00622f33:
00622F33  C7 45 FC 01 00 00 00      MOV dword ptr [EBP + -0x4],0x1
LAB_00622f3a:
00622F3A  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
00622F3D  5F                        POP EDI
00622F3E  5E                        POP ESI
00622F3F  5B                        POP EBX
00622F40  8B E5                     MOV ESP,EBP
00622F42  5D                        POP EBP
00622F43  C3                        RET
