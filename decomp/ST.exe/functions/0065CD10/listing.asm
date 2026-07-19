EventDataPack:
0065CD10  55                        PUSH EBP
0065CD11  8B EC                     MOV EBP,ESP
0065CD13  83 EC 4C                  SUB ESP,0x4c
0065CD16  A1 F8 8D 85 00            MOV EAX,[0x00858df8]
0065CD1B  53                        PUSH EBX
0065CD1C  56                        PUSH ESI
0065CD1D  57                        PUSH EDI
0065CD1E  33 FF                     XOR EDI,EDI
0065CD20  8D 55 B8                  LEA EDX,[EBP + -0x48]
0065CD23  8D 4D B4                  LEA ECX,[EBP + -0x4c]
0065CD26  57                        PUSH EDI
0065CD27  52                        PUSH EDX
0065CD28  89 7D FC                  MOV dword ptr [EBP + -0x4],EDI
0065CD2B  89 7D F8                  MOV dword ptr [EBP + -0x8],EDI
0065CD2E  89 45 B4                  MOV dword ptr [EBP + -0x4c],EAX
0065CD31  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
0065CD37  E8 B4 0A 0D 00            CALL 0x0072d7f0
0065CD3C  8B F0                     MOV ESI,EAX
0065CD3E  83 C4 08                  ADD ESP,0x8
0065CD41  3B F7                     CMP ESI,EDI
0065CD43  0F 85 EB 01 00 00         JNZ 0x0065cf34
0065CD49  8B 75 08                  MOV ESI,dword ptr [EBP + 0x8]
0065CD4C  33 D2                     XOR EDX,EDX
0065CD4E  8B 8E 62 04 00 00         MOV ECX,dword ptr [ESI + 0x462]
0065CD54  8B 41 0C                  MOV EAX,dword ptr [ECX + 0xc]
0065CD57  3B C7                     CMP EAX,EDI
0065CD59  7E 3D                     JLE 0x0065cd98
0065CD5B  3B D0                     CMP EDX,EAX
LAB_0065cd5d:
0065CD5D  73 0D                     JNC 0x0065cd6c
0065CD5F  8B 41 08                  MOV EAX,dword ptr [ECX + 0x8]
0065CD62  8B 59 1C                  MOV EBX,dword ptr [ECX + 0x1c]
0065CD65  0F AF C2                  IMUL EAX,EDX
0065CD68  03 C3                     ADD EAX,EBX
0065CD6A  EB 02                     JMP 0x0065cd6e
LAB_0065cd6c:
0065CD6C  33 C0                     XOR EAX,EAX
LAB_0065cd6e:
0065CD6E  8B 48 0F                  MOV ECX,dword ptr [EAX + 0xf]
0065CD71  3B CF                     CMP ECX,EDI
0065CD73  74 15                     JZ 0x0065cd8a
0065CD75  8B 59 0C                  MOV EBX,dword ptr [ECX + 0xc]
0065CD78  0F AF 59 08               IMUL EBX,dword ptr [ECX + 0x8]
0065CD7C  8D 4B 1C                  LEA ECX,[EBX + 0x1c]
0065CD7F  89 48 17                  MOV dword ptr [EAX + 0x17],ECX
0065CD82  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
0065CD85  03 C1                     ADD EAX,ECX
0065CD87  89 45 F8                  MOV dword ptr [EBP + -0x8],EAX
LAB_0065cd8a:
0065CD8A  8B 8E 62 04 00 00         MOV ECX,dword ptr [ESI + 0x462]
0065CD90  42                        INC EDX
0065CD91  8B 41 0C                  MOV EAX,dword ptr [ECX + 0xc]
0065CD94  3B D0                     CMP EDX,EAX
0065CD96  7C C5                     JL 0x0065cd5d
LAB_0065cd98:
0065CD98  8B 86 62 04 00 00         MOV EAX,dword ptr [ESI + 0x462]
0065CD9E  8B 96 56 04 00 00         MOV EDX,dword ptr [ESI + 0x456]
0065CDA4  52                        PUSH EDX
0065CDA5  8B 48 0C                  MOV ECX,dword ptr [EAX + 0xc]
0065CDA8  0F AF 48 08               IMUL ECX,dword ptr [EAX + 0x8]
0065CDAC  8D 41 1C                  LEA EAX,[ECX + 0x1c]
0065CDAF  8B 4D F8                  MOV ECX,dword ptr [EBP + -0x8]
0065CDB2  03 C8                     ADD ECX,EAX
0065CDB4  89 86 6A 04 00 00         MOV dword ptr [ESI + 0x46a],EAX
0065CDBA  89 4D F8                  MOV dword ptr [EBP + -0x8],ECX
0065CDBD  E8 2E BA 06 00            CALL 0x006c87f0
0065CDC2  8B 4D F8                  MOV ECX,dword ptr [EBP + -0x8]
0065CDC5  89 86 5E 04 00 00         MOV dword ptr [ESI + 0x45e],EAX
0065CDCB  03 C8                     ADD ECX,EAX
0065CDCD  8D 86 6E 04 00 00         LEA EAX,[ESI + 0x46e]
0065CDD3  3B C7                     CMP EAX,EDI
0065CDD5  74 07                     JZ 0x0065cdde
0065CDD7  8B 00                     MOV EAX,dword ptr [EAX]
0065CDD9  8D 04 80                  LEA EAX,[EAX + EAX*0x4]
0065CDDC  EB 02                     JMP 0x0065cde0
LAB_0065cdde:
0065CDDE  33 C0                     XOR EAX,EAX
LAB_0065cde0:
0065CDE0  8B 5D 0C                  MOV EBX,dword ptr [EBP + 0xc]
0065CDE3  03 C8                     ADD ECX,EAX
0065CDE5  89 4D F8                  MOV dword ptr [EBP + -0x8],ECX
0065CDE8  8D 81 9F 04 00 00         LEA EAX,[ECX + 0x49f]
0065CDEE  50                        PUSH EAX
0065CDEF  89 03                     MOV dword ptr [EBX],EAX
0065CDF1  E8 1A DE 04 00            CALL 0x006aac10
0065CDF6  B9 27 01 00 00            MOV ECX,0x127
0065CDFB  8B F8                     MOV EDI,EAX
0065CDFD  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
0065CE00  F3 A5                     MOVSD.REP ES:EDI,ESI
0065CE02  66 A5                     MOVSW ES:EDI,ESI
0065CE04  A4                        MOVSB ES:EDI,ESI
0065CE05  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
0065CE08  8B 03                     MOV EAX,dword ptr [EBX]
0065CE0A  33 FF                     XOR EDI,EDI
0065CE0C  89 41 01                  MOV dword ptr [ECX + 0x1],EAX
0065CE0F  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
0065CE12  C6 42 05 00               MOV byte ptr [EDX + 0x5],0x0
0065CE16  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
0065CE19  8B 82 62 04 00 00         MOV EAX,dword ptr [EDX + 0x462]
0065CE1F  8D 9A 9E 04 00 00         LEA EBX,[EDX + 0x49e]
0065CE25  8B 48 0C                  MOV ECX,dword ptr [EAX + 0xc]
0065CE28  85 C9                     TEST ECX,ECX
0065CE2A  7E 4B                     JLE 0x0065ce77
0065CE2C  3B F9                     CMP EDI,ECX
LAB_0065ce2e:
0065CE2E  73 0D                     JNC 0x0065ce3d
0065CE30  8B 70 08                  MOV ESI,dword ptr [EAX + 0x8]
0065CE33  8B 48 1C                  MOV ECX,dword ptr [EAX + 0x1c]
0065CE36  0F AF F7                  IMUL ESI,EDI
0065CE39  03 F1                     ADD ESI,ECX
0065CE3B  EB 02                     JMP 0x0065ce3f
LAB_0065ce3d:
0065CE3D  33 F6                     XOR ESI,ESI
LAB_0065ce3f:
0065CE3F  8B 46 0F                  MOV EAX,dword ptr [ESI + 0xf]
0065CE42  85 C0                     TEST EAX,EAX
0065CE44  74 23                     JZ 0x0065ce69
0065CE46  8D 4D F8                  LEA ECX,[EBP + -0x8]
0065CE49  51                        PUSH ECX
0065CE4A  53                        PUSH EBX
0065CE4B  50                        PUSH EAX
0065CE4C  E8 6F 31 05 00            CALL 0x006affc0
0065CE51  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
0065CE54  8B D3                     MOV EDX,EBX
0065CE56  2B D0                     SUB EDX,EAX
0065CE58  8B 46 17                  MOV EAX,dword ptr [ESI + 0x17]
0065CE5B  81 EA 9E 04 00 00         SUB EDX,0x49e
0065CE61  03 D8                     ADD EBX,EAX
0065CE63  89 56 13                  MOV dword ptr [ESI + 0x13],EDX
0065CE66  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
LAB_0065ce69:
0065CE69  8B 82 62 04 00 00         MOV EAX,dword ptr [EDX + 0x462]
0065CE6F  47                        INC EDI
0065CE70  8B 48 0C                  MOV ECX,dword ptr [EAX + 0xc]
0065CE73  3B F9                     CMP EDI,ECX
0065CE75  7C B7                     JL 0x0065ce2e
LAB_0065ce77:
0065CE77  8B 8A 62 04 00 00         MOV ECX,dword ptr [EDX + 0x462]
0065CE7D  8D 45 F8                  LEA EAX,[EBP + -0x8]
0065CE80  50                        PUSH EAX
0065CE81  53                        PUSH EBX
0065CE82  51                        PUSH ECX
0065CE83  E8 38 31 05 00            CALL 0x006affc0
0065CE88  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
0065CE8B  8B D3                     MOV EDX,EBX
0065CE8D  2B D0                     SUB EDX,EAX
0065CE8F  8D 4D F8                  LEA ECX,[EBP + -0x8]
0065CE92  81 EA 9E 04 00 00         SUB EDX,0x49e
0065CE98  51                        PUSH ECX
0065CE99  89 90 66 04 00 00         MOV dword ptr [EAX + 0x466],EDX
0065CE9F  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
0065CEA2  8B B0 6A 04 00 00         MOV ESI,dword ptr [EAX + 0x46a]
0065CEA8  8B 90 56 04 00 00         MOV EDX,dword ptr [EAX + 0x456]
0065CEAE  03 DE                     ADD EBX,ESI
0065CEB0  53                        PUSH EBX
0065CEB1  52                        PUSH EDX
0065CEB2  E8 89 B9 06 00            CALL 0x006c8840
0065CEB7  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
0065CEBA  8B CB                     MOV ECX,EBX
0065CEBC  2B C8                     SUB ECX,EAX
0065CEBE  81 E9 9E 04 00 00         SUB ECX,0x49e
0065CEC4  89 88 5A 04 00 00         MOV dword ptr [EAX + 0x45a],ECX
0065CECA  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
0065CECD  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
0065CED0  8B B2 5E 04 00 00         MOV ESI,dword ptr [EDX + 0x45e]
0065CED6  05 6E 04 00 00            ADD EAX,0x46e
0065CEDB  03 DE                     ADD EBX,ESI
0065CEDD  85 C0                     TEST EAX,EAX
0065CEDF  74 07                     JZ 0x0065cee8
0065CEE1  8B 00                     MOV EAX,dword ptr [EAX]
0065CEE3  8D 0C 80                  LEA ECX,[EAX + EAX*0x4]
0065CEE6  EB 02                     JMP 0x0065ceea
LAB_0065cee8:
0065CEE8  33 C9                     XOR ECX,ECX
LAB_0065ceea:
0065CEEA  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
0065CEED  8B C1                     MOV EAX,ECX
0065CEEF  8B FB                     MOV EDI,EBX
0065CEF1  8B B2 76 04 00 00         MOV ESI,dword ptr [EDX + 0x476]
0065CEF7  C1 E9 02                  SHR ECX,0x2
0065CEFA  F3 A5                     MOVSD.REP ES:EDI,ESI
0065CEFC  8B C8                     MOV ECX,EAX
0065CEFE  83 E1 03                  AND ECX,0x3
0065CF01  F3 A4                     MOVSB.REP ES:EDI,ESI
0065CF03  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
0065CF06  2B D8                     SUB EBX,EAX
0065CF08  81 EB 9E 04 00 00         SUB EBX,0x49e
0065CF0E  89 98 7A 04 00 00         MOV dword ptr [EAX + 0x47a],EBX
0065CF14  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
0065CF17  C7 81 76 04 00 00 00 00 00 00  MOV dword ptr [ECX + 0x476],0x0
0065CF21  8B 55 B4                  MOV EDX,dword ptr [EBP + -0x4c]
0065CF24  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
0065CF27  89 15 F8 8D 85 00         MOV dword ptr [0x00858df8],EDX
0065CF2D  5F                        POP EDI
0065CF2E  5E                        POP ESI
0065CF2F  5B                        POP EBX
0065CF30  8B E5                     MOV ESP,EBP
0065CF32  5D                        POP EBP
0065CF33  C3                        RET
LAB_0065cf34:
0065CF34  8B 45 B4                  MOV EAX,dword ptr [EBP + -0x4c]
0065CF37  A3 F8 8D 85 00            MOV [0x00858df8],EAX
0065CF3C  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
0065CF3F  3B C7                     CMP EAX,EDI
0065CF41  74 09                     JZ 0x0065cf4c
0065CF43  8D 4D FC                  LEA ECX,[EBP + -0x4]
0065CF46  51                        PUSH ECX
0065CF47  E8 14 E1 04 00            CALL 0x006ab060
LAB_0065cf4c:
0065CF4C  68 70 2B 7D 00            PUSH 0x7d2b70
0065CF51  68 CC 4C 7A 00            PUSH 0x7a4ccc
0065CF56  56                        PUSH ESI
0065CF57  57                        PUSH EDI
0065CF58  68 89 00 00 00            PUSH 0x89
0065CF5D  68 4C 2B 7D 00            PUSH 0x7d2b4c
0065CF62  E8 69 05 05 00            CALL 0x006ad4d0
0065CF67  83 C4 18                  ADD ESP,0x18
0065CF6A  85 C0                     TEST EAX,EAX
0065CF6C  74 01                     JZ 0x0065cf6f
0065CF6E  CC                        INT3
LAB_0065cf6f:
0065CF6F  68 8A 00 00 00            PUSH 0x8a
0065CF74  68 4C 2B 7D 00            PUSH 0x7d2b4c
0065CF79  57                        PUSH EDI
0065CF7A  56                        PUSH ESI
0065CF7B  E8 C0 8E 04 00            CALL 0x006a5e40
0065CF80  5F                        POP EDI
0065CF81  5E                        POP ESI
0065CF82  33 C0                     XOR EAX,EAX
0065CF84  5B                        POP EBX
0065CF85  8B E5                     MOV ESP,EBP
0065CF87  5D                        POP EBP
0065CF88  C3                        RET
