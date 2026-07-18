cTypingTy::TypingInit:
00713B00  55                        PUSH EBP
00713B01  8B EC                     MOV EBP,ESP
00713B03  81 EC 98 00 00 00         SUB ESP,0x98
00713B09  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
00713B0C  53                        PUSH EBX
00713B0D  56                        PUSH ESI
00713B0E  33 F6                     XOR ESI,ESI
00713B10  3B C6                     CMP EAX,ESI
00713B12  57                        PUSH EDI
00713B13  89 4D F8                  MOV dword ptr [EBP + -0x8],ECX
00713B16  74 10                     JZ 0x00713b28
00713B18  80 38 00                  CMP byte ptr [EAX],0x0
00713B1B  75 0B                     JNZ 0x00713b28
00713B1D  33 C0                     XOR EAX,EAX
00713B1F  5F                        POP EDI
00713B20  5E                        POP ESI
00713B21  5B                        POP EBX
00713B22  8B E5                     MOV ESP,EBP
00713B24  5D                        POP EBP
00713B25  C2 34 00                  RET 0x34
LAB_00713b28:
00713B28  8B 4D 0C                  MOV ECX,dword ptr [EBP + 0xc]
00713B2B  3B CE                     CMP ECX,ESI
00713B2D  74 0C                     JZ 0x00713b3b
00713B2F  8D 85 68 FF FF FF         LEA EAX,[EBP + 0xffffff68]
00713B35  50                        PUSH EAX
00713B36  E8 75 CD FF FF            CALL 0x007108b0
LAB_00713b3b:
00713B3B  8B 0D F8 8D 85 00         MOV ECX,dword ptr [0x00858df8]
00713B41  8D 45 B4                  LEA EAX,[EBP + -0x4c]
00713B44  8D 55 B0                  LEA EDX,[EBP + -0x50]
00713B47  56                        PUSH ESI
00713B48  50                        PUSH EAX
00713B49  89 4D B0                  MOV dword ptr [EBP + -0x50],ECX
00713B4C  89 15 F8 8D 85 00         MOV dword ptr [0x00858df8],EDX
00713B52  E8 99 9C 01 00            CALL 0x0072d7f0
00713B57  8B D8                     MOV EBX,EAX
00713B59  83 C4 08                  ADD ESP,0x8
00713B5C  3B DE                     CMP EBX,ESI
00713B5E  0F 85 0E 03 00 00         JNZ 0x00713e72
00713B64  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
00713B67  8B 7D 0C                  MOV EDI,dword ptr [EBP + 0xc]
00713B6A  3B C6                     CMP EAX,ESI
00713B6C  74 04                     JZ 0x00713b72
00713B6E  3B FE                     CMP EDI,ESI
00713B70  75 18                     JNZ 0x00713b8a
LAB_00713b72:
00713B72  8B 0D 7C D7 7E 00         MOV ECX,dword ptr [0x007ed77c]
00713B78  68 ED 09 00 00            PUSH 0x9ed
00713B7D  68 90 01 7F 00            PUSH 0x7f0190
00713B82  51                        PUSH ECX
00713B83  6A CC                     PUSH -0x34
00713B85  E8 B6 22 F9 FF            CALL 0x006a5e40
LAB_00713b8a:
00713B8A  8B 5D F8                  MOV EBX,dword ptr [EBP + -0x8]
00713B8D  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
00713B90  C7 47 7E 01 00 00 00      MOV dword ptr [EDI + 0x7e],0x1
00713B97  66 89 B7 9E 00 00 00      MOV word ptr [EDI + 0x9e],SI
00713B9E  8A 15 54 C8 7C 00         MOV DL,byte ptr [0x007cc854]
00713BA4  50                        PUSH EAX
00713BA5  88 97 9E 00 00 00         MOV byte ptr [EDI + 0x9e],DL
00713BAB  8B CF                     MOV ECX,EDI
00713BAD  89 3B                     MOV dword ptr [EBX],EDI
00713BAF  89 73 58                  MOV dword ptr [EBX + 0x58],ESI
00713BB2  89 73 0C                  MOV dword ptr [EBX + 0xc],ESI
00713BB5  89 73 04                  MOV dword ptr [EBX + 0x4],ESI
00713BB8  E8 03 D9 FF FF            CALL 0x007114c0
00713BBD  8B 4D 38                  MOV ECX,dword ptr [EBP + 0x38]
00713BC0  83 C0 03                  ADD EAX,0x3
00713BC3  89 43 08                  MOV dword ptr [EBX + 0x8],EAX
00713BC6  8B 45 24                  MOV EAX,dword ptr [EBP + 0x24]
00713BC9  89 43 74                  MOV dword ptr [EBX + 0x74],EAX
00713BCC  89 43 6C                  MOV dword ptr [EBX + 0x6c],EAX
00713BCF  8B 45 28                  MOV EAX,dword ptr [EBP + 0x28]
00713BD2  89 8B A0 00 00 00         MOV dword ptr [EBX + 0xa0],ECX
00713BD8  8B 4D 2C                  MOV ECX,dword ptr [EBP + 0x2c]
00713BDB  89 43 78                  MOV dword ptr [EBX + 0x78],EAX
00713BDE  89 43 70                  MOV dword ptr [EBX + 0x70],EAX
00713BE1  8B 45 30                  MOV EAX,dword ptr [EBP + 0x30]
00713BE4  3B C6                     CMP EAX,ESI
00713BE6  C7 43 7C FF FF FF FF      MOV dword ptr [EBX + 0x7c],0xffffffff
00713BED  89 B3 88 00 00 00         MOV dword ptr [EBX + 0x88],ESI
00713BF3  89 B3 90 00 00 00         MOV dword ptr [EBX + 0x90],ESI
00713BF9  89 B3 8C 00 00 00         MOV dword ptr [EBX + 0x8c],ESI
00713BFF  89 B3 84 00 00 00         MOV dword ptr [EBX + 0x84],ESI
00713C05  89 B3 80 00 00 00         MOV dword ptr [EBX + 0x80],ESI
00713C0B  89 B3 A8 00 00 00         MOV dword ptr [EBX + 0xa8],ESI
00713C11  89 B3 B0 00 00 00         MOV dword ptr [EBX + 0xb0],ESI
00713C17  89 B3 AC 00 00 00         MOV dword ptr [EBX + 0xac],ESI
00713C1D  89 8B 94 00 00 00         MOV dword ptr [EBX + 0x94],ECX
00713C23  7D 03                     JGE 0x00713c28
00713C25  8D 41 01                  LEA EAX,[ECX + 0x1]
LAB_00713c28:
00713C28  89 83 98 00 00 00         MOV dword ptr [EBX + 0x98],EAX
00713C2E  8B 45 34                  MOV EAX,dword ptr [EBP + 0x34]
00713C31  3B C6                     CMP EAX,ESI
00713C33  7D 03                     JGE 0x00713c38
00713C35  8D 41 FF                  LEA EAX,[ECX + -0x1]
LAB_00713c38:
00713C38  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
00713C3B  8B CF                     MOV ECX,EDI
00713C3D  52                        PUSH EDX
00713C3E  89 83 9C 00 00 00         MOV dword ptr [EBX + 0x9c],EAX
00713C44  E8 27 D7 FF FF            CALL 0x00711370
00713C49  89 43 64                  MOV dword ptr [EBX + 0x64],EAX
00713C4C  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
00713C4F  50                        PUSH EAX
00713C50  8B CF                     MOV ECX,EDI
00713C52  E8 89 D7 FF FF            CALL 0x007113e0
00713C57  89 43 68                  MOV dword ptr [EBX + 0x68],EAX
00713C5A  8B 45 10                  MOV EAX,dword ptr [EBP + 0x10]
00713C5D  3B C6                     CMP EAX,ESI
00713C5F  74 1E                     JZ 0x00713c7f
00713C61  8B 4D 20                  MOV ECX,dword ptr [EBP + 0x20]
00713C64  8B 55 1C                  MOV EDX,dword ptr [EBP + 0x1c]
00713C67  51                        PUSH ECX
00713C68  8B 4D 18                  MOV ECX,dword ptr [EBP + 0x18]
00713C6B  52                        PUSH EDX
00713C6C  8B 55 14                  MOV EDX,dword ptr [EBP + 0x14]
00713C6F  51                        PUSH ECX
00713C70  52                        PUSH EDX
00713C71  56                        PUSH ESI
00713C72  50                        PUSH EAX
00713C73  8B CF                     MOV ECX,EDI
00713C75  E8 16 CE FF FF            CALL 0x00710a90
00713C7A  E9 F5 00 00 00            JMP 0x00713d74
LAB_00713c7f:
00713C7F  8B 45 24                  MOV EAX,dword ptr [EBP + 0x24]
00713C82  8B 53 64                  MOV EDX,dword ptr [EBX + 0x64]
00713C85  33 C9                     XOR ECX,ECX
00713C87  3B C6                     CMP EAX,ESI
00713C89  0F 9E C1                  SETLE CL
00713C8C  49                        DEC ECX
00713C8D  23 C8                     AND ECX,EAX
00713C8F  8D 04 11                  LEA EAX,[ECX + EDX*0x1]
00713C92  8B 4D 1C                  MOV ECX,dword ptr [EBP + 0x1c]
00713C95  3B C8                     CMP ECX,EAX
00713C97  7D 03                     JGE 0x00713c9c
00713C99  89 45 1C                  MOV dword ptr [EBP + 0x1c],EAX
LAB_00713c9c:
00713C9C  39 B7 A0 00 00 00         CMP dword ptr [EDI + 0xa0],ESI
00713CA2  74 09                     JZ 0x00713cad
00713CA4  57                        PUSH EDI
00713CA5  E8 E6 CA FF FF            CALL 0x00710790
00713CAA  83 C4 04                  ADD ESP,0x4
LAB_00713cad:
00713CAD  8B 45 28                  MOV EAX,dword ptr [EBP + 0x28]
00713CB0  8B 97 8A 00 00 00         MOV EDX,dword ptr [EDI + 0x8a]
00713CB6  33 C9                     XOR ECX,ECX
00713CB8  3B C6                     CMP EAX,ESI
00713CBA  0F 9E C1                  SETLE CL
00713CBD  49                        DEC ECX
00713CBE  23 C8                     AND ECX,EAX
00713CC0  8B 45 20                  MOV EAX,dword ptr [EBP + 0x20]
00713CC3  03 D1                     ADD EDX,ECX
00713CC5  89 4D F4                  MOV dword ptr [EBP + -0xc],ECX
00713CC8  3B C2                     CMP EAX,EDX
00713CCA  7D 1F                     JGE 0x00713ceb
00713CCC  39 B7 A0 00 00 00         CMP dword ptr [EDI + 0xa0],ESI
00713CD2  74 0C                     JZ 0x00713ce0
00713CD4  57                        PUSH EDI
00713CD5  E8 B6 CA FF FF            CALL 0x00710790
00713CDA  8B 4D F4                  MOV ECX,dword ptr [EBP + -0xc]
00713CDD  83 C4 04                  ADD ESP,0x4
LAB_00713ce0:
00713CE0  8B 87 8A 00 00 00         MOV EAX,dword ptr [EDI + 0x8a]
00713CE6  03 C1                     ADD EAX,ECX
00713CE8  89 45 20                  MOV dword ptr [EBP + 0x20],EAX
LAB_00713ceb:
00713CEB  6A 01                     PUSH 0x1
00713CED  50                        PUSH EAX
00713CEE  8B 45 1C                  MOV EAX,dword ptr [EBP + 0x1c]
00713CF1  8B CF                     MOV ECX,EDI
00713CF3  50                        PUSH EAX
00713CF4  56                        PUSH ESI
00713CF5  56                        PUSH ESI
00713CF6  56                        PUSH ESI
00713CF7  56                        PUSH ESI
00713CF8  E8 A3 CE FF FF            CALL 0x00710ba0
00713CFD  8B 48 14                  MOV ECX,dword ptr [EAX + 0x14]
00713D00  3B CE                     CMP ECX,ESI
00713D02  74 04                     JZ 0x00713d08
00713D04  8B F1                     MOV ESI,ECX
00713D06  EB 1A                     JMP 0x00713d22
LAB_00713d08:
00713D08  33 F6                     XOR ESI,ESI
00713D0A  66 8B 70 0E               MOV SI,word ptr [EAX + 0xe]
00713D0E  0F AF 70 04               IMUL ESI,dword ptr [EAX + 0x4]
00713D12  83 C6 1F                  ADD ESI,0x1f
00713D15  C1 EE 03                  SHR ESI,0x3
00713D18  81 E6 FC FF FF 1F         AND ESI,0x1ffffffc
00713D1E  0F AF 70 08               IMUL ESI,dword ptr [EAX + 0x8]
LAB_00713d22:
00713D22  8A 93 A0 00 00 00         MOV DL,byte ptr [EBX + 0xa0]
00713D28  50                        PUSH EAX
00713D29  88 55 FF                  MOV byte ptr [EBP + -0x1],DL
00713D2C  E8 6F 12 FA FF            CALL 0x006b4fa0
00713D31  8B F8                     MOV EDI,EAX
00713D33  8A 45 FF                  MOV AL,byte ptr [EBP + -0x1]
00713D36  8A D0                     MOV DL,AL
00713D38  8B CE                     MOV ECX,ESI
00713D3A  8A F2                     MOV DH,DL
00713D3C  8B C2                     MOV EAX,EDX
00713D3E  C1 E0 10                  SHL EAX,0x10
00713D41  66 8B C2                  MOV AX,DX
00713D44  C1 E9 02                  SHR ECX,0x2
00713D47  F3 AB                     STOSD.REP ES:EDI
00713D49  8B CE                     MOV ECX,ESI
00713D4B  83 E1 03                  AND ECX,0x3
00713D4E  F3 AA                     STOSB.REP ES:EDI
00713D50  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
00713D53  51                        PUSH ECX
00713D54  8B 4D 0C                  MOV ECX,dword ptr [EBP + 0xc]
00713D57  E8 14 D7 FF FF            CALL 0x00711470
00713D5C  8D 14 85 03 00 00 00      LEA EDX,[EAX*0x4 + 0x3]
00713D63  52                        PUSH EDX
00713D64  E8 A7 6E F9 FF            CALL 0x006aac10
00713D69  8B 7D 0C                  MOV EDI,dword ptr [EBP + 0xc]
00713D6C  89 83 A8 00 00 00         MOV dword ptr [EBX + 0xa8],EAX
00713D72  33 F6                     XOR ESI,ESI
LAB_00713d74:
00713D74  8D 4B 5C                  LEA ECX,[EBX + 0x5c]
00713D77  8D 43 60                  LEA EAX,[EBX + 0x60]
00713D7A  3B CE                     CMP ECX,ESI
00713D7C  74 05                     JZ 0x00713d83
00713D7E  8B 57 68                  MOV EDX,dword ptr [EDI + 0x68]
00713D81  89 11                     MOV dword ptr [ECX],EDX
LAB_00713d83:
00713D83  3B C6                     CMP EAX,ESI
00713D85  74 05                     JZ 0x00713d8c
00713D87  8B 57 6C                  MOV EDX,dword ptr [EDI + 0x6c]
00713D8A  89 10                     MOV dword ptr [EAX],EDX
LAB_00713d8c:
00713D8C  39 73 70                  CMP dword ptr [EBX + 0x70],ESI
00713D8F  7D 0F                     JGE 0x00713da0
00713D91  8B 00                     MOV EAX,dword ptr [EAX]
00713D93  8B 53 68                  MOV EDX,dword ptr [EBX + 0x68]
00713D96  2B C2                     SUB EAX,EDX
00713D98  99                        CDQ
00713D99  2B C2                     SUB EAX,EDX
00713D9B  D1 F8                     SAR EAX,0x1
00713D9D  89 43 70                  MOV dword ptr [EBX + 0x70],EAX
LAB_00713da0:
00713DA0  39 73 70                  CMP dword ptr [EBX + 0x70],ESI
00713DA3  7D 03                     JGE 0x00713da8
00713DA5  89 73 70                  MOV dword ptr [EBX + 0x70],ESI
LAB_00713da8:
00713DA8  8B 43 70                  MOV EAX,dword ptr [EBX + 0x70]
00713DAB  89 83 A4 00 00 00         MOV dword ptr [EBX + 0xa4],EAX
00713DB1  8B 43 6C                  MOV EAX,dword ptr [EBX + 0x6c]
00713DB4  83 F8 FB                  CMP EAX,-0x5
00713DB7  74 0A                     JZ 0x00713dc3
00713DB9  83 F8 FA                  CMP EAX,-0x6
00713DBC  74 05                     JZ 0x00713dc3
00713DBE  83 F8 F9                  CMP EAX,-0x7
00713DC1  75 06                     JNZ 0x00713dc9
LAB_00713dc3:
00713DC3  83 C0 03                  ADD EAX,0x3
00713DC6  89 43 6C                  MOV dword ptr [EBX + 0x6c],EAX
LAB_00713dc9:
00713DC9  83 7B 6C F9               CMP dword ptr [EBX + 0x6c],-0x7
00713DCD  7D 07                     JGE 0x00713dd6
00713DCF  C7 43 6C FF FF FF FF      MOV dword ptr [EBX + 0x6c],0xffffffff
LAB_00713dd6:
00713DD6  83 7B 6C FF               CMP dword ptr [EBX + 0x6c],-0x1
00713DDA  75 0F                     JNZ 0x00713deb
00713DDC  8B 01                     MOV EAX,dword ptr [ECX]
00713DDE  8B 4B 64                  MOV ECX,dword ptr [EBX + 0x64]
00713DE1  2B C1                     SUB EAX,ECX
00713DE3  99                        CDQ
00713DE4  2B C2                     SUB EAX,EDX
00713DE6  D1 F8                     SAR EAX,0x1
00713DE8  89 43 6C                  MOV dword ptr [EBX + 0x6c],EAX
LAB_00713deb:
00713DEB  8B 4B 08                  MOV ECX,dword ptr [EBX + 0x8]
00713DEE  8D 54 09 0A               LEA EDX,[ECX + ECX*0x1 + 0xa]
00713DF2  52                        PUSH EDX
00713DF3  E8 18 6E F9 FF            CALL 0x006aac10
00713DF8  89 83 88 00 00 00         MOV dword ptr [EBX + 0x88],EAX
00713DFE  8D 43 10                  LEA EAX,[EBX + 0x10]
00713E01  50                        PUSH EAX
00713E02  8B CF                     MOV ECX,EDI
00713E04  E8 A7 CA FF FF            CALL 0x007108b0
00713E09  8B 75 08                  MOV ESI,dword ptr [EBP + 0x8]
00713E0C  83 C9 FF                  OR ECX,0xffffffff
00713E0F  8B FE                     MOV EDI,ESI
00713E11  33 C0                     XOR EAX,EAX
00713E13  F2 AE                     SCASB.REPNE ES:EDI
00713E15  F7 D1                     NOT ECX
00713E17  51                        PUSH ECX
00713E18  E8 53 6E F9 FF            CALL 0x006aac70
00713E1D  8B D0                     MOV EDX,EAX
00713E1F  8B FE                     MOV EDI,ESI
00713E21  83 C9 FF                  OR ECX,0xffffffff
00713E24  33 C0                     XOR EAX,EAX
00713E26  89 53 58                  MOV dword ptr [EBX + 0x58],EDX
00713E29  F2 AE                     SCASB.REPNE ES:EDI
00713E2B  F7 D1                     NOT ECX
00713E2D  8B FA                     MOV EDI,EDX
00713E2F  8B D1                     MOV EDX,ECX
00713E31  C1 E9 02                  SHR ECX,0x2
00713E34  F3 A5                     MOVSD.REP ES:EDI,ESI
00713E36  8B CA                     MOV ECX,EDX
00713E38  83 E1 03                  AND ECX,0x3
00713E3B  F3 A4                     MOVSB.REP ES:EDI,ESI
00713E3D  8B 43 58                  MOV EAX,dword ptr [EBX + 0x58]
00713E40  8B 4D 0C                  MOV ECX,dword ptr [EBP + 0xc]
00713E43  89 83 90 00 00 00         MOV dword ptr [EBX + 0x90],EAX
00713E49  89 83 8C 00 00 00         MOV dword ptr [EBX + 0x8c],EAX
00713E4F  8B 5B 08                  MOV EBX,dword ptr [EBX + 0x8]
00713E52  8D 85 68 FF FF FF         LEA EAX,[EBP + 0xffffff68]
00713E58  50                        PUSH EAX
00713E59  E8 92 CB FF FF            CALL 0x007109f0
00713E5E  8B 4D B0                  MOV ECX,dword ptr [EBP + -0x50]
00713E61  8B C3                     MOV EAX,EBX
00713E63  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
00713E69  5F                        POP EDI
00713E6A  5E                        POP ESI
00713E6B  5B                        POP EBX
00713E6C  8B E5                     MOV ESP,EBP
00713E6E  5D                        POP EBP
00713E6F  C2 34 00                  RET 0x34
LAB_00713e72:
00713E72  8B 55 B0                  MOV EDX,dword ptr [EBP + -0x50]
00713E75  68 BC 03 7F 00            PUSH 0x7f03bc
00713E7A  68 CC 4C 7A 00            PUSH 0x7a4ccc
00713E7F  53                        PUSH EBX
00713E80  56                        PUSH ESI
00713E81  68 23 0A 00 00            PUSH 0xa23
00713E86  68 90 01 7F 00            PUSH 0x7f0190
00713E8B  89 15 F8 8D 85 00         MOV dword ptr [0x00858df8],EDX
00713E91  E8 3A 96 F9 FF            CALL 0x006ad4d0
00713E96  83 C4 18                  ADD ESP,0x18
00713E99  85 C0                     TEST EAX,EAX
00713E9B  74 01                     JZ 0x00713e9e
00713E9D  CC                        INT3
LAB_00713e9e:
00713E9E  8B 4D 0C                  MOV ECX,dword ptr [EBP + 0xc]
00713EA1  3B CE                     CMP ECX,ESI
00713EA3  74 05                     JZ 0x00713eaa
00713EA5  E8 56 D0 FF FF            CALL 0x00710f00
LAB_00713eaa:
00713EAA  8B 7D F8                  MOV EDI,dword ptr [EBP + -0x8]
00713EAD  8B 8F 88 00 00 00         MOV ECX,dword ptr [EDI + 0x88]
00713EB3  8D 87 88 00 00 00         LEA EAX,[EDI + 0x88]
00713EB9  3B CE                     CMP ECX,ESI
00713EBB  74 06                     JZ 0x00713ec3
00713EBD  50                        PUSH EAX
00713EBE  E8 9D 71 F9 FF            CALL 0x006ab060
LAB_00713ec3:
00713EC3  8B 8F A8 00 00 00         MOV ECX,dword ptr [EDI + 0xa8]
00713EC9  8D 87 A8 00 00 00         LEA EAX,[EDI + 0xa8]
00713ECF  3B CE                     CMP ECX,ESI
00713ED1  74 06                     JZ 0x00713ed9
00713ED3  50                        PUSH EAX
00713ED4  E8 87 71 F9 FF            CALL 0x006ab060
LAB_00713ed9:
00713ED9  8B 4F 58                  MOV ECX,dword ptr [EDI + 0x58]
00713EDC  8D 47 58                  LEA EAX,[EDI + 0x58]
00713EDF  3B CE                     CMP ECX,ESI
00713EE1  74 06                     JZ 0x00713ee9
00713EE3  50                        PUSH EAX
00713EE4  E8 77 71 F9 FF            CALL 0x006ab060
LAB_00713ee9:
00713EE9  8B 4D 0C                  MOV ECX,dword ptr [EBP + 0xc]
00713EEC  3B CE                     CMP ECX,ESI
00713EEE  74 0C                     JZ 0x00713efc
00713EF0  8D 85 68 FF FF FF         LEA EAX,[EBP + 0xffffff68]
00713EF6  50                        PUSH EAX
00713EF7  E8 F4 CA FF FF            CALL 0x007109f0
LAB_00713efc:
00713EFC  68 2A 0A 00 00            PUSH 0xa2a
00713F01  68 90 01 7F 00            PUSH 0x7f0190
00713F06  56                        PUSH ESI
00713F07  53                        PUSH EBX
00713F08  E8 33 1F F9 FF            CALL 0x006a5e40
00713F0D  3B DE                     CMP EBX,ESI
00713F0F  7D 0B                     JGE 0x00713f1c
00713F11  8B C3                     MOV EAX,EBX
00713F13  5F                        POP EDI
00713F14  5E                        POP ESI
00713F15  5B                        POP EBX
00713F16  8B E5                     MOV ESP,EBP
00713F18  5D                        POP EBP
00713F19  C2 34 00                  RET 0x34
LAB_00713f1c:
00713F1C  5F                        POP EDI
00713F1D  5E                        POP ESI
00713F1E  83 C8 FF                  OR EAX,0xffffffff
00713F21  5B                        POP EBX
00713F22  8B E5                     MOV ESP,EBP
00713F24  5D                        POP EBP
00713F25  C2 34 00                  RET 0x34
