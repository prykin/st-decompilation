FUN_00726d80:
00726D80  55                        PUSH EBP
00726D81  8B EC                     MOV EBP,ESP
00726D83  83 EC 34                  SUB ESP,0x34
00726D86  A1 D0 70 85 00            MOV EAX,[0x008570d0]
00726D8B  8B 15 C8 70 85 00         MOV EDX,dword ptr [0x008570c8]
00726D91  8B 0D 50 70 85 00         MOV ECX,dword ptr [0x00857050]
00726D97  53                        PUSH EBX
00726D98  56                        PUSH ESI
00726D99  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
00726D9C  A1 54 70 85 00            MOV EAX,[0x00857054]
00726DA1  57                        PUSH EDI
00726DA2  8B 3D CC 70 85 00         MOV EDI,dword ptr [0x008570cc]
00726DA8  89 45 F4                  MOV dword ptr [EBP + -0xc],EAX
00726DAB  C1 FF 10                  SAR EDI,0x10
00726DAE  B8 AC 70 85 00            MOV EAX,0x8570ac
00726DB3  89 55 EC                  MOV dword ptr [EBP + -0x14],EDX
00726DB6  89 7D E8                  MOV dword ptr [EBP + -0x18],EDI
00726DB9  89 4D F8                  MOV dword ptr [EBP + -0x8],ECX
00726DBC  C7 45 D4 44 70 85 00      MOV dword ptr [EBP + -0x2c],0x857044
00726DC3  89 45 D8                  MOV dword ptr [EBP + -0x28],EAX
00726DC6  EB 03                     JMP 0x00726dcb
LAB_00726dc8:
00726DC8  8B 55 EC                  MOV EDX,dword ptr [EBP + -0x14]
LAB_00726dcb:
00726DCB  8B 48 04                  MOV ECX,dword ptr [EAX + 0x4]
00726DCE  8B 30                     MOV ESI,dword ptr [EAX]
00726DD0  89 4D DC                  MOV dword ptr [EBP + -0x24],ECX
00726DD3  8B 4D D4                  MOV ECX,dword ptr [EBP + -0x2c]
00726DD6  8B 58 FC                  MOV EBX,dword ptr [EAX + -0x4]
00726DD9  8B 49 FC                  MOV ECX,dword ptr [ECX + -0x4]
00726DDC  89 5D CC                  MOV dword ptr [EBP + -0x34],EBX
00726DDF  89 4D E4                  MOV dword ptr [EBP + -0x1c],ECX
00726DE2  8B 4D D4                  MOV ECX,dword ptr [EBP + -0x2c]
00726DE5  C1 FE 10                  SAR ESI,0x10
00726DE8  8B 09                     MOV ECX,dword ptr [ECX]
00726DEA  89 75 D0                  MOV dword ptr [EBP + -0x30],ESI
00726DED  89 4D E0                  MOV dword ptr [EBP + -0x20],ECX
00726DF0  8B CE                     MOV ECX,ESI
00726DF2  2B CF                     SUB ECX,EDI
00726DF4  85 C9                     TEST ECX,ECX
00726DF6  0F 8E 03 01 00 00         JLE 0x00726eff
00726DFC  8B C3                     MOV EAX,EBX
00726DFE  89 75 F0                  MOV dword ptr [EBP + -0x10],ESI
00726E01  2B C2                     SUB EAX,EDX
00726E03  99                        CDQ
00726E04  F7 F9                     IDIV ECX
00726E06  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
00726E09  A3 94 70 85 00            MOV [0x00857094],EAX
00726E0E  8B 45 DC                  MOV EAX,dword ptr [EBP + -0x24]
00726E11  2B C2                     SUB EAX,EDX
00726E13  99                        CDQ
00726E14  F7 F9                     IDIV ECX
00726E16  8B 55 F8                  MOV EDX,dword ptr [EBP + -0x8]
00726E19  A3 E4 70 85 00            MOV [0x008570e4],EAX
00726E1E  8B 45 E4                  MOV EAX,dword ptr [EBP + -0x1c]
00726E21  2B C2                     SUB EAX,EDX
00726E23  99                        CDQ
00726E24  F7 F9                     IDIV ECX
00726E26  8B 55 F4                  MOV EDX,dword ptr [EBP + -0xc]
00726E29  A3 FC 70 85 00            MOV [0x008570fc],EAX
00726E2E  8B 45 E0                  MOV EAX,dword ptr [EBP + -0x20]
00726E31  2B C2                     SUB EAX,EDX
00726E33  99                        CDQ
00726E34  F7 F9                     IDIV ECX
00726E36  8B 15 64 70 85 00         MOV EDX,dword ptr [0x00857064]
00726E3C  3B FA                     CMP EDI,EDX
00726E3E  A3 80 70 85 00            MOV [0x00857080],EAX
00726E43  7D 4F                     JGE 0x00726e94
00726E45  2B D7                     SUB EDX,EDI
00726E47  2B CA                     SUB ECX,EDX
00726E49  85 C9                     TEST ECX,ECX
00726E4B  7E 3E                     JLE 0x00726e8b
00726E4D  8B 0D 94 70 85 00         MOV ECX,dword ptr [0x00857094]
00726E53  8B 7D EC                  MOV EDI,dword ptr [EBP + -0x14]
00726E56  0F AF CA                  IMUL ECX,EDX
00726E59  0F AF C2                  IMUL EAX,EDX
00726E5C  03 F9                     ADD EDI,ECX
00726E5E  8B 0D E4 70 85 00         MOV ECX,dword ptr [0x008570e4]
00726E64  0F AF CA                  IMUL ECX,EDX
00726E67  89 7D EC                  MOV dword ptr [EBP + -0x14],EDI
00726E6A  8B 7D FC                  MOV EDI,dword ptr [EBP + -0x4]
00726E6D  03 F9                     ADD EDI,ECX
00726E6F  8B 0D FC 70 85 00         MOV ECX,dword ptr [0x008570fc]
00726E75  0F AF CA                  IMUL ECX,EDX
00726E78  89 7D FC                  MOV dword ptr [EBP + -0x4],EDI
00726E7B  8B 7D F8                  MOV EDI,dword ptr [EBP + -0x8]
00726E7E  03 F9                     ADD EDI,ECX
00726E80  8B 4D F4                  MOV ECX,dword ptr [EBP + -0xc]
00726E83  03 C8                     ADD ECX,EAX
00726E85  89 7D F8                  MOV dword ptr [EBP + -0x8],EDI
00726E88  89 4D F4                  MOV dword ptr [EBP + -0xc],ECX
LAB_00726e8b:
00726E8B  8B 3D 64 70 85 00         MOV EDI,dword ptr [0x00857064]
00726E91  89 7D E8                  MOV dword ptr [EBP + -0x18],EDI
LAB_00726e94:
00726E94  A1 EC 70 85 00            MOV EAX,[0x008570ec]
00726E99  3B F0                     CMP ESI,EAX
00726E9B  7E 03                     JLE 0x00726ea0
00726E9D  89 45 F0                  MOV dword ptr [EBP + -0x10],EAX
LAB_00726ea0:
00726EA0  3B 7D F0                  CMP EDI,dword ptr [EBP + -0x10]
00726EA3  0F 8D 76 01 00 00         JGE 0x0072701f
00726EA9  8B 7D E8                  MOV EDI,dword ptr [EBP + -0x18]
00726EAC  8B 4D F0                  MOV ECX,dword ptr [EBP + -0x10]
00726EAF  2B CF                     SUB ECX,EDI
00726EB1  2B 3D 64 70 85 00         SUB EDI,dword ptr [0x00857064]
00726EB7  C1 E7 05                  SHL EDI,0x5
00726EBA  03 7D 08                  ADD EDI,dword ptr [EBP + 0x8]
00726EBD  8B 45 EC                  MOV EAX,dword ptr [EBP + -0x14]
00726EC0  8B 5D FC                  MOV EBX,dword ptr [EBP + -0x4]
00726EC3  8B 55 F8                  MOV EDX,dword ptr [EBP + -0x8]
00726EC6  8B 75 F4                  MOV ESI,dword ptr [EBP + -0xc]
00726EC9  55                        PUSH EBP
LAB_00726eca:
00726ECA  8B E8                     MOV EBP,EAX
00726ECC  89 5F 14                  MOV dword ptr [EDI + 0x14],EBX
00726ECF  C1 FD 10                  SAR EBP,0x10
00726ED2  89 57 18                  MOV dword ptr [EDI + 0x18],EDX
00726ED5  89 6F 10                  MOV dword ptr [EDI + 0x10],EBP
00726ED8  89 77 1C                  MOV dword ptr [EDI + 0x1c],ESI
00726EDB  03 05 94 70 85 00         ADD EAX,dword ptr [0x00857094]
00726EE1  03 1D E4 70 85 00         ADD EBX,dword ptr [0x008570e4]
00726EE7  03 15 FC 70 85 00         ADD EDX,dword ptr [0x008570fc]
00726EED  03 35 80 70 85 00         ADD ESI,dword ptr [0x00857080]
00726EF3  83 C7 20                  ADD EDI,0x20
00726EF6  49                        DEC ECX
00726EF7  7F D1                     JG 0x00726eca
00726EF9  5D                        POP EBP
00726EFA  E9 1A 01 00 00            JMP 0x00727019
LAB_00726eff:
00726EFF  0F 8D 1D 01 00 00         JGE 0x00727022
00726F05  8B C2                     MOV EAX,EDX
00726F07  89 7D F0                  MOV dword ptr [EBP + -0x10],EDI
00726F0A  2B C3                     SUB EAX,EBX
00726F0C  8B 7D DC                  MOV EDI,dword ptr [EBP + -0x24]
00726F0F  99                        CDQ
00726F10  F7 D9                     NEG ECX
00726F12  F7 F9                     IDIV ECX
00726F14  8B 55 DC                  MOV EDX,dword ptr [EBP + -0x24]
00726F17  89 75 E8                  MOV dword ptr [EBP + -0x18],ESI
00726F1A  89 5D EC                  MOV dword ptr [EBP + -0x14],EBX
00726F1D  A3 94 70 85 00            MOV [0x00857094],EAX
00726F22  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
00726F25  2B C2                     SUB EAX,EDX
00726F27  89 7D FC                  MOV dword ptr [EBP + -0x4],EDI
00726F2A  99                        CDQ
00726F2B  F7 F9                     IDIV ECX
00726F2D  8B 55 E4                  MOV EDX,dword ptr [EBP + -0x1c]
00726F30  A3 E4 70 85 00            MOV [0x008570e4],EAX
00726F35  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
00726F38  2B C2                     SUB EAX,EDX
00726F3A  99                        CDQ
00726F3B  F7 F9                     IDIV ECX
00726F3D  8B 55 E0                  MOV EDX,dword ptr [EBP + -0x20]
00726F40  A3 FC 70 85 00            MOV [0x008570fc],EAX
00726F45  8B 45 F4                  MOV EAX,dword ptr [EBP + -0xc]
00726F48  2B C2                     SUB EAX,EDX
00726F4A  99                        CDQ
00726F4B  F7 F9                     IDIV ECX
00726F4D  8B 55 E4                  MOV EDX,dword ptr [EBP + -0x1c]
00726F50  89 55 F8                  MOV dword ptr [EBP + -0x8],EDX
00726F53  8B 55 E0                  MOV EDX,dword ptr [EBP + -0x20]
00726F56  89 55 F4                  MOV dword ptr [EBP + -0xc],EDX
00726F59  8B 15 64 70 85 00         MOV EDX,dword ptr [0x00857064]
00726F5F  3B F2                     CMP ESI,EDX
00726F61  A3 80 70 85 00            MOV [0x00857080],EAX
00726F66  7D 48                     JGE 0x00726fb0
00726F68  2B D6                     SUB EDX,ESI
00726F6A  2B CA                     SUB ECX,EDX
00726F6C  85 C9                     TEST ECX,ECX
00726F6E  7E 38                     JLE 0x00726fa8
00726F70  8B 0D 94 70 85 00         MOV ECX,dword ptr [0x00857094]
00726F76  0F AF C2                  IMUL EAX,EDX
00726F79  0F AF CA                  IMUL ECX,EDX
00726F7C  03 CB                     ADD ECX,EBX
00726F7E  89 4D EC                  MOV dword ptr [EBP + -0x14],ECX
00726F81  8B 0D E4 70 85 00         MOV ECX,dword ptr [0x008570e4]
00726F87  0F AF CA                  IMUL ECX,EDX
00726F8A  03 CF                     ADD ECX,EDI
00726F8C  8B 7D E4                  MOV EDI,dword ptr [EBP + -0x1c]
00726F8F  89 4D FC                  MOV dword ptr [EBP + -0x4],ECX
00726F92  8B 0D FC 70 85 00         MOV ECX,dword ptr [0x008570fc]
00726F98  0F AF CA                  IMUL ECX,EDX
00726F9B  03 CF                     ADD ECX,EDI
00726F9D  89 4D F8                  MOV dword ptr [EBP + -0x8],ECX
00726FA0  8B 4D E0                  MOV ECX,dword ptr [EBP + -0x20]
00726FA3  03 C1                     ADD EAX,ECX
00726FA5  89 45 F4                  MOV dword ptr [EBP + -0xc],EAX
LAB_00726fa8:
00726FA8  A1 64 70 85 00            MOV EAX,[0x00857064]
00726FAD  89 45 E8                  MOV dword ptr [EBP + -0x18],EAX
LAB_00726fb0:
00726FB0  A1 EC 70 85 00            MOV EAX,[0x008570ec]
00726FB5  8B 4D F0                  MOV ECX,dword ptr [EBP + -0x10]
00726FB8  3B C8                     CMP ECX,EAX
00726FBA  7E 03                     JLE 0x00726fbf
00726FBC  89 45 F0                  MOV dword ptr [EBP + -0x10],EAX
LAB_00726fbf:
00726FBF  8B 4D F0                  MOV ECX,dword ptr [EBP + -0x10]
00726FC2  8B 45 E8                  MOV EAX,dword ptr [EBP + -0x18]
00726FC5  3B C1                     CMP EAX,ECX
00726FC7  7D 56                     JGE 0x0072701f
00726FC9  8B 7D E8                  MOV EDI,dword ptr [EBP + -0x18]
00726FCC  8B 4D F0                  MOV ECX,dword ptr [EBP + -0x10]
00726FCF  2B CF                     SUB ECX,EDI
00726FD1  2B 3D 64 70 85 00         SUB EDI,dword ptr [0x00857064]
00726FD7  C1 E7 05                  SHL EDI,0x5
00726FDA  03 7D 08                  ADD EDI,dword ptr [EBP + 0x8]
00726FDD  8B 45 EC                  MOV EAX,dword ptr [EBP + -0x14]
00726FE0  8B 5D FC                  MOV EBX,dword ptr [EBP + -0x4]
00726FE3  8B 55 F8                  MOV EDX,dword ptr [EBP + -0x8]
00726FE6  8B 75 F4                  MOV ESI,dword ptr [EBP + -0xc]
00726FE9  55                        PUSH EBP
LAB_00726fea:
00726FEA  8B E8                     MOV EBP,EAX
00726FEC  89 5F 04                  MOV dword ptr [EDI + 0x4],EBX
00726FEF  C1 FD 10                  SAR EBP,0x10
00726FF2  89 57 08                  MOV dword ptr [EDI + 0x8],EDX
00726FF5  89 2F                     MOV dword ptr [EDI],EBP
00726FF7  89 77 0C                  MOV dword ptr [EDI + 0xc],ESI
00726FFA  03 05 94 70 85 00         ADD EAX,dword ptr [0x00857094]
00727000  03 1D E4 70 85 00         ADD EBX,dword ptr [0x008570e4]
00727006  03 15 FC 70 85 00         ADD EDX,dword ptr [0x008570fc]
0072700C  03 35 80 70 85 00         ADD ESI,dword ptr [0x00857080]
00727012  83 C7 20                  ADD EDI,0x20
00727015  49                        DEC ECX
00727016  7F D2                     JG 0x00726fea
00727018  5D                        POP EBP
LAB_00727019:
00727019  8B 75 D0                  MOV ESI,dword ptr [EBP + -0x30]
0072701C  8B 5D CC                  MOV EBX,dword ptr [EBP + -0x34]
LAB_0072701f:
0072701F  8B 45 D8                  MOV EAX,dword ptr [EBP + -0x28]
LAB_00727022:
00727022  8B 55 DC                  MOV EDX,dword ptr [EBP + -0x24]
00727025  8B 4D E4                  MOV ECX,dword ptr [EBP + -0x1c]
00727028  89 55 FC                  MOV dword ptr [EBP + -0x4],EDX
0072702B  8B 55 E0                  MOV EDX,dword ptr [EBP + -0x20]
0072702E  89 55 F4                  MOV dword ptr [EBP + -0xc],EDX
00727031  8B 55 D4                  MOV EDX,dword ptr [EBP + -0x2c]
00727034  83 C0 10                  ADD EAX,0x10
00727037  8B FE                     MOV EDI,ESI
00727039  83 C2 08                  ADD EDX,0x8
0072703C  3D CC 70 85 00            CMP EAX,0x8570cc
00727041  89 5D EC                  MOV dword ptr [EBP + -0x14],EBX
00727044  89 7D E8                  MOV dword ptr [EBP + -0x18],EDI
00727047  89 4D F8                  MOV dword ptr [EBP + -0x8],ECX
0072704A  89 45 D8                  MOV dword ptr [EBP + -0x28],EAX
0072704D  89 55 D4                  MOV dword ptr [EBP + -0x2c],EDX
00727050  0F 8E 72 FD FF FF         JLE 0x00726dc8
00727056  A1 EC 70 85 00            MOV EAX,[0x008570ec]
0072705B  8B 0D 64 70 85 00         MOV ECX,dword ptr [0x00857064]
00727061  2B C1                     SUB EAX,ECX
00727063  89 45 CC                  MOV dword ptr [EBP + -0x34],EAX
00727066  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
00727069  85 C0                     TEST EAX,EAX
0072706B  0F 84 0E 01 00 00         JZ 0x0072717f
00727071  8B 7D 08                  MOV EDI,dword ptr [EBP + 0x8]
00727074  8B 4D CC                  MOV ECX,dword ptr [EBP + -0x34]
LAB_00727077:
00727077  8B 5F 10                  MOV EBX,dword ptr [EDI + 0x10]
0072707A  8B 07                     MOV EAX,dword ptr [EDI]
0072707C  3B 1D 60 70 85 00         CMP EBX,dword ptr [0x00857060]
00727082  0F 8E E7 00 00 00         JLE 0x0072716f
00727088  3B 05 E8 70 85 00         CMP EAX,dword ptr [0x008570e8]
0072708E  0F 8D DB 00 00 00         JGE 0x0072716f
00727094  2B D8                     SUB EBX,EAX
00727096  0F 8E D3 00 00 00         JLE 0x0072716f
0072709C  83 FB 01                  CMP EBX,0x1
0072709F  0F 84 A0 00 00 00         JZ 0x00727145
007270A5  81 FB C8 00 00 00         CMP EBX,0xc8
007270AB  73 72                     JNC 0x0072711f
007270AD  8B 47 14                  MOV EAX,dword ptr [EDI + 0x14]
007270B0  8B 34 9D 48 0D 7F 00      MOV ESI,dword ptr [EBX*0x4 + 0x7f0d48]
007270B7  2B 47 04                  SUB EAX,dword ptr [EDI + 0x4]
007270BA  F7 EE                     IMUL ESI
007270BC  0F AC D0 10               SHRD EAX,EDX,0x10
007270C0  89 47 14                  MOV dword ptr [EDI + 0x14],EAX
007270C3  8B 47 18                  MOV EAX,dword ptr [EDI + 0x18]
007270C6  2B 47 08                  SUB EAX,dword ptr [EDI + 0x8]
007270C9  F7 EE                     IMUL ESI
007270CB  0F AC D0 10               SHRD EAX,EDX,0x10
007270CF  89 47 18                  MOV dword ptr [EDI + 0x18],EAX
007270D2  8B 47 1C                  MOV EAX,dword ptr [EDI + 0x1c]
007270D5  2B 47 0C                  SUB EAX,dword ptr [EDI + 0xc]
007270D8  F7 EE                     IMUL ESI
007270DA  0F AC D0 10               SHRD EAX,EDX,0x10
007270DE  89 47 1C                  MOV dword ptr [EDI + 0x1c],EAX
LAB_007270e1:
007270E1  8B 57 10                  MOV EDX,dword ptr [EDI + 0x10]
007270E4  8B 07                     MOV EAX,dword ptr [EDI]
007270E6  2B 15 E8 70 85 00         SUB EDX,dword ptr [0x008570e8]
007270EC  7E 02                     JLE 0x007270f0
007270EE  2B DA                     SUB EBX,EDX
LAB_007270f0:
007270F0  8B 15 60 70 85 00         MOV EDX,dword ptr [0x00857060]
007270F6  2B C2                     SUB EAX,EDX
007270F8  7D 20                     JGE 0x0072711a
007270FA  03 D8                     ADD EBX,EAX
007270FC  89 17                     MOV dword ptr [EDI],EDX
007270FE  F7 D8                     NEG EAX
00727100  8B F0                     MOV ESI,EAX
00727102  8B 47 14                  MOV EAX,dword ptr [EDI + 0x14]
00727105  F7 EE                     IMUL ESI
00727107  01 47 04                  ADD dword ptr [EDI + 0x4],EAX
0072710A  8B 47 18                  MOV EAX,dword ptr [EDI + 0x18]
0072710D  F7 EE                     IMUL ESI
0072710F  01 47 08                  ADD dword ptr [EDI + 0x8],EAX
00727112  8B 47 1C                  MOV EAX,dword ptr [EDI + 0x1c]
00727115  F7 EE                     IMUL ESI
00727117  01 47 0C                  ADD dword ptr [EDI + 0xc],EAX
LAB_0072711a:
0072711A  89 5F 10                  MOV dword ptr [EDI + 0x10],EBX
0072711D  EB 44                     JMP 0x00727163
LAB_0072711f:
0072711F  8B 47 14                  MOV EAX,dword ptr [EDI + 0x14]
00727122  2B 47 04                  SUB EAX,dword ptr [EDI + 0x4]
00727125  99                        CDQ
00727126  F7 FB                     IDIV EBX
00727128  89 47 14                  MOV dword ptr [EDI + 0x14],EAX
0072712B  8B 47 18                  MOV EAX,dword ptr [EDI + 0x18]
0072712E  2B 47 08                  SUB EAX,dword ptr [EDI + 0x8]
00727131  99                        CDQ
00727132  F7 FB                     IDIV EBX
00727134  89 47 18                  MOV dword ptr [EDI + 0x18],EAX
00727137  8B 47 1C                  MOV EAX,dword ptr [EDI + 0x1c]
0072713A  2B 47 0C                  SUB EAX,dword ptr [EDI + 0xc]
0072713D  99                        CDQ
0072713E  F7 FB                     IDIV EBX
00727140  89 47 1C                  MOV dword ptr [EDI + 0x1c],EAX
00727143  EB 9C                     JMP 0x007270e1
LAB_00727145:
00727145  33 D2                     XOR EDX,EDX
00727147  89 5F 10                  MOV dword ptr [EDI + 0x10],EBX
0072714A  89 57 14                  MOV dword ptr [EDI + 0x14],EDX
0072714D  89 57 18                  MOV dword ptr [EDI + 0x18],EDX
00727150  89 57 1C                  MOV dword ptr [EDI + 0x1c],EDX
00727153  3B 05 60 70 85 00         CMP EAX,dword ptr [0x00857060]
00727159  7C 14                     JL 0x0072716f
0072715B  3B 05 E8 70 85 00         CMP EAX,dword ptr [0x008570e8]
00727161  7D 0C                     JGE 0x0072716f
LAB_00727163:
00727163  83 C7 20                  ADD EDI,0x20
00727166  49                        DEC ECX
00727167  0F 8F 0A FF FF FF         JG 0x00727077
0072716D  EB 09                     JMP 0x00727178
LAB_0072716f:
0072716F  C7 47 10 00 00 00 00      MOV dword ptr [EDI + 0x10],0x0
00727176  EB EB                     JMP 0x00727163
LAB_00727178:
00727178  5F                        POP EDI
00727179  5E                        POP ESI
0072717A  5B                        POP EBX
0072717B  8B E5                     MOV ESP,EBP
0072717D  5D                        POP EBP
0072717E  C3                        RET
LAB_0072717f:
0072717F  8B 7D 08                  MOV EDI,dword ptr [EBP + 0x8]
00727182  8B 4D CC                  MOV ECX,dword ptr [EBP + -0x34]
LAB_00727185:
00727185  8B 5F 10                  MOV EBX,dword ptr [EDI + 0x10]
00727188  8B 07                     MOV EAX,dword ptr [EDI]
0072718A  2B D8                     SUB EBX,EAX
0072718C  89 5F 10                  MOV dword ptr [EDI + 0x10],EBX
0072718F  0F 8E 84 00 00 00         JLE 0x00727219
00727195  83 FB 01                  CMP EBX,0x1
00727198  74 74                     JZ 0x0072720e
0072719A  81 FB C8 00 00 00         CMP EBX,0xc8
007271A0  73 3C                     JNC 0x007271de
007271A2  8B 47 14                  MOV EAX,dword ptr [EDI + 0x14]
007271A5  8B 34 9D 48 0D 7F 00      MOV ESI,dword ptr [EBX*0x4 + 0x7f0d48]
007271AC  2B 47 04                  SUB EAX,dword ptr [EDI + 0x4]
007271AF  F7 EE                     IMUL ESI
007271B1  0F AC D0 10               SHRD EAX,EDX,0x10
007271B5  89 47 14                  MOV dword ptr [EDI + 0x14],EAX
007271B8  8B 47 18                  MOV EAX,dword ptr [EDI + 0x18]
007271BB  2B 47 08                  SUB EAX,dword ptr [EDI + 0x8]
007271BE  F7 EE                     IMUL ESI
007271C0  0F AC D0 10               SHRD EAX,EDX,0x10
007271C4  89 47 18                  MOV dword ptr [EDI + 0x18],EAX
007271C7  8B 47 1C                  MOV EAX,dword ptr [EDI + 0x1c]
007271CA  2B 47 0C                  SUB EAX,dword ptr [EDI + 0xc]
007271CD  F7 EE                     IMUL ESI
007271CF  0F AC D0 10               SHRD EAX,EDX,0x10
007271D3  89 47 1C                  MOV dword ptr [EDI + 0x1c],EAX
007271D6  83 C7 20                  ADD EDI,0x20
007271D9  49                        DEC ECX
007271DA  7F A9                     JG 0x00727185
007271DC  EB 45                     JMP 0x00727223
LAB_007271de:
007271DE  8B 47 14                  MOV EAX,dword ptr [EDI + 0x14]
007271E1  2B 47 04                  SUB EAX,dword ptr [EDI + 0x4]
007271E4  99                        CDQ
007271E5  F7 FB                     IDIV EBX
007271E7  89 47 14                  MOV dword ptr [EDI + 0x14],EAX
007271EA  8B 47 18                  MOV EAX,dword ptr [EDI + 0x18]
007271ED  2B 47 08                  SUB EAX,dword ptr [EDI + 0x8]
007271F0  99                        CDQ
007271F1  F7 FB                     IDIV EBX
007271F3  89 47 18                  MOV dword ptr [EDI + 0x18],EAX
007271F6  8B 47 1C                  MOV EAX,dword ptr [EDI + 0x1c]
007271F9  2B 47 0C                  SUB EAX,dword ptr [EDI + 0xc]
007271FC  99                        CDQ
007271FD  F7 FB                     IDIV EBX
007271FF  89 47 1C                  MOV dword ptr [EDI + 0x1c],EAX
00727202  83 C7 20                  ADD EDI,0x20
00727205  49                        DEC ECX
00727206  0F 8F 79 FF FF FF         JG 0x00727185
0072720C  EB 15                     JMP 0x00727223
LAB_0072720e:
0072720E  33 D2                     XOR EDX,EDX
00727210  89 57 14                  MOV dword ptr [EDI + 0x14],EDX
00727213  89 57 18                  MOV dword ptr [EDI + 0x18],EDX
00727216  89 57 1C                  MOV dword ptr [EDI + 0x1c],EDX
LAB_00727219:
00727219  83 C7 20                  ADD EDI,0x20
0072721C  49                        DEC ECX
0072721D  0F 8F 62 FF FF FF         JG 0x00727185
LAB_00727223:
00727223  5F                        POP EDI
00727224  5E                        POP ESI
00727225  5B                        POP EBX
00727226  8B E5                     MOV ESP,EBP
00727228  5D                        POP EBP
00727229  C3                        RET
