FUN_006c08e0:
006C08E0  55                        PUSH EBP
006C08E1  8B EC                     MOV EBP,ESP
006C08E3  83 EC 38                  SUB ESP,0x38
006C08E6  53                        PUSH EBX
006C08E7  56                        PUSH ESI
006C08E8  57                        PUSH EDI
LAB_006c08e9:
006C08E9  68 98 68 85 00            PUSH 0x856898
006C08EE  C7 45 D0 01 00 00 00      MOV dword ptr [EBP + -0x30],0x1
006C08F5  FF 15 8C BB 85 00         CALL dword ptr [0x0085bb8c]
006C08FB  C7 45 F8 00 00 00 00      MOV dword ptr [EBP + -0x8],0x0
LAB_006c0902:
006C0902  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
006C0905  33 F6                     XOR ESI,ESI
006C0907  8D 0C 40                  LEA ECX,[EAX + EAX*0x2]
006C090A  C1 E1 04                  SHL ECX,0x4
006C090D  03 C8                     ADD ECX,EAX
006C090F  8B 04 8D F8 4F 85 00      MOV EAX,dword ptr [ECX*0x4 + 0x854ff8]
006C0916  8D 1C 8D F8 4F 85 00      LEA EBX,[ECX*0x4 + 0x854ff8]
006C091D  8B C8                     MOV ECX,EAX
006C091F  83 E1 03                  AND ECX,0x3
006C0922  83 F9 01                  CMP ECX,0x1
006C0925  0F 85 09 06 00 00         JNZ 0x006c0f34
006C092B  A8 20                     TEST AL,0x20
006C092D  89 75 D0                  MOV dword ptr [EBP + -0x30],ESI
006C0930  74 4B                     JZ 0x006c097d
006C0932  24 DF                     AND AL,0xdf
006C0934  53                        PUSH EBX
006C0935  89 03                     MOV dword ptr [EBX],EAX
006C0937  E8 B4 F2 FF FF            CALL 0x006bfbf0
006C093C  85 C0                     TEST EAX,EAX
006C093E  0F 84 FC 05 00 00         JZ 0x006c0f40
006C0944  8B 43 0C                  MOV EAX,dword ptr [EBX + 0xc]
006C0947  BE 01 00 00 00            MOV ESI,0x1
006C094C  85 C0                     TEST EAX,EAX
006C094E  0F 84 B1 04 00 00         JZ 0x006c0e05
006C0954  8B 10                     MOV EDX,dword ptr [EAX]
006C0956  50                        PUSH EAX
006C0957  FF 52 48                  CALL dword ptr [EDX + 0x48]
006C095A  8B 43 10                  MOV EAX,dword ptr [EBX + 0x10]
006C095D  33 FF                     XOR EDI,EDI
006C095F  3B C7                     CMP EAX,EDI
006C0961  74 09                     JZ 0x006c096c
006C0963  8B 08                     MOV ECX,dword ptr [EAX]
006C0965  50                        PUSH EAX
006C0966  FF 51 08                  CALL dword ptr [ECX + 0x8]
006C0969  89 7B 10                  MOV dword ptr [EBX + 0x10],EDI
LAB_006c096c:
006C096C  8B 43 0C                  MOV EAX,dword ptr [EBX + 0xc]
006C096F  50                        PUSH EAX
006C0970  8B 10                     MOV EDX,dword ptr [EAX]
006C0972  FF 52 08                  CALL dword ptr [EDX + 0x8]
006C0975  89 7B 0C                  MOV dword ptr [EBX + 0xc],EDI
006C0978  E9 88 04 00 00            JMP 0x006c0e05
LAB_006c097d:
006C097D  8B 43 0C                  MOV EAX,dword ptr [EBX + 0xc]
006C0980  8B 7B 14                  MOV EDI,dword ptr [EBX + 0x14]
006C0983  8D 55 CC                  LEA EDX,[EBP + -0x34]
006C0986  89 75 EC                  MOV dword ptr [EBP + -0x14],ESI
006C0989  8B 08                     MOV ECX,dword ptr [EAX]
006C098B  52                        PUSH EDX
006C098C  D1 EF                     SHR EDI,0x1
006C098E  50                        PUSH EAX
006C098F  89 7D E4                  MOV dword ptr [EBP + -0x1c],EDI
006C0992  FF 51 24                  CALL dword ptr [ECX + 0x24]
006C0995  85 C0                     TEST EAX,EAX
006C0997  0F 85 63 04 00 00         JNZ 0x006c0e00
006C099D  F6 45 CC 02               TEST byte ptr [EBP + -0x34],0x2
006C09A1  0F 85 59 04 00 00         JNZ 0x006c0e00
006C09A7  8B 43 0C                  MOV EAX,dword ptr [EBX + 0xc]
006C09AA  8D 55 C8                  LEA EDX,[EBP + -0x38]
006C09AD  52                        PUSH EDX
006C09AE  8D 55 F0                  LEA EDX,[EBP + -0x10]
006C09B1  8B 08                     MOV ECX,dword ptr [EAX]
006C09B3  52                        PUSH EDX
006C09B4  50                        PUSH EAX
006C09B5  FF 51 10                  CALL dword ptr [ECX + 0x10]
006C09B8  85 C0                     TEST EAX,EAX
006C09BA  0F 85 40 04 00 00         JNZ 0x006c0e00
006C09C0  8B 53 18                  MOV EDX,dword ptr [EBX + 0x18]
006C09C3  8B 4B 14                  MOV ECX,dword ptr [EBX + 0x14]
006C09C6  3B D1                     CMP EDX,ECX
006C09C8  89 4D DC                  MOV dword ptr [EBP + -0x24],ECX
006C09CB  77 43                     JA 0x006c0a10
006C09CD  8B 03                     MOV EAX,dword ptr [EBX]
006C09CF  A8 10                     TEST AL,0x10
006C09D1  0F 84 03 01 00 00         JZ 0x006c0ada
006C09D7  8B 4D F0                  MOV ECX,dword ptr [EBP + -0x10]
006C09DA  3B CA                     CMP ECX,EDX
006C09DC  73 08                     JNC 0x006c09e6
006C09DE  3B CF                     CMP ECX,EDI
006C09E0  73 2B                     JNC 0x006c0a0d
006C09E2  3B D7                     CMP EDX,EDI
006C09E4  72 27                     JC 0x006c0a0d
LAB_006c09e6:
006C09E6  F6 43 04 01               TEST byte ptr [EBX + 0x4],0x1
006C09EA  75 0E                     JNZ 0x006c09fa
006C09EC  8B 43 0C                  MOV EAX,dword ptr [EBX + 0xc]
006C09EF  50                        PUSH EAX
006C09F0  8B 08                     MOV ECX,dword ptr [EAX]
006C09F2  FF 51 48                  CALL dword ptr [ECX + 0x48]
006C09F5  E9 0B 04 00 00            JMP 0x006c0e05
LAB_006c09fa:
006C09FA  8B C8                     MOV ECX,EAX
006C09FC  C7 43 18 FF FF FF 7F      MOV dword ptr [EBX + 0x18],0x7fffffff
006C0A03  83 E1 08                  AND ECX,0x8
006C0A06  24 EF                     AND AL,0xef
006C0A08  89 4D EC                  MOV dword ptr [EBP + -0x14],ECX
006C0A0B  89 03                     MOV dword ptr [EBX],EAX
LAB_006c0a0d:
006C0A0D  8B 4D DC                  MOV ECX,dword ptr [EBP + -0x24]
LAB_006c0a10:
006C0A10  8B BB C0 00 00 00         MOV EDI,dword ptr [EBX + 0xc0]
006C0A16  85 FF                     TEST EDI,EDI
006C0A18  7F 16                     JG 0x006c0a30
006C0A1A  F6 45 CC 01               TEST byte ptr [EBP + -0x34],0x1
006C0A1E  0F 84 E1 03 00 00         JZ 0x006c0e05
006C0A24  8B 43 04                  MOV EAX,dword ptr [EBX + 0x4]
006C0A27  F6 C4 80                  TEST AH,0x80
006C0A2A  0F 84 10 05 00 00         JZ 0x006c0f40
LAB_006c0a30:
006C0A30  8B 43 04                  MOV EAX,dword ptr [EBX + 0x4]
006C0A33  F6 C4 40                  TEST AH,0x40
006C0A36  0F 85 CB 04 00 00         JNZ 0x006c0f07
006C0A3C  F6 C4 80                  TEST AH,0x80
006C0A3F  0F 84 E4 00 00 00         JZ 0x006c0b29
006C0A45  8B 55 E4                  MOV EDX,dword ptr [EBP + -0x1c]
006C0A48  8B 45 F0                  MOV EAX,dword ptr [EBP + -0x10]
006C0A4B  3B C2                     CMP EAX,EDX
006C0A4D  0F 83 F2 00 00 00         JNC 0x006c0b45
006C0A53  8D 7D D8                  LEA EDI,[EBP + -0x28]
006C0A56  6A 00                     PUSH 0x0
006C0A58  8B 43 0C                  MOV EAX,dword ptr [EBX + 0xc]
006C0A5B  57                        PUSH EDI
006C0A5C  8D 7D D4                  LEA EDI,[EBP + -0x2c]
006C0A5F  2B CA                     SUB ECX,EDX
006C0A61  8B 30                     MOV ESI,dword ptr [EAX]
006C0A63  57                        PUSH EDI
006C0A64  8D 7D E8                  LEA EDI,[EBP + -0x18]
006C0A67  57                        PUSH EDI
006C0A68  8D 7D FC                  LEA EDI,[EBP + -0x4]
006C0A6B  57                        PUSH EDI
006C0A6C  51                        PUSH ECX
006C0A6D  52                        PUSH EDX
006C0A6E  50                        PUSH EAX
006C0A6F  FF 56 2C                  CALL dword ptr [ESI + 0x2c]
006C0A72  85 C0                     TEST EAX,EAX
006C0A74  0F 85 86 03 00 00         JNZ 0x006c0e00
006C0A7A  66 83 BB 98 00 00 00 08   CMP word ptr [EBX + 0x98],0x8
006C0A82  8B 4D E8                  MOV ECX,dword ptr [EBP + -0x18]
006C0A85  8B 7D FC                  MOV EDI,dword ptr [EBP + -0x4]
006C0A88  8B F1                     MOV ESI,ECX
006C0A8A  0F 95 C0                  SETNZ AL
006C0A8D  48                        DEC EAX
006C0A8E  25 80 00 00 00            AND EAX,0x80
006C0A93  8A D0                     MOV DL,AL
006C0A95  8A F2                     MOV DH,DL
006C0A97  8B C2                     MOV EAX,EDX
006C0A99  C1 E0 10                  SHL EAX,0x10
006C0A9C  66 8B C2                  MOV AX,DX
006C0A9F  C1 E9 02                  SHR ECX,0x2
006C0AA2  F3 AB                     STOSD.REP ES:EDI
006C0AA4  8B CE                     MOV ECX,ESI
006C0AA6  83 E1 03                  AND ECX,0x3
006C0AA9  F3 AA                     STOSB.REP ES:EDI
006C0AAB  8B 55 D8                  MOV EDX,dword ptr [EBP + -0x28]
006C0AAE  8B 43 0C                  MOV EAX,dword ptr [EBX + 0xc]
006C0AB1  52                        PUSH EDX
006C0AB2  8B 55 D4                  MOV EDX,dword ptr [EBP + -0x2c]
006C0AB5  8B 08                     MOV ECX,dword ptr [EAX]
006C0AB7  52                        PUSH EDX
006C0AB8  8B 55 E8                  MOV EDX,dword ptr [EBP + -0x18]
006C0ABB  52                        PUSH EDX
006C0ABC  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
006C0ABF  52                        PUSH EDX
006C0AC0  50                        PUSH EAX
006C0AC1  FF 51 4C                  CALL dword ptr [ECX + 0x4c]
006C0AC4  85 C0                     TEST EAX,EAX
006C0AC6  0F 85 34 03 00 00         JNZ 0x006c0e00
006C0ACC  8B 43 04                  MOV EAX,dword ptr [EBX + 0x4]
006C0ACF  80 E4 7F                  AND AH,0x7f
006C0AD2  89 43 04                  MOV dword ptr [EBX + 0x4],EAX
006C0AD5  E9 2D 04 00 00            JMP 0x006c0f07
LAB_006c0ada:
006C0ADA  8B 55 F0                  MOV EDX,dword ptr [EBP + -0x10]
006C0ADD  3B D7                     CMP EDX,EDI
006C0ADF  8B 53 18                  MOV EDX,dword ptr [EBX + 0x18]
006C0AE2  73 09                     JNC 0x006c0aed
006C0AE4  3B D7                     CMP EDX,EDI
006C0AE6  72 0D                     JC 0x006c0af5
006C0AE8  E9 23 FF FF FF            JMP 0x006c0a10
LAB_006c0aed:
006C0AED  3B D7                     CMP EDX,EDI
006C0AEF  0F 82 1B FF FF FF         JC 0x006c0a10
LAB_006c0af5:
006C0AF5  39 55 F0                  CMP dword ptr [EBP + -0x10],EDX
006C0AF8  72 26                     JC 0x006c0b20
006C0AFA  F6 43 04 01               TEST byte ptr [EBX + 0x4],0x1
006C0AFE  75 0E                     JNZ 0x006c0b0e
006C0B00  8B 43 0C                  MOV EAX,dword ptr [EBX + 0xc]
006C0B03  50                        PUSH EAX
006C0B04  8B 10                     MOV EDX,dword ptr [EAX]
006C0B06  FF 52 48                  CALL dword ptr [EDX + 0x48]
006C0B09  E9 F7 02 00 00            JMP 0x006c0e05
LAB_006c0b0e:
006C0B0E  83 E0 08                  AND EAX,0x8
006C0B11  C7 43 18 FF FF FF 7F      MOV dword ptr [EBX + 0x18],0x7fffffff
006C0B18  89 45 EC                  MOV dword ptr [EBP + -0x14],EAX
006C0B1B  E9 F0 FE FF FF            JMP 0x006c0a10
LAB_006c0b20:
006C0B20  0C 10                     OR AL,0x10
006C0B22  89 03                     MOV dword ptr [EBX],EAX
006C0B24  E9 E7 FE FF FF            JMP 0x006c0a10
LAB_006c0b29:
006C0B29  8B 45 F0                  MOV EAX,dword ptr [EBP + -0x10]
006C0B2C  8B 55 E4                  MOV EDX,dword ptr [EBP + -0x1c]
006C0B2F  3B C2                     CMP EAX,EDX
006C0B31  73 12                     JNC 0x006c0b45
006C0B33  F6 03 04                  TEST byte ptr [EBX],0x4
006C0B36  0F 84 CB 03 00 00         JZ 0x006c0f07
006C0B3C  8B C2                     MOV EAX,EDX
006C0B3E  89 45 E0                  MOV dword ptr [EBP + -0x20],EAX
006C0B41  2B C8                     SUB ECX,EAX
006C0B43  EB 13                     JMP 0x006c0b58
LAB_006c0b45:
006C0B45  F6 03 04                  TEST byte ptr [EBX],0x4
006C0B48  0F 85 B9 03 00 00         JNZ 0x006c0f07
006C0B4E  8B 4D E4                  MOV ECX,dword ptr [EBP + -0x1c]
006C0B51  C7 45 E0 00 00 00 00      MOV dword ptr [EBP + -0x20],0x0
LAB_006c0b58:
006C0B58  85 C9                     TEST ECX,ECX
006C0B5A  89 4D F4                  MOV dword ptr [EBP + -0xc],ECX
006C0B5D  0F 86 A4 03 00 00         JBE 0x006c0f07
006C0B63  33 F6                     XOR ESI,ESI
006C0B65  8B C1                     MOV EAX,ECX
006C0B67  66 8B B3 96 00 00 00      MOV SI,word ptr [EBX + 0x96]
006C0B6E  33 D2                     XOR EDX,EDX
006C0B70  F7 F6                     DIV ESI
006C0B72  3B F8                     CMP EDI,EAX
006C0B74  7D 05                     JGE 0x006c0b7b
006C0B76  0F AF F7                  IMUL ESI,EDI
006C0B79  EB 03                     JMP 0x006c0b7e
LAB_006c0b7b:
006C0B7B  8B 75 F4                  MOV ESI,dword ptr [EBP + -0xc]
LAB_006c0b7e:
006C0B7E  8D 55 D8                  LEA EDX,[EBP + -0x28]
006C0B81  6A 00                     PUSH 0x0
006C0B83  52                        PUSH EDX
006C0B84  8B 43 0C                  MOV EAX,dword ptr [EBX + 0xc]
006C0B87  8D 55 D4                  LEA EDX,[EBP + -0x2c]
006C0B8A  8B 7D F4                  MOV EDI,dword ptr [EBP + -0xc]
006C0B8D  52                        PUSH EDX
006C0B8E  8B 08                     MOV ECX,dword ptr [EAX]
006C0B90  8D 55 E8                  LEA EDX,[EBP + -0x18]
006C0B93  89 75 DC                  MOV dword ptr [EBP + -0x24],ESI
006C0B96  52                        PUSH EDX
006C0B97  8D 55 FC                  LEA EDX,[EBP + -0x4]
006C0B9A  52                        PUSH EDX
006C0B9B  8B 55 E0                  MOV EDX,dword ptr [EBP + -0x20]
006C0B9E  57                        PUSH EDI
006C0B9F  52                        PUSH EDX
006C0BA0  50                        PUSH EAX
006C0BA1  FF 51 2C                  CALL dword ptr [ECX + 0x2c]
006C0BA4  85 C0                     TEST EAX,EAX
006C0BA6  0F 85 54 02 00 00         JNZ 0x006c0e00
006C0BAC  3B F7                     CMP ESI,EDI
006C0BAE  73 44                     JNC 0x006c0bf4
006C0BB0  F6 43 04 01               TEST byte ptr [EBX + 0x4],0x1
006C0BB4  75 3E                     JNZ 0x006c0bf4
006C0BB6  8B 4D E8                  MOV ECX,dword ptr [EBP + -0x18]
006C0BB9  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
006C0BBC  2B CE                     SUB ECX,ESI
006C0BBE  33 C0                     XOR EAX,EAX
006C0BC0  66 83 BB 98 00 00 00 08   CMP word ptr [EBX + 0x98],0x8
006C0BC8  8D 3C 16                  LEA EDI,[ESI + EDX*0x1]
006C0BCB  8B F1                     MOV ESI,ECX
006C0BCD  0F 95 C0                  SETNZ AL
006C0BD0  48                        DEC EAX
006C0BD1  25 80 00 00 00            AND EAX,0x80
006C0BD6  8A D0                     MOV DL,AL
006C0BD8  8A F2                     MOV DH,DL
006C0BDA  8B C2                     MOV EAX,EDX
006C0BDC  C1 E0 10                  SHL EAX,0x10
006C0BDF  66 8B C2                  MOV AX,DX
006C0BE2  C1 E9 02                  SHR ECX,0x2
006C0BE5  F3 AB                     STOSD.REP ES:EDI
006C0BE7  8B CE                     MOV ECX,ESI
006C0BE9  8B 75 DC                  MOV ESI,dword ptr [EBP + -0x24]
006C0BEC  83 E1 03                  AND ECX,0x3
006C0BEF  F3 AA                     STOSB.REP ES:EDI
006C0BF1  8B 7D F4                  MOV EDI,dword ptr [EBP + -0xc]
LAB_006c0bf4:
006C0BF4  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
006C0BF7  56                        PUSH ESI
006C0BF8  53                        PUSH EBX
006C0BF9  50                        PUSH EAX
006C0BFA  E8 71 F2 FF FF            CALL 0x006bfe70
006C0BFF  8B 83 C0 00 00 00         MOV EAX,dword ptr [EBX + 0xc0]
006C0C05  85 C0                     TEST EAX,EAX
006C0C07  0F 8F 86 01 00 00         JG 0x006c0d93
006C0C0D  8B 4D E0                  MOV ECX,dword ptr [EBP + -0x20]
006C0C10  8B 43 04                  MOV EAX,dword ptr [EBX + 0x4]
006C0C13  A8 01                     TEST AL,0x1
006C0C15  8D 14 0E                  LEA EDX,[ESI + ECX*0x1]
006C0C18  89 53 18                  MOV dword ptr [EBX + 0x18],EDX
006C0C1B  74 5D                     JZ 0x006c0c7a
006C0C1D  8B 4B 20                  MOV ECX,dword ptr [EBX + 0x20]
006C0C20  C7 83 BC 00 00 00 00 00 00 00  MOV dword ptr [EBX + 0xbc],0x0
006C0C2A  F6 C4 20                  TEST AH,0x20
006C0C2D  89 4B 28                  MOV dword ptr [EBX + 0x28],ECX
006C0C30  74 16                     JZ 0x006c0c48
006C0C32  66 8B 43 4C               MOV AX,word ptr [EBX + 0x4c]
006C0C36  66 48                     DEC AX
006C0C38  66 F7 D8                  NEG AX
006C0C3B  1B C0                     SBB EAX,EAX
006C0C3D  83 E0 24                  AND EAX,0x24
006C0C40  83 C0 1A                  ADD EAX,0x1a
006C0C43  03 C1                     ADD EAX,ECX
006C0C45  89 43 28                  MOV dword ptr [EBX + 0x28],EAX
LAB_006c0c48:
006C0C48  66 83 7B 4C 02            CMP word ptr [EBX + 0x4c],0x2
006C0C4D  75 05                     JNZ 0x006c0c54
006C0C4F  8B 43 66                  MOV EAX,dword ptr [EBX + 0x66]
006C0C52  EB 10                     JMP 0x006c0c64
LAB_006c0c54:
006C0C54  8B 43 5E                  MOV EAX,dword ptr [EBX + 0x5e]
006C0C57  33 C9                     XOR ECX,ECX
006C0C59  66 8B 8B 96 00 00 00      MOV CX,word ptr [EBX + 0x96]
006C0C60  33 D2                     XOR EDX,EDX
006C0C62  F7 F1                     DIV ECX
LAB_006c0c64:
006C0C64  3B F7                     CMP ESI,EDI
006C0C66  89 83 C0 00 00 00         MOV dword ptr [EBX + 0xc0],EAX
006C0C6C  0F 83 21 01 00 00         JNC 0x006c0d93
006C0C72  2B FE                     SUB EDI,ESI
006C0C74  57                        PUSH EDI
006C0C75  E9 0D 01 00 00            JMP 0x006c0d87
LAB_006c0c7a:
006C0C7A  3B F7                     CMP ESI,EDI
006C0C7C  0F 83 11 01 00 00         JNC 0x006c0d93
006C0C82  8B 3D F4 4F 85 00         MOV EDI,dword ptr [0x00854ff4]
006C0C88  85 FF                     TEST EDI,EDI
006C0C8A  0F 84 03 01 00 00         JZ 0x006c0d93
006C0C90  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
LAB_006c0c93:
006C0C93  3B 47 34                  CMP EAX,dword ptr [EDI + 0x34]
006C0C96  7C 05                     JL 0x006c0c9d
006C0C98  3B 47 38                  CMP EAX,dword ptr [EDI + 0x38]
006C0C9B  7E 0B                     JLE 0x006c0ca8
LAB_006c0c9d:
006C0C9D  8B 3F                     MOV EDI,dword ptr [EDI]
006C0C9F  85 FF                     TEST EDI,EDI
006C0CA1  75 F0                     JNZ 0x006c0c93
006C0CA3  E9 EB 00 00 00            JMP 0x006c0d93
LAB_006c0ca8:
006C0CA8  F6 47 14 40               TEST byte ptr [EDI + 0x14],0x40
006C0CAC  0F 84 E1 00 00 00         JZ 0x006c0d93
006C0CB2  83 C8 FF                  OR EAX,0xffffffff
006C0CB5  89 47 34                  MOV dword ptr [EDI + 0x34],EAX
006C0CB8  89 47 38                  MOV dword ptr [EDI + 0x38],EAX
006C0CBB  8B 47 10                  MOV EAX,dword ptr [EDI + 0x10]
006C0CBE  89 43 2C                  MOV dword ptr [EBX + 0x2c],EAX
006C0CC1  8B 4F 04                  MOV ECX,dword ptr [EDI + 0x4]
006C0CC4  89 4B 1C                  MOV dword ptr [EBX + 0x1c],ECX
006C0CC7  8B 57 0C                  MOV EDX,dword ptr [EDI + 0xc]
006C0CCA  89 53 24                  MOV dword ptr [EBX + 0x24],EDX
006C0CCD  8B 47 14                  MOV EAX,dword ptr [EDI + 0x14]
006C0CD0  89 43 04                  MOV dword ptr [EBX + 0x4],EAX
006C0CD3  C7 43 18 FF FF FF 7F      MOV dword ptr [EBX + 0x18],0x7fffffff
006C0CDA  FF 15 DC BE 85 00         CALL dword ptr [0x0085bedc]
006C0CE0  89 43 08                  MOV dword ptr [EBX + 0x8],EAX
006C0CE3  8B 4F 08                  MOV ECX,dword ptr [EDI + 0x8]
006C0CE6  8B 43 04                  MOV EAX,dword ptr [EBX + 0x4]
006C0CE9  89 4B 20                  MOV dword ptr [EBX + 0x20],ECX
006C0CEC  8B 57 08                  MOV EDX,dword ptr [EDI + 0x8]
006C0CEF  C7 83 BC 00 00 00 00 00 00 00  MOV dword ptr [EBX + 0xbc],0x0
006C0CF9  F6 C4 20                  TEST AH,0x20
006C0CFC  89 53 28                  MOV dword ptr [EBX + 0x28],EDX
006C0CFF  74 37                     JZ 0x006c0d38
006C0D01  8B 4B 1C                  MOV ECX,dword ptr [EBX + 0x1c]
006C0D04  8D 7B 4C                  LEA EDI,[EBX + 0x4c]
006C0D07  6A 3E                     PUSH 0x3e
006C0D09  8B C2                     MOV EAX,EDX
006C0D0B  8B 51 04                  MOV EDX,dword ptr [ECX + 0x4]
006C0D0E  57                        PUSH EDI
006C0D0F  50                        PUSH EAX
006C0D10  52                        PUSH EDX
006C0D11  E8 1A 3C 01 00            CALL 0x006d4930
006C0D16  85 C0                     TEST EAX,EAX
006C0D18  0F 85 E2 00 00 00         JNZ 0x006c0e00
006C0D1E  66 8B 07                  MOV AX,word ptr [EDI]
006C0D21  8B 4B 28                  MOV ECX,dword ptr [EBX + 0x28]
006C0D24  66 48                     DEC AX
006C0D26  66 F7 D8                  NEG AX
006C0D29  1B C0                     SBB EAX,EAX
006C0D2B  83 E0 24                  AND EAX,0x24
006C0D2E  83 C0 1A                  ADD EAX,0x1a
006C0D31  03 C8                     ADD ECX,EAX
006C0D33  89 4B 28                  MOV dword ptr [EBX + 0x28],ECX
006C0D36  EB 27                     JMP 0x006c0d5f
LAB_006c0d38:
006C0D38  8B 73 24                  MOV ESI,dword ptr [EBX + 0x24]
006C0D3B  8D 7B 4C                  LEA EDI,[EBX + 0x4c]
006C0D3E  66 8B 0E                  MOV CX,word ptr [ESI]
006C0D41  66 49                     DEC CX
006C0D43  66 F7 D9                  NEG CX
006C0D46  1B C9                     SBB ECX,ECX
006C0D48  83 E1 24                  AND ECX,0x24
006C0D4B  83 C1 1A                  ADD ECX,0x1a
006C0D4E  8B D1                     MOV EDX,ECX
006C0D50  C1 E9 02                  SHR ECX,0x2
006C0D53  F3 A5                     MOVSD.REP ES:EDI,ESI
006C0D55  8B CA                     MOV ECX,EDX
006C0D57  83 E1 03                  AND ECX,0x3
006C0D5A  F3 A4                     MOVSB.REP ES:EDI,ESI
006C0D5C  8B 75 DC                  MOV ESI,dword ptr [EBP + -0x24]
LAB_006c0d5f:
006C0D5F  66 83 7B 4C 02            CMP word ptr [EBX + 0x4c],0x2
006C0D64  75 05                     JNZ 0x006c0d6b
006C0D66  8B 43 66                  MOV EAX,dword ptr [EBX + 0x66]
006C0D69  EB 10                     JMP 0x006c0d7b
LAB_006c0d6b:
006C0D6B  8B 43 5E                  MOV EAX,dword ptr [EBX + 0x5e]
006C0D6E  33 C9                     XOR ECX,ECX
006C0D70  66 8B 8B 96 00 00 00      MOV CX,word ptr [EBX + 0x96]
006C0D77  33 D2                     XOR EDX,EDX
006C0D79  F7 F1                     DIV ECX
LAB_006c0d7b:
006C0D7B  89 83 C0 00 00 00         MOV dword ptr [EBX + 0xc0],EAX
006C0D81  8B 45 F4                  MOV EAX,dword ptr [EBP + -0xc]
006C0D84  2B C6                     SUB EAX,ESI
006C0D86  50                        PUSH EAX
LAB_006c0d87:
006C0D87  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
006C0D8A  53                        PUSH EBX
006C0D8B  03 F2                     ADD ESI,EDX
006C0D8D  56                        PUSH ESI
006C0D8E  E8 DD F0 FF FF            CALL 0x006bfe70
LAB_006c0d93:
006C0D93  8B 55 D8                  MOV EDX,dword ptr [EBP + -0x28]
006C0D96  8B 43 0C                  MOV EAX,dword ptr [EBX + 0xc]
006C0D99  52                        PUSH EDX
006C0D9A  8B 55 D4                  MOV EDX,dword ptr [EBP + -0x2c]
006C0D9D  8B 08                     MOV ECX,dword ptr [EAX]
006C0D9F  52                        PUSH EDX
006C0DA0  8B 55 E8                  MOV EDX,dword ptr [EBP + -0x18]
006C0DA3  52                        PUSH EDX
006C0DA4  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
006C0DA7  52                        PUSH EDX
006C0DA8  50                        PUSH EAX
006C0DA9  FF 51 4C                  CALL dword ptr [ECX + 0x4c]
006C0DAC  85 C0                     TEST EAX,EAX
006C0DAE  75 50                     JNZ 0x006c0e00
006C0DB0  8B 0B                     MOV ECX,dword ptr [EBX]
006C0DB2  8B 83 C0 00 00 00         MOV EAX,dword ptr [EBX + 0xc0]
006C0DB8  83 F1 04                  XOR ECX,0x4
006C0DBB  85 C0                     TEST EAX,EAX
006C0DBD  89 0B                     MOV dword ptr [EBX],ECX
006C0DBF  0F 8F 42 01 00 00         JG 0x006c0f07
006C0DC5  8B 43 04                  MOV EAX,dword ptr [EBX + 0x4]
006C0DC8  A8 01                     TEST AL,0x1
006C0DCA  0F 85 37 01 00 00         JNZ 0x006c0f07
006C0DD0  8B 4D E4                  MOV ECX,dword ptr [EBP + -0x1c]
006C0DD3  8B 55 F0                  MOV EDX,dword ptr [EBP + -0x10]
006C0DD6  3B D1                     CMP EDX,ECX
006C0DD8  76 06                     JBE 0x006c0de0
006C0DDA  80 CC 80                  OR AH,0x80
006C0DDD  89 43 04                  MOV dword ptr [EBX + 0x4],EAX
LAB_006c0de0:
006C0DE0  39 4D E0                  CMP dword ptr [EBP + -0x20],ECX
006C0DE3  0F 82 1E 01 00 00         JC 0x006c0f07
006C0DE9  8B 43 0C                  MOV EAX,dword ptr [EBX + 0xc]
006C0DEC  6A 00                     PUSH 0x0
006C0DEE  6A 00                     PUSH 0x0
006C0DF0  6A 00                     PUSH 0x0
006C0DF2  8B 08                     MOV ECX,dword ptr [EAX]
006C0DF4  50                        PUSH EAX
006C0DF5  FF 51 30                  CALL dword ptr [ECX + 0x30]
006C0DF8  85 C0                     TEST EAX,EAX
006C0DFA  0F 84 07 01 00 00         JZ 0x006c0f07
LAB_006c0e00:
006C0E00  BE 01 00 00 00            MOV ESI,0x1
LAB_006c0e05:
006C0E05  8B 03                     MOV EAX,dword ptr [EBX]
006C0E07  83 E0 08                  AND EAX,0x8
006C0E0A  89 45 EC                  MOV dword ptr [EBP + -0x14],EAX
006C0E0D  8B 43 10                  MOV EAX,dword ptr [EBX + 0x10]
006C0E10  85 C0                     TEST EAX,EAX
006C0E12  74 0D                     JZ 0x006c0e21
006C0E14  8B 10                     MOV EDX,dword ptr [EAX]
006C0E16  50                        PUSH EAX
006C0E17  FF 52 08                  CALL dword ptr [EDX + 0x8]
006C0E1A  C7 43 10 00 00 00 00      MOV dword ptr [EBX + 0x10],0x0
LAB_006c0e21:
006C0E21  8B 43 0C                  MOV EAX,dword ptr [EBX + 0xc]
006C0E24  85 C0                     TEST EAX,EAX
006C0E26  74 06                     JZ 0x006c0e2e
006C0E28  8B 08                     MOV ECX,dword ptr [EAX]
006C0E2A  50                        PUSH EAX
006C0E2B  FF 51 08                  CALL dword ptr [ECX + 0x8]
LAB_006c0e2e:
006C0E2E  8B 53 30                  MOV EDX,dword ptr [EBX + 0x30]
006C0E31  B9 31 00 00 00            MOV ECX,0x31
006C0E36  89 55 DC                  MOV dword ptr [EBP + -0x24],EDX
006C0E39  8B 53 34                  MOV EDX,dword ptr [EBX + 0x34]
006C0E3C  33 C0                     XOR EAX,EAX
006C0E3E  8B FB                     MOV EDI,EBX
006C0E40  F3 AB                     STOSD.REP ES:EDI
006C0E42  8B 3D F4 4F 85 00         MOV EDI,dword ptr [0x00854ff4]
006C0E48  85 FF                     TEST EDI,EDI
006C0E4A  74 13                     JZ 0x006c0e5f
006C0E4C  8B 5D F8                  MOV EBX,dword ptr [EBP + -0x8]
LAB_006c0e4f:
006C0E4F  3B 5F 34                  CMP EBX,dword ptr [EDI + 0x34]
006C0E52  7C 05                     JL 0x006c0e59
006C0E54  3B 5F 38                  CMP EBX,dword ptr [EDI + 0x38]
006C0E57  7E 40                     JLE 0x006c0e99
LAB_006c0e59:
006C0E59  8B 3F                     MOV EDI,dword ptr [EDI]
006C0E5B  85 FF                     TEST EDI,EDI
006C0E5D  75 F0                     JNZ 0x006c0e4f
LAB_006c0e5f:
006C0E5F  8B 45 EC                  MOV EAX,dword ptr [EBP + -0x14]
006C0E62  85 C0                     TEST EAX,EAX
006C0E64  0F 84 D6 00 00 00         JZ 0x006c0f40
006C0E6A  8B 55 F8                  MOV EDX,dword ptr [EBP + -0x8]
006C0E6D  A1 F0 4F 85 00            MOV EAX,[0x00854ff0]
006C0E72  81 E2 FF FF 00 00         AND EDX,0xffff
006C0E78  81 CA 00 00 53 44         OR EDX,0x44530000
006C0E7E  F7 DE                     NEG ESI
006C0E80  1B F6                     SBB ESI,ESI
006C0E82  52                        PUSH EDX
006C0E83  83 E6 07                  AND ESI,0x7
006C0E86  46                        INC ESI
006C0E87  56                        PUSH ESI
006C0E88  68 B9 03 00 00            PUSH 0x3b9
006C0E8D  50                        PUSH EAX
006C0E8E  FF 15 5C BE 85 00         CALL dword ptr [0x0085be5c]
006C0E94  E9 A7 00 00 00            JMP 0x006c0f40
LAB_006c0e99:
006C0E99  8B 47 14                  MOV EAX,dword ptr [EDI + 0x14]
006C0E9C  A8 10                     TEST AL,0x10
006C0E9E  75 05                     JNZ 0x006c0ea5
006C0EA0  8B 4F 18                  MOV ECX,dword ptr [EDI + 0x18]
006C0EA3  EB 03                     JMP 0x006c0ea8
LAB_006c0ea5:
006C0EA5  8B 4D DC                  MOV ECX,dword ptr [EBP + -0x24]
LAB_006c0ea8:
006C0EA8  A8 20                     TEST AL,0x20
006C0EAA  75 03                     JNZ 0x006c0eaf
006C0EAC  8B 57 1C                  MOV EDX,dword ptr [EDI + 0x1c]
LAB_006c0eaf:
006C0EAF  F6 C4 20                  TEST AH,0x20
006C0EB2  53                        PUSH EBX
006C0EB3  74 16                     JZ 0x006c0ecb
006C0EB5  52                        PUSH EDX
006C0EB6  8B 57 04                  MOV EDX,dword ptr [EDI + 0x4]
006C0EB9  51                        PUSH ECX
006C0EBA  8B 4F 08                  MOV ECX,dword ptr [EDI + 0x8]
006C0EBD  50                        PUSH EAX
006C0EBE  8A 47 10                  MOV AL,byte ptr [EDI + 0x10]
006C0EC1  50                        PUSH EAX
006C0EC2  51                        PUSH ECX
006C0EC3  52                        PUSH EDX
006C0EC4  E8 97 15 00 00            CALL 0x006c2460
006C0EC9  EB 24                     JMP 0x006c0eef
LAB_006c0ecb:
006C0ECB  8B 77 30                  MOV ESI,dword ptr [EDI + 0x30]
006C0ECE  56                        PUSH ESI
006C0ECF  8B 77 2C                  MOV ESI,dword ptr [EDI + 0x2c]
006C0ED2  56                        PUSH ESI
006C0ED3  8B 77 28                  MOV ESI,dword ptr [EDI + 0x28]
006C0ED6  56                        PUSH ESI
006C0ED7  8B 77 24                  MOV ESI,dword ptr [EDI + 0x24]
006C0EDA  56                        PUSH ESI
006C0EDB  8B 77 20                  MOV ESI,dword ptr [EDI + 0x20]
006C0EDE  56                        PUSH ESI
006C0EDF  52                        PUSH EDX
006C0EE0  51                        PUSH ECX
006C0EE1  8B 4F 0C                  MOV ECX,dword ptr [EDI + 0xc]
006C0EE4  50                        PUSH EAX
006C0EE5  8A 47 10                  MOV AL,byte ptr [EDI + 0x10]
006C0EE8  50                        PUSH EAX
006C0EE9  51                        PUSH ECX
006C0EEA  E8 11 F9 FF FF            CALL 0x006c0800
LAB_006c0eef:
006C0EEF  8B 45 EC                  MOV EAX,dword ptr [EBP + -0x14]
006C0EF2  85 C0                     TEST EAX,EAX
006C0EF4  74 06                     JZ 0x006c0efc
006C0EF6  53                        PUSH EBX
006C0EF7  E8 D4 09 00 00            CALL 0x006c18d0
LAB_006c0efc:
006C0EFC  83 C8 FF                  OR EAX,0xffffffff
006C0EFF  89 47 34                  MOV dword ptr [EDI + 0x34],EAX
006C0F02  89 47 38                  MOV dword ptr [EDI + 0x38],EAX
006C0F05  EB 39                     JMP 0x006c0f40
LAB_006c0f07:
006C0F07  8B 45 EC                  MOV EAX,dword ptr [EBP + -0x14]
006C0F0A  85 C0                     TEST EAX,EAX
006C0F0C  74 32                     JZ 0x006c0f40
006C0F0E  8B 4D F8                  MOV ECX,dword ptr [EBP + -0x8]
006C0F11  8B 15 F0 4F 85 00         MOV EDX,dword ptr [0x00854ff0]
006C0F17  81 E1 FF FF 00 00         AND ECX,0xffff
006C0F1D  81 C9 00 00 53 44         OR ECX,0x44530000
006C0F23  51                        PUSH ECX
006C0F24  6A 01                     PUSH 0x1
006C0F26  68 B9 03 00 00            PUSH 0x3b9
006C0F2B  52                        PUSH EDX
006C0F2C  FF 15 5C BE 85 00         CALL dword ptr [0x0085be5c]
006C0F32  EB 0C                     JMP 0x006c0f40
LAB_006c0f34:
006C0F34  83 F9 03                  CMP ECX,0x3
006C0F37  75 07                     JNZ 0x006c0f40
006C0F39  C7 45 D0 00 00 00 00      MOV dword ptr [EBP + -0x30],0x0
LAB_006c0f40:
006C0F40  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
006C0F43  40                        INC EAX
006C0F44  83 F8 20                  CMP EAX,0x20
006C0F47  89 45 F8                  MOV dword ptr [EBP + -0x8],EAX
006C0F4A  0F 8C B2 F9 FF FF         JL 0x006c0902
006C0F50  8B 35 90 BB 85 00         MOV ESI,dword ptr [0x0085bb90]
006C0F56  68 98 68 85 00            PUSH 0x856898
006C0F5B  FF D6                     CALL ESI
006C0F5D  8B 45 D0                  MOV EAX,dword ptr [EBP + -0x30]
006C0F60  85 C0                     TEST EAX,EAX
006C0F62  74 36                     JZ 0x006c0f9a
006C0F64  68 80 68 85 00            PUSH 0x856880
006C0F69  FF 15 8C BB 85 00         CALL dword ptr [0x0085bb8c]
006C0F6F  8B 15 C4 68 85 00         MOV EDX,dword ptr [0x008568c4]
006C0F75  33 C0                     XOR EAX,EAX
006C0F77  85 D2                     TEST EDX,EDX
006C0F79  0F 94 C0                  SETZ AL
006C0F7C  68 80 68 85 00            PUSH 0x856880
006C0F81  A3 C4 68 85 00            MOV [0x008568c4],EAX
006C0F86  FF D6                     CALL ESI
006C0F88  8B 0D C0 68 85 00         MOV ECX,dword ptr [0x008568c0]
006C0F8E  51                        PUSH ECX
006C0F8F  FF 15 7C BB 85 00         CALL dword ptr [0x0085bb7c]
006C0F95  E9 4F F9 FF FF            JMP 0x006c08e9
LAB_006c0f9a:
006C0F9A  6A 32                     PUSH 0x32
006C0F9C  FF 15 6C BC 85 00         CALL dword ptr [0x0085bc6c]
006C0FA2  E9 42 F9 FF FF            JMP 0x006c08e9
