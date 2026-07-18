FUN_0075af80:
0075AF80  55                        PUSH EBP
0075AF81  8B EC                     MOV EBP,ESP
0075AF83  81 EC 88 01 00 00         SUB ESP,0x188
0075AF89  53                        PUSH EBX
0075AF8A  56                        PUSH ESI
0075AF8B  57                        PUSH EDI
0075AF8C  8B 7D 08                  MOV EDI,dword ptr [EBP + 0x8]
0075AF8F  8B 87 2E 01 00 00         MOV EAX,dword ptr [EDI + 0x12e]
0075AF95  8B 8F 90 00 00 00         MOV ECX,dword ptr [EDI + 0x90]
0075AF9B  8B B7 9A 01 00 00         MOV ESI,dword ptr [EDI + 0x19a]
0075AFA1  48                        DEC EAX
0075AFA2  89 45 84                  MOV dword ptr [EBP + -0x7c],EAX
0075AFA5  8B 87 88 00 00 00         MOV EAX,dword ptr [EDI + 0x88]
0075AFAB  3B C1                     CMP EAX,ECX
0075AFAD  89 B5 78 FF FF FF         MOV dword ptr [EBP + 0xffffff78],ESI
0075AFB3  7F 47                     JG 0x0075affc
LAB_0075afb5:
0075AFB5  8B 97 A2 01 00 00         MOV EDX,dword ptr [EDI + 0x1a2]
0075AFBB  8B 5A 14                  MOV EBX,dword ptr [EDX + 0x14]
0075AFBE  85 DB                     TEST EBX,EBX
0075AFC0  75 3A                     JNZ 0x0075affc
0075AFC2  3B C1                     CMP EAX,ECX
0075AFC4  75 1F                     JNZ 0x0075afe5
0075AFC6  8B 8F 7E 01 00 00         MOV ECX,dword ptr [EDI + 0x17e]
0075AFCC  8B 9F 94 00 00 00         MOV EBX,dword ptr [EDI + 0x94]
0075AFD2  33 C0                     XOR EAX,EAX
0075AFD4  85 C9                     TEST ECX,ECX
0075AFD6  8B 8F 8C 00 00 00         MOV ECX,dword ptr [EDI + 0x8c]
0075AFDC  0F 94 C0                  SETZ AL
0075AFDF  03 C3                     ADD EAX,EBX
0075AFE1  3B C8                     CMP ECX,EAX
0075AFE3  77 17                     JA 0x0075affc
LAB_0075afe5:
0075AFE5  57                        PUSH EDI
0075AFE6  FF 12                     CALL dword ptr [EDX]
0075AFE8  85 C0                     TEST EAX,EAX
0075AFEA  74 73                     JZ 0x0075b05f
0075AFEC  8B 87 88 00 00 00         MOV EAX,dword ptr [EDI + 0x88]
0075AFF2  8B 8F 90 00 00 00         MOV ECX,dword ptr [EDI + 0x90]
0075AFF8  3B C1                     CMP EAX,ECX
0075AFFA  7E B9                     JLE 0x0075afb5
LAB_0075affc:
0075AFFC  8B 47 1C                  MOV EAX,dword ptr [EDI + 0x1c]
0075AFFF  8B 9F D0 00 00 00         MOV EBX,dword ptr [EDI + 0xd0]
0075B005  85 C0                     TEST EAX,EAX
0075B007  C7 45 9C 00 00 00 00      MOV dword ptr [EBP + -0x64],0x0
0075B00E  89 5D DC                  MOV dword ptr [EBP + -0x24],EBX
0075B011  0F 8E F6 04 00 00         JLE 0x0075b50d
0075B017  8B 4D 0C                  MOV ECX,dword ptr [EBP + 0xc]
0075B01A  B8 BC FF FF FF            MOV EAX,0xffffffbc
0075B01F  8D 56 48                  LEA EDX,[ESI + 0x48]
0075B022  2B C6                     SUB EAX,ESI
0075B024  C7 45 B8 00 00 00 00      MOV dword ptr [EBP + -0x48],0x0
0075B02B  89 4D B0                  MOV dword ptr [EBP + -0x50],ECX
0075B02E  89 55 F4                  MOV dword ptr [EBP + -0xc],EDX
0075B031  89 45 80                  MOV dword ptr [EBP + -0x80],EAX
LAB_0075b034:
0075B034  8B 43 30                  MOV EAX,dword ptr [EBX + 0x30]
0075B037  85 C0                     TEST EAX,EAX
0075B039  0F 84 98 04 00 00         JZ 0x0075b4d7
0075B03F  8B B7 94 00 00 00         MOV ESI,dword ptr [EDI + 0x94]
0075B045  8B 45 84                  MOV EAX,dword ptr [EBP + -0x7c]
0075B048  8B 4B 0C                  MOV ECX,dword ptr [EBX + 0xc]
0075B04B  3B F0                     CMP ESI,EAX
0075B04D  73 1B                     JNC 0x0075b06a
0075B04F  8B C1                     MOV EAX,ECX
0075B051  C7 45 94 00 00 00 00      MOV dword ptr [EBP + -0x6c],0x0
0075B058  89 45 0C                  MOV dword ptr [EBP + 0xc],EAX
0075B05B  03 C0                     ADD EAX,EAX
0075B05D  EB 27                     JMP 0x0075b086
LAB_0075b05f:
0075B05F  5F                        POP EDI
0075B060  5E                        POP ESI
0075B061  33 C0                     XOR EAX,EAX
0075B063  5B                        POP EBX
0075B064  8B E5                     MOV ESP,EBP
0075B066  5D                        POP EBP
0075B067  C2 08 00                  RET 0x8
LAB_0075b06a:
0075B06A  8B 43 20                  MOV EAX,dword ptr [EBX + 0x20]
0075B06D  33 D2                     XOR EDX,EDX
0075B06F  F7 F1                     DIV ECX
0075B071  85 D2                     TEST EDX,EDX
0075B073  89 55 0C                  MOV dword ptr [EBP + 0xc],EDX
0075B076  75 05                     JNZ 0x0075b07d
0075B078  89 4D 0C                  MOV dword ptr [EBP + 0xc],ECX
0075B07B  8B D1                     MOV EDX,ECX
LAB_0075b07d:
0075B07D  8B C2                     MOV EAX,EDX
0075B07F  C7 45 94 01 00 00 00      MOV dword ptr [EBP + -0x6c],0x1
LAB_0075b086:
0075B086  85 F6                     TEST ESI,ESI
0075B088  76 28                     JBE 0x0075b0b2
0075B08A  03 C1                     ADD EAX,ECX
0075B08C  4E                        DEC ESI
0075B08D  0F AF F1                  IMUL ESI,ECX
0075B090  8B 17                     MOV EDX,dword ptr [EDI]
0075B092  6A 00                     PUSH 0x0
0075B094  50                        PUSH EAX
0075B095  8B 45 F4                  MOV EAX,dword ptr [EBP + -0xc]
0075B098  56                        PUSH ESI
0075B099  8B 08                     MOV ECX,dword ptr [EAX]
0075B09B  51                        PUSH ECX
0075B09C  57                        PUSH EDI
0075B09D  FF 52 20                  CALL dword ptr [EDX + 0x20]
0075B0A0  8B 53 0C                  MOV EDX,dword ptr [EBX + 0xc]
0075B0A3  C7 45 A0 00 00 00 00      MOV dword ptr [EBP + -0x60],0x0
0075B0AA  8D 34 90                  LEA ESI,[EAX + EDX*0x4]
0075B0AD  89 75 C0                  MOV dword ptr [EBP + -0x40],ESI
0075B0B0  EB 1D                     JMP 0x0075b0cf
LAB_0075b0b2:
0075B0B2  8B 55 F4                  MOV EDX,dword ptr [EBP + -0xc]
0075B0B5  8B 0F                     MOV ECX,dword ptr [EDI]
0075B0B7  6A 00                     PUSH 0x0
0075B0B9  50                        PUSH EAX
0075B0BA  8B 02                     MOV EAX,dword ptr [EDX]
0075B0BC  6A 00                     PUSH 0x0
0075B0BE  50                        PUSH EAX
0075B0BF  57                        PUSH EDI
0075B0C0  FF 51 20                  CALL dword ptr [ECX + 0x20]
0075B0C3  89 45 C0                  MOV dword ptr [EBP + -0x40],EAX
0075B0C6  C7 45 A0 01 00 00 00      MOV dword ptr [EBP + -0x60],0x1
0075B0CD  8B F0                     MOV ESI,EAX
LAB_0075b0cf:
0075B0CF  8B 8D 78 FF FF FF         MOV ECX,dword ptr [EBP + 0xffffff78]
0075B0D5  8B 97 AE 01 00 00         MOV EDX,dword ptr [EDI + 0x1ae]
0075B0DB  8B 41 70                  MOV EAX,dword ptr [ECX + 0x70]
0075B0DE  8B 4D B8                  MOV ECX,dword ptr [EBP + -0x48]
0075B0E1  03 C1                     ADD EAX,ECX
0075B0E3  33 C9                     XOR ECX,ECX
0075B0E5  89 45 F8                  MOV dword ptr [EBP + -0x8],EAX
0075B0E8  8B 43 4C                  MOV EAX,dword ptr [EBX + 0x4c]
0075B0EB  66 8B 08                  MOV CX,word ptr [EAX]
0075B0EE  89 4D FC                  MOV dword ptr [EBP + -0x4],ECX
0075B0F1  33 C9                     XOR ECX,ECX
0075B0F3  66 8B 48 02               MOV CX,word ptr [EAX + 0x2]
0075B0F7  89 4D AC                  MOV dword ptr [EBP + -0x54],ECX
0075B0FA  33 C9                     XOR ECX,ECX
0075B0FC  66 8B 48 10               MOV CX,word ptr [EAX + 0x10]
0075B100  89 4D 90                  MOV dword ptr [EBP + -0x70],ECX
0075B103  33 C9                     XOR ECX,ECX
0075B105  66 8B 48 20               MOV CX,word ptr [EAX + 0x20]
0075B109  89 4D 98                  MOV dword ptr [EBP + -0x68],ECX
0075B10C  33 C9                     XOR ECX,ECX
0075B10E  66 8B 48 12               MOV CX,word ptr [EAX + 0x12]
0075B112  89 4D 88                  MOV dword ptr [EBP + -0x78],ECX
0075B115  33 C9                     XOR ECX,ECX
0075B117  66 8B 48 04               MOV CX,word ptr [EAX + 0x4]
0075B11B  8B 45 80                  MOV EAX,dword ptr [EBP + -0x80]
0075B11E  03 D0                     ADD EDX,EAX
0075B120  8B 45 F4                  MOV EAX,dword ptr [EBP + -0xc]
0075B123  89 4D 8C                  MOV dword ptr [EBP + -0x74],ECX
0075B126  8B 0C 02                  MOV ECX,dword ptr [EDX + EAX*0x1]
0075B129  8B 55 B0                  MOV EDX,dword ptr [EBP + -0x50]
0075B12C  89 8D 7C FF FF FF         MOV dword ptr [EBP + 0xffffff7c],ECX
0075B132  8B 4D 0C                  MOV ECX,dword ptr [EBP + 0xc]
0075B135  8B 02                     MOV EAX,dword ptr [EDX]
0075B137  89 45 C8                  MOV dword ptr [EBP + -0x38],EAX
0075B13A  33 C0                     XOR EAX,EAX
0075B13C  85 C9                     TEST ECX,ECX
0075B13E  89 45 D8                  MOV dword ptr [EBP + -0x28],EAX
0075B141  0F 8E 90 03 00 00         JLE 0x0075b4d7
0075B147  EB 06                     JMP 0x0075b14f
LAB_0075b149:
0075B149  8B 45 D8                  MOV EAX,dword ptr [EBP + -0x28]
0075B14C  8B 75 C0                  MOV ESI,dword ptr [EBP + -0x40]
LAB_0075b14f:
0075B14F  8B 4D A0                  MOV ECX,dword ptr [EBP + -0x60]
0075B152  8B 14 86                  MOV EDX,dword ptr [ESI + EAX*0x4]
0075B155  85 C9                     TEST ECX,ECX
0075B157  89 55 E4                  MOV dword ptr [EBP + -0x1c],EDX
0075B15A  74 06                     JZ 0x0075b162
0075B15C  85 C0                     TEST EAX,EAX
0075B15E  8B CA                     MOV ECX,EDX
0075B160  74 04                     JZ 0x0075b166
LAB_0075b162:
0075B162  8B 4C 86 FC               MOV ECX,dword ptr [ESI + EAX*0x4 + -0x4]
LAB_0075b166:
0075B166  8B 7D 94                  MOV EDI,dword ptr [EBP + -0x6c]
0075B169  85 FF                     TEST EDI,EDI
0075B16B  74 0C                     JZ 0x0075b179
0075B16D  8B 7D 0C                  MOV EDI,dword ptr [EBP + 0xc]
0075B170  4F                        DEC EDI
0075B171  3B C7                     CMP EAX,EDI
0075B173  75 04                     JNZ 0x0075b179
0075B175  8B C2                     MOV EAX,EDX
0075B177  EB 04                     JMP 0x0075b17d
LAB_0075b179:
0075B179  8B 44 86 04               MOV EAX,dword ptr [ESI + EAX*0x4 + 0x4]
LAB_0075b17d:
0075B17D  8B 32                     MOV ESI,dword ptr [EDX]
0075B17F  8B 10                     MOV EDX,dword ptr [EAX]
0075B181  8B 39                     MOV EDI,dword ptr [ECX]
0075B183  89 55 E0                  MOV dword ptr [EBP + -0x20],EDX
0075B186  89 55 EC                  MOV dword ptr [EBP + -0x14],EDX
0075B189  89 55 A8                  MOV dword ptr [EBP + -0x58],EDX
0075B18C  8B 53 1C                  MOV EDX,dword ptr [EBX + 0x1c]
0075B18F  05 00 01 00 00            ADD EAX,0x100
0075B194  4A                        DEC EDX
0075B195  81 C1 00 01 00 00         ADD ECX,0x100
0075B19B  89 7D B4                  MOV dword ptr [EBP + -0x4c],EDI
0075B19E  89 7D E8                  MOV dword ptr [EBP + -0x18],EDI
0075B1A1  89 75 F0                  MOV dword ptr [EBP + -0x10],ESI
0075B1A4  89 75 CC                  MOV dword ptr [EBP + -0x34],ESI
0075B1A7  C7 45 D4 00 00 00 00      MOV dword ptr [EBP + -0x2c],0x0
0075B1AE  89 55 A4                  MOV dword ptr [EBP + -0x5c],EDX
0075B1B1  C7 45 D0 00 00 00 00      MOV dword ptr [EBP + -0x30],0x0
0075B1B8  89 45 C4                  MOV dword ptr [EBP + -0x3c],EAX
0075B1BB  89 4D BC                  MOV dword ptr [EBP + -0x44],ECX
LAB_0075b1be:
0075B1BE  8B 4D E4                  MOV ECX,dword ptr [EBP + -0x1c]
0075B1C1  8D 85 78 FE FF FF         LEA EAX,[EBP + 0xfffffe78]
0075B1C7  6A 01                     PUSH 0x1
0075B1C9  50                        PUSH EAX
0075B1CA  51                        PUSH ECX
0075B1CB  E8 30 ED FF FF            CALL 0x00759f00
0075B1D0  8B 55 A4                  MOV EDX,dword ptr [EBP + -0x5c]
0075B1D3  8B 45 D0                  MOV EAX,dword ptr [EBP + -0x30]
0075B1D6  3B C2                     CMP EAX,EDX
0075B1D8  73 19                     JNC 0x0075b1f3
0075B1DA  8B 45 BC                  MOV EAX,dword ptr [EBP + -0x44]
0075B1DD  8B 55 E4                  MOV EDX,dword ptr [EBP + -0x1c]
0075B1E0  8B 08                     MOV ECX,dword ptr [EAX]
0075B1E2  8B 45 C4                  MOV EAX,dword ptr [EBP + -0x3c]
0075B1E5  8B B2 00 01 00 00         MOV ESI,dword ptr [EDX + 0x100]
0075B1EB  89 4D B4                  MOV dword ptr [EBP + -0x4c],ECX
0075B1EE  8B 08                     MOV ECX,dword ptr [EAX]
0075B1F0  89 4D E0                  MOV dword ptr [EBP + -0x20],ECX
LAB_0075b1f3:
0075B1F3  8B 55 F8                  MOV EDX,dword ptr [EBP + -0x8]
0075B1F6  8B 4A 04                  MOV ECX,dword ptr [EDX + 0x4]
0075B1F9  85 C9                     TEST ECX,ECX
0075B1FB  74 67                     JZ 0x0075b264
0075B1FD  8B 85 7C FE FF FF         MOV EAX,dword ptr [EBP + 0xfffffe7c]
0075B203  85 C0                     TEST EAX,EAX
0075B205  75 5D                     JNZ 0x0075b264
0075B207  8B 45 CC                  MOV EAX,dword ptr [EBP + -0x34]
0075B20A  8B 5D AC                  MOV EBX,dword ptr [EBP + -0x54]
0075B20D  2B C6                     SUB EAX,ESI
0075B20F  0F AF 45 FC               IMUL EAX,dword ptr [EBP + -0x4]
0075B213  8D 14 C0                  LEA EDX,[EAX + EAX*0x8]
0075B216  8B C3                     MOV EAX,EBX
0075B218  C1 E2 02                  SHL EDX,0x2
0075B21B  78 1F                     JS 0x0075b23c
0075B21D  C1 E0 07                  SHL EAX,0x7
0075B220  03 C2                     ADD EAX,EDX
0075B222  99                        CDQ
0075B223  C1 E3 08                  SHL EBX,0x8
0075B226  F7 FB                     IDIV EBX
0075B228  85 C9                     TEST ECX,ECX
0075B22A  7E 2F                     JLE 0x0075b25b
0075B22C  BA 01 00 00 00            MOV EDX,0x1
0075B231  D3 E2                     SHL EDX,CL
0075B233  3B C2                     CMP EAX,EDX
0075B235  7C 24                     JL 0x0075b25b
0075B237  8D 42 FF                  LEA EAX,[EDX + -0x1]
0075B23A  EB 1F                     JMP 0x0075b25b
LAB_0075b23c:
0075B23C  C1 E0 07                  SHL EAX,0x7
0075B23F  2B C2                     SUB EAX,EDX
0075B241  99                        CDQ
0075B242  C1 E3 08                  SHL EBX,0x8
0075B245  F7 FB                     IDIV EBX
0075B247  85 C9                     TEST ECX,ECX
0075B249  7E 0E                     JLE 0x0075b259
0075B24B  BA 01 00 00 00            MOV EDX,0x1
0075B250  D3 E2                     SHL EDX,CL
0075B252  3B C2                     CMP EAX,EDX
0075B254  7C 03                     JL 0x0075b259
0075B256  8D 42 FF                  LEA EAX,[EDX + -0x1]
LAB_0075b259:
0075B259  F7 D8                     NEG EAX
LAB_0075b25b:
0075B25B  8B 5D DC                  MOV EBX,dword ptr [EBP + -0x24]
0075B25E  89 85 7C FE FF FF         MOV dword ptr [EBP + 0xfffffe7c],EAX
LAB_0075b264:
0075B264  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
0075B267  8B 48 08                  MOV ECX,dword ptr [EAX + 0x8]
0075B26A  85 C9                     TEST ECX,ECX
0075B26C  74 6A                     JZ 0x0075b2d8
0075B26E  8B 85 98 FE FF FF         MOV EAX,dword ptr [EBP + 0xfffffe98]
0075B274  85 C0                     TEST EAX,EAX
0075B276  75 60                     JNZ 0x0075b2d8
0075B278  8B 45 E8                  MOV EAX,dword ptr [EBP + -0x18]
0075B27B  8B 55 EC                  MOV EDX,dword ptr [EBP + -0x14]
0075B27E  2B C2                     SUB EAX,EDX
0075B280  8B 5D 90                  MOV EBX,dword ptr [EBP + -0x70]
0075B283  0F AF 45 FC               IMUL EAX,dword ptr [EBP + -0x4]
0075B287  8D 14 C0                  LEA EDX,[EAX + EAX*0x8]
0075B28A  8B C3                     MOV EAX,EBX
0075B28C  C1 E2 02                  SHL EDX,0x2
0075B28F  78 1F                     JS 0x0075b2b0
0075B291  C1 E0 07                  SHL EAX,0x7
0075B294  03 C2                     ADD EAX,EDX
0075B296  99                        CDQ
0075B297  C1 E3 08                  SHL EBX,0x8
0075B29A  F7 FB                     IDIV EBX
0075B29C  85 C9                     TEST ECX,ECX
0075B29E  7E 2F                     JLE 0x0075b2cf
0075B2A0  BA 01 00 00 00            MOV EDX,0x1
0075B2A5  D3 E2                     SHL EDX,CL
0075B2A7  3B C2                     CMP EAX,EDX
0075B2A9  7C 24                     JL 0x0075b2cf
0075B2AB  8D 42 FF                  LEA EAX,[EDX + -0x1]
0075B2AE  EB 1F                     JMP 0x0075b2cf
LAB_0075b2b0:
0075B2B0  C1 E0 07                  SHL EAX,0x7
0075B2B3  2B C2                     SUB EAX,EDX
0075B2B5  99                        CDQ
0075B2B6  C1 E3 08                  SHL EBX,0x8
0075B2B9  F7 FB                     IDIV EBX
0075B2BB  85 C9                     TEST ECX,ECX
0075B2BD  7E 0E                     JLE 0x0075b2cd
0075B2BF  BA 01 00 00 00            MOV EDX,0x1
0075B2C4  D3 E2                     SHL EDX,CL
0075B2C6  3B C2                     CMP EAX,EDX
0075B2C8  7C 03                     JL 0x0075b2cd
0075B2CA  8D 42 FF                  LEA EAX,[EDX + -0x1]
LAB_0075b2cd:
0075B2CD  F7 D8                     NEG EAX
LAB_0075b2cf:
0075B2CF  8B 5D DC                  MOV EBX,dword ptr [EBP + -0x24]
0075B2D2  89 85 98 FE FF FF         MOV dword ptr [EBP + 0xfffffe98],EAX
LAB_0075b2d8:
0075B2D8  8B 4D F8                  MOV ECX,dword ptr [EBP + -0x8]
0075B2DB  8B 49 0C                  MOV ECX,dword ptr [ECX + 0xc]
0075B2DE  85 C9                     TEST ECX,ECX
0075B2E0  74 73                     JZ 0x0075b355
0075B2E2  8B 85 B8 FE FF FF         MOV EAX,dword ptr [EBP + 0xfffffeb8]
0075B2E8  85 C0                     TEST EAX,EAX
0075B2EA  75 69                     JNZ 0x0075b355
0075B2EC  8B 55 F0                  MOV EDX,dword ptr [EBP + -0x10]
0075B2EF  8B 5D 98                  MOV EBX,dword ptr [EBP + -0x68]
0075B2F2  8D 04 12                  LEA EAX,[EDX + EDX*0x1]
0075B2F5  8B D0                     MOV EDX,EAX
0075B2F7  8B 45 EC                  MOV EAX,dword ptr [EBP + -0x14]
0075B2FA  2B C2                     SUB EAX,EDX
0075B2FC  8B 55 E8                  MOV EDX,dword ptr [EBP + -0x18]
0075B2FF  03 C2                     ADD EAX,EDX
0075B301  0F AF 45 FC               IMUL EAX,dword ptr [EBP + -0x4]
0075B305  8D 14 C0                  LEA EDX,[EAX + EAX*0x8]
0075B308  8B C3                     MOV EAX,EBX
0075B30A  85 D2                     TEST EDX,EDX
0075B30C  7C 1F                     JL 0x0075b32d
0075B30E  C1 E0 07                  SHL EAX,0x7
0075B311  03 C2                     ADD EAX,EDX
0075B313  99                        CDQ
0075B314  C1 E3 08                  SHL EBX,0x8
0075B317  F7 FB                     IDIV EBX
0075B319  85 C9                     TEST ECX,ECX
0075B31B  7E 2F                     JLE 0x0075b34c
0075B31D  BA 01 00 00 00            MOV EDX,0x1
0075B322  D3 E2                     SHL EDX,CL
0075B324  3B C2                     CMP EAX,EDX
0075B326  7C 24                     JL 0x0075b34c
0075B328  8D 42 FF                  LEA EAX,[EDX + -0x1]
0075B32B  EB 1F                     JMP 0x0075b34c
LAB_0075b32d:
0075B32D  C1 E0 07                  SHL EAX,0x7
0075B330  2B C2                     SUB EAX,EDX
0075B332  99                        CDQ
0075B333  C1 E3 08                  SHL EBX,0x8
0075B336  F7 FB                     IDIV EBX
0075B338  85 C9                     TEST ECX,ECX
0075B33A  7E 0E                     JLE 0x0075b34a
0075B33C  BA 01 00 00 00            MOV EDX,0x1
0075B341  D3 E2                     SHL EDX,CL
0075B343  3B C2                     CMP EAX,EDX
0075B345  7C 03                     JL 0x0075b34a
0075B347  8D 42 FF                  LEA EAX,[EDX + -0x1]
LAB_0075b34a:
0075B34A  F7 D8                     NEG EAX
LAB_0075b34c:
0075B34C  8B 5D DC                  MOV EBX,dword ptr [EBP + -0x24]
0075B34F  89 85 B8 FE FF FF         MOV dword ptr [EBP + 0xfffffeb8],EAX
LAB_0075b355:
0075B355  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
0075B358  8B 48 10                  MOV ECX,dword ptr [EAX + 0x10]
0075B35B  85 C9                     TEST ECX,ECX
0075B35D  74 6D                     JZ 0x0075b3cc
0075B35F  8B 85 9C FE FF FF         MOV EAX,dword ptr [EBP + 0xfffffe9c]
0075B365  85 C0                     TEST EAX,EAX
0075B367  75 63                     JNZ 0x0075b3cc
0075B369  8B 45 E0                  MOV EAX,dword ptr [EBP + -0x20]
0075B36C  8B 55 A8                  MOV EDX,dword ptr [EBP + -0x58]
0075B36F  2B C2                     SUB EAX,EDX
0075B371  8B 55 B4                  MOV EDX,dword ptr [EBP + -0x4c]
0075B374  2B C2                     SUB EAX,EDX
0075B376  03 C7                     ADD EAX,EDI
0075B378  8B 7D 88                  MOV EDI,dword ptr [EBP + -0x78]
0075B37B  0F AF 45 FC               IMUL EAX,dword ptr [EBP + -0x4]
0075B37F  8D 14 80                  LEA EDX,[EAX + EAX*0x4]
0075B382  8B C7                     MOV EAX,EDI
0075B384  85 D2                     TEST EDX,EDX
0075B386  7C 1F                     JL 0x0075b3a7
0075B388  C1 E0 07                  SHL EAX,0x7
0075B38B  03 C2                     ADD EAX,EDX
0075B38D  99                        CDQ
0075B38E  C1 E7 08                  SHL EDI,0x8
0075B391  F7 FF                     IDIV EDI
0075B393  85 C9                     TEST ECX,ECX
0075B395  7E 2F                     JLE 0x0075b3c6
0075B397  BA 01 00 00 00            MOV EDX,0x1
0075B39C  D3 E2                     SHL EDX,CL
0075B39E  3B C2                     CMP EAX,EDX
0075B3A0  7C 24                     JL 0x0075b3c6
0075B3A2  8D 42 FF                  LEA EAX,[EDX + -0x1]
0075B3A5  EB 1F                     JMP 0x0075b3c6
LAB_0075b3a7:
0075B3A7  C1 E0 07                  SHL EAX,0x7
0075B3AA  2B C2                     SUB EAX,EDX
0075B3AC  99                        CDQ
0075B3AD  C1 E7 08                  SHL EDI,0x8
0075B3B0  F7 FF                     IDIV EDI
0075B3B2  85 C9                     TEST ECX,ECX
0075B3B4  7E 0E                     JLE 0x0075b3c4
0075B3B6  BA 01 00 00 00            MOV EDX,0x1
0075B3BB  D3 E2                     SHL EDX,CL
0075B3BD  3B C2                     CMP EAX,EDX
0075B3BF  7C 03                     JL 0x0075b3c4
0075B3C1  8D 42 FF                  LEA EAX,[EDX + -0x1]
LAB_0075b3c4:
0075B3C4  F7 D8                     NEG EAX
LAB_0075b3c6:
0075B3C6  89 85 9C FE FF FF         MOV dword ptr [EBP + 0xfffffe9c],EAX
LAB_0075b3cc:
0075B3CC  8B 4D F8                  MOV ECX,dword ptr [EBP + -0x8]
0075B3CF  8B 49 14                  MOV ECX,dword ptr [ECX + 0x14]
0075B3D2  85 C9                     TEST ECX,ECX
0075B3D4  74 6F                     JZ 0x0075b445
0075B3D6  8B 85 80 FE FF FF         MOV EAX,dword ptr [EBP + 0xfffffe80]
0075B3DC  85 C0                     TEST EAX,EAX
0075B3DE  75 65                     JNZ 0x0075b445
0075B3E0  8B 55 F0                  MOV EDX,dword ptr [EBP + -0x10]
0075B3E3  8B 7D 8C                  MOV EDI,dword ptr [EBP + -0x74]
0075B3E6  8D 04 12                  LEA EAX,[EDX + EDX*0x1]
0075B3E9  8B D0                     MOV EDX,EAX
0075B3EB  8B C6                     MOV EAX,ESI
0075B3ED  2B C2                     SUB EAX,EDX
0075B3EF  8B 55 CC                  MOV EDX,dword ptr [EBP + -0x34]
0075B3F2  03 C2                     ADD EAX,EDX
0075B3F4  0F AF 45 FC               IMUL EAX,dword ptr [EBP + -0x4]
0075B3F8  8D 14 C0                  LEA EDX,[EAX + EAX*0x8]
0075B3FB  8B C7                     MOV EAX,EDI
0075B3FD  85 D2                     TEST EDX,EDX
0075B3FF  7C 1F                     JL 0x0075b420
0075B401  C1 E0 07                  SHL EAX,0x7
0075B404  03 C2                     ADD EAX,EDX
0075B406  99                        CDQ
0075B407  C1 E7 08                  SHL EDI,0x8
0075B40A  F7 FF                     IDIV EDI
0075B40C  85 C9                     TEST ECX,ECX
0075B40E  7E 2F                     JLE 0x0075b43f
0075B410  BA 01 00 00 00            MOV EDX,0x1
0075B415  D3 E2                     SHL EDX,CL
0075B417  3B C2                     CMP EAX,EDX
0075B419  7C 24                     JL 0x0075b43f
0075B41B  8D 42 FF                  LEA EAX,[EDX + -0x1]
0075B41E  EB 1F                     JMP 0x0075b43f
LAB_0075b420:
0075B420  C1 E0 07                  SHL EAX,0x7
0075B423  2B C2                     SUB EAX,EDX
0075B425  99                        CDQ
0075B426  C1 E7 08                  SHL EDI,0x8
0075B429  F7 FF                     IDIV EDI
0075B42B  85 C9                     TEST ECX,ECX
0075B42D  7E 0E                     JLE 0x0075b43d
0075B42F  BA 01 00 00 00            MOV EDX,0x1
0075B434  D3 E2                     SHL EDX,CL
0075B436  3B C2                     CMP EAX,EDX
0075B438  7C 03                     JL 0x0075b43d
0075B43A  8D 42 FF                  LEA EAX,[EDX + -0x1]
LAB_0075b43d:
0075B43D  F7 D8                     NEG EAX
LAB_0075b43f:
0075B43F  89 85 80 FE FF FF         MOV dword ptr [EBP + 0xfffffe80],EAX
LAB_0075b445:
0075B445  8B 45 D4                  MOV EAX,dword ptr [EBP + -0x2c]
0075B448  8B 4D C8                  MOV ECX,dword ptr [EBP + -0x38]
0075B44B  50                        PUSH EAX
0075B44C  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
0075B44F  8D 95 78 FE FF FF         LEA EDX,[EBP + 0xfffffe78]
0075B455  51                        PUSH ECX
0075B456  52                        PUSH EDX
0075B457  53                        PUSH EBX
0075B458  50                        PUSH EAX
0075B459  FF 95 7C FF FF FF         CALL dword ptr [EBP + 0xffffff7c]
0075B45F  8B 4D B4                  MOV ECX,dword ptr [EBP + -0x4c]
0075B462  8B 7D E8                  MOV EDI,dword ptr [EBP + -0x18]
0075B465  8B 45 EC                  MOV EAX,dword ptr [EBP + -0x14]
0075B468  8B 55 F0                  MOV EDX,dword ptr [EBP + -0x10]
0075B46B  89 4D E8                  MOV dword ptr [EBP + -0x18],ECX
0075B46E  8B 4D E0                  MOV ECX,dword ptr [EBP + -0x20]
0075B471  89 45 A8                  MOV dword ptr [EBP + -0x58],EAX
0075B474  89 4D EC                  MOV dword ptr [EBP + -0x14],ECX
0075B477  8B 4D E4                  MOV ECX,dword ptr [EBP + -0x1c]
0075B47A  B8 00 01 00 00            MOV EAX,0x100
0075B47F  89 55 CC                  MOV dword ptr [EBP + -0x34],EDX
0075B482  8B 55 BC                  MOV EDX,dword ptr [EBP + -0x44]
0075B485  03 C8                     ADD ECX,EAX
0075B487  03 D0                     ADD EDX,EAX
0075B489  89 4D E4                  MOV dword ptr [EBP + -0x1c],ECX
0075B48C  8B 4D C4                  MOV ECX,dword ptr [EBP + -0x3c]
0075B48F  89 55 BC                  MOV dword ptr [EBP + -0x44],EDX
0075B492  8B 53 24                  MOV EDX,dword ptr [EBX + 0x24]
0075B495  03 C8                     ADD ECX,EAX
0075B497  8B 45 D4                  MOV EAX,dword ptr [EBP + -0x2c]
0075B49A  03 C2                     ADD EAX,EDX
0075B49C  89 4D C4                  MOV dword ptr [EBP + -0x3c],ECX
0075B49F  8B 4D A4                  MOV ECX,dword ptr [EBP + -0x5c]
0075B4A2  89 45 D4                  MOV dword ptr [EBP + -0x2c],EAX
0075B4A5  8B 45 D0                  MOV EAX,dword ptr [EBP + -0x30]
0075B4A8  89 75 F0                  MOV dword ptr [EBP + -0x10],ESI
0075B4AB  40                        INC EAX
0075B4AC  3B C1                     CMP EAX,ECX
0075B4AE  89 45 D0                  MOV dword ptr [EBP + -0x30],EAX
0075B4B1  0F 86 07 FD FF FF         JBE 0x0075b1be
0075B4B7  8B 4D C8                  MOV ECX,dword ptr [EBP + -0x38]
0075B4BA  8B C2                     MOV EAX,EDX
0075B4BC  8D 14 81                  LEA EDX,[ECX + EAX*0x4]
0075B4BF  8B 45 D8                  MOV EAX,dword ptr [EBP + -0x28]
0075B4C2  8B 4D 0C                  MOV ECX,dword ptr [EBP + 0xc]
0075B4C5  40                        INC EAX
0075B4C6  3B C1                     CMP EAX,ECX
0075B4C8  89 55 C8                  MOV dword ptr [EBP + -0x38],EDX
0075B4CB  89 45 D8                  MOV dword ptr [EBP + -0x28],EAX
0075B4CE  0F 8C 75 FC FF FF         JL 0x0075b149
0075B4D4  8B 7D 08                  MOV EDI,dword ptr [EBP + 0x8]
LAB_0075b4d7:
0075B4D7  8B 75 B8                  MOV ESI,dword ptr [EBP + -0x48]
0075B4DA  8B 55 F4                  MOV EDX,dword ptr [EBP + -0xc]
0075B4DD  8B 45 9C                  MOV EAX,dword ptr [EBP + -0x64]
0075B4E0  83 C6 18                  ADD ESI,0x18
0075B4E3  89 75 B8                  MOV dword ptr [EBP + -0x48],ESI
0075B4E6  8B 75 B0                  MOV ESI,dword ptr [EBP + -0x50]
0075B4E9  B9 04 00 00 00            MOV ECX,0x4
0075B4EE  40                        INC EAX
0075B4EF  03 D1                     ADD EDX,ECX
0075B4F1  03 F1                     ADD ESI,ECX
0075B4F3  8B 4F 1C                  MOV ECX,dword ptr [EDI + 0x1c]
0075B4F6  83 C3 54                  ADD EBX,0x54
0075B4F9  3B C1                     CMP EAX,ECX
0075B4FB  89 45 9C                  MOV dword ptr [EBP + -0x64],EAX
0075B4FE  89 55 F4                  MOV dword ptr [EBP + -0xc],EDX
0075B501  89 75 B0                  MOV dword ptr [EBP + -0x50],ESI
0075B504  89 5D DC                  MOV dword ptr [EBP + -0x24],EBX
0075B507  0F 8C 27 FB FF FF         JL 0x0075b034
LAB_0075b50d:
0075B50D  8B B7 94 00 00 00         MOV ESI,dword ptr [EDI + 0x94]
0075B513  8B 97 2E 01 00 00         MOV EDX,dword ptr [EDI + 0x12e]
0075B519  46                        INC ESI
0075B51A  8B C6                     MOV EAX,ESI
0075B51C  89 B7 94 00 00 00         MOV dword ptr [EDI + 0x94],ESI
0075B522  3B C2                     CMP EAX,EDX
0075B524  5F                        POP EDI
0075B525  1B C0                     SBB EAX,EAX
0075B527  5E                        POP ESI
0075B528  83 C0 04                  ADD EAX,0x4
0075B52B  5B                        POP EBX
0075B52C  8B E5                     MOV ESP,EBP
0075B52E  5D                        POP EBP
0075B52F  C2 08 00                  RET 0x8
