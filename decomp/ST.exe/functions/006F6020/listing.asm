FUN_006f6020:
006F6020  55                        PUSH EBP
006F6021  8B EC                     MOV EBP,ESP
006F6023  51                        PUSH ECX
006F6024  8B 45 2C                  MOV EAX,dword ptr [EBP + 0x2c]
006F6027  C7 05 00 70 85 00 01 00 00 00  MOV dword ptr [0x00857000],0x1
006F6031  48                        DEC EAX
006F6032  0F 88 EF 02 00 00         JS 0x006f6327
006F6038  53                        PUSH EBX
006F6039  8B 5D 1C                  MOV EBX,dword ptr [EBP + 0x1c]
006F603C  40                        INC EAX
006F603D  56                        PUSH ESI
006F603E  8B 75 08                  MOV ESI,dword ptr [EBP + 0x8]
006F6041  57                        PUSH EDI
006F6042  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
LAB_006f6045:
006F6045  33 C9                     XOR ECX,ECX
006F6047  8A 0B                     MOV CL,byte ptr [EBX]
006F6049  43                        INC EBX
006F604A  85 C9                     TEST ECX,ECX
006F604C  89 5D 1C                  MOV dword ptr [EBP + 0x1c],EBX
006F604F  0F 84 A7 02 00 00         JZ 0x006f62fc
006F6055  8B 7D 24                  MOV EDI,dword ptr [EBP + 0x24]
LAB_006f6058:
006F6058  F6 C1 80                  TEST CL,0x80
006F605B  8B C1                     MOV EAX,ECX
006F605D  74 21                     JZ 0x006f6080
006F605F  83 E0 3F                  AND EAX,0x3f
006F6062  3B C7                     CMP EAX,EDI
006F6064  7F 2A                     JG 0x006f6090
006F6066  F6 C1 40                  TEST CL,0x40
006F6069  74 0A                     JZ 0x006f6075
006F606B  43                        INC EBX
006F606C  33 C9                     XOR ECX,ECX
006F606E  2B F8                     SUB EDI,EAX
006F6070  8A 0B                     MOV CL,byte ptr [EBX]
006F6072  43                        INC EBX
006F6073  EB E3                     JMP 0x006f6058
LAB_006f6075:
006F6075  03 D8                     ADD EBX,EAX
006F6077  33 C9                     XOR ECX,ECX
006F6079  2B F8                     SUB EDI,EAX
006F607B  8A 0B                     MOV CL,byte ptr [EBX]
006F607D  43                        INC EBX
006F607E  EB D8                     JMP 0x006f6058
LAB_006f6080:
006F6080  83 E0 7F                  AND EAX,0x7f
006F6083  3B C7                     CMP EAX,EDI
006F6085  7F 09                     JG 0x006f6090
006F6087  33 C9                     XOR ECX,ECX
006F6089  2B F8                     SUB EDI,EAX
006F608B  8A 0B                     MOV CL,byte ptr [EBX]
006F608D  43                        INC EBX
006F608E  EB C8                     JMP 0x006f6058
LAB_006f6090:
006F6090  8B D1                     MOV EDX,ECX
006F6092  2B C7                     SUB EAX,EDI
006F6094  81 E2 C0 00 00 00         AND EDX,0xc0
006F609A  89 5D 1C                  MOV dword ptr [EBP + 0x1c],EBX
006F609D  80 FA 80                  CMP DL,0x80
006F60A0  75 05                     JNZ 0x006f60a7
006F60A2  03 DF                     ADD EBX,EDI
006F60A4  89 5D 1C                  MOV dword ptr [EBP + 0x1c],EBX
LAB_006f60a7:
006F60A7  8B 7D 28                  MOV EDI,dword ptr [EBP + 0x28]
006F60AA  3B C7                     CMP EAX,EDI
006F60AC  89 7D 2C                  MOV dword ptr [EBP + 0x2c],EDI
006F60AF  0F 8F FE 00 00 00         JG 0x006f61b3
006F60B5  8B D1                     MOV EDX,ECX
006F60B7  81 E2 80 00 00 00         AND EDX,0x80
LAB_006f60bd:
006F60BD  2B F8                     SUB EDI,EAX
006F60BF  85 D2                     TEST EDX,EDX
006F60C1  89 7D 2C                  MOV dword ptr [EBP + 0x2c],EDI
006F60C4  0F 84 C5 00 00 00         JZ 0x006f618f
006F60CA  F6 C1 40                  TEST CL,0x40
006F60CD  74 5B                     JZ 0x006f612a
006F60CF  33 D2                     XOR EDX,EDX
006F60D1  8A 13                     MOV DL,byte ptr [EBX]
006F60D3  8B 5D 30                  MOV EBX,dword ptr [EBP + 0x30]
006F60D6  8B FA                     MOV EDI,EDX
006F60D8  33 D2                     XOR EDX,EDX
006F60DA  8A 14 1F                  MOV DL,byte ptr [EDI + EBX*0x1]
006F60DD  8B 5D 1C                  MOV EBX,dword ptr [EBP + 0x1c]
006F60E0  43                        INC EBX
006F60E1  48                        DEC EAX
006F60E2  89 5D 1C                  MOV dword ptr [EBP + 0x1c],EBX
006F60E5  0F 88 82 00 00 00         JS 0x006f616d
006F60EB  40                        INC EAX
LAB_006f60ec:
006F60EC  8B 5D 10                  MOV EBX,dword ptr [EBP + 0x10]
006F60EF  33 FF                     XOR EDI,EDI
006F60F1  66 8B 3B                  MOV DI,word ptr [EBX]
006F60F4  8B 5D 18                  MOV EBX,dword ptr [EBP + 0x18]
006F60F7  3B DF                     CMP EBX,EDI
006F60F9  77 04                     JA 0x006f60ff
006F60FB  88 16                     MOV byte ptr [ESI],DL
006F60FD  EB 0F                     JMP 0x006f610e
LAB_006f60ff:
006F60FF  8B 7D 34                  MOV EDI,dword ptr [EBP + 0x34]
006F6102  33 DB                     XOR EBX,EBX
006F6104  8A 1F                     MOV BL,byte ptr [EDI]
006F6106  8B 7D 3C                  MOV EDI,dword ptr [EBP + 0x3c]
006F6109  8A 1C 3B                  MOV BL,byte ptr [EBX + EDI*0x1]
006F610C  88 1E                     MOV byte ptr [ESI],BL
LAB_006f610e:
006F610E  8B 5D 10                  MOV EBX,dword ptr [EBP + 0x10]
006F6111  83 C3 02                  ADD EBX,0x2
006F6114  46                        INC ESI
006F6115  89 5D 10                  MOV dword ptr [EBP + 0x10],EBX
006F6118  8B 5D 34                  MOV EBX,dword ptr [EBP + 0x34]
006F611B  43                        INC EBX
006F611C  48                        DEC EAX
006F611D  89 5D 34                  MOV dword ptr [EBP + 0x34],EBX
006F6120  75 CA                     JNZ 0x006f60ec
006F6122  8B 7D 2C                  MOV EDI,dword ptr [EBP + 0x2c]
006F6125  8B 5D 1C                  MOV EBX,dword ptr [EBP + 0x1c]
006F6128  EB 46                     JMP 0x006f6170
LAB_006f612a:
006F612A  48                        DEC EAX
006F612B  78 43                     JS 0x006f6170
006F612D  40                        INC EAX
LAB_006f612e:
006F612E  8B 7D 10                  MOV EDI,dword ptr [EBP + 0x10]
006F6131  33 D2                     XOR EDX,EDX
006F6133  66 8B 17                  MOV DX,word ptr [EDI]
006F6136  8B 7D 18                  MOV EDI,dword ptr [EBP + 0x18]
006F6139  3B FA                     CMP EDI,EDX
006F613B  77 09                     JA 0x006f6146
006F613D  8B 7D 30                  MOV EDI,dword ptr [EBP + 0x30]
006F6140  33 D2                     XOR EDX,EDX
006F6142  8A 13                     MOV DL,byte ptr [EBX]
006F6144  EB 0A                     JMP 0x006f6150
LAB_006f6146:
006F6146  8B 7D 34                  MOV EDI,dword ptr [EBP + 0x34]
006F6149  33 D2                     XOR EDX,EDX
006F614B  8A 17                     MOV DL,byte ptr [EDI]
006F614D  8B 7D 3C                  MOV EDI,dword ptr [EBP + 0x3c]
LAB_006f6150:
006F6150  8A 14 3A                  MOV DL,byte ptr [EDX + EDI*0x1]
006F6153  88 16                     MOV byte ptr [ESI],DL
006F6155  8B 55 10                  MOV EDX,dword ptr [EBP + 0x10]
006F6158  83 C2 02                  ADD EDX,0x2
006F615B  46                        INC ESI
006F615C  89 55 10                  MOV dword ptr [EBP + 0x10],EDX
006F615F  8B 55 34                  MOV EDX,dword ptr [EBP + 0x34]
006F6162  42                        INC EDX
006F6163  43                        INC EBX
006F6164  48                        DEC EAX
006F6165  89 55 34                  MOV dword ptr [EBP + 0x34],EDX
006F6168  75 C4                     JNZ 0x006f612e
006F616A  89 5D 1C                  MOV dword ptr [EBP + 0x1c],EBX
LAB_006f616d:
006F616D  8B 7D 2C                  MOV EDI,dword ptr [EBP + 0x2c]
LAB_006f6170:
006F6170  85 FF                     TEST EDI,EDI
006F6172  7E 3D                     JLE 0x006f61b1
006F6174  33 C9                     XOR ECX,ECX
006F6176  8A 0B                     MOV CL,byte ptr [EBX]
006F6178  8B D1                     MOV EDX,ECX
006F617A  8B C1                     MOV EAX,ECX
006F617C  81 E2 80 00 00 00         AND EDX,0x80
006F6182  43                        INC EBX
006F6183  85 D2                     TEST EDX,EDX
006F6185  89 5D 1C                  MOV dword ptr [EBP + 0x1c],EBX
006F6188  74 1A                     JZ 0x006f61a4
006F618A  83 E0 3F                  AND EAX,0x3f
006F618D  EB 18                     JMP 0x006f61a7
LAB_006f618f:
006F618F  8B 55 34                  MOV EDX,dword ptr [EBP + 0x34]
006F6192  03 F0                     ADD ESI,EAX
006F6194  03 D0                     ADD EDX,EAX
006F6196  89 55 34                  MOV dword ptr [EBP + 0x34],EDX
006F6199  8B 55 10                  MOV EDX,dword ptr [EBP + 0x10]
006F619C  8D 04 42                  LEA EAX,[EDX + EAX*0x2]
006F619F  89 45 10                  MOV dword ptr [EBP + 0x10],EAX
006F61A2  EB CC                     JMP 0x006f6170
LAB_006f61a4:
006F61A4  83 E0 7F                  AND EAX,0x7f
LAB_006f61a7:
006F61A7  3B C7                     CMP EAX,EDI
006F61A9  0F 8E 0E FF FF FF         JLE 0x006f60bd
006F61AF  EB 02                     JMP 0x006f61b3
LAB_006f61b1:
006F61B1  33 C0                     XOR EAX,EAX
LAB_006f61b3:
006F61B3  2B C7                     SUB EAX,EDI
006F61B5  F6 C1 80                  TEST CL,0x80
006F61B8  0F 84 BA 00 00 00         JZ 0x006f6278
006F61BE  F6 C1 40                  TEST CL,0x40
006F61C1  74 6A                     JZ 0x006f622d
006F61C3  85 FF                     TEST EDI,EDI
006F61C5  0F 8E C0 00 00 00         JLE 0x006f628b
006F61CB  33 D2                     XOR EDX,EDX
006F61CD  8A 13                     MOV DL,byte ptr [EBX]
006F61CF  8B 5D 30                  MOV EBX,dword ptr [EBP + 0x30]
006F61D2  8B FA                     MOV EDI,EDX
006F61D4  33 D2                     XOR EDX,EDX
006F61D6  8A 14 1F                  MOV DL,byte ptr [EDI + EBX*0x1]
006F61D9  8B 5D 1C                  MOV EBX,dword ptr [EBP + 0x1c]
006F61DC  89 55 08                  MOV dword ptr [EBP + 0x8],EDX
006F61DF  8B 55 2C                  MOV EDX,dword ptr [EBP + 0x2c]
006F61E2  43                        INC EBX
006F61E3  4A                        DEC EDX
006F61E4  0F 88 A1 00 00 00         JS 0x006f628b
006F61EA  42                        INC EDX
006F61EB  89 55 1C                  MOV dword ptr [EBP + 0x1c],EDX
LAB_006f61ee:
006F61EE  8B 7D 10                  MOV EDI,dword ptr [EBP + 0x10]
006F61F1  33 D2                     XOR EDX,EDX
006F61F3  66 8B 17                  MOV DX,word ptr [EDI]
006F61F6  8B 7D 18                  MOV EDI,dword ptr [EBP + 0x18]
006F61F9  3B FA                     CMP EDI,EDX
006F61FB  77 05                     JA 0x006f6202
006F61FD  8A 55 08                  MOV DL,byte ptr [EBP + 0x8]
006F6200  EB 0D                     JMP 0x006f620f
LAB_006f6202:
006F6202  8B 7D 34                  MOV EDI,dword ptr [EBP + 0x34]
006F6205  33 D2                     XOR EDX,EDX
006F6207  8A 17                     MOV DL,byte ptr [EDI]
006F6209  8B 7D 3C                  MOV EDI,dword ptr [EBP + 0x3c]
006F620C  8A 14 3A                  MOV DL,byte ptr [EDX + EDI*0x1]
LAB_006f620f:
006F620F  8B 7D 10                  MOV EDI,dword ptr [EBP + 0x10]
006F6212  88 16                     MOV byte ptr [ESI],DL
006F6214  8B 55 1C                  MOV EDX,dword ptr [EBP + 0x1c]
006F6217  83 C7 02                  ADD EDI,0x2
006F621A  89 7D 10                  MOV dword ptr [EBP + 0x10],EDI
006F621D  8B 7D 34                  MOV EDI,dword ptr [EBP + 0x34]
006F6220  46                        INC ESI
006F6221  47                        INC EDI
006F6222  4A                        DEC EDX
006F6223  89 7D 34                  MOV dword ptr [EBP + 0x34],EDI
006F6226  89 55 1C                  MOV dword ptr [EBP + 0x1c],EDX
006F6229  75 C3                     JNZ 0x006f61ee
006F622B  EB 5E                     JMP 0x006f628b
LAB_006f622d:
006F622D  4F                        DEC EDI
006F622E  78 5B                     JS 0x006f628b
006F6230  47                        INC EDI
006F6231  89 7D 1C                  MOV dword ptr [EBP + 0x1c],EDI
LAB_006f6234:
006F6234  8B 7D 10                  MOV EDI,dword ptr [EBP + 0x10]
006F6237  33 D2                     XOR EDX,EDX
006F6239  66 8B 17                  MOV DX,word ptr [EDI]
006F623C  8B 7D 18                  MOV EDI,dword ptr [EBP + 0x18]
006F623F  3B FA                     CMP EDI,EDX
006F6241  77 09                     JA 0x006f624c
006F6243  8B 7D 30                  MOV EDI,dword ptr [EBP + 0x30]
006F6246  33 D2                     XOR EDX,EDX
006F6248  8A 13                     MOV DL,byte ptr [EBX]
006F624A  EB 0A                     JMP 0x006f6256
LAB_006f624c:
006F624C  8B 7D 34                  MOV EDI,dword ptr [EBP + 0x34]
006F624F  33 D2                     XOR EDX,EDX
006F6251  8A 17                     MOV DL,byte ptr [EDI]
006F6253  8B 7D 3C                  MOV EDI,dword ptr [EBP + 0x3c]
LAB_006f6256:
006F6256  8A 14 3A                  MOV DL,byte ptr [EDX + EDI*0x1]
006F6259  88 16                     MOV byte ptr [ESI],DL
006F625B  8B 55 10                  MOV EDX,dword ptr [EBP + 0x10]
006F625E  83 C2 02                  ADD EDX,0x2
006F6261  46                        INC ESI
006F6262  89 55 10                  MOV dword ptr [EBP + 0x10],EDX
006F6265  8B 55 34                  MOV EDX,dword ptr [EBP + 0x34]
006F6268  42                        INC EDX
006F6269  43                        INC EBX
006F626A  89 55 34                  MOV dword ptr [EBP + 0x34],EDX
006F626D  8B 55 1C                  MOV EDX,dword ptr [EBP + 0x1c]
006F6270  4A                        DEC EDX
006F6271  89 55 1C                  MOV dword ptr [EBP + 0x1c],EDX
006F6274  75 BE                     JNZ 0x006f6234
006F6276  EB 13                     JMP 0x006f628b
LAB_006f6278:
006F6278  8B 55 34                  MOV EDX,dword ptr [EBP + 0x34]
006F627B  03 F7                     ADD ESI,EDI
006F627D  03 D7                     ADD EDX,EDI
006F627F  89 55 34                  MOV dword ptr [EBP + 0x34],EDX
006F6282  8B 55 10                  MOV EDX,dword ptr [EBP + 0x10]
006F6285  8D 14 7A                  LEA EDX,[EDX + EDI*0x2]
006F6288  89 55 10                  MOV dword ptr [EBP + 0x10],EDX
LAB_006f628b:
006F628B  8B 55 20                  MOV EDX,dword ptr [EBP + 0x20]
006F628E  8B 7D 24                  MOV EDI,dword ptr [EBP + 0x24]
006F6291  2B D7                     SUB EDX,EDI
006F6293  8B 7D 28                  MOV EDI,dword ptr [EBP + 0x28]
006F6296  2B D7                     SUB EDX,EDI
006F6298  3B C2                     CMP EAX,EDX
006F629A  7D 2B                     JGE 0x006f62c7
LAB_006f629c:
006F629C  81 E1 C0 00 00 00         AND ECX,0xc0
006F62A2  2B D0                     SUB EDX,EAX
006F62A4  80 F9 80                  CMP CL,0x80
006F62A7  75 02                     JNZ 0x006f62ab
006F62A9  03 D8                     ADD EBX,EAX
LAB_006f62ab:
006F62AB  33 C9                     XOR ECX,ECX
006F62AD  8A 0B                     MOV CL,byte ptr [EBX]
006F62AF  8B C1                     MOV EAX,ECX
006F62B1  24 80                     AND AL,0x80
006F62B3  43                        INC EBX
006F62B4  84 C0                     TEST AL,AL
006F62B6  8B C1                     MOV EAX,ECX
006F62B8  74 09                     JZ 0x006f62c3
006F62BA  83 E0 3F                  AND EAX,0x3f
006F62BD  F6 C1 40                  TEST CL,0x40
006F62C0  74 01                     JZ 0x006f62c3
006F62C2  43                        INC EBX
LAB_006f62c3:
006F62C3  3B C2                     CMP EAX,EDX
006F62C5  7C D5                     JL 0x006f629c
LAB_006f62c7:
006F62C7  81 E1 C0 00 00 00         AND ECX,0xc0
006F62CD  80 F9 80                  CMP CL,0x80
006F62D0  75 02                     JNZ 0x006f62d4
006F62D2  03 DA                     ADD EBX,EDX
LAB_006f62d4:
006F62D4  8B 4D 0C                  MOV ECX,dword ptr [EBP + 0xc]
006F62D7  8B 45 28                  MOV EAX,dword ptr [EBP + 0x28]
006F62DA  8B 55 38                  MOV EDX,dword ptr [EBP + 0x38]
006F62DD  8B 7D 34                  MOV EDI,dword ptr [EBP + 0x34]
006F62E0  2B C8                     SUB ECX,EAX
006F62E2  2B D0                     SUB EDX,EAX
006F62E4  03 F1                     ADD ESI,ECX
006F62E6  8B 4D 14                  MOV ECX,dword ptr [EBP + 0x14]
006F62E9  03 C0                     ADD EAX,EAX
006F62EB  03 FA                     ADD EDI,EDX
006F62ED  2B C8                     SUB ECX,EAX
006F62EF  8B 45 10                  MOV EAX,dword ptr [EBP + 0x10]
006F62F2  03 C1                     ADD EAX,ECX
006F62F4  89 7D 34                  MOV dword ptr [EBP + 0x34],EDI
006F62F7  89 45 10                  MOV dword ptr [EBP + 0x10],EAX
006F62FA  EB 1B                     JMP 0x006f6317
LAB_006f62fc:
006F62FC  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
006F62FF  8B 55 38                  MOV EDX,dword ptr [EBP + 0x38]
006F6302  8B 7D 34                  MOV EDI,dword ptr [EBP + 0x34]
006F6305  8B 4D 10                  MOV ECX,dword ptr [EBP + 0x10]
006F6308  03 F0                     ADD ESI,EAX
006F630A  8B 45 14                  MOV EAX,dword ptr [EBP + 0x14]
006F630D  03 FA                     ADD EDI,EDX
006F630F  03 C8                     ADD ECX,EAX
006F6311  89 7D 34                  MOV dword ptr [EBP + 0x34],EDI
006F6314  89 4D 10                  MOV dword ptr [EBP + 0x10],ECX
LAB_006f6317:
006F6317  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
006F631A  48                        DEC EAX
006F631B  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
006F631E  0F 85 21 FD FF FF         JNZ 0x006f6045
006F6324  5F                        POP EDI
006F6325  5E                        POP ESI
006F6326  5B                        POP EBX
LAB_006f6327:
006F6327  8B E5                     MOV ESP,EBP
006F6329  5D                        POP EBP
006F632A  C2 38 00                  RET 0x38
