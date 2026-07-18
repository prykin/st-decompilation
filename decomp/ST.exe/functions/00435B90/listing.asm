FUN_00435b90:
00435B90  55                        PUSH EBP
00435B91  8B EC                     MOV EBP,ESP
00435B93  83 EC 0C                  SUB ESP,0xc
00435B96  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
00435B99  53                        PUSH EBX
00435B9A  8B 5D 08                  MOV EBX,dword ptr [EBP + 0x8]
00435B9D  56                        PUSH ESI
00435B9E  8B 75 14                  MOV ESI,dword ptr [EBP + 0x14]
00435BA1  57                        PUSH EDI
00435BA2  8B F9                     MOV EDI,ECX
00435BA4  33 D2                     XOR EDX,EDX
00435BA6  8B 48 0C                  MOV ECX,dword ptr [EAX + 0xc]
00435BA9  3B F2                     CMP ESI,EDX
00435BAB  89 4D FC                  MOV dword ptr [EBP + -0x4],ECX
00435BAE  89 55 F4                  MOV dword ptr [EBP + -0xc],EDX
00435BB1  89 55 F8                  MOV dword ptr [EBP + -0x8],EDX
00435BB4  74 2A                     JZ 0x00435be0
00435BB6  80 FB 08                  CMP BL,0x8
00435BB9  73 18                     JNC 0x00435bd3
00435BBB  39 15 38 2A 80 00         CMP dword ptr [0x00802a38],EDX
00435BC1  74 1D                     JZ 0x00435be0
00435BC3  0F BE C3                  MOVSX EAX,BL
00435BC6  8D 04 C0                  LEA EAX,[EAX + EAX*0x8]
00435BC9  80 BC C0 E9 87 80 00 08   CMP byte ptr [EAX + EAX*0x8 + 0x8087e9],0x8
00435BD1  72 0D                     JC 0x00435be0
LAB_00435bd3:
00435BD3  5F                        POP EDI
00435BD4  5E                        POP ESI
00435BD5  66 B8 01 00               MOV AX,0x1
00435BD9  5B                        POP EBX
00435BDA  8B E5                     MOV ESP,EBP
00435BDC  5D                        POP EBP
00435BDD  C2 18 00                  RET 0x18
LAB_00435be0:
00435BE0  3B CA                     CMP ECX,EDX
00435BE2  89 55 14                  MOV dword ptr [EBP + 0x14],EDX
00435BE5  7E 61                     JLE 0x00435c48
LAB_00435be7:
00435BE7  8B 55 14                  MOV EDX,dword ptr [EBP + 0x14]
00435BEA  8D 4D 08                  LEA ECX,[EBP + 0x8]
00435BED  51                        PUSH ECX
00435BEE  8B 4D 0C                  MOV ECX,dword ptr [EBP + 0xc]
00435BF1  E8 7A 70 27 00            CALL 0x006acc70
00435BF6  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
00435BF9  66 3D FF FF               CMP AX,0xffff
00435BFD  74 0A                     JZ 0x00435c09
00435BFF  89 45 F4                  MOV dword ptr [EBP + -0xc],EAX
00435C02  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
00435C05  40                        INC EAX
00435C06  89 45 F8                  MOV dword ptr [EBP + -0x8],EAX
LAB_00435c09:
00435C09  8B 45 14                  MOV EAX,dword ptr [EBP + 0x14]
00435C0C  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
00435C0F  40                        INC EAX
00435C10  3B C1                     CMP EAX,ECX
00435C12  89 45 14                  MOV dword ptr [EBP + 0x14],EAX
00435C15  7C D0                     JL 0x00435be7
00435C17  83 7D F8 01               CMP dword ptr [EBP + -0x8],0x1
00435C1B  75 2B                     JNZ 0x00435c48
00435C1D  8B 55 F4                  MOV EDX,dword ptr [EBP + -0xc]
00435C20  6A 01                     PUSH 0x1
00435C22  52                        PUSH EDX
00435C23  53                        PUSH EBX
00435C24  8B CF                     MOV ECX,EDI
00435C26  E8 8F CC FC FF            CALL 0x004028ba
00435C2B  8B 4D 1C                  MOV ECX,dword ptr [EBP + 0x1c]
00435C2E  8B 10                     MOV EDX,dword ptr [EAX]
00435C30  51                        PUSH ECX
00435C31  8B 4D 18                  MOV ECX,dword ptr [EBP + 0x18]
00435C34  51                        PUSH ECX
00435C35  8B 4D 10                  MOV ECX,dword ptr [EBP + 0x10]
00435C38  56                        PUSH ESI
00435C39  51                        PUSH ECX
00435C3A  8B C8                     MOV ECX,EAX
00435C3C  FF 52 28                  CALL dword ptr [EDX + 0x28]
00435C3F  5F                        POP EDI
00435C40  5E                        POP ESI
00435C41  5B                        POP EBX
00435C42  8B E5                     MOV ESP,EBP
00435C44  5D                        POP EBP
00435C45  C2 18 00                  RET 0x18
LAB_00435c48:
00435C48  8B 45 10                  MOV EAX,dword ptr [EBP + 0x10]
00435C4B  83 F8 4E                  CMP EAX,0x4e
00435C4E  0F 87 33 0D 00 00         JA 0x00436987
00435C54  33 D2                     XOR EDX,EDX
00435C56  8A 90 D8 6A 43 00         MOV DL,byte ptr [EAX + 0x436ad8]
switchD_00435c5c::switchD:
00435C5C  FF 24 95 84 6A 43 00      JMP dword ptr [EDX*0x4 + 0x436a84]
switchD_00435c5c::caseD_2:
00435C63  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
00435C66  C7 45 14 00 00 00 00      MOV dword ptr [EBP + 0x14],0x0
00435C6D  85 C0                     TEST EAX,EAX
00435C6F  0F 8E 73 07 00 00         JLE 0x004363e8
LAB_00435c75:
00435C75  8B 55 14                  MOV EDX,dword ptr [EBP + 0x14]
00435C78  8B 4D 0C                  MOV ECX,dword ptr [EBP + 0xc]
00435C7B  8D 45 08                  LEA EAX,[EBP + 0x8]
00435C7E  50                        PUSH EAX
00435C7F  E8 EC 6F 27 00            CALL 0x006acc70
00435C84  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
00435C87  66 3D FF FF               CMP AX,0xffff
00435C8B  74 23                     JZ 0x00435cb0
00435C8D  6A 01                     PUSH 0x1
00435C8F  50                        PUSH EAX
00435C90  53                        PUSH EBX
00435C91  8B CF                     MOV ECX,EDI
00435C93  E8 22 CC FC FF            CALL 0x004028ba
00435C98  8B 4D 1C                  MOV ECX,dword ptr [EBP + 0x1c]
00435C9B  8B 10                     MOV EDX,dword ptr [EAX]
00435C9D  51                        PUSH ECX
00435C9E  8B 4D 18                  MOV ECX,dword ptr [EBP + 0x18]
00435CA1  51                        PUSH ECX
00435CA2  56                        PUSH ESI
00435CA3  6A 02                     PUSH 0x2
00435CA5  8B C8                     MOV ECX,EAX
00435CA7  FF 52 28                  CALL dword ptr [EDX + 0x28]
00435CAA  66 3D 06 00               CMP AX,0x6
00435CAE  74 1B                     JZ 0x00435ccb
LAB_00435cb0:
00435CB0  8B 45 14                  MOV EAX,dword ptr [EBP + 0x14]
00435CB3  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
00435CB6  40                        INC EAX
00435CB7  3B C1                     CMP EAX,ECX
00435CB9  89 45 14                  MOV dword ptr [EBP + 0x14],EAX
00435CBC  7C B7                     JL 0x00435c75
00435CBE  5F                        POP EDI
00435CBF  5E                        POP ESI
00435CC0  66 B8 01 00               MOV AX,0x1
00435CC4  5B                        POP EBX
00435CC5  8B E5                     MOV ESP,EBP
00435CC7  5D                        POP EBP
00435CC8  C2 18 00                  RET 0x18
LAB_00435ccb:
00435CCB  5F                        POP EDI
00435CCC  5E                        POP ESI
00435CCD  66 B8 06 00               MOV AX,0x6
00435CD1  5B                        POP EBX
00435CD2  8B E5                     MOV ESP,EBP
00435CD4  5D                        POP EBP
00435CD5  C2 18 00                  RET 0x18
switchD_00435c5c::caseD_6:
00435CD8  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
00435CDB  C7 45 14 00 00 00 00      MOV dword ptr [EBP + 0x14],0x0
00435CE2  85 C0                     TEST EAX,EAX
00435CE4  0F 8E FE 06 00 00         JLE 0x004363e8
LAB_00435cea:
00435CEA  8B 4D 0C                  MOV ECX,dword ptr [EBP + 0xc]
00435CED  8D 55 08                  LEA EDX,[EBP + 0x8]
00435CF0  52                        PUSH EDX
00435CF1  8B 55 14                  MOV EDX,dword ptr [EBP + 0x14]
00435CF4  E8 77 6F 27 00            CALL 0x006acc70
00435CF9  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
00435CFC  66 3D FF FF               CMP AX,0xffff
00435D00  74 23                     JZ 0x00435d25
00435D02  6A 01                     PUSH 0x1
00435D04  50                        PUSH EAX
00435D05  53                        PUSH EBX
00435D06  8B CF                     MOV ECX,EDI
00435D08  E8 AD CB FC FF            CALL 0x004028ba
00435D0D  8B 4D 1C                  MOV ECX,dword ptr [EBP + 0x1c]
00435D10  8B 10                     MOV EDX,dword ptr [EAX]
00435D12  51                        PUSH ECX
00435D13  8B 4D 18                  MOV ECX,dword ptr [EBP + 0x18]
00435D16  51                        PUSH ECX
00435D17  56                        PUSH ESI
00435D18  6A 06                     PUSH 0x6
00435D1A  8B C8                     MOV ECX,EAX
00435D1C  FF 52 28                  CALL dword ptr [EDX + 0x28]
00435D1F  66 3D 0F 00               CMP AX,0xf
00435D23  74 1B                     JZ 0x00435d40
LAB_00435d25:
00435D25  8B 45 14                  MOV EAX,dword ptr [EBP + 0x14]
00435D28  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
00435D2B  40                        INC EAX
00435D2C  3B C1                     CMP EAX,ECX
00435D2E  89 45 14                  MOV dword ptr [EBP + 0x14],EAX
00435D31  7C B7                     JL 0x00435cea
00435D33  5F                        POP EDI
00435D34  5E                        POP ESI
00435D35  66 B8 01 00               MOV AX,0x1
00435D39  5B                        POP EBX
00435D3A  8B E5                     MOV ESP,EBP
00435D3C  5D                        POP EBP
00435D3D  C2 18 00                  RET 0x18
LAB_00435d40:
00435D40  5F                        POP EDI
00435D41  5E                        POP ESI
00435D42  66 B8 0F 00               MOV AX,0xf
00435D46  5B                        POP EBX
00435D47  8B E5                     MOV ESP,EBP
00435D49  5D                        POP EBP
00435D4A  C2 18 00                  RET 0x18
switchD_00435c5c::caseD_3:
00435D4D  85 F6                     TEST ESI,ESI
00435D4F  75 0D                     JNZ 0x00435d5e
00435D51  5F                        POP EDI
00435D52  5E                        POP ESI
00435D53  66 B8 01 00               MOV AX,0x1
00435D57  5B                        POP EBX
00435D58  8B E5                     MOV ESP,EBP
00435D5A  5D                        POP EBP
00435D5B  C2 18 00                  RET 0x18
LAB_00435d5e:
00435D5E  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
00435D61  C7 45 14 00 00 00 00      MOV dword ptr [EBP + 0x14],0x0
00435D68  85 C0                     TEST EAX,EAX
00435D6A  7E 59                     JLE 0x00435dc5
LAB_00435d6c:
00435D6C  8B 4D 0C                  MOV ECX,dword ptr [EBP + 0xc]
00435D6F  8D 55 08                  LEA EDX,[EBP + 0x8]
00435D72  52                        PUSH EDX
00435D73  8B 55 14                  MOV EDX,dword ptr [EBP + 0x14]
00435D76  E8 F5 6E 27 00            CALL 0x006acc70
00435D7B  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
00435D7E  66 3D FF FF               CMP AX,0xffff
00435D82  74 33                     JZ 0x00435db7
00435D84  6A 01                     PUSH 0x1
00435D86  50                        PUSH EAX
00435D87  53                        PUSH EBX
00435D88  8B CF                     MOV ECX,EDI
00435D8A  E8 2B CB FC FF            CALL 0x004028ba
00435D8F  8B 4D 1C                  MOV ECX,dword ptr [EBP + 0x1c]
00435D92  8B 10                     MOV EDX,dword ptr [EAX]
00435D94  51                        PUSH ECX
00435D95  8B 4D 18                  MOV ECX,dword ptr [EBP + 0x18]
00435D98  51                        PUSH ECX
00435D99  8B 4D 10                  MOV ECX,dword ptr [EBP + 0x10]
00435D9C  56                        PUSH ESI
00435D9D  51                        PUSH ECX
00435D9E  8B C8                     MOV ECX,EAX
00435DA0  FF 52 28                  CALL dword ptr [EDX + 0x28]
00435DA3  66 3D 07 00               CMP AX,0x7
00435DA7  0F 84 DD 0B 00 00         JZ 0x0043698a
00435DAD  66 3D 02 00               CMP AX,0x2
00435DB1  0F 84 D3 0B 00 00         JZ 0x0043698a
LAB_00435db7:
00435DB7  8B 45 14                  MOV EAX,dword ptr [EBP + 0x14]
00435DBA  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
00435DBD  40                        INC EAX
00435DBE  3B C1                     CMP EAX,ECX
00435DC0  89 45 14                  MOV dword ptr [EBP + 0x14],EAX
00435DC3  7C A7                     JL 0x00435d6c
LAB_00435dc5:
00435DC5  5F                        POP EDI
00435DC6  5E                        POP ESI
00435DC7  66 B8 01 00               MOV AX,0x1
00435DCB  5B                        POP EBX
00435DCC  8B E5                     MOV ESP,EBP
00435DCE  5D                        POP EBP
00435DCF  C2 18 00                  RET 0x18
switchD_00435c5c::caseD_4:
00435DD2  85 F6                     TEST ESI,ESI
00435DD4  75 0D                     JNZ 0x00435de3
00435DD6  5F                        POP EDI
00435DD7  5E                        POP ESI
00435DD8  66 B8 01 00               MOV AX,0x1
00435DDC  5B                        POP EBX
00435DDD  8B E5                     MOV ESP,EBP
00435DDF  5D                        POP EBP
00435DE0  C2 18 00                  RET 0x18
LAB_00435de3:
00435DE3  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
00435DE6  C7 45 14 00 00 00 00      MOV dword ptr [EBP + 0x14],0x0
00435DED  85 C0                     TEST EAX,EAX
00435DEF  0F 8E F3 05 00 00         JLE 0x004363e8
LAB_00435df5:
00435DF5  8B 4D 0C                  MOV ECX,dword ptr [EBP + 0xc]
00435DF8  8D 55 08                  LEA EDX,[EBP + 0x8]
00435DFB  52                        PUSH EDX
00435DFC  8B 55 14                  MOV EDX,dword ptr [EBP + 0x14]
00435DFF  E8 6C 6E 27 00            CALL 0x006acc70
00435E04  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
00435E07  66 3D FF FF               CMP AX,0xffff
00435E0B  74 27                     JZ 0x00435e34
00435E0D  6A 01                     PUSH 0x1
00435E0F  50                        PUSH EAX
00435E10  53                        PUSH EBX
00435E11  8B CF                     MOV ECX,EDI
00435E13  E8 A2 CA FC FF            CALL 0x004028ba
00435E18  8B 4D 1C                  MOV ECX,dword ptr [EBP + 0x1c]
00435E1B  8B 10                     MOV EDX,dword ptr [EAX]
00435E1D  51                        PUSH ECX
00435E1E  8B 4D 18                  MOV ECX,dword ptr [EBP + 0x18]
00435E21  51                        PUSH ECX
00435E22  56                        PUSH ESI
00435E23  6A 04                     PUSH 0x4
00435E25  8B C8                     MOV ECX,EAX
00435E27  FF 52 28                  CALL dword ptr [EDX + 0x28]
00435E2A  66 3D 18 00               CMP AX,0x18
00435E2E  0F 84 B5 0A 00 00         JZ 0x004368e9
LAB_00435e34:
00435E34  8B 45 14                  MOV EAX,dword ptr [EBP + 0x14]
00435E37  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
00435E3A  40                        INC EAX
00435E3B  3B C1                     CMP EAX,ECX
00435E3D  89 45 14                  MOV dword ptr [EBP + 0x14],EAX
00435E40  7C B3                     JL 0x00435df5
00435E42  5F                        POP EDI
00435E43  5E                        POP ESI
00435E44  66 B8 01 00               MOV AX,0x1
00435E48  5B                        POP EBX
00435E49  8B E5                     MOV ESP,EBP
00435E4B  5D                        POP EBP
00435E4C  C2 18 00                  RET 0x18
switchD_00435c5c::caseD_5:
00435E4F  85 F6                     TEST ESI,ESI
00435E51  75 0D                     JNZ 0x00435e60
00435E53  5F                        POP EDI
00435E54  5E                        POP ESI
00435E55  66 B8 01 00               MOV AX,0x1
00435E59  5B                        POP EBX
00435E5A  8B E5                     MOV ESP,EBP
00435E5C  5D                        POP EBP
00435E5D  C2 18 00                  RET 0x18
LAB_00435e60:
00435E60  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
00435E63  C7 45 14 00 00 00 00      MOV dword ptr [EBP + 0x14],0x0
00435E6A  85 C0                     TEST EAX,EAX
00435E6C  0F 8E 76 05 00 00         JLE 0x004363e8
LAB_00435e72:
00435E72  8B 4D 0C                  MOV ECX,dword ptr [EBP + 0xc]
00435E75  8D 55 08                  LEA EDX,[EBP + 0x8]
00435E78  52                        PUSH EDX
00435E79  8B 55 14                  MOV EDX,dword ptr [EBP + 0x14]
00435E7C  E8 EF 6D 27 00            CALL 0x006acc70
00435E81  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
00435E84  66 3D FF FF               CMP AX,0xffff
00435E88  74 23                     JZ 0x00435ead
00435E8A  6A 01                     PUSH 0x1
00435E8C  50                        PUSH EAX
00435E8D  53                        PUSH EBX
00435E8E  8B CF                     MOV ECX,EDI
00435E90  E8 25 CA FC FF            CALL 0x004028ba
00435E95  8B 4D 1C                  MOV ECX,dword ptr [EBP + 0x1c]
00435E98  8B 10                     MOV EDX,dword ptr [EAX]
00435E9A  51                        PUSH ECX
00435E9B  8B 4D 18                  MOV ECX,dword ptr [EBP + 0x18]
00435E9E  51                        PUSH ECX
00435E9F  56                        PUSH ESI
00435EA0  6A 05                     PUSH 0x5
00435EA2  8B C8                     MOV ECX,EAX
00435EA4  FF 52 28                  CALL dword ptr [EDX + 0x28]
00435EA7  66 3D 0D 00               CMP AX,0xd
00435EAB  74 1B                     JZ 0x00435ec8
LAB_00435ead:
00435EAD  8B 45 14                  MOV EAX,dword ptr [EBP + 0x14]
00435EB0  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
00435EB3  40                        INC EAX
00435EB4  3B C1                     CMP EAX,ECX
00435EB6  89 45 14                  MOV dword ptr [EBP + 0x14],EAX
00435EB9  7C B7                     JL 0x00435e72
00435EBB  5F                        POP EDI
00435EBC  5E                        POP ESI
00435EBD  66 B8 01 00               MOV AX,0x1
00435EC1  5B                        POP EBX
00435EC2  8B E5                     MOV ESP,EBP
00435EC4  5D                        POP EBP
00435EC5  C2 18 00                  RET 0x18
LAB_00435ec8:
00435EC8  5F                        POP EDI
00435EC9  5E                        POP ESI
00435ECA  66 B8 0D 00               MOV AX,0xd
00435ECE  5B                        POP EBX
00435ECF  8B E5                     MOV ESP,EBP
00435ED1  5D                        POP EBP
00435ED2  C2 18 00                  RET 0x18
switchD_00435c5c::caseD_4d:
00435ED5  85 F6                     TEST ESI,ESI
00435ED7  75 0D                     JNZ 0x00435ee6
00435ED9  5F                        POP EDI
00435EDA  5E                        POP ESI
00435EDB  66 B8 01 00               MOV AX,0x1
00435EDF  5B                        POP EBX
00435EE0  8B E5                     MOV ESP,EBP
00435EE2  5D                        POP EBP
00435EE3  C2 18 00                  RET 0x18
LAB_00435ee6:
00435EE6  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
00435EE9  C7 45 14 00 00 00 00      MOV dword ptr [EBP + 0x14],0x0
00435EF0  85 C0                     TEST EAX,EAX
00435EF2  0F 8E F0 04 00 00         JLE 0x004363e8
LAB_00435ef8:
00435EF8  8B 4D 0C                  MOV ECX,dword ptr [EBP + 0xc]
00435EFB  8D 55 08                  LEA EDX,[EBP + 0x8]
00435EFE  52                        PUSH EDX
00435EFF  8B 55 14                  MOV EDX,dword ptr [EBP + 0x14]
00435F02  E8 69 6D 27 00            CALL 0x006acc70
00435F07  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
00435F0A  66 3D FF FF               CMP AX,0xffff
00435F0E  74 27                     JZ 0x00435f37
00435F10  6A 01                     PUSH 0x1
00435F12  50                        PUSH EAX
00435F13  53                        PUSH EBX
00435F14  8B CF                     MOV ECX,EDI
00435F16  E8 9F C9 FC FF            CALL 0x004028ba
00435F1B  8B 4D 1C                  MOV ECX,dword ptr [EBP + 0x1c]
00435F1E  8B 10                     MOV EDX,dword ptr [EAX]
00435F20  51                        PUSH ECX
00435F21  8B 4D 18                  MOV ECX,dword ptr [EBP + 0x18]
00435F24  51                        PUSH ECX
00435F25  56                        PUSH ESI
00435F26  6A 4D                     PUSH 0x4d
00435F28  8B C8                     MOV ECX,EAX
00435F2A  FF 52 28                  CALL dword ptr [EDX + 0x28]
00435F2D  66 3D 1D 00               CMP AX,0x1d
00435F31  0F 84 BE 0A 00 00         JZ 0x004369f5
LAB_00435f37:
00435F37  8B 45 14                  MOV EAX,dword ptr [EBP + 0x14]
00435F3A  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
00435F3D  40                        INC EAX
00435F3E  3B C1                     CMP EAX,ECX
00435F40  89 45 14                  MOV dword ptr [EBP + 0x14],EAX
00435F43  7C B3                     JL 0x00435ef8
00435F45  5F                        POP EDI
00435F46  5E                        POP ESI
00435F47  66 B8 01 00               MOV AX,0x1
00435F4B  5B                        POP EBX
00435F4C  8B E5                     MOV ESP,EBP
00435F4E  5D                        POP EBP
00435F4F  C2 18 00                  RET 0x18
switchD_00435c5c::caseD_4e:
00435F52  5F                        POP EDI
00435F53  5E                        POP ESI
00435F54  66 B8 1C 00               MOV AX,0x1c
00435F58  5B                        POP EBX
00435F59  8B E5                     MOV ESP,EBP
00435F5B  5D                        POP EBP
00435F5C  C2 18 00                  RET 0x18
switchD_00435c5c::caseD_10:
00435F5F  85 F6                     TEST ESI,ESI
00435F61  75 0D                     JNZ 0x00435f70
00435F63  5F                        POP EDI
00435F64  5E                        POP ESI
00435F65  66 B8 01 00               MOV AX,0x1
00435F69  5B                        POP EBX
00435F6A  8B E5                     MOV ESP,EBP
00435F6C  5D                        POP EBP
00435F6D  C2 18 00                  RET 0x18
LAB_00435f70:
00435F70  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
00435F73  C7 45 14 00 00 00 00      MOV dword ptr [EBP + 0x14],0x0
00435F7A  85 C0                     TEST EAX,EAX
00435F7C  0F 8E 66 04 00 00         JLE 0x004363e8
LAB_00435f82:
00435F82  8B 4D 0C                  MOV ECX,dword ptr [EBP + 0xc]
00435F85  8D 55 08                  LEA EDX,[EBP + 0x8]
00435F88  52                        PUSH EDX
00435F89  8B 55 14                  MOV EDX,dword ptr [EBP + 0x14]
00435F8C  E8 DF 6C 27 00            CALL 0x006acc70
00435F91  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
00435F94  66 3D FF FF               CMP AX,0xffff
00435F98  74 23                     JZ 0x00435fbd
00435F9A  6A 01                     PUSH 0x1
00435F9C  50                        PUSH EAX
00435F9D  53                        PUSH EBX
00435F9E  8B CF                     MOV ECX,EDI
00435FA0  E8 15 C9 FC FF            CALL 0x004028ba
00435FA5  8B 4D 1C                  MOV ECX,dword ptr [EBP + 0x1c]
00435FA8  8B 10                     MOV EDX,dword ptr [EAX]
00435FAA  51                        PUSH ECX
00435FAB  8B 4D 18                  MOV ECX,dword ptr [EBP + 0x18]
00435FAE  51                        PUSH ECX
00435FAF  56                        PUSH ESI
00435FB0  6A 10                     PUSH 0x10
00435FB2  8B C8                     MOV ECX,EAX
00435FB4  FF 52 28                  CALL dword ptr [EDX + 0x28]
00435FB7  66 3D 16 00               CMP AX,0x16
00435FBB  74 1B                     JZ 0x00435fd8
LAB_00435fbd:
00435FBD  8B 45 14                  MOV EAX,dword ptr [EBP + 0x14]
00435FC0  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
00435FC3  40                        INC EAX
00435FC4  3B C1                     CMP EAX,ECX
00435FC6  89 45 14                  MOV dword ptr [EBP + 0x14],EAX
00435FC9  7C B7                     JL 0x00435f82
00435FCB  5F                        POP EDI
00435FCC  5E                        POP ESI
00435FCD  66 B8 01 00               MOV AX,0x1
00435FD1  5B                        POP EBX
00435FD2  8B E5                     MOV ESP,EBP
00435FD4  5D                        POP EBP
00435FD5  C2 18 00                  RET 0x18
LAB_00435fd8:
00435FD8  5F                        POP EDI
00435FD9  5E                        POP ESI
00435FDA  66 B8 16 00               MOV AX,0x16
00435FDE  5B                        POP EBX
00435FDF  8B E5                     MOV ESP,EBP
00435FE1  5D                        POP EBP
00435FE2  C2 18 00                  RET 0x18
switchD_00435c5c::caseD_a:
00435FE5  85 F6                     TEST ESI,ESI
00435FE7  75 0D                     JNZ 0x00435ff6
00435FE9  5F                        POP EDI
00435FEA  5E                        POP ESI
00435FEB  66 B8 01 00               MOV AX,0x1
00435FEF  5B                        POP EBX
00435FF0  8B E5                     MOV ESP,EBP
00435FF2  5D                        POP EBP
00435FF3  C2 18 00                  RET 0x18
LAB_00435ff6:
00435FF6  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
00435FF9  C7 45 14 00 00 00 00      MOV dword ptr [EBP + 0x14],0x0
00436000  85 C0                     TEST EAX,EAX
00436002  0F 8E E0 03 00 00         JLE 0x004363e8
LAB_00436008:
00436008  8B 4D 0C                  MOV ECX,dword ptr [EBP + 0xc]
0043600B  8D 55 08                  LEA EDX,[EBP + 0x8]
0043600E  52                        PUSH EDX
0043600F  8B 55 14                  MOV EDX,dword ptr [EBP + 0x14]
00436012  E8 59 6C 27 00            CALL 0x006acc70
00436017  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
0043601A  66 3D FF FF               CMP AX,0xffff
0043601E  74 23                     JZ 0x00436043
00436020  6A 01                     PUSH 0x1
00436022  50                        PUSH EAX
00436023  53                        PUSH EBX
00436024  8B CF                     MOV ECX,EDI
00436026  E8 8F C8 FC FF            CALL 0x004028ba
0043602B  8B 4D 1C                  MOV ECX,dword ptr [EBP + 0x1c]
0043602E  8B 10                     MOV EDX,dword ptr [EAX]
00436030  51                        PUSH ECX
00436031  8B 4D 18                  MOV ECX,dword ptr [EBP + 0x18]
00436034  51                        PUSH ECX
00436035  56                        PUSH ESI
00436036  6A 0A                     PUSH 0xa
00436038  8B C8                     MOV ECX,EAX
0043603A  FF 52 28                  CALL dword ptr [EDX + 0x28]
0043603D  66 3D 0C 00               CMP AX,0xc
00436041  74 1B                     JZ 0x0043605e
LAB_00436043:
00436043  8B 45 14                  MOV EAX,dword ptr [EBP + 0x14]
00436046  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
00436049  40                        INC EAX
0043604A  3B C1                     CMP EAX,ECX
0043604C  89 45 14                  MOV dword ptr [EBP + 0x14],EAX
0043604F  7C B7                     JL 0x00436008
00436051  5F                        POP EDI
00436052  5E                        POP ESI
00436053  66 B8 01 00               MOV AX,0x1
00436057  5B                        POP EBX
00436058  8B E5                     MOV ESP,EBP
0043605A  5D                        POP EBP
0043605B  C2 18 00                  RET 0x18
LAB_0043605e:
0043605E  5F                        POP EDI
0043605F  5E                        POP ESI
00436060  66 B8 0C 00               MOV AX,0xc
00436064  5B                        POP EBX
00436065  8B E5                     MOV ESP,EBP
00436067  5D                        POP EBP
00436068  C2 18 00                  RET 0x18
switchD_00435c5c::caseD_9:
0043606B  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
0043606E  C7 45 14 00 00 00 00      MOV dword ptr [EBP + 0x14],0x0
00436075  85 C0                     TEST EAX,EAX
00436077  0F 8E 6B 03 00 00         JLE 0x004363e8
LAB_0043607d:
0043607D  8B 4D 0C                  MOV ECX,dword ptr [EBP + 0xc]
00436080  8D 55 08                  LEA EDX,[EBP + 0x8]
00436083  52                        PUSH EDX
00436084  8B 55 14                  MOV EDX,dword ptr [EBP + 0x14]
00436087  E8 E4 6B 27 00            CALL 0x006acc70
0043608C  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
0043608F  66 3D FF FF               CMP AX,0xffff
00436093  74 23                     JZ 0x004360b8
00436095  6A 01                     PUSH 0x1
00436097  50                        PUSH EAX
00436098  53                        PUSH EBX
00436099  8B CF                     MOV ECX,EDI
0043609B  E8 1A C8 FC FF            CALL 0x004028ba
004360A0  8B 4D 1C                  MOV ECX,dword ptr [EBP + 0x1c]
004360A3  8B 10                     MOV EDX,dword ptr [EAX]
004360A5  51                        PUSH ECX
004360A6  8B 4D 18                  MOV ECX,dword ptr [EBP + 0x18]
004360A9  51                        PUSH ECX
004360AA  56                        PUSH ESI
004360AB  6A 09                     PUSH 0x9
004360AD  8B C8                     MOV ECX,EAX
004360AF  FF 52 28                  CALL dword ptr [EDX + 0x28]
004360B2  66 3D 08 00               CMP AX,0x8
004360B6  74 1B                     JZ 0x004360d3
LAB_004360b8:
004360B8  8B 45 14                  MOV EAX,dword ptr [EBP + 0x14]
004360BB  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
004360BE  40                        INC EAX
004360BF  3B C1                     CMP EAX,ECX
004360C1  89 45 14                  MOV dword ptr [EBP + 0x14],EAX
004360C4  7C B7                     JL 0x0043607d
004360C6  5F                        POP EDI
004360C7  5E                        POP ESI
004360C8  66 B8 01 00               MOV AX,0x1
004360CC  5B                        POP EBX
004360CD  8B E5                     MOV ESP,EBP
004360CF  5D                        POP EBP
004360D0  C2 18 00                  RET 0x18
LAB_004360d3:
004360D3  5F                        POP EDI
004360D4  5E                        POP ESI
004360D5  66 B8 08 00               MOV AX,0x8
004360D9  5B                        POP EBX
004360DA  8B E5                     MOV ESP,EBP
004360DC  5D                        POP EBP
004360DD  C2 18 00                  RET 0x18
switchD_00435c5c::caseD_2d:
004360E0  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
004360E3  C7 45 14 00 00 00 00      MOV dword ptr [EBP + 0x14],0x0
004360EA  85 C0                     TEST EAX,EAX
004360EC  0F 8E F6 02 00 00         JLE 0x004363e8
LAB_004360f2:
004360F2  8B 4D 0C                  MOV ECX,dword ptr [EBP + 0xc]
004360F5  8D 55 08                  LEA EDX,[EBP + 0x8]
004360F8  52                        PUSH EDX
004360F9  8B 55 14                  MOV EDX,dword ptr [EBP + 0x14]
004360FC  E8 6F 6B 27 00            CALL 0x006acc70
00436101  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
00436104  66 3D FF FF               CMP AX,0xffff
00436108  74 23                     JZ 0x0043612d
0043610A  6A 01                     PUSH 0x1
0043610C  50                        PUSH EAX
0043610D  53                        PUSH EBX
0043610E  8B CF                     MOV ECX,EDI
00436110  E8 A5 C7 FC FF            CALL 0x004028ba
00436115  8B 4D 1C                  MOV ECX,dword ptr [EBP + 0x1c]
00436118  8B 10                     MOV EDX,dword ptr [EAX]
0043611A  51                        PUSH ECX
0043611B  8B 4D 18                  MOV ECX,dword ptr [EBP + 0x18]
0043611E  51                        PUSH ECX
0043611F  56                        PUSH ESI
00436120  6A 2D                     PUSH 0x2d
00436122  8B C8                     MOV ECX,EAX
00436124  FF 52 28                  CALL dword ptr [EDX + 0x28]
00436127  66 3D 10 00               CMP AX,0x10
0043612B  74 1B                     JZ 0x00436148
LAB_0043612d:
0043612D  8B 45 14                  MOV EAX,dword ptr [EBP + 0x14]
00436130  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
00436133  40                        INC EAX
00436134  3B C1                     CMP EAX,ECX
00436136  89 45 14                  MOV dword ptr [EBP + 0x14],EAX
00436139  7C B7                     JL 0x004360f2
0043613B  5F                        POP EDI
0043613C  5E                        POP ESI
0043613D  66 B8 01 00               MOV AX,0x1
00436141  5B                        POP EBX
00436142  8B E5                     MOV ESP,EBP
00436144  5D                        POP EBP
00436145  C2 18 00                  RET 0x18
LAB_00436148:
00436148  5F                        POP EDI
00436149  5E                        POP ESI
0043614A  66 B8 10 00               MOV AX,0x10
0043614E  5B                        POP EBX
0043614F  8B E5                     MOV ESP,EBP
00436151  5D                        POP EBP
00436152  C2 18 00                  RET 0x18
switchD_00435c5c::caseD_7:
00436155  85 F6                     TEST ESI,ESI
00436157  75 0D                     JNZ 0x00436166
00436159  5F                        POP EDI
0043615A  5E                        POP ESI
0043615B  66 B8 01 00               MOV AX,0x1
0043615F  5B                        POP EBX
00436160  8B E5                     MOV ESP,EBP
00436162  5D                        POP EBP
00436163  C2 18 00                  RET 0x18
LAB_00436166:
00436166  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
00436169  C7 45 14 00 00 00 00      MOV dword ptr [EBP + 0x14],0x0
00436170  85 C0                     TEST EAX,EAX
00436172  7E 61                     JLE 0x004361d5
LAB_00436174:
00436174  8B 4D 0C                  MOV ECX,dword ptr [EBP + 0xc]
00436177  8D 55 08                  LEA EDX,[EBP + 0x8]
0043617A  52                        PUSH EDX
0043617B  8B 55 14                  MOV EDX,dword ptr [EBP + 0x14]
0043617E  E8 ED 6A 27 00            CALL 0x006acc70
00436183  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
00436186  66 3D FF FF               CMP AX,0xffff
0043618A  74 3B                     JZ 0x004361c7
0043618C  6A 01                     PUSH 0x1
0043618E  50                        PUSH EAX
0043618F  53                        PUSH EBX
00436190  8B CF                     MOV ECX,EDI
00436192  E8 23 C7 FC FF            CALL 0x004028ba
00436197  8B 4D 1C                  MOV ECX,dword ptr [EBP + 0x1c]
0043619A  8B 10                     MOV EDX,dword ptr [EAX]
0043619C  51                        PUSH ECX
0043619D  8B 4D 18                  MOV ECX,dword ptr [EBP + 0x18]
004361A0  51                        PUSH ECX
004361A1  56                        PUSH ESI
004361A2  6A 07                     PUSH 0x7
004361A4  8B C8                     MOV ECX,EAX
004361A6  FF 52 28                  CALL dword ptr [EDX + 0x28]
004361A9  66 3D 09 00               CMP AX,0x9
004361AD  0F 84 D7 07 00 00         JZ 0x0043698a
004361B3  66 3D 0A 00               CMP AX,0xa
004361B7  0F 84 CD 07 00 00         JZ 0x0043698a
004361BD  66 3D 0B 00               CMP AX,0xb
004361C1  0F 84 C3 07 00 00         JZ 0x0043698a
LAB_004361c7:
004361C7  8B 45 14                  MOV EAX,dword ptr [EBP + 0x14]
004361CA  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
004361CD  40                        INC EAX
004361CE  3B C1                     CMP EAX,ECX
004361D0  89 45 14                  MOV dword ptr [EBP + 0x14],EAX
004361D3  7C 9F                     JL 0x00436174
LAB_004361d5:
004361D5  5F                        POP EDI
004361D6  5E                        POP ESI
004361D7  66 B8 01 00               MOV AX,0x1
004361DB  5B                        POP EBX
004361DC  8B E5                     MOV ESP,EBP
004361DE  5D                        POP EBP
004361DF  C2 18 00                  RET 0x18
switchD_00435c5c::caseD_8:
004361E2  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
004361E5  C7 45 14 00 00 00 00      MOV dword ptr [EBP + 0x14],0x0
004361EC  85 C0                     TEST EAX,EAX
004361EE  0F 8E F4 01 00 00         JLE 0x004363e8
LAB_004361f4:
004361F4  8B 4D 0C                  MOV ECX,dword ptr [EBP + 0xc]
004361F7  8D 55 08                  LEA EDX,[EBP + 0x8]
004361FA  52                        PUSH EDX
004361FB  8B 55 14                  MOV EDX,dword ptr [EBP + 0x14]
004361FE  E8 6D 6A 27 00            CALL 0x006acc70
00436203  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
00436206  66 3D FF FF               CMP AX,0xffff
0043620A  74 23                     JZ 0x0043622f
0043620C  6A 01                     PUSH 0x1
0043620E  50                        PUSH EAX
0043620F  53                        PUSH EBX
00436210  8B CF                     MOV ECX,EDI
00436212  E8 A3 C6 FC FF            CALL 0x004028ba
00436217  8B 4D 1C                  MOV ECX,dword ptr [EBP + 0x1c]
0043621A  8B 10                     MOV EDX,dword ptr [EAX]
0043621C  51                        PUSH ECX
0043621D  8B 4D 18                  MOV ECX,dword ptr [EBP + 0x18]
00436220  51                        PUSH ECX
00436221  56                        PUSH ESI
00436222  6A 08                     PUSH 0x8
00436224  8B C8                     MOV ECX,EAX
00436226  FF 52 28                  CALL dword ptr [EDX + 0x28]
00436229  66 3D 11 00               CMP AX,0x11
0043622D  74 1B                     JZ 0x0043624a
LAB_0043622f:
0043622F  8B 45 14                  MOV EAX,dword ptr [EBP + 0x14]
00436232  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
00436235  40                        INC EAX
00436236  3B C1                     CMP EAX,ECX
00436238  89 45 14                  MOV dword ptr [EBP + 0x14],EAX
0043623B  7C B7                     JL 0x004361f4
0043623D  5F                        POP EDI
0043623E  5E                        POP ESI
0043623F  66 B8 01 00               MOV AX,0x1
00436243  5B                        POP EBX
00436244  8B E5                     MOV ESP,EBP
00436246  5D                        POP EBP
00436247  C2 18 00                  RET 0x18
LAB_0043624a:
0043624A  5F                        POP EDI
0043624B  5E                        POP ESI
0043624C  66 B8 11 00               MOV AX,0x11
00436250  5B                        POP EBX
00436251  8B E5                     MOV ESP,EBP
00436253  5D                        POP EBP
00436254  C2 18 00                  RET 0x18
switchD_00435c5c::caseD_11:
00436257  85 F6                     TEST ESI,ESI
00436259  75 0D                     JNZ 0x00436268
0043625B  5F                        POP EDI
0043625C  5E                        POP ESI
0043625D  66 B8 01 00               MOV AX,0x1
00436261  5B                        POP EBX
00436262  8B E5                     MOV ESP,EBP
00436264  5D                        POP EBP
00436265  C2 18 00                  RET 0x18
LAB_00436268:
00436268  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
0043626B  C7 45 14 00 00 00 00      MOV dword ptr [EBP + 0x14],0x0
00436272  85 C0                     TEST EAX,EAX
00436274  0F 8E 6E 01 00 00         JLE 0x004363e8
LAB_0043627a:
0043627A  8B 4D 0C                  MOV ECX,dword ptr [EBP + 0xc]
0043627D  8D 55 08                  LEA EDX,[EBP + 0x8]
00436280  52                        PUSH EDX
00436281  8B 55 14                  MOV EDX,dword ptr [EBP + 0x14]
00436284  E8 E7 69 27 00            CALL 0x006acc70
00436289  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
0043628C  66 3D FF FF               CMP AX,0xffff
00436290  74 27                     JZ 0x004362b9
00436292  6A 01                     PUSH 0x1
00436294  50                        PUSH EAX
00436295  53                        PUSH EBX
00436296  8B CF                     MOV ECX,EDI
00436298  E8 1D C6 FC FF            CALL 0x004028ba
0043629D  8B 4D 1C                  MOV ECX,dword ptr [EBP + 0x1c]
004362A0  8B 10                     MOV EDX,dword ptr [EAX]
004362A2  51                        PUSH ECX
004362A3  8B 4D 18                  MOV ECX,dword ptr [EBP + 0x18]
004362A6  51                        PUSH ECX
004362A7  56                        PUSH ESI
004362A8  6A 11                     PUSH 0x11
004362AA  8B C8                     MOV ECX,EAX
004362AC  FF 52 28                  CALL dword ptr [EDX + 0x28]
004362AF  66 3D 12 00               CMP AX,0x12
004362B3  0F 84 3D 06 00 00         JZ 0x004368f6
LAB_004362b9:
004362B9  8B 45 14                  MOV EAX,dword ptr [EBP + 0x14]
004362BC  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
004362BF  40                        INC EAX
004362C0  3B C1                     CMP EAX,ECX
004362C2  89 45 14                  MOV dword ptr [EBP + 0x14],EAX
004362C5  7C B3                     JL 0x0043627a
004362C7  5F                        POP EDI
004362C8  5E                        POP ESI
004362C9  66 B8 01 00               MOV AX,0x1
004362CD  5B                        POP EBX
004362CE  8B E5                     MOV ESP,EBP
004362D0  5D                        POP EBP
004362D1  C2 18 00                  RET 0x18
switchD_00435c5c::caseD_12:
004362D4  85 F6                     TEST ESI,ESI
004362D6  75 0D                     JNZ 0x004362e5
004362D8  5F                        POP EDI
004362D9  5E                        POP ESI
004362DA  66 B8 01 00               MOV AX,0x1
004362DE  5B                        POP EBX
004362DF  8B E5                     MOV ESP,EBP
004362E1  5D                        POP EBP
004362E2  C2 18 00                  RET 0x18
LAB_004362e5:
004362E5  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
004362E8  C7 45 14 00 00 00 00      MOV dword ptr [EBP + 0x14],0x0
004362EF  85 C0                     TEST EAX,EAX
004362F1  0F 8E F1 00 00 00         JLE 0x004363e8
LAB_004362f7:
004362F7  8B 4D 0C                  MOV ECX,dword ptr [EBP + 0xc]
004362FA  8D 55 08                  LEA EDX,[EBP + 0x8]
004362FD  52                        PUSH EDX
004362FE  8B 55 14                  MOV EDX,dword ptr [EBP + 0x14]
00436301  E8 6A 69 27 00            CALL 0x006acc70
00436306  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
00436309  66 3D FF FF               CMP AX,0xffff
0043630D  74 23                     JZ 0x00436332
0043630F  6A 01                     PUSH 0x1
00436311  50                        PUSH EAX
00436312  53                        PUSH EBX
00436313  8B CF                     MOV ECX,EDI
00436315  E8 A0 C5 FC FF            CALL 0x004028ba
0043631A  8B 4D 1C                  MOV ECX,dword ptr [EBP + 0x1c]
0043631D  8B 10                     MOV EDX,dword ptr [EAX]
0043631F  51                        PUSH ECX
00436320  8B 4D 18                  MOV ECX,dword ptr [EBP + 0x18]
00436323  51                        PUSH ECX
00436324  56                        PUSH ESI
00436325  6A 12                     PUSH 0x12
00436327  8B C8                     MOV ECX,EAX
00436329  FF 52 28                  CALL dword ptr [EDX + 0x28]
0043632C  66 3D 13 00               CMP AX,0x13
00436330  74 1B                     JZ 0x0043634d
LAB_00436332:
00436332  8B 45 14                  MOV EAX,dword ptr [EBP + 0x14]
00436335  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
00436338  40                        INC EAX
00436339  3B C1                     CMP EAX,ECX
0043633B  89 45 14                  MOV dword ptr [EBP + 0x14],EAX
0043633E  7C B7                     JL 0x004362f7
00436340  5F                        POP EDI
00436341  5E                        POP ESI
00436342  66 B8 01 00               MOV AX,0x1
00436346  5B                        POP EBX
00436347  8B E5                     MOV ESP,EBP
00436349  5D                        POP EBP
0043634A  C2 18 00                  RET 0x18
LAB_0043634d:
0043634D  5F                        POP EDI
0043634E  5E                        POP ESI
0043634F  66 B8 13 00               MOV AX,0x13
00436353  5B                        POP EBX
00436354  8B E5                     MOV ESP,EBP
00436356  5D                        POP EBP
00436357  C2 18 00                  RET 0x18
switchD_00435c5c::caseD_13:
0043635A  85 F6                     TEST ESI,ESI
0043635C  75 0D                     JNZ 0x0043636b
0043635E  5F                        POP EDI
0043635F  5E                        POP ESI
00436360  66 B8 01 00               MOV AX,0x1
00436364  5B                        POP EBX
00436365  8B E5                     MOV ESP,EBP
00436367  5D                        POP EBP
00436368  C2 18 00                  RET 0x18
LAB_0043636b:
0043636B  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
0043636E  C7 45 14 00 00 00 00      MOV dword ptr [EBP + 0x14],0x0
00436375  85 C0                     TEST EAX,EAX
00436377  7E 6F                     JLE 0x004363e8
LAB_00436379:
00436379  8B 4D 0C                  MOV ECX,dword ptr [EBP + 0xc]
0043637C  8D 55 08                  LEA EDX,[EBP + 0x8]
0043637F  52                        PUSH EDX
00436380  8B 55 14                  MOV EDX,dword ptr [EBP + 0x14]
00436383  E8 E8 68 27 00            CALL 0x006acc70
00436388  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
0043638B  66 3D FF FF               CMP AX,0xffff
0043638F  74 2B                     JZ 0x004363bc
00436391  6A 01                     PUSH 0x1
00436393  50                        PUSH EAX
00436394  53                        PUSH EBX
00436395  8B CF                     MOV ECX,EDI
00436397  E8 1E C5 FC FF            CALL 0x004028ba
0043639C  3B F0                     CMP ESI,EAX
0043639E  0F 84 E3 05 00 00         JZ 0x00436987
004363A4  8B 4D 1C                  MOV ECX,dword ptr [EBP + 0x1c]
004363A7  8B 10                     MOV EDX,dword ptr [EAX]
004363A9  51                        PUSH ECX
004363AA  8B 4D 18                  MOV ECX,dword ptr [EBP + 0x18]
004363AD  51                        PUSH ECX
004363AE  56                        PUSH ESI
004363AF  6A 13                     PUSH 0x13
004363B1  8B C8                     MOV ECX,EAX
004363B3  FF 52 28                  CALL dword ptr [EDX + 0x28]
004363B6  66 3D 1A 00               CMP AX,0x1a
004363BA  74 1B                     JZ 0x004363d7
LAB_004363bc:
004363BC  8B 45 14                  MOV EAX,dword ptr [EBP + 0x14]
004363BF  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
004363C2  40                        INC EAX
004363C3  3B C1                     CMP EAX,ECX
004363C5  89 45 14                  MOV dword ptr [EBP + 0x14],EAX
004363C8  7C AF                     JL 0x00436379
004363CA  5F                        POP EDI
004363CB  5E                        POP ESI
004363CC  66 B8 01 00               MOV AX,0x1
004363D0  5B                        POP EBX
004363D1  8B E5                     MOV ESP,EBP
004363D3  5D                        POP EBP
004363D4  C2 18 00                  RET 0x18
LAB_004363d7:
004363D7  5F                        POP EDI
004363D8  5E                        POP ESI
004363D9  66 B8 1A 00               MOV AX,0x1a
004363DD  5B                        POP EBX
004363DE  8B E5                     MOV ESP,EBP
004363E0  5D                        POP EBP
004363E1  C2 18 00                  RET 0x18
switchD_00435c5c::caseD_d:
004363E4  85 F6                     TEST ESI,ESI
004363E6  75 0D                     JNZ 0x004363f5
LAB_004363e8:
004363E8  5F                        POP EDI
004363E9  5E                        POP ESI
004363EA  66 B8 01 00               MOV AX,0x1
004363EE  5B                        POP EBX
004363EF  8B E5                     MOV ESP,EBP
004363F1  5D                        POP EBP
004363F2  C2 18 00                  RET 0x18
LAB_004363f5:
004363F5  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
004363F8  C7 45 14 00 00 00 00      MOV dword ptr [EBP + 0x14],0x0
004363FF  85 C0                     TEST EAX,EAX
00436401  7E E5                     JLE 0x004363e8
LAB_00436403:
00436403  8B 4D 0C                  MOV ECX,dword ptr [EBP + 0xc]
00436406  8D 55 08                  LEA EDX,[EBP + 0x8]
00436409  52                        PUSH EDX
0043640A  8B 55 14                  MOV EDX,dword ptr [EBP + 0x14]
0043640D  E8 5E 68 27 00            CALL 0x006acc70
00436412  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
00436415  66 3D FF FF               CMP AX,0xffff
00436419  74 2B                     JZ 0x00436446
0043641B  6A 01                     PUSH 0x1
0043641D  50                        PUSH EAX
0043641E  53                        PUSH EBX
0043641F  8B CF                     MOV ECX,EDI
00436421  E8 94 C4 FC FF            CALL 0x004028ba
00436426  3B F0                     CMP ESI,EAX
00436428  0F 84 59 05 00 00         JZ 0x00436987
0043642E  8B 4D 1C                  MOV ECX,dword ptr [EBP + 0x1c]
00436431  8B 10                     MOV EDX,dword ptr [EAX]
00436433  51                        PUSH ECX
00436434  8B 4D 18                  MOV ECX,dword ptr [EBP + 0x18]
00436437  51                        PUSH ECX
00436438  56                        PUSH ESI
00436439  6A 0D                     PUSH 0xd
0043643B  8B C8                     MOV ECX,EAX
0043643D  FF 52 28                  CALL dword ptr [EDX + 0x28]
00436440  66 3D 17 00               CMP AX,0x17
00436444  74 1B                     JZ 0x00436461
LAB_00436446:
00436446  8B 45 14                  MOV EAX,dword ptr [EBP + 0x14]
00436449  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
0043644C  40                        INC EAX
0043644D  3B C1                     CMP EAX,ECX
0043644F  89 45 14                  MOV dword ptr [EBP + 0x14],EAX
00436452  7C AF                     JL 0x00436403
00436454  5F                        POP EDI
00436455  5E                        POP ESI
00436456  66 B8 01 00               MOV AX,0x1
0043645A  5B                        POP EBX
0043645B  8B E5                     MOV ESP,EBP
0043645D  5D                        POP EBP
0043645E  C2 18 00                  RET 0x18
LAB_00436461:
00436461  5F                        POP EDI
00436462  5E                        POP ESI
00436463  66 B8 17 00               MOV AX,0x17
00436467  5B                        POP EBX
00436468  8B E5                     MOV ESP,EBP
0043646A  5D                        POP EBP
0043646B  C2 18 00                  RET 0x18
switchD_00435c5c::caseD_e:
0043646E  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
00436471  C7 45 14 00 00 00 00      MOV dword ptr [EBP + 0x14],0x0
00436478  85 C0                     TEST EAX,EAX
0043647A  7E 51                     JLE 0x004364cd
LAB_0043647c:
0043647C  8B 4D 0C                  MOV ECX,dword ptr [EBP + 0xc]
0043647F  8D 55 08                  LEA EDX,[EBP + 0x8]
00436482  52                        PUSH EDX
00436483  8B 55 14                  MOV EDX,dword ptr [EBP + 0x14]
00436486  E8 E5 67 27 00            CALL 0x006acc70
0043648B  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
0043648E  66 3D FF FF               CMP AX,0xffff
00436492  74 2B                     JZ 0x004364bf
00436494  6A 01                     PUSH 0x1
00436496  50                        PUSH EAX
00436497  53                        PUSH EBX
00436498  8B CF                     MOV ECX,EDI
0043649A  E8 1B C4 FC FF            CALL 0x004028ba
0043649F  3B F0                     CMP ESI,EAX
004364A1  0F 84 E0 04 00 00         JZ 0x00436987
004364A7  8B 4D 1C                  MOV ECX,dword ptr [EBP + 0x1c]
004364AA  8B 10                     MOV EDX,dword ptr [EAX]
004364AC  51                        PUSH ECX
004364AD  8B 4D 18                  MOV ECX,dword ptr [EBP + 0x18]
004364B0  51                        PUSH ECX
004364B1  56                        PUSH ESI
004364B2  6A 0E                     PUSH 0xe
004364B4  8B C8                     MOV ECX,EAX
004364B6  FF 52 28                  CALL dword ptr [EDX + 0x28]
004364B9  66 3D 14 00               CMP AX,0x14
004364BD  74 1B                     JZ 0x004364da
LAB_004364bf:
004364BF  8B 45 14                  MOV EAX,dword ptr [EBP + 0x14]
004364C2  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
004364C5  40                        INC EAX
004364C6  3B C1                     CMP EAX,ECX
004364C8  89 45 14                  MOV dword ptr [EBP + 0x14],EAX
004364CB  7C AF                     JL 0x0043647c
LAB_004364cd:
004364CD  5F                        POP EDI
004364CE  5E                        POP ESI
004364CF  66 B8 15 00               MOV AX,0x15
004364D3  5B                        POP EBX
004364D4  8B E5                     MOV ESP,EBP
004364D6  5D                        POP EBP
004364D7  C2 18 00                  RET 0x18
LAB_004364da:
004364DA  5F                        POP EDI
004364DB  5E                        POP ESI
004364DC  66 B8 14 00               MOV AX,0x14
004364E0  5B                        POP EBX
004364E1  8B E5                     MOV ESP,EBP
004364E3  5D                        POP EBP
004364E4  C2 18 00                  RET 0x18
switchD_00435c5c::caseD_18:
004364E7  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
004364EA  C7 45 14 00 00 00 00      MOV dword ptr [EBP + 0x14],0x0
004364F1  85 C0                     TEST EAX,EAX
004364F3  0F 8E EF FE FF FF         JLE 0x004363e8
LAB_004364f9:
004364F9  8B 4D 0C                  MOV ECX,dword ptr [EBP + 0xc]
004364FC  8D 55 08                  LEA EDX,[EBP + 0x8]
004364FF  52                        PUSH EDX
00436500  8B 55 14                  MOV EDX,dword ptr [EBP + 0x14]
00436503  E8 68 67 27 00            CALL 0x006acc70
00436508  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
0043650B  66 3D FF FF               CMP AX,0xffff
0043650F  74 2F                     JZ 0x00436540
00436511  6A 01                     PUSH 0x1
00436513  50                        PUSH EAX
00436514  53                        PUSH EBX
00436515  8B CF                     MOV ECX,EDI
00436517  E8 9E C3 FC FF            CALL 0x004028ba
0043651C  3B F0                     CMP ESI,EAX
0043651E  0F 84 63 04 00 00         JZ 0x00436987
00436524  8B 4D 1C                  MOV ECX,dword ptr [EBP + 0x1c]
00436527  8B 10                     MOV EDX,dword ptr [EAX]
00436529  51                        PUSH ECX
0043652A  8B 4D 18                  MOV ECX,dword ptr [EBP + 0x18]
0043652D  51                        PUSH ECX
0043652E  56                        PUSH ESI
0043652F  6A 18                     PUSH 0x18
00436531  8B C8                     MOV ECX,EAX
00436533  FF 52 28                  CALL dword ptr [EDX + 0x28]
00436536  66 3D 1D 00               CMP AX,0x1d
0043653A  0F 84 B5 04 00 00         JZ 0x004369f5
LAB_00436540:
00436540  8B 45 14                  MOV EAX,dword ptr [EBP + 0x14]
00436543  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
00436546  40                        INC EAX
00436547  3B C1                     CMP EAX,ECX
00436549  89 45 14                  MOV dword ptr [EBP + 0x14],EAX
0043654C  7C AB                     JL 0x004364f9
0043654E  5F                        POP EDI
0043654F  5E                        POP ESI
00436550  66 B8 01 00               MOV AX,0x1
00436554  5B                        POP EBX
00436555  8B E5                     MOV ESP,EBP
00436557  5D                        POP EBP
00436558  C2 18 00                  RET 0x18
switchD_00435c5c::caseD_0:
0043655B  85 F6                     TEST ESI,ESI
0043655D  0F 84 AC 04 00 00         JZ 0x00436a0f
00436563  8B 46 20                  MOV EAX,dword ptr [ESI + 0x20]
00436566  83 F8 14                  CMP EAX,0x14
00436569  74 12                     JZ 0x0043657d
0043656B  3D E8 03 00 00            CMP EAX,0x3e8
00436570  74 0B                     JZ 0x0043657d
00436572  3D E9 03 00 00            CMP EAX,0x3e9
00436577  0F 85 92 04 00 00         JNZ 0x00436a0f
LAB_0043657d:
0043657D  8B 16                     MOV EDX,dword ptr [ESI]
0043657F  8B CE                     MOV ECX,ESI
00436581  FF 52 2C                  CALL dword ptr [EDX + 0x2c]
00436584  83 F8 63                  CMP EAX,0x63
00436587  74 18                     JZ 0x004365a1
00436589  8B 06                     MOV EAX,dword ptr [ESI]
0043658B  8B CE                     MOV ECX,ESI
0043658D  FF 50 2C                  CALL dword ptr [EAX + 0x2c]
00436590  83 F8 52                  CMP EAX,0x52
00436593  74 0C                     JZ 0x004365a1
00436595  8B 16                     MOV EDX,dword ptr [ESI]
00436597  8B CE                     MOV ECX,ESI
00436599  FF 52 2C                  CALL dword ptr [EDX + 0x2c]
0043659C  83 F8 5F                  CMP EAX,0x5f
0043659F  75 57                     JNZ 0x004365f8
LAB_004365a1:
004365A1  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
004365A4  C7 45 14 00 00 00 00      MOV dword ptr [EBP + 0x14],0x0
004365AB  85 C0                     TEST EAX,EAX
004365AD  7E 49                     JLE 0x004365f8
LAB_004365af:
004365AF  8B 55 14                  MOV EDX,dword ptr [EBP + 0x14]
004365B2  8B 4D 0C                  MOV ECX,dword ptr [EBP + 0xc]
004365B5  8D 45 08                  LEA EAX,[EBP + 0x8]
004365B8  50                        PUSH EAX
004365B9  E8 B2 66 27 00            CALL 0x006acc70
004365BE  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
004365C1  66 3D FF FF               CMP AX,0xffff
004365C5  74 23                     JZ 0x004365ea
004365C7  6A 01                     PUSH 0x1
004365C9  50                        PUSH EAX
004365CA  53                        PUSH EBX
004365CB  8B CF                     MOV ECX,EDI
004365CD  E8 E8 C2 FC FF            CALL 0x004028ba
004365D2  8B 4D 1C                  MOV ECX,dword ptr [EBP + 0x1c]
004365D5  8B 10                     MOV EDX,dword ptr [EAX]
004365D7  51                        PUSH ECX
004365D8  8B 4D 18                  MOV ECX,dword ptr [EBP + 0x18]
004365DB  51                        PUSH ECX
004365DC  56                        PUSH ESI
004365DD  6A 00                     PUSH 0x0
004365DF  8B C8                     MOV ECX,EAX
004365E1  FF 52 28                  CALL dword ptr [EDX + 0x28]
004365E4  66 3D 1E 00               CMP AX,0x1e
004365E8  74 4B                     JZ 0x00436635
LAB_004365ea:
004365EA  8B 45 14                  MOV EAX,dword ptr [EBP + 0x14]
004365ED  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
004365F0  40                        INC EAX
004365F1  3B C1                     CMP EAX,ECX
004365F3  89 45 14                  MOV dword ptr [EBP + 0x14],EAX
004365F6  7C B7                     JL 0x004365af
LAB_004365f8:
004365F8  8A 0D 8F 8A 80 00         MOV CL,byte ptr [0x00808a8f]
004365FE  8A 46 24                  MOV AL,byte ptr [ESI + 0x24]
00436601  84 C9                     TEST CL,CL
00436603  88 45 10                  MOV byte ptr [EBP + 0x10],AL
00436606  74 3A                     JZ 0x00436642
00436608  8B 45 10                  MOV EAX,dword ptr [EBP + 0x10]
0043660B  25 FF 00 00 00            AND EAX,0xff
00436610  8D 0C C0                  LEA ECX,[EAX + EAX*0x8]
00436613  8B C3                     MOV EAX,EBX
00436615  25 FF 00 00 00            AND EAX,0xff
0043661A  8D 04 C0                  LEA EAX,[EAX + EAX*0x8]
0043661D  8A 94 C0 EA 87 80 00      MOV DL,byte ptr [EAX + EAX*0x8 + 0x8087ea]
00436624  33 C0                     XOR EAX,EAX
00436626  3A 94 C9 EA 87 80 00      CMP DL,byte ptr [ECX + ECX*0x8 + 0x8087ea]
0043662D  0F 95 C0                  SETNZ AL
00436630  E9 86 00 00 00            JMP 0x004366bb
LAB_00436635:
00436635  5F                        POP EDI
00436636  5E                        POP ESI
00436637  66 B8 1E 00               MOV AX,0x1e
0043663B  5B                        POP EBX
0043663C  8B E5                     MOV ESP,EBP
0043663E  5D                        POP EBP
0043663F  C2 18 00                  RET 0x18
LAB_00436642:
00436642  3A C3                     CMP AL,BL
00436644  74 6A                     JZ 0x004366b0
00436646  8B 45 10                  MOV EAX,dword ptr [EBP + 0x10]
00436649  8B CB                     MOV ECX,EBX
0043664B  25 FF 00 00 00            AND EAX,0xff
00436650  81 E1 FF 00 00 00         AND ECX,0xff
00436656  8A 94 C1 4F 8A 80 00      MOV DL,byte ptr [ECX + EAX*0x8 + 0x808a4f]
0043665D  84 D2                     TEST DL,DL
0043665F  75 10                     JNZ 0x00436671
00436661  38 94 C8 4F 8A 80 00      CMP byte ptr [EAX + ECX*0x8 + 0x808a4f],DL
00436668  75 07                     JNZ 0x00436671
0043666A  B8 FE FF FF FF            MOV EAX,0xfffffffe
0043666F  EB 41                     JMP 0x004366b2
LAB_00436671:
00436671  80 FA 01                  CMP DL,0x1
00436674  75 0F                     JNZ 0x00436685
00436676  80 BC C8 4F 8A 80 00 00   CMP byte ptr [EAX + ECX*0x8 + 0x808a4f],0x0
0043667E  75 05                     JNZ 0x00436685
00436680  83 C8 FF                  OR EAX,0xffffffff
00436683  EB 2D                     JMP 0x004366b2
LAB_00436685:
00436685  84 D2                     TEST DL,DL
00436687  75 11                     JNZ 0x0043669a
00436689  80 BC C8 4F 8A 80 00 01   CMP byte ptr [EAX + ECX*0x8 + 0x808a4f],0x1
00436691  75 07                     JNZ 0x0043669a
00436693  B8 01 00 00 00            MOV EAX,0x1
00436698  EB 18                     JMP 0x004366b2
LAB_0043669a:
0043669A  80 FA 01                  CMP DL,0x1
0043669D  75 11                     JNZ 0x004366b0
0043669F  80 BC C8 4F 8A 80 00 01   CMP byte ptr [EAX + ECX*0x8 + 0x808a4f],0x1
004366A7  75 07                     JNZ 0x004366b0
004366A9  B8 02 00 00 00            MOV EAX,0x2
004366AE  EB 02                     JMP 0x004366b2
LAB_004366b0:
004366B0  33 C0                     XOR EAX,EAX
LAB_004366b2:
004366B2  33 C9                     XOR ECX,ECX
004366B4  85 C0                     TEST EAX,EAX
004366B6  0F 9C C1                  SETL CL
004366B9  8B C1                     MOV EAX,ECX
LAB_004366bb:
004366BB  83 F8 01                  CMP EAX,0x1
004366BE  0F 84 5C 02 00 00         JZ 0x00436920
004366C4  8B 46 20                  MOV EAX,dword ptr [ESI + 0x20]
004366C7  83 F8 14                  CMP EAX,0x14
004366CA  0F 85 82 00 00 00         JNZ 0x00436752
004366D0  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
004366D3  C7 45 14 00 00 00 00      MOV dword ptr [EBP + 0x14],0x0
004366DA  85 C0                     TEST EAX,EAX
004366DC  7E 57                     JLE 0x00436735
LAB_004366de:
004366DE  8B 4D 0C                  MOV ECX,dword ptr [EBP + 0xc]
004366E1  8D 55 08                  LEA EDX,[EBP + 0x8]
004366E4  52                        PUSH EDX
004366E5  8B 55 14                  MOV EDX,dword ptr [EBP + 0x14]
004366E8  E8 83 65 27 00            CALL 0x006acc70
004366ED  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
004366F0  66 3D FF FF               CMP AX,0xffff
004366F4  74 31                     JZ 0x00436727
004366F6  6A 01                     PUSH 0x1
004366F8  50                        PUSH EAX
004366F9  53                        PUSH EBX
004366FA  8B CF                     MOV ECX,EDI
004366FC  E8 B9 C1 FC FF            CALL 0x004028ba
00436701  8B 4D 1C                  MOV ECX,dword ptr [EBP + 0x1c]
00436704  8B 10                     MOV EDX,dword ptr [EAX]
00436706  51                        PUSH ECX
00436707  8B 4D 18                  MOV ECX,dword ptr [EBP + 0x18]
0043670A  51                        PUSH ECX
0043670B  56                        PUSH ESI
0043670C  6A 00                     PUSH 0x0
0043670E  8B C8                     MOV ECX,EAX
00436710  FF 52 28                  CALL dword ptr [EDX + 0x28]
00436713  66 3D 17 00               CMP AX,0x17
00436717  0F 84 6D 02 00 00         JZ 0x0043698a
0043671D  66 3D 1A 00               CMP AX,0x1a
00436721  0F 84 63 02 00 00         JZ 0x0043698a
LAB_00436727:
00436727  8B 45 14                  MOV EAX,dword ptr [EBP + 0x14]
0043672A  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
0043672D  40                        INC EAX
0043672E  3B C1                     CMP EAX,ECX
00436730  89 45 14                  MOV dword ptr [EBP + 0x14],EAX
00436733  7C A9                     JL 0x004366de
LAB_00436735:
00436735  8B 16                     MOV EDX,dword ptr [ESI]
00436737  8B CE                     MOV ECX,ESI
00436739  FF 92 EC 00 00 00         CALL dword ptr [EDX + 0xec]
0043673F  48                        DEC EAX
00436740  5F                        POP EDI
00436741  F7 D8                     NEG EAX
00436743  1B C0                     SBB EAX,EAX
00436745  5E                        POP ESI
00436746  24 FD                     AND AL,0xfd
00436748  5B                        POP EBX
00436749  83 C0 03                  ADD EAX,0x3
0043674C  8B E5                     MOV ESP,EBP
0043674E  5D                        POP EBP
0043674F  C2 18 00                  RET 0x18
LAB_00436752:
00436752  3D E9 03 00 00            CMP EAX,0x3e9
00436757  0F 84 A6 01 00 00         JZ 0x00436903
0043675D  8B 4E 24                  MOV ECX,dword ptr [ESI + 0x24]
00436760  0F BE C3                  MOVSX EAX,BL
00436763  3B C8                     CMP ECX,EAX
00436765  0F 85 98 01 00 00         JNZ 0x00436903
0043676B  8B 16                     MOV EDX,dword ptr [ESI]
0043676D  8B CE                     MOV ECX,ESI
0043676F  FF 52 2C                  CALL dword ptr [EDX + 0x2c]
00436772  83 F8 33                  CMP EAX,0x33
00436775  75 5B                     JNZ 0x004367d2
00436777  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
0043677A  C7 45 14 00 00 00 00      MOV dword ptr [EBP + 0x14],0x0
00436781  85 C0                     TEST EAX,EAX
00436783  7E 4D                     JLE 0x004367d2
LAB_00436785:
00436785  8B 55 14                  MOV EDX,dword ptr [EBP + 0x14]
00436788  8B 4D 0C                  MOV ECX,dword ptr [EBP + 0xc]
0043678B  8D 45 08                  LEA EAX,[EBP + 0x8]
0043678E  50                        PUSH EAX
0043678F  E8 DC 64 27 00            CALL 0x006acc70
00436794  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
00436797  66 3D FF FF               CMP AX,0xffff
0043679B  74 27                     JZ 0x004367c4
0043679D  6A 01                     PUSH 0x1
0043679F  50                        PUSH EAX
004367A0  53                        PUSH EBX
004367A1  8B CF                     MOV ECX,EDI
004367A3  E8 12 C1 FC FF            CALL 0x004028ba
004367A8  8B 4D 1C                  MOV ECX,dword ptr [EBP + 0x1c]
004367AB  8B 10                     MOV EDX,dword ptr [EAX]
004367AD  51                        PUSH ECX
004367AE  8B 4D 18                  MOV ECX,dword ptr [EBP + 0x18]
004367B1  51                        PUSH ECX
004367B2  56                        PUSH ESI
004367B3  6A 00                     PUSH 0x0
004367B5  8B C8                     MOV ECX,EAX
004367B7  FF 52 28                  CALL dword ptr [EDX + 0x28]
004367BA  66 3D 18 00               CMP AX,0x18
004367BE  0F 84 25 01 00 00         JZ 0x004368e9
LAB_004367c4:
004367C4  8B 45 14                  MOV EAX,dword ptr [EBP + 0x14]
004367C7  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
004367CA  40                        INC EAX
004367CB  3B C1                     CMP EAX,ECX
004367CD  89 45 14                  MOV dword ptr [EBP + 0x14],EAX
004367D0  7C B3                     JL 0x00436785
LAB_004367d2:
004367D2  8B 16                     MOV EDX,dword ptr [ESI]
004367D4  8B CE                     MOV ECX,ESI
004367D6  FF 52 2C                  CALL dword ptr [EDX + 0x2c]
004367D9  83 F8 37                  CMP EAX,0x37
004367DC  74 0C                     JZ 0x004367ea
004367DE  8B 06                     MOV EAX,dword ptr [ESI]
004367E0  8B CE                     MOV ECX,ESI
004367E2  FF 50 2C                  CALL dword ptr [EAX + 0x2c]
004367E5  83 F8 6C                  CMP EAX,0x6c
004367E8  75 5B                     JNZ 0x00436845
LAB_004367ea:
004367EA  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
004367ED  C7 45 14 00 00 00 00      MOV dword ptr [EBP + 0x14],0x0
004367F4  85 C0                     TEST EAX,EAX
004367F6  7E 4D                     JLE 0x00436845
LAB_004367f8:
004367F8  8B 55 14                  MOV EDX,dword ptr [EBP + 0x14]
004367FB  8D 4D 08                  LEA ECX,[EBP + 0x8]
004367FE  51                        PUSH ECX
004367FF  8B 4D 0C                  MOV ECX,dword ptr [EBP + 0xc]
00436802  E8 69 64 27 00            CALL 0x006acc70
00436807  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
0043680A  66 3D FF FF               CMP AX,0xffff
0043680E  74 27                     JZ 0x00436837
00436810  6A 01                     PUSH 0x1
00436812  50                        PUSH EAX
00436813  53                        PUSH EBX
00436814  8B CF                     MOV ECX,EDI
00436816  E8 9F C0 FC FF            CALL 0x004028ba
0043681B  8B 4D 1C                  MOV ECX,dword ptr [EBP + 0x1c]
0043681E  8B 10                     MOV EDX,dword ptr [EAX]
00436820  51                        PUSH ECX
00436821  8B 4D 18                  MOV ECX,dword ptr [EBP + 0x18]
00436824  51                        PUSH ECX
00436825  56                        PUSH ESI
00436826  6A 00                     PUSH 0x0
00436828  8B C8                     MOV ECX,EAX
0043682A  FF 52 28                  CALL dword ptr [EDX + 0x28]
0043682D  66 3D 1D 00               CMP AX,0x1d
00436831  0F 84 BE 01 00 00         JZ 0x004369f5
LAB_00436837:
00436837  8B 45 14                  MOV EAX,dword ptr [EBP + 0x14]
0043683A  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
0043683D  40                        INC EAX
0043683E  3B C1                     CMP EAX,ECX
00436840  89 45 14                  MOV dword ptr [EBP + 0x14],EAX
00436843  7C B3                     JL 0x004367f8
LAB_00436845:
00436845  8B 16                     MOV EDX,dword ptr [ESI]
00436847  8B CE                     MOV ECX,ESI
00436849  FF 52 2C                  CALL dword ptr [EDX + 0x2c]
0043684C  83 F8 38                  CMP EAX,0x38
0043684F  74 24                     JZ 0x00436875
00436851  8B 06                     MOV EAX,dword ptr [ESI]
00436853  8B CE                     MOV ECX,ESI
00436855  FF 50 2C                  CALL dword ptr [EAX + 0x2c]
00436858  83 F8 39                  CMP EAX,0x39
0043685B  74 18                     JZ 0x00436875
0043685D  8B 16                     MOV EDX,dword ptr [ESI]
0043685F  8B CE                     MOV ECX,ESI
00436861  FF 52 2C                  CALL dword ptr [EDX + 0x2c]
00436864  83 F8 4F                  CMP EAX,0x4f
00436867  74 0C                     JZ 0x00436875
00436869  8B 06                     MOV EAX,dword ptr [ESI]
0043686B  8B CE                     MOV ECX,ESI
0043686D  FF 50 2C                  CALL dword ptr [EAX + 0x2c]
00436870  83 F8 5E                  CMP EAX,0x5e
00436873  75 57                     JNZ 0x004368cc
LAB_00436875:
00436875  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
00436878  C7 45 14 00 00 00 00      MOV dword ptr [EBP + 0x14],0x0
0043687F  85 C0                     TEST EAX,EAX
00436881  7E 49                     JLE 0x004368cc
LAB_00436883:
00436883  8B 55 14                  MOV EDX,dword ptr [EBP + 0x14]
00436886  8D 4D 08                  LEA ECX,[EBP + 0x8]
00436889  51                        PUSH ECX
0043688A  8B 4D 0C                  MOV ECX,dword ptr [EBP + 0xc]
0043688D  E8 DE 63 27 00            CALL 0x006acc70
00436892  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
00436895  66 3D FF FF               CMP AX,0xffff
00436899  74 23                     JZ 0x004368be
0043689B  6A 01                     PUSH 0x1
0043689D  50                        PUSH EAX
0043689E  53                        PUSH EBX
0043689F  8B CF                     MOV ECX,EDI
004368A1  E8 14 C0 FC FF            CALL 0x004028ba
004368A6  8B 4D 1C                  MOV ECX,dword ptr [EBP + 0x1c]
004368A9  8B 10                     MOV EDX,dword ptr [EAX]
004368AB  51                        PUSH ECX
004368AC  8B 4D 18                  MOV ECX,dword ptr [EBP + 0x18]
004368AF  51                        PUSH ECX
004368B0  56                        PUSH ESI
004368B1  6A 00                     PUSH 0x0
004368B3  8B C8                     MOV ECX,EAX
004368B5  FF 52 28                  CALL dword ptr [EDX + 0x28]
004368B8  66 3D 12 00               CMP AX,0x12
004368BC  74 38                     JZ 0x004368f6
LAB_004368be:
004368BE  8B 45 14                  MOV EAX,dword ptr [EBP + 0x14]
004368C1  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
004368C4  40                        INC EAX
004368C5  3B C1                     CMP EAX,ECX
004368C7  89 45 14                  MOV dword ptr [EBP + 0x14],EAX
004368CA  7C B7                     JL 0x00436883
LAB_004368cc:
004368CC  8B 16                     MOV EDX,dword ptr [ESI]
004368CE  8B CE                     MOV ECX,ESI
004368D0  FF 92 EC 00 00 00         CALL dword ptr [EDX + 0xec]
004368D6  48                        DEC EAX
004368D7  5F                        POP EDI
004368D8  F7 D8                     NEG EAX
004368DA  1B C0                     SBB EAX,EAX
004368DC  5E                        POP ESI
004368DD  24 FC                     AND AL,0xfc
004368DF  5B                        POP EBX
004368E0  83 C0 04                  ADD EAX,0x4
004368E3  8B E5                     MOV ESP,EBP
004368E5  5D                        POP EBP
004368E6  C2 18 00                  RET 0x18
LAB_004368e9:
004368E9  5F                        POP EDI
004368EA  5E                        POP ESI
004368EB  66 B8 18 00               MOV AX,0x18
004368EF  5B                        POP EBX
004368F0  8B E5                     MOV ESP,EBP
004368F2  5D                        POP EBP
004368F3  C2 18 00                  RET 0x18
LAB_004368f6:
004368F6  5F                        POP EDI
004368F7  5E                        POP ESI
004368F8  66 B8 12 00               MOV AX,0x12
004368FC  5B                        POP EBX
004368FD  8B E5                     MOV ESP,EBP
004368FF  5D                        POP EBP
00436900  C2 18 00                  RET 0x18
LAB_00436903:
00436903  8B 06                     MOV EAX,dword ptr [ESI]
00436905  8B CE                     MOV ECX,ESI
00436907  FF 90 EC 00 00 00         CALL dword ptr [EAX + 0xec]
0043690D  48                        DEC EAX
0043690E  5F                        POP EDI
0043690F  F7 D8                     NEG EAX
00436911  1B C0                     SBB EAX,EAX
00436913  5E                        POP ESI
00436914  24 FC                     AND AL,0xfc
00436916  5B                        POP EBX
00436917  83 C0 04                  ADD EAX,0x4
0043691A  8B E5                     MOV ESP,EBP
0043691C  5D                        POP EBP
0043691D  C2 18 00                  RET 0x18
LAB_00436920:
00436920  8B 16                     MOV EDX,dword ptr [ESI]
00436922  8B CE                     MOV ECX,ESI
00436924  FF 52 2C                  CALL dword ptr [EDX + 0x2c]
00436927  83 F8 6C                  CMP EAX,0x6c
0043692A  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
0043692D  C7 45 14 00 00 00 00      MOV dword ptr [EBP + 0x14],0x0
00436934  74 5D                     JZ 0x00436993
00436936  85 C0                     TEST EAX,EAX
00436938  7E 4D                     JLE 0x00436987
LAB_0043693a:
0043693A  8B 55 14                  MOV EDX,dword ptr [EBP + 0x14]
0043693D  8B 4D 0C                  MOV ECX,dword ptr [EBP + 0xc]
00436940  8D 45 08                  LEA EAX,[EBP + 0x8]
00436943  50                        PUSH EAX
00436944  E8 27 63 27 00            CALL 0x006acc70
00436949  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
0043694C  66 3D FF FF               CMP AX,0xffff
00436950  74 27                     JZ 0x00436979
00436952  6A 01                     PUSH 0x1
00436954  50                        PUSH EAX
00436955  53                        PUSH EBX
00436956  8B CF                     MOV ECX,EDI
00436958  E8 5D BF FC FF            CALL 0x004028ba
0043695D  8B 4D 1C                  MOV ECX,dword ptr [EBP + 0x1c]
00436960  8B 10                     MOV EDX,dword ptr [EAX]
00436962  51                        PUSH ECX
00436963  8B 4D 18                  MOV ECX,dword ptr [EBP + 0x18]
00436966  51                        PUSH ECX
00436967  56                        PUSH ESI
00436968  6A 00                     PUSH 0x0
0043696A  8B C8                     MOV ECX,EAX
0043696C  FF 52 28                  CALL dword ptr [EDX + 0x28]
0043696F  66 3D 07 00               CMP AX,0x7
00436973  0F 84 89 00 00 00         JZ 0x00436a02
LAB_00436979:
00436979  8B 45 14                  MOV EAX,dword ptr [EBP + 0x14]
0043697C  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
0043697F  40                        INC EAX
00436980  3B C1                     CMP EAX,ECX
00436982  89 45 14                  MOV dword ptr [EBP + 0x14],EAX
00436985  7C B3                     JL 0x0043693a
switchD_00435c5c::caseD_1:
00436987  66 33 C0                  XOR AX,AX
LAB_0043698a:
0043698A  5F                        POP EDI
0043698B  5E                        POP ESI
0043698C  5B                        POP EBX
0043698D  8B E5                     MOV ESP,EBP
0043698F  5D                        POP EBP
00436990  C2 18 00                  RET 0x18
LAB_00436993:
00436993  85 C0                     TEST EAX,EAX
00436995  7E F0                     JLE 0x00436987
LAB_00436997:
00436997  8B 4D 0C                  MOV ECX,dword ptr [EBP + 0xc]
0043699A  8D 55 08                  LEA EDX,[EBP + 0x8]
0043699D  52                        PUSH EDX
0043699E  8B 55 14                  MOV EDX,dword ptr [EBP + 0x14]
004369A1  E8 CA 62 27 00            CALL 0x006acc70
004369A6  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
004369A9  66 3D FF FF               CMP AX,0xffff
004369AD  74 2C                     JZ 0x004369db
004369AF  6A 01                     PUSH 0x1
004369B1  50                        PUSH EAX
004369B2  53                        PUSH EBX
004369B3  8B CF                     MOV ECX,EDI
004369B5  E8 00 BF FC FF            CALL 0x004028ba
004369BA  8B 4D 1C                  MOV ECX,dword ptr [EBP + 0x1c]
004369BD  8B 10                     MOV EDX,dword ptr [EAX]
004369BF  51                        PUSH ECX
004369C0  8B 4D 18                  MOV ECX,dword ptr [EBP + 0x18]
004369C3  51                        PUSH ECX
004369C4  56                        PUSH ESI
004369C5  6A 00                     PUSH 0x0
004369C7  8B C8                     MOV ECX,EAX
004369C9  FF 52 28                  CALL dword ptr [EDX + 0x28]
004369CC  25 FF FF 00 00            AND EAX,0xffff
004369D1  83 F8 07                  CMP EAX,0x7
004369D4  74 2C                     JZ 0x00436a02
004369D6  83 F8 1D                  CMP EAX,0x1d
004369D9  74 1A                     JZ 0x004369f5
LAB_004369db:
004369DB  8B 45 14                  MOV EAX,dword ptr [EBP + 0x14]
004369DE  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
004369E1  40                        INC EAX
004369E2  3B C1                     CMP EAX,ECX
004369E4  89 45 14                  MOV dword ptr [EBP + 0x14],EAX
004369E7  7C AE                     JL 0x00436997
004369E9  5F                        POP EDI
004369EA  5E                        POP ESI
004369EB  66 33 C0                  XOR AX,AX
004369EE  5B                        POP EBX
004369EF  8B E5                     MOV ESP,EBP
004369F1  5D                        POP EBP
004369F2  C2 18 00                  RET 0x18
LAB_004369f5:
004369F5  5F                        POP EDI
004369F6  5E                        POP ESI
004369F7  66 B8 1D 00               MOV AX,0x1d
004369FB  5B                        POP EBX
004369FC  8B E5                     MOV ESP,EBP
004369FE  5D                        POP EBP
004369FF  C2 18 00                  RET 0x18
LAB_00436a02:
00436A02  5F                        POP EDI
00436A03  5E                        POP ESI
00436A04  66 B8 07 00               MOV AX,0x7
00436A08  5B                        POP EBX
00436A09  8B E5                     MOV ESP,EBP
00436A0B  5D                        POP EBP
00436A0C  C2 18 00                  RET 0x18
LAB_00436a0f:
00436A0F  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
00436A12  C7 45 14 00 00 00 00      MOV dword ptr [EBP + 0x14],0x0
00436A19  85 C0                     TEST EAX,EAX
00436A1B  0F 8E 66 FF FF FF         JLE 0x00436987
LAB_00436a21:
00436A21  8B 4D 0C                  MOV ECX,dword ptr [EBP + 0xc]
00436A24  8D 55 08                  LEA EDX,[EBP + 0x8]
00436A27  52                        PUSH EDX
00436A28  8B 55 14                  MOV EDX,dword ptr [EBP + 0x14]
00436A2B  E8 40 62 27 00            CALL 0x006acc70
00436A30  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
00436A33  66 3D FF FF               CMP AX,0xffff
00436A37  74 23                     JZ 0x00436a5c
00436A39  6A 01                     PUSH 0x1
00436A3B  50                        PUSH EAX
00436A3C  53                        PUSH EBX
00436A3D  8B CF                     MOV ECX,EDI
00436A3F  E8 76 BE FC FF            CALL 0x004028ba
00436A44  8B 4D 1C                  MOV ECX,dword ptr [EBP + 0x1c]
00436A47  8B 10                     MOV EDX,dword ptr [EAX]
00436A49  51                        PUSH ECX
00436A4A  8B 4D 18                  MOV ECX,dword ptr [EBP + 0x18]
00436A4D  51                        PUSH ECX
00436A4E  56                        PUSH ESI
00436A4F  6A 00                     PUSH 0x0
00436A51  8B C8                     MOV ECX,EAX
00436A53  FF 52 28                  CALL dword ptr [EDX + 0x28]
00436A56  66 3D 05 00               CMP AX,0x5
00436A5A  74 1A                     JZ 0x00436a76
LAB_00436a5c:
00436A5C  8B 45 14                  MOV EAX,dword ptr [EBP + 0x14]
00436A5F  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
00436A62  40                        INC EAX
00436A63  3B C1                     CMP EAX,ECX
00436A65  89 45 14                  MOV dword ptr [EBP + 0x14],EAX
00436A68  7C B7                     JL 0x00436a21
00436A6A  5F                        POP EDI
00436A6B  5E                        POP ESI
00436A6C  66 33 C0                  XOR AX,AX
00436A6F  5B                        POP EBX
00436A70  8B E5                     MOV ESP,EBP
00436A72  5D                        POP EBP
00436A73  C2 18 00                  RET 0x18
LAB_00436a76:
00436A76  5F                        POP EDI
00436A77  5E                        POP ESI
00436A78  66 B8 05 00               MOV AX,0x5
00436A7C  5B                        POP EBX
00436A7D  8B E5                     MOV ESP,EBP
00436A7F  5D                        POP EBP
00436A80  C2 18 00                  RET 0x18
