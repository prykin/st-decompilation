FUN_00565820:
00565820  55                        PUSH EBP
00565821  8B EC                     MOV EBP,ESP
00565823  81 EC D4 00 00 00         SUB ESP,0xd4
00565829  33 C9                     XOR ECX,ECX
0056582B  33 C0                     XOR EAX,EAX
0056582D  89 4D 84                  MOV dword ptr [EBP + -0x7c],ECX
00565830  89 85 70 FF FF FF         MOV dword ptr [EBP + 0xffffff70],EAX
00565836  89 4D 88                  MOV dword ptr [EBP + -0x78],ECX
00565839  8B 15 F8 8D 85 00         MOV EDX,dword ptr [0x00858df8]
0056583F  89 85 74 FF FF FF         MOV dword ptr [EBP + 0xffffff74],EAX
00565845  89 4D 8C                  MOV dword ptr [EBP + -0x74],ECX
00565848  53                        PUSH EBX
00565849  89 85 78 FF FF FF         MOV dword ptr [EBP + 0xffffff78],EAX
0056584F  56                        PUSH ESI
00565850  89 4D 90                  MOV dword ptr [EBP + -0x70],ECX
00565853  57                        PUSH EDI
00565854  89 85 7C FF FF FF         MOV dword ptr [EBP + 0xffffff7c],EAX
0056585A  33 FF                     XOR EDI,EDI
0056585C  89 4D 94                  MOV dword ptr [EBP + -0x6c],ECX
0056585F  89 45 80                  MOV dword ptr [EBP + -0x80],EAX
00565862  8D 8D 30 FF FF FF         LEA ECX,[EBP + 0xffffff30]
00565868  8D 85 2C FF FF FF         LEA EAX,[EBP + 0xffffff2c]
0056586E  57                        PUSH EDI
0056586F  51                        PUSH ECX
00565870  89 7D E0                  MOV dword ptr [EBP + -0x20],EDI
00565873  89 7D BC                  MOV dword ptr [EBP + -0x44],EDI
00565876  89 7D F0                  MOV dword ptr [EBP + -0x10],EDI
00565879  89 7D A4                  MOV dword ptr [EBP + -0x5c],EDI
0056587C  89 95 2C FF FF FF         MOV dword ptr [EBP + 0xffffff2c],EDX
00565882  A3 F8 8D 85 00            MOV [0x00858df8],EAX
00565887  E8 64 7F 1C 00            CALL 0x0072d7f0
0056588C  8B F0                     MOV ESI,EAX
0056588E  83 C4 08                  ADD ESP,0x8
00565891  3B F7                     CMP ESI,EDI
00565893  0F 85 C6 09 00 00         JNZ 0x0056625f
00565899  8B 55 1C                  MOV EDX,dword ptr [EBP + 0x1c]
0056589C  8B 45 18                  MOV EAX,dword ptr [EBP + 0x18]
0056589F  8B 4D 14                  MOV ECX,dword ptr [EBP + 0x14]
005658A2  52                        PUSH EDX
005658A3  50                        PUSH EAX
005658A4  51                        PUSH ECX
005658A5  E8 96 B9 FF FF            CALL 0x00561240
005658AA  89 45 F0                  MOV dword ptr [EBP + -0x10],EAX
005658AD  8B 70 10                  MOV ESI,dword ptr [EAX + 0x10]
005658B0  8B 78 08                  MOV EDI,dword ptr [EAX + 0x8]
005658B3  83 C6 02                  ADD ESI,0x2
005658B6  83 C7 02                  ADD EDI,0x2
005658B9  8B DE                     MOV EBX,ESI
005658BB  0F AF DF                  IMUL EBX,EDI
005658BE  89 7D F8                  MOV dword ptr [EBP + -0x8],EDI
005658C1  89 75 DC                  MOV dword ptr [EBP + -0x24],ESI
005658C4  8D 14 DD 00 00 00 00      LEA EDX,[EBX*0x8 + 0x0]
005658CB  2B D3                     SUB EDX,EBX
005658CD  52                        PUSH EDX
005658CE  E8 3D 53 14 00            CALL 0x006aac10
005658D3  8B 4D F0                  MOV ECX,dword ptr [EBP + -0x10]
005658D6  89 45 BC                  MOV dword ptr [EBP + -0x44],EAX
005658D9  03 C3                     ADD EAX,EBX
005658DB  33 D2                     XOR EDX,EDX
005658DD  89 45 D0                  MOV dword ptr [EBP + -0x30],EAX
005658E0  8B 41 04                  MOV EAX,dword ptr [ECX + 0x4]
005658E3  8B 4D 0C                  MOV ECX,dword ptr [EBP + 0xc]
005658E6  89 55 E4                  MOV dword ptr [EBP + -0x1c],EDX
005658E9  89 55 D8                  MOV dword ptr [EBP + -0x28],EDX
005658EC  8D 4C 08 FF               LEA ECX,[EAX + ECX*0x1 + -0x1]
005658F0  85 C9                     TEST ECX,ECX
005658F2  89 4D D4                  MOV dword ptr [EBP + -0x2c],ECX
005658F5  7D 10                     JGE 0x00565907
005658F7  F7 D9                     NEG ECX
005658F9  89 4D E4                  MOV dword ptr [EBP + -0x1c],ECX
005658FC  8B 4D D4                  MOV ECX,dword ptr [EBP + -0x2c]
005658FF  03 CF                     ADD ECX,EDI
00565901  89 55 D4                  MOV dword ptr [EBP + -0x2c],EDX
00565904  89 4D F8                  MOV dword ptr [EBP + -0x8],ECX
LAB_00565907:
00565907  8B 4D F0                  MOV ECX,dword ptr [EBP + -0x10]
0056590A  8B 49 08                  MOV ECX,dword ptr [ECX + 0x8]
0056590D  03 C8                     ADD ECX,EAX
0056590F  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
00565912  03 C8                     ADD ECX,EAX
00565914  0F BF 05 78 B2 7F 00      MOVSX EAX,word ptr [0x007fb278]
0056591B  3B C8                     CMP ECX,EAX
0056591D  7C 0C                     JL 0x0056592b
0056591F  2B C1                     SUB EAX,ECX
00565921  8B 4D F8                  MOV ECX,dword ptr [EBP + -0x8]
00565924  8D 44 01 FF               LEA EAX,[ECX + EAX*0x1 + -0x1]
00565928  89 45 F8                  MOV dword ptr [EBP + -0x8],EAX
LAB_0056592b:
0056592B  8B 4D F0                  MOV ECX,dword ptr [EBP + -0x10]
0056592E  8B 45 10                  MOV EAX,dword ptr [EBP + 0x10]
00565931  8B 49 0C                  MOV ECX,dword ptr [ECX + 0xc]
00565934  8D 44 01 FF               LEA EAX,[ECX + EAX*0x1 + -0x1]
00565938  85 C0                     TEST EAX,EAX
0056593A  89 45 C0                  MOV dword ptr [EBP + -0x40],EAX
0056593D  7D 13                     JGE 0x00565952
0056593F  8B D0                     MOV EDX,EAX
00565941  C7 45 C0 00 00 00 00      MOV dword ptr [EBP + -0x40],0x0
00565948  F7 DA                     NEG EDX
0056594A  03 F0                     ADD ESI,EAX
0056594C  89 55 D8                  MOV dword ptr [EBP + -0x28],EDX
0056594F  89 75 DC                  MOV dword ptr [EBP + -0x24],ESI
LAB_00565952:
00565952  8B 45 F0                  MOV EAX,dword ptr [EBP + -0x10]
00565955  8B 40 10                  MOV EAX,dword ptr [EAX + 0x10]
00565958  03 C1                     ADD EAX,ECX
0056595A  8B 4D 10                  MOV ECX,dword ptr [EBP + 0x10]
0056595D  03 C1                     ADD EAX,ECX
0056595F  0F BF 0D 7A B2 7F 00      MOVSX ECX,word ptr [0x007fb27a]
00565966  3B C1                     CMP EAX,ECX
00565968  7C 09                     JL 0x00565973
0056596A  2B C8                     SUB ECX,EAX
0056596C  8D 74 0E FF               LEA ESI,[ESI + ECX*0x1 + -0x1]
00565970  89 75 DC                  MOV dword ptr [EBP + -0x24],ESI
LAB_00565973:
00565973  8B CA                     MOV ECX,EDX
00565975  8B 45 E4                  MOV EAX,dword ptr [EBP + -0x1c]
00565978  0F AF CF                  IMUL ECX,EDI
0056597B  03 C8                     ADD ECX,EAX
0056597D  8B 45 D0                  MOV EAX,dword ptr [EBP + -0x30]
00565980  03 C1                     ADD EAX,ECX
00565982  C7 45 F4 00 00 00 00      MOV dword ptr [EBP + -0xc],0x0
00565989  85 F6                     TEST ESI,ESI
0056598B  89 45 D0                  MOV dword ptr [EBP + -0x30],EAX
0056598E  0F 8E CD 04 00 00         JLE 0x00565e61
00565994  8B 4D D4                  MOV ECX,dword ptr [EBP + -0x2c]
00565997  8B D0                     MOV EDX,EAX
00565999  89 55 EC                  MOV dword ptr [EBP + -0x14],EDX
LAB_0056599c:
0056599C  8B 45 C0                  MOV EAX,dword ptr [EBP + -0x40]
0056599F  8B 55 F4                  MOV EDX,dword ptr [EBP + -0xc]
005659A2  03 C2                     ADD EAX,EDX
005659A4  8B 35 80 B2 7F 00         MOV ESI,dword ptr [0x007fb280]
005659AA  0F BF 15 78 B2 7F 00      MOVSX EDX,word ptr [0x007fb278]
005659B1  0F AF D0                  IMUL EDX,EAX
005659B4  03 D1                     ADD EDX,ECX
005659B6  8D 14 56                  LEA EDX,[ESI + EDX*0x2]
005659B9  89 55 B0                  MOV dword ptr [EBP + -0x50],EDX
005659BC  0F BF 15 40 B2 7F 00      MOVSX EDX,word ptr [0x007fb240]
005659C3  0F AF D0                  IMUL EDX,EAX
005659C6  A1 48 B2 7F 00            MOV EAX,[0x007fb248]
005659CB  03 D1                     ADD EDX,ECX
005659CD  8D 14 D0                  LEA EDX,[EAX + EDX*0x8]
005659D0  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
005659D3  89 55 E8                  MOV dword ptr [EBP + -0x18],EDX
005659D6  33 D2                     XOR EDX,EDX
005659D8  85 C0                     TEST EAX,EAX
005659DA  89 55 FC                  MOV dword ptr [EBP + -0x4],EDX
005659DD  0F 8E 61 04 00 00         JLE 0x00565e44
LAB_005659e3:
005659E3  8B 45 EC                  MOV EAX,dword ptr [EBP + -0x14]
005659E6  8B 4D B0                  MOV ECX,dword ptr [EBP + -0x50]
005659E9  89 4D A8                  MOV dword ptr [EBP + -0x58],ECX
005659EC  8B 4D E8                  MOV ECX,dword ptr [EBP + -0x18]
005659EF  8D 34 10                  LEA ESI,[EAX + EDX*0x1]
005659F2  83 C8 FF                  OR EAX,0xffffffff
005659F5  2B C3                     SUB EAX,EBX
005659F7  89 4D B4                  MOV dword ptr [EBP + -0x4c],ECX
005659FA  89 45 9C                  MOV dword ptr [EBP + -0x64],EAX
005659FD  B8 01 00 00 00            MOV EAX,0x1
00565A02  2B C3                     SUB EAX,EBX
00565A04  C7 45 CC 05 00 00 00      MOV dword ptr [EBP + -0x34],0x5
00565A0B  89 45 A0                  MOV dword ptr [EBP + -0x60],EAX
00565A0E  8B C7                     MOV EAX,EDI
00565A10  2B C3                     SUB EAX,EBX
00565A12  89 45 B8                  MOV dword ptr [EBP + -0x48],EAX
LAB_00565a15:
00565A15  8B 41 04                  MOV EAX,dword ptr [ECX + 0x4]
00565A18  85 C0                     TEST EAX,EAX
00565A1A  0F 84 7B 01 00 00         JZ 0x00565b9b
00565A20  81 78 20 AE 01 00 00      CMP dword ptr [EAX + 0x20],0x1ae
00565A27  0F 85 6E 01 00 00         JNZ 0x00565b9b
00565A2D  8B 45 F4                  MOV EAX,dword ptr [EBP + -0xc]
00565A30  85 C0                     TEST EAX,EAX
00565A32  7E 75                     JLE 0x00565aa9
00565A34  85 D2                     TEST EDX,EDX
00565A36  7E 29                     JLE 0x00565a61
00565A38  8B D6                     MOV EDX,ESI
00565A3A  2B D3                     SUB EDX,EBX
00565A3C  2B D7                     SUB EDX,EDI
00565A3E  8D 42 FF                  LEA EAX,[EDX + -0x1]
00565A41  8A 52 FF                  MOV DL,byte ptr [EDX + -0x1]
00565A44  80 CA 02                  OR DL,0x2
00565A47  88 10                     MOV byte ptr [EAX],DL
00565A49  8B C6                     MOV EAX,ESI
00565A4B  2B C7                     SUB EAX,EDI
00565A4D  8A 50 FF                  MOV DL,byte ptr [EAX + -0x1]
00565A50  80 CA 02                  OR DL,0x2
00565A53  88 50 FF                  MOV byte ptr [EAX + -0x1],DL
00565A56  8A 4C 18 FF               MOV CL,byte ptr [EAX + EBX*0x1 + -0x1]
00565A5A  80 C9 02                  OR CL,0x2
00565A5D  88 4C 18 FF               MOV byte ptr [EAX + EBX*0x1 + -0x1],CL
LAB_00565a61:
00565A61  8B CE                     MOV ECX,ESI
00565A63  2B CB                     SUB ECX,EBX
00565A65  2B CF                     SUB ECX,EDI
00565A67  8A 01                     MOV AL,byte ptr [ECX]
00565A69  0C 02                     OR AL,0x2
00565A6B  88 01                     MOV byte ptr [ECX],AL
00565A6D  8B C6                     MOV EAX,ESI
00565A6F  2B C7                     SUB EAX,EDI
00565A71  8A 10                     MOV DL,byte ptr [EAX]
00565A73  80 CA 02                  OR DL,0x2
00565A76  88 10                     MOV byte ptr [EAX],DL
00565A78  8A 14 18                  MOV DL,byte ptr [EAX + EBX*0x1]
00565A7B  80 CA 02                  OR DL,0x2
00565A7E  88 14 18                  MOV byte ptr [EAX + EBX*0x1],DL
00565A81  8B 55 F8                  MOV EDX,dword ptr [EBP + -0x8]
00565A84  4A                        DEC EDX
00565A85  39 55 FC                  CMP dword ptr [EBP + -0x4],EDX
00565A88  7D 1F                     JGE 0x00565aa9
00565A8A  8A 51 01                  MOV DL,byte ptr [ECX + 0x1]
00565A8D  80 CA 02                  OR DL,0x2
00565A90  88 51 01                  MOV byte ptr [ECX + 0x1],DL
00565A93  8A 50 01                  MOV DL,byte ptr [EAX + 0x1]
00565A96  80 CA 02                  OR DL,0x2
00565A99  88 50 01                  MOV byte ptr [EAX + 0x1],DL
00565A9C  8A 4C 18 01               MOV CL,byte ptr [EAX + EBX*0x1 + 0x1]
00565AA0  8D 44 18 01               LEA EAX,[EAX + EBX*0x1 + 0x1]
00565AA4  80 C9 02                  OR CL,0x2
00565AA7  88 08                     MOV byte ptr [EAX],CL
LAB_00565aa9:
00565AA9  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
00565AAC  85 D2                     TEST EDX,EDX
00565AAE  7E 26                     JLE 0x00565ad6
00565AB0  8B C6                     MOV EAX,ESI
00565AB2  2B C3                     SUB EAX,EBX
00565AB4  48                        DEC EAX
00565AB5  8A 08                     MOV CL,byte ptr [EAX]
00565AB7  80 C9 02                  OR CL,0x2
00565ABA  88 08                     MOV byte ptr [EAX],CL
00565ABC  8B 4D 9C                  MOV ECX,dword ptr [EBP + -0x64]
00565ABF  03 CE                     ADD ECX,ESI
00565AC1  8D 04 19                  LEA EAX,[ECX + EBX*0x1]
00565AC4  8A 0C 19                  MOV CL,byte ptr [ECX + EBX*0x1]
00565AC7  80 C9 02                  OR CL,0x2
00565ACA  88 08                     MOV byte ptr [EAX],CL
00565ACC  8A 44 1E FF               MOV AL,byte ptr [ESI + EBX*0x1 + -0x1]
00565AD0  0C 02                     OR AL,0x2
00565AD2  88 44 1E FF               MOV byte ptr [ESI + EBX*0x1 + -0x1],AL
LAB_00565ad6:
00565AD6  8B C6                     MOV EAX,ESI
00565AD8  2B C3                     SUB EAX,EBX
00565ADA  8A 08                     MOV CL,byte ptr [EAX]
00565ADC  80 C9 02                  OR CL,0x2
00565ADF  88 08                     MOV byte ptr [EAX],CL
00565AE1  8A 0E                     MOV CL,byte ptr [ESI]
00565AE3  80 C9 02                  OR CL,0x2
00565AE6  88 0E                     MOV byte ptr [ESI],CL
00565AE8  8A 0C 1E                  MOV CL,byte ptr [ESI + EBX*0x1]
00565AEB  80 C9 02                  OR CL,0x2
00565AEE  88 0C 1E                  MOV byte ptr [ESI + EBX*0x1],CL
00565AF1  8B 4D F8                  MOV ECX,dword ptr [EBP + -0x8]
00565AF4  49                        DEC ECX
00565AF5  3B D1                     CMP EDX,ECX
00565AF7  7D 1E                     JGE 0x00565b17
00565AF9  8A 50 01                  MOV DL,byte ptr [EAX + 0x1]
00565AFC  8D 0C 1E                  LEA ECX,[ESI + EBX*0x1]
00565AFF  80 CA 02                  OR DL,0x2
00565B02  88 50 01                  MOV byte ptr [EAX + 0x1],DL
00565B05  8B 55 A0                  MOV EDX,dword ptr [EBP + -0x60]
00565B08  80 0C 11 02               OR byte ptr [ECX + EDX*0x1],0x2
00565B0C  8A 4C 1E 01               MOV CL,byte ptr [ESI + EBX*0x1 + 0x1]
00565B10  80 C9 02                  OR CL,0x2
00565B13  88 4C 1E 01               MOV byte ptr [ESI + EBX*0x1 + 0x1],CL
LAB_00565b17:
00565B17  8B 55 DC                  MOV EDX,dword ptr [EBP + -0x24]
00565B1A  8B 4D F4                  MOV ECX,dword ptr [EBP + -0xc]
00565B1D  4A                        DEC EDX
00565B1E  3B CA                     CMP ECX,EDX
00565B20  7D 79                     JGE 0x00565b9b
00565B22  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
00565B25  85 C9                     TEST ECX,ECX
00565B27  7E 26                     JLE 0x00565b4f
00565B29  8A 54 38 FF               MOV DL,byte ptr [EAX + EDI*0x1 + -0x1]
00565B2D  80 CA 02                  OR DL,0x2
00565B30  88 54 38 FF               MOV byte ptr [EAX + EDI*0x1 + -0x1],DL
00565B34  8A 4C 3E FF               MOV CL,byte ptr [ESI + EDI*0x1 + -0x1]
00565B38  80 C9 02                  OR CL,0x2
00565B3B  88 4C 3E FF               MOV byte ptr [ESI + EDI*0x1 + -0x1],CL
00565B3F  8D 0C 1E                  LEA ECX,[ESI + EBX*0x1]
00565B42  8A 54 39 FF               MOV DL,byte ptr [ECX + EDI*0x1 + -0x1]
00565B46  8D 4C 39 FF               LEA ECX,[ECX + EDI*0x1 + -0x1]
00565B4A  80 CA 02                  OR DL,0x2
00565B4D  88 11                     MOV byte ptr [ECX],DL
LAB_00565b4f:
00565B4F  8A 0C 38                  MOV CL,byte ptr [EAX + EDI*0x1]
00565B52  8B 55 B8                  MOV EDX,dword ptr [EBP + -0x48]
00565B55  80 C9 02                  OR CL,0x2
00565B58  88 0C 38                  MOV byte ptr [EAX + EDI*0x1],CL
00565B5B  8D 0C 1E                  LEA ECX,[ESI + EBX*0x1]
00565B5E  80 0C 11 02               OR byte ptr [ECX + EDX*0x1],0x2
00565B62  8D 0C 3B                  LEA ECX,[EBX + EDI*0x1]
00565B65  8A 14 31                  MOV DL,byte ptr [ECX + ESI*0x1]
00565B68  80 CA 02                  OR DL,0x2
00565B6B  88 14 31                  MOV byte ptr [ECX + ESI*0x1],DL
00565B6E  8B 55 F8                  MOV EDX,dword ptr [EBP + -0x8]
00565B71  8D 4A FF                  LEA ECX,[EDX + -0x1]
00565B74  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
00565B77  3B D1                     CMP EDX,ECX
00565B79  7D 20                     JGE 0x00565b9b
00565B7B  8A 4C 38 01               MOV CL,byte ptr [EAX + EDI*0x1 + 0x1]
00565B7F  8D 44 38 01               LEA EAX,[EAX + EDI*0x1 + 0x1]
00565B83  80 C9 02                  OR CL,0x2
00565B86  88 08                     MOV byte ptr [EAX],CL
00565B88  8A 54 3E 01               MOV DL,byte ptr [ESI + EDI*0x1 + 0x1]
00565B8C  80 CA 02                  OR DL,0x2
00565B8F  8D 04 3B                  LEA EAX,[EBX + EDI*0x1]
00565B92  88 54 3E 01               MOV byte ptr [ESI + EDI*0x1 + 0x1],DL
00565B96  80 4C 30 01 02            OR byte ptr [EAX + ESI*0x1 + 0x1],0x2
LAB_00565b9b:
00565B9B  8B 45 A8                  MOV EAX,dword ptr [EBP + -0x58]
00565B9E  66 83 38 00               CMP word ptr [EAX],0x0
00565BA2  0F 84 46 02 00 00         JZ 0x00565dee
00565BA8  8B 4D B4                  MOV ECX,dword ptr [EBP + -0x4c]
00565BAB  8B 01                     MOV EAX,dword ptr [ECX]
00565BAD  85 C0                     TEST EAX,EAX
00565BAF  0F 84 36 02 00 00         JZ 0x00565deb
00565BB5  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
00565BB8  81 FA FF 00 00 00         CMP EDX,0xff
00565BBE  0F 84 27 02 00 00         JZ 0x00565deb
00565BC4  8A 0D 8F 8A 80 00         MOV CL,byte ptr [0x00808a8f]
00565BCA  8A 40 24                  MOV AL,byte ptr [EAX + 0x24]
00565BCD  84 C9                     TEST CL,CL
00565BCF  88 45 98                  MOV byte ptr [EBP + -0x68],AL
00565BD2  74 2A                     JZ 0x00565bfe
00565BD4  8B 45 98                  MOV EAX,dword ptr [EBP + -0x68]
00565BD7  25 FF 00 00 00            AND EAX,0xff
00565BDC  8D 0C C0                  LEA ECX,[EAX + EAX*0x8]
00565BDF  8B C2                     MOV EAX,EDX
00565BE1  25 FF 00 00 00            AND EAX,0xff
00565BE6  8D 04 C0                  LEA EAX,[EAX + EAX*0x8]
00565BE9  8A 94 C0 EA 87 80 00      MOV DL,byte ptr [EAX + EAX*0x8 + 0x8087ea]
00565BF0  33 C0                     XOR EAX,EAX
00565BF2  3A 94 C9 EA 87 80 00      CMP DL,byte ptr [ECX + ECX*0x8 + 0x8087ea]
00565BF9  0F 95 C0                  SETNZ AL
00565BFC  EB 79                     JMP 0x00565c77
LAB_00565bfe:
00565BFE  3A C2                     CMP AL,DL
00565C00  74 6A                     JZ 0x00565c6c
00565C02  8B 45 98                  MOV EAX,dword ptr [EBP + -0x68]
00565C05  8B CA                     MOV ECX,EDX
00565C07  25 FF 00 00 00            AND EAX,0xff
00565C0C  81 E1 FF 00 00 00         AND ECX,0xff
00565C12  8A 94 C1 4F 8A 80 00      MOV DL,byte ptr [ECX + EAX*0x8 + 0x808a4f]
00565C19  84 D2                     TEST DL,DL
00565C1B  75 10                     JNZ 0x00565c2d
00565C1D  38 94 C8 4F 8A 80 00      CMP byte ptr [EAX + ECX*0x8 + 0x808a4f],DL
00565C24  75 07                     JNZ 0x00565c2d
00565C26  B8 FE FF FF FF            MOV EAX,0xfffffffe
00565C2B  EB 41                     JMP 0x00565c6e
LAB_00565c2d:
00565C2D  80 FA 01                  CMP DL,0x1
00565C30  75 0F                     JNZ 0x00565c41
00565C32  80 BC C8 4F 8A 80 00 00   CMP byte ptr [EAX + ECX*0x8 + 0x808a4f],0x0
00565C3A  75 05                     JNZ 0x00565c41
00565C3C  83 C8 FF                  OR EAX,0xffffffff
00565C3F  EB 2D                     JMP 0x00565c6e
LAB_00565c41:
00565C41  84 D2                     TEST DL,DL
00565C43  75 11                     JNZ 0x00565c56
00565C45  80 BC C8 4F 8A 80 00 01   CMP byte ptr [EAX + ECX*0x8 + 0x808a4f],0x1
00565C4D  75 07                     JNZ 0x00565c56
00565C4F  B8 01 00 00 00            MOV EAX,0x1
00565C54  EB 18                     JMP 0x00565c6e
LAB_00565c56:
00565C56  80 FA 01                  CMP DL,0x1
00565C59  75 11                     JNZ 0x00565c6c
00565C5B  80 BC C8 4F 8A 80 00 01   CMP byte ptr [EAX + ECX*0x8 + 0x808a4f],0x1
00565C63  75 07                     JNZ 0x00565c6c
00565C65  B8 02 00 00 00            MOV EAX,0x2
00565C6A  EB 02                     JMP 0x00565c6e
LAB_00565c6c:
00565C6C  33 C0                     XOR EAX,EAX
LAB_00565c6e:
00565C6E  33 C9                     XOR ECX,ECX
00565C70  85 C0                     TEST EAX,EAX
00565C72  0F 9C C1                  SETL CL
00565C75  8B C1                     MOV EAX,ECX
LAB_00565c77:
00565C77  85 C0                     TEST EAX,EAX
00565C79  0F 85 6C 01 00 00         JNZ 0x00565deb
00565C7F  8B 45 F4                  MOV EAX,dword ptr [EBP + -0xc]
00565C82  85 C0                     TEST EAX,EAX
00565C84  7E 78                     JLE 0x00565cfe
00565C86  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
00565C89  85 C0                     TEST EAX,EAX
00565C8B  7E 29                     JLE 0x00565cb6
00565C8D  8B D6                     MOV EDX,ESI
00565C8F  2B D3                     SUB EDX,EBX
00565C91  2B D7                     SUB EDX,EDI
00565C93  8D 42 FF                  LEA EAX,[EDX + -0x1]
00565C96  8A 52 FF                  MOV DL,byte ptr [EDX + -0x1]
00565C99  80 CA 03                  OR DL,0x3
00565C9C  88 10                     MOV byte ptr [EAX],DL
00565C9E  8B C6                     MOV EAX,ESI
00565CA0  2B C7                     SUB EAX,EDI
00565CA2  8A 50 FF                  MOV DL,byte ptr [EAX + -0x1]
00565CA5  80 CA 03                  OR DL,0x3
00565CA8  88 50 FF                  MOV byte ptr [EAX + -0x1],DL
00565CAB  8A 4C 18 FF               MOV CL,byte ptr [EAX + EBX*0x1 + -0x1]
00565CAF  80 C9 03                  OR CL,0x3
00565CB2  88 4C 18 FF               MOV byte ptr [EAX + EBX*0x1 + -0x1],CL
LAB_00565cb6:
00565CB6  8B CE                     MOV ECX,ESI
00565CB8  2B CB                     SUB ECX,EBX
00565CBA  2B CF                     SUB ECX,EDI
00565CBC  8A 01                     MOV AL,byte ptr [ECX]
00565CBE  0C 03                     OR AL,0x3
00565CC0  88 01                     MOV byte ptr [ECX],AL
00565CC2  8B C6                     MOV EAX,ESI
00565CC4  2B C7                     SUB EAX,EDI
00565CC6  8A 10                     MOV DL,byte ptr [EAX]
00565CC8  80 CA 03                  OR DL,0x3
00565CCB  88 10                     MOV byte ptr [EAX],DL
00565CCD  8A 14 18                  MOV DL,byte ptr [EAX + EBX*0x1]
00565CD0  80 CA 03                  OR DL,0x3
00565CD3  88 14 18                  MOV byte ptr [EAX + EBX*0x1],DL
00565CD6  8B 55 F8                  MOV EDX,dword ptr [EBP + -0x8]
00565CD9  4A                        DEC EDX
00565CDA  39 55 FC                  CMP dword ptr [EBP + -0x4],EDX
00565CDD  7D 1F                     JGE 0x00565cfe
00565CDF  8A 51 01                  MOV DL,byte ptr [ECX + 0x1]
00565CE2  80 CA 03                  OR DL,0x3
00565CE5  88 51 01                  MOV byte ptr [ECX + 0x1],DL
00565CE8  8A 50 01                  MOV DL,byte ptr [EAX + 0x1]
00565CEB  80 CA 03                  OR DL,0x3
00565CEE  88 50 01                  MOV byte ptr [EAX + 0x1],DL
00565CF1  8A 4C 18 01               MOV CL,byte ptr [EAX + EBX*0x1 + 0x1]
00565CF5  8D 44 18 01               LEA EAX,[EAX + EBX*0x1 + 0x1]
00565CF9  80 C9 03                  OR CL,0x3
00565CFC  88 08                     MOV byte ptr [EAX],CL
LAB_00565cfe:
00565CFE  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
00565D01  85 D2                     TEST EDX,EDX
00565D03  7E 26                     JLE 0x00565d2b
00565D05  8B C6                     MOV EAX,ESI
00565D07  2B C3                     SUB EAX,EBX
00565D09  48                        DEC EAX
00565D0A  8A 08                     MOV CL,byte ptr [EAX]
00565D0C  80 C9 03                  OR CL,0x3
00565D0F  88 08                     MOV byte ptr [EAX],CL
00565D11  8B 4D 9C                  MOV ECX,dword ptr [EBP + -0x64]
00565D14  03 CE                     ADD ECX,ESI
00565D16  8D 04 19                  LEA EAX,[ECX + EBX*0x1]
00565D19  8A 0C 19                  MOV CL,byte ptr [ECX + EBX*0x1]
00565D1C  80 C9 03                  OR CL,0x3
00565D1F  88 08                     MOV byte ptr [EAX],CL
00565D21  8A 44 1E FF               MOV AL,byte ptr [ESI + EBX*0x1 + -0x1]
00565D25  0C 03                     OR AL,0x3
00565D27  88 44 1E FF               MOV byte ptr [ESI + EBX*0x1 + -0x1],AL
LAB_00565d2b:
00565D2B  8B C6                     MOV EAX,ESI
00565D2D  2B C3                     SUB EAX,EBX
00565D2F  8A 08                     MOV CL,byte ptr [EAX]
00565D31  80 C9 03                  OR CL,0x3
00565D34  88 08                     MOV byte ptr [EAX],CL
00565D36  8A 0E                     MOV CL,byte ptr [ESI]
00565D38  80 C9 03                  OR CL,0x3
00565D3B  88 0E                     MOV byte ptr [ESI],CL
00565D3D  8A 0C 1E                  MOV CL,byte ptr [ESI + EBX*0x1]
00565D40  80 C9 03                  OR CL,0x3
00565D43  88 0C 1E                  MOV byte ptr [ESI + EBX*0x1],CL
00565D46  8B 4D F8                  MOV ECX,dword ptr [EBP + -0x8]
00565D49  49                        DEC ECX
00565D4A  3B D1                     CMP EDX,ECX
00565D4C  7D 1E                     JGE 0x00565d6c
00565D4E  8A 50 01                  MOV DL,byte ptr [EAX + 0x1]
00565D51  8D 0C 1E                  LEA ECX,[ESI + EBX*0x1]
00565D54  80 CA 03                  OR DL,0x3
00565D57  88 50 01                  MOV byte ptr [EAX + 0x1],DL
00565D5A  8B 55 A0                  MOV EDX,dword ptr [EBP + -0x60]
00565D5D  80 0C 11 03               OR byte ptr [ECX + EDX*0x1],0x3
00565D61  8A 4C 1E 01               MOV CL,byte ptr [ESI + EBX*0x1 + 0x1]
00565D65  80 C9 03                  OR CL,0x3
00565D68  88 4C 1E 01               MOV byte ptr [ESI + EBX*0x1 + 0x1],CL
LAB_00565d6c:
00565D6C  8B 55 DC                  MOV EDX,dword ptr [EBP + -0x24]
00565D6F  8B 4D F4                  MOV ECX,dword ptr [EBP + -0xc]
00565D72  4A                        DEC EDX
00565D73  3B CA                     CMP ECX,EDX
00565D75  7D 74                     JGE 0x00565deb
00565D77  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
00565D7A  85 C9                     TEST ECX,ECX
00565D7C  7E 21                     JLE 0x00565d9f
00565D7E  8A 4C 38 FF               MOV CL,byte ptr [EAX + EDI*0x1 + -0x1]
00565D82  B2 03                     MOV DL,0x3
00565D84  0A CA                     OR CL,DL
00565D86  88 4C 38 FF               MOV byte ptr [EAX + EDI*0x1 + -0x1],CL
00565D8A  8A 4C 3E FF               MOV CL,byte ptr [ESI + EDI*0x1 + -0x1]
00565D8E  0A CA                     OR CL,DL
00565D90  88 4C 3E FF               MOV byte ptr [ESI + EDI*0x1 + -0x1],CL
00565D94  8D 0C 1E                  LEA ECX,[ESI + EBX*0x1]
00565D97  08 54 39 FF               OR byte ptr [ECX + EDI*0x1 + -0x1],DL
00565D9B  8D 4C 39 FF               LEA ECX,[ECX + EDI*0x1 + -0x1]
LAB_00565d9f:
00565D9F  8A 0C 38                  MOV CL,byte ptr [EAX + EDI*0x1]
00565DA2  8B 55 B8                  MOV EDX,dword ptr [EBP + -0x48]
00565DA5  80 C9 03                  OR CL,0x3
00565DA8  88 0C 38                  MOV byte ptr [EAX + EDI*0x1],CL
00565DAB  8D 0C 1E                  LEA ECX,[ESI + EBX*0x1]
00565DAE  80 0C 11 03               OR byte ptr [ECX + EDX*0x1],0x3
00565DB2  8D 0C 3B                  LEA ECX,[EBX + EDI*0x1]
00565DB5  8A 14 31                  MOV DL,byte ptr [ECX + ESI*0x1]
00565DB8  80 CA 03                  OR DL,0x3
00565DBB  88 14 31                  MOV byte ptr [ECX + ESI*0x1],DL
00565DBE  8B 55 F8                  MOV EDX,dword ptr [EBP + -0x8]
00565DC1  8D 4A FF                  LEA ECX,[EDX + -0x1]
00565DC4  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
00565DC7  3B D1                     CMP EDX,ECX
00565DC9  7D 20                     JGE 0x00565deb
00565DCB  8A 4C 38 01               MOV CL,byte ptr [EAX + EDI*0x1 + 0x1]
00565DCF  8D 44 38 01               LEA EAX,[EAX + EDI*0x1 + 0x1]
00565DD3  80 C9 03                  OR CL,0x3
00565DD6  88 08                     MOV byte ptr [EAX],CL
00565DD8  8A 54 3E 01               MOV DL,byte ptr [ESI + EDI*0x1 + 0x1]
00565DDC  80 CA 03                  OR DL,0x3
00565DDF  8D 04 3B                  LEA EAX,[EBX + EDI*0x1]
00565DE2  88 54 3E 01               MOV byte ptr [ESI + EDI*0x1 + 0x1],DL
00565DE6  80 4C 30 01 03            OR byte ptr [EAX + ESI*0x1 + 0x1],0x3
LAB_00565deb:
00565DEB  80 0E 01                  OR byte ptr [ESI],0x1
LAB_00565dee:
00565DEE  0F BF 05 7E B2 7F 00      MOVSX EAX,word ptr [0x007fb27e]
00565DF5  8B 4D A8                  MOV ECX,dword ptr [EBP + -0x58]
00565DF8  03 F3                     ADD ESI,EBX
00565DFA  8D 14 41                  LEA EDX,[ECX + EAX*0x2]
00565DFD  8B 4D B4                  MOV ECX,dword ptr [EBP + -0x4c]
00565E00  0F BF 05 46 B2 7F 00      MOVSX EAX,word ptr [0x007fb246]
00565E07  89 55 A8                  MOV dword ptr [EBP + -0x58],EDX
00565E0A  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
00565E0D  8D 0C C1                  LEA ECX,[ECX + EAX*0x8]
00565E10  8B 45 CC                  MOV EAX,dword ptr [EBP + -0x34]
00565E13  48                        DEC EAX
00565E14  89 4D B4                  MOV dword ptr [EBP + -0x4c],ECX
00565E17  89 45 CC                  MOV dword ptr [EBP + -0x34],EAX
00565E1A  0F 85 F5 FB FF FF         JNZ 0x00565a15
00565E20  8B 75 B0                  MOV ESI,dword ptr [EBP + -0x50]
00565E23  8B 4D E8                  MOV ECX,dword ptr [EBP + -0x18]
00565E26  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
00565E29  42                        INC EDX
00565E2A  83 C6 02                  ADD ESI,0x2
00565E2D  83 C1 08                  ADD ECX,0x8
00565E30  3B D0                     CMP EDX,EAX
00565E32  89 55 FC                  MOV dword ptr [EBP + -0x4],EDX
00565E35  89 75 B0                  MOV dword ptr [EBP + -0x50],ESI
00565E38  89 4D E8                  MOV dword ptr [EBP + -0x18],ECX
00565E3B  0F 8C A2 FB FF FF         JL 0x005659e3
00565E41  8B 4D D4                  MOV ECX,dword ptr [EBP + -0x2c]
LAB_00565e44:
00565E44  8B 75 EC                  MOV ESI,dword ptr [EBP + -0x14]
00565E47  8B 45 F4                  MOV EAX,dword ptr [EBP + -0xc]
00565E4A  03 F7                     ADD ESI,EDI
00565E4C  40                        INC EAX
00565E4D  89 75 EC                  MOV dword ptr [EBP + -0x14],ESI
00565E50  8B 75 DC                  MOV ESI,dword ptr [EBP + -0x24]
00565E53  3B C6                     CMP EAX,ESI
00565E55  89 45 F4                  MOV dword ptr [EBP + -0xc],EAX
00565E58  0F 8C 3E FB FF FF         JL 0x0056599c
00565E5E  8B 55 D8                  MOV EDX,dword ptr [EBP + -0x28]
LAB_00565e61:
00565E61  8B 45 E4                  MOV EAX,dword ptr [EBP + -0x1c]
00565E64  85 C0                     TEST EAX,EAX
00565E66  75 1D                     JNZ 0x00565e85
00565E68  8B 4D F8                  MOV ECX,dword ptr [EBP + -0x8]
00565E6B  B8 01 00 00 00            MOV EAX,0x1
00565E70  49                        DEC ECX
00565E71  89 45 E4                  MOV dword ptr [EBP + -0x1c],EAX
00565E74  89 4D F8                  MOV dword ptr [EBP + -0x8],ECX
00565E77  8B 4D D0                  MOV ECX,dword ptr [EBP + -0x30]
00565E7A  41                        INC ECX
00565E7B  89 4D D0                  MOV dword ptr [EBP + -0x30],ECX
00565E7E  8B 4D D4                  MOV ECX,dword ptr [EBP + -0x2c]
00565E81  41                        INC ECX
00565E82  89 4D D4                  MOV dword ptr [EBP + -0x2c],ECX
LAB_00565e85:
00565E85  8B 4D F0                  MOV ECX,dword ptr [EBP + -0x10]
00565E88  8B 49 08                  MOV ECX,dword ptr [ECX + 0x8]
00565E8B  89 4D CC                  MOV dword ptr [EBP + -0x34],ECX
00565E8E  8B 4D F8                  MOV ECX,dword ptr [EBP + -0x8]
00565E91  03 C1                     ADD EAX,ECX
00565E93  8B 4D CC                  MOV ECX,dword ptr [EBP + -0x34]
00565E96  41                        INC ECX
00565E97  3B C1                     CMP EAX,ECX
00565E99  7E 0C                     JLE 0x00565ea7
00565E9B  8B 45 CC                  MOV EAX,dword ptr [EBP + -0x34]
00565E9E  8B 4D E4                  MOV ECX,dword ptr [EBP + -0x1c]
00565EA1  2B C1                     SUB EAX,ECX
00565EA3  40                        INC EAX
00565EA4  89 45 F8                  MOV dword ptr [EBP + -0x8],EAX
LAB_00565ea7:
00565EA7  85 D2                     TEST EDX,EDX
00565EA9  75 1B                     JNZ 0x00565ec6
00565EAB  8B 4D D0                  MOV ECX,dword ptr [EBP + -0x30]
00565EAE  8B 45 C0                  MOV EAX,dword ptr [EBP + -0x40]
00565EB1  4E                        DEC ESI
00565EB2  03 CF                     ADD ECX,EDI
00565EB4  BA 01 00 00 00            MOV EDX,0x1
00565EB9  40                        INC EAX
00565EBA  89 55 D8                  MOV dword ptr [EBP + -0x28],EDX
00565EBD  89 75 DC                  MOV dword ptr [EBP + -0x24],ESI
00565EC0  89 4D D0                  MOV dword ptr [EBP + -0x30],ECX
00565EC3  89 45 C0                  MOV dword ptr [EBP + -0x40],EAX
LAB_00565ec6:
00565EC6  8B 45 F0                  MOV EAX,dword ptr [EBP + -0x10]
00565EC9  8D 0C 32                  LEA ECX,[EDX + ESI*0x1]
00565ECC  8B 40 10                  MOV EAX,dword ptr [EAX + 0x10]
00565ECF  8D 70 01                  LEA ESI,[EAX + 0x1]
00565ED2  3B CE                     CMP ECX,ESI
00565ED4  7E 06                     JLE 0x00565edc
00565ED6  2B C2                     SUB EAX,EDX
00565ED8  40                        INC EAX
00565ED9  89 45 DC                  MOV dword ptr [EBP + -0x24],EAX
LAB_00565edc:
00565EDC  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
00565EDF  8B 4D D4                  MOV ECX,dword ptr [EBP + -0x2c]
00565EE2  8B 55 F0                  MOV EDX,dword ptr [EBP + -0x10]
00565EE5  2B C1                     SUB EAX,ECX
00565EE7  89 45 CC                  MOV dword ptr [EBP + -0x34],EAX
00565EEA  6A 0A                     PUSH 0xa
00565EEC  8B 02                     MOV EAX,dword ptr [EDX]
00565EEE  6A 06                     PUSH 0x6
00565EF0  99                        CDQ
00565EF1  83 E2 03                  AND EDX,0x3
00565EF4  03 C2                     ADD EAX,EDX
00565EF6  C1 F8 02                  SAR EAX,0x2
00565EF9  50                        PUSH EAX
00565EFA  6A 00                     PUSH 0x0
00565EFC  E8 8F 83 14 00            CALL 0x006ae290
00565F01  8B 55 D0                  MOV EDX,dword ptr [EBP + -0x30]
00565F04  33 C9                     XOR ECX,ECX
00565F06  89 45 E0                  MOV dword ptr [EBP + -0x20],EAX
00565F09  89 4D FC                  MOV dword ptr [EBP + -0x4],ECX
00565F0C  89 55 E8                  MOV dword ptr [EBP + -0x18],EDX
LAB_00565f0f:
00565F0F  8B 50 0C                  MOV EDX,dword ptr [EAX + 0xc]
00565F12  C7 45 F4 00 00 00 00      MOV dword ptr [EBP + -0xc],0x0
00565F19  89 54 8D 84               MOV dword ptr [EBP + ECX*0x4 + -0x7c],EDX
00565F1D  8B 4D E8                  MOV ECX,dword ptr [EBP + -0x18]
00565F20  89 4D E4                  MOV dword ptr [EBP + -0x1c],ECX
00565F23  8B 4D DC                  MOV ECX,dword ptr [EBP + -0x24]
00565F26  85 C9                     TEST ECX,ECX
00565F28  0F 8E D8 01 00 00         JLE 0x00566106
00565F2E  8B 55 D8                  MOV EDX,dword ptr [EBP + -0x28]
00565F31  8D 0C D5 00 00 00 00      LEA ECX,[EDX*0x8 + 0x0]
00565F38  89 4D EC                  MOV dword ptr [EBP + -0x14],ECX
LAB_00565f3b:
00565F3B  8B 55 EC                  MOV EDX,dword ptr [EBP + -0x14]
00565F3E  8B 75 F0                  MOV ESI,dword ptr [EBP + -0x10]
00565F41  8B 4C 32 10               MOV ECX,dword ptr [EDX + ESI*0x1 + 0x10]
00565F45  8B 74 32 0C               MOV ESI,dword ptr [EDX + ESI*0x1 + 0xc]
00565F49  8B 55 CC                  MOV EDX,dword ptr [EBP + -0x34]
00565F4C  03 4D CC                  ADD ECX,dword ptr [EBP + -0x34]
00565F4F  03 F2                     ADD ESI,EDX
00565F51  3B F1                     CMP ESI,ECX
00565F53  89 4D B8                  MOV dword ptr [EBP + -0x48],ECX
00565F56  0F 8F 87 01 00 00         JG 0x005660e3
LAB_00565f5c:
00565F5C  85 F6                     TEST ESI,ESI
00565F5E  0F 8C 76 01 00 00         JL 0x005660da
00565F64  3B 75 F8                  CMP ESI,dword ptr [EBP + -0x8]
00565F67  0F 8D 6D 01 00 00         JGE 0x005660da
00565F6D  8B 55 F4                  MOV EDX,dword ptr [EBP + -0xc]
00565F70  85 D2                     TEST EDX,EDX
00565F72  0F 8C 62 01 00 00         JL 0x005660da
00565F78  3B 55 DC                  CMP EDX,dword ptr [EBP + -0x24]
00565F7B  0F 8D 59 01 00 00         JGE 0x005660da
00565F81  8B 55 E4                  MOV EDX,dword ptr [EBP + -0x1c]
00565F84  80 3C 16 00               CMP byte ptr [ESI + EDX*0x1],0x0
00565F88  0F 85 4C 01 00 00         JNZ 0x005660da
00565F8E  8B 4D D4                  MOV ECX,dword ptr [EBP + -0x2c]
00565F91  8D 14 0E                  LEA EDX,[ESI + ECX*0x1]
00565F94  8B 4D F4                  MOV ECX,dword ptr [EBP + -0xc]
00565F97  66 89 55 C4               MOV word ptr [EBP + -0x3c],DX
00565F9B  8B 55 C0                  MOV EDX,dword ptr [EBP + -0x40]
00565F9E  03 CA                     ADD ECX,EDX
00565FA0  8D 55 C4                  LEA EDX,[EBP + -0x3c]
00565FA3  66 89 4D C6               MOV word ptr [EBP + -0x3a],CX
00565FA7  66 8B 4D FC               MOV CX,word ptr [EBP + -0x4]
00565FAB  52                        PUSH EDX
00565FAC  50                        PUSH EAX
00565FAD  66 89 4D C8               MOV word ptr [EBP + -0x38],CX
00565FB1  E8 0A 82 14 00            CALL 0x006ae1c0
00565FB6  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
00565FB9  8B 94 85 70 FF FF FF      MOV EDX,dword ptr [EBP + EAX*0x4 + 0xffffff70]
00565FC0  8D 84 85 70 FF FF FF      LEA EAX,[EBP + EAX*0x4 + 0xffffff70]
00565FC7  42                        INC EDX
00565FC8  89 10                     MOV dword ptr [EAX],EDX
00565FCA  8B 45 E4                  MOV EAX,dword ptr [EBP + -0x1c]
00565FCD  8B D6                     MOV EDX,ESI
00565FCF  2B D3                     SUB EDX,EBX
00565FD1  8B CA                     MOV ECX,EDX
00565FD3  2B CF                     SUB ECX,EDI
00565FD5  03 C8                     ADD ECX,EAX
00565FD7  80 49 FF 02               OR byte ptr [ECX + -0x1],0x2
00565FDB  80 09 02                  OR byte ptr [ECX],0x2
00565FDE  80 49 01 02               OR byte ptr [ECX + 0x1],0x2
00565FE2  8D 0C 02                  LEA ECX,[EDX + EAX*0x1]
00565FE5  8A 54 02 FF               MOV DL,byte ptr [EDX + EAX*0x1 + -0x1]
00565FE9  80 CA 02                  OR DL,0x2
00565FEC  88 51 FF                  MOV byte ptr [ECX + -0x1],DL
00565FEF  8A 11                     MOV DL,byte ptr [ECX]
00565FF1  80 CA 02                  OR DL,0x2
00565FF4  88 11                     MOV byte ptr [ECX],DL
00565FF6  8A 51 01                  MOV DL,byte ptr [ECX + 0x1]
00565FF9  80 CA 02                  OR DL,0x2
00565FFC  88 51 01                  MOV byte ptr [ECX + 0x1],DL
00565FFF  8A 54 39 FF               MOV DL,byte ptr [ECX + EDI*0x1 + -0x1]
00566003  80 CA 02                  OR DL,0x2
00566006  88 54 39 FF               MOV byte ptr [ECX + EDI*0x1 + -0x1],DL
0056600A  8A 14 39                  MOV DL,byte ptr [ECX + EDI*0x1]
0056600D  80 CA 02                  OR DL,0x2
00566010  88 14 39                  MOV byte ptr [ECX + EDI*0x1],DL
00566013  8A 54 39 01               MOV DL,byte ptr [ECX + EDI*0x1 + 0x1]
00566017  8D 4C 39 01               LEA ECX,[ECX + EDI*0x1 + 0x1]
0056601B  80 CA 02                  OR DL,0x2
0056601E  88 11                     MOV byte ptr [ECX],DL
00566020  8B D6                     MOV EDX,ESI
00566022  2B D7                     SUB EDX,EDI
00566024  8D 0C 02                  LEA ECX,[EDX + EAX*0x1]
00566027  8A 54 02 FF               MOV DL,byte ptr [EDX + EAX*0x1 + -0x1]
0056602B  80 CA 02                  OR DL,0x2
0056602E  88 51 FF                  MOV byte ptr [ECX + -0x1],DL
00566031  8A 11                     MOV DL,byte ptr [ECX]
00566033  80 CA 02                  OR DL,0x2
00566036  88 11                     MOV byte ptr [ECX],DL
00566038  8A 51 01                  MOV DL,byte ptr [ECX + 0x1]
0056603B  80 CA 02                  OR DL,0x2
0056603E  88 51 01                  MOV byte ptr [ECX + 0x1],DL
00566041  8A 54 06 FF               MOV DL,byte ptr [ESI + EAX*0x1 + -0x1]
00566045  80 CA 02                  OR DL,0x2
00566048  88 54 06 FF               MOV byte ptr [ESI + EAX*0x1 + -0x1],DL
0056604C  8A 14 06                  MOV DL,byte ptr [ESI + EAX*0x1]
0056604F  80 CA 02                  OR DL,0x2
00566052  88 14 06                  MOV byte ptr [ESI + EAX*0x1],DL
00566055  8A 54 06 01               MOV DL,byte ptr [ESI + EAX*0x1 + 0x1]
00566059  80 CA 02                  OR DL,0x2
0056605C  88 54 06 01               MOV byte ptr [ESI + EAX*0x1 + 0x1],DL
00566060  8D 14 38                  LEA EDX,[EAX + EDI*0x1]
00566063  80 4C 32 FF 02            OR byte ptr [EDX + ESI*0x1 + -0x1],0x2
00566068  80 0C 32 02               OR byte ptr [EDX + ESI*0x1],0x2
0056606C  80 4C 32 01 02            OR byte ptr [EDX + ESI*0x1 + 0x1],0x2
00566071  8A 54 19 FF               MOV DL,byte ptr [ECX + EBX*0x1 + -0x1]
00566075  80 CA 02                  OR DL,0x2
00566078  88 54 19 FF               MOV byte ptr [ECX + EBX*0x1 + -0x1],DL
0056607C  8A 14 19                  MOV DL,byte ptr [ECX + EBX*0x1]
0056607F  80 CA 02                  OR DL,0x2
00566082  88 14 19                  MOV byte ptr [ECX + EBX*0x1],DL
00566085  8A 54 19 01               MOV DL,byte ptr [ECX + EBX*0x1 + 0x1]
00566089  8D 4C 19 01               LEA ECX,[ECX + EBX*0x1 + 0x1]
0056608D  80 CA 02                  OR DL,0x2
00566090  03 C3                     ADD EAX,EBX
00566092  88 11                     MOV byte ptr [ECX],DL
00566094  8A 54 30 FF               MOV DL,byte ptr [EAX + ESI*0x1 + -0x1]
00566098  80 CA 02                  OR DL,0x2
0056609B  88 54 30 FF               MOV byte ptr [EAX + ESI*0x1 + -0x1],DL
0056609F  8A 0C 30                  MOV CL,byte ptr [EAX + ESI*0x1]
005660A2  80 C9 02                  OR CL,0x2
005660A5  88 0C 30                  MOV byte ptr [EAX + ESI*0x1],CL
005660A8  8A 54 30 01               MOV DL,byte ptr [EAX + ESI*0x1 + 0x1]
005660AC  80 CA 02                  OR DL,0x2
005660AF  88 54 30 01               MOV byte ptr [EAX + ESI*0x1 + 0x1],DL
005660B3  03 C7                     ADD EAX,EDI
005660B5  8A 4C 30 FF               MOV CL,byte ptr [EAX + ESI*0x1 + -0x1]
005660B9  80 C9 02                  OR CL,0x2
005660BC  88 4C 30 FF               MOV byte ptr [EAX + ESI*0x1 + -0x1],CL
005660C0  8A 14 30                  MOV DL,byte ptr [EAX + ESI*0x1]
005660C3  80 CA 02                  OR DL,0x2
005660C6  88 14 30                  MOV byte ptr [EAX + ESI*0x1],DL
005660C9  8A 4C 30 01               MOV CL,byte ptr [EAX + ESI*0x1 + 0x1]
005660CD  80 C9 02                  OR CL,0x2
005660D0  88 4C 30 01               MOV byte ptr [EAX + ESI*0x1 + 0x1],CL
005660D4  8B 45 E0                  MOV EAX,dword ptr [EBP + -0x20]
005660D7  8B 4D B8                  MOV ECX,dword ptr [EBP + -0x48]
LAB_005660da:
005660DA  46                        INC ESI
005660DB  3B F1                     CMP ESI,ECX
005660DD  0F 8E 79 FE FF FF         JLE 0x00565f5c
LAB_005660e3:
005660E3  8B 55 EC                  MOV EDX,dword ptr [EBP + -0x14]
005660E6  8B 4D F4                  MOV ECX,dword ptr [EBP + -0xc]
005660E9  8B 75 E4                  MOV ESI,dword ptr [EBP + -0x1c]
005660EC  83 C2 08                  ADD EDX,0x8
005660EF  89 55 EC                  MOV dword ptr [EBP + -0x14],EDX
005660F2  8B 55 DC                  MOV EDX,dword ptr [EBP + -0x24]
005660F5  41                        INC ECX
005660F6  03 F7                     ADD ESI,EDI
005660F8  3B CA                     CMP ECX,EDX
005660FA  89 4D F4                  MOV dword ptr [EBP + -0xc],ECX
005660FD  89 75 E4                  MOV dword ptr [EBP + -0x1c],ESI
00566100  0F 8C 35 FE FF FF         JL 0x00565f3b
LAB_00566106:
00566106  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
00566109  8B 75 E8                  MOV ESI,dword ptr [EBP + -0x18]
0056610C  41                        INC ECX
0056610D  03 F3                     ADD ESI,EBX
0056610F  83 F9 05                  CMP ECX,0x5
00566112  89 4D FC                  MOV dword ptr [EBP + -0x4],ECX
00566115  89 75 E8                  MOV dword ptr [EBP + -0x18],ESI
00566118  0F 8C F1 FD FF FF         JL 0x00565f0f
0056611E  8B 4D 20                  MOV ECX,dword ptr [EBP + 0x20]
00566121  85 C9                     TEST ECX,ECX
00566123  0F 8E 25 01 00 00         JLE 0x0056624e
00566129  3B 48 0C                  CMP ECX,dword ptr [EAX + 0xc]
0056612C  0F 8D 1C 01 00 00         JGE 0x0056624e
00566132  6A 0A                     PUSH 0xa
00566134  6A 06                     PUSH 0x6
00566136  51                        PUSH ECX
00566137  6A 00                     PUSH 0x0
00566139  E8 52 81 14 00            CALL 0x006ae290
0056613E  89 45 E8                  MOV dword ptr [EBP + -0x18],EAX
LAB_00566141:
00566141  8B 7D AC                  MOV EDI,dword ptr [EBP + -0x54]
00566144  33 C9                     XOR ECX,ECX
00566146  8D 85 70 FF FF FF         LEA EAX,[EBP + 0xffffff70]
0056614C  83 CE FF                  OR ESI,0xffffffff
0056614F  89 4D EC                  MOV dword ptr [EBP + -0x14],ECX
00566152  89 45 D8                  MOV dword ptr [EBP + -0x28],EAX
00566155  F7 DF                     NEG EDI
LAB_00566157:
00566157  8B 55 D8                  MOV EDX,dword ptr [EBP + -0x28]
0056615A  8B 02                     MOV EAX,dword ptr [EDX]
0056615C  3B F0                     CMP ESI,EAX
0056615E  7C 18                     JL 0x00566178
00566160  75 23                     JNZ 0x00566185
00566162  8D 47 03                  LEA EAX,[EDI + 0x3]
00566165  99                        CDQ
00566166  8B D8                     MOV EBX,EAX
00566168  8D 41 03                  LEA EAX,[ECX + 0x3]
0056616B  33 DA                     XOR EBX,EDX
0056616D  2B DA                     SUB EBX,EDX
0056616F  99                        CDQ
00566170  33 C2                     XOR EAX,EDX
00566172  2B C2                     SUB EAX,EDX
00566174  3B C3                     CMP EAX,EBX
00566176  7D 0D                     JGE 0x00566185
LAB_00566178:
00566178  8B 45 D8                  MOV EAX,dword ptr [EBP + -0x28]
0056617B  8B 55 EC                  MOV EDX,dword ptr [EBP + -0x14]
0056617E  89 55 AC                  MOV dword ptr [EBP + -0x54],EDX
00566181  8B F9                     MOV EDI,ECX
00566183  8B 30                     MOV ESI,dword ptr [EAX]
LAB_00566185:
00566185  8B 45 EC                  MOV EAX,dword ptr [EBP + -0x14]
00566188  8B 55 D8                  MOV EDX,dword ptr [EBP + -0x28]
0056618B  40                        INC EAX
0056618C  49                        DEC ECX
0056618D  83 C2 04                  ADD EDX,0x4
00566190  83 F9 FB                  CMP ECX,-0x5
00566193  89 45 EC                  MOV dword ptr [EBP + -0x14],EAX
00566196  89 55 D8                  MOV dword ptr [EBP + -0x28],EDX
00566199  7F BC                     JG 0x00566157
0056619B  85 F6                     TEST ESI,ESI
0056619D  0F 8E 9C 00 00 00         JLE 0x0056623f
005661A3  8B 45 AC                  MOV EAX,dword ptr [EBP + -0x54]
005661A6  8B 7C 85 84               MOV EDI,dword ptr [EBP + EAX*0x4 + -0x7c]
005661AA  8B 45 20                  MOV EAX,dword ptr [EBP + 0x20]
005661AD  3B F0                     CMP ESI,EAX
005661AF  7F 47                     JG 0x005661f8
005661B1  33 DB                     XOR EBX,EBX
005661B3  85 F6                     TEST ESI,ESI
005661B5  7E 25                     JLE 0x005661dc
LAB_005661b7:
005661B7  8D 4D C4                  LEA ECX,[EBP + -0x3c]
005661BA  8D 14 3B                  LEA EDX,[EBX + EDI*0x1]
005661BD  51                        PUSH ECX
005661BE  8B 4D E0                  MOV ECX,dword ptr [EBP + -0x20]
005661C1  E8 AA 6A 14 00            CALL 0x006acc70
005661C6  85 C0                     TEST EAX,EAX
005661C8  7C 0D                     JL 0x005661d7
005661CA  8B 45 E8                  MOV EAX,dword ptr [EBP + -0x18]
005661CD  8D 55 C4                  LEA EDX,[EBP + -0x3c]
005661D0  52                        PUSH EDX
005661D1  50                        PUSH EAX
005661D2  E8 E9 7F 14 00            CALL 0x006ae1c0
LAB_005661d7:
005661D7  43                        INC EBX
005661D8  3B DE                     CMP EBX,ESI
005661DA  7C DB                     JL 0x005661b7
LAB_005661dc:
005661DC  8B 45 20                  MOV EAX,dword ptr [EBP + 0x20]
005661DF  2B C6                     SUB EAX,ESI
005661E1  85 C0                     TEST EAX,EAX
005661E3  89 45 20                  MOV dword ptr [EBP + 0x20],EAX
005661E6  7E 57                     JLE 0x0056623f
005661E8  8B 4D AC                  MOV ECX,dword ptr [EBP + -0x54]
005661EB  C7 44 8D 84 00 00 00 00   MOV dword ptr [EBP + ECX*0x4 + -0x7c],0x0
005661F3  E9 49 FF FF FF            JMP 0x00566141
LAB_005661f8:
005661F8  8B 4D 20                  MOV ECX,dword ptr [EBP + 0x20]
005661FB  8D 46 01                  LEA EAX,[ESI + 0x1]
005661FE  C1 E0 10                  SHL EAX,0x10
00566201  99                        CDQ
00566202  8D 71 01                  LEA ESI,[ECX + 0x1]
00566205  F7 FE                     IDIV ESI
00566207  C1 E7 10                  SHL EDI,0x10
0056620A  81 EF 00 00 01 00         SUB EDI,0x10000
00566210  85 C9                     TEST ECX,ECX
00566212  8B F0                     MOV ESI,EAX
00566214  7E 29                     JLE 0x0056623f
00566216  8B D9                     MOV EBX,ECX
LAB_00566218:
00566218  8B 4D E0                  MOV ECX,dword ptr [EBP + -0x20]
0056621B  8D 55 C4                  LEA EDX,[EBP + -0x3c]
0056621E  03 FE                     ADD EDI,ESI
00566220  52                        PUSH EDX
00566221  8B D7                     MOV EDX,EDI
00566223  C1 FA 10                  SAR EDX,0x10
00566226  E8 45 6A 14 00            CALL 0x006acc70
0056622B  85 C0                     TEST EAX,EAX
0056622D  7C 0D                     JL 0x0056623c
0056622F  8B 4D E8                  MOV ECX,dword ptr [EBP + -0x18]
00566232  8D 45 C4                  LEA EAX,[EBP + -0x3c]
00566235  50                        PUSH EAX
00566236  51                        PUSH ECX
00566237  E8 84 7F 14 00            CALL 0x006ae1c0
LAB_0056623c:
0056623C  4B                        DEC EBX
0056623D  75 D9                     JNZ 0x00566218
FUN_00565820::cf_common_exit_0056623F:
0056623F  8B 55 E0                  MOV EDX,dword ptr [EBP + -0x20]
00566242  52                        PUSH EDX
00566243  E8 C8 7E 14 00            CALL 0x006ae110
00566248  8B 45 E8                  MOV EAX,dword ptr [EBP + -0x18]
0056624B  89 45 E0                  MOV dword ptr [EBP + -0x20],EAX
LAB_0056624e:
0056624E  8B 8D 2C FF FF FF         MOV ECX,dword ptr [EBP + 0xffffff2c]
00566254  8B 75 A4                  MOV ESI,dword ptr [EBP + -0x5c]
00566257  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
0056625D  EB 32                     JMP 0x00566291
LAB_0056625f:
0056625F  8B 95 2C FF FF FF         MOV EDX,dword ptr [EBP + 0xffffff2c]
00566265  68 00 97 7C 00            PUSH 0x7c9700
0056626A  68 CC 4C 7A 00            PUSH 0x7a4ccc
0056626F  56                        PUSH ESI
00566270  57                        PUSH EDI
00566271  68 FF 0E 00 00            PUSH 0xeff
00566276  68 B0 96 7C 00            PUSH 0x7c96b0
0056627B  89 15 F8 8D 85 00         MOV dword ptr [0x00858df8],EDX
00566281  E8 4A 72 14 00            CALL 0x006ad4d0
00566286  83 C4 18                  ADD ESP,0x18
00566289  85 C0                     TEST EAX,EAX
0056628B  74 01                     JZ 0x0056628e
0056628D  CC                        INT3
LAB_0056628e:
0056628E  89 75 A4                  MOV dword ptr [EBP + -0x5c],ESI
LAB_00566291:
00566291  8D 45 BC                  LEA EAX,[EBP + -0x44]
00566294  50                        PUSH EAX
00566295  E8 C6 4D 14 00            CALL 0x006ab060
0056629A  8D 4D F0                  LEA ECX,[EBP + -0x10]
0056629D  51                        PUSH ECX
0056629E  E8 BD 4D 14 00            CALL 0x006ab060
005662A3  85 F6                     TEST ESI,ESI
005662A5  74 2A                     JZ 0x005662d1
005662A7  8D 55 E0                  LEA EDX,[EBP + -0x20]
005662AA  52                        PUSH EDX
005662AB  E8 B0 4D 14 00            CALL 0x006ab060
005662B0  A1 7C D7 7E 00            MOV EAX,[0x007ed77c]
005662B5  68 0F 0F 00 00            PUSH 0xf0f
005662BA  68 B0 96 7C 00            PUSH 0x7c96b0
005662BF  50                        PUSH EAX
005662C0  56                        PUSH ESI
005662C1  E8 7A FB 13 00            CALL 0x006a5e40
005662C6  33 C0                     XOR EAX,EAX
005662C8  5F                        POP EDI
005662C9  5E                        POP ESI
005662CA  5B                        POP EBX
005662CB  8B E5                     MOV ESP,EBP
005662CD  5D                        POP EBP
005662CE  C2 1C 00                  RET 0x1c
LAB_005662d1:
005662D1  8B 45 E0                  MOV EAX,dword ptr [EBP + -0x20]
005662D4  5F                        POP EDI
005662D5  5E                        POP ESI
005662D6  5B                        POP EBX
005662D7  8B E5                     MOV ESP,EBP
005662D9  5D                        POP EBP
005662DA  C2 1C 00                  RET 0x1c
