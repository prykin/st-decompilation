FUN_00588bc0:
00588BC0  55                        PUSH EBP
00588BC1  8B EC                     MOV EBP,ESP
00588BC3  81 EC 88 00 00 00         SUB ESP,0x88
00588BC9  8B 91 31 02 00 00         MOV EDX,dword ptr [ECX + 0x231]
00588BCF  53                        PUSH EBX
00588BD0  56                        PUSH ESI
00588BD1  57                        PUSH EDI
00588BD2  B8 03 00 00 00            MOV EAX,0x3
00588BD7  33 FF                     XOR EDI,EDI
00588BD9  3B D0                     CMP EDX,EAX
00588BDB  89 4D C0                  MOV dword ptr [EBP + -0x40],ECX
00588BDE  89 7D E0                  MOV dword ptr [EBP + -0x20],EDI
00588BE1  75 13                     JNZ 0x00588bf6
00588BE3  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
00588BE6  39 41 10                  CMP dword ptr [ECX + 0x10],EAX
00588BE9  74 0B                     JZ 0x00588bf6
00588BEB  33 C0                     XOR EAX,EAX
00588BED  5F                        POP EDI
00588BEE  5E                        POP ESI
00588BEF  5B                        POP EBX
00588BF0  8B E5                     MOV ESP,EBP
00588BF2  5D                        POP EBP
00588BF3  C2 04 00                  RET 0x4
LAB_00588bf6:
00588BF6  8B 15 F8 8D 85 00         MOV EDX,dword ptr [0x00858df8]
00588BFC  8D 8D 7C FF FF FF         LEA ECX,[EBP + 0xffffff7c]
00588C02  8D 85 78 FF FF FF         LEA EAX,[EBP + 0xffffff78]
00588C08  57                        PUSH EDI
00588C09  51                        PUSH ECX
00588C0A  89 95 78 FF FF FF         MOV dword ptr [EBP + 0xffffff78],EDX
00588C10  A3 F8 8D 85 00            MOV [0x00858df8],EAX
00588C15  E8 D6 4B 1A 00            CALL 0x0072d7f0
00588C1A  8B F0                     MOV ESI,EAX
00588C1C  83 C4 08                  ADD ESP,0x8
00588C1F  3B F7                     CMP ESI,EDI
00588C21  0F 85 7B 08 00 00         JNZ 0x005894a2
00588C27  8B 75 08                  MOV ESI,dword ptr [EBP + 0x8]
00588C2A  8B 5D C0                  MOV EBX,dword ptr [EBP + -0x40]
00588C2D  56                        PUSH ESI
00588C2E  8B CB                     MOV ECX,EBX
00588C30  E8 D2 C2 E7 FF            CALL 0x00404f07
00588C35  8B 46 10                  MOV EAX,dword ptr [ESI + 0x10]
00588C38  3D 0F 01 00 00            CMP EAX,0x10f
00588C3D  0F 87 10 08 00 00         JA 0x00589453
00588C43  0F 84 DA 05 00 00         JZ 0x00589223
00588C49  2B C7                     SUB EAX,EDI
00588C4B  0F 84 B5 05 00 00         JZ 0x00589206
00588C51  83 E8 02                  SUB EAX,0x2
00588C54  74 28                     JZ 0x00588c7e
00588C56  48                        DEC EAX
00588C57  0F 85 2F 08 00 00         JNZ 0x0058948c
00588C5D  8D 8B D5 01 00 00         LEA ECX,[EBX + 0x1d5]
00588C63  E8 6D 95 E7 FF            CALL 0x004021d5
00588C68  8B 85 78 FF FF FF         MOV EAX,dword ptr [EBP + 0xffffff78]
00588C6E  A3 F8 8D 85 00            MOV [0x00858df8],EAX
00588C73  33 C0                     XOR EAX,EAX
00588C75  5F                        POP EDI
00588C76  5E                        POP ESI
00588C77  5B                        POP EBX
00588C78  8B E5                     MOV ESP,EBP
00588C7A  5D                        POP EBP
00588C7B  C2 04 00                  RET 0x4
LAB_00588c7e:
00588C7E  68 E8 03 00 00            PUSH 0x3e8
00588C83  68 ED 03 00 00            PUSH 0x3ed
00588C88  68 ED 03 00 00            PUSH 0x3ed
00588C8D  57                        PUSH EDI
00588C8E  57                        PUSH EDI
00588C8F  57                        PUSH EDI
00588C90  E8 78 42 12 00            CALL 0x006acf0d
00588C95  A3 0C 17 81 00            MOV [0x0081170c],EAX
00588C9A  8B 46 14                  MOV EAX,dword ptr [ESI + 0x14]
00588C9D  C7 83 31 02 00 00 03 00 00 00  MOV dword ptr [EBX + 0x231],0x3
00588CA7  83 C4 18                  ADD ESP,0x18
00588CAA  8B 40 0C                  MOV EAX,dword ptr [EAX + 0xc]
00588CAD  83 F8 01                  CMP EAX,0x1
00588CB0  0F 86 CD 01 00 00         JBE 0x00588e83
00588CB6  83 F8 02                  CMP EAX,0x2
00588CB9  0F 85 CD 07 00 00         JNZ 0x0058948c
00588CBF  8B 46 14                  MOV EAX,dword ptr [ESI + 0x14]
00588CC2  8D BB 7C 02 00 00         LEA EDI,[EBX + 0x27c]
00588CC8  B9 0A 00 00 00            MOV ECX,0xa
00588CCD  8B F0                     MOV ESI,EAX
00588CCF  F3 A5                     MOVSD.REP ES:EDI,ESI
00588CD1  66 A5                     MOVSW ES:EDI,ESI
00588CD3  8B 48 7F                  MOV ECX,dword ptr [EAX + 0x7f]
00588CD6  89 45 BC                  MOV dword ptr [EBP + -0x44],EAX
00588CD9  89 4D F4                  MOV dword ptr [EBP + -0xc],ECX
00588CDC  8D 94 01 87 00 00 00      LEA EDX,[ECX + EAX*0x1 + 0x87]
00588CE3  8B CB                     MOV ECX,EBX
00588CE5  52                        PUSH EDX
00588CE6  E8 34 C8 E7 FF            CALL 0x0040551f
00588CEB  8B 75 BC                  MOV ESI,dword ptr [EBP + -0x44]
00588CEE  6A 44                     PUSH 0x44
00588CF0  8B 46 2A                  MOV EAX,dword ptr [ESI + 0x2a]
00588CF3  89 83 31 02 00 00         MOV dword ptr [EBX + 0x231],EAX
00588CF9  8B 4E 2E                  MOV ECX,dword ptr [ESI + 0x2e]
00588CFC  89 8B 35 02 00 00         MOV dword ptr [EBX + 0x235],ECX
00588D02  8B 56 32                  MOV EDX,dword ptr [ESI + 0x32]
00588D05  89 93 39 02 00 00         MOV dword ptr [EBX + 0x239],EDX
00588D0B  8B 46 36                  MOV EAX,dword ptr [ESI + 0x36]
00588D0E  89 83 3D 02 00 00         MOV dword ptr [EBX + 0x23d],EAX
00588D14  66 8B 4E 3A               MOV CX,word ptr [ESI + 0x3a]
00588D18  66 89 8B 41 02 00 00      MOV word ptr [EBX + 0x241],CX
00588D1F  66 8B 56 3C               MOV DX,word ptr [ESI + 0x3c]
00588D23  66 89 93 43 02 00 00      MOV word ptr [EBX + 0x243],DX
00588D2A  66 8B 46 3E               MOV AX,word ptr [ESI + 0x3e]
00588D2E  66 89 83 45 02 00 00      MOV word ptr [EBX + 0x245],AX
00588D35  8B 4E 62                  MOV ECX,dword ptr [ESI + 0x62]
00588D38  89 8B 63 02 00 00         MOV dword ptr [EBX + 0x263],ECX
00588D3E  8B 56 66                  MOV EDX,dword ptr [ESI + 0x66]
00588D41  89 93 67 02 00 00         MOV dword ptr [EBX + 0x267],EDX
00588D47  8B 46 6A                  MOV EAX,dword ptr [ESI + 0x6a]
00588D4A  89 83 6B 02 00 00         MOV dword ptr [EBX + 0x26b],EAX
00588D50  66 8B 4E 40               MOV CX,word ptr [ESI + 0x40]
00588D54  66 89 8B 47 02 00 00      MOV word ptr [EBX + 0x247],CX
00588D5B  66 8B 56 42               MOV DX,word ptr [ESI + 0x42]
00588D5F  66 89 93 49 02 00 00      MOV word ptr [EBX + 0x249],DX
00588D66  66 8B 46 44               MOV AX,word ptr [ESI + 0x44]
00588D6A  66 89 83 4B 02 00 00      MOV word ptr [EBX + 0x24b],AX
00588D71  66 8B 4E 46               MOV CX,word ptr [ESI + 0x46]
00588D75  66 89 8B 4D 02 00 00      MOV word ptr [EBX + 0x24d],CX
00588D7C  66 8B 56 48               MOV DX,word ptr [ESI + 0x48]
00588D80  66 89 93 4F 02 00 00      MOV word ptr [EBX + 0x24f],DX
00588D87  66 8B 46 4A               MOV AX,word ptr [ESI + 0x4a]
00588D8B  66 89 83 51 02 00 00      MOV word ptr [EBX + 0x251],AX
00588D92  8B 4E 4C                  MOV ECX,dword ptr [ESI + 0x4c]
00588D95  89 8B 53 02 00 00         MOV dword ptr [EBX + 0x253],ECX
00588D9B  8B 56 50                  MOV EDX,dword ptr [ESI + 0x50]
00588D9E  89 93 57 02 00 00         MOV dword ptr [EBX + 0x257],EDX
00588DA4  8B 46 54                  MOV EAX,dword ptr [ESI + 0x54]
00588DA7  89 83 5B 02 00 00         MOV dword ptr [EBX + 0x25b],EAX
00588DAD  8B 4E 58                  MOV ECX,dword ptr [ESI + 0x58]
00588DB0  89 8B 5F 02 00 00         MOV dword ptr [EBX + 0x25f],ECX
00588DB6  8B 56 5C                  MOV EDX,dword ptr [ESI + 0x5c]
00588DB9  89 93 6F 02 00 00         MOV dword ptr [EBX + 0x26f],EDX
00588DBF  66 8B 46 60               MOV AX,word ptr [ESI + 0x60]
00588DC3  66 89 83 73 02 00 00      MOV word ptr [EBX + 0x273],AX
00588DCA  66 8B 4E 6E               MOV CX,word ptr [ESI + 0x6e]
00588DCE  66 89 4B 41               MOV word ptr [EBX + 0x41],CX
00588DD2  66 8B 56 70               MOV DX,word ptr [ESI + 0x70]
00588DD6  66 89 53 43               MOV word ptr [EBX + 0x43],DX
00588DDA  66 8B 46 72               MOV AX,word ptr [ESI + 0x72]
00588DDE  66 89 43 45               MOV word ptr [EBX + 0x45],AX
00588DE2  8A 4E 78                  MOV CL,byte ptr [ESI + 0x78]
00588DE5  88 8B 75 02 00 00         MOV byte ptr [EBX + 0x275],CL
00588DEB  8A 56 79                  MOV DL,byte ptr [ESI + 0x79]
00588DEE  88 93 76 02 00 00         MOV byte ptr [EBX + 0x276],DL
00588DF4  8A 46 7A                  MOV AL,byte ptr [ESI + 0x7a]
00588DF7  88 83 77 02 00 00         MOV byte ptr [EBX + 0x277],AL
00588DFD  8B 4E 7B                  MOV ECX,dword ptr [ESI + 0x7b]
00588E00  89 8B 78 02 00 00         MOV dword ptr [EBX + 0x278],ECX
00588E06  E8 65 1E 12 00            CALL 0x006aac70
00588E0B  33 D2                     XOR EDX,EDX
00588E0D  89 45 C4                  MOV dword ptr [EBP + -0x3c],EAX
00588E10  3B C2                     CMP EAX,EDX
00588E12  0F 84 74 06 00 00         JZ 0x0058948c
00588E18  33 C9                     XOR ECX,ECX
LAB_00588e1a:
00588E1A  8B 3D 74 67 80 00         MOV EDI,dword ptr [0x00806774]
00588E20  89 3C 01                  MOV dword ptr [ECX + EAX*0x1],EDI
00588E23  8B 45 C4                  MOV EAX,dword ptr [EBP + -0x3c]
00588E26  83 C1 04                  ADD ECX,0x4
00588E29  83 F9 44                  CMP ECX,0x44
00588E2C  7C EC                     JL 0x00588e1a
00588E2E  8B 0D 64 67 80 00         MOV ECX,dword ptr [0x00806764]
00588E34  81 C6 83 00 00 00         ADD ESI,0x83
00588E3A  89 48 24                  MOV dword ptr [EAX + 0x24],ECX
00588E3D  A1 CC 73 80 00            MOV EAX,[0x008073cc]
00588E42  8D 4D C4                  LEA ECX,[EBP + -0x3c]
00588E45  56                        PUSH ESI
00588E46  51                        PUSH ECX
00588E47  8D 8B D5 01 00 00         LEA ECX,[EBX + 0x1d5]
00588E4D  89 55 C8                  MOV dword ptr [EBP + -0x38],EDX
00588E50  89 55 CC                  MOV dword ptr [EBP + -0x34],EDX
00588E53  89 45 D0                  MOV dword ptr [EBP + -0x30],EAX
00588E56  89 55 D4                  MOV dword ptr [EBP + -0x2c],EDX
00588E59  89 55 D8                  MOV dword ptr [EBP + -0x28],EDX
00588E5C  89 55 DC                  MOV dword ptr [EBP + -0x24],EDX
00588E5F  E8 41 BE E7 FF            CALL 0x00404ca5
00588E64  8D 55 C4                  LEA EDX,[EBP + -0x3c]
00588E67  52                        PUSH EDX
00588E68  E8 F3 21 12 00            CALL 0x006ab060
00588E6D  8B 85 78 FF FF FF         MOV EAX,dword ptr [EBP + 0xffffff78]
00588E73  A3 F8 8D 85 00            MOV [0x00858df8],EAX
00588E78  33 C0                     XOR EAX,EAX
00588E7A  5F                        POP EDI
00588E7B  5E                        POP ESI
00588E7C  5B                        POP EBX
00588E7D  8B E5                     MOV ESP,EBP
00588E7F  5D                        POP EBP
00588E80  C2 04 00                  RET 0x4
LAB_00588e83:
00588E83  89 BB 57 02 00 00         MOV dword ptr [EBX + 0x257],EDI
00588E89  A1 38 2A 80 00            MOV EAX,[0x00802a38]
00588E8E  8D BB 7C 02 00 00         LEA EDI,[EBX + 0x27c]
00588E94  8B 88 E4 00 00 00         MOV ECX,dword ptr [EAX + 0xe4]
00588E9A  89 8B 53 02 00 00         MOV dword ptr [EBX + 0x253],ECX
00588EA0  C7 83 6F 02 00 00 FF 00 00 00  MOV dword ptr [EBX + 0x26f],0xff
00588EAA  8B 76 14                  MOV ESI,dword ptr [ESI + 0x14]
00588EAD  B9 0A 00 00 00            MOV ECX,0xa
00588EB2  F3 A5                     MOVSD.REP ES:EDI,ESI
00588EB4  66 A5                     MOVSW ES:EDI,ESI
00588EB6  8B 53 1C                  MOV EDX,dword ptr [EBX + 0x1c]
00588EB9  B9 19 00 00 00            MOV ECX,0x19
00588EBE  69 D2 6D 4E C6 41         IMUL EDX,EDX,0x41c64e6d
00588EC4  33 FF                     XOR EDI,EDI
00588EC6  8D 82 39 30 00 00         LEA EAX,[EDX + 0x3039]
00588ECC  33 D2                     XOR EDX,EDX
00588ECE  89 43 1C                  MOV dword ptr [EBX + 0x1c],EAX
00588ED1  C1 E8 10                  SHR EAX,0x10
00588ED4  F7 F1                     DIV ECX
00588ED6  83 EA 0C                  SUB EDX,0xc
00588ED9  89 93 5B 02 00 00         MOV dword ptr [EBX + 0x25b],EDX
00588EDF  C7 83 5F 02 00 00 02 00 00 00  MOV dword ptr [EBX + 0x25f],0x2
00588EE9  89 BB 6B 02 00 00         MOV dword ptr [EBX + 0x26b],EDI
00588EEF  89 BB 67 02 00 00         MOV dword ptr [EBX + 0x267],EDI
00588EF5  89 BB 63 02 00 00         MOV dword ptr [EBX + 0x263],EDI
00588EFB  A1 40 B2 7F 00            MOV EAX,[0x007fb240]
00588F00  8B 93 90 02 00 00         MOV EDX,dword ptr [EBX + 0x290]
00588F06  8D 0C 80                  LEA ECX,[EAX + EAX*0x4]
00588F09  8D 0C 89                  LEA ECX,[ECX + ECX*0x4]
00588F0C  8D 44 C8 64               LEA EAX,[EAX + ECX*0x8 + 0x64]
00588F10  0F BF C8                  MOVSX ECX,AX
00588F13  3B D1                     CMP EDX,ECX
00588F15  0F 8D AB 02 00 00         JGE 0x005891c6
00588F1B  3B D7                     CMP EDX,EDI
00588F1D  0F 8C A3 02 00 00         JL 0x005891c6
00588F23  66 8B 15 42 B2 7F 00      MOV DX,word ptr [0x007fb242]
00588F2A  8B 83 94 02 00 00         MOV EAX,dword ptr [EBX + 0x294]
00588F30  66 69 D2 C9 00            IMUL DX,DX,0xc9
00588F35  83 C2 64                  ADD EDX,0x64
00588F38  0F BF CA                  MOVSX ECX,DX
00588F3B  3B C1                     CMP EAX,ECX
00588F3D  0F 8D 83 02 00 00         JGE 0x005891c6
00588F43  3B C7                     CMP EAX,EDI
00588F45  0F 8C 7B 02 00 00         JL 0x005891c6
00588F4B  A1 44 B2 7F 00            MOV EAX,[0x007fb244]
00588F50  8B 8B 98 02 00 00         MOV ECX,dword ptr [EBX + 0x298]
00588F56  8D 04 80                  LEA EAX,[EAX + EAX*0x4]
00588F59  8D 14 80                  LEA EDX,[EAX + EAX*0x4]
00588F5C  8D 04 D5 64 00 00 00      LEA EAX,[EDX*0x8 + 0x64]
00588F63  0F BF D0                  MOVSX EDX,AX
00588F66  3B CA                     CMP ECX,EDX
00588F68  0F 8D 58 02 00 00         JGE 0x005891c6
00588F6E  3B CF                     CMP ECX,EDI
00588F70  0F 8C 50 02 00 00         JL 0x005891c6
00588F76  66 8B 93 90 02 00 00      MOV DX,word ptr [EBX + 0x290]
00588F7D  66 8B C1                  MOV AX,CX
00588F80  66 8B 8B 94 02 00 00      MOV CX,word ptr [EBX + 0x294]
00588F87  50                        PUSH EAX
00588F88  51                        PUSH ECX
00588F89  52                        PUSH EDX
00588F8A  8B CB                     MOV ECX,EBX
00588F8C  E8 76 A1 E7 FF            CALL 0x00403107
00588F91  8B 8B 90 02 00 00         MOV ECX,dword ptr [EBX + 0x290]
00588F97  B8 79 19 8C 02            MOV EAX,0x28c1979
00588F9C  3B CF                     CMP ECX,EDI
00588F9E  7C 10                     JL 0x00588fb0
00588FA0  F7 E9                     IMUL ECX
00588FA2  D1 FA                     SAR EDX,0x1
00588FA4  8B C2                     MOV EAX,EDX
00588FA6  C1 E8 1F                  SHR EAX,0x1f
00588FA9  03 D0                     ADD EDX,EAX
00588FAB  0F BF C2                  MOVSX EAX,DX
00588FAE  EB 0F                     JMP 0x00588fbf
LAB_00588fb0:
00588FB0  F7 E9                     IMUL ECX
00588FB2  D1 FA                     SAR EDX,0x1
00588FB4  8B CA                     MOV ECX,EDX
00588FB6  C1 E9 1F                  SHR ECX,0x1f
00588FB9  03 D1                     ADD EDX,ECX
00588FBB  0F BF C2                  MOVSX EAX,DX
00588FBE  48                        DEC EAX
LAB_00588fbf:
00588FBF  8B 8B 94 02 00 00         MOV ECX,dword ptr [EBX + 0x294]
00588FC5  66 89 43 47               MOV word ptr [EBX + 0x47],AX
00588FC9  3B CF                     CMP ECX,EDI
00588FCB  B8 79 19 8C 02            MOV EAX,0x28c1979
00588FD0  7C 10                     JL 0x00588fe2
00588FD2  F7 E9                     IMUL ECX
00588FD4  D1 FA                     SAR EDX,0x1
00588FD6  8B C2                     MOV EAX,EDX
00588FD8  C1 E8 1F                  SHR EAX,0x1f
00588FDB  03 D0                     ADD EDX,EAX
00588FDD  0F BF C2                  MOVSX EAX,DX
00588FE0  EB 0F                     JMP 0x00588ff1
LAB_00588fe2:
00588FE2  F7 E9                     IMUL ECX
00588FE4  D1 FA                     SAR EDX,0x1
00588FE6  8B CA                     MOV ECX,EDX
00588FE8  C1 E9 1F                  SHR ECX,0x1f
00588FEB  03 D1                     ADD EDX,ECX
00588FED  0F BF C2                  MOVSX EAX,DX
00588FF0  48                        DEC EAX
LAB_00588ff1:
00588FF1  8B 8B 98 02 00 00         MOV ECX,dword ptr [EBX + 0x298]
00588FF7  66 89 43 49               MOV word ptr [EBX + 0x49],AX
00588FFB  3B CF                     CMP ECX,EDI
00588FFD  B8 1F 85 EB 51            MOV EAX,0x51eb851f
00589002  7C 11                     JL 0x00589015
00589004  F7 E9                     IMUL ECX
00589006  C1 FA 06                  SAR EDX,0x6
00589009  8B C2                     MOV EAX,EDX
0058900B  C1 E8 1F                  SHR EAX,0x1f
0058900E  03 D0                     ADD EDX,EAX
00589010  0F BF C2                  MOVSX EAX,DX
00589013  EB 10                     JMP 0x00589025
LAB_00589015:
00589015  F7 E9                     IMUL ECX
00589017  C1 FA 06                  SAR EDX,0x6
0058901A  8B CA                     MOV ECX,EDX
0058901C  C1 E9 1F                  SHR ECX,0x1f
0058901F  03 D1                     ADD EDX,ECX
00589021  0F BF C2                  MOVSX EAX,DX
00589024  48                        DEC EAX
LAB_00589025:
00589025  66 89 43 4B               MOV word ptr [EBX + 0x4b],AX
00589029  8B 15 74 67 80 00         MOV EDX,dword ptr [0x00806774]
0058902F  6A 1D                     PUSH 0x1d
00589031  8D B3 D5 01 00 00         LEA ESI,[EBX + 0x1d5]
00589037  68 34 B9 7C 00            PUSH 0x7cb934
0058903C  52                        PUSH EDX
0058903D  6A 0E                     PUSH 0xe
0058903F  8B CE                     MOV ECX,ESI
00589041  E8 3D B1 E7 FF            CALL 0x00404183
00589046  85 C0                     TEST EAX,EAX
00589048  74 17                     JZ 0x00589061
0058904A  A1 7C D7 7E 00            MOV EAX,[0x007ed77c]
0058904F  68 C3 02 00 00            PUSH 0x2c3
00589054  68 B8 B9 7C 00            PUSH 0x7cb9b8
00589059  50                        PUSH EAX
0058905A  6A FF                     PUSH -0x1
0058905C  E8 DF CD 11 00            CALL 0x006a5e40
LAB_00589061:
00589061  8B 0D 38 2A 80 00         MOV ECX,dword ptr [0x00802a38]
00589067  8B 91 E4 00 00 00         MOV EDX,dword ptr [ECX + 0xe4]
0058906D  8B CE                     MOV ECX,ESI
0058906F  52                        PUSH EDX
00589070  6A 0E                     PUSH 0xe
00589072  E8 C9 C1 E7 FF            CALL 0x00405240
00589077  8B 83 9C 02 00 00         MOV EAX,dword ptr [EBX + 0x29c]
0058907D  3B C7                     CMP EAX,EDI
0058907F  0F 84 D4 00 00 00         JZ 0x00589159
00589085  8D 4D E0                  LEA ECX,[EBP + -0x20]
00589088  51                        PUSH ECX
00589089  8B 0D 38 2A 80 00         MOV ECX,dword ptr [0x00802a38]
0058908F  50                        PUSH EAX
00589090  E8 3B D2 15 00            CALL 0x006e62d0
00589095  85 C0                     TEST EAX,EAX
00589097  0F 85 BC 00 00 00         JNZ 0x00589159
0058909D  8B 4D E0                  MOV ECX,dword ptr [EBP + -0x20]
005890A0  89 BB 31 02 00 00         MOV dword ptr [EBX + 0x231],EDI
005890A6  66 8B 51 32               MOV DX,word ptr [ECX + 0x32]
005890AA  66 89 93 73 02 00 00      MOV word ptr [EBX + 0x273],DX
005890B1  8B 41 24                  MOV EAX,dword ptr [ECX + 0x24]
005890B4  8D 55 FA                  LEA EDX,[EBP + -0x6]
005890B7  89 83 6F 02 00 00         MOV dword ptr [EBX + 0x26f],EAX
005890BD  52                        PUSH EDX
005890BE  8D 45 FC                  LEA EAX,[EBP + -0x4]
005890C1  8D 55 FE                  LEA EDX,[EBP + -0x2]
005890C4  50                        PUSH EAX
005890C5  52                        PUSH EDX
005890C6  E8 18 A1 E7 FF            CALL 0x004031e3
005890CB  66 8B 55 FA               MOV DX,word ptr [EBP + -0x6]
005890CF  66 8B 4D FC               MOV CX,word ptr [EBP + -0x4]
005890D3  66 2B 53 45               SUB DX,word ptr [EBX + 0x45]
005890D7  66 8B 45 FE               MOV AX,word ptr [EBP + -0x2]
005890DB  66 2B 4B 43               SUB CX,word ptr [EBX + 0x43]
005890DF  66 2B 43 41               SUB AX,word ptr [EBX + 0x41]
005890E3  66 89 55 FA               MOV word ptr [EBP + -0x6],DX
005890E7  0F BF D2                  MOVSX EDX,DX
005890EA  66 89 4D FC               MOV word ptr [EBP + -0x4],CX
005890EE  52                        PUSH EDX
005890EF  0F BF C9                  MOVSX ECX,CX
005890F2  0F BF D0                  MOVSX EDX,AX
005890F5  51                        PUSH ECX
005890F6  52                        PUSH EDX
005890F7  57                        PUSH EDI
005890F8  57                        PUSH EDI
005890F9  57                        PUSH EDI
005890FA  66 89 45 FE               MOV word ptr [EBP + -0x2],AX
005890FE  E8 0A 3E 12 00            CALL 0x006acf0d
00589103  8B C8                     MOV ECX,EAX
00589105  83 C4 18                  ADD ESP,0x18
00589108  3B CF                     CMP ECX,EDI
0058910A  89 BB 35 02 00 00         MOV dword ptr [EBX + 0x235],EDI
00589110  89 BB 39 02 00 00         MOV dword ptr [EBX + 0x239],EDI
00589116  89 BB 3D 02 00 00         MOV dword ptr [EBX + 0x23d],EDI
0058911C  7E 57                     JLE 0x00589175
0058911E  0F BF 45 FE               MOVSX EAX,word ptr [EBP + -0x2]
00589122  8D 04 40                  LEA EAX,[EAX + EAX*0x2]
00589125  C1 E0 12                  SHL EAX,0x12
00589128  99                        CDQ
00589129  F7 F9                     IDIV ECX
0058912B  89 83 35 02 00 00         MOV dword ptr [EBX + 0x235],EAX
00589131  0F BF 45 FC               MOVSX EAX,word ptr [EBP + -0x4]
00589135  8D 04 40                  LEA EAX,[EAX + EAX*0x2]
00589138  C1 E0 12                  SHL EAX,0x12
0058913B  99                        CDQ
0058913C  F7 F9                     IDIV ECX
0058913E  89 83 39 02 00 00         MOV dword ptr [EBX + 0x239],EAX
00589144  0F BF 45 FA               MOVSX EAX,word ptr [EBP + -0x6]
00589148  8D 04 40                  LEA EAX,[EAX + EAX*0x2]
0058914B  C1 E0 12                  SHL EAX,0x12
0058914E  99                        CDQ
0058914F  F7 F9                     IDIV ECX
00589151  89 83 3D 02 00 00         MOV dword ptr [EBX + 0x23d],EAX
00589157  EB 1C                     JMP 0x00589175
LAB_00589159:
00589159  C7 83 31 02 00 00 01 00 00 00  MOV dword ptr [EBX + 0x231],0x1
00589163  89 BB 35 02 00 00         MOV dword ptr [EBX + 0x235],EDI
00589169  89 BB 39 02 00 00         MOV dword ptr [EBX + 0x239],EDI
0058916F  89 BB 3D 02 00 00         MOV dword ptr [EBX + 0x23d],EDI
LAB_00589175:
00589175  8B 83 94 02 00 00         MOV EAX,dword ptr [EBX + 0x294]
0058917B  8B 8B 90 02 00 00         MOV ECX,dword ptr [EBX + 0x290]
00589181  68 5B 04 00 00            PUSH 0x45b
00589186  50                        PUSH EAX
00589187  51                        PUSH ECX
00589188  8B CB                     MOV ECX,EBX
0058918A  E8 8A AB E7 FF            CALL 0x00403d19
0058918F  66 8B 43 43               MOV AX,word ptr [EBX + 0x43]
00589193  66 8B 53 41               MOV DX,word ptr [EBX + 0x41]
00589197  66 8B 4B 45               MOV CX,word ptr [EBX + 0x45]
0058919B  66 89 83 4F 02 00 00      MOV word ptr [EBX + 0x24f],AX
005891A2  8B 85 78 FF FF FF         MOV EAX,dword ptr [EBP + 0xffffff78]
005891A8  66 89 93 4D 02 00 00      MOV word ptr [EBX + 0x24d],DX
005891AF  66 89 8B 51 02 00 00      MOV word ptr [EBX + 0x251],CX
005891B6  A3 F8 8D 85 00            MOV [0x00858df8],EAX
005891BB  33 C0                     XOR EAX,EAX
005891BD  5F                        POP EDI
005891BE  5E                        POP ESI
005891BF  5B                        POP EBX
005891C0  8B E5                     MOV ESP,EBP
005891C2  5D                        POP EBP
005891C3  C2 04 00                  RET 0x4
LAB_005891c6:
005891C6  68 94 B9 7C 00            PUSH 0x7cb994
005891CB  68 CC 4C 7A 00            PUSH 0x7a4ccc
005891D0  57                        PUSH EDI
005891D1  57                        PUSH EDI
005891D2  68 AE 02 00 00            PUSH 0x2ae
005891D7  68 B8 B9 7C 00            PUSH 0x7cb9b8
005891DC  E8 EF 42 12 00            CALL 0x006ad4d0
005891E1  83 C4 18                  ADD ESP,0x18
005891E4  85 C0                     TEST EAX,EAX
005891E6  74 01                     JZ 0x005891e9
005891E8  CC                        INT3
LAB_005891e9:
005891E9  8B CB                     MOV ECX,EBX
005891EB  E8 02 CD E7 FF            CALL 0x00405ef2
005891F0  8B 85 78 FF FF FF         MOV EAX,dword ptr [EBP + 0xffffff78]
005891F6  A3 F8 8D 85 00            MOV [0x00858df8],EAX
005891FB  33 C0                     XOR EAX,EAX
005891FD  5F                        POP EDI
005891FE  5E                        POP ESI
005891FF  5B                        POP EBX
00589200  8B E5                     MOV ESP,EBP
00589202  5D                        POP EBP
00589203  C2 04 00                  RET 0x4
LAB_00589206:
00589206  8B CB                     MOV ECX,EBX
00589208  E8 25 88 E7 FF            CALL 0x00401a32
0058920D  8B 85 78 FF FF FF         MOV EAX,dword ptr [EBP + 0xffffff78]
00589213  A3 F8 8D 85 00            MOV [0x00858df8],EAX
00589218  33 C0                     XOR EAX,EAX
0058921A  5F                        POP EDI
0058921B  5E                        POP ESI
0058921C  5B                        POP EBX
0058921D  8B E5                     MOV ESP,EBP
0058921F  5D                        POP EBP
00589220  C2 04 00                  RET 0x4
LAB_00589223:
00589223  8D 55 F4                  LEA EDX,[EBP + -0xc]
00589226  8D 8B D5 01 00 00         LEA ECX,[EBX + 0x1d5]
0058922C  52                        PUSH EDX
0058922D  E8 A2 86 E7 FF            CALL 0x004018d4
00589232  89 45 E4                  MOV dword ptr [EBP + -0x1c],EAX
00589235  8D 45 EC                  LEA EAX,[EBP + -0x14]
00589238  50                        PUSH EAX
00589239  8B CB                     MOV ECX,EBX
0058923B  E8 5A 7F E7 FF            CALL 0x0040119a
00589240  8B 4D F4                  MOV ECX,dword ptr [EBP + -0xc]
00589243  8B 55 EC                  MOV EDX,dword ptr [EBP + -0x14]
00589246  89 45 E8                  MOV dword ptr [EBP + -0x18],EAX
00589249  8D 84 0A 87 00 00 00      LEA EAX,[EDX + ECX*0x1 + 0x87]
00589250  50                        PUSH EAX
00589251  E8 1A 1A 12 00            CALL 0x006aac70
00589256  8B 4D E4                  MOV ECX,dword ptr [EBP + -0x1c]
00589259  89 45 F0                  MOV dword ptr [EBP + -0x10],EAX
0058925C  3B CF                     CMP ECX,EDI
0058925E  0F 84 28 02 00 00         JZ 0x0058948c
00589264  39 7D E8                  CMP dword ptr [EBP + -0x18],EDI
00589267  0F 84 1F 02 00 00         JZ 0x0058948c
0058926D  3B C7                     CMP EAX,EDI
0058926F  0F 84 17 02 00 00         JZ 0x0058948c
00589275  8D B3 7C 02 00 00         LEA ESI,[EBX + 0x27c]
0058927B  B9 0A 00 00 00            MOV ECX,0xa
00589280  8B F8                     MOV EDI,EAX
00589282  F3 A5                     MOVSD.REP ES:EDI,ESI
00589284  66 A5                     MOVSW ES:EDI,ESI
00589286  C7 40 0C 02 00 00 00      MOV dword ptr [EAX + 0xc],0x2
0058928D  8B 8B 31 02 00 00         MOV ECX,dword ptr [EBX + 0x231]
00589293  89 48 2A                  MOV dword ptr [EAX + 0x2a],ECX
00589296  8B 93 35 02 00 00         MOV EDX,dword ptr [EBX + 0x235]
0058929C  89 50 2E                  MOV dword ptr [EAX + 0x2e],EDX
0058929F  8B 8B 39 02 00 00         MOV ECX,dword ptr [EBX + 0x239]
005892A5  89 48 32                  MOV dword ptr [EAX + 0x32],ECX
005892A8  8B 93 3D 02 00 00         MOV EDX,dword ptr [EBX + 0x23d]
005892AE  89 50 36                  MOV dword ptr [EAX + 0x36],EDX
005892B1  66 8B 8B 41 02 00 00      MOV CX,word ptr [EBX + 0x241]
005892B8  66 89 48 3A               MOV word ptr [EAX + 0x3a],CX
005892BC  66 8B 93 43 02 00 00      MOV DX,word ptr [EBX + 0x243]
005892C3  66 89 50 3C               MOV word ptr [EAX + 0x3c],DX
005892C7  66 8B 8B 45 02 00 00      MOV CX,word ptr [EBX + 0x245]
005892CE  66 89 48 3E               MOV word ptr [EAX + 0x3e],CX
005892D2  8B 93 63 02 00 00         MOV EDX,dword ptr [EBX + 0x263]
005892D8  89 50 62                  MOV dword ptr [EAX + 0x62],EDX
005892DB  8B 8B 67 02 00 00         MOV ECX,dword ptr [EBX + 0x267]
005892E1  89 48 66                  MOV dword ptr [EAX + 0x66],ECX
005892E4  8B 93 6B 02 00 00         MOV EDX,dword ptr [EBX + 0x26b]
005892EA  89 50 6A                  MOV dword ptr [EAX + 0x6a],EDX
005892ED  66 8B 8B 47 02 00 00      MOV CX,word ptr [EBX + 0x247]
005892F4  66 89 48 40               MOV word ptr [EAX + 0x40],CX
005892F8  66 8B 93 49 02 00 00      MOV DX,word ptr [EBX + 0x249]
005892FF  66 89 50 42               MOV word ptr [EAX + 0x42],DX
00589303  66 8B 8B 4B 02 00 00      MOV CX,word ptr [EBX + 0x24b]
0058930A  66 89 48 44               MOV word ptr [EAX + 0x44],CX
0058930E  66 8B 93 4D 02 00 00      MOV DX,word ptr [EBX + 0x24d]
00589315  66 89 50 46               MOV word ptr [EAX + 0x46],DX
00589319  66 8B 8B 4F 02 00 00      MOV CX,word ptr [EBX + 0x24f]
00589320  66 89 48 48               MOV word ptr [EAX + 0x48],CX
00589324  66 8B 93 51 02 00 00      MOV DX,word ptr [EBX + 0x251]
0058932B  66 89 50 4A               MOV word ptr [EAX + 0x4a],DX
0058932F  8B 8B 53 02 00 00         MOV ECX,dword ptr [EBX + 0x253]
00589335  89 48 4C                  MOV dword ptr [EAX + 0x4c],ECX
00589338  8B 93 57 02 00 00         MOV EDX,dword ptr [EBX + 0x257]
0058933E  89 50 50                  MOV dword ptr [EAX + 0x50],EDX
00589341  8B 8B 5B 02 00 00         MOV ECX,dword ptr [EBX + 0x25b]
00589347  89 48 54                  MOV dword ptr [EAX + 0x54],ECX
0058934A  8B 93 5F 02 00 00         MOV EDX,dword ptr [EBX + 0x25f]
00589350  89 50 58                  MOV dword ptr [EAX + 0x58],EDX
00589353  8B 8B 6F 02 00 00         MOV ECX,dword ptr [EBX + 0x26f]
00589359  89 48 5C                  MOV dword ptr [EAX + 0x5c],ECX
0058935C  66 8B 93 73 02 00 00      MOV DX,word ptr [EBX + 0x273]
00589363  66 89 50 60               MOV word ptr [EAX + 0x60],DX
00589367  C7 40 74 00 00 00 00      MOV dword ptr [EAX + 0x74],0x0
0058936E  66 8B 4B 41               MOV CX,word ptr [EBX + 0x41]
00589372  66 89 48 6E               MOV word ptr [EAX + 0x6e],CX
00589376  66 8B 53 43               MOV DX,word ptr [EBX + 0x43]
0058937A  66 89 50 70               MOV word ptr [EAX + 0x70],DX
0058937E  66 8B 4B 45               MOV CX,word ptr [EBX + 0x45]
00589382  66 89 48 72               MOV word ptr [EAX + 0x72],CX
00589386  8A 93 75 02 00 00         MOV DL,byte ptr [EBX + 0x275]
0058938C  88 50 78                  MOV byte ptr [EAX + 0x78],DL
0058938F  8A 8B 76 02 00 00         MOV CL,byte ptr [EBX + 0x276]
00589395  88 48 79                  MOV byte ptr [EAX + 0x79],CL
00589398  8A 93 77 02 00 00         MOV DL,byte ptr [EBX + 0x277]
0058939E  88 50 7A                  MOV byte ptr [EAX + 0x7a],DL
005893A1  8B 8B 78 02 00 00         MOV ECX,dword ptr [EBX + 0x278]
005893A7  89 48 7B                  MOV dword ptr [EAX + 0x7b],ECX
005893AA  8B 45 F0                  MOV EAX,dword ptr [EBP + -0x10]
005893AD  8B 55 F4                  MOV EDX,dword ptr [EBP + -0xc]
005893B0  89 50 7F                  MOV dword ptr [EAX + 0x7f],EDX
005893B3  8B 4D F4                  MOV ECX,dword ptr [EBP + -0xc]
005893B6  8B 55 F0                  MOV EDX,dword ptr [EBP + -0x10]
005893B9  8B 75 E4                  MOV ESI,dword ptr [EBP + -0x1c]
005893BC  8B C1                     MOV EAX,ECX
005893BE  8D BA 83 00 00 00         LEA EDI,[EDX + 0x83]
005893C4  C1 E9 02                  SHR ECX,0x2
005893C7  F3 A5                     MOVSD.REP ES:EDI,ESI
005893C9  8B C8                     MOV ECX,EAX
005893CB  83 E1 03                  AND ECX,0x3
005893CE  F3 A4                     MOVSB.REP ES:EDI,ESI
005893D0  8B 4D EC                  MOV ECX,dword ptr [EBP + -0x14]
005893D3  8B 55 F0                  MOV EDX,dword ptr [EBP + -0x10]
005893D6  8B 45 F4                  MOV EAX,dword ptr [EBP + -0xc]
005893D9  89 8C 02 83 00 00 00      MOV dword ptr [EDX + EAX*0x1 + 0x83],ECX
005893E0  8B 55 F4                  MOV EDX,dword ptr [EBP + -0xc]
005893E3  8B 45 F0                  MOV EAX,dword ptr [EBP + -0x10]
005893E6  8B 4D EC                  MOV ECX,dword ptr [EBP + -0x14]
005893E9  8B 75 E8                  MOV ESI,dword ptr [EBP + -0x18]
005893EC  8D BC 10 87 00 00 00      LEA EDI,[EAX + EDX*0x1 + 0x87]
005893F3  8B D1                     MOV EDX,ECX
005893F5  C1 E9 02                  SHR ECX,0x2
005893F8  F3 A5                     MOVSD.REP ES:EDI,ESI
005893FA  8B CA                     MOV ECX,EDX
005893FC  83 E1 03                  AND ECX,0x3
005893FF  F3 A4                     MOVSB.REP ES:EDI,ESI
00589401  8B 45 F4                  MOV EAX,dword ptr [EBP + -0xc]
00589404  8B 4D EC                  MOV ECX,dword ptr [EBP + -0x14]
00589407  8D 94 01 87 00 00 00      LEA EDX,[ECX + EAX*0x1 + 0x87]
0058940E  8B 45 F0                  MOV EAX,dword ptr [EBP + -0x10]
00589411  8B 4B 18                  MOV ECX,dword ptr [EBX + 0x18]
00589414  52                        PUSH EDX
00589415  50                        PUSH EAX
00589416  51                        PUSH ECX
00589417  8B 0D 38 2A 80 00         MOV ECX,dword ptr [0x00802a38]
0058941D  E8 D7 91 E7 FF            CALL 0x004025f9
00589422  8D 55 E4                  LEA EDX,[EBP + -0x1c]
00589425  52                        PUSH EDX
00589426  E8 35 1C 12 00            CALL 0x006ab060
0058942B  8D 45 E8                  LEA EAX,[EBP + -0x18]
0058942E  50                        PUSH EAX
0058942F  E8 2C 1C 12 00            CALL 0x006ab060
00589434  8D 4D F0                  LEA ECX,[EBP + -0x10]
00589437  51                        PUSH ECX
00589438  E8 23 1C 12 00            CALL 0x006ab060
0058943D  8B 85 78 FF FF FF         MOV EAX,dword ptr [EBP + 0xffffff78]
00589443  A3 F8 8D 85 00            MOV [0x00858df8],EAX
00589448  33 C0                     XOR EAX,EAX
0058944A  5F                        POP EDI
0058944B  5E                        POP ESI
0058944C  5B                        POP EBX
0058944D  8B E5                     MOV ESP,EBP
0058944F  5D                        POP EBP
00589450  C2 04 00                  RET 0x4
LAB_00589453:
00589453  2D 12 01 00 00            SUB EAX,0x112
00589458  74 27                     JZ 0x00589481
0058945A  48                        DEC EAX
0058945B  75 2F                     JNZ 0x0058948c
0058945D  8B 93 D5 01 00 00         MOV EDX,dword ptr [EBX + 0x1d5]
00589463  8D 8B D5 01 00 00         LEA ECX,[EBX + 0x1d5]
00589469  FF 12                     CALL dword ptr [EDX]
0058946B  8B 85 78 FF FF FF         MOV EAX,dword ptr [EBP + 0xffffff78]
00589471  A3 F8 8D 85 00            MOV [0x00858df8],EAX
00589476  33 C0                     XOR EAX,EAX
00589478  5F                        POP EDI
00589479  5E                        POP ESI
0058947A  5B                        POP EBX
0058947B  8B E5                     MOV ESP,EBP
0058947D  5D                        POP EBP
0058947E  C2 04 00                  RET 0x4
LAB_00589481:
00589481  8D 8B D5 01 00 00         LEA ECX,[EBX + 0x1d5]
00589487  E8 04 96 E7 FF            CALL 0x00402a90
LAB_0058948c:
0058948C  8B 85 78 FF FF FF         MOV EAX,dword ptr [EBP + 0xffffff78]
00589492  A3 F8 8D 85 00            MOV [0x00858df8],EAX
00589497  33 C0                     XOR EAX,EAX
00589499  5F                        POP EDI
0058949A  5E                        POP ESI
0058949B  5B                        POP EBX
0058949C  8B E5                     MOV ESP,EBP
0058949E  5D                        POP EBP
0058949F  C2 04 00                  RET 0x4
LAB_005894a2:
005894A2  8B 8D 78 FF FF FF         MOV ECX,dword ptr [EBP + 0xffffff78]
005894A8  68 78 B9 7C 00            PUSH 0x7cb978
005894AD  68 CC 4C 7A 00            PUSH 0x7a4ccc
005894B2  56                        PUSH ESI
005894B3  57                        PUSH EDI
005894B4  68 89 03 00 00            PUSH 0x389
005894B9  68 B8 B9 7C 00            PUSH 0x7cb9b8
005894BE  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
005894C4  E8 07 40 12 00            CALL 0x006ad4d0
005894C9  83 C4 18                  ADD ESP,0x18
005894CC  85 C0                     TEST EAX,EAX
005894CE  74 01                     JZ 0x005894d1
005894D0  CC                        INT3
LAB_005894d1:
005894D1  68 8A 03 00 00            PUSH 0x38a
005894D6  68 B8 B9 7C 00            PUSH 0x7cb9b8
005894DB  57                        PUSH EDI
005894DC  56                        PUSH ESI
005894DD  E8 5E C9 11 00            CALL 0x006a5e40
005894E2  5F                        POP EDI
005894E3  5E                        POP ESI
005894E4  B8 FF FF 00 00            MOV EAX,0xffff
005894E9  5B                        POP EBX
005894EA  8B E5                     MOV ESP,EBP
005894EC  5D                        POP EBP
005894ED  C2 04 00                  RET 0x4
