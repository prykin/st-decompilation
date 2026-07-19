STJellyManC::GetMessage:
00581BF0  55                        PUSH EBP
00581BF1  8B EC                     MOV EBP,ESP
00581BF3  83 EC 50                  SUB ESP,0x50
00581BF6  A1 F8 8D 85 00            MOV EAX,[0x00858df8]
00581BFB  53                        PUSH EBX
00581BFC  56                        PUSH ESI
00581BFD  89 4D F4                  MOV dword ptr [EBP + -0xc],ECX
00581C00  57                        PUSH EDI
00581C01  8D 55 B4                  LEA EDX,[EBP + -0x4c]
00581C04  8D 4D B0                  LEA ECX,[EBP + -0x50]
00581C07  6A 00                     PUSH 0x0
00581C09  52                        PUSH EDX
00581C0A  89 45 B0                  MOV dword ptr [EBP + -0x50],EAX
00581C0D  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
00581C13  E8 D8 BB 1A 00            CALL 0x0072d7f0
00581C18  8B F0                     MOV ESI,EAX
00581C1A  83 C4 08                  ADD ESP,0x8
00581C1D  85 F6                     TEST ESI,ESI
00581C1F  0F 85 B7 04 00 00         JNZ 0x005820dc
00581C25  8B 7D 08                  MOV EDI,dword ptr [EBP + 0x8]
00581C28  8B 5D F4                  MOV EBX,dword ptr [EBP + -0xc]
00581C2B  57                        PUSH EDI
00581C2C  8B CB                     MOV ECX,EBX
00581C2E  E8 8A 22 E8 FF            CALL 0x00403ebd
00581C33  8B 47 10                  MOV EAX,dword ptr [EDI + 0x10]
00581C36  3D 0F 01 00 00            CMP EAX,0x10f
00581C3B  0F 87 07 03 00 00         JA 0x00581f48
00581C41  0F 84 8C 02 00 00         JZ 0x00581ed3
00581C47  33 C9                     XOR ECX,ECX
00581C49  2B C1                     SUB EAX,ECX
00581C4B  0F 84 67 02 00 00         JZ 0x00581eb8
00581C51  83 E8 02                  SUB EAX,0x2
00581C54  74 4D                     JZ 0x00581ca3
00581C56  48                        DEC EAX
00581C57  0F 85 6B 04 00 00         JNZ 0x005820c8
00581C5D  8B 93 07 02 00 00         MOV EDX,dword ptr [EBX + 0x207]
00581C63  8D 83 07 02 00 00         LEA EAX,[EBX + 0x207]
00581C69  3B D1                     CMP EDX,ECX
00581C6B  74 08                     JZ 0x00581c75
00581C6D  50                        PUSH EAX
00581C6E  E8 ED 93 12 00            CALL 0x006ab060
00581C73  33 C9                     XOR ECX,ECX
LAB_00581c75:
00581C75  8B 83 0B 02 00 00         MOV EAX,dword ptr [EBX + 0x20b]
00581C7B  81 C3 0B 02 00 00         ADD EBX,0x20b
00581C81  3B C1                     CMP EAX,ECX
00581C83  0F 84 3F 04 00 00         JZ 0x005820c8
00581C89  53                        PUSH EBX
00581C8A  E8 D1 93 12 00            CALL 0x006ab060
00581C8F  8B 4D B0                  MOV ECX,dword ptr [EBP + -0x50]
00581C92  33 C0                     XOR EAX,EAX
00581C94  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
00581C9A  5F                        POP EDI
00581C9B  5E                        POP ESI
00581C9C  5B                        POP EBX
00581C9D  8B E5                     MOV ESP,EBP
00581C9F  5D                        POP EBP
00581CA0  C2 04 00                  RET 0x4
LAB_00581ca3:
00581CA3  8B 47 14                  MOV EAX,dword ptr [EDI + 0x14]
00581CA6  89 8B 07 02 00 00         MOV dword ptr [EBX + 0x207],ECX
00581CAC  89 8B 0B 02 00 00         MOV dword ptr [EBX + 0x20b],ECX
00581CB2  8B 40 0C                  MOV EAX,dword ptr [EAX + 0xc]
00581CB5  83 F8 01                  CMP EAX,0x1
00581CB8  0F 86 F6 00 00 00         JBE 0x00581db4
00581CBE  83 F8 02                  CMP EAX,0x2
00581CC1  0F 85 01 04 00 00         JNZ 0x005820c8
00581CC7  8B 47 14                  MOV EAX,dword ptr [EDI + 0x14]
00581CCA  8D BB D9 01 00 00         LEA EDI,[EBX + 0x1d9]
00581CD0  B9 0B 00 00 00            MOV ECX,0xb
00581CD5  8B F0                     MOV ESI,EAX
00581CD7  F3 A5                     MOVSD.REP ES:EDI,ESI
00581CD9  66 A5                     MOVSW ES:EDI,ESI
00581CDB  8B 8B FD 01 00 00         MOV ECX,dword ptr [EBX + 0x1fd]
00581CE1  8B 40 2E                  MOV EAX,dword ptr [EAX + 0x2e]
00581CE4  C1 E1 02                  SHL ECX,0x2
00581CE7  51                        PUSH ECX
00581CE8  89 83 D5 01 00 00         MOV dword ptr [EBX + 0x1d5],EAX
00581CEE  C7 83 0F 02 00 00 00 00 00 00  MOV dword ptr [EBX + 0x20f],0x0
00581CF8  E8 73 8F 12 00            CALL 0x006aac70
00581CFD  8B 93 FD 01 00 00         MOV EDX,dword ptr [EBX + 0x1fd]
00581D03  89 83 07 02 00 00         MOV dword ptr [EBX + 0x207],EAX
00581D09  C1 E2 02                  SHL EDX,0x2
00581D0C  52                        PUSH EDX
00581D0D  E8 5E 8F 12 00            CALL 0x006aac70
00581D12  8B 8B 07 02 00 00         MOV ECX,dword ptr [EBX + 0x207]
00581D18  89 83 0B 02 00 00         MOV dword ptr [EBX + 0x20b],EAX
00581D1E  85 C9                     TEST ECX,ECX
00581D20  74 04                     JZ 0x00581d26
00581D22  85 C0                     TEST EAX,EAX
00581D24  75 3C                     JNZ 0x00581d62
LAB_00581d26:
00581D26  68 C8 B3 7C 00            PUSH 0x7cb3c8
00581D2B  68 CC 4C 7A 00            PUSH 0x7a4ccc
00581D30  6A 00                     PUSH 0x0
00581D32  6A 00                     PUSH 0x0
00581D34  68 5A 01 00 00            PUSH 0x15a
00581D39  68 F0 B2 7C 00            PUSH 0x7cb2f0
00581D3E  E8 8D B7 12 00            CALL 0x006ad4d0
00581D43  83 C4 18                  ADD ESP,0x18
00581D46  85 C0                     TEST EAX,EAX
00581D48  74 01                     JZ 0x00581d4b
00581D4A  CC                        INT3
LAB_00581d4b:
00581D4B  A1 7C D7 7E 00            MOV EAX,[0x007ed77c]
00581D50  68 5B 01 00 00            PUSH 0x15b
00581D55  68 F0 B2 7C 00            PUSH 0x7cb2f0
00581D5A  50                        PUSH EAX
LAB_00581d5b:
00581D5B  6A FF                     PUSH -0x1
00581D5D  E8 DE 40 12 00            CALL 0x006a5e40
STJellyManC::GetMessage::cf_common_exit_00581D62:
00581D62  8B 8B FD 01 00 00         MOV ECX,dword ptr [EBX + 0x1fd]
00581D68  8B BB 07 02 00 00         MOV EDI,dword ptr [EBX + 0x207]
00581D6E  C1 E1 02                  SHL ECX,0x2
00581D71  8B D1                     MOV EDX,ECX
00581D73  33 C0                     XOR EAX,EAX
00581D75  C1 E9 02                  SHR ECX,0x2
00581D78  F3 AB                     STOSD.REP ES:EDI
00581D7A  8B CA                     MOV ECX,EDX
00581D7C  83 E1 03                  AND ECX,0x3
00581D7F  F3 AA                     STOSB.REP ES:EDI
00581D81  8B 8B FD 01 00 00         MOV ECX,dword ptr [EBX + 0x1fd]
00581D87  8B BB 0B 02 00 00         MOV EDI,dword ptr [EBX + 0x20b]
00581D8D  C1 E1 02                  SHL ECX,0x2
00581D90  8B D1                     MOV EDX,ECX
00581D92  33 C0                     XOR EAX,EAX
00581D94  C1 E9 02                  SHR ECX,0x2
00581D97  F3 AB                     STOSD.REP ES:EDI
00581D99  8B CA                     MOV ECX,EDX
00581D9B  83 E1 03                  AND ECX,0x3
00581D9E  F3 AA                     STOSB.REP ES:EDI
00581DA0  8B 4D B0                  MOV ECX,dword ptr [EBP + -0x50]
00581DA3  33 C0                     XOR EAX,EAX
00581DA5  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
00581DAB  5F                        POP EDI
00581DAC  5E                        POP ESI
00581DAD  5B                        POP EBX
00581DAE  8B E5                     MOV ESP,EBP
00581DB0  5D                        POP EBP
00581DB1  C2 04 00                  RET 0x4
LAB_00581db4:
00581DB4  89 8B D5 01 00 00         MOV dword ptr [EBX + 0x1d5],ECX
00581DBA  89 8B 0F 02 00 00         MOV dword ptr [EBX + 0x20f],ECX
00581DC0  8B 77 14                  MOV ESI,dword ptr [EDI + 0x14]
00581DC3  B9 0B 00 00 00            MOV ECX,0xb
00581DC8  8D BB D9 01 00 00         LEA EDI,[EBX + 0x1d9]
00581DCE  F3 A5                     MOVSD.REP ES:EDI,ESI
00581DD0  66 A5                     MOVSW ES:EDI,ESI
00581DD2  8B 83 ED 01 00 00         MOV EAX,dword ptr [EBX + 0x1ed]
00581DD8  85 C0                     TEST EAX,EAX
00581DDA  7C 28                     JL 0x00581e04
00581DDC  8B 83 F1 01 00 00         MOV EAX,dword ptr [EBX + 0x1f1]
00581DE2  85 C0                     TEST EAX,EAX
00581DE4  7C 1E                     JL 0x00581e04
00581DE6  0F BF 05 40 B2 7F 00      MOVSX EAX,word ptr [0x007fb240]
00581DED  39 83 F5 01 00 00         CMP dword ptr [EBX + 0x1f5],EAX
00581DF3  7F 0F                     JG 0x00581e04
00581DF5  0F BF 0D 42 B2 7F 00      MOVSX ECX,word ptr [0x007fb242]
00581DFC  39 8B F9 01 00 00         CMP dword ptr [EBX + 0x1f9],ECX
00581E02  7E 3D                     JLE 0x00581e41
LAB_00581e04:
00581E04  68 AC B3 7C 00            PUSH 0x7cb3ac
00581E09  68 CC 4C 7A 00            PUSH 0x7a4ccc
00581E0E  6A 00                     PUSH 0x0
00581E10  6A 00                     PUSH 0x0
00581E12  68 3D 01 00 00            PUSH 0x13d
00581E17  68 F0 B2 7C 00            PUSH 0x7cb2f0
00581E1C  E8 AF B6 12 00            CALL 0x006ad4d0
00581E21  83 C4 18                  ADD ESP,0x18
00581E24  85 C0                     TEST EAX,EAX
00581E26  74 01                     JZ 0x00581e29
00581E28  CC                        INT3
LAB_00581e29:
00581E29  8B 15 7C D7 7E 00         MOV EDX,dword ptr [0x007ed77c]
00581E2F  68 3E 01 00 00            PUSH 0x13e
00581E34  68 F0 B2 7C 00            PUSH 0x7cb2f0
00581E39  52                        PUSH EDX
00581E3A  6A FF                     PUSH -0x1
00581E3C  E8 FF 3F 12 00            CALL 0x006a5e40
LAB_00581e41:
00581E41  8B 83 FD 01 00 00         MOV EAX,dword ptr [EBX + 0x1fd]
00581E47  C1 E0 02                  SHL EAX,0x2
00581E4A  50                        PUSH EAX
00581E4B  E8 20 8E 12 00            CALL 0x006aac70
00581E50  8B 8B FD 01 00 00         MOV ECX,dword ptr [EBX + 0x1fd]
00581E56  89 83 07 02 00 00         MOV dword ptr [EBX + 0x207],EAX
00581E5C  C1 E1 02                  SHL ECX,0x2
00581E5F  51                        PUSH ECX
00581E60  E8 0B 8E 12 00            CALL 0x006aac70
00581E65  8B 8B 07 02 00 00         MOV ECX,dword ptr [EBX + 0x207]
00581E6B  89 83 0B 02 00 00         MOV dword ptr [EBX + 0x20b],EAX
00581E71  85 C9                     TEST ECX,ECX
00581E73  74 08                     JZ 0x00581e7d
00581E75  85 C0                     TEST EAX,EAX
00581E77  0F 85 E5 FE FF FF         JNZ 0x00581d62
LAB_00581e7d:
00581E7D  68 C8 B3 7C 00            PUSH 0x7cb3c8
00581E82  68 CC 4C 7A 00            PUSH 0x7a4ccc
00581E87  6A 00                     PUSH 0x0
00581E89  6A 00                     PUSH 0x0
00581E8B  68 43 01 00 00            PUSH 0x143
00581E90  68 F0 B2 7C 00            PUSH 0x7cb2f0
00581E95  E8 36 B6 12 00            CALL 0x006ad4d0
00581E9A  83 C4 18                  ADD ESP,0x18
00581E9D  85 C0                     TEST EAX,EAX
00581E9F  74 01                     JZ 0x00581ea2
00581EA1  CC                        INT3
LAB_00581ea2:
00581EA2  8B 15 7C D7 7E 00         MOV EDX,dword ptr [0x007ed77c]
00581EA8  68 44 01 00 00            PUSH 0x144
00581EAD  68 F0 B2 7C 00            PUSH 0x7cb2f0
00581EB2  52                        PUSH EDX
00581EB3  E9 A3 FE FF FF            JMP 0x00581d5b
LAB_00581eb8:
00581EB8  8B CB                     MOV ECX,EBX
00581EBA  E8 DE 35 E8 FF            CALL 0x0040549d
00581EBF  8B 4D B0                  MOV ECX,dword ptr [EBP + -0x50]
00581EC2  33 C0                     XOR EAX,EAX
00581EC4  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
00581ECA  5F                        POP EDI
00581ECB  5E                        POP ESI
00581ECC  5B                        POP EBX
00581ECD  8B E5                     MOV ESP,EBP
00581ECF  5D                        POP EBP
00581ED0  C2 04 00                  RET 0x4
LAB_00581ed3:
00581ED3  6A 3A                     PUSH 0x3a
00581ED5  E8 96 8D 12 00            CALL 0x006aac70
00581EDA  85 C0                     TEST EAX,EAX
00581EDC  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
00581EDF  0F 84 E3 01 00 00         JZ 0x005820c8
00581EE5  8D B3 D9 01 00 00         LEA ESI,[EBX + 0x1d9]
00581EEB  B9 0B 00 00 00            MOV ECX,0xb
00581EF0  8B F8                     MOV EDI,EAX
00581EF2  6A 3A                     PUSH 0x3a
00581EF4  F3 A5                     MOVSD.REP ES:EDI,ESI
00581EF6  66 A5                     MOVSW ES:EDI,ESI
00581EF8  C7 40 0C 02 00 00 00      MOV dword ptr [EAX + 0xc],0x2
00581EFF  8B 8B 0F 02 00 00         MOV ECX,dword ptr [EBX + 0x20f]
00581F05  89 48 32                  MOV dword ptr [EAX + 0x32],ECX
00581F08  8B 93 D5 01 00 00         MOV EDX,dword ptr [EBX + 0x1d5]
00581F0E  89 50 2E                  MOV dword ptr [EAX + 0x2e],EDX
00581F11  C7 40 36 00 00 00 00      MOV dword ptr [EAX + 0x36],0x0
00581F18  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
00581F1B  8B 4B 18                  MOV ECX,dword ptr [EBX + 0x18]
00581F1E  50                        PUSH EAX
00581F1F  51                        PUSH ECX
00581F20  8B 0D 38 2A 80 00         MOV ECX,dword ptr [0x00802a38]
00581F26  E8 CE 06 E8 FF            CALL 0x004025f9
00581F2B  8D 55 FC                  LEA EDX,[EBP + -0x4]
00581F2E  52                        PUSH EDX
00581F2F  E8 2C 91 12 00            CALL 0x006ab060
00581F34  8B 4D B0                  MOV ECX,dword ptr [EBP + -0x50]
00581F37  33 C0                     XOR EAX,EAX
00581F39  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
00581F3F  5F                        POP EDI
00581F40  5E                        POP ESI
00581F41  5B                        POP EBX
00581F42  8B E5                     MOV ESP,EBP
00581F44  5D                        POP EBP
00581F45  C2 04 00                  RET 0x4
LAB_00581f48:
00581F48  2D 24 01 00 00            SUB EAX,0x124
00581F4D  0F 84 DF 00 00 00         JZ 0x00582032
00581F53  48                        DEC EAX
00581F54  74 0E                     JZ 0x00581f64
00581F56  83 E8 03                  SUB EAX,0x3
00581F59  0F 85 69 01 00 00         JNZ 0x005820c8
00581F5F  E9 5D 01 00 00            JMP 0x005820c1
LAB_00581f64:
00581F64  8B B3 FD 01 00 00         MOV ESI,dword ptr [EBX + 0x1fd]
00581F6A  4E                        DEC ESI
00581F6B  78 16                     JS 0x00581f83
00581F6D  8B 83 07 02 00 00         MOV EAX,dword ptr [EBX + 0x207]
00581F73  8D 04 B0                  LEA EAX,[EAX + ESI*0x4]
LAB_00581f76:
00581F76  83 38 00                  CMP dword ptr [EAX],0x0
00581F79  74 08                     JZ 0x00581f83
00581F7B  4E                        DEC ESI
00581F7C  83 E8 04                  SUB EAX,0x4
00581F7F  85 F6                     TEST ESI,ESI
00581F81  7D F3                     JGE 0x00581f76
LAB_00581f83:
00581F83  85 F6                     TEST ESI,ESI
00581F85  0F 8C 3D 01 00 00         JL 0x005820c8
00581F8B  8B 57 14                  MOV EDX,dword ptr [EDI + 0x14]
00581F8E  8D 4D F8                  LEA ECX,[EBP + -0x8]
00581F91  51                        PUSH ECX
00581F92  8B 0D 38 2A 80 00         MOV ECX,dword ptr [0x00802a38]
00581F98  52                        PUSH EDX
00581F99  E8 E2 33 16 00            CALL 0x006e5380
00581F9E  85 C0                     TEST EAX,EAX
00581FA0  0F 85 22 01 00 00         JNZ 0x005820c8
00581FA6  8B 83 FD 01 00 00         MOV EAX,dword ptr [EBX + 0x1fd]
00581FAC  8B 55 F8                  MOV EDX,dword ptr [EBP + -0x8]
00581FAF  48                        DEC EAX
00581FB0  78 15                     JS 0x00581fc7
00581FB2  8B 8B 07 02 00 00         MOV ECX,dword ptr [EBX + 0x207]
00581FB8  8D 0C 81                  LEA ECX,[ECX + EAX*0x4]
LAB_00581fbb:
00581FBB  39 11                     CMP dword ptr [ECX],EDX
00581FBD  74 08                     JZ 0x00581fc7
00581FBF  48                        DEC EAX
00581FC0  83 E9 04                  SUB ECX,0x4
00581FC3  85 C0                     TEST EAX,EAX
00581FC5  7D F4                     JGE 0x00581fbb
LAB_00581fc7:
00581FC7  85 C0                     TEST EAX,EAX
00581FC9  7D 2A                     JGE 0x00581ff5
00581FCB  8B 83 07 02 00 00         MOV EAX,dword ptr [EBX + 0x207]
00581FD1  89 14 B0                  MOV dword ptr [EAX + ESI*0x4],EDX
00581FD4  8B 83 0F 02 00 00         MOV EAX,dword ptr [EBX + 0x20f]
00581FDA  8B 4D B0                  MOV ECX,dword ptr [EBP + -0x50]
00581FDD  40                        INC EAX
00581FDE  89 83 0F 02 00 00         MOV dword ptr [EBX + 0x20f],EAX
00581FE4  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
00581FEA  33 C0                     XOR EAX,EAX
00581FEC  5F                        POP EDI
00581FED  5E                        POP ESI
00581FEE  5B                        POP EBX
00581FEF  8B E5                     MOV ESP,EBP
00581FF1  5D                        POP EBP
00581FF2  C2 04 00                  RET 0x4
LAB_00581ff5:
00581FF5  68 84 B3 7C 00            PUSH 0x7cb384
00581FFA  68 CC 4C 7A 00            PUSH 0x7a4ccc
00581FFF  6A 00                     PUSH 0x0
00582001  6A 00                     PUSH 0x0
00582003  68 10 01 00 00            PUSH 0x110
00582008  68 F0 B2 7C 00            PUSH 0x7cb2f0
0058200D  E8 BE B4 12 00            CALL 0x006ad4d0
00582012  83 C4 18                  ADD ESP,0x18
00582015  85 C0                     TEST EAX,EAX
00582017  0F 84 AB 00 00 00         JZ 0x005820c8
0058201D  CC                        INT3
LAB_00582032:
00582032  8B B3 FD 01 00 00         MOV ESI,dword ptr [EBX + 0x1fd]
00582038  4E                        DEC ESI
00582039  0F 88 89 00 00 00         JS 0x005820c8
LAB_0058203f:
0058203F  8B 8B 07 02 00 00         MOV ECX,dword ptr [EBX + 0x207]
00582045  8B 04 B1                  MOV EAX,dword ptr [ECX + ESI*0x4]
00582048  85 C0                     TEST EAX,EAX
0058204A  74 0A                     JZ 0x00582056
0058204C  8B 50 08                  MOV EDX,dword ptr [EAX + 0x8]
0058204F  8B 47 14                  MOV EAX,dword ptr [EDI + 0x14]
00582052  3B D0                     CMP EDX,EAX
00582054  74 40                     JZ 0x00582096
LAB_00582056:
00582056  85 F6                     TEST ESI,ESI
00582058  7D 25                     JGE 0x0058207f
0058205A  68 64 B3 7C 00            PUSH 0x7cb364
0058205F  68 CC 4C 7A 00            PUSH 0x7a4ccc
00582064  6A 00                     PUSH 0x0
00582066  6A 00                     PUSH 0x0
00582068  68 28 01 00 00            PUSH 0x128
0058206D  68 F0 B2 7C 00            PUSH 0x7cb2f0
00582072  E8 59 B4 12 00            CALL 0x006ad4d0
00582077  83 C4 18                  ADD ESP,0x18
0058207A  85 C0                     TEST EAX,EAX
0058207C  74 01                     JZ 0x0058207f
0058207E  CC                        INT3
LAB_0058207f:
0058207F  4E                        DEC ESI
00582080  79 BD                     JNS 0x0058203f
00582082  8B 4D B0                  MOV ECX,dword ptr [EBP + -0x50]
00582085  33 C0                     XOR EAX,EAX
00582087  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
0058208D  5F                        POP EDI
0058208E  5E                        POP ESI
0058208F  5B                        POP EBX
00582090  8B E5                     MOV ESP,EBP
00582092  5D                        POP EBP
00582093  C2 04 00                  RET 0x4
LAB_00582096:
00582096  8B 83 07 02 00 00         MOV EAX,dword ptr [EBX + 0x207]
0058209C  C7 04 B0 00 00 00 00      MOV dword ptr [EAX + ESI*0x4],0x0
005820A3  8B 93 0F 02 00 00         MOV EDX,dword ptr [EBX + 0x20f]
005820A9  8A 8B D5 01 00 00         MOV CL,byte ptr [EBX + 0x1d5]
005820AF  4A                        DEC EDX
005820B0  F6 C1 01                  TEST CL,0x1
005820B3  89 93 0F 02 00 00         MOV dword ptr [EBX + 0x20f],EDX
005820B9  8B C2                     MOV EAX,EDX
005820BB  74 0B                     JZ 0x005820c8
005820BD  85 C0                     TEST EAX,EAX
005820BF  75 07                     JNZ 0x005820c8
LAB_005820c1:
005820C1  8B CB                     MOV ECX,EBX
005820C3  E8 70 2F E8 FF            CALL 0x00405038
LAB_005820c8:
005820C8  8B 4D B0                  MOV ECX,dword ptr [EBP + -0x50]
005820CB  33 C0                     XOR EAX,EAX
005820CD  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
005820D3  5F                        POP EDI
005820D4  5E                        POP ESI
005820D5  5B                        POP EBX
005820D6  8B E5                     MOV ESP,EBP
005820D8  5D                        POP EBP
005820D9  C2 04 00                  RET 0x4
LAB_005820dc:
005820DC  8B 55 B0                  MOV EDX,dword ptr [EBP + -0x50]
005820DF  68 48 B3 7C 00            PUSH 0x7cb348
005820E4  68 CC 4C 7A 00            PUSH 0x7a4ccc
005820E9  56                        PUSH ESI
005820EA  6A 00                     PUSH 0x0
005820EC  68 91 01 00 00            PUSH 0x191
005820F1  68 F0 B2 7C 00            PUSH 0x7cb2f0
005820F6  89 15 F8 8D 85 00         MOV dword ptr [0x00858df8],EDX
005820FC  E8 CF B3 12 00            CALL 0x006ad4d0
00582101  83 C4 18                  ADD ESP,0x18
00582104  85 C0                     TEST EAX,EAX
00582106  74 01                     JZ 0x00582109
00582108  CC                        INT3
LAB_00582109:
00582109  68 92 01 00 00            PUSH 0x192
0058210E  68 F0 B2 7C 00            PUSH 0x7cb2f0
00582113  6A 00                     PUSH 0x0
00582115  56                        PUSH ESI
00582116  E8 25 3D 12 00            CALL 0x006a5e40
0058211B  5F                        POP EDI
0058211C  5E                        POP ESI
0058211D  B8 FF FF 00 00            MOV EAX,0xffff
00582122  5B                        POP EBX
00582123  8B E5                     MOV ESP,EBP
00582125  5D                        POP EBP
00582126  C2 04 00                  RET 0x4
