FUN_00675b10:
00675B10  55                        PUSH EBP
00675B11  8B EC                     MOV EBP,ESP
00675B13  83 EC 28                  SUB ESP,0x28
00675B16  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
00675B19  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
00675B1C  53                        PUSH EBX
00675B1D  56                        PUSH ESI
00675B1E  BE 01 00 00 00            MOV ESI,0x1
00675B23  2B C8                     SUB ECX,EAX
00675B25  57                        PUSH EDI
00675B26  89 75 E0                  MOV dword ptr [EBP + -0x20],ESI
00675B29  89 45 F8                  MOV dword ptr [EBP + -0x8],EAX
00675B2C  89 4D D8                  MOV dword ptr [EBP + -0x28],ECX
LAB_00675b2f:
00675B2F  03 C8                     ADD ECX,EAX
00675B31  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
00675B34  89 4D F4                  MOV dword ptr [EBP + -0xc],ECX
00675B37  8D 45 EC                  LEA EAX,[EBP + -0x14]
00675B3A  8D 4D F0                  LEA ECX,[EBP + -0x10]
00675B3D  50                        PUSH EAX
00675B3E  8D 55 FC                  LEA EDX,[EBP + -0x4]
00675B41  51                        PUSH ECX
00675B42  8D 45 F4                  LEA EAX,[EBP + -0xc]
00675B45  52                        PUSH EDX
00675B46  50                        PUSH EAX
00675B47  89 75 F0                  MOV dword ptr [EBP + -0x10],ESI
00675B4A  89 75 EC                  MOV dword ptr [EBP + -0x14],ESI
00675B4D  E8 B4 BD D8 FF            CALL 0x00401906
00675B52  8B 7D F4                  MOV EDI,dword ptr [EBP + -0xc]
00675B55  8B 4D F0                  MOV ECX,dword ptr [EBP + -0x10]
00675B58  8B 5D FC                  MOV EBX,dword ptr [EBP + -0x4]
00675B5B  8B 55 EC                  MOV EDX,dword ptr [EBP + -0x14]
00675B5E  8D 44 39 FF               LEA EAX,[ECX + EDI*0x1 + -0x1]
00675B62  83 C4 10                  ADD ESP,0x10
00675B65  8D 4C 1A FF               LEA ECX,[EDX + EBX*0x1 + -0x1]
00675B69  66 3B F8                  CMP DI,AX
00675B6C  89 45 DC                  MOV dword ptr [EBP + -0x24],EAX
00675B6F  89 4D E4                  MOV dword ptr [EBP + -0x1c],ECX
00675B72  0F 8F DC 00 00 00         JG 0x00675c54
LAB_00675b78:
00675B78  66 3B 5D E4               CMP BX,word ptr [EBP + -0x1c]
00675B7C  0F 8F C8 00 00 00         JG 0x00675c4a
LAB_00675b82:
00675B82  8B 75 10                  MOV ESI,dword ptr [EBP + 0x10]
00675B85  C7 45 E8 00 00 00 00      MOV dword ptr [EBP + -0x18],0x0
LAB_00675b8c:
00675B8C  8B 0D 84 B2 7F 00         MOV ECX,dword ptr [0x007fb284]
00675B92  56                        PUSH ESI
00675B93  53                        PUSH EBX
00675B94  57                        PUSH EDI
00675B95  E8 A1 F1 D8 FF            CALL 0x00404d3b
00675B9A  85 C0                     TEST EAX,EAX
00675B9C  74 7E                     JZ 0x00675c1c
00675B9E  66 85 FF                  TEST DI,DI
00675BA1  0F 8C CA 00 00 00         JL 0x00675c71
00675BA7  66 A1 40 B2 7F 00         MOV AX,[0x007fb240]
00675BAD  66 3B F8                  CMP DI,AX
00675BB0  0F 8D BB 00 00 00         JGE 0x00675c71
00675BB6  66 85 DB                  TEST BX,BX
00675BB9  0F 8C B2 00 00 00         JL 0x00675c71
00675BBF  66 3B 1D 42 B2 7F 00      CMP BX,word ptr [0x007fb242]
00675BC6  0F 8D A5 00 00 00         JGE 0x00675c71
00675BCC  66 85 F6                  TEST SI,SI
00675BCF  0F 8C 9C 00 00 00         JL 0x00675c71
00675BD5  66 3B 35 44 B2 7F 00      CMP SI,word ptr [0x007fb244]
00675BDC  0F 8D 8F 00 00 00         JGE 0x00675c71
00675BE2  0F BF 15 46 B2 7F 00      MOVSX EDX,word ptr [0x007fb246]
00675BE9  0F BF CE                  MOVSX ECX,SI
00675BEC  0F AF D1                  IMUL EDX,ECX
00675BEF  0F BF C0                  MOVSX EAX,AX
00675BF2  0F BF CB                  MOVSX ECX,BX
00675BF5  0F AF C1                  IMUL EAX,ECX
00675BF8  8B 0D 48 B2 7F 00         MOV ECX,dword ptr [0x007fb248]
00675BFE  03 D0                     ADD EDX,EAX
00675C00  0F BF C7                  MOVSX EAX,DI
00675C03  03 D0                     ADD EDX,EAX
00675C05  8B 0C D1                  MOV ECX,dword ptr [ECX + EDX*0x8]
00675C08  85 C9                     TEST ECX,ECX
00675C0A  74 65                     JZ 0x00675c71
00675C0C  8B 45 20                  MOV EAX,dword ptr [EBP + 0x20]
00675C0F  8B 11                     MOV EDX,dword ptr [ECX]
00675C11  50                        PUSH EAX
00675C12  FF 92 14 01 00 00         CALL dword ptr [EDX + 0x114]
00675C18  85 C0                     TEST EAX,EAX
00675C1A  75 55                     JNZ 0x00675c71
LAB_00675c1c:
00675C1C  46                        INC ESI
00675C1D  66 83 FE 05               CMP SI,0x5
00675C21  7C 02                     JL 0x00675c25
00675C23  33 F6                     XOR ESI,ESI
LAB_00675c25:
00675C25  8B 45 E8                  MOV EAX,dword ptr [EBP + -0x18]
00675C28  40                        INC EAX
00675C29  66 3D 05 00               CMP AX,0x5
00675C2D  89 45 E8                  MOV dword ptr [EBP + -0x18],EAX
00675C30  0F 8C 56 FF FF FF         JL 0x00675b8c
00675C36  43                        INC EBX
00675C37  66 3B 5D E4               CMP BX,word ptr [EBP + -0x1c]
00675C3B  0F 8E 41 FF FF FF         JLE 0x00675b82
00675C41  8B 5D FC                  MOV EBX,dword ptr [EBP + -0x4]
00675C44  8B 45 DC                  MOV EAX,dword ptr [EBP + -0x24]
00675C47  8B 75 E0                  MOV ESI,dword ptr [EBP + -0x20]
LAB_00675c4a:
00675C4A  47                        INC EDI
00675C4B  66 3B F8                  CMP DI,AX
00675C4E  0F 8E 24 FF FF FF         JLE 0x00675b78
LAB_00675c54:
00675C54  8B 55 F8                  MOV EDX,dword ptr [EBP + -0x8]
00675C57  83 C6 02                  ADD ESI,0x2
00675C5A  4A                        DEC EDX
00675C5B  66 83 FE 09               CMP SI,0x9
00675C5F  89 55 F8                  MOV dword ptr [EBP + -0x8],EDX
00675C62  89 75 E0                  MOV dword ptr [EBP + -0x20],ESI
00675C65  7D 28                     JGE 0x00675c8f
00675C67  8B 4D D8                  MOV ECX,dword ptr [EBP + -0x28]
00675C6A  8B C2                     MOV EAX,EDX
00675C6C  E9 BE FE FF FF            JMP 0x00675b2f
LAB_00675c71:
00675C71  8B 4D 14                  MOV ECX,dword ptr [EBP + 0x14]
00675C74  8B 55 18                  MOV EDX,dword ptr [EBP + 0x18]
00675C77  8B 45 1C                  MOV EAX,dword ptr [EBP + 0x1c]
00675C7A  66 89 39                  MOV word ptr [ECX],DI
00675C7D  66 89 1A                  MOV word ptr [EDX],BX
00675C80  66 89 30                  MOV word ptr [EAX],SI
00675C83  5F                        POP EDI
00675C84  5E                        POP ESI
00675C85  B8 01 00 00 00            MOV EAX,0x1
00675C8A  5B                        POP EBX
00675C8B  8B E5                     MOV ESP,EBP
00675C8D  5D                        POP EBP
00675C8E  C3                        RET
LAB_00675c8f:
00675C8F  8B 4D 14                  MOV ECX,dword ptr [EBP + 0x14]
00675C92  66 8B 55 08               MOV DX,word ptr [EBP + 0x8]
00675C96  8B 45 18                  MOV EAX,dword ptr [EBP + 0x18]
00675C99  5F                        POP EDI
00675C9A  66 89 11                  MOV word ptr [ECX],DX
00675C9D  66 8B 4D 0C               MOV CX,word ptr [EBP + 0xc]
00675CA1  8B 55 1C                  MOV EDX,dword ptr [EBP + 0x1c]
00675CA4  66 89 08                  MOV word ptr [EAX],CX
00675CA7  66 8B 45 10               MOV AX,word ptr [EBP + 0x10]
00675CAB  5E                        POP ESI
00675CAC  66 89 02                  MOV word ptr [EDX],AX
00675CAF  33 C0                     XOR EAX,EAX
00675CB1  5B                        POP EBX
00675CB2  8B E5                     MOV ESP,EBP
00675CB4  5D                        POP EBP
00675CB5  C3                        RET
