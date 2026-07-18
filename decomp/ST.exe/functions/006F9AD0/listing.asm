FUN_006f9ad0:
006F9AD0  55                        PUSH EBP
006F9AD1  8B EC                     MOV EBP,ESP
006F9AD3  83 EC 0C                  SUB ESP,0xc
006F9AD6  8B 45 2C                  MOV EAX,dword ptr [EBP + 0x2c]
006F9AD9  C7 05 00 70 85 00 01 00 00 00  MOV dword ptr [0x00857000],0x1
006F9AE3  48                        DEC EAX
006F9AE4  89 45 2C                  MOV dword ptr [EBP + 0x2c],EAX
006F9AE7  0F 88 47 07 00 00         JS 0x006fa234
006F9AED  8B 55 1C                  MOV EDX,dword ptr [EBP + 0x1c]
006F9AF0  53                        PUSH EBX
006F9AF1  56                        PUSH ESI
006F9AF2  57                        PUSH EDI
006F9AF3  33 F6                     XOR ESI,ESI
006F9AF5  EB 02                     JMP 0x006f9af9
LAB_006f9af7:
006F9AF7  33 F6                     XOR ESI,ESI
LAB_006f9af9:
006F9AF9  8B 5D 34                  MOV EBX,dword ptr [EBP + 0x34]
006F9AFC  F6 C3 01                  TEST BL,0x1
006F9AFF  75 52                     JNZ 0x006f9b53
LAB_006f9b01:
006F9B01  8B 45 2C                  MOV EAX,dword ptr [EBP + 0x2c]
006F9B04  48                        DEC EAX
006F9B05  89 45 2C                  MOV dword ptr [EBP + 0x2c],EAX
006F9B08  78 49                     JS 0x006f9b53
006F9B0A  33 C0                     XOR EAX,EAX
006F9B0C  8A 02                     MOV AL,byte ptr [EDX]
006F9B0E  42                        INC EDX
006F9B0F  3B C6                     CMP EAX,ESI
006F9B11  74 2D                     JZ 0x006f9b40
006F9B13  8B 4D 20                  MOV ECX,dword ptr [EBP + 0x20]
LAB_006f9b16:
006F9B16  A8 80                     TEST AL,0x80
006F9B18  74 16                     JZ 0x006f9b30
006F9B1A  A8 40                     TEST AL,0x40
006F9B1C  74 06                     JZ 0x006f9b24
006F9B1E  42                        INC EDX
006F9B1F  83 E0 3F                  AND EAX,0x3f
006F9B22  EB 0F                     JMP 0x006f9b33
LAB_006f9b24:
006F9B24  8B F8                     MOV EDI,EAX
006F9B26  83 E7 3F                  AND EDI,0x3f
006F9B29  03 D7                     ADD EDX,EDI
006F9B2B  83 E0 3F                  AND EAX,0x3f
006F9B2E  EB 03                     JMP 0x006f9b33
LAB_006f9b30:
006F9B30  83 E0 7F                  AND EAX,0x7f
LAB_006f9b33:
006F9B33  2B C8                     SUB ECX,EAX
006F9B35  3B CE                     CMP ECX,ESI
006F9B37  7E 07                     JLE 0x006f9b40
006F9B39  33 C0                     XOR EAX,EAX
006F9B3B  8A 02                     MOV AL,byte ptr [EDX]
006F9B3D  42                        INC EDX
006F9B3E  EB D6                     JMP 0x006f9b16
LAB_006f9b40:
006F9B40  43                        INC EBX
006F9B41  83 FB 04                  CMP EBX,0x4
006F9B44  89 5D 34                  MOV dword ptr [EBP + 0x34],EBX
006F9B47  7E 05                     JLE 0x006f9b4e
006F9B49  89 75 34                  MOV dword ptr [EBP + 0x34],ESI
006F9B4C  8B DE                     MOV EBX,ESI
LAB_006f9b4e:
006F9B4E  F6 C3 01                  TEST BL,0x1
006F9B51  74 AE                     JZ 0x006f9b01
LAB_006f9b53:
006F9B53  33 C0                     XOR EAX,EAX
006F9B55  8A 02                     MOV AL,byte ptr [EDX]
006F9B57  42                        INC EDX
006F9B58  3B C6                     CMP EAX,ESI
006F9B5A  89 45 F8                  MOV dword ptr [EBP + -0x8],EAX
006F9B5D  0F 84 90 06 00 00         JZ 0x006fa1f3
006F9B63  8B 4D 10                  MOV ECX,dword ptr [EBP + 0x10]
006F9B66  8B 5D 24                  MOV EBX,dword ptr [EBP + 0x24]
006F9B69  8B 75 08                  MOV ESI,dword ptr [EBP + 0x8]
006F9B6C  8B 7D 38                  MOV EDI,dword ptr [EBP + 0x38]
006F9B6F  89 4D 1C                  MOV dword ptr [EBP + 0x1c],ECX
006F9B72  8B 4D 30                  MOV ECX,dword ptr [EBP + 0x30]
006F9B75  89 5D FC                  MOV dword ptr [EBP + -0x4],EBX
LAB_006f9b78:
006F9B78  A8 80                     TEST AL,0x80
006F9B7A  74 34                     JZ 0x006f9bb0
006F9B7C  83 E0 3F                  AND EAX,0x3f
006F9B7F  3B C3                     CMP EAX,EBX
006F9B81  7F 43                     JG 0x006f9bc6
006F9B83  F6 45 F8 40               TEST byte ptr [EBP + -0x8],0x40
006F9B87  74 13                     JZ 0x006f9b9c
006F9B89  8B 5D FC                  MOV EBX,dword ptr [EBP + -0x4]
006F9B8C  42                        INC EDX
006F9B8D  2B D8                     SUB EBX,EAX
006F9B8F  33 C0                     XOR EAX,EAX
006F9B91  8A 02                     MOV AL,byte ptr [EDX]
006F9B93  89 5D FC                  MOV dword ptr [EBP + -0x4],EBX
006F9B96  89 45 F8                  MOV dword ptr [EBP + -0x8],EAX
006F9B99  42                        INC EDX
006F9B9A  EB DC                     JMP 0x006f9b78
LAB_006f9b9c:
006F9B9C  8B 5D FC                  MOV EBX,dword ptr [EBP + -0x4]
006F9B9F  03 D0                     ADD EDX,EAX
006F9BA1  2B D8                     SUB EBX,EAX
006F9BA3  33 C0                     XOR EAX,EAX
006F9BA5  8A 02                     MOV AL,byte ptr [EDX]
006F9BA7  89 5D FC                  MOV dword ptr [EBP + -0x4],EBX
006F9BAA  89 45 F8                  MOV dword ptr [EBP + -0x8],EAX
006F9BAD  42                        INC EDX
006F9BAE  EB C8                     JMP 0x006f9b78
LAB_006f9bb0:
006F9BB0  83 E0 7F                  AND EAX,0x7f
006F9BB3  3B C3                     CMP EAX,EBX
006F9BB5  7F 0F                     JG 0x006f9bc6
006F9BB7  2B D8                     SUB EBX,EAX
006F9BB9  33 C0                     XOR EAX,EAX
006F9BBB  8A 02                     MOV AL,byte ptr [EDX]
006F9BBD  89 5D FC                  MOV dword ptr [EBP + -0x4],EBX
006F9BC0  89 45 F8                  MOV dword ptr [EBP + -0x8],EAX
006F9BC3  42                        INC EDX
006F9BC4  EB B2                     JMP 0x006f9b78
LAB_006f9bc6:
006F9BC6  2B C3                     SUB EAX,EBX
006F9BC8  8B 5D F8                  MOV EBX,dword ptr [EBP + -0x8]
006F9BCB  81 E3 C0 00 00 00         AND EBX,0xc0
006F9BD1  80 FB 80                  CMP BL,0x80
006F9BD4  75 03                     JNZ 0x006f9bd9
006F9BD6  03 55 FC                  ADD EDX,dword ptr [EBP + -0x4]
LAB_006f9bd9:
006F9BD9  8B 5D 28                  MOV EBX,dword ptr [EBP + 0x28]
006F9BDC  3B C3                     CMP EAX,EBX
006F9BDE  89 5D FC                  MOV dword ptr [EBP + -0x4],EBX
006F9BE1  0F 8F 23 03 00 00         JG 0x006f9f0a
006F9BE7  8B 5D F8                  MOV EBX,dword ptr [EBP + -0x8]
006F9BEA  81 E3 80 00 00 00         AND EBX,0x80
006F9BF0  89 5D F4                  MOV dword ptr [EBP + -0xc],EBX
LAB_006f9bf3:
006F9BF3  8B 5D FC                  MOV EBX,dword ptr [EBP + -0x4]
006F9BF6  2B D8                     SUB EBX,EAX
006F9BF8  89 5D FC                  MOV dword ptr [EBP + -0x4],EBX
006F9BFB  8B 5D F4                  MOV EBX,dword ptr [EBP + -0xc]
006F9BFE  85 DB                     TEST EBX,EBX
006F9C00  0F 84 A3 02 00 00         JZ 0x006f9ea9
006F9C06  F6 45 F8 40               TEST byte ptr [EBP + -0x8],0x40
006F9C0A  0F 84 55 01 00 00         JZ 0x006f9d65
006F9C10  33 DB                     XOR EBX,EBX
006F9C12  8A 1A                     MOV BL,byte ptr [EDX]
006F9C14  42                        INC EDX
006F9C15  85 C9                     TEST ECX,ECX
006F9C17  89 5D F4                  MOV dword ptr [EBP + -0xc],EBX
006F9C1A  0F 8E 95 00 00 00         JLE 0x006f9cb5
006F9C20  8D 59 FF                  LEA EBX,[ECX + -0x1]
006F9C23  83 FB 03                  CMP EBX,0x3
006F9C26  0F 87 89 00 00 00         JA 0x006f9cb5
switchD_006f9c2c::switchD:
006F9C2C  FF 24 9D 3C A2 6F 00      JMP dword ptr [EBX*0x4 + 0x6fa23c]
switchD_006f9c2c::caseD_1:
006F9C33  8B 5D 1C                  MOV EBX,dword ptr [EBP + 0x1c]
006F9C36  33 C9                     XOR ECX,ECX
006F9C38  66 8B 0B                  MOV CX,word ptr [EBX]
006F9C3B  8B 5D 18                  MOV EBX,dword ptr [EBP + 0x18]
006F9C3E  3B D9                     CMP EBX,ECX
006F9C40  77 05                     JA 0x006f9c47
006F9C42  8A 4D F4                  MOV CL,byte ptr [EBP + -0xc]
006F9C45  EB 0A                     JMP 0x006f9c51
LAB_006f9c47:
006F9C47  8B 5D 40                  MOV EBX,dword ptr [EBP + 0x40]
006F9C4A  33 C9                     XOR ECX,ECX
006F9C4C  8A 0F                     MOV CL,byte ptr [EDI]
006F9C4E  8A 0C 19                  MOV CL,byte ptr [ECX + EBX*0x1]
LAB_006f9c51:
006F9C51  8B 5D 1C                  MOV EBX,dword ptr [EBP + 0x1c]
006F9C54  88 0E                     MOV byte ptr [ESI],CL
006F9C56  B9 02 00 00 00            MOV ECX,0x2
006F9C5B  03 D9                     ADD EBX,ECX
006F9C5D  46                        INC ESI
006F9C5E  47                        INC EDI
006F9C5F  48                        DEC EAX
006F9C60  85 C0                     TEST EAX,EAX
006F9C62  89 5D 1C                  MOV dword ptr [EBP + 0x1c],EBX
006F9C65  0F 8E 6A 02 00 00         JLE 0x006f9ed5
switchD_006f9c2c::caseD_2:
006F9C6B  48                        DEC EAX
006F9C6C  B9 03 00 00 00            MOV ECX,0x3
006F9C71  85 C0                     TEST EAX,EAX
006F9C73  0F 8E 5C 02 00 00         JLE 0x006f9ed5
switchD_006f9c2c::caseD_3:
006F9C79  8B 5D 1C                  MOV EBX,dword ptr [EBP + 0x1c]
006F9C7C  33 C9                     XOR ECX,ECX
006F9C7E  66 8B 0B                  MOV CX,word ptr [EBX]
006F9C81  8B 5D 18                  MOV EBX,dword ptr [EBP + 0x18]
006F9C84  3B D9                     CMP EBX,ECX
006F9C86  77 05                     JA 0x006f9c8d
006F9C88  8A 4D F4                  MOV CL,byte ptr [EBP + -0xc]
006F9C8B  EB 0A                     JMP 0x006f9c97
LAB_006f9c8d:
006F9C8D  8B 5D 40                  MOV EBX,dword ptr [EBP + 0x40]
006F9C90  33 C9                     XOR ECX,ECX
006F9C92  8A 0F                     MOV CL,byte ptr [EDI]
006F9C94  8A 0C 19                  MOV CL,byte ptr [ECX + EBX*0x1]
LAB_006f9c97:
006F9C97  88 0E                     MOV byte ptr [ESI],CL
006F9C99  8B 4D 1C                  MOV ECX,dword ptr [EBP + 0x1c]
006F9C9C  83 C1 02                  ADD ECX,0x2
006F9C9F  46                        INC ESI
006F9CA0  47                        INC EDI
006F9CA1  48                        DEC EAX
006F9CA2  89 4D 1C                  MOV dword ptr [EBP + 0x1c],ECX
006F9CA5  B9 04 00 00 00            MOV ECX,0x4
006F9CAA  85 C0                     TEST EAX,EAX
006F9CAC  0F 8E 23 02 00 00         JLE 0x006f9ed5
switchD_006f9c2c::caseD_4:
006F9CB2  33 C9                     XOR ECX,ECX
006F9CB4  48                        DEC EAX
switchD_006f9c2c::default:
006F9CB5  85 C0                     TEST EAX,EAX
006F9CB7  0F 8E 18 02 00 00         JLE 0x006f9ed5
006F9CBD  48                        DEC EAX
006F9CBE  B9 01 00 00 00            MOV ECX,0x1
006F9CC3  85 C0                     TEST EAX,EAX
006F9CC5  0F 8E 0A 02 00 00         JLE 0x006f9ed5
LAB_006f9ccb:
006F9CCB  8B 5D 1C                  MOV EBX,dword ptr [EBP + 0x1c]
006F9CCE  33 C9                     XOR ECX,ECX
006F9CD0  66 8B 0B                  MOV CX,word ptr [EBX]
006F9CD3  8B 5D 18                  MOV EBX,dword ptr [EBP + 0x18]
006F9CD6  3B D9                     CMP EBX,ECX
006F9CD8  77 05                     JA 0x006f9cdf
006F9CDA  8A 4D F4                  MOV CL,byte ptr [EBP + -0xc]
006F9CDD  EB 0A                     JMP 0x006f9ce9
LAB_006f9cdf:
006F9CDF  8B 5D 40                  MOV EBX,dword ptr [EBP + 0x40]
006F9CE2  33 C9                     XOR ECX,ECX
006F9CE4  8A 0F                     MOV CL,byte ptr [EDI]
006F9CE6  8A 0C 19                  MOV CL,byte ptr [ECX + EBX*0x1]
LAB_006f9ce9:
006F9CE9  8B 5D 1C                  MOV EBX,dword ptr [EBP + 0x1c]
006F9CEC  88 0E                     MOV byte ptr [ESI],CL
006F9CEE  B9 02 00 00 00            MOV ECX,0x2
006F9CF3  03 D9                     ADD EBX,ECX
006F9CF5  46                        INC ESI
006F9CF6  47                        INC EDI
006F9CF7  48                        DEC EAX
006F9CF8  85 C0                     TEST EAX,EAX
006F9CFA  89 5D 1C                  MOV dword ptr [EBP + 0x1c],EBX
006F9CFD  0F 8E D2 01 00 00         JLE 0x006f9ed5
006F9D03  48                        DEC EAX
006F9D04  B9 03 00 00 00            MOV ECX,0x3
006F9D09  85 C0                     TEST EAX,EAX
006F9D0B  0F 8E C4 01 00 00         JLE 0x006f9ed5
006F9D11  33 C9                     XOR ECX,ECX
006F9D13  66 8B 0B                  MOV CX,word ptr [EBX]
006F9D16  8B 5D 18                  MOV EBX,dword ptr [EBP + 0x18]
006F9D19  3B D9                     CMP EBX,ECX
006F9D1B  77 05                     JA 0x006f9d22
006F9D1D  8A 4D F4                  MOV CL,byte ptr [EBP + -0xc]
006F9D20  EB 0A                     JMP 0x006f9d2c
LAB_006f9d22:
006F9D22  8B 5D 40                  MOV EBX,dword ptr [EBP + 0x40]
006F9D25  33 C9                     XOR ECX,ECX
006F9D27  8A 0F                     MOV CL,byte ptr [EDI]
006F9D29  8A 0C 19                  MOV CL,byte ptr [ECX + EBX*0x1]
LAB_006f9d2c:
006F9D2C  88 0E                     MOV byte ptr [ESI],CL
006F9D2E  8B 4D 1C                  MOV ECX,dword ptr [EBP + 0x1c]
006F9D31  83 C1 02                  ADD ECX,0x2
006F9D34  46                        INC ESI
006F9D35  47                        INC EDI
006F9D36  48                        DEC EAX
006F9D37  89 4D 1C                  MOV dword ptr [EBP + 0x1c],ECX
006F9D3A  B9 04 00 00 00            MOV ECX,0x4
006F9D3F  85 C0                     TEST EAX,EAX
006F9D41  0F 8E 8E 01 00 00         JLE 0x006f9ed5
006F9D47  33 C9                     XOR ECX,ECX
006F9D49  48                        DEC EAX
006F9D4A  85 C0                     TEST EAX,EAX
006F9D4C  0F 8E 83 01 00 00         JLE 0x006f9ed5
006F9D52  48                        DEC EAX
006F9D53  B9 01 00 00 00            MOV ECX,0x1
006F9D58  85 C0                     TEST EAX,EAX
006F9D5A  0F 8F 6B FF FF FF         JG 0x006f9ccb
006F9D60  E9 70 01 00 00            JMP 0x006f9ed5
LAB_006f9d65:
006F9D65  85 C9                     TEST ECX,ECX
006F9D67  0F 8E 97 00 00 00         JLE 0x006f9e04
006F9D6D  8D 59 FF                  LEA EBX,[ECX + -0x1]
006F9D70  83 FB 03                  CMP EBX,0x3
006F9D73  0F 87 8B 00 00 00         JA 0x006f9e04
switchD_006f9d79::switchD:
006F9D79  FF 24 9D 4C A2 6F 00      JMP dword ptr [EBX*0x4 + 0x6fa24c]
switchD_006f9d79::caseD_1:
006F9D80  8B 5D 1C                  MOV EBX,dword ptr [EBP + 0x1c]
006F9D83  33 C9                     XOR ECX,ECX
006F9D85  66 8B 0B                  MOV CX,word ptr [EBX]
006F9D88  8B 5D 18                  MOV EBX,dword ptr [EBP + 0x18]
006F9D8B  3B D9                     CMP EBX,ECX
006F9D8D  77 04                     JA 0x006f9d93
006F9D8F  8A 0A                     MOV CL,byte ptr [EDX]
006F9D91  EB 0A                     JMP 0x006f9d9d
LAB_006f9d93:
006F9D93  8B 5D 40                  MOV EBX,dword ptr [EBP + 0x40]
006F9D96  33 C9                     XOR ECX,ECX
006F9D98  8A 0F                     MOV CL,byte ptr [EDI]
006F9D9A  8A 0C 19                  MOV CL,byte ptr [ECX + EBX*0x1]
LAB_006f9d9d:
006F9D9D  8B 5D 1C                  MOV EBX,dword ptr [EBP + 0x1c]
006F9DA0  88 0E                     MOV byte ptr [ESI],CL
006F9DA2  B9 02 00 00 00            MOV ECX,0x2
006F9DA7  03 D9                     ADD EBX,ECX
006F9DA9  46                        INC ESI
006F9DAA  47                        INC EDI
006F9DAB  42                        INC EDX
006F9DAC  48                        DEC EAX
006F9DAD  89 5D 1C                  MOV dword ptr [EBP + 0x1c],EBX
006F9DB0  85 C0                     TEST EAX,EAX
006F9DB2  0F 8E 1D 01 00 00         JLE 0x006f9ed5
switchD_006f9d79::caseD_2:
006F9DB8  42                        INC EDX
006F9DB9  48                        DEC EAX
006F9DBA  85 C0                     TEST EAX,EAX
006F9DBC  B9 03 00 00 00            MOV ECX,0x3
006F9DC1  0F 8E 0E 01 00 00         JLE 0x006f9ed5
switchD_006f9d79::caseD_3:
006F9DC7  8B 5D 1C                  MOV EBX,dword ptr [EBP + 0x1c]
006F9DCA  33 C9                     XOR ECX,ECX
006F9DCC  66 8B 0B                  MOV CX,word ptr [EBX]
006F9DCF  8B 5D 18                  MOV EBX,dword ptr [EBP + 0x18]
006F9DD2  3B D9                     CMP EBX,ECX
006F9DD4  77 04                     JA 0x006f9dda
006F9DD6  8A 0A                     MOV CL,byte ptr [EDX]
006F9DD8  EB 0A                     JMP 0x006f9de4
LAB_006f9dda:
006F9DDA  8B 5D 40                  MOV EBX,dword ptr [EBP + 0x40]
006F9DDD  33 C9                     XOR ECX,ECX
006F9DDF  8A 0F                     MOV CL,byte ptr [EDI]
006F9DE1  8A 0C 19                  MOV CL,byte ptr [ECX + EBX*0x1]
LAB_006f9de4:
006F9DE4  8B 5D 1C                  MOV EBX,dword ptr [EBP + 0x1c]
006F9DE7  88 0E                     MOV byte ptr [ESI],CL
006F9DE9  83 C3 02                  ADD EBX,0x2
006F9DEC  46                        INC ESI
006F9DED  47                        INC EDI
006F9DEE  42                        INC EDX
006F9DEF  48                        DEC EAX
006F9DF0  89 5D 1C                  MOV dword ptr [EBP + 0x1c],EBX
006F9DF3  85 C0                     TEST EAX,EAX
006F9DF5  B9 04 00 00 00            MOV ECX,0x4
006F9DFA  0F 8E D5 00 00 00         JLE 0x006f9ed5
switchD_006f9d79::caseD_4:
006F9E00  42                        INC EDX
006F9E01  33 C9                     XOR ECX,ECX
006F9E03  48                        DEC EAX
switchD_006f9d79::default:
006F9E04  85 C0                     TEST EAX,EAX
006F9E06  0F 8E C9 00 00 00         JLE 0x006f9ed5
006F9E0C  42                        INC EDX
006F9E0D  48                        DEC EAX
006F9E0E  85 C0                     TEST EAX,EAX
006F9E10  B9 01 00 00 00            MOV ECX,0x1
006F9E15  0F 8E BA 00 00 00         JLE 0x006f9ed5
LAB_006f9e1b:
006F9E1B  8B 5D 1C                  MOV EBX,dword ptr [EBP + 0x1c]
006F9E1E  33 C9                     XOR ECX,ECX
006F9E20  66 8B 0B                  MOV CX,word ptr [EBX]
006F9E23  8B 5D 18                  MOV EBX,dword ptr [EBP + 0x18]
006F9E26  3B D9                     CMP EBX,ECX
006F9E28  77 04                     JA 0x006f9e2e
006F9E2A  8A 0A                     MOV CL,byte ptr [EDX]
006F9E2C  EB 0A                     JMP 0x006f9e38
LAB_006f9e2e:
006F9E2E  8B 5D 40                  MOV EBX,dword ptr [EBP + 0x40]
006F9E31  33 C9                     XOR ECX,ECX
006F9E33  8A 0F                     MOV CL,byte ptr [EDI]
006F9E35  8A 0C 19                  MOV CL,byte ptr [ECX + EBX*0x1]
LAB_006f9e38:
006F9E38  8B 5D 1C                  MOV EBX,dword ptr [EBP + 0x1c]
006F9E3B  88 0E                     MOV byte ptr [ESI],CL
006F9E3D  B9 02 00 00 00            MOV ECX,0x2
006F9E42  03 D9                     ADD EBX,ECX
006F9E44  46                        INC ESI
006F9E45  47                        INC EDI
006F9E46  42                        INC EDX
006F9E47  48                        DEC EAX
006F9E48  89 5D 1C                  MOV dword ptr [EBP + 0x1c],EBX
006F9E4B  85 C0                     TEST EAX,EAX
006F9E4D  0F 8E 82 00 00 00         JLE 0x006f9ed5
006F9E53  42                        INC EDX
006F9E54  48                        DEC EAX
006F9E55  85 C0                     TEST EAX,EAX
006F9E57  B9 03 00 00 00            MOV ECX,0x3
006F9E5C  7E 77                     JLE 0x006f9ed5
006F9E5E  33 C9                     XOR ECX,ECX
006F9E60  66 8B 0B                  MOV CX,word ptr [EBX]
006F9E63  8B 5D 18                  MOV EBX,dword ptr [EBP + 0x18]
006F9E66  3B D9                     CMP EBX,ECX
006F9E68  77 04                     JA 0x006f9e6e
006F9E6A  8A 0A                     MOV CL,byte ptr [EDX]
006F9E6C  EB 0A                     JMP 0x006f9e78
LAB_006f9e6e:
006F9E6E  8B 5D 40                  MOV EBX,dword ptr [EBP + 0x40]
006F9E71  33 C9                     XOR ECX,ECX
006F9E73  8A 0F                     MOV CL,byte ptr [EDI]
006F9E75  8A 0C 19                  MOV CL,byte ptr [ECX + EBX*0x1]
LAB_006f9e78:
006F9E78  8B 5D 1C                  MOV EBX,dword ptr [EBP + 0x1c]
006F9E7B  88 0E                     MOV byte ptr [ESI],CL
006F9E7D  83 C3 02                  ADD EBX,0x2
006F9E80  46                        INC ESI
006F9E81  47                        INC EDI
006F9E82  42                        INC EDX
006F9E83  48                        DEC EAX
006F9E84  89 5D 1C                  MOV dword ptr [EBP + 0x1c],EBX
006F9E87  85 C0                     TEST EAX,EAX
006F9E89  B9 04 00 00 00            MOV ECX,0x4
006F9E8E  7E 45                     JLE 0x006f9ed5
006F9E90  42                        INC EDX
006F9E91  33 C9                     XOR ECX,ECX
006F9E93  48                        DEC EAX
006F9E94  85 C0                     TEST EAX,EAX
006F9E96  7E 3D                     JLE 0x006f9ed5
006F9E98  42                        INC EDX
006F9E99  48                        DEC EAX
006F9E9A  85 C0                     TEST EAX,EAX
006F9E9C  B9 01 00 00 00            MOV ECX,0x1
006F9EA1  0F 8F 74 FF FF FF         JG 0x006f9e1b
006F9EA7  EB 2C                     JMP 0x006f9ed5
LAB_006f9ea9:
006F9EA9  48                        DEC EAX
006F9EAA  78 29                     JS 0x006f9ed5
006F9EAC  8B 5D 1C                  MOV EBX,dword ptr [EBP + 0x1c]
006F9EAF  40                        INC EAX
006F9EB0  89 45 F4                  MOV dword ptr [EBP + -0xc],EAX
LAB_006f9eb3:
006F9EB3  8B C1                     MOV EAX,ECX
006F9EB5  83 E0 01                  AND EAX,0x1
006F9EB8  3C 01                     CMP AL,0x1
006F9EBA  75 05                     JNZ 0x006f9ec1
006F9EBC  46                        INC ESI
006F9EBD  47                        INC EDI
006F9EBE  83 C3 02                  ADD EBX,0x2
LAB_006f9ec1:
006F9EC1  41                        INC ECX
006F9EC2  83 F9 04                  CMP ECX,0x4
006F9EC5  7E 02                     JLE 0x006f9ec9
006F9EC7  33 C9                     XOR ECX,ECX
LAB_006f9ec9:
006F9EC9  8B 45 F4                  MOV EAX,dword ptr [EBP + -0xc]
006F9ECC  48                        DEC EAX
006F9ECD  89 45 F4                  MOV dword ptr [EBP + -0xc],EAX
006F9ED0  75 E1                     JNZ 0x006f9eb3
006F9ED2  89 5D 1C                  MOV dword ptr [EBP + 0x1c],EBX
LAB_006f9ed5:
006F9ED5  8B 5D FC                  MOV EBX,dword ptr [EBP + -0x4]
006F9ED8  85 DB                     TEST EBX,EBX
006F9EDA  7E 2C                     JLE 0x006f9f08
006F9EDC  33 C0                     XOR EAX,EAX
006F9EDE  8A 02                     MOV AL,byte ptr [EDX]
006F9EE0  8B D8                     MOV EBX,EAX
006F9EE2  89 45 F8                  MOV dword ptr [EBP + -0x8],EAX
006F9EE5  81 E3 80 00 00 00         AND EBX,0x80
006F9EEB  42                        INC EDX
006F9EEC  85 DB                     TEST EBX,EBX
006F9EEE  89 5D F4                  MOV dword ptr [EBP + -0xc],EBX
006F9EF1  74 05                     JZ 0x006f9ef8
006F9EF3  83 E0 3F                  AND EAX,0x3f
006F9EF6  EB 03                     JMP 0x006f9efb
LAB_006f9ef8:
006F9EF8  83 E0 7F                  AND EAX,0x7f
LAB_006f9efb:
006F9EFB  8B 5D FC                  MOV EBX,dword ptr [EBP + -0x4]
006F9EFE  3B C3                     CMP EAX,EBX
006F9F00  0F 8E ED FC FF FF         JLE 0x006f9bf3
006F9F06  EB 02                     JMP 0x006f9f0a
LAB_006f9f08:
006F9F08  33 C0                     XOR EAX,EAX
LAB_006f9f0a:
006F9F0A  2B C3                     SUB EAX,EBX
006F9F0C  85 DB                     TEST EBX,EBX
006F9F0E  8B 5D F8                  MOV EBX,dword ptr [EBP + -0x8]
006F9F11  0F 8E 90 02 00 00         JLE 0x006fa1a7
006F9F17  F6 C3 80                  TEST BL,0x80
006F9F1A  0F 84 87 02 00 00         JZ 0x006fa1a7
006F9F20  F6 C3 40                  TEST BL,0x40
006F9F23  0F 84 42 01 00 00         JZ 0x006fa06b
006F9F29  33 DB                     XOR EBX,EBX
006F9F2B  8A 1A                     MOV BL,byte ptr [EDX]
006F9F2D  42                        INC EDX
006F9F2E  85 C9                     TEST ECX,ECX
006F9F30  89 5D F4                  MOV dword ptr [EBP + -0xc],EBX
006F9F33  0F 8E 99 00 00 00         JLE 0x006f9fd2
006F9F39  49                        DEC ECX
006F9F3A  83 F9 03                  CMP ECX,0x3
006F9F3D  0F 87 8F 00 00 00         JA 0x006f9fd2
switchD_006f9f43::switchD:
006F9F43  FF 24 8D 5C A2 6F 00      JMP dword ptr [ECX*0x4 + 0x6fa25c]
switchD_006f9f43::caseD_1:
006F9F4A  8B 5D 1C                  MOV EBX,dword ptr [EBP + 0x1c]
006F9F4D  33 C9                     XOR ECX,ECX
006F9F4F  66 8B 0B                  MOV CX,word ptr [EBX]
006F9F52  8B 5D 18                  MOV EBX,dword ptr [EBP + 0x18]
006F9F55  3B D9                     CMP EBX,ECX
006F9F57  77 05                     JA 0x006f9f5e
006F9F59  8A 4D F4                  MOV CL,byte ptr [EBP + -0xc]
006F9F5C  EB 0A                     JMP 0x006f9f68
LAB_006f9f5e:
006F9F5E  8B 5D 40                  MOV EBX,dword ptr [EBP + 0x40]
006F9F61  33 C9                     XOR ECX,ECX
006F9F63  8A 0F                     MOV CL,byte ptr [EDI]
006F9F65  8A 0C 19                  MOV CL,byte ptr [ECX + EBX*0x1]
LAB_006f9f68:
006F9F68  88 0E                     MOV byte ptr [ESI],CL
006F9F6A  8B 4D 1C                  MOV ECX,dword ptr [EBP + 0x1c]
006F9F6D  83 C1 02                  ADD ECX,0x2
006F9F70  46                        INC ESI
006F9F71  89 4D 1C                  MOV dword ptr [EBP + 0x1c],ECX
006F9F74  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
006F9F77  47                        INC EDI
006F9F78  49                        DEC ECX
006F9F79  85 C9                     TEST ECX,ECX
006F9F7B  0F 8E 23 02 00 00         JLE 0x006fa1a4
006F9F81  EB 03                     JMP 0x006f9f86
switchD_006f9f43::caseD_2:
006F9F83  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
LAB_006f9f86:
006F9F86  49                        DEC ECX
006F9F87  85 C9                     TEST ECX,ECX
006F9F89  89 4D FC                  MOV dword ptr [EBP + -0x4],ECX
006F9F8C  0F 8E 12 02 00 00         JLE 0x006fa1a4
switchD_006f9f43::caseD_3:
006F9F92  8B 5D 1C                  MOV EBX,dword ptr [EBP + 0x1c]
006F9F95  33 C9                     XOR ECX,ECX
006F9F97  66 8B 0B                  MOV CX,word ptr [EBX]
006F9F9A  8B 5D 18                  MOV EBX,dword ptr [EBP + 0x18]
006F9F9D  3B D9                     CMP EBX,ECX
006F9F9F  77 05                     JA 0x006f9fa6
006F9FA1  8A 4D F4                  MOV CL,byte ptr [EBP + -0xc]
006F9FA4  EB 0A                     JMP 0x006f9fb0
LAB_006f9fa6:
006F9FA6  8B 5D 40                  MOV EBX,dword ptr [EBP + 0x40]
006F9FA9  33 C9                     XOR ECX,ECX
006F9FAB  8A 0F                     MOV CL,byte ptr [EDI]
006F9FAD  8A 0C 19                  MOV CL,byte ptr [ECX + EBX*0x1]
LAB_006f9fb0:
006F9FB0  88 0E                     MOV byte ptr [ESI],CL
006F9FB2  8B 4D 1C                  MOV ECX,dword ptr [EBP + 0x1c]
006F9FB5  83 C1 02                  ADD ECX,0x2
006F9FB8  46                        INC ESI
006F9FB9  89 4D 1C                  MOV dword ptr [EBP + 0x1c],ECX
006F9FBC  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
006F9FBF  47                        INC EDI
006F9FC0  49                        DEC ECX
006F9FC1  85 C9                     TEST ECX,ECX
006F9FC3  0F 8E DB 01 00 00         JLE 0x006fa1a4
006F9FC9  49                        DEC ECX
006F9FCA  EB 09                     JMP 0x006f9fd5
switchD_006f9f43::caseD_4:
006F9FCC  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
006F9FCF  49                        DEC ECX
006F9FD0  EB 03                     JMP 0x006f9fd5
LAB_006f9fd2:
006F9FD2  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
switchD_006f9f43::default:
006F9FD5  85 C9                     TEST ECX,ECX
006F9FD7  0F 8E C7 01 00 00         JLE 0x006fa1a4
006F9FDD  49                        DEC ECX
006F9FDE  85 C9                     TEST ECX,ECX
006F9FE0  89 4D FC                  MOV dword ptr [EBP + -0x4],ECX
006F9FE3  0F 8E BB 01 00 00         JLE 0x006fa1a4
LAB_006f9fe9:
006F9FE9  8B 5D 1C                  MOV EBX,dword ptr [EBP + 0x1c]
006F9FEC  33 C9                     XOR ECX,ECX
006F9FEE  66 8B 0B                  MOV CX,word ptr [EBX]
006F9FF1  8B 5D 18                  MOV EBX,dword ptr [EBP + 0x18]
006F9FF4  3B D9                     CMP EBX,ECX
006F9FF6  77 05                     JA 0x006f9ffd
006F9FF8  8A 4D F4                  MOV CL,byte ptr [EBP + -0xc]
006F9FFB  EB 0A                     JMP 0x006fa007
LAB_006f9ffd:
006F9FFD  8B 5D 40                  MOV EBX,dword ptr [EBP + 0x40]
006FA000  33 C9                     XOR ECX,ECX
006FA002  8A 0F                     MOV CL,byte ptr [EDI]
006FA004  8A 0C 19                  MOV CL,byte ptr [ECX + EBX*0x1]
LAB_006fa007:
006FA007  88 0E                     MOV byte ptr [ESI],CL
006FA009  8B 4D 1C                  MOV ECX,dword ptr [EBP + 0x1c]
006FA00C  83 C1 02                  ADD ECX,0x2
006FA00F  46                        INC ESI
006FA010  89 4D 1C                  MOV dword ptr [EBP + 0x1c],ECX
006FA013  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
006FA016  83 E9 02                  SUB ECX,0x2
006FA019  47                        INC EDI
006FA01A  85 C9                     TEST ECX,ECX
006FA01C  89 4D FC                  MOV dword ptr [EBP + -0x4],ECX
006FA01F  0F 8E 7F 01 00 00         JLE 0x006fa1a4
006FA025  8B 5D 1C                  MOV EBX,dword ptr [EBP + 0x1c]
006FA028  33 C9                     XOR ECX,ECX
006FA02A  66 8B 0B                  MOV CX,word ptr [EBX]
006FA02D  8B 5D 18                  MOV EBX,dword ptr [EBP + 0x18]
006FA030  3B D9                     CMP EBX,ECX
006FA032  77 05                     JA 0x006fa039
006FA034  8A 4D F4                  MOV CL,byte ptr [EBP + -0xc]
006FA037  EB 0A                     JMP 0x006fa043
LAB_006fa039:
006FA039  8B 5D 40                  MOV EBX,dword ptr [EBP + 0x40]
006FA03C  33 C9                     XOR ECX,ECX
006FA03E  8A 0F                     MOV CL,byte ptr [EDI]
006FA040  8A 0C 19                  MOV CL,byte ptr [ECX + EBX*0x1]
LAB_006fa043:
006FA043  88 0E                     MOV byte ptr [ESI],CL
006FA045  8B 4D 1C                  MOV ECX,dword ptr [EBP + 0x1c]
006FA048  83 C1 02                  ADD ECX,0x2
006FA04B  46                        INC ESI
006FA04C  89 4D 1C                  MOV dword ptr [EBP + 0x1c],ECX
006FA04F  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
006FA052  83 E9 02                  SUB ECX,0x2
006FA055  47                        INC EDI
006FA056  85 C9                     TEST ECX,ECX
006FA058  0F 8E 46 01 00 00         JLE 0x006fa1a4
006FA05E  49                        DEC ECX
006FA05F  85 C9                     TEST ECX,ECX
006FA061  89 4D FC                  MOV dword ptr [EBP + -0x4],ECX
006FA064  7F 83                     JG 0x006f9fe9
006FA066  E9 39 01 00 00            JMP 0x006fa1a4
LAB_006fa06b:
006FA06B  85 C9                     TEST ECX,ECX
006FA06D  0F 8E A2 00 00 00         JLE 0x006fa115
006FA073  49                        DEC ECX
006FA074  83 F9 03                  CMP ECX,0x3
006FA077  0F 87 98 00 00 00         JA 0x006fa115
switchD_006fa07d::switchD:
006FA07D  FF 24 8D 6C A2 6F 00      JMP dword ptr [ECX*0x4 + 0x6fa26c]
switchD_006fa07d::caseD_1:
006FA084  8B 5D 1C                  MOV EBX,dword ptr [EBP + 0x1c]
006FA087  33 C9                     XOR ECX,ECX
006FA089  66 8B 0B                  MOV CX,word ptr [EBX]
006FA08C  8B 5D 18                  MOV EBX,dword ptr [EBP + 0x18]
006FA08F  3B D9                     CMP EBX,ECX
006FA091  77 04                     JA 0x006fa097
006FA093  8A 0A                     MOV CL,byte ptr [EDX]
006FA095  EB 0A                     JMP 0x006fa0a1
LAB_006fa097:
006FA097  8B 5D 40                  MOV EBX,dword ptr [EBP + 0x40]
006FA09A  33 C9                     XOR ECX,ECX
006FA09C  8A 0F                     MOV CL,byte ptr [EDI]
006FA09E  8A 0C 19                  MOV CL,byte ptr [ECX + EBX*0x1]
LAB_006fa0a1:
006FA0A1  8B 5D 1C                  MOV EBX,dword ptr [EBP + 0x1c]
006FA0A4  88 0E                     MOV byte ptr [ESI],CL
006FA0A6  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
006FA0A9  83 C3 02                  ADD EBX,0x2
006FA0AC  46                        INC ESI
006FA0AD  47                        INC EDI
006FA0AE  42                        INC EDX
006FA0AF  49                        DEC ECX
006FA0B0  85 C9                     TEST ECX,ECX
006FA0B2  89 5D 1C                  MOV dword ptr [EBP + 0x1c],EBX
006FA0B5  0F 8E E9 00 00 00         JLE 0x006fa1a4
006FA0BB  8B 5D F8                  MOV EBX,dword ptr [EBP + -0x8]
LAB_006fa0be:
006FA0BE  42                        INC EDX
006FA0BF  49                        DEC ECX
006FA0C0  85 C9                     TEST ECX,ECX
006FA0C2  89 4D FC                  MOV dword ptr [EBP + -0x4],ECX
006FA0C5  0F 8E DC 00 00 00         JLE 0x006fa1a7
switchD_006fa07d::caseD_3:
006FA0CB  8B 5D 1C                  MOV EBX,dword ptr [EBP + 0x1c]
006FA0CE  33 C9                     XOR ECX,ECX
006FA0D0  66 8B 0B                  MOV CX,word ptr [EBX]
006FA0D3  8B 5D 18                  MOV EBX,dword ptr [EBP + 0x18]
006FA0D6  3B D9                     CMP EBX,ECX
006FA0D8  77 09                     JA 0x006fa0e3
006FA0DA  8A 0A                     MOV CL,byte ptr [EDX]
006FA0DC  EB 0F                     JMP 0x006fa0ed
switchD_006fa07d::caseD_2:
006FA0DE  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
006FA0E1  EB DB                     JMP 0x006fa0be
LAB_006fa0e3:
006FA0E3  8B 5D 40                  MOV EBX,dword ptr [EBP + 0x40]
006FA0E6  33 C9                     XOR ECX,ECX
006FA0E8  8A 0F                     MOV CL,byte ptr [EDI]
006FA0EA  8A 0C 19                  MOV CL,byte ptr [ECX + EBX*0x1]
LAB_006fa0ed:
006FA0ED  8B 5D 1C                  MOV EBX,dword ptr [EBP + 0x1c]
006FA0F0  88 0E                     MOV byte ptr [ESI],CL
006FA0F2  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
006FA0F5  83 C3 02                  ADD EBX,0x2
006FA0F8  46                        INC ESI
006FA0F9  47                        INC EDI
006FA0FA  42                        INC EDX
006FA0FB  49                        DEC ECX
006FA0FC  85 C9                     TEST ECX,ECX
006FA0FE  89 5D 1C                  MOV dword ptr [EBP + 0x1c],EBX
006FA101  0F 8E 9D 00 00 00         JLE 0x006fa1a4
006FA107  8B 5D F8                  MOV EBX,dword ptr [EBP + -0x8]
006FA10A  42                        INC EDX
006FA10B  49                        DEC ECX
006FA10C  EB 0A                     JMP 0x006fa118
switchD_006fa07d::caseD_4:
006FA10E  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
006FA111  42                        INC EDX
006FA112  49                        DEC ECX
006FA113  EB 03                     JMP 0x006fa118
LAB_006fa115:
006FA115  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
switchD_006fa07d::default:
006FA118  85 C9                     TEST ECX,ECX
006FA11A  0F 8E 87 00 00 00         JLE 0x006fa1a7
006FA120  42                        INC EDX
006FA121  49                        DEC ECX
006FA122  85 C9                     TEST ECX,ECX
006FA124  89 4D FC                  MOV dword ptr [EBP + -0x4],ECX
006FA127  7E 7E                     JLE 0x006fa1a7
LAB_006fa129:
006FA129  8B 5D 1C                  MOV EBX,dword ptr [EBP + 0x1c]
006FA12C  33 C9                     XOR ECX,ECX
006FA12E  66 8B 0B                  MOV CX,word ptr [EBX]
006FA131  8B 5D 18                  MOV EBX,dword ptr [EBP + 0x18]
006FA134  3B D9                     CMP EBX,ECX
006FA136  77 04                     JA 0x006fa13c
006FA138  8A 0A                     MOV CL,byte ptr [EDX]
006FA13A  EB 0A                     JMP 0x006fa146
LAB_006fa13c:
006FA13C  8B 5D 40                  MOV EBX,dword ptr [EBP + 0x40]
006FA13F  33 C9                     XOR ECX,ECX
006FA141  8A 0F                     MOV CL,byte ptr [EDI]
006FA143  8A 0C 19                  MOV CL,byte ptr [ECX + EBX*0x1]
LAB_006fa146:
006FA146  8B 5D 1C                  MOV EBX,dword ptr [EBP + 0x1c]
006FA149  88 0E                     MOV byte ptr [ESI],CL
006FA14B  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
006FA14E  83 C3 02                  ADD EBX,0x2
006FA151  46                        INC ESI
006FA152  47                        INC EDI
006FA153  42                        INC EDX
006FA154  49                        DEC ECX
006FA155  85 C9                     TEST ECX,ECX
006FA157  89 5D 1C                  MOV dword ptr [EBP + 0x1c],EBX
006FA15A  7E 48                     JLE 0x006fa1a4
006FA15C  42                        INC EDX
006FA15D  49                        DEC ECX
006FA15E  85 C9                     TEST ECX,ECX
006FA160  89 4D FC                  MOV dword ptr [EBP + -0x4],ECX
006FA163  7E 3F                     JLE 0x006fa1a4
006FA165  33 C9                     XOR ECX,ECX
006FA167  66 8B 0B                  MOV CX,word ptr [EBX]
006FA16A  8B 5D 18                  MOV EBX,dword ptr [EBP + 0x18]
006FA16D  3B D9                     CMP EBX,ECX
006FA16F  77 04                     JA 0x006fa175
006FA171  8A 0A                     MOV CL,byte ptr [EDX]
006FA173  EB 0A                     JMP 0x006fa17f
LAB_006fa175:
006FA175  8B 5D 40                  MOV EBX,dword ptr [EBP + 0x40]
006FA178  33 C9                     XOR ECX,ECX
006FA17A  8A 0F                     MOV CL,byte ptr [EDI]
006FA17C  8A 0C 19                  MOV CL,byte ptr [ECX + EBX*0x1]
LAB_006fa17f:
006FA17F  8B 5D 1C                  MOV EBX,dword ptr [EBP + 0x1c]
006FA182  88 0E                     MOV byte ptr [ESI],CL
006FA184  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
006FA187  83 C3 02                  ADD EBX,0x2
006FA18A  46                        INC ESI
006FA18B  47                        INC EDI
006FA18C  42                        INC EDX
006FA18D  49                        DEC ECX
006FA18E  85 C9                     TEST ECX,ECX
006FA190  89 5D 1C                  MOV dword ptr [EBP + 0x1c],EBX
006FA193  7E 0F                     JLE 0x006fa1a4
006FA195  42                        INC EDX
006FA196  49                        DEC ECX
006FA197  85 C9                     TEST ECX,ECX
006FA199  7E 09                     JLE 0x006fa1a4
006FA19B  42                        INC EDX
006FA19C  49                        DEC ECX
006FA19D  85 C9                     TEST ECX,ECX
006FA19F  89 4D FC                  MOV dword ptr [EBP + -0x4],ECX
006FA1A2  7F 85                     JG 0x006fa129
LAB_006fa1a4:
006FA1A4  8B 5D F8                  MOV EBX,dword ptr [EBP + -0x8]
LAB_006fa1a7:
006FA1A7  8B 75 20                  MOV ESI,dword ptr [EBP + 0x20]
006FA1AA  8B 4D 24                  MOV ECX,dword ptr [EBP + 0x24]
006FA1AD  8B 7D 28                  MOV EDI,dword ptr [EBP + 0x28]
006FA1B0  2B F1                     SUB ESI,ECX
006FA1B2  2B F7                     SUB ESI,EDI
006FA1B4  3B C6                     CMP EAX,ESI
006FA1B6  7D 2B                     JGE 0x006fa1e3
LAB_006fa1b8:
006FA1B8  81 E3 C0 00 00 00         AND EBX,0xc0
006FA1BE  2B F0                     SUB ESI,EAX
006FA1C0  80 FB 80                  CMP BL,0x80
006FA1C3  75 02                     JNZ 0x006fa1c7
006FA1C5  03 D0                     ADD EDX,EAX
LAB_006fa1c7:
006FA1C7  33 DB                     XOR EBX,EBX
006FA1C9  8A 1A                     MOV BL,byte ptr [EDX]
006FA1CB  8B C3                     MOV EAX,EBX
006FA1CD  24 80                     AND AL,0x80
006FA1CF  42                        INC EDX
006FA1D0  84 C0                     TEST AL,AL
006FA1D2  8B C3                     MOV EAX,EBX
006FA1D4  74 09                     JZ 0x006fa1df
006FA1D6  83 E0 3F                  AND EAX,0x3f
006FA1D9  F6 C3 40                  TEST BL,0x40
006FA1DC  74 01                     JZ 0x006fa1df
006FA1DE  42                        INC EDX
LAB_006fa1df:
006FA1DF  3B C6                     CMP EAX,ESI
006FA1E1  7C D5                     JL 0x006fa1b8
LAB_006fa1e3:
006FA1E3  81 E3 C0 00 00 00         AND EBX,0xc0
006FA1E9  80 FB 80                  CMP BL,0x80
006FA1EC  75 02                     JNZ 0x006fa1f0
006FA1EE  03 D6                     ADD EDX,ESI
LAB_006fa1f0:
006FA1F0  8B 5D 34                  MOV EBX,dword ptr [EBP + 0x34]
LAB_006fa1f3:
006FA1F3  8B 4D 0C                  MOV ECX,dword ptr [EBP + 0xc]
006FA1F6  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
006FA1F9  8B 7D 38                  MOV EDI,dword ptr [EBP + 0x38]
006FA1FC  8B 75 10                  MOV ESI,dword ptr [EBP + 0x10]
006FA1FF  03 C1                     ADD EAX,ECX
006FA201  8B 4D 14                  MOV ECX,dword ptr [EBP + 0x14]
006FA204  89 45 08                  MOV dword ptr [EBP + 0x8],EAX
006FA207  8B 45 3C                  MOV EAX,dword ptr [EBP + 0x3c]
006FA20A  03 F8                     ADD EDI,EAX
006FA20C  03 F1                     ADD ESI,ECX
006FA20E  43                        INC EBX
006FA20F  89 7D 38                  MOV dword ptr [EBP + 0x38],EDI
006FA212  83 FB 04                  CMP EBX,0x4
006FA215  89 75 10                  MOV dword ptr [EBP + 0x10],ESI
006FA218  89 5D 34                  MOV dword ptr [EBP + 0x34],EBX
006FA21B  7E 07                     JLE 0x006fa224
006FA21D  C7 45 34 00 00 00 00      MOV dword ptr [EBP + 0x34],0x0
LAB_006fa224:
006FA224  8B 45 2C                  MOV EAX,dword ptr [EBP + 0x2c]
006FA227  48                        DEC EAX
006FA228  89 45 2C                  MOV dword ptr [EBP + 0x2c],EAX
006FA22B  0F 89 C6 F8 FF FF         JNS 0x006f9af7
006FA231  5F                        POP EDI
006FA232  5E                        POP ESI
006FA233  5B                        POP EBX
LAB_006fa234:
006FA234  8B E5                     MOV ESP,EBP
006FA236  5D                        POP EBP
006FA237  C2 3C 00                  RET 0x3c
