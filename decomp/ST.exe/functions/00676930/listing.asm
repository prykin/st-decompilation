FUN_00676930:
00676930  55                        PUSH EBP
00676931  8B EC                     MOV EBP,ESP
00676933  81 EC 94 02 00 00         SUB ESP,0x294
00676939  A1 74 A1 7F 00            MOV EAX,[0x007fa174]
0067693E  85 C0                     TEST EAX,EAX
00676940  0F 84 50 02 00 00         JZ 0x00676b96
00676946  53                        PUSH EBX
00676947  56                        PUSH ESI
00676948  57                        PUSH EDI
00676949  B9 08 00 00 00            MOV ECX,0x8
0067694E  BE 47 C9 80 00            MOV ESI,0x80c947
00676953  8D BD A4 FE FF FF         LEA EDI,[EBP + 0xfffffea4]
00676959  F3 A5                     MOVSD.REP ES:EDI,ESI
0067695B  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
0067695E  6A 00                     PUSH 0x0
00676960  68 3E C8 80 00            PUSH 0x80c83e
00676965  51                        PUSH ECX
00676966  8B C8                     MOV ECX,EAX
00676968  E8 DB D6 D8 FF            CALL 0x00404048
0067696D  C7 45 08 00 00 00 00      MOV dword ptr [EBP + 0x8],0x0
00676974  C7 45 FC 47 C9 80 00      MOV dword ptr [EBP + -0x4],0x80c947
0067697B  BB CD C8 80 00            MOV EBX,0x80c8cd
LAB_00676980:
00676980  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
00676983  8A 82 3F C8 80 00         MOV AL,byte ptr [EDX + 0x80c83f]
00676989  3C 08                     CMP AL,0x8
0067698B  0F 83 E3 01 00 00         JNC 0x00676b74
00676991  8B 0D 74 A1 7F 00         MOV ECX,dword ptr [0x007fa174]
00676997  50                        PUSH EAX
00676998  8D 85 6C FD FF FF         LEA EAX,[EBP + 0xfffffd6c]
0067699E  50                        PUSH EAX
0067699F  E8 40 DB D8 FF            CALL 0x004044e4
006769A4  B9 4E 00 00 00            MOV ECX,0x4e
006769A9  8B F0                     MOV ESI,EAX
006769AB  8D BD C4 FE FF FF         LEA EDI,[EBP + 0xfffffec4]
006769B1  F3 A5                     MOVSD.REP ES:EDI,ESI
006769B3  8B 8D 48 FF FF FF         MOV ECX,dword ptr [EBP + 0xffffff48]
006769B9  8B 95 58 FF FF FF         MOV EDX,dword ptr [EBP + 0xffffff58]
006769BF  8B 85 38 FF FF FF         MOV EAX,dword ptr [EBP + 0xffffff38]
006769C5  8B BD 28 FF FF FF         MOV EDI,dword ptr [EBP + 0xffffff28]
006769CB  8B B5 18 FF FF FF         MOV ESI,dword ptr [EBP + 0xffffff18]
006769D1  03 D1                     ADD EDX,ECX
006769D3  8B 8D 08 FF FF FF         MOV ECX,dword ptr [EBP + 0xffffff08]
006769D9  03 D0                     ADD EDX,EAX
006769DB  8B 85 F8 FE FF FF         MOV EAX,dword ptr [EBP + 0xfffffef8]
006769E1  03 D7                     ADD EDX,EDI
006769E3  8B BD E8 FE FF FF         MOV EDI,dword ptr [EBP + 0xfffffee8]
006769E9  03 D6                     ADD EDX,ESI
006769EB  8B B5 3C FF FF FF         MOV ESI,dword ptr [EBP + 0xffffff3c]
006769F1  03 D1                     ADD EDX,ECX
006769F3  8B 8D 5C FF FF FF         MOV ECX,dword ptr [EBP + 0xffffff5c]
006769F9  03 D0                     ADD EDX,EAX
006769FB  8B 85 4C FF FF FF         MOV EAX,dword ptr [EBP + 0xffffff4c]
00676A01  03 D7                     ADD EDX,EDI
00676A03  8B BD 0C FF FF FF         MOV EDI,dword ptr [EBP + 0xffffff0c]
00676A09  03 C8                     ADD ECX,EAX
00676A0B  8B 85 1C FF FF FF         MOV EAX,dword ptr [EBP + 0xffffff1c]
00676A11  66 89 53 FC               MOV word ptr [EBX + -0x4],DX
00676A15  8B 95 2C FF FF FF         MOV EDX,dword ptr [EBP + 0xffffff2c]
00676A1B  03 CE                     ADD ECX,ESI
00676A1D  8B B5 FC FE FF FF         MOV ESI,dword ptr [EBP + 0xfffffefc]
00676A23  03 CA                     ADD ECX,EDX
00676A25  8B 95 EC FE FF FF         MOV EDX,dword ptr [EBP + 0xfffffeec]
00676A2B  03 C8                     ADD ECX,EAX
00676A2D  8B 85 60 FF FF FF         MOV EAX,dword ptr [EBP + 0xffffff60]
00676A33  03 CF                     ADD ECX,EDI
00676A35  8B BD 30 FF FF FF         MOV EDI,dword ptr [EBP + 0xffffff30]
00676A3B  03 CE                     ADD ECX,ESI
00676A3D  8B B5 20 FF FF FF         MOV ESI,dword ptr [EBP + 0xffffff20]
00676A43  03 CA                     ADD ECX,EDX
00676A45  8B 95 50 FF FF FF         MOV EDX,dword ptr [EBP + 0xffffff50]
00676A4B  66 89 4B FE               MOV word ptr [EBX + -0x2],CX
00676A4F  8B 8D 40 FF FF FF         MOV ECX,dword ptr [EBP + 0xffffff40]
00676A55  03 C2                     ADD EAX,EDX
00676A57  8B 95 10 FF FF FF         MOV EDX,dword ptr [EBP + 0xffffff10]
00676A5D  03 C1                     ADD EAX,ECX
00676A5F  8B 8D 00 FF FF FF         MOV ECX,dword ptr [EBP + 0xffffff00]
00676A65  03 C7                     ADD EAX,EDI
00676A67  8B BD F0 FE FF FF         MOV EDI,dword ptr [EBP + 0xfffffef0]
00676A6D  03 C6                     ADD EAX,ESI
00676A6F  8B 75 C8                  MOV ESI,dword ptr [EBP + -0x38]
00676A72  03 C2                     ADD EAX,EDX
00676A74  8B 55 E8                  MOV EDX,dword ptr [EBP + -0x18]
00676A77  03 C1                     ADD EAX,ECX
00676A79  8B 4D D8                  MOV ECX,dword ptr [EBP + -0x28]
00676A7C  03 C7                     ADD EAX,EDI
00676A7E  8B 7D 98                  MOV EDI,dword ptr [EBP + -0x68]
00676A81  03 D1                     ADD EDX,ECX
00676A83  8B 4D B8                  MOV ECX,dword ptr [EBP + -0x48]
00676A86  03 D6                     ADD EDX,ESI
00676A88  8B 75 88                  MOV ESI,dword ptr [EBP + -0x78]
00676A8B  66 89 03                  MOV word ptr [EBX],AX
00676A8E  8B 45 A8                  MOV EAX,dword ptr [EBP + -0x58]
00676A91  03 D1                     ADD EDX,ECX
00676A93  8B 8D 78 FF FF FF         MOV ECX,dword ptr [EBP + 0xffffff78]
00676A99  03 D0                     ADD EDX,EAX
00676A9B  8B 85 68 FF FF FF         MOV EAX,dword ptr [EBP + 0xffffff68]
00676AA1  03 D7                     ADD EDX,EDI
00676AA3  8B 7D CC                  MOV EDI,dword ptr [EBP + -0x34]
00676AA6  03 D6                     ADD EDX,ESI
00676AA8  8B 75 BC                  MOV ESI,dword ptr [EBP + -0x44]
00676AAB  03 D1                     ADD EDX,ECX
00676AAD  8B 4D EC                  MOV ECX,dword ptr [EBP + -0x14]
00676AB0  03 D0                     ADD EDX,EAX
00676AB2  8B 45 DC                  MOV EAX,dword ptr [EBP + -0x24]
00676AB5  66 89 53 04               MOV word ptr [EBX + 0x4],DX
00676AB9  03 C8                     ADD ECX,EAX
00676ABB  03 CF                     ADD ECX,EDI
00676ABD  8B 55 AC                  MOV EDX,dword ptr [EBP + -0x54]
00676AC0  8B 45 9C                  MOV EAX,dword ptr [EBP + -0x64]
00676AC3  8B 7D 8C                  MOV EDI,dword ptr [EBP + -0x74]
00676AC6  03 CE                     ADD ECX,ESI
00676AC8  8B B5 7C FF FF FF         MOV ESI,dword ptr [EBP + 0xffffff7c]
00676ACE  03 CA                     ADD ECX,EDX
00676AD0  8B 95 6C FF FF FF         MOV EDX,dword ptr [EBP + 0xffffff6c]
00676AD6  03 C8                     ADD ECX,EAX
00676AD8  8B 45 F0                  MOV EAX,dword ptr [EBP + -0x10]
00676ADB  03 CF                     ADD ECX,EDI
00676ADD  8B 7D C0                  MOV EDI,dword ptr [EBP + -0x40]
00676AE0  03 CE                     ADD ECX,ESI
00676AE2  8B 75 B0                  MOV ESI,dword ptr [EBP + -0x50]
00676AE5  03 CA                     ADD ECX,EDX
00676AE7  8B 55 E0                  MOV EDX,dword ptr [EBP + -0x20]
00676AEA  66 89 4B 06               MOV word ptr [EBX + 0x6],CX
00676AEE  8B 4D D0                  MOV ECX,dword ptr [EBP + -0x30]
00676AF1  03 C2                     ADD EAX,EDX
00676AF3  8B 55 A0                  MOV EDX,dword ptr [EBP + -0x60]
00676AF6  03 C1                     ADD EAX,ECX
00676AF8  8B 4D 90                  MOV ECX,dword ptr [EBP + -0x70]
00676AFB  03 C7                     ADD EAX,EDI
00676AFD  8B 7D 80                  MOV EDI,dword ptr [EBP + -0x80]
00676B00  03 C6                     ADD EAX,ESI
00676B02  03 C2                     ADD EAX,EDX
00676B04  33 D2                     XOR EDX,EDX
00676B06  03 C1                     ADD EAX,ECX
00676B08  8B 8D 70 FF FF FF         MOV ECX,dword ptr [EBP + 0xffffff70]
00676B0E  03 C7                     ADD EAX,EDI
00676B10  03 C1                     ADD EAX,ECX
00676B12  33 C9                     XOR ECX,ECX
00676B14  66 89 43 08               MOV word ptr [EBX + 0x8],AX
00676B18  66 8B 53 FE               MOV DX,word ptr [EBX + -0x2]
00676B1C  66 8B 4B 06               MOV CX,word ptr [EBX + 0x6]
00676B20  25 FF FF 00 00            AND EAX,0xffff
00676B25  03 D1                     ADD EDX,ECX
00676B27  33 C9                     XOR ECX,ECX
00676B29  66 8B 0B                  MOV CX,word ptr [EBX]
00676B2C  03 C1                     ADD EAX,ECX
00676B2E  33 C9                     XOR ECX,ECX
00676B30  66 8B 4B 04               MOV CX,word ptr [EBX + 0x4]
00676B34  D1 E2                     SHL EDX,0x1
00676B36  8D 04 40                  LEA EAX,[EAX + EAX*0x2]
00676B39  2B C2                     SUB EAX,EDX
00676B3B  33 D2                     XOR EDX,EDX
00676B3D  66 8B 53 FC               MOV DX,word ptr [EBX + -0x4]
00676B41  03 C2                     ADD EAX,EDX
00676B43  33 D2                     XOR EDX,EDX
00676B45  03 C1                     ADD EAX,ECX
00676B47  8D 0C 80                  LEA ECX,[EAX + EAX*0x4]
00676B4A  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
00676B4D  8A 90 3F C8 80 00         MOV DL,byte ptr [EAX + 0x80c83f]
00676B53  8B 84 95 A4 FE FF FF      MOV EAX,dword ptr [EBP + EDX*0x4 + 0xfffffea4]
00676B5A  85 C0                     TEST EAX,EAX
00676B5C  7D 11                     JGE 0x00676b6f
00676B5E  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
00676B61  33 D2                     XOR EDX,EDX
00676B63  85 C9                     TEST ECX,ECX
00676B65  0F 9C C2                  SETL DL
00676B68  4A                        DEC EDX
00676B69  23 D1                     AND EDX,ECX
00676B6B  89 10                     MOV dword ptr [EAX],EDX
00676B6D  EB 05                     JMP 0x00676b74
LAB_00676b6f:
00676B6F  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
00676B72  89 01                     MOV dword ptr [ECX],EAX
LAB_00676b74:
00676B74  8B 75 08                  MOV ESI,dword ptr [EBP + 0x8]
00676B77  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
00676B7A  83 C3 10                  ADD EBX,0x10
00676B7D  46                        INC ESI
00676B7E  83 C1 04                  ADD ECX,0x4
00676B81  81 FB 4D C9 80 00         CMP EBX,0x80c94d
00676B87  89 75 08                  MOV dword ptr [EBP + 0x8],ESI
00676B8A  89 4D FC                  MOV dword ptr [EBP + -0x4],ECX
00676B8D  0F 8C ED FD FF FF         JL 0x00676980
00676B93  5F                        POP EDI
00676B94  5E                        POP ESI
00676B95  5B                        POP EBX
LAB_00676b96:
00676B96  8B E5                     MOV ESP,EBP
00676B98  5D                        POP EBP
00676B99  C3                        RET
