FUN_00731ba0:
00731BA0  55                        PUSH EBP
00731BA1  8B EC                     MOV EBP,ESP
00731BA3  83 EC 3C                  SUB ESP,0x3c
00731BA6  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
00731BA9  8B 48 10                  MOV ECX,dword ptr [EAX + 0x10]
00731BAC  89 4D C4                  MOV dword ptr [EBP + -0x3c],ECX
00731BAF  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
00731BB2  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
00731BB5  2B 42 0C                  SUB EAX,dword ptr [EDX + 0xc]
00731BB8  89 45 F0                  MOV dword ptr [EBP + -0x10],EAX
00731BBB  8B 4D F0                  MOV ECX,dword ptr [EBP + -0x10]
00731BBE  C1 E9 0F                  SHR ECX,0xf
00731BC1  89 4D FC                  MOV dword ptr [EBP + -0x4],ECX
00731BC4  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
00731BC7  69 D2 04 02 00 00         IMUL EDX,EDX,0x204
00731BCD  8B 45 C4                  MOV EAX,dword ptr [EBP + -0x3c]
00731BD0  8D 8C 10 44 01 00 00      LEA ECX,[EAX + EDX*0x1 + 0x144]
00731BD7  89 4D F8                  MOV dword ptr [EBP + -0x8],ECX
00731BDA  8B 55 0C                  MOV EDX,dword ptr [EBP + 0xc]
00731BDD  83 EA 04                  SUB EDX,0x4
00731BE0  89 55 E4                  MOV dword ptr [EBP + -0x1c],EDX
00731BE3  8B 45 E4                  MOV EAX,dword ptr [EBP + -0x1c]
00731BE6  8B 08                     MOV ECX,dword ptr [EAX]
00731BE8  83 E9 01                  SUB ECX,0x1
00731BEB  89 4D D0                  MOV dword ptr [EBP + -0x30],ECX
00731BEE  8B 55 E4                  MOV EDX,dword ptr [EBP + -0x1c]
00731BF1  03 55 D0                  ADD EDX,dword ptr [EBP + -0x30]
00731BF4  89 55 C8                  MOV dword ptr [EBP + -0x38],EDX
00731BF7  8B 45 C8                  MOV EAX,dword ptr [EBP + -0x38]
00731BFA  8B 08                     MOV ECX,dword ptr [EAX]
00731BFC  89 4D EC                  MOV dword ptr [EBP + -0x14],ECX
00731BFF  8B 55 E4                  MOV EDX,dword ptr [EBP + -0x1c]
00731C02  8B 42 FC                  MOV EAX,dword ptr [EDX + -0x4]
00731C05  89 45 F4                  MOV dword ptr [EBP + -0xc],EAX
00731C08  8B 4D EC                  MOV ECX,dword ptr [EBP + -0x14]
00731C0B  83 E1 01                  AND ECX,0x1
00731C0E  85 C9                     TEST ECX,ECX
00731C10  0F 85 22 01 00 00         JNZ 0x00731d38
00731C16  8B 55 EC                  MOV EDX,dword ptr [EBP + -0x14]
00731C19  C1 FA 04                  SAR EDX,0x4
00731C1C  83 EA 01                  SUB EDX,0x1
00731C1F  89 55 DC                  MOV dword ptr [EBP + -0x24],EDX
00731C22  83 7D DC 3F               CMP dword ptr [EBP + -0x24],0x3f
00731C26  76 07                     JBE 0x00731c2f
00731C28  C7 45 DC 3F 00 00 00      MOV dword ptr [EBP + -0x24],0x3f
LAB_00731c2f:
00731C2F  8B 45 C8                  MOV EAX,dword ptr [EBP + -0x38]
00731C32  8B 4D C8                  MOV ECX,dword ptr [EBP + -0x38]
00731C35  8B 50 04                  MOV EDX,dword ptr [EAX + 0x4]
00731C38  3B 51 08                  CMP EDX,dword ptr [ECX + 0x8]
00731C3B  0F 85 D0 00 00 00         JNZ 0x00731d11
00731C41  83 7D DC 20               CMP dword ptr [EBP + -0x24],0x20
00731C45  73 5F                     JNC 0x00731ca6
00731C47  B8 00 00 00 80            MOV EAX,0x80000000
00731C4C  8B 4D DC                  MOV ECX,dword ptr [EBP + -0x24]
00731C4F  D3 E8                     SHR EAX,CL
00731C51  F7 D0                     NOT EAX
00731C53  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
00731C56  8B 55 C4                  MOV EDX,dword ptr [EBP + -0x3c]
00731C59  8B 4C 8A 44               MOV ECX,dword ptr [EDX + ECX*0x4 + 0x44]
00731C5D  23 C8                     AND ECX,EAX
00731C5F  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
00731C62  8B 45 C4                  MOV EAX,dword ptr [EBP + -0x3c]
00731C65  89 4C 90 44               MOV dword ptr [EAX + EDX*0x4 + 0x44],ECX
00731C69  8B 4D C4                  MOV ECX,dword ptr [EBP + -0x3c]
00731C6C  03 4D DC                  ADD ECX,dword ptr [EBP + -0x24]
00731C6F  8A 51 04                  MOV DL,byte ptr [ECX + 0x4]
00731C72  80 EA 01                  SUB DL,0x1
00731C75  8B 45 C4                  MOV EAX,dword ptr [EBP + -0x3c]
00731C78  03 45 DC                  ADD EAX,dword ptr [EBP + -0x24]
00731C7B  88 50 04                  MOV byte ptr [EAX + 0x4],DL
00731C7E  8B 4D C4                  MOV ECX,dword ptr [EBP + -0x3c]
00731C81  03 4D DC                  ADD ECX,dword ptr [EBP + -0x24]
00731C84  0F BE 51 04               MOVSX EDX,byte ptr [ECX + 0x4]
00731C88  85 D2                     TEST EDX,EDX
00731C8A  75 18                     JNZ 0x00731ca4
00731C8C  B8 00 00 00 80            MOV EAX,0x80000000
00731C91  8B 4D DC                  MOV ECX,dword ptr [EBP + -0x24]
00731C94  D3 E8                     SHR EAX,CL
00731C96  F7 D0                     NOT EAX
00731C98  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
00731C9B  8B 11                     MOV EDX,dword ptr [ECX]
00731C9D  23 D0                     AND EDX,EAX
00731C9F  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
00731CA2  89 10                     MOV dword ptr [EAX],EDX
LAB_00731ca4:
00731CA4  EB 6B                     JMP 0x00731d11
LAB_00731ca6:
00731CA6  8B 4D DC                  MOV ECX,dword ptr [EBP + -0x24]
00731CA9  83 E9 20                  SUB ECX,0x20
00731CAC  BA 00 00 00 80            MOV EDX,0x80000000
00731CB1  D3 EA                     SHR EDX,CL
00731CB3  F7 D2                     NOT EDX
00731CB5  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
00731CB8  8B 4D C4                  MOV ECX,dword ptr [EBP + -0x3c]
00731CBB  8B 84 81 C4 00 00 00      MOV EAX,dword ptr [ECX + EAX*0x4 + 0xc4]
00731CC2  23 C2                     AND EAX,EDX
00731CC4  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
00731CC7  8B 55 C4                  MOV EDX,dword ptr [EBP + -0x3c]
00731CCA  89 84 8A C4 00 00 00      MOV dword ptr [EDX + ECX*0x4 + 0xc4],EAX
00731CD1  8B 45 C4                  MOV EAX,dword ptr [EBP + -0x3c]
00731CD4  03 45 DC                  ADD EAX,dword ptr [EBP + -0x24]
00731CD7  8A 48 04                  MOV CL,byte ptr [EAX + 0x4]
00731CDA  80 E9 01                  SUB CL,0x1
00731CDD  8B 55 C4                  MOV EDX,dword ptr [EBP + -0x3c]
00731CE0  03 55 DC                  ADD EDX,dword ptr [EBP + -0x24]
00731CE3  88 4A 04                  MOV byte ptr [EDX + 0x4],CL
00731CE6  8B 45 C4                  MOV EAX,dword ptr [EBP + -0x3c]
00731CE9  03 45 DC                  ADD EAX,dword ptr [EBP + -0x24]
00731CEC  0F BE 48 04               MOVSX ECX,byte ptr [EAX + 0x4]
00731CF0  85 C9                     TEST ECX,ECX
00731CF2  75 1D                     JNZ 0x00731d11
00731CF4  8B 4D DC                  MOV ECX,dword ptr [EBP + -0x24]
00731CF7  83 E9 20                  SUB ECX,0x20
00731CFA  BA 00 00 00 80            MOV EDX,0x80000000
00731CFF  D3 EA                     SHR EDX,CL
00731D01  F7 D2                     NOT EDX
00731D03  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
00731D06  8B 48 04                  MOV ECX,dword ptr [EAX + 0x4]
00731D09  23 CA                     AND ECX,EDX
00731D0B  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
00731D0E  89 4A 04                  MOV dword ptr [EDX + 0x4],ECX
LAB_00731d11:
00731D11  8B 45 C8                  MOV EAX,dword ptr [EBP + -0x38]
00731D14  8B 48 08                  MOV ECX,dword ptr [EAX + 0x8]
00731D17  8B 55 C8                  MOV EDX,dword ptr [EBP + -0x38]
00731D1A  8B 42 04                  MOV EAX,dword ptr [EDX + 0x4]
00731D1D  89 41 04                  MOV dword ptr [ECX + 0x4],EAX
00731D20  8B 4D C8                  MOV ECX,dword ptr [EBP + -0x38]
00731D23  8B 51 04                  MOV EDX,dword ptr [ECX + 0x4]
00731D26  8B 45 C8                  MOV EAX,dword ptr [EBP + -0x38]
00731D29  8B 48 08                  MOV ECX,dword ptr [EAX + 0x8]
00731D2C  89 4A 08                  MOV dword ptr [EDX + 0x8],ECX
00731D2F  8B 55 D0                  MOV EDX,dword ptr [EBP + -0x30]
00731D32  03 55 EC                  ADD EDX,dword ptr [EBP + -0x14]
00731D35  89 55 D0                  MOV dword ptr [EBP + -0x30],EDX
LAB_00731d38:
00731D38  8B 45 D0                  MOV EAX,dword ptr [EBP + -0x30]
00731D3B  C1 F8 04                  SAR EAX,0x4
00731D3E  83 E8 01                  SUB EAX,0x1
00731D41  89 45 D8                  MOV dword ptr [EBP + -0x28],EAX
00731D44  83 7D D8 3F               CMP dword ptr [EBP + -0x28],0x3f
00731D48  76 07                     JBE 0x00731d51
00731D4A  C7 45 D8 3F 00 00 00      MOV dword ptr [EBP + -0x28],0x3f
LAB_00731d51:
00731D51  8B 4D F4                  MOV ECX,dword ptr [EBP + -0xc]
00731D54  83 E1 01                  AND ECX,0x1
00731D57  85 C9                     TEST ECX,ECX
00731D59  0F 85 56 01 00 00         JNZ 0x00731eb5
00731D5F  8B 55 E4                  MOV EDX,dword ptr [EBP + -0x1c]
00731D62  2B 55 F4                  SUB EDX,dword ptr [EBP + -0xc]
00731D65  89 55 CC                  MOV dword ptr [EBP + -0x34],EDX
00731D68  8B 45 F4                  MOV EAX,dword ptr [EBP + -0xc]
00731D6B  C1 F8 04                  SAR EAX,0x4
00731D6E  83 E8 01                  SUB EAX,0x1
00731D71  89 45 D4                  MOV dword ptr [EBP + -0x2c],EAX
00731D74  83 7D D4 3F               CMP dword ptr [EBP + -0x2c],0x3f
00731D78  76 07                     JBE 0x00731d81
00731D7A  C7 45 D4 3F 00 00 00      MOV dword ptr [EBP + -0x2c],0x3f
LAB_00731d81:
00731D81  8B 4D D0                  MOV ECX,dword ptr [EBP + -0x30]
00731D84  03 4D F4                  ADD ECX,dword ptr [EBP + -0xc]
00731D87  89 4D D0                  MOV dword ptr [EBP + -0x30],ECX
00731D8A  8B 55 D0                  MOV EDX,dword ptr [EBP + -0x30]
00731D8D  C1 FA 04                  SAR EDX,0x4
00731D90  83 EA 01                  SUB EDX,0x1
00731D93  89 55 D8                  MOV dword ptr [EBP + -0x28],EDX
00731D96  83 7D D8 3F               CMP dword ptr [EBP + -0x28],0x3f
00731D9A  76 07                     JBE 0x00731da3
00731D9C  C7 45 D8 3F 00 00 00      MOV dword ptr [EBP + -0x28],0x3f
LAB_00731da3:
00731DA3  8B 45 D4                  MOV EAX,dword ptr [EBP + -0x2c]
00731DA6  3B 45 D8                  CMP EAX,dword ptr [EBP + -0x28]
00731DA9  0F 84 00 01 00 00         JZ 0x00731eaf
00731DAF  8B 4D CC                  MOV ECX,dword ptr [EBP + -0x34]
00731DB2  8B 55 CC                  MOV EDX,dword ptr [EBP + -0x34]
00731DB5  8B 41 04                  MOV EAX,dword ptr [ECX + 0x4]
00731DB8  3B 42 08                  CMP EAX,dword ptr [EDX + 0x8]
00731DBB  0F 85 D0 00 00 00         JNZ 0x00731e91
00731DC1  83 7D D4 20               CMP dword ptr [EBP + -0x2c],0x20
00731DC5  73 5F                     JNC 0x00731e26
00731DC7  BA 00 00 00 80            MOV EDX,0x80000000
00731DCC  8B 4D D4                  MOV ECX,dword ptr [EBP + -0x2c]
00731DCF  D3 EA                     SHR EDX,CL
00731DD1  F7 D2                     NOT EDX
00731DD3  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
00731DD6  8B 4D C4                  MOV ECX,dword ptr [EBP + -0x3c]
00731DD9  8B 44 81 44               MOV EAX,dword ptr [ECX + EAX*0x4 + 0x44]
00731DDD  23 C2                     AND EAX,EDX
00731DDF  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
00731DE2  8B 55 C4                  MOV EDX,dword ptr [EBP + -0x3c]
00731DE5  89 44 8A 44               MOV dword ptr [EDX + ECX*0x4 + 0x44],EAX
00731DE9  8B 45 C4                  MOV EAX,dword ptr [EBP + -0x3c]
00731DEC  03 45 D4                  ADD EAX,dword ptr [EBP + -0x2c]
00731DEF  8A 48 04                  MOV CL,byte ptr [EAX + 0x4]
00731DF2  80 E9 01                  SUB CL,0x1
00731DF5  8B 55 C4                  MOV EDX,dword ptr [EBP + -0x3c]
00731DF8  03 55 D4                  ADD EDX,dword ptr [EBP + -0x2c]
00731DFB  88 4A 04                  MOV byte ptr [EDX + 0x4],CL
00731DFE  8B 45 C4                  MOV EAX,dword ptr [EBP + -0x3c]
00731E01  03 45 D4                  ADD EAX,dword ptr [EBP + -0x2c]
00731E04  0F BE 48 04               MOVSX ECX,byte ptr [EAX + 0x4]
00731E08  85 C9                     TEST ECX,ECX
00731E0A  75 18                     JNZ 0x00731e24
00731E0C  BA 00 00 00 80            MOV EDX,0x80000000
00731E11  8B 4D D4                  MOV ECX,dword ptr [EBP + -0x2c]
00731E14  D3 EA                     SHR EDX,CL
00731E16  F7 D2                     NOT EDX
00731E18  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
00731E1B  8B 08                     MOV ECX,dword ptr [EAX]
00731E1D  23 CA                     AND ECX,EDX
00731E1F  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
00731E22  89 0A                     MOV dword ptr [EDX],ECX
LAB_00731e24:
00731E24  EB 6B                     JMP 0x00731e91
LAB_00731e26:
00731E26  8B 4D D4                  MOV ECX,dword ptr [EBP + -0x2c]
00731E29  83 E9 20                  SUB ECX,0x20
00731E2C  B8 00 00 00 80            MOV EAX,0x80000000
00731E31  D3 E8                     SHR EAX,CL
00731E33  F7 D0                     NOT EAX
00731E35  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
00731E38  8B 55 C4                  MOV EDX,dword ptr [EBP + -0x3c]
00731E3B  8B 8C 8A C4 00 00 00      MOV ECX,dword ptr [EDX + ECX*0x4 + 0xc4]
00731E42  23 C8                     AND ECX,EAX
00731E44  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
00731E47  8B 45 C4                  MOV EAX,dword ptr [EBP + -0x3c]
00731E4A  89 8C 90 C4 00 00 00      MOV dword ptr [EAX + EDX*0x4 + 0xc4],ECX
00731E51  8B 4D C4                  MOV ECX,dword ptr [EBP + -0x3c]
00731E54  03 4D D4                  ADD ECX,dword ptr [EBP + -0x2c]
00731E57  8A 51 04                  MOV DL,byte ptr [ECX + 0x4]
00731E5A  80 EA 01                  SUB DL,0x1
00731E5D  8B 45 C4                  MOV EAX,dword ptr [EBP + -0x3c]
00731E60  03 45 D4                  ADD EAX,dword ptr [EBP + -0x2c]
00731E63  88 50 04                  MOV byte ptr [EAX + 0x4],DL
00731E66  8B 4D C4                  MOV ECX,dword ptr [EBP + -0x3c]
00731E69  03 4D D4                  ADD ECX,dword ptr [EBP + -0x2c]
00731E6C  0F BE 51 04               MOVSX EDX,byte ptr [ECX + 0x4]
00731E70  85 D2                     TEST EDX,EDX
00731E72  75 1D                     JNZ 0x00731e91
00731E74  8B 4D D4                  MOV ECX,dword ptr [EBP + -0x2c]
00731E77  83 E9 20                  SUB ECX,0x20
00731E7A  B8 00 00 00 80            MOV EAX,0x80000000
00731E7F  D3 E8                     SHR EAX,CL
00731E81  F7 D0                     NOT EAX
00731E83  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
00731E86  8B 51 04                  MOV EDX,dword ptr [ECX + 0x4]
00731E89  23 D0                     AND EDX,EAX
00731E8B  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
00731E8E  89 50 04                  MOV dword ptr [EAX + 0x4],EDX
LAB_00731e91:
00731E91  8B 4D CC                  MOV ECX,dword ptr [EBP + -0x34]
00731E94  8B 51 08                  MOV EDX,dword ptr [ECX + 0x8]
00731E97  8B 45 CC                  MOV EAX,dword ptr [EBP + -0x34]
00731E9A  8B 48 04                  MOV ECX,dword ptr [EAX + 0x4]
00731E9D  89 4A 04                  MOV dword ptr [EDX + 0x4],ECX
00731EA0  8B 55 CC                  MOV EDX,dword ptr [EBP + -0x34]
00731EA3  8B 42 04                  MOV EAX,dword ptr [EDX + 0x4]
00731EA6  8B 4D CC                  MOV ECX,dword ptr [EBP + -0x34]
00731EA9  8B 51 08                  MOV EDX,dword ptr [ECX + 0x8]
00731EAC  89 50 08                  MOV dword ptr [EAX + 0x8],EDX
LAB_00731eaf:
00731EAF  8B 45 CC                  MOV EAX,dword ptr [EBP + -0x34]
00731EB2  89 45 E4                  MOV dword ptr [EBP + -0x1c],EAX
LAB_00731eb5:
00731EB5  8B 4D F4                  MOV ECX,dword ptr [EBP + -0xc]
00731EB8  83 E1 01                  AND ECX,0x1
00731EBB  85 C9                     TEST ECX,ECX
00731EBD  75 0C                     JNZ 0x00731ecb
00731EBF  8B 55 D4                  MOV EDX,dword ptr [EBP + -0x2c]
00731EC2  3B 55 D8                  CMP EDX,dword ptr [EBP + -0x28]
00731EC5  0F 84 10 01 00 00         JZ 0x00731fdb
LAB_00731ecb:
00731ECB  8B 45 D8                  MOV EAX,dword ptr [EBP + -0x28]
00731ECE  8B 4D F8                  MOV ECX,dword ptr [EBP + -0x8]
00731ED1  8D 14 C1                  LEA EDX,[ECX + EAX*0x8]
00731ED4  89 55 E0                  MOV dword ptr [EBP + -0x20],EDX
00731ED7  8B 45 E4                  MOV EAX,dword ptr [EBP + -0x1c]
00731EDA  8B 4D E0                  MOV ECX,dword ptr [EBP + -0x20]
00731EDD  8B 51 04                  MOV EDX,dword ptr [ECX + 0x4]
00731EE0  89 50 04                  MOV dword ptr [EAX + 0x4],EDX
00731EE3  8B 45 E4                  MOV EAX,dword ptr [EBP + -0x1c]
00731EE6  8B 4D E0                  MOV ECX,dword ptr [EBP + -0x20]
00731EE9  89 48 08                  MOV dword ptr [EAX + 0x8],ECX
00731EEC  8B 55 E0                  MOV EDX,dword ptr [EBP + -0x20]
00731EEF  8B 45 E4                  MOV EAX,dword ptr [EBP + -0x1c]
00731EF2  89 42 04                  MOV dword ptr [EDX + 0x4],EAX
00731EF5  8B 4D E4                  MOV ECX,dword ptr [EBP + -0x1c]
00731EF8  8B 51 04                  MOV EDX,dword ptr [ECX + 0x4]
00731EFB  8B 45 E4                  MOV EAX,dword ptr [EBP + -0x1c]
00731EFE  89 42 08                  MOV dword ptr [EDX + 0x8],EAX
00731F01  8B 4D E4                  MOV ECX,dword ptr [EBP + -0x1c]
00731F04  8B 55 E4                  MOV EDX,dword ptr [EBP + -0x1c]
00731F07  8B 41 04                  MOV EAX,dword ptr [ECX + 0x4]
00731F0A  3B 42 08                  CMP EAX,dword ptr [EDX + 0x8]
00731F0D  0F 85 C8 00 00 00         JNZ 0x00731fdb
00731F13  83 7D D8 20               CMP dword ptr [EBP + -0x28],0x20
00731F17  73 5B                     JNC 0x00731f74
00731F19  8B 4D C4                  MOV ECX,dword ptr [EBP + -0x3c]
00731F1C  03 4D D8                  ADD ECX,dword ptr [EBP + -0x28]
00731F1F  0F BE 51 04               MOVSX EDX,byte ptr [ECX + 0x4]
00731F23  8B 45 C4                  MOV EAX,dword ptr [EBP + -0x3c]
00731F26  03 45 D8                  ADD EAX,dword ptr [EBP + -0x28]
00731F29  8A 48 04                  MOV CL,byte ptr [EAX + 0x4]
00731F2C  80 C1 01                  ADD CL,0x1
00731F2F  8B 45 C4                  MOV EAX,dword ptr [EBP + -0x3c]
00731F32  03 45 D8                  ADD EAX,dword ptr [EBP + -0x28]
00731F35  88 48 04                  MOV byte ptr [EAX + 0x4],CL
00731F38  85 D2                     TEST EDX,EDX
00731F3A  75 16                     JNZ 0x00731f52
00731F3C  BA 00 00 00 80            MOV EDX,0x80000000
00731F41  8B 4D D8                  MOV ECX,dword ptr [EBP + -0x28]
00731F44  D3 EA                     SHR EDX,CL
00731F46  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
00731F49  8B 08                     MOV ECX,dword ptr [EAX]
00731F4B  0B CA                     OR ECX,EDX
00731F4D  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
00731F50  89 0A                     MOV dword ptr [EDX],ECX
LAB_00731f52:
00731F52  B8 00 00 00 80            MOV EAX,0x80000000
00731F57  8B 4D D8                  MOV ECX,dword ptr [EBP + -0x28]
00731F5A  D3 E8                     SHR EAX,CL
00731F5C  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
00731F5F  8B 55 C4                  MOV EDX,dword ptr [EBP + -0x3c]
00731F62  8B 4C 8A 44               MOV ECX,dword ptr [EDX + ECX*0x4 + 0x44]
00731F66  0B C8                     OR ECX,EAX
00731F68  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
00731F6B  8B 45 C4                  MOV EAX,dword ptr [EBP + -0x3c]
00731F6E  89 4C 90 44               MOV dword ptr [EAX + EDX*0x4 + 0x44],ECX
00731F72  EB 67                     JMP 0x00731fdb
LAB_00731f74:
00731F74  8B 4D C4                  MOV ECX,dword ptr [EBP + -0x3c]
00731F77  03 4D D8                  ADD ECX,dword ptr [EBP + -0x28]
00731F7A  0F BE 51 04               MOVSX EDX,byte ptr [ECX + 0x4]
00731F7E  8B 45 C4                  MOV EAX,dword ptr [EBP + -0x3c]
00731F81  03 45 D8                  ADD EAX,dword ptr [EBP + -0x28]
00731F84  8A 48 04                  MOV CL,byte ptr [EAX + 0x4]
00731F87  80 C1 01                  ADD CL,0x1
00731F8A  8B 45 C4                  MOV EAX,dword ptr [EBP + -0x3c]
00731F8D  03 45 D8                  ADD EAX,dword ptr [EBP + -0x28]
00731F90  88 48 04                  MOV byte ptr [EAX + 0x4],CL
00731F93  85 D2                     TEST EDX,EDX
00731F95  75 1B                     JNZ 0x00731fb2
00731F97  8B 4D D8                  MOV ECX,dword ptr [EBP + -0x28]
00731F9A  83 E9 20                  SUB ECX,0x20
00731F9D  BA 00 00 00 80            MOV EDX,0x80000000
00731FA2  D3 EA                     SHR EDX,CL
00731FA4  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
00731FA7  8B 48 04                  MOV ECX,dword ptr [EAX + 0x4]
00731FAA  0B CA                     OR ECX,EDX
00731FAC  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
00731FAF  89 4A 04                  MOV dword ptr [EDX + 0x4],ECX
LAB_00731fb2:
00731FB2  8B 4D D8                  MOV ECX,dword ptr [EBP + -0x28]
00731FB5  83 E9 20                  SUB ECX,0x20
00731FB8  B8 00 00 00 80            MOV EAX,0x80000000
00731FBD  D3 E8                     SHR EAX,CL
00731FBF  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
00731FC2  8B 55 C4                  MOV EDX,dword ptr [EBP + -0x3c]
00731FC5  8B 8C 8A C4 00 00 00      MOV ECX,dword ptr [EDX + ECX*0x4 + 0xc4]
00731FCC  0B C8                     OR ECX,EAX
00731FCE  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
00731FD1  8B 45 C4                  MOV EAX,dword ptr [EBP + -0x3c]
00731FD4  89 8C 90 C4 00 00 00      MOV dword ptr [EAX + EDX*0x4 + 0xc4],ECX
LAB_00731fdb:
00731FDB  8B 4D E4                  MOV ECX,dword ptr [EBP + -0x1c]
00731FDE  8B 55 D0                  MOV EDX,dword ptr [EBP + -0x30]
00731FE1  89 11                     MOV dword ptr [ECX],EDX
00731FE3  8B 45 E4                  MOV EAX,dword ptr [EBP + -0x1c]
00731FE6  03 45 D0                  ADD EAX,dword ptr [EBP + -0x30]
00731FE9  8B 4D D0                  MOV ECX,dword ptr [EBP + -0x30]
00731FEC  89 48 FC                  MOV dword ptr [EAX + -0x4],ECX
00731FEF  8B 55 F8                  MOV EDX,dword ptr [EBP + -0x8]
00731FF2  8B 02                     MOV EAX,dword ptr [EDX]
00731FF4  83 E8 01                  SUB EAX,0x1
00731FF7  8B 4D F8                  MOV ECX,dword ptr [EBP + -0x8]
00731FFA  89 01                     MOV dword ptr [ECX],EAX
00731FFC  8B 55 F8                  MOV EDX,dword ptr [EBP + -0x8]
00731FFF  83 3A 00                  CMP dword ptr [EDX],0x0
00732002  0F 85 61 01 00 00         JNZ 0x00732169
00732008  83 3D B8 A5 85 00 00      CMP dword ptr [0x0085a5b8],0x0
0073200F  0F 84 43 01 00 00         JZ 0x00732158
00732015  A1 B0 A5 85 00            MOV EAX,[0x0085a5b0]
0073201A  C1 E0 0F                  SHL EAX,0xf
0073201D  8B 0D B8 A5 85 00         MOV ECX,dword ptr [0x0085a5b8]
00732023  8B 51 0C                  MOV EDX,dword ptr [ECX + 0xc]
00732026  03 D0                     ADD EDX,EAX
00732028  89 55 E8                  MOV dword ptr [EBP + -0x18],EDX
0073202B  68 00 40 00 00            PUSH 0x4000
00732030  68 00 80 00 00            PUSH 0x8000
00732035  8B 45 E8                  MOV EAX,dword ptr [EBP + -0x18]
00732038  50                        PUSH EAX
00732039  FF 15 E0 BB 85 00         CALL dword ptr [0x0085bbe0]
0073203F  BA 00 00 00 80            MOV EDX,0x80000000
00732044  8B 0D B0 A5 85 00         MOV ECX,dword ptr [0x0085a5b0]
0073204A  D3 EA                     SHR EDX,CL
0073204C  A1 B8 A5 85 00            MOV EAX,[0x0085a5b8]
00732051  8B 48 08                  MOV ECX,dword ptr [EAX + 0x8]
00732054  0B CA                     OR ECX,EDX
00732056  8B 15 B8 A5 85 00         MOV EDX,dword ptr [0x0085a5b8]
0073205C  89 4A 08                  MOV dword ptr [EDX + 0x8],ECX
0073205F  A1 B8 A5 85 00            MOV EAX,[0x0085a5b8]
00732064  8B 48 10                  MOV ECX,dword ptr [EAX + 0x10]
00732067  8B 15 B0 A5 85 00         MOV EDX,dword ptr [0x0085a5b0]
0073206D  C7 84 91 C4 00 00 00 00 00 00 00  MOV dword ptr [ECX + EDX*0x4 + 0xc4],0x0
00732078  A1 B8 A5 85 00            MOV EAX,[0x0085a5b8]
0073207D  8B 48 10                  MOV ECX,dword ptr [EAX + 0x10]
00732080  8A 51 43                  MOV DL,byte ptr [ECX + 0x43]
00732083  80 EA 01                  SUB DL,0x1
00732086  A1 B8 A5 85 00            MOV EAX,[0x0085a5b8]
0073208B  8B 48 10                  MOV ECX,dword ptr [EAX + 0x10]
0073208E  88 51 43                  MOV byte ptr [ECX + 0x43],DL
00732091  8B 15 B8 A5 85 00         MOV EDX,dword ptr [0x0085a5b8]
00732097  8B 42 10                  MOV EAX,dword ptr [EDX + 0x10]
0073209A  0F BE 48 43               MOVSX ECX,byte ptr [EAX + 0x43]
0073209E  85 C9                     TEST ECX,ECX
007320A0  75 14                     JNZ 0x007320b6
007320A2  8B 15 B8 A5 85 00         MOV EDX,dword ptr [0x0085a5b8]
007320A8  8B 42 04                  MOV EAX,dword ptr [EDX + 0x4]
007320AB  24 FE                     AND AL,0xfe
007320AD  8B 0D B8 A5 85 00         MOV ECX,dword ptr [0x0085a5b8]
007320B3  89 41 04                  MOV dword ptr [ECX + 0x4],EAX
LAB_007320b6:
007320B6  8B 15 B8 A5 85 00         MOV EDX,dword ptr [0x0085a5b8]
007320BC  83 7A 08 FF               CMP dword ptr [EDX + 0x8],-0x1
007320C0  0F 85 92 00 00 00         JNZ 0x00732158
007320C6  68 00 80 00 00            PUSH 0x8000
007320CB  6A 00                     PUSH 0x0
007320CD  A1 B8 A5 85 00            MOV EAX,[0x0085a5b8]
007320D2  8B 48 0C                  MOV ECX,dword ptr [EAX + 0xc]
007320D5  51                        PUSH ECX
007320D6  FF 15 E0 BB 85 00         CALL dword ptr [0x0085bbe0]
007320DC  8B 15 B8 A5 85 00         MOV EDX,dword ptr [0x0085a5b8]
007320E2  8B 42 10                  MOV EAX,dword ptr [EDX + 0x10]
007320E5  50                        PUSH EAX
007320E6  6A 00                     PUSH 0x0
007320E8  8B 0D C4 A5 85 00         MOV ECX,dword ptr [0x0085a5c4]
007320EE  51                        PUSH ECX
007320EF  FF 15 D4 BB 85 00         CALL dword ptr [0x0085bbd4]
007320F5  8B 15 BC A5 85 00         MOV EDX,dword ptr [0x0085a5bc]
007320FB  6B D2 14                  IMUL EDX,EDX,0x14
007320FE  A1 C0 A5 85 00            MOV EAX,[0x0085a5c0]
00732103  03 C2                     ADD EAX,EDX
00732105  8B 0D B8 A5 85 00         MOV ECX,dword ptr [0x0085a5b8]
0073210B  83 C1 14                  ADD ECX,0x14
0073210E  2B C1                     SUB EAX,ECX
00732110  50                        PUSH EAX
00732111  8B 15 B8 A5 85 00         MOV EDX,dword ptr [0x0085a5b8]
00732117  83 C2 14                  ADD EDX,0x14
0073211A  52                        PUSH EDX
0073211B  A1 B8 A5 85 00            MOV EAX,[0x0085a5b8]
00732120  50                        PUSH EAX
00732121  E8 4A B9 FF FF            CALL 0x0072da70
00732126  83 C4 0C                  ADD ESP,0xc
00732129  8B 0D BC A5 85 00         MOV ECX,dword ptr [0x0085a5bc]
0073212F  83 E9 01                  SUB ECX,0x1
00732132  89 0D BC A5 85 00         MOV dword ptr [0x0085a5bc],ECX
00732138  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
0073213B  3B 15 B8 A5 85 00         CMP EDX,dword ptr [0x0085a5b8]
00732141  76 09                     JBE 0x0073214c
00732143  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
00732146  83 E8 14                  SUB EAX,0x14
00732149  89 45 08                  MOV dword ptr [EBP + 0x8],EAX
LAB_0073214c:
0073214C  8B 0D C0 A5 85 00         MOV ECX,dword ptr [0x0085a5c0]
00732152  89 0D B4 A5 85 00         MOV dword ptr [0x0085a5b4],ECX
LAB_00732158:
00732158  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
0073215B  89 15 B8 A5 85 00         MOV dword ptr [0x0085a5b8],EDX
00732161  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
00732164  A3 B0 A5 85 00            MOV [0x0085a5b0],EAX
LAB_00732169:
00732169  8B E5                     MOV ESP,EBP
0073216B  5D                        POP EBP
0073216C  C3                        RET
