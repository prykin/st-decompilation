AiFltClassTy::sub_00661CA0:
00661CA0  55                        PUSH EBP
00661CA1  8B EC                     MOV EBP,ESP
00661CA3  83 EC 60                  SUB ESP,0x60
00661CA6  53                        PUSH EBX
00661CA7  8B D9                     MOV EBX,ECX
00661CA9  8B 0D 74 A1 7F 00         MOV ECX,dword ptr [0x007fa174]
00661CAF  56                        PUSH ESI
00661CB0  85 C9                     TEST ECX,ECX
00661CB2  57                        PUSH EDI
00661CB3  89 5D F0                  MOV dword ptr [EBP + -0x10],EBX
00661CB6  0F 84 55 04 00 00         JZ 0x00662111
00661CBC  8B 7D 08                  MOV EDI,dword ptr [EBP + 0x8]
00661CBF  8A 53 24                  MOV DL,byte ptr [EBX + 0x24]
00661CC2  6A 01                     PUSH 0x1
00661CC4  66 8B 47 16               MOV AX,word ptr [EDI + 0x16]
00661CC8  50                        PUSH EAX
00661CC9  52                        PUSH EDX
00661CCA  E8 EB 0B DA FF            CALL 0x004028ba
00661CCF  8B F0                     MOV ESI,EAX
00661CD1  85 F6                     TEST ESI,ESI
00661CD3  89 75 F4                  MOV dword ptr [EBP + -0xc],ESI
00661CD6  0F 84 35 04 00 00         JZ 0x00662111
00661CDC  8A 43 24                  MOV AL,byte ptr [EBX + 0x24]
00661CDF  8B 0D 74 A1 7F 00         MOV ECX,dword ptr [0x007fa174]
00661CE5  50                        PUSH EAX
00661CE6  E8 DA 00 DA FF            CALL 0x00401dc5
00661CEB  8B 16                     MOV EDX,dword ptr [ESI]
00661CED  8B CE                     MOV ECX,ESI
00661CEF  89 45 E4                  MOV dword ptr [EBP + -0x1c],EAX
00661CF2  FF 52 2C                  CALL dword ptr [EDX + 0x2c]
00661CF5  66 83 7F 14 00            CMP word ptr [EDI + 0x14],0x0
00661CFA  89 45 F8                  MOV dword ptr [EBP + -0x8],EAX
00661CFD  0F 85 AB 02 00 00         JNZ 0x00661fae
00661D03  8D 45 FE                  LEA EAX,[EBP + -0x2]
00661D06  8D 4D E8                  LEA ECX,[EBP + -0x18]
00661D09  50                        PUSH EAX
00661D0A  8D 55 EC                  LEA EDX,[EBP + -0x14]
00661D0D  51                        PUSH ECX
00661D0E  52                        PUSH EDX
00661D0F  8B CE                     MOV ECX,ESI
00661D11  E8 AF FB D9 FF            CALL 0x004018c5
00661D16  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
00661D19  83 F8 32                  CMP EAX,0x32
00661D1C  7C 53                     JL 0x00661d71
00661D1E  83 F8 74                  CMP EAX,0x74
00661D21  7D 4E                     JGE 0x00661d71
00661D23  8B 83 0B 02 00 00         MOV EAX,dword ptr [EBX + 0x20b]
00661D29  33 F6                     XOR ESI,ESI
00661D2B  8B 50 0C                  MOV EDX,dword ptr [EAX + 0xc]
00661D2E  85 D2                     TEST EDX,EDX
00661D30  89 55 E0                  MOV dword ptr [EBP + -0x20],EDX
00661D33  7E 3C                     JLE 0x00661d71
00661D35  3B F2                     CMP ESI,EDX
LAB_00661d37:
00661D37  73 13                     JNC 0x00661d4c
00661D39  8B 8B 0B 02 00 00         MOV ECX,dword ptr [EBX + 0x20b]
00661D3F  8B 41 08                  MOV EAX,dword ptr [ECX + 0x8]
00661D42  8B 79 1C                  MOV EDI,dword ptr [ECX + 0x1c]
00661D45  0F AF C6                  IMUL EAX,ESI
00661D48  03 C7                     ADD EAX,EDI
00661D4A  EB 02                     JMP 0x00661d4e
LAB_00661d4c:
00661D4C  33 C0                     XOR EAX,EAX
LAB_00661d4e:
00661D4E  8B 48 28                  MOV ECX,dword ptr [EAX + 0x28]
00661D51  85 C9                     TEST ECX,ECX
00661D53  75 17                     JNZ 0x00661d6c
00661D55  33 C9                     XOR ECX,ECX
00661D57  8B D0                     MOV EDX,EAX
LAB_00661d59:
00661D59  8B 7D F8                  MOV EDI,dword ptr [EBP + -0x8]
00661D5C  39 3A                     CMP dword ptr [EDX],EDI
00661D5E  74 51                     JZ 0x00661db1
00661D60  41                        INC ECX
00661D61  83 C2 04                  ADD EDX,0x4
00661D64  83 F9 03                  CMP ECX,0x3
00661D67  7C F0                     JL 0x00661d59
00661D69  8B 55 E0                  MOV EDX,dword ptr [EBP + -0x20]
LAB_00661d6c:
00661D6C  46                        INC ESI
00661D6D  3B F2                     CMP ESI,EDX
00661D6F  7C C6                     JL 0x00661d37
LAB_00661d71:
00661D71  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
00661D74  83 F8 01                  CMP EAX,0x1
00661D77  0F 8C E2 00 00 00         JL 0x00661e5f
00661D7D  83 F8 29                  CMP EAX,0x29
00661D80  0F 8D D9 00 00 00         JGE 0x00661e5f
00661D86  8B 55 F4                  MOV EDX,dword ptr [EBP + -0xc]
00661D89  8B BA 1E 08 00 00         MOV EDI,dword ptr [EDX + 0x81e]
00661D8F  85 FF                     TEST EDI,EDI
00661D91  74 5D                     JZ 0x00661df0
00661D93  8B 93 0B 02 00 00         MOV EDX,dword ptr [EBX + 0x20b]
00661D99  33 C9                     XOR ECX,ECX
00661D9B  8B 72 0C                  MOV ESI,dword ptr [EDX + 0xc]
00661D9E  85 F6                     TEST ESI,ESI
00661DA0  7E 4E                     JLE 0x00661df0
00661DA2  3B CE                     CMP ECX,ESI
LAB_00661da4:
00661DA4  73 38                     JNC 0x00661dde
00661DA6  8B 42 08                  MOV EAX,dword ptr [EDX + 0x8]
00661DA9  0F AF C1                  IMUL EAX,ECX
00661DAC  03 42 1C                  ADD EAX,dword ptr [EDX + 0x1c]
00661DAF  EB 2F                     JMP 0x00661de0
LAB_00661db1:
00661DB1  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
00661DB4  8B 51 18                  MOV EDX,dword ptr [ECX + 0x18]
00661DB7  89 50 28                  MOV dword ptr [EAX + 0x28],EDX
00661DBA  66 8B 4D EC               MOV CX,word ptr [EBP + -0x14]
00661DBE  66 89 48 0E               MOV word ptr [EAX + 0xe],CX
00661DC2  66 8B 55 E8               MOV DX,word ptr [EBP + -0x18]
00661DC6  66 89 50 10               MOV word ptr [EAX + 0x10],DX
00661DCA  66 8B 4D FE               MOV CX,word ptr [EBP + -0x2]
00661DCE  66 89 48 12               MOV word ptr [EAX + 0x12],CX
00661DD2  C7 40 24 00 00 00 00      MOV dword ptr [EAX + 0x24],0x0
00661DD9  E9 81 00 00 00            JMP 0x00661e5f
LAB_00661dde:
00661DDE  33 C0                     XOR EAX,EAX
LAB_00661de0:
00661DE0  83 78 28 00               CMP dword ptr [EAX + 0x28],0x0
00661DE4  75 05                     JNZ 0x00661deb
00661DE6  39 78 24                  CMP dword ptr [EAX + 0x24],EDI
00661DE9  74 25                     JZ 0x00661e10
LAB_00661deb:
00661DEB  41                        INC ECX
00661DEC  3B CE                     CMP ECX,ESI
00661DEE  7C B4                     JL 0x00661da4
LAB_00661df0:
00661DF0  8B BB 0B 02 00 00         MOV EDI,dword ptr [EBX + 0x20b]
00661DF6  33 F6                     XOR ESI,ESI
00661DF8  8B 47 0C                  MOV EAX,dword ptr [EDI + 0xc]
00661DFB  85 C0                     TEST EAX,EAX
00661DFD  7E 60                     JLE 0x00661e5f
00661DFF  3B F0                     CMP ESI,EAX
LAB_00661e01:
00661E01  73 1F                     JNC 0x00661e22
00661E03  8B 47 08                  MOV EAX,dword ptr [EDI + 0x8]
00661E06  8B 4F 1C                  MOV ECX,dword ptr [EDI + 0x1c]
00661E09  0F AF C6                  IMUL EAX,ESI
00661E0C  03 C1                     ADD EAX,ECX
00661E0E  EB 14                     JMP 0x00661e24
LAB_00661e10:
00661E10  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
00661E13  8B 51 18                  MOV EDX,dword ptr [ECX + 0x18]
00661E16  C7 40 24 00 00 00 00      MOV dword ptr [EAX + 0x24],0x0
00661E1D  89 50 28                  MOV dword ptr [EAX + 0x28],EDX
00661E20  EB 3D                     JMP 0x00661e5f
LAB_00661e22:
00661E22  33 C0                     XOR EAX,EAX
LAB_00661e24:
00661E24  8B 48 28                  MOV ECX,dword ptr [EAX + 0x28]
00661E27  85 C9                     TEST ECX,ECX
00661E29  75 17                     JNZ 0x00661e42
00661E2B  33 C9                     XOR ECX,ECX
00661E2D  8B D0                     MOV EDX,EAX
LAB_00661e2f:
00661E2F  8B 5D F8                  MOV EBX,dword ptr [EBP + -0x8]
00661E32  39 1A                     CMP dword ptr [EDX],EBX
00661E34  74 16                     JZ 0x00661e4c
00661E36  41                        INC ECX
00661E37  83 C2 04                  ADD EDX,0x4
00661E3A  83 F9 03                  CMP ECX,0x3
00661E3D  7C F0                     JL 0x00661e2f
00661E3F  8B 5D F0                  MOV EBX,dword ptr [EBP + -0x10]
LAB_00661e42:
00661E42  8B 47 0C                  MOV EAX,dword ptr [EDI + 0xc]
00661E45  46                        INC ESI
00661E46  3B F0                     CMP ESI,EAX
00661E48  7C B7                     JL 0x00661e01
00661E4A  EB 13                     JMP 0x00661e5f
LAB_00661e4c:
00661E4C  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
00661E4F  8B 5D F0                  MOV EBX,dword ptr [EBP + -0x10]
00661E52  8B 51 18                  MOV EDX,dword ptr [ECX + 0x18]
00661E55  C7 40 24 00 00 00 00      MOV dword ptr [EAX + 0x24],0x0
00661E5C  89 50 28                  MOV dword ptr [EAX + 0x28],EDX
LAB_00661e5f:
00661E5F  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
00661E62  83 F8 32                  CMP EAX,0x32
00661E65  0F 8C A5 00 00 00         JL 0x00661f10
00661E6B  83 F8 74                  CMP EAX,0x74
00661E6E  0F 8D 9C 00 00 00         JGE 0x00661f10
00661E74  8B 83 84 02 00 00         MOV EAX,dword ptr [EBX + 0x284]
00661E7A  85 C0                     TEST EAX,EAX
00661E7C  0F 84 8E 00 00 00         JZ 0x00661f10
00661E82  8B 45 EC                  MOV EAX,dword ptr [EBP + -0x14]
00661E85  8B 4D E8                  MOV ECX,dword ptr [EBP + -0x18]
00661E88  83 C0 FC                  ADD EAX,-0x4
00661E8B  83 C1 FC                  ADD ECX,-0x4
00661E8E  66 89 45 D4               MOV word ptr [EBP + -0x2c],AX
00661E92  B8 09 00 00 00            MOV EAX,0x9
00661E97  66 89 45 DA               MOV word ptr [EBP + -0x26],AX
00661E9B  66 89 45 DC               MOV word ptr [EBP + -0x24],AX
00661E9F  8D 55 DC                  LEA EDX,[EBP + -0x24]
00661EA2  66 89 4D D6               MOV word ptr [EBP + -0x2a],CX
00661EA6  8D 45 DA                  LEA EAX,[EBP + -0x26]
00661EA9  52                        PUSH EDX
00661EAA  8D 4D D6                  LEA ECX,[EBP + -0x2a]
00661EAD  50                        PUSH EAX
00661EAE  8D 55 D4                  LEA EDX,[EBP + -0x2c]
00661EB1  51                        PUSH ECX
00661EB2  52                        PUSH EDX
00661EB3  66 C7 45 D8 00 00         MOV word ptr [EBP + -0x28],0x0
00661EB9  66 C7 45 DE 05 00         MOV word ptr [EBP + -0x22],0x5
00661EBF  E8 42 FA D9 FF            CALL 0x00401906
00661EC4  B9 0D 00 00 00            MOV ECX,0xd
00661EC9  33 C0                     XOR EAX,EAX
00661ECB  8D 7D A0                  LEA EDI,[EBP + -0x60]
00661ECE  83 C4 10                  ADD ESP,0x10
00661ED1  F3 AB                     STOSD.REP ES:EDI
00661ED3  8B 83 80 02 00 00         MOV EAX,dword ptr [EBX + 0x280]
00661ED9  8B 4D F4                  MOV ECX,dword ptr [EBP + -0xc]
00661EDC  C7 45 A0 6C 00 00 00      MOV dword ptr [EBP + -0x60],0x6c
00661EE3  89 45 A4                  MOV dword ptr [EBP + -0x5c],EAX
00661EE6  C6 45 A8 00               MOV byte ptr [EBP + -0x58],0x0
00661EEA  8B 11                     MOV EDX,dword ptr [ECX]
00661EEC  FF 52 2C                  CALL dword ptr [EDX + 0x2c]
00661EEF  50                        PUSH EAX
00661EF0  E8 CD 01 DA FF            CALL 0x004020c2
00661EF5  83 C4 04                  ADD ESP,0x4
00661EF8  8D 4D A0                  LEA ECX,[EBP + -0x60]
00661EFB  88 45 A9                  MOV byte ptr [EBP + -0x57],AL
00661EFE  8D 45 D4                  LEA EAX,[EBP + -0x2c]
00661F01  51                        PUSH ECX
00661F02  8B 8B 84 02 00 00         MOV ECX,dword ptr [EBX + 0x284]
00661F08  89 45 AA                  MOV dword ptr [EBP + -0x56],EAX
00661F0B  E8 D1 F1 D9 FF            CALL 0x004010e1
LAB_00661f10:
00661F10  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
00661F13  83 F8 01                  CMP EAX,0x1
00661F16  0F 8C 0A 01 00 00         JL 0x00662026
00661F1C  83 F8 29                  CMP EAX,0x29
00661F1F  0F 8D 01 01 00 00         JGE 0x00662026
00661F25  66 81 7B 7B 00 80         CMP word ptr [EBX + 0x7b],0x8000
00661F2B  0F 85 F5 00 00 00         JNZ 0x00662026
00661F31  83 BB 9B 00 00 00 78      CMP dword ptr [EBX + 0x9b],0x78
00661F38  75 20                     JNZ 0x00661f5a
00661F3A  33 F6                     XOR ESI,ESI
00661F3C  C7 83 9B 00 00 00 33 00 00 00  MOV dword ptr [EBX + 0x9b],0x33
00661F46  89 B3 9F 00 00 00         MOV dword ptr [EBX + 0x9f],ESI
00661F4C  89 B3 A3 00 00 00         MOV dword ptr [EBX + 0xa3],ESI
00661F52  89 B3 A7 00 00 00         MOV dword ptr [EBX + 0xa7],ESI
00661F58  EB 02                     JMP 0x00661f5c
LAB_00661f5a:
00661F5A  33 F6                     XOR ESI,ESI
LAB_00661f5c:
00661F5C  8B 8B 84 02 00 00         MOV ECX,dword ptr [EBX + 0x284]
00661F62  3B CE                     CMP ECX,ESI
00661F64  0F 84 BC 00 00 00         JZ 0x00662026
00661F6A  8B 55 F4                  MOV EDX,dword ptr [EBP + -0xc]
00661F6D  66 8B 82 1C 08 00 00      MOV AX,word ptr [EDX + 0x81c]
00661F74  50                        PUSH EAX
00661F75  E8 A9 3B DA FF            CALL 0x00405b23
00661F7A  8B 4D E4                  MOV ECX,dword ptr [EBP + -0x1c]
00661F7D  3B CE                     CMP ECX,ESI
00661F7F  74 12                     JZ 0x00661f93
00661F81  8B B1 5C 06 00 00         MOV ESI,dword ptr [ECX + 0x65c]
00661F87  8B 55 E4                  MOV EDX,dword ptr [EBP + -0x1c]
00661F8A  8D 4E 01                  LEA ECX,[ESI + 0x1]
00661F8D  89 8A 5C 06 00 00         MOV dword ptr [EDX + 0x65c],ECX
LAB_00661f93:
00661F93  85 C0                     TEST EAX,EAX
00661F95  74 0C                     JZ 0x00661fa3
00661F97  8B 4D F8                  MOV ECX,dword ptr [EBP + -0x8]
00661F9A  56                        PUSH ESI
00661F9B  51                        PUSH ECX
00661F9C  8B C8                     MOV ECX,EAX
00661F9E  E8 A1 38 DA FF            CALL 0x00405844
LAB_00661fa3:
00661FA3  8B 55 F4                  MOV EDX,dword ptr [EBP + -0xc]
00661FA6  89 B2 1E 08 00 00         MOV dword ptr [EDX + 0x81e],ESI
00661FAC  EB 78                     JMP 0x00662026
LAB_00661fae:
00661FAE  8B 93 0B 02 00 00         MOV EDX,dword ptr [EBX + 0x20b]
00661FB4  33 C9                     XOR ECX,ECX
00661FB6  8B 72 0C                  MOV ESI,dword ptr [EDX + 0xc]
00661FB9  85 F6                     TEST ESI,ESI
00661FBB  7E 27                     JLE 0x00661fe4
00661FBD  8B 7F 18                  MOV EDI,dword ptr [EDI + 0x18]
00661FC0  3B CE                     CMP ECX,ESI
LAB_00661fc2:
00661FC2  73 0B                     JNC 0x00661fcf
00661FC4  8B 42 08                  MOV EAX,dword ptr [EDX + 0x8]
00661FC7  0F AF C1                  IMUL EAX,ECX
00661FCA  03 42 1C                  ADD EAX,dword ptr [EDX + 0x1c]
00661FCD  EB 02                     JMP 0x00661fd1
LAB_00661fcf:
00661FCF  33 C0                     XOR EAX,EAX
LAB_00661fd1:
00661FD1  39 78 28                  CMP dword ptr [EAX + 0x28],EDI
00661FD4  74 07                     JZ 0x00661fdd
00661FD6  41                        INC ECX
00661FD7  3B CE                     CMP ECX,ESI
00661FD9  7C E7                     JL 0x00661fc2
00661FDB  EB 07                     JMP 0x00661fe4
LAB_00661fdd:
00661FDD  C7 40 28 00 00 00 00      MOV dword ptr [EAX + 0x28],0x0
LAB_00661fe4:
00661FE4  8B 7D F8                  MOV EDI,dword ptr [EBP + -0x8]
00661FE7  83 FF 01                  CMP EDI,0x1
00661FEA  7C 3A                     JL 0x00662026
00661FEC  83 FF 29                  CMP EDI,0x29
00661FEF  7D 35                     JGE 0x00662026
00661FF1  66 81 7B 7B 00 80         CMP word ptr [EBX + 0x7b],0x8000
00661FF7  75 2D                     JNZ 0x00662026
00661FF9  8B 8B 84 02 00 00         MOV ECX,dword ptr [EBX + 0x284]
00661FFF  85 C9                     TEST ECX,ECX
00662001  74 23                     JZ 0x00662026
00662003  8B 75 F4                  MOV ESI,dword ptr [EBP + -0xc]
00662006  66 8B 86 1C 08 00 00      MOV AX,word ptr [ESI + 0x81c]
0066200D  50                        PUSH EAX
0066200E  E8 10 3B DA FF            CALL 0x00405b23
00662013  85 C0                     TEST EAX,EAX
00662015  74 0F                     JZ 0x00662026
00662017  8B 8E 1E 08 00 00         MOV ECX,dword ptr [ESI + 0x81e]
0066201D  51                        PUSH ECX
0066201E  57                        PUSH EDI
0066201F  8B C8                     MOV ECX,EAX
00662021  E8 DA 03 DA FF            CALL 0x00402400
LAB_00662026:
00662026  8B 55 F8                  MOV EDX,dword ptr [EBP + -0x8]
00662029  52                        PUSH EDX
0066202A  E8 DC 20 DA FF            CALL 0x0040410b
0066202F  83 C4 04                  ADD ESP,0x4
00662032  A8 60                     TEST AL,0x60
00662034  74 48                     JZ 0x0066207e
00662036  8B 93 84 02 00 00         MOV EDX,dword ptr [EBX + 0x284]
0066203C  85 D2                     TEST EDX,EDX
0066203E  74 3E                     JZ 0x0066207e
00662040  8B 75 08                  MOV ESI,dword ptr [EBP + 0x8]
00662043  B9 0D 00 00 00            MOV ECX,0xd
00662048  33 C0                     XOR EAX,EAX
0066204A  8D 7D A0                  LEA EDI,[EBP + -0x60]
0066204D  F3 AB                     STOSD.REP ES:EDI
0066204F  8B 83 80 02 00 00         MOV EAX,dword ptr [EBX + 0x280]
00662055  8A 4E 14                  MOV CL,byte ptr [ESI + 0x14]
00662058  89 45 A4                  MOV dword ptr [EBP + -0x5c],EAX
0066205B  66 8B 46 16               MOV AX,word ptr [ESI + 0x16]
0066205F  88 4D A8                  MOV byte ptr [EBP + -0x58],CL
00662062  8B 4D F8                  MOV ECX,dword ptr [EBP + -0x8]
00662065  66 89 45 A9               MOV word ptr [EBP + -0x57],AX
00662069  8D 45 A0                  LEA EAX,[EBP + -0x60]
0066206C  89 4D AB                  MOV dword ptr [EBP + -0x55],ECX
0066206F  50                        PUSH EAX
00662070  8B CA                     MOV ECX,EDX
00662072  C7 45 A0 6E 00 00 00      MOV dword ptr [EBP + -0x60],0x6e
00662079  E8 63 F0 D9 FF            CALL 0x004010e1
LAB_0066207e:
0066207E  8B 4D F8                  MOV ECX,dword ptr [EBP + -0x8]
00662081  51                        PUSH ECX
00662082  E8 84 20 DA FF            CALL 0x0040410b
00662087  83 C4 04                  ADD ESP,0x4
0066208A  A8 10                     TEST AL,0x10
0066208C  74 48                     JZ 0x006620d6
0066208E  8B 93 84 02 00 00         MOV EDX,dword ptr [EBX + 0x284]
00662094  85 D2                     TEST EDX,EDX
00662096  74 3E                     JZ 0x006620d6
00662098  8B 75 08                  MOV ESI,dword ptr [EBP + 0x8]
0066209B  B9 0D 00 00 00            MOV ECX,0xd
006620A0  33 C0                     XOR EAX,EAX
006620A2  8D 7D A0                  LEA EDI,[EBP + -0x60]
006620A5  F3 AB                     STOSD.REP ES:EDI
006620A7  8B 83 80 02 00 00         MOV EAX,dword ptr [EBX + 0x280]
006620AD  8A 4E 14                  MOV CL,byte ptr [ESI + 0x14]
006620B0  89 45 A4                  MOV dword ptr [EBP + -0x5c],EAX
006620B3  66 8B 46 16               MOV AX,word ptr [ESI + 0x16]
006620B7  88 4D A8                  MOV byte ptr [EBP + -0x58],CL
006620BA  8B 4D F8                  MOV ECX,dword ptr [EBP + -0x8]
006620BD  66 89 45 A9               MOV word ptr [EBP + -0x57],AX
006620C1  8D 45 A0                  LEA EAX,[EBP + -0x60]
006620C4  89 4D AB                  MOV dword ptr [EBP + -0x55],ECX
006620C7  50                        PUSH EAX
006620C8  8B CA                     MOV ECX,EDX
006620CA  C7 45 A0 74 00 00 00      MOV dword ptr [EBP + -0x60],0x74
006620D1  E8 0B F0 D9 FF            CALL 0x004010e1
LAB_006620d6:
006620D6  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
006620D9  83 F8 01                  CMP EAX,0x1
006620DC  7C 33                     JL 0x00662111
006620DE  83 F8 29                  CMP EAX,0x29
006620E1  7D 2E                     JGE 0x00662111
006620E3  66 83 7B 7B 01            CMP word ptr [EBX + 0x7b],0x1
006620E8  74 27                     JZ 0x00662111
006620EA  83 BB 9B 00 00 00 41      CMP dword ptr [EBX + 0x9b],0x41
006620F1  75 1E                     JNZ 0x00662111
006620F3  33 C0                     XOR EAX,EAX
006620F5  C7 83 9B 00 00 00 3C 00 00 00  MOV dword ptr [EBX + 0x9b],0x3c
006620FF  89 83 9F 00 00 00         MOV dword ptr [EBX + 0x9f],EAX
00662105  89 83 A3 00 00 00         MOV dword ptr [EBX + 0xa3],EAX
0066210B  89 83 A7 00 00 00         MOV dword ptr [EBX + 0xa7],EAX
LAB_00662111:
00662111  5F                        POP EDI
00662112  5E                        POP ESI
00662113  5B                        POP EBX
00662114  8B E5                     MOV ESP,EBP
00662116  5D                        POP EBP
00662117  C2 04 00                  RET 0x4
