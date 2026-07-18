STAllPlayersC::_AssignDocks:
00440AA0  55                        PUSH EBP
00440AA1  8B EC                     MOV EBP,ESP
00440AA3  81 EC 2C 01 00 00         SUB ESP,0x12c
00440AA9  0F BE 45 08               MOVSX EAX,byte ptr [EBP + 0x8]
00440AAD  89 4D C4                  MOV dword ptr [EBP + -0x3c],ECX
00440AB0  53                        PUSH EBX
00440AB1  8D 0C 80                  LEA ECX,[EAX + EAX*0x4]
00440AB4  56                        PUSH ESI
00440AB5  57                        PUSH EDI
00440AB6  6A 00                     PUSH 0x0
00440AB8  8D 14 C8                  LEA EDX,[EAX + ECX*0x8]
00440ABB  C7 45 94 00 00 00 00      MOV dword ptr [EBP + -0x6c],0x0
00440AC2  8D 0C 50                  LEA ECX,[EAX + EDX*0x2]
00440AC5  C1 E1 04                  SHL ECX,0x4
00440AC8  03 C8                     ADD ECX,EAX
00440ACA  A1 F8 8D 85 00            MOV EAX,[0x00858df8]
00440ACF  89 85 3C FF FF FF         MOV dword ptr [EBP + 0xffffff3c],EAX
00440AD5  8B 14 4D 25 4E 7F 00      MOV EDX,dword ptr [ECX*0x2 + 0x7f4e25]
00440ADC  8D 8D 3C FF FF FF         LEA ECX,[EBP + 0xffffff3c]
00440AE2  89 55 84                  MOV dword ptr [EBP + -0x7c],EDX
00440AE5  8D 95 40 FF FF FF         LEA EDX,[EBP + 0xffffff40]
00440AEB  52                        PUSH EDX
00440AEC  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
00440AF2  E8 F9 CC 2E 00            CALL 0x0072d7f0
00440AF7  8B F0                     MOV ESI,EAX
00440AF9  83 C4 08                  ADD ESP,0x8
00440AFC  85 F6                     TEST ESI,ESI
00440AFE  0F 85 D3 0D 00 00         JNZ 0x004418d7
00440B04  8B 5D 0C                  MOV EBX,dword ptr [EBP + 0xc]
00440B07  85 DB                     TEST EBX,EBX
00440B09  74 1D                     JZ 0x00440b28
00440B0B  8B 45 10                  MOV EAX,dword ptr [EBP + 0x10]
00440B0E  85 C0                     TEST EAX,EAX
00440B10  74 16                     JZ 0x00440b28
00440B12  8B 7B 0C                  MOV EDI,dword ptr [EBX + 0xc]
00440B15  85 FF                     TEST EDI,EDI
00440B17  89 7D E4                  MOV dword ptr [EBP + -0x1c],EDI
00440B1A  74 0F                     JZ 0x00440b2b
00440B1C  8B 40 0C                  MOV EAX,dword ptr [EAX + 0xc]
00440B1F  85 C0                     TEST EAX,EAX
00440B21  89 45 BC                  MOV dword ptr [EBP + -0x44],EAX
00440B24  75 20                     JNZ 0x00440b46
00440B26  EB 03                     JMP 0x00440b2b
LAB_00440b28:
00440B28  8B 7D E4                  MOV EDI,dword ptr [EBP + -0x1c]
LAB_00440b2b:
00440B2B  8B 0D 7C D7 7E 00         MOV ECX,dword ptr [0x007ed77c]
00440B31  68 15 22 00 00            PUSH 0x2215
00440B36  68 04 60 7A 00            PUSH 0x7a6004
00440B3B  51                        PUSH ECX
00440B3C  68 09 00 FE AF            PUSH 0xaffe0009
00440B41  E8 FA 52 26 00            CALL 0x006a5e40
LAB_00440b46:
00440B46  8B 45 84                  MOV EAX,dword ptr [EBP + -0x7c]
00440B49  85 C0                     TEST EAX,EAX
00440B4B  74 0A                     JZ 0x00440b57
00440B4D  8B 40 0C                  MOV EAX,dword ptr [EAX + 0xc]
00440B50  85 C0                     TEST EAX,EAX
00440B52  89 45 80                  MOV dword ptr [EBP + -0x80],EAX
00440B55  75 1B                     JNZ 0x00440b72
LAB_00440b57:
00440B57  8B 15 7C D7 7E 00         MOV EDX,dword ptr [0x007ed77c]
00440B5D  68 16 22 00 00            PUSH 0x2216
00440B62  68 04 60 7A 00            PUSH 0x7a6004
00440B67  52                        PUSH EDX
00440B68  68 08 00 FE AF            PUSH 0xaffe0008
00440B6D  E8 CE 52 26 00            CALL 0x006a5e40
LAB_00440b72:
00440B72  33 F6                     XOR ESI,ESI
00440B74  85 FF                     TEST EDI,EDI
00440B76  7E 46                     JLE 0x00440bbe
LAB_00440b78:
00440B78  8D 45 DC                  LEA EAX,[EBP + -0x24]
00440B7B  8B D6                     MOV EDX,ESI
00440B7D  50                        PUSH EAX
00440B7E  8B CB                     MOV ECX,EBX
00440B80  E8 EB C0 26 00            CALL 0x006acc70
00440B85  8B 45 DC                  MOV EAX,dword ptr [EBP + -0x24]
00440B88  66 3D FF FF               CMP AX,0xffff
00440B8C  74 1D                     JZ 0x00440bab
00440B8E  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
00440B91  6A 01                     PUSH 0x1
00440B93  50                        PUSH EAX
00440B94  51                        PUSH ECX
00440B95  8B 4D C4                  MOV ECX,dword ptr [EBP + -0x3c]
00440B98  E8 1D 1D FC FF            CALL 0x004028ba
00440B9D  8B 10                     MOV EDX,dword ptr [EAX]
00440B9F  8B C8                     MOV ECX,EAX
00440BA1  FF 92 F8 00 00 00         CALL dword ptr [EDX + 0xf8]
00440BA7  85 C0                     TEST EAX,EAX
00440BA9  75 0C                     JNZ 0x00440bb7
LAB_00440bab:
00440BAB  56                        PUSH ESI
00440BAC  53                        PUSH EBX
00440BAD  E8 BE 00 27 00            CALL 0x006b0c70
00440BB2  4F                        DEC EDI
00440BB3  4E                        DEC ESI
00440BB4  89 7D E4                  MOV dword ptr [EBP + -0x1c],EDI
LAB_00440bb7:
00440BB7  46                        INC ESI
00440BB8  3B F7                     CMP ESI,EDI
00440BBA  7C BC                     JL 0x00440b78
00440BBC  85 FF                     TEST EDI,EDI
LAB_00440bbe:
00440BBE  75 1A                     JNZ 0x00440bda
00440BC0  A1 7C D7 7E 00            MOV EAX,[0x007ed77c]
00440BC5  68 1E 22 00 00            PUSH 0x221e
00440BCA  68 04 60 7A 00            PUSH 0x7a6004
00440BCF  50                        PUSH EAX
00440BD0  68 09 00 FE AF            PUSH 0xaffe0009
00440BD5  E8 66 52 26 00            CALL 0x006a5e40
LAB_00440bda:
00440BDA  8B 45 BC                  MOV EAX,dword ptr [EBP + -0x44]
00440BDD  33 F6                     XOR ESI,ESI
00440BDF  85 C0                     TEST EAX,EAX
00440BE1  7E 4F                     JLE 0x00440c32
LAB_00440be3:
00440BE3  8B 5D 10                  MOV EBX,dword ptr [EBP + 0x10]
00440BE6  8D 4D DC                  LEA ECX,[EBP + -0x24]
00440BE9  51                        PUSH ECX
00440BEA  8B D6                     MOV EDX,ESI
00440BEC  8B CB                     MOV ECX,EBX
00440BEE  E8 7D C0 26 00            CALL 0x006acc70
00440BF3  8B 45 DC                  MOV EAX,dword ptr [EBP + -0x24]
00440BF6  66 3D FF FF               CMP AX,0xffff
00440BFA  74 1D                     JZ 0x00440c19
00440BFC  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
00440BFF  8B 4D C4                  MOV ECX,dword ptr [EBP + -0x3c]
00440C02  6A 01                     PUSH 0x1
00440C04  50                        PUSH EAX
00440C05  52                        PUSH EDX
00440C06  E8 AF 1C FC FF            CALL 0x004028ba
00440C0B  8B 10                     MOV EDX,dword ptr [EAX]
00440C0D  8B C8                     MOV ECX,EAX
00440C0F  FF 92 F8 00 00 00         CALL dword ptr [EDX + 0xf8]
00440C15  85 C0                     TEST EAX,EAX
00440C17  75 0F                     JNZ 0x00440c28
LAB_00440c19:
00440C19  56                        PUSH ESI
00440C1A  53                        PUSH EBX
00440C1B  E8 50 00 27 00            CALL 0x006b0c70
00440C20  8B 4D BC                  MOV ECX,dword ptr [EBP + -0x44]
00440C23  49                        DEC ECX
00440C24  4E                        DEC ESI
00440C25  89 4D BC                  MOV dword ptr [EBP + -0x44],ECX
LAB_00440c28:
00440C28  8B 45 BC                  MOV EAX,dword ptr [EBP + -0x44]
00440C2B  46                        INC ESI
00440C2C  3B F0                     CMP ESI,EAX
00440C2E  7C B3                     JL 0x00440be3
00440C30  85 C0                     TEST EAX,EAX
LAB_00440c32:
00440C32  75 1A                     JNZ 0x00440c4e
00440C34  A1 7C D7 7E 00            MOV EAX,[0x007ed77c]
00440C39  68 25 22 00 00            PUSH 0x2225
00440C3E  68 04 60 7A 00            PUSH 0x7a6004
00440C43  50                        PUSH EAX
00440C44  68 09 00 FE AF            PUSH 0xaffe0009
00440C49  E8 F2 51 26 00            CALL 0x006a5e40
LAB_00440c4e:
00440C4E  6A 01                     PUSH 0x1
00440C50  6A 0C                     PUSH 0xc
00440C52  57                        PUSH EDI
00440C53  6A 00                     PUSH 0x0
00440C55  E8 36 D6 26 00            CALL 0x006ae290
00440C5A  8B D8                     MOV EBX,EAX
00440C5C  33 F6                     XOR ESI,ESI
00440C5E  85 FF                     TEST EDI,EDI
00440C60  89 5D C0                  MOV dword ptr [EBP + -0x40],EBX
00440C63  7E 1B                     JLE 0x00440c80
LAB_00440c65:
00440C65  8D 4D F4                  LEA ECX,[EBP + -0xc]
00440C68  33 C0                     XOR EAX,EAX
00440C6A  51                        PUSH ECX
00440C6B  56                        PUSH ESI
00440C6C  53                        PUSH EBX
00440C6D  89 45 F4                  MOV dword ptr [EBP + -0xc],EAX
00440C70  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
00440C73  89 45 F8                  MOV dword ptr [EBP + -0x8],EAX
00440C76  E8 C5 D4 26 00            CALL 0x006ae140
00440C7B  46                        INC ESI
00440C7C  3B F7                     CMP ESI,EDI
00440C7E  7C E5                     JL 0x00440c65
LAB_00440c80:
00440C80  8B 45 80                  MOV EAX,dword ptr [EBP + -0x80]
00440C83  33 F6                     XOR ESI,ESI
00440C85  85 C0                     TEST EAX,EAX
00440C87  89 75 E8                  MOV dword ptr [EBP + -0x18],ESI
00440C8A  0F 8E 71 02 00 00         JLE 0x00440f01
LAB_00440c90:
00440C90  8B 4D 84                  MOV ECX,dword ptr [EBP + -0x7c]
00440C93  8D 55 88                  LEA EDX,[EBP + -0x78]
00440C96  52                        PUSH EDX
00440C97  8B D6                     MOV EDX,ESI
00440C99  E8 D2 BF 26 00            CALL 0x006acc70
00440C9E  8B 4D 88                  MOV ECX,dword ptr [EBP + -0x78]
00440CA1  85 C9                     TEST ECX,ECX
00440CA3  0F 84 49 02 00 00         JZ 0x00440ef2
00440CA9  8B 01                     MOV EAX,dword ptr [ECX]
00440CAB  FF 50 0C                  CALL dword ptr [EAX + 0xc]
00440CAE  83 F8 04                  CMP EAX,0x4
00440CB1  0F 85 3B 02 00 00         JNZ 0x00440ef2
00440CB7  8B 45 88                  MOV EAX,dword ptr [EBP + -0x78]
00440CBA  66 83 78 27 00            CMP word ptr [EAX + 0x27],0x0
00440CBF  0F 84 2D 02 00 00         JZ 0x00440ef2
00440CC5  8B 40 29                  MOV EAX,dword ptr [EAX + 0x29]
00440CC8  33 D2                     XOR EDX,EDX
00440CCA  89 45 98                  MOV dword ptr [EBP + -0x68],EAX
00440CCD  89 55 D8                  MOV dword ptr [EBP + -0x28],EDX
00440CD0  8B 48 0C                  MOV ECX,dword ptr [EAX + 0xc]
00440CD3  85 C9                     TEST ECX,ECX
00440CD5  89 4D 8C                  MOV dword ptr [EBP + -0x74],ECX
00440CD8  0F 8E 14 02 00 00         JLE 0x00440ef2
00440CDE  EB 03                     JMP 0x00440ce3
LAB_00440ce0:
00440CE0  8B 45 98                  MOV EAX,dword ptr [EBP + -0x68]
LAB_00440ce3:
00440CE3  8D 4D DC                  LEA ECX,[EBP + -0x24]
00440CE6  51                        PUSH ECX
00440CE7  8B C8                     MOV ECX,EAX
00440CE9  E8 82 BF 26 00            CALL 0x006acc70
00440CEE  8B 45 DC                  MOV EAX,dword ptr [EBP + -0x24]
00440CF1  66 3D FF FF               CMP AX,0xffff
00440CF5  0F 84 E2 01 00 00         JZ 0x00440edd
00440CFB  8B 5D 08                  MOV EBX,dword ptr [EBP + 0x8]
00440CFE  8B 4D C4                  MOV ECX,dword ptr [EBP + -0x3c]
00440D01  6A 01                     PUSH 0x1
00440D03  50                        PUSH EAX
00440D04  53                        PUSH EBX
00440D05  E8 B0 1B FC FF            CALL 0x004028ba
00440D0A  8B F0                     MOV ESI,EAX
00440D0C  85 F6                     TEST ESI,ESI
00440D0E  75 3E                     JNZ 0x00440d4e
00440D10  68 64 80 7A 00            PUSH 0x7a8064
00440D15  68 CC 4C 7A 00            PUSH 0x7a4ccc
00440D1A  50                        PUSH EAX
00440D1B  50                        PUSH EAX
00440D1C  68 39 22 00 00            PUSH 0x2239
00440D21  68 04 60 7A 00            PUSH 0x7a6004
00440D26  E8 A5 C7 26 00            CALL 0x006ad4d0
00440D2B  83 C4 18                  ADD ESP,0x18
00440D2E  85 C0                     TEST EAX,EAX
00440D30  74 01                     JZ 0x00440d33
00440D32  CC                        INT3
LAB_00440d33:
00440D33  8B 15 7C D7 7E 00         MOV EDX,dword ptr [0x007ed77c]
00440D39  68 3A 22 00 00            PUSH 0x223a
00440D3E  68 04 60 7A 00            PUSH 0x7a6004
00440D43  52                        PUSH EDX
00440D44  68 04 00 FE AF            PUSH 0xaffe0004
00440D49  E8 F2 50 26 00            CALL 0x006a5e40
LAB_00440d4e:
00440D4E  83 7E 20 14               CMP dword ptr [ESI + 0x20],0x14
00440D52  0F 85 85 01 00 00         JNZ 0x00440edd
00440D58  8B CE                     MOV ECX,ESI
00440D5A  E8 7D 21 FC FF            CALL 0x00402edc
00440D5F  83 F8 04                  CMP EAX,0x4
00440D62  0F 85 75 01 00 00         JNZ 0x00440edd
00440D68  8D 85 D4 FE FF FF         LEA EAX,[EBP + 0xfffffed4]
00440D6E  8B CE                     MOV ECX,ESI
00440D70  50                        PUSH EAX
00440D71  E8 40 33 FC FF            CALL 0x004040b6
00440D76  B9 0D 00 00 00            MOV ECX,0xd
00440D7B  8B F0                     MOV ESI,EAX
00440D7D  8D BD 08 FF FF FF         LEA EDI,[EBP + 0xffffff08]
00440D83  F3 A5                     MOVSD.REP ES:EDI,ESI
00440D85  8B 85 34 FF FF FF         MOV EAX,dword ptr [EBP + 0xffffff34]
00440D8B  83 F8 06                  CMP EAX,0x6
00440D8E  0F 84 49 01 00 00         JZ 0x00440edd
00440D94  83 F8 07                  CMP EAX,0x7
00440D97  0F 84 40 01 00 00         JZ 0x00440edd
00440D9D  8B 7D BC                  MOV EDI,dword ptr [EBP + -0x44]
00440DA0  33 F6                     XOR ESI,ESI
00440DA2  85 FF                     TEST EDI,EDI
00440DA4  7E 1D                     JLE 0x00440dc3
LAB_00440da6:
00440DA6  8D 4D E2                  LEA ECX,[EBP + -0x1e]
00440DA9  8B D6                     MOV EDX,ESI
00440DAB  51                        PUSH ECX
00440DAC  8B 4D 10                  MOV ECX,dword ptr [EBP + 0x10]
00440DAF  E8 BC BE 26 00            CALL 0x006acc70
00440DB4  66 8B 55 DC               MOV DX,word ptr [EBP + -0x24]
00440DB8  66 3B 55 E2               CMP DX,word ptr [EBP + -0x1e]
00440DBC  74 05                     JZ 0x00440dc3
00440DBE  46                        INC ESI
00440DBF  3B F7                     CMP ESI,EDI
00440DC1  7C E3                     JL 0x00440da6
LAB_00440dc3:
00440DC3  3B F7                     CMP ESI,EDI
00440DC5  0F 8C 12 01 00 00         JL 0x00440edd
00440DCB  66 8B 95 08 FF FF FF      MOV DX,word ptr [EBP + 0xffffff08]
00440DD2  66 85 D2                  TEST DX,DX
00440DD5  7C 5E                     JL 0x00440e35
00440DD7  66 8B 35 40 B2 7F 00      MOV SI,word ptr [0x007fb240]
00440DDE  66 3B D6                  CMP DX,SI
00440DE1  7D 52                     JGE 0x00440e35
00440DE3  66 8B 8D 0A FF FF FF      MOV CX,word ptr [EBP + 0xffffff0a]
00440DEA  66 85 C9                  TEST CX,CX
00440DED  7C 46                     JL 0x00440e35
00440DEF  66 3B 0D 42 B2 7F 00      CMP CX,word ptr [0x007fb242]
00440DF6  7D 3D                     JGE 0x00440e35
00440DF8  66 8B 85 0C FF FF FF      MOV AX,word ptr [EBP + 0xffffff0c]
00440DFF  66 85 C0                  TEST AX,AX
00440E02  7C 31                     JL 0x00440e35
00440E04  66 3B 05 44 B2 7F 00      CMP AX,word ptr [0x007fb244]
00440E0B  7D 28                     JGE 0x00440e35
00440E0D  0F BF 3D 46 B2 7F 00      MOVSX EDI,word ptr [0x007fb246]
00440E14  0F BF C0                  MOVSX EAX,AX
00440E17  0F BF C9                  MOVSX ECX,CX
00440E1A  0F AF C7                  IMUL EAX,EDI
00440E1D  0F BF F6                  MOVSX ESI,SI
00440E20  0F AF CE                  IMUL ECX,ESI
00440E23  0F BF D2                  MOVSX EDX,DX
00440E26  03 C1                     ADD EAX,ECX
00440E28  8B 0D 48 B2 7F 00         MOV ECX,dword ptr [0x007fb248]
00440E2E  03 C2                     ADD EAX,EDX
00440E30  8B 3C C1                  MOV EDI,dword ptr [ECX + EAX*0x8]
00440E33  EB 02                     JMP 0x00440e37
LAB_00440e35:
00440E35  33 FF                     XOR EDI,EDI
LAB_00440e37:
00440E37  85 FF                     TEST EDI,EDI
00440E39  0F 84 9E 00 00 00         JZ 0x00440edd
00440E3F  8B 47 24                  MOV EAX,dword ptr [EDI + 0x24]
00440E42  0F BE D3                  MOVSX EDX,BL
00440E45  3B C2                     CMP EAX,EDX
00440E47  0F 85 90 00 00 00         JNZ 0x00440edd
00440E4D  8B 07                     MOV EAX,dword ptr [EDI]
00440E4F  8B CF                     MOV ECX,EDI
00440E51  FF 50 2C                  CALL dword ptr [EAX + 0x2c]
00440E54  83 F8 33                  CMP EAX,0x33
00440E57  0F 85 80 00 00 00         JNZ 0x00440edd
00440E5D  8B 17                     MOV EDX,dword ptr [EDI]
00440E5F  8B CF                     MOV ECX,EDI
00440E61  FF 92 F8 00 00 00         CALL dword ptr [EDX + 0xf8]
00440E67  83 F8 01                  CMP EAX,0x1
00440E6A  75 71                     JNZ 0x00440edd
00440E6C  8B 5D E4                  MOV EBX,dword ptr [EBP + -0x1c]
00440E6F  33 F6                     XOR ESI,ESI
00440E71  85 DB                     TEST EBX,EBX
00440E73  7E 1D                     JLE 0x00440e92
LAB_00440e75:
00440E75  8B 4D 0C                  MOV ECX,dword ptr [EBP + 0xc]
00440E78  8D 45 E2                  LEA EAX,[EBP + -0x1e]
00440E7B  50                        PUSH EAX
00440E7C  8B D6                     MOV EDX,ESI
00440E7E  E8 ED BD 26 00            CALL 0x006acc70
00440E83  66 8B 4D E2               MOV CX,word ptr [EBP + -0x1e]
00440E87  66 3B 4F 32               CMP CX,word ptr [EDI + 0x32]
00440E8B  74 05                     JZ 0x00440e92
00440E8D  46                        INC ESI
00440E8E  3B F3                     CMP ESI,EBX
00440E90  7C E3                     JL 0x00440e75
LAB_00440e92:
00440E92  3B F3                     CMP ESI,EBX
00440E94  74 47                     JZ 0x00440edd
00440E96  8B 7D C0                  MOV EDI,dword ptr [EBP + -0x40]
00440E99  8D 55 F4                  LEA EDX,[EBP + -0xc]
00440E9C  52                        PUSH EDX
00440E9D  8B D6                     MOV EDX,ESI
00440E9F  8B CF                     MOV ECX,EDI
00440EA1  E8 CA BD 26 00            CALL 0x006acc70
00440EA6  8B 45 F4                  MOV EAX,dword ptr [EBP + -0xc]
00440EA9  85 C0                     TEST EAX,EAX
00440EAB  75 1B                     JNZ 0x00440ec8
00440EAD  6A 01                     PUSH 0x1
00440EAF  6A 06                     PUSH 0x6
00440EB1  6A 01                     PUSH 0x1
00440EB3  6A 00                     PUSH 0x0
00440EB5  E8 D6 D3 26 00            CALL 0x006ae290
00440EBA  89 45 F4                  MOV dword ptr [EBP + -0xc],EAX
00440EBD  8D 45 F4                  LEA EAX,[EBP + -0xc]
00440EC0  50                        PUSH EAX
00440EC1  56                        PUSH ESI
00440EC2  57                        PUSH EDI
00440EC3  E8 78 D2 26 00            CALL 0x006ae140
LAB_00440ec8:
00440EC8  8B 45 F4                  MOV EAX,dword ptr [EBP + -0xc]
00440ECB  66 8B 4D DC               MOV CX,word ptr [EBP + -0x24]
00440ECF  8D 55 C8                  LEA EDX,[EBP + -0x38]
00440ED2  66 89 4D C8               MOV word ptr [EBP + -0x38],CX
00440ED6  52                        PUSH EDX
00440ED7  50                        PUSH EAX
00440ED8  E8 E3 D2 26 00            CALL 0x006ae1c0
LAB_00440edd:
00440EDD  8B 55 D8                  MOV EDX,dword ptr [EBP + -0x28]
00440EE0  8B 45 8C                  MOV EAX,dword ptr [EBP + -0x74]
00440EE3  42                        INC EDX
00440EE4  3B D0                     CMP EDX,EAX
00440EE6  89 55 D8                  MOV dword ptr [EBP + -0x28],EDX
00440EE9  0F 8C F1 FD FF FF         JL 0x00440ce0
00440EEF  8B 75 E8                  MOV ESI,dword ptr [EBP + -0x18]
LAB_00440ef2:
00440EF2  8B 45 80                  MOV EAX,dword ptr [EBP + -0x80]
00440EF5  46                        INC ESI
00440EF6  3B F0                     CMP ESI,EAX
00440EF8  89 75 E8                  MOV dword ptr [EBP + -0x18],ESI
00440EFB  0F 8C 8F FD FF FF         JL 0x00440c90
LAB_00440f01:
00440F01  8B 5D BC                  MOV EBX,dword ptr [EBP + -0x44]
00440F04  6A 01                     PUSH 0x1
00440F06  6A 04                     PUSH 0x4
00440F08  53                        PUSH EBX
00440F09  6A 00                     PUSH 0x0
00440F0B  E8 80 D3 26 00            CALL 0x006ae290
00440F10  8B F8                     MOV EDI,EAX
00440F12  33 F6                     XOR ESI,ESI
00440F14  85 DB                     TEST EBX,EBX
00440F16  89 7D 8C                  MOV dword ptr [EBP + -0x74],EDI
00440F19  7E 22                     JLE 0x00440f3d
LAB_00440f1b:
00440F1B  8B 4D E4                  MOV ECX,dword ptr [EBP + -0x1c]
00440F1E  6A 01                     PUSH 0x1
00440F20  6A 04                     PUSH 0x4
00440F22  51                        PUSH ECX
00440F23  6A 00                     PUSH 0x0
00440F25  E8 66 D3 26 00            CALL 0x006ae290
00440F2A  8D 55 B0                  LEA EDX,[EBP + -0x50]
00440F2D  89 45 B0                  MOV dword ptr [EBP + -0x50],EAX
00440F30  52                        PUSH EDX
00440F31  56                        PUSH ESI
00440F32  57                        PUSH EDI
00440F33  E8 08 D2 26 00            CALL 0x006ae140
00440F38  46                        INC ESI
00440F39  3B F3                     CMP ESI,EBX
00440F3B  7C DE                     JL 0x00440f1b
LAB_00440f3d:
00440F3D  8B 45 E4                  MOV EAX,dword ptr [EBP + -0x1c]
00440F40  C7 45 E8 00 00 00 00      MOV dword ptr [EBP + -0x18],0x0
00440F47  85 C0                     TEST EAX,EAX
00440F49  0F 8E 31 03 00 00         JLE 0x00441280
LAB_00440f4f:
00440F4F  8B 5D E8                  MOV EBX,dword ptr [EBP + -0x18]
00440F52  8B 4D 0C                  MOV ECX,dword ptr [EBP + 0xc]
00440F55  8D 45 DC                  LEA EAX,[EBP + -0x24]
00440F58  8B D3                     MOV EDX,EBX
00440F5A  50                        PUSH EAX
00440F5B  E8 10 BD 26 00            CALL 0x006acc70
00440F60  8B 4D DC                  MOV ECX,dword ptr [EBP + -0x24]
00440F63  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
00440F66  6A 01                     PUSH 0x1
00440F68  51                        PUSH ECX
00440F69  8B 4D C4                  MOV ECX,dword ptr [EBP + -0x3c]
00440F6C  52                        PUSH EDX
00440F6D  E8 48 19 FC FF            CALL 0x004028ba
00440F72  8D 4D EE                  LEA ECX,[EBP + -0x12]
00440F75  8D 55 F0                  LEA EDX,[EBP + -0x10]
00440F78  51                        PUSH ECX
00440F79  8D 4D F2                  LEA ECX,[EBP + -0xe]
00440F7C  52                        PUSH EDX
00440F7D  51                        PUSH ECX
00440F7E  8B C8                     MOV ECX,EAX
00440F80  E8 40 09 FC FF            CALL 0x004018c5
00440F85  0F BF 0D 7C B2 7F 00      MOVSX ECX,word ptr [0x007fb27c]
00440F8C  0F BF 15 7A B2 7F 00      MOVSX EDX,word ptr [0x007fb27a]
00440F93  0F BF 05 78 B2 7F 00      MOVSX EAX,word ptr [0x007fb278]
00440F9A  0F AF CA                  IMUL ECX,EDX
00440F9D  0F AF C8                  IMUL ECX,EAX
00440FA0  8B 35 80 B2 7F 00         MOV ESI,dword ptr [0x007fb280]
00440FA6  8B 3D 38 B2 7F 00         MOV EDI,dword ptr [0x007fb238]
00440FAC  D1 E1                     SHL ECX,0x1
00440FAE  8B D1                     MOV EDX,ECX
00440FB0  6A FF                     PUSH -0x1
00440FB2  C1 E9 02                  SHR ECX,0x2
00440FB5  F3 A5                     MOVSD.REP ES:EDI,ESI
00440FB7  8B CA                     MOV ECX,EDX
00440FB9  6A FF                     PUSH -0x1
00440FBB  83 E1 03                  AND ECX,0x3
00440FBE  6A FF                     PUSH -0x1
00440FC0  F3 A4                     MOVSB.REP ES:EDI,ESI
00440FC2  0F BF 45 EE               MOVSX EAX,word ptr [EBP + -0x12]
00440FC6  0F BF 4D F0               MOVSX ECX,word ptr [EBP + -0x10]
00440FCA  0F BF 55 F2               MOVSX EDX,word ptr [EBP + -0xe]
00440FCE  50                        PUSH EAX
00440FCF  51                        PUSH ECX
00440FD0  0F BF 05 7C B2 7F 00      MOVSX EAX,word ptr [0x007fb27c]
00440FD7  0F BF 0D 7A B2 7F 00      MOVSX ECX,word ptr [0x007fb27a]
00440FDE  52                        PUSH EDX
00440FDF  50                        PUSH EAX
00440FE0  0F BF 15 78 B2 7F 00      MOVSX EDX,word ptr [0x007fb278]
00440FE7  A1 38 B2 7F 00            MOV EAX,[0x007fb238]
00440FEC  51                        PUSH ECX
00440FED  52                        PUSH EDX
00440FEE  50                        PUSH EAX
00440FEF  E8 9C A0 26 00            CALL 0x006ab090
00440FF4  8D 4D F4                  LEA ECX,[EBP + -0xc]
00440FF7  8B D3                     MOV EDX,EBX
00440FF9  51                        PUSH ECX
00440FFA  8B 4D C0                  MOV ECX,dword ptr [EBP + -0x40]
00440FFD  E8 6E BC 26 00            CALL 0x006acc70
00441002  8B 4D F4                  MOV ECX,dword ptr [EBP + -0xc]
00441005  85 C9                     TEST ECX,ECX
00441007  0F 84 D3 00 00 00         JZ 0x004410e0
0044100D  8B 41 0C                  MOV EAX,dword ptr [ECX + 0xc]
00441010  85 C0                     TEST EAX,EAX
00441012  89 45 A0                  MOV dword ptr [EBP + -0x60],EAX
00441015  0F 86 C5 00 00 00         JBE 0x004410e0
0044101B  33 F6                     XOR ESI,ESI
0044101D  85 C0                     TEST EAX,EAX
0044101F  0F 8E BB 00 00 00         JLE 0x004410e0
00441025  EB 03                     JMP 0x0044102a
LAB_00441027:
00441027  8B 4D F4                  MOV ECX,dword ptr [EBP + -0xc]
LAB_0044102a:
0044102A  8D 55 C8                  LEA EDX,[EBP + -0x38]
0044102D  52                        PUSH EDX
0044102E  8B D6                     MOV EDX,ESI
00441030  E8 3B BC 26 00            CALL 0x006acc70
00441035  8B 45 C8                  MOV EAX,dword ptr [EBP + -0x38]
00441038  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
0044103B  8B 5D C4                  MOV EBX,dword ptr [EBP + -0x3c]
0044103E  6A 01                     PUSH 0x1
00441040  50                        PUSH EAX
00441041  51                        PUSH ECX
00441042  8B CB                     MOV ECX,EBX
00441044  E8 71 18 FC FF            CALL 0x004028ba
00441049  8B F8                     MOV EDI,EAX
0044104B  8D 55 EE                  LEA EDX,[EBP + -0x12]
0044104E  8D 45 F0                  LEA EAX,[EBP + -0x10]
00441051  52                        PUSH EDX
00441052  8D 4D F2                  LEA ECX,[EBP + -0xe]
00441055  50                        PUSH EAX
00441056  51                        PUSH ECX
00441057  8B CF                     MOV ECX,EDI
00441059  E8 67 08 FC FF            CALL 0x004018c5
0044105E  8B 17                     MOV EDX,dword ptr [EDI]
00441060  8B CF                     MOV ECX,EDI
00441062  FF 52 2C                  CALL dword ptr [EDX + 0x2c]
00441065  50                        PUSH EAX
00441066  8B CB                     MOV ECX,EBX
00441068  E8 41 15 FC FF            CALL 0x004025ae
0044106D  0F BF 0D 7E B2 7F 00      MOVSX ECX,word ptr [0x007fb27e]
00441074  0F BF 55 F0               MOVSX EDX,word ptr [EBP + -0x10]
00441078  8A D8                     MOV BL,AL
0044107A  0F BF 45 EE               MOVSX EAX,word ptr [EBP + -0x12]
0044107E  0F AF C1                  IMUL EAX,ECX
00441081  0F BF 0D 78 B2 7F 00      MOVSX ECX,word ptr [0x007fb278]
00441088  0F AF D1                  IMUL EDX,ECX
0044108B  8B 0D 38 B2 7F 00         MOV ECX,dword ptr [0x007fb238]
00441091  03 C2                     ADD EAX,EDX
00441093  0F BF 55 F2               MOVSX EDX,word ptr [EBP + -0xe]
00441097  03 C2                     ADD EAX,EDX
00441099  81 E3 FF 00 00 00         AND EBX,0xff
0044109F  0F BF 04 41               MOVSX EAX,word ptr [ECX + EAX*0x2]
004410A3  8D 0C 80                  LEA ECX,[EAX + EAX*0x4]
004410A6  8D 14 89                  LEA EDX,[ECX + ECX*0x4]
004410A9  8D BC D0 37 FF FF FF      LEA EDI,[EAX + EDX*0x8 + 0xffffff37]
004410B0  B8 56 55 55 55            MOV EAX,0x55555556
004410B5  F7 EF                     IMUL EDI
004410B7  8B CA                     MOV ECX,EDX
004410B9  8B C2                     MOV EAX,EDX
004410BB  C1 E9 1F                  SHR ECX,0x1f
004410BE  03 C1                     ADD EAX,ECX
004410C0  99                        CDQ
004410C1  F7 FB                     IDIV EBX
004410C3  8D 55 C8                  LEA EDX,[EBP + -0x38]
004410C6  52                        PUSH EDX
004410C7  56                        PUSH ESI
004410C8  89 45 CA                  MOV dword ptr [EBP + -0x36],EAX
004410CB  8B 45 F4                  MOV EAX,dword ptr [EBP + -0xc]
004410CE  50                        PUSH EAX
004410CF  E8 6C D0 26 00            CALL 0x006ae140
004410D4  8B 45 A0                  MOV EAX,dword ptr [EBP + -0x60]
004410D7  46                        INC ESI
004410D8  3B F0                     CMP ESI,EAX
004410DA  0F 8C 47 FF FF FF         JL 0x00441027
LAB_004410e0:
004410E0  8B 45 BC                  MOV EAX,dword ptr [EBP + -0x44]
004410E3  33 FF                     XOR EDI,EDI
004410E5  85 C0                     TEST EAX,EAX
004410E7  0F 8E DD 00 00 00         JLE 0x004411ca
LAB_004410ed:
004410ED  8D 4D DC                  LEA ECX,[EBP + -0x24]
004410F0  8B D7                     MOV EDX,EDI
004410F2  51                        PUSH ECX
004410F3  8B 4D 10                  MOV ECX,dword ptr [EBP + 0x10]
004410F6  E8 75 BB 26 00            CALL 0x006acc70
004410FB  8B 55 DC                  MOV EDX,dword ptr [EBP + -0x24]
004410FE  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
00441101  8B 5D C4                  MOV EBX,dword ptr [EBP + -0x3c]
00441104  6A 01                     PUSH 0x1
00441106  52                        PUSH EDX
00441107  50                        PUSH EAX
00441108  8B CB                     MOV ECX,EBX
0044110A  E8 AB 17 FC FF            CALL 0x004028ba
0044110F  8D 4D EE                  LEA ECX,[EBP + -0x12]
00441112  8B F0                     MOV ESI,EAX
00441114  8D 55 F0                  LEA EDX,[EBP + -0x10]
00441117  51                        PUSH ECX
00441118  8D 45 F2                  LEA EAX,[EBP + -0xe]
0044111B  52                        PUSH EDX
0044111C  50                        PUSH EAX
0044111D  8B CE                     MOV ECX,ESI
0044111F  E8 A1 07 FC FF            CALL 0x004018c5
00441124  0F BF 4D EE               MOVSX ECX,word ptr [EBP + -0x12]
00441128  0F BF 15 7E B2 7F 00      MOVSX EDX,word ptr [0x007fb27e]
0044112F  0F BF 45 F0               MOVSX EAX,word ptr [EBP + -0x10]
00441133  0F AF CA                  IMUL ECX,EDX
00441136  0F BF 15 78 B2 7F 00      MOVSX EDX,word ptr [0x007fb278]
0044113D  0F AF C2                  IMUL EAX,EDX
00441140  8B 15 38 B2 7F 00         MOV EDX,dword ptr [0x007fb238]
00441146  03 C8                     ADD ECX,EAX
00441148  0F BF 45 F2               MOVSX EAX,word ptr [EBP + -0xe]
0044114C  03 C8                     ADD ECX,EAX
0044114E  0F BF 04 4A               MOVSX EAX,word ptr [EDX + ECX*0x2]
00441152  85 C0                     TEST EAX,EAX
00441154  89 45 9C                  MOV dword ptr [EBP + -0x64],EAX
00441157  7E 3F                     JLE 0x00441198
00441159  8B 06                     MOV EAX,dword ptr [ESI]
0044115B  8B CE                     MOV ECX,ESI
0044115D  FF 50 2C                  CALL dword ptr [EAX + 0x2c]
00441160  50                        PUSH EAX
00441161  8B CB                     MOV ECX,EBX
00441163  E8 46 14 FC FF            CALL 0x004025ae
00441168  8A D8                     MOV BL,AL
0044116A  8B 45 9C                  MOV EAX,dword ptr [EBP + -0x64]
0044116D  81 E3 FF 00 00 00         AND EBX,0xff
00441173  8D 0C 80                  LEA ECX,[EAX + EAX*0x4]
00441176  8D 0C 89                  LEA ECX,[ECX + ECX*0x4]
00441179  8D B4 C8 37 FF FF FF      LEA ESI,[EAX + ECX*0x8 + 0xffffff37]
00441180  B8 56 55 55 55            MOV EAX,0x55555556
00441185  F7 EE                     IMUL ESI
00441187  8B CA                     MOV ECX,EDX
00441189  8B C2                     MOV EAX,EDX
0044118B  C1 E9 1F                  SHR ECX,0x1f
0044118E  03 C1                     ADD EAX,ECX
00441190  99                        CDQ
00441191  F7 FB                     IDIV EBX
00441193  89 45 9C                  MOV dword ptr [EBP + -0x64],EAX
00441196  EB 07                     JMP 0x0044119f
LAB_00441198:
00441198  C7 45 9C FF FF FF FF      MOV dword ptr [EBP + -0x64],0xffffffff
LAB_0044119f:
0044119F  8B 4D 8C                  MOV ECX,dword ptr [EBP + -0x74]
004411A2  8D 55 B0                  LEA EDX,[EBP + -0x50]
004411A5  52                        PUSH EDX
004411A6  8B D7                     MOV EDX,EDI
004411A8  E8 C3 BA 26 00            CALL 0x006acc70
004411AD  8B 4D E8                  MOV ECX,dword ptr [EBP + -0x18]
004411B0  8B 55 B0                  MOV EDX,dword ptr [EBP + -0x50]
004411B3  8D 45 9C                  LEA EAX,[EBP + -0x64]
004411B6  50                        PUSH EAX
004411B7  51                        PUSH ECX
004411B8  52                        PUSH EDX
004411B9  E8 82 CF 26 00            CALL 0x006ae140
004411BE  8B 45 BC                  MOV EAX,dword ptr [EBP + -0x44]
004411C1  47                        INC EDI
004411C2  3B F8                     CMP EDI,EAX
004411C4  0F 8C 23 FF FF FF         JL 0x004410ed
LAB_004411ca:
004411CA  8B 45 E8                  MOV EAX,dword ptr [EBP + -0x18]
004411CD  8B 5D E4                  MOV EBX,dword ptr [EBP + -0x1c]
004411D0  40                        INC EAX
004411D1  3B C3                     CMP EAX,EBX
004411D3  89 45 E8                  MOV dword ptr [EBP + -0x18],EAX
004411D6  0F 8C 73 FD FF FF         JL 0x00440f4f
004411DC  8B 7D C0                  MOV EDI,dword ptr [EBP + -0x40]
LAB_004411df:
004411DF  33 D2                     XOR EDX,EDX
004411E1  85 DB                     TEST EBX,EBX
004411E3  89 55 E8                  MOV dword ptr [EBP + -0x18],EDX
004411E6  0F 8E 29 02 00 00         JLE 0x00441415
LAB_004411ec:
004411EC  8D 45 F4                  LEA EAX,[EBP + -0xc]
004411EF  8B CF                     MOV ECX,EDI
004411F1  50                        PUSH EAX
004411F2  E8 79 BA 26 00            CALL 0x006acc70
004411F7  8B 4D F4                  MOV ECX,dword ptr [EBP + -0xc]
004411FA  85 C9                     TEST ECX,ECX
004411FC  0F 84 04 02 00 00         JZ 0x00441406
00441202  8B 41 0C                  MOV EAX,dword ptr [ECX + 0xc]
00441205  85 C0                     TEST EAX,EAX
00441207  89 45 A0                  MOV dword ptr [EBP + -0x60],EAX
0044120A  0F 84 F6 01 00 00         JZ 0x00441406
00441210  83 F8 01                  CMP EAX,0x1
00441213  75 76                     JNZ 0x0044128b
00441215  8D 55 C8                  LEA EDX,[EBP + -0x38]
00441218  52                        PUSH EDX
00441219  33 D2                     XOR EDX,EDX
0044121B  E8 50 BA 26 00            CALL 0x006acc70
00441220  8B 45 C8                  MOV EAX,dword ptr [EBP + -0x38]
00441223  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
00441226  6A 01                     PUSH 0x1
00441228  50                        PUSH EAX
00441229  51                        PUSH ECX
0044122A  8B 4D C4                  MOV ECX,dword ptr [EBP + -0x3c]
0044122D  E8 88 16 FC FF            CALL 0x004028ba
00441232  8B F0                     MOV ESI,EAX
00441234  8B CE                     MOV ECX,ESI
00441236  E8 A5 31 FC FF            CALL 0x004043e0
0044123B  8B 16                     MOV EDX,dword ptr [ESI]
0044123D  8B CE                     MOV ECX,ESI
0044123F  89 45 A4                  MOV dword ptr [EBP + -0x5c],EAX
00441242  FF 52 78                  CALL dword ptr [EDX + 0x78]
00441245  8B D8                     MOV EBX,EAX
00441247  85 DB                     TEST EBX,EBX
00441249  7F 05                     JG 0x00441250
0044124B  BB 01 00 00 00            MOV EBX,0x1
LAB_00441250:
00441250  8B 06                     MOV EAX,dword ptr [ESI]
00441252  8B CE                     MOV ECX,ESI
00441254  FF 50 2C                  CALL dword ptr [EAX + 0x2c]
00441257  8B 04 85 9C 04 7E 00      MOV EAX,dword ptr [EAX*0x4 + 0x7e049c]
0044125E  8B 4D CA                  MOV ECX,dword ptr [EBP + -0x36]
00441261  0F AF 45 A4               IMUL EAX,dword ptr [EBP + -0x5c]
00441265  99                        CDQ
00441266  F7 FB                     IDIV EBX
00441268  8D 55 F4                  LEA EDX,[EBP + -0xc]
0044126B  52                        PUSH EDX
0044126C  03 C1                     ADD EAX,ECX
0044126E  89 45 F8                  MOV dword ptr [EBP + -0x8],EAX
00441271  8B 45 E8                  MOV EAX,dword ptr [EBP + -0x18]
00441274  50                        PUSH EAX
00441275  57                        PUSH EDI
00441276  E8 C5 CE 26 00            CALL 0x006ae140
0044127B  E9 83 01 00 00            JMP 0x00441403
LAB_00441280:
00441280  8B 7D C0                  MOV EDI,dword ptr [EBP + -0x40]
00441283  8B 5D E4                  MOV EBX,dword ptr [EBP + -0x1c]
00441286  E9 54 FF FF FF            JMP 0x004411df
LAB_0044128b:
0044128B  8D 58 FF                  LEA EBX,[EAX + -0x1]
0044128E  83 FB 01                  CMP EBX,0x1
00441291  7C 57                     JL 0x004412ea
LAB_00441293:
00441293  33 F6                     XOR ESI,ESI
00441295  85 DB                     TEST EBX,EBX
00441297  7E 4B                     JLE 0x004412e4
LAB_00441299:
00441299  8D 55 D0                  LEA EDX,[EBP + -0x30]
0044129C  52                        PUSH EDX
0044129D  8B D6                     MOV EDX,ESI
0044129F  E8 CC B9 26 00            CALL 0x006acc70
004412A4  8B 4D F4                  MOV ECX,dword ptr [EBP + -0xc]
004412A7  8D 7E 01                  LEA EDI,[ESI + 0x1]
004412AA  8D 45 A8                  LEA EAX,[EBP + -0x58]
004412AD  8B D7                     MOV EDX,EDI
004412AF  50                        PUSH EAX
004412B0  E8 BB B9 26 00            CALL 0x006acc70
004412B5  8B 4D D2                  MOV ECX,dword ptr [EBP + -0x2e]
004412B8  8B 45 AA                  MOV EAX,dword ptr [EBP + -0x56]
004412BB  3B C8                     CMP ECX,EAX
004412BD  7E 1C                     JLE 0x004412db
004412BF  8B 45 F4                  MOV EAX,dword ptr [EBP + -0xc]
004412C2  8D 55 A8                  LEA EDX,[EBP + -0x58]
004412C5  52                        PUSH EDX
004412C6  56                        PUSH ESI
004412C7  50                        PUSH EAX
004412C8  E8 73 CE 26 00            CALL 0x006ae140
004412CD  8B 55 F4                  MOV EDX,dword ptr [EBP + -0xc]
004412D0  8D 4D D0                  LEA ECX,[EBP + -0x30]
004412D3  51                        PUSH ECX
004412D4  57                        PUSH EDI
004412D5  52                        PUSH EDX
004412D6  E8 65 CE 26 00            CALL 0x006ae140
LAB_004412db:
004412DB  8B 4D F4                  MOV ECX,dword ptr [EBP + -0xc]
004412DE  8B F7                     MOV ESI,EDI
004412E0  3B F3                     CMP ESI,EBX
004412E2  7C B5                     JL 0x00441299
LAB_004412e4:
004412E4  4B                        DEC EBX
004412E5  83 FB 01                  CMP EBX,0x1
004412E8  7D A9                     JGE 0x00441293
LAB_004412ea:
004412EA  8D 45 D0                  LEA EAX,[EBP + -0x30]
004412ED  33 D2                     XOR EDX,EDX
004412EF  50                        PUSH EAX
004412F0  E8 7B B9 26 00            CALL 0x006acc70
004412F5  8B 4D D0                  MOV ECX,dword ptr [EBP + -0x30]
004412F8  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
004412FB  6A 01                     PUSH 0x1
004412FD  51                        PUSH ECX
004412FE  8B 4D C4                  MOV ECX,dword ptr [EBP + -0x3c]
00441301  52                        PUSH EDX
00441302  E8 B3 15 FC FF            CALL 0x004028ba
00441307  8B F0                     MOV ESI,EAX
00441309  8B CE                     MOV ECX,ESI
0044130B  E8 D0 30 FC FF            CALL 0x004043e0
00441310  8B D8                     MOV EBX,EAX
00441312  8B 06                     MOV EAX,dword ptr [ESI]
00441314  8B CE                     MOV ECX,ESI
00441316  FF 50 78                  CALL dword ptr [EAX + 0x78]
00441319  8B F8                     MOV EDI,EAX
0044131B  85 FF                     TEST EDI,EDI
0044131D  7F 05                     JG 0x00441324
0044131F  BF 01 00 00 00            MOV EDI,0x1
LAB_00441324:
00441324  8B 16                     MOV EDX,dword ptr [ESI]
00441326  8B CE                     MOV ECX,ESI
00441328  FF 52 2C                  CALL dword ptr [EDX + 0x2c]
0044132B  8B 04 85 9C 04 7E 00      MOV EAX,dword ptr [EAX*0x4 + 0x7e049c]
00441332  8B 4D D2                  MOV ECX,dword ptr [EBP + -0x2e]
00441335  0F AF C3                  IMUL EAX,EBX
00441338  99                        CDQ
00441339  F7 FF                     IDIV EDI
0044133B  33 F6                     XOR ESI,ESI
0044133D  03 C8                     ADD ECX,EAX
0044133F  89 45 90                  MOV dword ptr [EBP + -0x70],EAX
00441342  89 4D B4                  MOV dword ptr [EBP + -0x4c],ECX
00441345  8B 4D A0                  MOV ECX,dword ptr [EBP + -0x60]
00441348  B8 01 00 00 00            MOV EAX,0x1
0044134D  3B C8                     CMP ECX,EAX
0044134F  89 45 D8                  MOV dword ptr [EBP + -0x28],EAX
00441352  0F 8E 91 00 00 00         JLE 0x004413e9
LAB_00441358:
00441358  8B 4D F4                  MOV ECX,dword ptr [EBP + -0xc]
0044135B  8D 55 A8                  LEA EDX,[EBP + -0x58]
0044135E  52                        PUSH EDX
0044135F  8B 55 D8                  MOV EDX,dword ptr [EBP + -0x28]
00441362  E8 09 B9 26 00            CALL 0x006acc70
00441367  8B 45 A8                  MOV EAX,dword ptr [EBP + -0x58]
0044136A  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
0044136D  6A 01                     PUSH 0x1
0044136F  50                        PUSH EAX
00441370  51                        PUSH ECX
00441371  8B 4D C4                  MOV ECX,dword ptr [EBP + -0x3c]
00441374  E8 41 15 FC FF            CALL 0x004028ba
00441379  8B F8                     MOV EDI,EAX
0044137B  8B CF                     MOV ECX,EDI
0044137D  E8 5E 30 FC FF            CALL 0x004043e0
00441382  8B 17                     MOV EDX,dword ptr [EDI]
00441384  8B CF                     MOV ECX,EDI
00441386  89 45 A4                  MOV dword ptr [EBP + -0x5c],EAX
00441389  FF 52 78                  CALL dword ptr [EDX + 0x78]
0044138C  8B D8                     MOV EBX,EAX
0044138E  85 DB                     TEST EBX,EBX
00441390  7F 05                     JG 0x00441397
00441392  BB 01 00 00 00            MOV EBX,0x1
LAB_00441397:
00441397  8B 07                     MOV EAX,dword ptr [EDI]
00441399  8B CF                     MOV ECX,EDI
0044139B  FF 50 2C                  CALL dword ptr [EAX + 0x2c]
0044139E  8B 04 85 9C 04 7E 00      MOV EAX,dword ptr [EAX*0x4 + 0x7e049c]
004413A5  8B 7D B4                  MOV EDI,dword ptr [EBP + -0x4c]
004413A8  0F AF 45 A4               IMUL EAX,dword ptr [EBP + -0x5c]
004413AC  99                        CDQ
004413AD  F7 FB                     IDIV EBX
004413AF  8B 4D AA                  MOV ECX,dword ptr [EBP + -0x56]
004413B2  8B 5D D2                  MOV EBX,dword ptr [EBP + -0x2e]
004413B5  2B F1                     SUB ESI,ECX
004413B7  03 F3                     ADD ESI,EBX
004413B9  03 F8                     ADD EDI,EAX
004413BB  89 7D B4                  MOV dword ptr [EBP + -0x4c],EDI
004413BE  8B 7D 90                  MOV EDI,dword ptr [EBP + -0x70]
004413C1  03 F7                     ADD ESI,EDI
004413C3  85 F6                     TEST ESI,ESI
004413C5  7F 0A                     JG 0x004413d1
004413C7  8B 55 B4                  MOV EDX,dword ptr [EBP + -0x4c]
004413CA  2B D6                     SUB EDX,ESI
004413CC  33 F6                     XOR ESI,ESI
004413CE  89 55 B4                  MOV dword ptr [EBP + -0x4c],EDX
LAB_004413d1:
004413D1  89 45 90                  MOV dword ptr [EBP + -0x70],EAX
004413D4  8B 45 D8                  MOV EAX,dword ptr [EBP + -0x28]
004413D7  89 4D D2                  MOV dword ptr [EBP + -0x2e],ECX
004413DA  8B 4D A0                  MOV ECX,dword ptr [EBP + -0x60]
004413DD  40                        INC EAX
004413DE  3B C1                     CMP EAX,ECX
004413E0  89 45 D8                  MOV dword ptr [EBP + -0x28],EAX
004413E3  0F 8C 6F FF FF FF         JL 0x00441358
LAB_004413e9:
004413E9  8B 4D B4                  MOV ECX,dword ptr [EBP + -0x4c]
004413EC  8B 45 E8                  MOV EAX,dword ptr [EBP + -0x18]
004413EF  8D 55 F4                  LEA EDX,[EBP + -0xc]
004413F2  89 4D F8                  MOV dword ptr [EBP + -0x8],ECX
004413F5  8B 4D C0                  MOV ECX,dword ptr [EBP + -0x40]
004413F8  52                        PUSH EDX
004413F9  50                        PUSH EAX
004413FA  51                        PUSH ECX
004413FB  E8 40 CD 26 00            CALL 0x006ae140
00441400  8B 7D C0                  MOV EDI,dword ptr [EBP + -0x40]
LAB_00441403:
00441403  8B 5D E4                  MOV EBX,dword ptr [EBP + -0x1c]
LAB_00441406:
00441406  8B 55 E8                  MOV EDX,dword ptr [EBP + -0x18]
00441409  42                        INC EDX
0044140A  3B D3                     CMP EDX,EBX
0044140C  89 55 E8                  MOV dword ptr [EBP + -0x18],EDX
0044140F  0F 8C D7 FD FF FF         JL 0x004411ec
LAB_00441415:
00441415  8B 45 BC                  MOV EAX,dword ptr [EBP + -0x44]
00441418  C7 45 E8 00 00 00 00      MOV dword ptr [EBP + -0x18],0x0
0044141F  85 C0                     TEST EAX,EAX
00441421  0F 8E 3C 04 00 00         JLE 0x00441863
LAB_00441427:
00441427  8B 4D 10                  MOV ECX,dword ptr [EBP + 0x10]
0044142A  8D 55 C8                  LEA EDX,[EBP + -0x38]
0044142D  52                        PUSH EDX
0044142E  8B 55 E8                  MOV EDX,dword ptr [EBP + -0x18]
00441431  E8 3A B8 26 00            CALL 0x006acc70
00441436  33 F6                     XOR ESI,ESI
00441438  85 DB                     TEST EBX,EBX
0044143A  7E 74                     JLE 0x004414b0
LAB_0044143c:
0044143C  8B 55 E8                  MOV EDX,dword ptr [EBP + -0x18]
0044143F  8B 4D 8C                  MOV ECX,dword ptr [EBP + -0x74]
00441442  8D 45 B0                  LEA EAX,[EBP + -0x50]
00441445  50                        PUSH EAX
00441446  E8 25 B8 26 00            CALL 0x006acc70
0044144B  8D 4D CA                  LEA ECX,[EBP + -0x36]
0044144E  8B D6                     MOV EDX,ESI
00441450  51                        PUSH ECX
00441451  8B 4D B0                  MOV ECX,dword ptr [EBP + -0x50]
00441454  E8 17 B8 26 00            CALL 0x006acc70
00441459  8D 55 F4                  LEA EDX,[EBP + -0xc]
0044145C  8B CF                     MOV ECX,EDI
0044145E  52                        PUSH EDX
0044145F  8B D6                     MOV EDX,ESI
00441461  E8 0A B8 26 00            CALL 0x006acc70
00441466  83 7D CA FF               CMP dword ptr [EBP + -0x36],-0x1
0044146A  75 0D                     JNZ 0x00441479
0044146C  8D 45 F4                  LEA EAX,[EBP + -0xc]
0044146F  C7 45 FC 00 CA 9A 3B      MOV dword ptr [EBP + -0x4],0x3b9aca00
00441476  50                        PUSH EAX
00441477  EB 2B                     JMP 0x004414a4
LAB_00441479:
00441479  8B 45 F4                  MOV EAX,dword ptr [EBP + -0xc]
0044147C  85 C0                     TEST EAX,EAX
0044147E  75 0F                     JNZ 0x0044148f
00441480  6A 01                     PUSH 0x1
00441482  6A 06                     PUSH 0x6
00441484  6A 01                     PUSH 0x1
00441486  50                        PUSH EAX
00441487  E8 04 CE 26 00            CALL 0x006ae290
0044148C  89 45 F4                  MOV dword ptr [EBP + -0xc],EAX
LAB_0044148f:
0044148F  8D 4D C8                  LEA ECX,[EBP + -0x38]
00441492  51                        PUSH ECX
00441493  50                        PUSH EAX
00441494  E8 27 CD 26 00            CALL 0x006ae1c0
00441499  8D 55 F4                  LEA EDX,[EBP + -0xc]
0044149C  C7 45 FC 00 00 00 00      MOV dword ptr [EBP + -0x4],0x0
004414A3  52                        PUSH EDX
LAB_004414a4:
004414A4  56                        PUSH ESI
004414A5  57                        PUSH EDI
004414A6  E8 95 CC 26 00            CALL 0x006ae140
004414AB  46                        INC ESI
004414AC  3B F3                     CMP ESI,EBX
004414AE  7C 8C                     JL 0x0044143c
LAB_004414b0:
004414B0  33 D2                     XOR EDX,EDX
004414B2  85 DB                     TEST EBX,EBX
004414B4  89 55 D8                  MOV dword ptr [EBP + -0x28],EDX
004414B7  0F 8E 11 02 00 00         JLE 0x004416ce
LAB_004414bd:
004414BD  8D 45 F4                  LEA EAX,[EBP + -0xc]
004414C0  8B CF                     MOV ECX,EDI
004414C2  50                        PUSH EAX
004414C3  E8 A8 B7 26 00            CALL 0x006acc70
004414C8  81 7D FC 00 CA 9A 3B      CMP dword ptr [EBP + -0x4],0x3b9aca00
004414CF  0F 84 EA 01 00 00         JZ 0x004416bf
004414D5  8B 4D F4                  MOV ECX,dword ptr [EBP + -0xc]
004414D8  8B 41 0C                  MOV EAX,dword ptr [ECX + 0xc]
004414DB  83 F8 01                  CMP EAX,0x1
004414DE  89 45 A0                  MOV dword ptr [EBP + -0x60],EAX
004414E1  75 5B                     JNZ 0x0044153e
004414E3  8D 55 C8                  LEA EDX,[EBP + -0x38]
004414E6  52                        PUSH EDX
004414E7  33 D2                     XOR EDX,EDX
004414E9  E8 82 B7 26 00            CALL 0x006acc70
004414EE  8B 45 C8                  MOV EAX,dword ptr [EBP + -0x38]
004414F1  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
004414F4  6A 01                     PUSH 0x1
004414F6  50                        PUSH EAX
004414F7  51                        PUSH ECX
004414F8  8B 4D C4                  MOV ECX,dword ptr [EBP + -0x3c]
004414FB  E8 BA 13 FC FF            CALL 0x004028ba
00441500  8B F0                     MOV ESI,EAX
00441502  8B CE                     MOV ECX,ESI
00441504  E8 D7 2E FC FF            CALL 0x004043e0
00441509  8B 16                     MOV EDX,dword ptr [ESI]
0044150B  8B CE                     MOV ECX,ESI
0044150D  8B D8                     MOV EBX,EAX
0044150F  FF 52 78                  CALL dword ptr [EDX + 0x78]
00441512  8B F8                     MOV EDI,EAX
00441514  85 FF                     TEST EDI,EDI
00441516  7F 05                     JG 0x0044151d
00441518  BF 01 00 00 00            MOV EDI,0x1
LAB_0044151d:
0044151D  8B 06                     MOV EAX,dword ptr [ESI]
0044151F  8B CE                     MOV ECX,ESI
00441521  FF 50 2C                  CALL dword ptr [EAX + 0x2c]
00441524  8B 04 85 9C 04 7E 00      MOV EAX,dword ptr [EAX*0x4 + 0x7e049c]
0044152B  8B 4D CA                  MOV ECX,dword ptr [EBP + -0x36]
0044152E  0F AF C3                  IMUL EAX,EBX
00441531  99                        CDQ
00441532  F7 FF                     IDIV EDI
00441534  03 C1                     ADD EAX,ECX
00441536  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
00441539  E9 6A 01 00 00            JMP 0x004416a8
LAB_0044153e:
0044153E  8B 55 A0                  MOV EDX,dword ptr [EBP + -0x60]
00441541  8D 5A FF                  LEA EBX,[EDX + -0x1]
00441544  83 FB 01                  CMP EBX,0x1
00441547  7C 5A                     JL 0x004415a3
LAB_00441549:
00441549  33 F6                     XOR ESI,ESI
0044154B  85 DB                     TEST EBX,EBX
0044154D  7E 4B                     JLE 0x0044159a
LAB_0044154f:
0044154F  8B 4D F4                  MOV ECX,dword ptr [EBP + -0xc]
00441552  8D 45 D0                  LEA EAX,[EBP + -0x30]
00441555  50                        PUSH EAX
00441556  8B D6                     MOV EDX,ESI
00441558  E8 13 B7 26 00            CALL 0x006acc70
0044155D  8D 4D A8                  LEA ECX,[EBP + -0x58]
00441560  8D 7E 01                  LEA EDI,[ESI + 0x1]
00441563  51                        PUSH ECX
00441564  8B 4D F4                  MOV ECX,dword ptr [EBP + -0xc]
00441567  8B D7                     MOV EDX,EDI
00441569  E8 02 B7 26 00            CALL 0x006acc70
0044156E  8B 55 D2                  MOV EDX,dword ptr [EBP + -0x2e]
00441571  8B 45 AA                  MOV EAX,dword ptr [EBP + -0x56]
00441574  3B D0                     CMP EDX,EAX
00441576  7E 1C                     JLE 0x00441594
00441578  8B 4D F4                  MOV ECX,dword ptr [EBP + -0xc]
0044157B  8D 45 A8                  LEA EAX,[EBP + -0x58]
0044157E  50                        PUSH EAX
0044157F  56                        PUSH ESI
00441580  51                        PUSH ECX
00441581  E8 BA CB 26 00            CALL 0x006ae140
00441586  8B 45 F4                  MOV EAX,dword ptr [EBP + -0xc]
00441589  8D 55 D0                  LEA EDX,[EBP + -0x30]
0044158C  52                        PUSH EDX
0044158D  57                        PUSH EDI
0044158E  50                        PUSH EAX
0044158F  E8 AC CB 26 00            CALL 0x006ae140
LAB_00441594:
00441594  8B F7                     MOV ESI,EDI
00441596  3B F3                     CMP ESI,EBX
00441598  7C B5                     JL 0x0044154f
LAB_0044159a:
0044159A  4B                        DEC EBX
0044159B  83 FB 01                  CMP EBX,0x1
0044159E  7D A9                     JGE 0x00441549
004415A0  8B 4D F4                  MOV ECX,dword ptr [EBP + -0xc]
LAB_004415a3:
004415A3  8D 55 D0                  LEA EDX,[EBP + -0x30]
004415A6  52                        PUSH EDX
004415A7  33 D2                     XOR EDX,EDX
004415A9  E8 C2 B6 26 00            CALL 0x006acc70
004415AE  8B 45 D0                  MOV EAX,dword ptr [EBP + -0x30]
004415B1  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
004415B4  6A 01                     PUSH 0x1
004415B6  50                        PUSH EAX
004415B7  51                        PUSH ECX
004415B8  8B 4D C4                  MOV ECX,dword ptr [EBP + -0x3c]
004415BB  E8 FA 12 FC FF            CALL 0x004028ba
004415C0  8B F0                     MOV ESI,EAX
004415C2  8B CE                     MOV ECX,ESI
004415C4  E8 17 2E FC FF            CALL 0x004043e0
004415C9  8B 16                     MOV EDX,dword ptr [ESI]
004415CB  8B CE                     MOV ECX,ESI
004415CD  8B D8                     MOV EBX,EAX
004415CF  FF 52 78                  CALL dword ptr [EDX + 0x78]
004415D2  8B F8                     MOV EDI,EAX
004415D4  85 FF                     TEST EDI,EDI
004415D6  7F 05                     JG 0x004415dd
004415D8  BF 01 00 00 00            MOV EDI,0x1
LAB_004415dd:
004415DD  8B 06                     MOV EAX,dword ptr [ESI]
004415DF  8B CE                     MOV ECX,ESI
004415E1  FF 50 2C                  CALL dword ptr [EAX + 0x2c]
004415E4  8B 04 85 9C 04 7E 00      MOV EAX,dword ptr [EAX*0x4 + 0x7e049c]
004415EB  8B 4D D2                  MOV ECX,dword ptr [EBP + -0x2e]
004415EE  0F AF C3                  IMUL EAX,EBX
004415F1  99                        CDQ
004415F2  F7 FF                     IDIV EDI
004415F4  33 F6                     XOR ESI,ESI
004415F6  03 C8                     ADD ECX,EAX
004415F8  89 45 90                  MOV dword ptr [EBP + -0x70],EAX
004415FB  89 4D B4                  MOV dword ptr [EBP + -0x4c],ECX
004415FE  8B 4D A0                  MOV ECX,dword ptr [EBP + -0x60]
00441601  B8 01 00 00 00            MOV EAX,0x1
00441606  3B C8                     CMP ECX,EAX
00441608  89 45 98                  MOV dword ptr [EBP + -0x68],EAX
0044160B  0F 8E 91 00 00 00         JLE 0x004416a2
LAB_00441611:
00441611  8B 4D F4                  MOV ECX,dword ptr [EBP + -0xc]
00441614  8D 55 A8                  LEA EDX,[EBP + -0x58]
00441617  52                        PUSH EDX
00441618  8B 55 98                  MOV EDX,dword ptr [EBP + -0x68]
0044161B  E8 50 B6 26 00            CALL 0x006acc70
00441620  8B 45 A8                  MOV EAX,dword ptr [EBP + -0x58]
00441623  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
00441626  6A 01                     PUSH 0x1
00441628  50                        PUSH EAX
00441629  51                        PUSH ECX
0044162A  8B 4D C4                  MOV ECX,dword ptr [EBP + -0x3c]
0044162D  E8 88 12 FC FF            CALL 0x004028ba
00441632  8B F8                     MOV EDI,EAX
00441634  8B CF                     MOV ECX,EDI
00441636  E8 A5 2D FC FF            CALL 0x004043e0
0044163B  8B 17                     MOV EDX,dword ptr [EDI]
0044163D  8B CF                     MOV ECX,EDI
0044163F  89 45 A4                  MOV dword ptr [EBP + -0x5c],EAX
00441642  FF 52 78                  CALL dword ptr [EDX + 0x78]
00441645  8B D8                     MOV EBX,EAX
00441647  85 DB                     TEST EBX,EBX
00441649  7F 05                     JG 0x00441650
0044164B  BB 01 00 00 00            MOV EBX,0x1
LAB_00441650:
00441650  8B 07                     MOV EAX,dword ptr [EDI]
00441652  8B CF                     MOV ECX,EDI
00441654  FF 50 2C                  CALL dword ptr [EAX + 0x2c]
00441657  8B 04 85 9C 04 7E 00      MOV EAX,dword ptr [EAX*0x4 + 0x7e049c]
0044165E  8B 7D B4                  MOV EDI,dword ptr [EBP + -0x4c]
00441661  0F AF 45 A4               IMUL EAX,dword ptr [EBP + -0x5c]
00441665  99                        CDQ
00441666  F7 FB                     IDIV EBX
00441668  8B 4D AA                  MOV ECX,dword ptr [EBP + -0x56]
0044166B  8B 5D D2                  MOV EBX,dword ptr [EBP + -0x2e]
0044166E  2B F1                     SUB ESI,ECX
00441670  03 F3                     ADD ESI,EBX
00441672  03 F8                     ADD EDI,EAX
00441674  89 7D B4                  MOV dword ptr [EBP + -0x4c],EDI
00441677  8B 7D 90                  MOV EDI,dword ptr [EBP + -0x70]
0044167A  03 F7                     ADD ESI,EDI
0044167C  85 F6                     TEST ESI,ESI
0044167E  7F 0A                     JG 0x0044168a
00441680  8B 55 B4                  MOV EDX,dword ptr [EBP + -0x4c]
00441683  2B D6                     SUB EDX,ESI
00441685  33 F6                     XOR ESI,ESI
00441687  89 55 B4                  MOV dword ptr [EBP + -0x4c],EDX
LAB_0044168a:
0044168A  89 45 90                  MOV dword ptr [EBP + -0x70],EAX
0044168D  8B 45 98                  MOV EAX,dword ptr [EBP + -0x68]
00441690  89 4D D2                  MOV dword ptr [EBP + -0x2e],ECX
00441693  8B 4D A0                  MOV ECX,dword ptr [EBP + -0x60]
00441696  40                        INC EAX
00441697  3B C1                     CMP EAX,ECX
00441699  89 45 98                  MOV dword ptr [EBP + -0x68],EAX
0044169C  0F 8C 6F FF FF FF         JL 0x00441611
LAB_004416a2:
004416A2  8B 4D B4                  MOV ECX,dword ptr [EBP + -0x4c]
004416A5  89 4D FC                  MOV dword ptr [EBP + -0x4],ECX
LAB_004416a8:
004416A8  8B 45 D8                  MOV EAX,dword ptr [EBP + -0x28]
004416AB  8B 4D C0                  MOV ECX,dword ptr [EBP + -0x40]
004416AE  8D 55 F4                  LEA EDX,[EBP + -0xc]
004416B1  52                        PUSH EDX
004416B2  50                        PUSH EAX
004416B3  51                        PUSH ECX
004416B4  E8 87 CA 26 00            CALL 0x006ae140
004416B9  8B 7D C0                  MOV EDI,dword ptr [EBP + -0x40]
004416BC  8B 5D E4                  MOV EBX,dword ptr [EBP + -0x1c]
LAB_004416bf:
004416BF  8B 55 D8                  MOV EDX,dword ptr [EBP + -0x28]
004416C2  42                        INC EDX
004416C3  3B D3                     CMP EDX,EBX
004416C5  89 55 D8                  MOV dword ptr [EBP + -0x28],EDX
004416C8  0F 8C EF FD FF FF         JL 0x004414bd
LAB_004416ce:
004416CE  8B 45 94                  MOV EAX,dword ptr [EBP + -0x6c]
004416D1  85 C0                     TEST EAX,EAX
004416D3  75 10                     JNZ 0x004416e5
004416D5  6A 01                     PUSH 0x1
004416D7  6A 04                     PUSH 0x4
004416D9  6A 00                     PUSH 0x0
004416DB  6A 00                     PUSH 0x0
004416DD  E8 AE CB 26 00            CALL 0x006ae290
004416E2  89 45 94                  MOV dword ptr [EBP + -0x6c],EAX
LAB_004416e5:
004416E5  8B 4D 10                  MOV ECX,dword ptr [EBP + 0x10]
004416E8  8D 55 B8                  LEA EDX,[EBP + -0x48]
004416EB  52                        PUSH EDX
004416EC  8B 55 E8                  MOV EDX,dword ptr [EBP + -0x18]
004416EF  E8 7C B5 26 00            CALL 0x006acc70
004416F4  33 F6                     XOR ESI,ESI
004416F6  85 DB                     TEST EBX,EBX
004416F8  7E 1B                     JLE 0x00441715
LAB_004416fa:
004416FA  8D 45 F4                  LEA EAX,[EBP + -0xc]
004416FD  8B D6                     MOV EDX,ESI
004416FF  50                        PUSH EAX
00441700  8B CF                     MOV ECX,EDI
00441702  E8 69 B5 26 00            CALL 0x006acc70
00441707  81 7D FC 00 CA 9A 3B      CMP dword ptr [EBP + -0x4],0x3b9aca00
0044170E  75 05                     JNZ 0x00441715
00441710  46                        INC ESI
00441711  3B F3                     CMP ESI,EBX
00441713  7C E5                     JL 0x004416fa
LAB_00441715:
00441715  3B F3                     CMP ESI,EBX
00441717  75 18                     JNZ 0x00441731
00441719  8B 55 94                  MOV EDX,dword ptr [EBP + -0x6c]
0044171C  8D 4D B8                  LEA ECX,[EBP + -0x48]
0044171F  51                        PUSH ECX
00441720  52                        PUSH EDX
00441721  66 C7 45 BA FF FF         MOV word ptr [EBP + -0x46],0xffff
00441727  E8 94 CA 26 00            CALL 0x006ae1c0
0044172C  E9 1D 01 00 00            JMP 0x0044184e
LAB_00441731:
00441731  4B                        DEC EBX
00441732  3B F3                     CMP ESI,EBX
00441734  75 31                     JNZ 0x00441767
00441736  8B 4D 0C                  MOV ECX,dword ptr [EBP + 0xc]
00441739  8D 45 BA                  LEA EAX,[EBP + -0x46]
0044173C  50                        PUSH EAX
0044173D  8B D6                     MOV EDX,ESI
0044173F  E8 2C B5 26 00            CALL 0x006acc70
00441744  8B 55 94                  MOV EDX,dword ptr [EBP + -0x6c]
00441747  8D 4D B8                  LEA ECX,[EBP + -0x48]
0044174A  51                        PUSH ECX
0044174B  52                        PUSH EDX
0044174C  E8 6F CA 26 00            CALL 0x006ae1c0
00441751  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
00441754  8D 4D F4                  LEA ECX,[EBP + -0xc]
00441757  51                        PUSH ECX
00441758  56                        PUSH ESI
00441759  57                        PUSH EDI
0044175A  89 45 F8                  MOV dword ptr [EBP + -0x8],EAX
0044175D  E8 DE C9 26 00            CALL 0x006ae140
00441762  E9 E7 00 00 00            JMP 0x0044184e
LAB_00441767:
00441767  8B 45 E4                  MOV EAX,dword ptr [EBP + -0x1c]
0044176A  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
0044176D  8B DE                     MOV EBX,ESI
0044176F  46                        INC ESI
00441770  3B F0                     CMP ESI,EAX
00441772  89 5D A4                  MOV dword ptr [EBP + -0x5c],EBX
00441775  89 55 98                  MOV dword ptr [EBP + -0x68],EDX
00441778  7D 2C                     JGE 0x004417a6
LAB_0044177a:
0044177A  8D 45 F4                  LEA EAX,[EBP + -0xc]
0044177D  8B D6                     MOV EDX,ESI
0044177F  50                        PUSH EAX
00441780  8B CF                     MOV ECX,EDI
00441782  E8 E9 B4 26 00            CALL 0x006acc70
00441787  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
0044178A  3D 00 CA 9A 3B            CMP EAX,0x3b9aca00
0044178F  74 0A                     JZ 0x0044179b
00441791  3B 45 98                  CMP EAX,dword ptr [EBP + -0x68]
00441794  7D 05                     JGE 0x0044179b
00441796  89 45 98                  MOV dword ptr [EBP + -0x68],EAX
00441799  8B DE                     MOV EBX,ESI
LAB_0044179b:
0044179B  8B 45 E4                  MOV EAX,dword ptr [EBP + -0x1c]
0044179E  46                        INC ESI
0044179F  3B F0                     CMP ESI,EAX
004417A1  7C D7                     JL 0x0044177a
004417A3  89 5D A4                  MOV dword ptr [EBP + -0x5c],EBX
LAB_004417a6:
004417A6  8D 4D BA                  LEA ECX,[EBP + -0x46]
004417A9  8B D3                     MOV EDX,EBX
004417AB  51                        PUSH ECX
004417AC  8B 4D 0C                  MOV ECX,dword ptr [EBP + 0xc]
004417AF  E8 BC B4 26 00            CALL 0x006acc70
004417B4  8B 45 94                  MOV EAX,dword ptr [EBP + -0x6c]
004417B7  8D 55 B8                  LEA EDX,[EBP + -0x48]
004417BA  52                        PUSH EDX
004417BB  50                        PUSH EAX
004417BC  E8 FF C9 26 00            CALL 0x006ae1c0
004417C1  8D 4D F4                  LEA ECX,[EBP + -0xc]
004417C4  8B D3                     MOV EDX,EBX
004417C6  51                        PUSH ECX
004417C7  8B CF                     MOV ECX,EDI
004417C9  E8 A2 B4 26 00            CALL 0x006acc70
004417CE  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
004417D1  8D 45 F4                  LEA EAX,[EBP + -0xc]
004417D4  50                        PUSH EAX
004417D5  53                        PUSH EBX
004417D6  57                        PUSH EDI
004417D7  89 55 F8                  MOV dword ptr [EBP + -0x8],EDX
004417DA  E8 61 C9 26 00            CALL 0x006ae140
004417DF  8B 45 E4                  MOV EAX,dword ptr [EBP + -0x1c]
004417E2  33 D2                     XOR EDX,EDX
004417E4  85 C0                     TEST EAX,EAX
004417E6  89 55 D8                  MOV dword ptr [EBP + -0x28],EDX
004417E9  7E 63                     JLE 0x0044184e
004417EB  EB 03                     JMP 0x004417f0
LAB_004417ed:
004417ED  8B 5D A4                  MOV EBX,dword ptr [EBP + -0x5c]
LAB_004417f0:
004417F0  3B D3                     CMP EDX,EBX
004417F2  74 4C                     JZ 0x00441840
004417F4  8D 4D F4                  LEA ECX,[EBP + -0xc]
004417F7  51                        PUSH ECX
004417F8  8B CF                     MOV ECX,EDI
004417FA  E8 71 B4 26 00            CALL 0x006acc70
004417FF  81 7D FC 00 CA 9A 3B      CMP dword ptr [EBP + -0x4],0x3b9aca00
00441806  74 38                     JZ 0x00441840
00441808  8B 55 F4                  MOV EDX,dword ptr [EBP + -0xc]
0044180B  33 F6                     XOR ESI,ESI
0044180D  8B 5A 0C                  MOV EBX,dword ptr [EDX + 0xc]
00441810  85 DB                     TEST EBX,EBX
00441812  7E 2C                     JLE 0x00441840
LAB_00441814:
00441814  8B 4D F4                  MOV ECX,dword ptr [EBP + -0xc]
00441817  8D 45 C8                  LEA EAX,[EBP + -0x38]
0044181A  50                        PUSH EAX
0044181B  8B D6                     MOV EDX,ESI
0044181D  E8 4E B4 26 00            CALL 0x006acc70
00441822  66 8B 4D C8               MOV CX,word ptr [EBP + -0x38]
00441826  66 3B 4D B8               CMP CX,word ptr [EBP + -0x48]
0044182A  74 07                     JZ 0x00441833
0044182C  46                        INC ESI
0044182D  3B F3                     CMP ESI,EBX
0044182F  7C E3                     JL 0x00441814
00441831  EB 0A                     JMP 0x0044183d
LAB_00441833:
00441833  8B 55 F4                  MOV EDX,dword ptr [EBP + -0xc]
00441836  56                        PUSH ESI
00441837  52                        PUSH EDX
00441838  E8 33 F4 26 00            CALL 0x006b0c70
LAB_0044183d:
0044183D  8B 7D C0                  MOV EDI,dword ptr [EBP + -0x40]
LAB_00441840:
00441840  8B 55 D8                  MOV EDX,dword ptr [EBP + -0x28]
00441843  8B 45 E4                  MOV EAX,dword ptr [EBP + -0x1c]
00441846  42                        INC EDX
00441847  3B D0                     CMP EDX,EAX
00441849  89 55 D8                  MOV dword ptr [EBP + -0x28],EDX
0044184C  7C 9F                     JL 0x004417ed
LAB_0044184e:
0044184E  8B 45 E8                  MOV EAX,dword ptr [EBP + -0x18]
00441851  8B 4D BC                  MOV ECX,dword ptr [EBP + -0x44]
00441854  8B 5D E4                  MOV EBX,dword ptr [EBP + -0x1c]
00441857  40                        INC EAX
00441858  3B C1                     CMP EAX,ECX
0044185A  89 45 E8                  MOV dword ptr [EBP + -0x18],EAX
0044185D  0F 8C C4 FB FF FF         JL 0x00441427
LAB_00441863:
00441863  33 F6                     XOR ESI,ESI
00441865  85 DB                     TEST EBX,EBX
00441867  7E 1F                     JLE 0x00441888
LAB_00441869:
00441869  8D 45 F4                  LEA EAX,[EBP + -0xc]
0044186C  8B D6                     MOV EDX,ESI
0044186E  50                        PUSH EAX
0044186F  8B CF                     MOV ECX,EDI
00441871  E8 FA B3 26 00            CALL 0x006acc70
00441876  8B 45 F4                  MOV EAX,dword ptr [EBP + -0xc]
00441879  85 C0                     TEST EAX,EAX
0044187B  74 06                     JZ 0x00441883
0044187D  50                        PUSH EAX
0044187E  E8 8D C8 26 00            CALL 0x006ae110
LAB_00441883:
00441883  46                        INC ESI
00441884  3B F3                     CMP ESI,EBX
00441886  7C E1                     JL 0x00441869
LAB_00441888:
00441888  57                        PUSH EDI
00441889  E8 82 C8 26 00            CALL 0x006ae110
0044188E  8B 5D BC                  MOV EBX,dword ptr [EBP + -0x44]
00441891  8B 7D 8C                  MOV EDI,dword ptr [EBP + -0x74]
00441894  33 F6                     XOR ESI,ESI
00441896  85 DB                     TEST EBX,EBX
00441898  7E 1F                     JLE 0x004418b9
LAB_0044189a:
0044189A  8D 4D B0                  LEA ECX,[EBP + -0x50]
0044189D  8B D6                     MOV EDX,ESI
0044189F  51                        PUSH ECX
004418A0  8B CF                     MOV ECX,EDI
004418A2  E8 C9 B3 26 00            CALL 0x006acc70
004418A7  8B 45 B0                  MOV EAX,dword ptr [EBP + -0x50]
004418AA  85 C0                     TEST EAX,EAX
004418AC  74 06                     JZ 0x004418b4
004418AE  50                        PUSH EAX
004418AF  E8 5C C8 26 00            CALL 0x006ae110
LAB_004418b4:
004418B4  46                        INC ESI
004418B5  3B F3                     CMP ESI,EBX
004418B7  7C E1                     JL 0x0044189a
LAB_004418b9:
004418B9  57                        PUSH EDI
004418BA  E8 51 C8 26 00            CALL 0x006ae110
004418BF  8B 95 3C FF FF FF         MOV EDX,dword ptr [EBP + 0xffffff3c]
004418C5  8B 45 94                  MOV EAX,dword ptr [EBP + -0x6c]
004418C8  89 15 F8 8D 85 00         MOV dword ptr [0x00858df8],EDX
004418CE  5F                        POP EDI
004418CF  5E                        POP ESI
004418D0  5B                        POP EBX
004418D1  8B E5                     MOV ESP,EBP
004418D3  5D                        POP EBP
004418D4  C2 0C 00                  RET 0xc
LAB_004418d7:
004418D7  8B 85 3C FF FF FF         MOV EAX,dword ptr [EBP + 0xffffff3c]
004418DD  81 FE 09 00 FE AF         CMP ESI,0xaffe0009
004418E3  A3 F8 8D 85 00            MOV [0x00858df8],EAX
004418E8  74 36                     JZ 0x00441920
004418EA  68 40 80 7A 00            PUSH 0x7a8040
004418EF  68 CC 4C 7A 00            PUSH 0x7a4ccc
004418F4  56                        PUSH ESI
004418F5  6A 00                     PUSH 0x0
004418F7  68 4B 23 00 00            PUSH 0x234b
004418FC  68 04 60 7A 00            PUSH 0x7a6004
00441901  E8 CA BB 26 00            CALL 0x006ad4d0
00441906  83 C4 18                  ADD ESP,0x18
00441909  85 C0                     TEST EAX,EAX
0044190B  74 01                     JZ 0x0044190e
0044190D  CC                        INT3
LAB_0044190e:
0044190E  68 4C 23 00 00            PUSH 0x234c
00441913  68 04 60 7A 00            PUSH 0x7a6004
00441918  6A 00                     PUSH 0x0
0044191A  56                        PUSH ESI
0044191B  E8 20 45 26 00            CALL 0x006a5e40
LAB_00441920:
00441920  8B 45 94                  MOV EAX,dword ptr [EBP + -0x6c]
00441923  5F                        POP EDI
00441924  5E                        POP ESI
00441925  5B                        POP EBX
00441926  8B E5                     MOV ESP,EBP
00441928  5D                        POP EBP
00441929  C2 0C 00                  RET 0xc
