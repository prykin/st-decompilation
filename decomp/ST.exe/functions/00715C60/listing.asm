FUN_00715c60:
00715C60  55                        PUSH EBP
00715C61  8B EC                     MOV EBP,ESP
00715C63  83 EC 48                  SUB ESP,0x48
00715C66  8B 41 04                  MOV EAX,dword ptr [ECX + 0x4]
00715C69  53                        PUSH EBX
00715C6A  56                        PUSH ESI
00715C6B  83 F8 FF                  CMP EAX,-0x1
00715C6E  57                        PUSH EDI
00715C6F  89 4D FC                  MOV dword ptr [EBP + -0x4],ECX
00715C72  75 0B                     JNZ 0x00715c7f
00715C74  33 C0                     XOR EAX,EAX
00715C76  5F                        POP EDI
00715C77  5E                        POP ESI
00715C78  5B                        POP EBX
00715C79  8B E5                     MOV ESP,EBP
00715C7B  5D                        POP EBP
00715C7C  C2 14 00                  RET 0x14
LAB_00715c7f:
00715C7F  80 79 4C 80               CMP byte ptr [ECX + 0x4c],0x80
00715C83  75 0B                     JNZ 0x00715c90
00715C85  33 C0                     XOR EAX,EAX
00715C87  5F                        POP EDI
00715C88  5E                        POP ESI
00715C89  5B                        POP EBX
00715C8A  8B E5                     MOV ESP,EBP
00715C8C  5D                        POP EBP
00715C8D  C2 14 00                  RET 0x14
LAB_00715c90:
00715C90  A1 F8 8D 85 00            MOV EAX,[0x00858df8]
00715C95  8D 55 BC                  LEA EDX,[EBP + -0x44]
00715C98  8D 4D B8                  LEA ECX,[EBP + -0x48]
00715C9B  6A 00                     PUSH 0x0
00715C9D  52                        PUSH EDX
00715C9E  89 45 B8                  MOV dword ptr [EBP + -0x48],EAX
00715CA1  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
00715CA7  E8 44 7B 01 00            CALL 0x0072d7f0
00715CAC  8B F0                     MOV ESI,EAX
00715CAE  83 C4 08                  ADD ESP,0x8
00715CB1  85 F6                     TEST ESI,ESI
00715CB3  0F 85 21 02 00 00         JNZ 0x00715eda
00715CB9  8B 5D FC                  MOV EBX,dword ptr [EBP + -0x4]
00715CBC  89 43 4D                  MOV dword ptr [EBX + 0x4d],EAX
00715CBF  8B 43 61                  MOV EAX,dword ptr [EBX + 0x61]
00715CC2  85 C0                     TEST EAX,EAX
00715CC4  75 53                     JNZ 0x00715d19
00715CC6  33 C0                     XOR EAX,EAX
00715CC8  8A 43 4C                  MOV AL,byte ptr [EBX + 0x4c]
00715CCB  83 C0 F9                  ADD EAX,-0x7
00715CCE  83 F8 7A                  CMP EAX,0x7a
00715CD1  77 46                     JA 0x00715d19
00715CD3  33 C9                     XOR ECX,ECX
00715CD5  8A 88 38 5F 71 00         MOV CL,byte ptr [EAX + 0x715f38]
switchD_00715cdb::switchD:
00715CDB  FF 24 8D 28 5F 71 00      JMP dword ptr [ECX*0x4 + 0x715f28]
switchD_00715cdb::caseD_7:
00715CE2  8B 4B 51                  MOV ECX,dword ptr [EBX + 0x51]
00715CE5  8D 43 51                  LEA EAX,[EBX + 0x51]
00715CE8  85 C9                     TEST ECX,ECX
00715CEA  74 2D                     JZ 0x00715d19
00715CEC  50                        PUSH EAX
00715CED  E8 3E 01 01 00            CALL 0x00725e30
00715CF2  EB 22                     JMP 0x00715d16
switchD_00715cdb::caseD_8:
00715CF4  8B 4B 59                  MOV ECX,dword ptr [EBX + 0x59]
00715CF7  8D 43 59                  LEA EAX,[EBX + 0x59]
00715CFA  85 C9                     TEST ECX,ECX
00715CFC  74 1B                     JZ 0x00715d19
00715CFE  50                        PUSH EAX
00715CFF  E8 5C 05 01 00            CALL 0x00726260
00715D04  EB 10                     JMP 0x00715d16
switchD_00715cdb::caseD_1e:
00715D06  8B 4B 55                  MOV ECX,dword ptr [EBX + 0x55]
00715D09  8D 43 55                  LEA EAX,[EBX + 0x55]
00715D0C  85 C9                     TEST ECX,ECX
00715D0E  74 09                     JZ 0x00715d19
00715D10  50                        PUSH EAX
00715D11  E8 BA 0E 01 00            CALL 0x00726bd0
LAB_00715d16:
00715D16  83 C4 04                  ADD ESP,0x4
switchD_00715cdb::caseD_9:
00715D19  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
00715D1C  8B 7D 14                  MOV EDI,dword ptr [EBP + 0x14]
00715D1F  8B D0                     MOV EDX,EAX
00715D21  81 E2 FF 00 00 00         AND EDX,0xff
00715D27  8D 72 F9                  LEA ESI,[EDX + -0x7]
00715D2A  83 FE 7A                  CMP ESI,0x7a
00715D2D  0F 87 3C 01 00 00         JA 0x00715e6f
00715D33  33 C9                     XOR ECX,ECX
00715D35  8A 8E C4 5F 71 00         MOV CL,byte ptr [ESI + 0x715fc4]
switchD_00715d3b::switchD:
00715D3B  FF 24 8D B4 5F 71 00      JMP dword ptr [ECX*0x4 + 0x715fb4]
switchD_00715d3b::caseD_7:
00715D42  8B 55 10                  MOV EDX,dword ptr [EBP + 0x10]
00715D45  6A 00                     PUSH 0x0
00715D47  6A 00                     PUSH 0x0
00715D49  6A 01                     PUSH 0x1
00715D4B  6A 00                     PUSH 0x0
00715D4D  52                        PUSH EDX
00715D4E  57                        PUSH EDI
00715D4F  50                        PUSH EAX
00715D50  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
00715D53  50                        PUSH EAX
00715D54  E8 97 3D FF FF            CALL 0x00709af0
00715D59  89 43 51                  MOV dword ptr [EBX + 0x51],EAX
00715D5C  83 C4 20                  ADD ESP,0x20
00715D5F  0F BF 48 2B               MOVSX ECX,word ptr [EAX + 0x2b]
00715D63  0F BF 50 29               MOVSX EDX,word ptr [EAX + 0x29]
00715D67  6A 00                     PUSH 0x0
00715D69  51                        PUSH ECX
00715D6A  52                        PUSH EDX
00715D6B  8D 48 2D                  LEA ECX,[EAX + 0x2d]
00715D6E  0F BF 50 23               MOVSX EDX,word ptr [EAX + 0x23]
00715D72  8B 43 04                  MOV EAX,dword ptr [EBX + 0x4]
00715D75  68 00 00 00 08            PUSH 0x8000000
00715D7A  51                        PUSH ECX
00715D7B  8B 4B 48                  MOV ECX,dword ptr [EBX + 0x48]
00715D7E  52                        PUSH EDX
00715D7F  6A 00                     PUSH 0x0
00715D81  50                        PUSH EAX
00715D82  51                        PUSH ECX
00715D83  E8 A8 CB F9 FF            CALL 0x006b2930
00715D88  8B 43 51                  MOV EAX,dword ptr [EBX + 0x51]
00715D8B  0F BF 50 23               MOVSX EDX,word ptr [EAX + 0x23]
00715D8F  89 53 0C                  MOV dword ptr [EBX + 0xc],EDX
00715D92  0F BF 48 29               MOVSX ECX,word ptr [EAX + 0x29]
00715D96  89 4B 24                  MOV dword ptr [EBX + 0x24],ECX
00715D99  0F BF 50 2B               MOVSX EDX,word ptr [EAX + 0x2b]
00715D9D  89 53 28                  MOV dword ptr [EBX + 0x28],EDX
00715DA0  E9 C7 00 00 00            JMP 0x00715e6c
switchD_00715d3b::caseD_1e:
00715DA5  8B 4D 10                  MOV ECX,dword ptr [EBP + 0x10]
00715DA8  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
00715DAB  6A 00                     PUSH 0x0
00715DAD  6A 00                     PUSH 0x0
00715DAF  6A 01                     PUSH 0x1
00715DB1  6A 00                     PUSH 0x0
00715DB3  51                        PUSH ECX
00715DB4  57                        PUSH EDI
00715DB5  50                        PUSH EAX
00715DB6  52                        PUSH EDX
00715DB7  E8 34 3D FF FF            CALL 0x00709af0
00715DBC  89 43 55                  MOV dword ptr [EBX + 0x55],EAX
00715DBF  83 C4 20                  ADD ESP,0x20
00715DC2  0F BF 48 08               MOVSX ECX,word ptr [EAX + 0x8]
00715DC6  0F BF 50 06               MOVSX EDX,word ptr [EAX + 0x6]
00715DCA  6A 00                     PUSH 0x0
00715DCC  51                        PUSH ECX
00715DCD  52                        PUSH EDX
00715DCE  8D 48 0A                  LEA ECX,[EAX + 0xa]
00715DD1  0F BF 10                  MOVSX EDX,word ptr [EAX]
00715DD4  8B 43 04                  MOV EAX,dword ptr [EBX + 0x4]
00715DD7  68 00 00 00 08            PUSH 0x8000000
00715DDC  51                        PUSH ECX
00715DDD  8B 4B 48                  MOV ECX,dword ptr [EBX + 0x48]
00715DE0  52                        PUSH EDX
00715DE1  6A 00                     PUSH 0x0
00715DE3  50                        PUSH EAX
00715DE4  51                        PUSH ECX
00715DE5  E8 46 CB F9 FF            CALL 0x006b2930
00715DEA  8B 43 55                  MOV EAX,dword ptr [EBX + 0x55]
00715DED  0F BF 10                  MOVSX EDX,word ptr [EAX]
00715DF0  89 53 0C                  MOV dword ptr [EBX + 0xc],EDX
00715DF3  0F BF 48 06               MOVSX ECX,word ptr [EAX + 0x6]
00715DF7  89 4B 24                  MOV dword ptr [EBX + 0x24],ECX
00715DFA  0F BF 50 08               MOVSX EDX,word ptr [EAX + 0x8]
00715DFE  89 53 28                  MOV dword ptr [EBX + 0x28],EDX
00715E01  EB 69                     JMP 0x00715e6c
switchD_00715d3b::caseD_8:
00715E03  8B 75 10                  MOV ESI,dword ptr [EBP + 0x10]
00715E06  6A 00                     PUSH 0x0
00715E08  6A 00                     PUSH 0x0
00715E0A  6A 01                     PUSH 0x1
00715E0C  6A 00                     PUSH 0x0
00715E0E  56                        PUSH ESI
00715E0F  57                        PUSH EDI
00715E10  50                        PUSH EAX
00715E11  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
00715E14  50                        PUSH EAX
00715E15  E8 D6 3C FF FF            CALL 0x00709af0
00715E1A  89 43 59                  MOV dword ptr [EBX + 0x59],EAX
00715E1D  83 C4 20                  ADD ESP,0x20
00715E20  0F BF 48 06               MOVSX ECX,word ptr [EAX + 0x6]
00715E24  0F BF 50 04               MOVSX EDX,word ptr [EAX + 0x4]
00715E28  6A 00                     PUSH 0x0
00715E2A  51                        PUSH ECX
00715E2B  52                        PUSH EDX
00715E2C  8D 48 0C                  LEA ECX,[EAX + 0xc]
00715E2F  0F BF 50 02               MOVSX EDX,word ptr [EAX + 0x2]
00715E33  0F BF 00                  MOVSX EAX,word ptr [EAX]
00715E36  68 00 00 00 04            PUSH 0x4000000
00715E3B  51                        PUSH ECX
00715E3C  8B 4B 04                  MOV ECX,dword ptr [EBX + 0x4]
00715E3F  52                        PUSH EDX
00715E40  8B 53 48                  MOV EDX,dword ptr [EBX + 0x48]
00715E43  50                        PUSH EAX
00715E44  51                        PUSH ECX
00715E45  52                        PUSH EDX
00715E46  E8 E5 CA F9 FF            CALL 0x006b2930
00715E4B  8B 43 59                  MOV EAX,dword ptr [EBX + 0x59]
00715E4E  0F BF 48 02               MOVSX ECX,word ptr [EAX + 0x2]
00715E52  89 4B 0C                  MOV dword ptr [EBX + 0xc],ECX
00715E55  0F BF 10                  MOVSX EDX,word ptr [EAX]
00715E58  89 53 18                  MOV dword ptr [EBX + 0x18],EDX
00715E5B  0F BF 48 04               MOVSX ECX,word ptr [EAX + 0x4]
00715E5F  89 4B 24                  MOV dword ptr [EBX + 0x24],ECX
00715E62  0F BF 50 06               MOVSX EDX,word ptr [EAX + 0x6]
00715E66  89 53 28                  MOV dword ptr [EBX + 0x28],EDX
00715E69  89 73 4D                  MOV dword ptr [EBX + 0x4d],ESI
LAB_00715e6c:
00715E6C  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
switchD_00715d3b::caseD_9:
00715E6F  88 43 4C                  MOV byte ptr [EBX + 0x4c],AL
00715E72  8B 43 0C                  MOV EAX,dword ptr [EBX + 0xc]
00715E75  85 C0                     TEST EAX,EAX
00715E77  7F 05                     JG 0x00715e7e
00715E79  8D 48 FF                  LEA ECX,[EAX + -0x1]
00715E7C  EB 02                     JMP 0x00715e80
LAB_00715e7e:
00715E7E  33 C9                     XOR ECX,ECX
LAB_00715e80:
00715E80  48                        DEC EAX
00715E81  89 4B 10                  MOV dword ptr [EBX + 0x10],ECX
00715E84  89 43 14                  MOV dword ptr [EBX + 0x14],EAX
00715E87  83 C9 FF                  OR ECX,0xffffffff
00715E8A  33 C0                     XOR EAX,EAX
00715E8C  8D 53 65                  LEA EDX,[EBX + 0x65]
00715E8F  F2 AE                     SCASB.REPNE ES:EDI
00715E91  F7 D1                     NOT ECX
00715E93  2B F9                     SUB EDI,ECX
00715E95  8B C1                     MOV EAX,ECX
00715E97  8B F7                     MOV ESI,EDI
00715E99  8B FA                     MOV EDI,EDX
00715E9B  C1 E9 02                  SHR ECX,0x2
00715E9E  F3 A5                     MOVSD.REP ES:EDI,ESI
00715EA0  8B C8                     MOV ECX,EAX
00715EA2  83 E1 03                  AND ECX,0x3
00715EA5  F3 A4                     MOVSB.REP ES:EDI,ESI
00715EA7  8B 75 18                  MOV ESI,dword ptr [EBP + 0x18]
00715EAA  83 FE FF                  CMP ESI,-0x1
00715EAD  74 11                     JZ 0x00715ec0
00715EAF  8B 4B 04                  MOV ECX,dword ptr [EBX + 0x4]
00715EB2  8B 53 48                  MOV EDX,dword ptr [EBX + 0x48]
00715EB5  56                        PUSH ESI
00715EB6  51                        PUSH ECX
00715EB7  52                        PUSH EDX
00715EB8  E8 63 D1 F9 FF            CALL 0x006b3020
00715EBD  89 73 5D                  MOV dword ptr [EBX + 0x5d],ESI
LAB_00715ec0:
00715EC0  8B 45 B8                  MOV EAX,dword ptr [EBP + -0x48]
00715EC3  C7 43 61 01 00 00 00      MOV dword ptr [EBX + 0x61],0x1
00715ECA  A3 F8 8D 85 00            MOV [0x00858df8],EAX
00715ECF  33 C0                     XOR EAX,EAX
00715ED1  5F                        POP EDI
00715ED2  5E                        POP ESI
00715ED3  5B                        POP EBX
00715ED4  8B E5                     MOV ESP,EBP
00715ED6  5D                        POP EBP
00715ED7  C2 14 00                  RET 0x14
LAB_00715eda:
00715EDA  8B 4D B8                  MOV ECX,dword ptr [EBP + -0x48]
00715EDD  68 A4 04 7F 00            PUSH 0x7f04a4
00715EE2  68 CC 4C 7A 00            PUSH 0x7a4ccc
00715EE7  56                        PUSH ESI
00715EE8  6A 00                     PUSH 0x0
00715EEA  68 C3 00 00 00            PUSH 0xc3
00715EEF  68 54 04 7F 00            PUSH 0x7f0454
00715EF4  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
00715EFA  E8 D1 75 F9 FF            CALL 0x006ad4d0
00715EFF  83 C4 18                  ADD ESP,0x18
00715F02  85 C0                     TEST EAX,EAX
00715F04  74 01                     JZ 0x00715f07
00715F06  CC                        INT3
LAB_00715f07:
00715F07  68 C5 00 00 00            PUSH 0xc5
00715F0C  68 54 04 7F 00            PUSH 0x7f0454
00715F11  6A 00                     PUSH 0x0
00715F13  56                        PUSH ESI
00715F14  E8 27 FF F8 FF            CALL 0x006a5e40
00715F19  5F                        POP EDI
00715F1A  5E                        POP ESI
00715F1B  B8 18 FC FF FF            MOV EAX,0xfffffc18
00715F20  5B                        POP EBX
00715F21  8B E5                     MOV ESP,EBP
00715F23  5D                        POP EBP
00715F24  C2 14 00                  RET 0x14
