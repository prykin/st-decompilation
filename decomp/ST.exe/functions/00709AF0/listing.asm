FUN_00709af0:
00709AF0  55                        PUSH EBP
00709AF1  8B EC                     MOV EBP,ESP
00709AF3  81 EC 84 00 00 00         SUB ESP,0x84
00709AF9  A1 F8 8D 85 00            MOV EAX,[0x00858df8]
00709AFE  53                        PUSH EBX
00709AFF  56                        PUSH ESI
00709B00  57                        PUSH EDI
00709B01  33 FF                     XOR EDI,EDI
00709B03  8D 55 80                  LEA EDX,[EBP + -0x80]
00709B06  8D 8D 7C FF FF FF         LEA ECX,[EBP + 0xffffff7c]
00709B0C  57                        PUSH EDI
00709B0D  52                        PUSH EDX
00709B0E  89 7D FC                  MOV dword ptr [EBP + -0x4],EDI
00709B11  89 7D F8                  MOV dword ptr [EBP + -0x8],EDI
00709B14  89 85 7C FF FF FF         MOV dword ptr [EBP + 0xffffff7c],EAX
00709B1A  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
00709B20  E8 CB 3C 02 00            CALL 0x0072d7f0
00709B25  8B F0                     MOV ESI,EAX
00709B27  83 C4 08                  ADD ESP,0x8
00709B2A  3B F7                     CMP ESI,EDI
00709B2C  0F 85 28 02 00 00         JNZ 0x00709d5a
00709B32  8B 5D 08                  MOV EBX,dword ptr [EBP + 0x8]
00709B35  3B DF                     CMP EBX,EDI
00709B37  75 20                     JNZ 0x00709b59
00709B39  A1 7C D7 7E 00            MOV EAX,[0x007ed77c]
00709B3E  68 9F 00 00 00            PUSH 0x9f
00709B43  68 5C FF 7E 00            PUSH 0x7eff5c
00709B48  50                        PUSH EAX
00709B49  6A CC                     PUSH -0x34
00709B4B  E8 F0 C2 F9 FF            CALL 0x006a5e40
00709B50  33 C0                     XOR EAX,EAX
00709B52  5F                        POP EDI
00709B53  5E                        POP ESI
00709B54  5B                        POP EBX
00709B55  8B E5                     MOV ESP,EBP
00709B57  5D                        POP EBP
00709B58  C3                        RET
LAB_00709b59:
00709B59  39 7B 04                  CMP dword ptr [EBX + 0x4],EDI
00709B5C  75 21                     JNZ 0x00709b7f
00709B5E  8B 0D 7C D7 7E 00         MOV ECX,dword ptr [0x007ed77c]
00709B64  68 A0 00 00 00            PUSH 0xa0
00709B69  68 5C FF 7E 00            PUSH 0x7eff5c
00709B6E  51                        PUSH ECX
00709B6F  6A CC                     PUSH -0x34
00709B71  E8 CA C2 F9 FF            CALL 0x006a5e40
00709B76  33 C0                     XOR EAX,EAX
00709B78  5F                        POP EDI
00709B79  5E                        POP ESI
00709B7A  5B                        POP EBX
00709B7B  8B E5                     MOV ESP,EBP
00709B7D  5D                        POP EBP
00709B7E  C3                        RET
LAB_00709b7f:
00709B7F  8B 75 14                  MOV ESI,dword ptr [EBP + 0x14]
00709B82  8B 7D 10                  MOV EDI,dword ptr [EBP + 0x10]
00709B85  8B 4D 0C                  MOV ECX,dword ptr [EBP + 0xc]
00709B88  8D 55 F4                  LEA EDX,[EBP + -0xc]
00709B8B  8D 45 F8                  LEA EAX,[EBP + -0x8]
00709B8E  52                        PUSH EDX
00709B8F  50                        PUSH EAX
00709B90  56                        PUSH ESI
00709B91  57                        PUSH EDI
00709B92  51                        PUSH ECX
00709B93  53                        PUSH EBX
00709B94  E8 07 FD FF FF            CALL 0x007098a0
00709B99  83 C4 18                  ADD ESP,0x18
00709B9C  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
00709B9F  85 C0                     TEST EAX,EAX
00709BA1  0F 85 92 01 00 00         JNZ 0x00709d39
00709BA7  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
00709BAA  8B C8                     MOV ECX,EAX
00709BAC  81 E1 FF 00 00 00         AND ECX,0xff
00709BB2  83 F9 1F                  CMP ECX,0x1f
00709BB5  0F 87 5D 01 00 00         JA 0x00709d18
00709BBB  33 D2                     XOR EDX,EDX
00709BBD  8A 91 E8 9D 70 00         MOV DL,byte ptr [ECX + 0x709de8]
switchD_00709bc3::switchD:
00709BC3  FF 24 95 BC 9D 70 00      JMP dword ptr [EDX*0x4 + 0x709dbc]
switchD_00709bc3::caseD_1:
00709BCA  8B 4D 1C                  MOV ECX,dword ptr [EBP + 0x1c]
00709BCD  8B 55 18                  MOV EDX,dword ptr [EBP + 0x18]
00709BD0  51                        PUSH ECX
00709BD1  52                        PUSH EDX
00709BD2  57                        PUSH EDI
00709BD3  50                        PUSH EAX
00709BD4  8B 03                     MOV EAX,dword ptr [EBX]
00709BD6  50                        PUSH EAX
00709BD7  E8 C4 09 00 00            CALL 0x0070a5a0
00709BDC  83 C4 14                  ADD ESP,0x14
00709BDF  E9 C9 00 00 00            JMP 0x00709cad
switchD_00709bc3::caseD_0:
00709BE4  8B 4D 1C                  MOV ECX,dword ptr [EBP + 0x1c]
00709BE7  8B 55 18                  MOV EDX,dword ptr [EBP + 0x18]
00709BEA  8B 03                     MOV EAX,dword ptr [EBX]
00709BEC  51                        PUSH ECX
00709BED  52                        PUSH EDX
00709BEE  57                        PUSH EDI
00709BEF  50                        PUSH EAX
00709BF0  E8 0B 11 01 00            CALL 0x0071ad00
00709BF5  E9 B0 00 00 00            JMP 0x00709caa
switchD_00709bc3::caseD_2:
00709BFA  8B 4D 1C                  MOV ECX,dword ptr [EBP + 0x1c]
00709BFD  8B 55 18                  MOV EDX,dword ptr [EBP + 0x18]
00709C00  8B 03                     MOV EAX,dword ptr [EBX]
00709C02  51                        PUSH ECX
00709C03  52                        PUSH EDX
00709C04  57                        PUSH EDI
00709C05  50                        PUSH EAX
00709C06  E8 F5 00 01 00            CALL 0x00719d00
00709C0B  E9 9A 00 00 00            JMP 0x00709caa
switchD_00709bc3::caseD_b:
00709C10  8B 4D 1C                  MOV ECX,dword ptr [EBP + 0x1c]
00709C13  8B 55 24                  MOV EDX,dword ptr [EBP + 0x24]
00709C16  8B 45 20                  MOV EAX,dword ptr [EBP + 0x20]
00709C19  51                        PUSH ECX
00709C1A  8B 4D 18                  MOV ECX,dword ptr [EBP + 0x18]
00709C1D  52                        PUSH EDX
00709C1E  8B 13                     MOV EDX,dword ptr [EBX]
00709C20  50                        PUSH EAX
00709C21  51                        PUSH ECX
00709C22  57                        PUSH EDI
00709C23  52                        PUSH EDX
00709C24  E8 37 12 00 00            CALL 0x0070ae60
00709C29  83 C4 18                  ADD ESP,0x18
00709C2C  EB 7F                     JMP 0x00709cad
switchD_00709bc3::caseD_7:
00709C2E  8B 45 1C                  MOV EAX,dword ptr [EBP + 0x1c]
00709C31  8B 4D 18                  MOV ECX,dword ptr [EBP + 0x18]
00709C34  8B 13                     MOV EDX,dword ptr [EBX]
00709C36  50                        PUSH EAX
00709C37  51                        PUSH ECX
00709C38  57                        PUSH EDI
00709C39  52                        PUSH EDX
00709C3A  E8 21 C0 01 00            CALL 0x00725c60
00709C3F  EB 69                     JMP 0x00709caa
switchD_00709bc3::caseD_8:
00709C41  8B 45 1C                  MOV EAX,dword ptr [EBP + 0x1c]
00709C44  8B 4D 18                  MOV ECX,dword ptr [EBP + 0x18]
00709C47  8B 13                     MOV EDX,dword ptr [EBX]
00709C49  50                        PUSH EAX
00709C4A  51                        PUSH ECX
00709C4B  56                        PUSH ESI
00709C4C  57                        PUSH EDI
00709C4D  52                        PUSH EDX
00709C4E  E8 FD C2 01 00            CALL 0x00725f50
00709C53  83 C4 14                  ADD ESP,0x14
00709C56  EB 55                     JMP 0x00709cad
switchD_00709bc3::caseD_13:
00709C58  8B 4D 1C                  MOV ECX,dword ptr [EBP + 0x1c]
00709C5B  8B 55 18                  MOV EDX,dword ptr [EBP + 0x18]
00709C5E  51                        PUSH ECX
00709C5F  52                        PUSH EDX
00709C60  50                        PUSH EAX
00709C61  8B 03                     MOV EAX,dword ptr [EBX]
00709C63  57                        PUSH EDI
00709C64  50                        PUSH EAX
00709C65  E8 E6 CB 00 00            CALL 0x00716850
00709C6A  83 C4 14                  ADD ESP,0x14
00709C6D  EB 3E                     JMP 0x00709cad
switchD_00709bc3::caseD_15:
00709C6F  8B 4D 1C                  MOV ECX,dword ptr [EBP + 0x1c]
00709C72  8B 55 18                  MOV EDX,dword ptr [EBP + 0x18]
00709C75  8B 03                     MOV EAX,dword ptr [EBX]
00709C77  51                        PUSH ECX
00709C78  52                        PUSH EDX
00709C79  57                        PUSH EDI
00709C7A  50                        PUSH EAX
00709C7B  E8 B0 C9 01 00            CALL 0x00726630
00709C80  EB 28                     JMP 0x00709caa
switchD_00709bc3::caseD_1f:
00709C82  8B 4D 1C                  MOV ECX,dword ptr [EBP + 0x1c]
00709C85  8B 55 18                  MOV EDX,dword ptr [EBP + 0x18]
00709C88  8B 03                     MOV EAX,dword ptr [EBX]
00709C8A  51                        PUSH ECX
00709C8B  52                        PUSH EDX
00709C8C  56                        PUSH ESI
00709C8D  57                        PUSH EDI
00709C8E  50                        PUSH EAX
00709C8F  E8 9C 17 00 00            CALL 0x0070b430
00709C94  83 C4 14                  ADD ESP,0x14
00709C97  EB 14                     JMP 0x00709cad
switchD_00709bc3::caseD_1e:
00709C99  8B 4D 1C                  MOV ECX,dword ptr [EBP + 0x1c]
00709C9C  8B 55 18                  MOV EDX,dword ptr [EBP + 0x18]
00709C9F  8B 03                     MOV EAX,dword ptr [EBX]
00709CA1  51                        PUSH ECX
00709CA2  52                        PUSH EDX
00709CA3  57                        PUSH EDI
00709CA4  50                        PUSH EAX
00709CA5  E8 D6 CD 01 00            CALL 0x00726a80
LAB_00709caa:
00709CAA  83 C4 10                  ADD ESP,0x10
LAB_00709cad:
00709CAD  8B D0                     MOV EDX,EAX
00709CAF  85 D2                     TEST EDX,EDX
00709CB1  89 55 FC                  MOV dword ptr [EBP + -0x4],EDX
00709CB4  0F 84 8C 00 00 00         JZ 0x00709d46
00709CBA  8A 4D 0C                  MOV CL,byte ptr [EBP + 0xc]
00709CBD  33 C0                     XOR EAX,EAX
00709CBF  88 4D C0                  MOV byte ptr [EBP + -0x40],CL
00709CC2  83 C9 FF                  OR ECX,0xffffffff
00709CC5  F2 AE                     SCASB.REPNE ES:EDI
00709CC7  F7 D1                     NOT ECX
00709CC9  8D 75 C1                  LEA ESI,[EBP + -0x3f]
00709CCC  2B F9                     SUB EDI,ECX
00709CCE  8B C1                     MOV EAX,ECX
00709CD0  89 75 F0                  MOV dword ptr [EBP + -0x10],ESI
00709CD3  8B F7                     MOV ESI,EDI
00709CD5  8B 7D F0                  MOV EDI,dword ptr [EBP + -0x10]
00709CD8  C1 E9 02                  SHR ECX,0x2
00709CDB  F3 A5                     MOVSD.REP ES:EDI,ESI
00709CDD  8B C8                     MOV ECX,EAX
00709CDF  8B 43 04                  MOV EAX,dword ptr [EBX + 0x4]
00709CE2  83 E1 03                  AND ECX,0x3
00709CE5  F3 A4                     MOVSB.REP ES:EDI,ESI
00709CE7  8B 4D 14                  MOV ECX,dword ptr [EBP + 0x14]
00709CEA  89 55 E9                  MOV dword ptr [EBP + -0x17],EDX
00709CED  8D 55 C0                  LEA EDX,[EBP + -0x40]
00709CF0  89 4D E1                  MOV dword ptr [EBP + -0x1f],ECX
00709CF3  52                        PUSH EDX
00709CF4  50                        PUSH EAX
00709CF5  C7 45 E5 01 00 00 00      MOV dword ptr [EBP + -0x1b],0x1
00709CFC  E8 BF 44 FA FF            CALL 0x006ae1c0
00709D01  8B 85 7C FF FF FF         MOV EAX,dword ptr [EBP + 0xffffff7c]
00709D07  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
00709D0A  A3 F8 8D 85 00            MOV [0x00858df8],EAX
00709D0F  8B C2                     MOV EAX,EDX
00709D11  5F                        POP EDI
00709D12  5E                        POP ESI
00709D13  5B                        POP EBX
00709D14  8B E5                     MOV ESP,EBP
00709D16  5D                        POP EBP
00709D17  C3                        RET
switchD_00709bc3::caseD_3:
00709D18  8B 0D 7C D7 7E 00         MOV ECX,dword ptr [0x007ed77c]
00709D1E  68 B2 00 00 00            PUSH 0xb2
00709D23  68 5C FF 7E 00            PUSH 0x7eff5c
00709D28  51                        PUSH ECX
00709D29  6A CC                     PUSH -0x34
00709D2B  E8 10 C1 F9 FF            CALL 0x006a5e40
00709D30  33 C0                     XOR EAX,EAX
00709D32  5F                        POP EDI
00709D33  5E                        POP ESI
00709D34  5B                        POP EBX
00709D35  8B E5                     MOV ESP,EBP
00709D37  5D                        POP EBP
00709D38  C3                        RET
LAB_00709d39:
00709D39  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
00709D3C  8B 48 25                  MOV ECX,dword ptr [EAX + 0x25]
00709D3F  41                        INC ECX
00709D40  89 48 25                  MOV dword ptr [EAX + 0x25],ECX
00709D43  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
LAB_00709d46:
00709D46  8B 85 7C FF FF FF         MOV EAX,dword ptr [EBP + 0xffffff7c]
00709D4C  A3 F8 8D 85 00            MOV [0x00858df8],EAX
00709D51  8B C2                     MOV EAX,EDX
00709D53  5F                        POP EDI
00709D54  5E                        POP ESI
00709D55  5B                        POP EBX
00709D56  8B E5                     MOV ESP,EBP
00709D58  5D                        POP EBP
00709D59  C3                        RET
LAB_00709d5a:
00709D5A  8B 8D 7C FF FF FF         MOV ECX,dword ptr [EBP + 0xffffff7c]
00709D60  68 74 FF 7E 00            PUSH 0x7eff74
00709D65  68 CC 4C 7A 00            PUSH 0x7a4ccc
00709D6A  56                        PUSH ESI
00709D6B  57                        PUSH EDI
00709D6C  68 C4 00 00 00            PUSH 0xc4
00709D71  68 5C FF 7E 00            PUSH 0x7eff5c
00709D76  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
00709D7C  E8 4F 37 FA FF            CALL 0x006ad4d0
00709D81  83 C4 18                  ADD ESP,0x18
00709D84  85 C0                     TEST EAX,EAX
00709D86  74 01                     JZ 0x00709d89
00709D88  CC                        INT3
LAB_00709d89:
00709D89  39 7D FC                  CMP dword ptr [EBP + -0x4],EDI
00709D8C  74 14                     JZ 0x00709da2
00709D8E  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
00709D91  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
00709D94  8D 55 FC                  LEA EDX,[EBP + -0x4]
00709D97  52                        PUSH EDX
00709D98  50                        PUSH EAX
00709D99  51                        PUSH ECX
00709D9A  E8 71 FC FF FF            CALL 0x00709a10
00709D9F  83 C4 0C                  ADD ESP,0xc
LAB_00709da2:
00709DA2  68 C8 00 00 00            PUSH 0xc8
00709DA7  68 5C FF 7E 00            PUSH 0x7eff5c
00709DAC  57                        PUSH EDI
00709DAD  56                        PUSH ESI
00709DAE  E8 8D C0 F9 FF            CALL 0x006a5e40
00709DB3  5F                        POP EDI
00709DB4  5E                        POP ESI
00709DB5  33 C0                     XOR EAX,EAX
00709DB7  5B                        POP EBX
00709DB8  8B E5                     MOV ESP,EBP
00709DBA  5D                        POP EBP
00709DBB  C3                        RET
