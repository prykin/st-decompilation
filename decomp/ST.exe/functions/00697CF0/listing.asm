FUN_00697cf0:
00697CF0  55                        PUSH EBP
00697CF1  8B EC                     MOV EBP,ESP
00697CF3  6A FF                     PUSH -0x1
00697CF5  68 98 D7 79 00            PUSH 0x79d798
00697CFA  68 64 D9 72 00            PUSH 0x72d964
00697CFF  64 A1 00 00 00 00         MOV EAX,FS:[0x0]
00697D05  50                        PUSH EAX
00697D06  64 89 25 00 00 00 00      MOV dword ptr FS:[0x0],ESP
00697D0D  81 EC CC 00 00 00         SUB ESP,0xcc
00697D13  53                        PUSH EBX
00697D14  56                        PUSH ESI
00697D15  57                        PUSH EDI
00697D16  89 65 E8                  MOV dword ptr [EBP + -0x18],ESP
00697D19  8B F9                     MOV EDI,ECX
00697D1B  89 BD 34 FF FF FF         MOV dword ptr [EBP + 0xffffff34],EDI
00697D21  33 DB                     XOR EBX,EBX
00697D23  89 5D 98                  MOV dword ptr [EBP + -0x68],EBX
00697D26  89 5D BC                  MOV dword ptr [EBP + -0x44],EBX
00697D29  89 5D A8                  MOV dword ptr [EBP + -0x58],EBX
00697D2C  89 9D 58 FF FF FF         MOV dword ptr [EBP + 0xffffff58],EBX
00697D32  89 9D 4C FF FF FF         MOV dword ptr [EBP + 0xffffff4c],EBX
00697D38  89 5D 9C                  MOV dword ptr [EBP + -0x64],EBX
00697D3B  8B 87 53 58 00 00         MOV EAX,dword ptr [EDI + 0x5853]
00697D41  3B C3                     CMP EAX,EBX
00697D43  0F 84 FD 08 00 00         JZ 0x00698646
00697D49  8B 70 0C                  MOV ESI,dword ptr [EAX + 0xc]
00697D4C  89 75 94                  MOV dword ptr [EBP + -0x6c],ESI
00697D4F  89 5D FC                  MOV dword ptr [EBP + -0x4],EBX
00697D52  8B C6                     MOV EAX,ESI
00697D54  C1 E0 04                  SHL EAX,0x4
00697D57  83 C0 03                  ADD EAX,0x3
00697D5A  24 FC                     AND AL,0xfc
00697D5C  E8 DF 5C 09 00            CALL 0x0072da40
00697D61  89 65 E8                  MOV dword ptr [EBP + -0x18],ESP
00697D64  8B C4                     MOV EAX,ESP
00697D66  89 45 DC                  MOV dword ptr [EBP + -0x24],EAX
00697D69  C7 45 FC FF FF FF FF      MOV dword ptr [EBP + -0x4],0xffffffff
00697D70  33 C9                     XOR ECX,ECX
00697D72  89 8D 7C FF FF FF         MOV dword ptr [EBP + 0xffffff7c],ECX
00697D78  85 F6                     TEST ESI,ESI
00697D7A  0F 8E CE 01 00 00         JLE 0x00697f4e
00697D80  EB 0C                     JMP 0x00697d8e
LAB_00697d82:
00697D82  8B BD 34 FF FF FF         MOV EDI,dword ptr [EBP + 0xffffff34]
00697D88  8B 8D 7C FF FF FF         MOV ECX,dword ptr [EBP + 0xffffff7c]
LAB_00697d8e:
00697D8E  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
00697D91  85 C0                     TEST EAX,EAX
00697D93  0F 8E B5 01 00 00         JLE 0x00697f4e
00697D99  8B 87 53 58 00 00         MOV EAX,dword ptr [EDI + 0x5853]
00697D9F  3B 48 0C                  CMP ECX,dword ptr [EAX + 0xc]
00697DA2  73 0B                     JNC 0x00697daf
00697DA4  8B 70 08                  MOV ESI,dword ptr [EAX + 0x8]
00697DA7  0F AF F1                  IMUL ESI,ECX
00697DAA  03 70 1C                  ADD ESI,dword ptr [EAX + 0x1c]
00697DAD  EB 02                     JMP 0x00697db1
LAB_00697daf:
00697DAF  33 F6                     XOR ESI,ESI
LAB_00697db1:
00697DB1  89 B5 60 FF FF FF         MOV dword ptr [EBP + 0xffffff60],ESI
00697DB7  8B 06                     MOV EAX,dword ptr [ESI]
00697DB9  85 C0                     TEST EAX,EAX
00697DBB  0F 85 6F 01 00 00         JNZ 0x00697f30
00697DC1  8B 4E 05                  MOV ECX,dword ptr [ESI + 0x5]
00697DC4  85 C9                     TEST ECX,ECX
00697DC6  0F 8F 62 01 00 00         JG 0x00697f2e
00697DCC  8B 46 15                  MOV EAX,dword ptr [ESI + 0x15]
00697DCF  85 C0                     TEST EAX,EAX
00697DD1  0F 84 5B 01 00 00         JZ 0x00697f32
00697DD7  E8 E4 68 09 00            CALL 0x0072e6c0
00697DDC  99                        CDQ
00697DDD  B9 06 00 00 00            MOV ECX,0x6
00697DE2  F7 F9                     IDIV ECX
00697DE4  42                        INC EDX
00697DE5  89 95 64 FF FF FF         MOV dword ptr [EBP + 0xffffff64],EDX
00697DEB  33 FF                     XOR EDI,EDI
00697DED  89 7D 90                  MOV dword ptr [EBP + -0x70],EDI
00697DF0  33 D2                     XOR EDX,EDX
00697DF2  89 95 74 FF FF FF         MOV dword ptr [EBP + 0xffffff74],EDX
00697DF8  89 BD 70 FF FF FF         MOV dword ptr [EBP + 0xffffff70],EDI
00697DFE  8B 46 15                  MOV EAX,dword ptr [ESI + 0x15]
00697E01  8B 48 0C                  MOV ECX,dword ptr [EAX + 0xc]
00697E04  85 C9                     TEST ECX,ECX
00697E06  0F 8E D4 00 00 00         JLE 0x00697ee0
00697E0C  EB 06                     JMP 0x00697e14
LAB_00697e0e:
00697E0E  8B BD 70 FF FF FF         MOV EDI,dword ptr [EBP + 0xffffff70]
LAB_00697e14:
00697E14  3B F9                     CMP EDI,ECX
00697E16  73 0B                     JNC 0x00697e23
00697E18  8B 58 08                  MOV EBX,dword ptr [EAX + 0x8]
00697E1B  0F AF DF                  IMUL EBX,EDI
00697E1E  03 58 1C                  ADD EBX,dword ptr [EAX + 0x1c]
00697E21  EB 02                     JMP 0x00697e25
LAB_00697e23:
00697E23  33 DB                     XOR EBX,EBX
LAB_00697e25:
00697E25  85 DB                     TEST EBX,EBX
00697E27  0F 84 89 00 00 00         JZ 0x00697eb6
00697E2D  FF 85 74 FF FF FF         INC dword ptr [EBP + 0xffffff74]
00697E33  8B 73 02                  MOV ESI,dword ptr [EBX + 0x2]
00697E36  8B 95 34 FF FF FF         MOV EDX,dword ptr [EBP + 0xffffff34]
00697E3C  8B BA 33 58 00 00         MOV EDI,dword ptr [EDX + 0x5833]
00697E42  8B C6                     MOV EAX,ESI
00697E44  99                        CDQ
00697E45  F7 FF                     IDIV EDI
00697E47  8B C8                     MOV ECX,EAX
00697E49  8B C6                     MOV EAX,ESI
00697E4B  99                        CDQ
00697E4C  F7 FF                     IDIV EDI
00697E4E  8B 85 70 FF FF FF         MOV EAX,dword ptr [EBP + 0xffffff70]
00697E54  85 C0                     TEST EAX,EAX
00697E56  75 0E                     JNZ 0x00697e66
00697E58  89 55 BC                  MOV dword ptr [EBP + -0x44],EDX
00697E5B  89 4D A8                  MOV dword ptr [EBP + -0x58],ECX
00697E5E  89 95 58 FF FF FF         MOV dword ptr [EBP + 0xffffff58],EDX
00697E64  EB 26                     JMP 0x00697e8c
LAB_00697e66:
00697E66  3B 55 BC                  CMP EDX,dword ptr [EBP + -0x44]
00697E69  7D 03                     JGE 0x00697e6e
00697E6B  89 55 BC                  MOV dword ptr [EBP + -0x44],EDX
LAB_00697e6e:
00697E6E  3B 4D A8                  CMP ECX,dword ptr [EBP + -0x58]
00697E71  7D 03                     JGE 0x00697e76
00697E73  89 4D A8                  MOV dword ptr [EBP + -0x58],ECX
LAB_00697e76:
00697E76  3B 95 58 FF FF FF         CMP EDX,dword ptr [EBP + 0xffffff58]
00697E7C  7E 06                     JLE 0x00697e84
00697E7E  89 95 58 FF FF FF         MOV dword ptr [EBP + 0xffffff58],EDX
LAB_00697e84:
00697E84  3B 8D 4C FF FF FF         CMP ECX,dword ptr [EBP + 0xffffff4c]
00697E8A  7E 06                     JLE 0x00697e92
LAB_00697e8c:
00697E8C  89 8D 4C FF FF FF         MOV dword ptr [EBP + 0xffffff4c],ECX
LAB_00697e92:
00697E92  F6 03 01                  TEST byte ptr [EBX],0x1
00697E95  74 1F                     JZ 0x00697eb6
00697E97  FF 45 90                  INC dword ptr [EBP + -0x70]
00697E9A  8B 85 64 FF FF FF         MOV EAX,dword ptr [EBP + 0xffffff64]
00697EA0  50                        PUSH EAX
00697EA1  6A 01                     PUSH 0x1
00697EA3  6A 00                     PUSH 0x0
00697EA5  6A 01                     PUSH 0x1
00697EA7  6A 00                     PUSH 0x0
00697EA9  51                        PUSH ECX
00697EAA  52                        PUSH EDX
00697EAB  8B 8D 34 FF FF FF         MOV ECX,dword ptr [EBP + 0xffffff34]
00697EB1  E8 99 A1 D6 FF            CALL 0x0040204f
LAB_00697eb6:
00697EB6  8B 95 70 FF FF FF         MOV EDX,dword ptr [EBP + 0xffffff70]
00697EBC  42                        INC EDX
00697EBD  89 95 70 FF FF FF         MOV dword ptr [EBP + 0xffffff70],EDX
00697EC3  8B 8D 60 FF FF FF         MOV ECX,dword ptr [EBP + 0xffffff60]
00697EC9  8B 41 15                  MOV EAX,dword ptr [ECX + 0x15]
00697ECC  8B 48 0C                  MOV ECX,dword ptr [EAX + 0xc]
00697ECF  3B D1                     CMP EDX,ECX
00697ED1  0F 8C 37 FF FF FF         JL 0x00697e0e
00697ED7  8B 5D 98                  MOV EBX,dword ptr [EBP + -0x68]
00697EDA  8B 95 74 FF FF FF         MOV EDX,dword ptr [EBP + 0xffffff74]
LAB_00697ee0:
00697EE0  85 D2                     TEST EDX,EDX
00697EE2  74 4E                     JZ 0x00697f32
00697EE4  8B C3                     MOV EAX,EBX
00697EE6  C1 E0 04                  SHL EAX,0x4
00697EE9  8B 4D DC                  MOV ECX,dword ptr [EBP + -0x24]
00697EEC  03 C1                     ADD EAX,ECX
00697EEE  66 8B 8D 7C FF FF FF      MOV CX,word ptr [EBP + 0xffffff7c]
00697EF5  66 89 08                  MOV word ptr [EAX],CX
00697EF8  66 89 50 02               MOV word ptr [EAX + 0x2],DX
00697EFC  8B 55 90                  MOV EDX,dword ptr [EBP + -0x70]
00697EFF  89 50 04                  MOV dword ptr [EAX + 0x4],EDX
00697F02  66 8B 4D BC               MOV CX,word ptr [EBP + -0x44]
00697F06  66 89 48 08               MOV word ptr [EAX + 0x8],CX
00697F0A  66 8B 95 58 FF FF FF      MOV DX,word ptr [EBP + 0xffffff58]
00697F11  66 89 50 0A               MOV word ptr [EAX + 0xa],DX
00697F15  66 8B 4D A8               MOV CX,word ptr [EBP + -0x58]
00697F19  66 89 48 0C               MOV word ptr [EAX + 0xc],CX
00697F1D  66 8B 95 4C FF FF FF      MOV DX,word ptr [EBP + 0xffffff4c]
00697F24  66 89 50 0E               MOV word ptr [EAX + 0xe],DX
00697F28  43                        INC EBX
00697F29  89 5D 98                  MOV dword ptr [EBP + -0x68],EBX
00697F2C  EB 04                     JMP 0x00697f32
LAB_00697f2e:
00697F2E  85 C0                     TEST EAX,EAX
LAB_00697f30:
00697F30  7F 16                     JG 0x00697f48
LAB_00697f32:
00697F32  8B 85 7C FF FF FF         MOV EAX,dword ptr [EBP + 0xffffff7c]
00697F38  40                        INC EAX
00697F39  89 85 7C FF FF FF         MOV dword ptr [EBP + 0xffffff7c],EAX
00697F3F  3B 45 94                  CMP EAX,dword ptr [EBP + -0x6c]
00697F42  0F 8C 3A FE FF FF         JL 0x00697d82
LAB_00697f48:
00697F48  8B BD 34 FF FF FF         MOV EDI,dword ptr [EBP + 0xffffff34]
LAB_00697f4e:
00697F4E  85 DB                     TEST EBX,EBX
00697F50  0F 84 44 04 00 00         JZ 0x0069839a
00697F56  C7 45 FC 01 00 00 00      MOV dword ptr [EBP + -0x4],0x1
00697F5D  8B B7 37 58 00 00         MOV ESI,dword ptr [EDI + 0x5837]
00697F63  0F AF B7 33 58 00 00      IMUL ESI,dword ptr [EDI + 0x5833]
00697F6A  D1 E6                     SHL ESI,0x1
00697F6C  8B C6                     MOV EAX,ESI
00697F6E  83 C0 03                  ADD EAX,0x3
00697F71  24 FC                     AND AL,0xfc
00697F73  E8 C8 5A 09 00            CALL 0x0072da40
00697F78  89 65 E8                  MOV dword ptr [EBP + -0x18],ESP
00697F7B  8B C4                     MOV EAX,ESP
00697F7D  89 85 50 FF FF FF         MOV dword ptr [EBP + 0xffffff50],EAX
00697F83  8B C6                     MOV EAX,ESI
00697F85  83 C0 03                  ADD EAX,0x3
00697F88  24 FC                     AND AL,0xfc
00697F8A  E8 B1 5A 09 00            CALL 0x0072da40
00697F8F  89 65 E8                  MOV dword ptr [EBP + -0x18],ESP
00697F92  8B C4                     MOV EAX,ESP
00697F94  89 45 A0                  MOV dword ptr [EBP + -0x60],EAX
00697F97  C7 45 FC FF FF FF FF      MOV dword ptr [EBP + -0x4],0xffffffff
00697F9E  8D 04 1B                  LEA EAX,[EBX + EBX*0x1]
00697FA1  8B 4D 0C                  MOV ECX,dword ptr [EBP + 0xc]
00697FA4  85 C9                     TEST ECX,ECX
00697FA6  0F 8E EE 03 00 00         JLE 0x0069839a
00697FAC  EB 06                     JMP 0x00697fb4
LAB_00697fae:
00697FAE  8B 85 5C FF FF FF         MOV EAX,dword ptr [EBP + 0xffffff5c]
LAB_00697fb4:
00697FB4  85 C0                     TEST EAX,EAX
00697FB6  0F 8E DB 03 00 00         JLE 0x00698397
00697FBC  48                        DEC EAX
00697FBD  89 85 5C FF FF FF         MOV dword ptr [EBP + 0xffffff5c],EAX
00697FC3  6A 03                     PUSH 0x3
00697FC5  6A 04                     PUSH 0x4
00697FC7  6A 10                     PUSH 0x10
00697FC9  8B 45 98                  MOV EAX,dword ptr [EBP + -0x68]
00697FCC  50                        PUSH EAX
00697FCD  8B 4D DC                  MOV ECX,dword ptr [EBP + -0x24]
00697FD0  51                        PUSH ECX
00697FD1  E8 FF 92 D6 FF            CALL 0x004012d5
00697FD6  83 C4 14                  ADD ESP,0x14
00697FD9  89 45 84                  MOV dword ptr [EBP + -0x7c],EAX
00697FDC  85 C0                     TEST EAX,EAX
00697FDE  0F 8C A8 03 00 00         JL 0x0069838c
00697FE4  8B D0                     MOV EDX,EAX
00697FE6  C1 E2 04                  SHL EDX,0x4
00697FE9  8B 45 DC                  MOV EAX,dword ptr [EBP + -0x24]
00697FEC  03 C2                     ADD EAX,EDX
00697FEE  0F BF 10                  MOVSX EDX,word ptr [EAX]
00697FF1  8B 8D 34 FF FF FF         MOV ECX,dword ptr [EBP + 0xffffff34]
00697FF7  8B 89 53 58 00 00         MOV ECX,dword ptr [ECX + 0x5853]
00697FFD  3B 51 0C                  CMP EDX,dword ptr [ECX + 0xc]
00698000  73 0B                     JNC 0x0069800d
00698002  8B 59 08                  MOV EBX,dword ptr [ECX + 0x8]
00698005  0F AF DA                  IMUL EBX,EDX
00698008  03 59 1C                  ADD EBX,dword ptr [ECX + 0x1c]
0069800B  EB 02                     JMP 0x0069800f
LAB_0069800d:
0069800D  33 DB                     XOR EBX,EBX
LAB_0069800f:
0069800F  89 9D 60 FF FF FF         MOV dword ptr [EBP + 0xffffff60],EBX
00698015  0F BF 70 0A               MOVSX ESI,word ptr [EAX + 0xa]
00698019  0F BF 50 08               MOVSX EDX,word ptr [EAX + 0x8]
0069801D  2B F2                     SUB ESI,EDX
0069801F  46                        INC ESI
00698020  89 75 CC                  MOV dword ptr [EBP + -0x34],ESI
00698023  0F BF 48 0E               MOVSX ECX,word ptr [EAX + 0xe]
00698027  0F BF 40 0C               MOVSX EAX,word ptr [EAX + 0xc]
0069802B  2B C8                     SUB ECX,EAX
0069802D  41                        INC ECX
0069802E  89 4D C0                  MOV dword ptr [EBP + -0x40],ECX
00698031  0F AF CE                  IMUL ECX,ESI
00698034  D1 E1                     SHL ECX,0x1
00698036  83 C8 FF                  OR EAX,0xffffffff
00698039  8B 7D A0                  MOV EDI,dword ptr [EBP + -0x60]
0069803C  8B D1                     MOV EDX,ECX
0069803E  C1 E9 02                  SHR ECX,0x2
00698041  F3 AB                     STOSD.REP ES:EDI
00698043  8B CA                     MOV ECX,EDX
00698045  83 E1 03                  AND ECX,0x3
00698048  F3 AA                     STOSB.REP ES:EDI
0069804A  33 D2                     XOR EDX,EDX
0069804C  89 95 70 FF FF FF         MOV dword ptr [EBP + 0xffffff70],EDX
00698052  8B 4B 15                  MOV ECX,dword ptr [EBX + 0x15]
00698055  8B 41 0C                  MOV EAX,dword ptr [ECX + 0xc]
00698058  85 C0                     TEST EAX,EAX
0069805A  0F 8E 8F 00 00 00         JLE 0x006980ef
00698060  3B D0                     CMP EDX,EAX
LAB_00698062:
00698062  73 0B                     JNC 0x0069806f
00698064  8B 41 08                  MOV EAX,dword ptr [ECX + 0x8]
00698067  0F AF C2                  IMUL EAX,EDX
0069806A  03 41 1C                  ADD EAX,dword ptr [ECX + 0x1c]
0069806D  EB 02                     JMP 0x00698071
LAB_0069806f:
0069806F  33 C0                     XOR EAX,EAX
LAB_00698071:
00698071  F6 00 01                  TEST byte ptr [EAX],0x1
00698074  74 64                     JZ 0x006980da
00698076  8B 8D 34 FF FF FF         MOV ECX,dword ptr [EBP + 0xffffff34]
0069807C  8B 89 33 58 00 00         MOV ECX,dword ptr [ECX + 0x5833]
00698082  8B 78 02                  MOV EDI,dword ptr [EAX + 0x2]
00698085  8B 55 84                  MOV EDX,dword ptr [EBP + -0x7c]
00698088  C1 E2 04                  SHL EDX,0x4
0069808B  8B 45 DC                  MOV EAX,dword ptr [EBP + -0x24]
0069808E  03 C2                     ADD EAX,EDX
00698090  89 85 30 FF FF FF         MOV dword ptr [EBP + 0xffffff30],EAX
00698096  0F BF 58 0C               MOVSX EBX,word ptr [EAX + 0xc]
0069809A  8B C7                     MOV EAX,EDI
0069809C  99                        CDQ
0069809D  F7 F9                     IDIV ECX
0069809F  8B D0                     MOV EDX,EAX
006980A1  2B D3                     SUB EDX,EBX
006980A3  0F AF D6                  IMUL EDX,ESI
006980A6  8B 85 30 FF FF FF         MOV EAX,dword ptr [EBP + 0xffffff30]
006980AC  0F BF 40 08               MOVSX EAX,word ptr [EAX + 0x8]
006980B0  2B D0                     SUB EDX,EAX
006980B2  8B C7                     MOV EAX,EDI
006980B4  89 95 2C FF FF FF         MOV dword ptr [EBP + 0xffffff2c],EDX
006980BA  99                        CDQ
006980BB  F7 F9                     IDIV ECX
006980BD  8B 8D 2C FF FF FF         MOV ECX,dword ptr [EBP + 0xffffff2c]
006980C3  03 CA                     ADD ECX,EDX
006980C5  8B 55 A0                  MOV EDX,dword ptr [EBP + -0x60]
006980C8  66 C7 04 4A 00 00         MOV word ptr [EDX + ECX*0x2],0x0
006980CE  8B 95 70 FF FF FF         MOV EDX,dword ptr [EBP + 0xffffff70]
006980D4  8B 9D 60 FF FF FF         MOV EBX,dword ptr [EBP + 0xffffff60]
LAB_006980da:
006980DA  42                        INC EDX
006980DB  89 95 70 FF FF FF         MOV dword ptr [EBP + 0xffffff70],EDX
006980E1  8B 4B 15                  MOV ECX,dword ptr [EBX + 0x15]
006980E4  8B 41 0C                  MOV EAX,dword ptr [ECX + 0xc]
006980E7  3B D0                     CMP EDX,EAX
006980E9  0F 8C 73 FF FF FF         JL 0x00698062
LAB_006980ef:
006980EF  E8 CC 65 09 00            CALL 0x0072e6c0
006980F4  25 07 00 00 80            AND EAX,0x80000007
006980F9  79 05                     JNS 0x00698100
006980FB  48                        DEC EAX
006980FC  83 C8 F8                  OR EAX,0xfffffff8
006980FF  40                        INC EAX
LAB_00698100:
00698100  89 85 68 FF FF FF         MOV dword ptr [EBP + 0xffffff68],EAX
00698106  C7 85 40 FF FF FF 0A 00 00 00  MOV dword ptr [EBP + 0xffffff40],0xa
00698110  B8 9C FF FF FF            MOV EAX,0xffffff9c
00698115  89 45 C8                  MOV dword ptr [EBP + -0x38],EAX
00698118  89 85 6C FF FF FF         MOV dword ptr [EBP + 0xffffff6c],EAX
0069811E  E8 9D 65 09 00            CALL 0x0072e6c0
00698123  25 03 00 00 80            AND EAX,0x80000003
00698128  79 05                     JNS 0x0069812f
0069812A  48                        DEC EAX
0069812B  83 C8 FC                  OR EAX,0xfffffffc
0069812E  40                        INC EAX
LAB_0069812f:
0069812F  89 45 AC                  MOV dword ptr [EBP + -0x54],EAX
LAB_00698132:
00698132  8B 85 60 FF FF FF         MOV EAX,dword ptr [EBP + 0xffffff60]
00698138  8B 78 15                  MOV EDI,dword ptr [EAX + 0x15]
0069813B  8B 5F 0C                  MOV EBX,dword ptr [EDI + 0xc]
0069813E  E8 7D 65 09 00            CALL 0x0072e6c0
00698143  99                        CDQ
00698144  F7 FB                     IDIV EBX
00698146  8B 8D 68 FF FF FF         MOV ECX,dword ptr [EBP + 0xffffff68]
0069814C  8B 34 8D 70 7F 7D 00      MOV ESI,dword ptr [ECX*0x4 + 0x7d7f70]
00698153  3B D3                     CMP EDX,EBX
00698155  73 0B                     JNC 0x00698162
00698157  8B 47 08                  MOV EAX,dword ptr [EDI + 0x8]
0069815A  0F AF C2                  IMUL EAX,EDX
0069815D  03 47 1C                  ADD EAX,dword ptr [EDI + 0x1c]
00698160  EB 02                     JMP 0x00698164
LAB_00698162:
00698162  33 C0                     XOR EAX,EAX
LAB_00698164:
00698164  8B 48 02                  MOV ECX,dword ptr [EAX + 0x2]
00698167  8B 95 34 FF FF FF         MOV EDX,dword ptr [EBP + 0xffffff34]
0069816D  8B BA 33 58 00 00         MOV EDI,dword ptr [EDX + 0x5833]
00698173  8B C1                     MOV EAX,ECX
00698175  99                        CDQ
00698176  F7 FF                     IDIV EDI
00698178  8B D8                     MOV EBX,EAX
0069817A  89 5D 80                  MOV dword ptr [EBP + -0x80],EBX
0069817D  8B C1                     MOV EAX,ECX
0069817F  99                        CDQ
00698180  F7 FF                     IDIV EDI
00698182  89 55 8C                  MOV dword ptr [EBP + -0x74],EDX
00698185  8B 45 84                  MOV EAX,dword ptr [EBP + -0x7c]
00698188  C1 E0 04                  SHL EAX,0x4
0069818B  8B 4D DC                  MOV ECX,dword ptr [EBP + -0x24]
0069818E  03 C1                     ADD EAX,ECX
00698190  89 85 30 FF FF FF         MOV dword ptr [EBP + 0xffffff30],EAX
00698196  0F BF 48 0C               MOVSX ECX,word ptr [EAX + 0xc]
0069819A  89 8D 28 FF FF FF         MOV dword ptr [EBP + 0xffffff28],ECX
006981A0  3B D9                     CMP EBX,ECX
006981A2  0F 8C F6 00 00 00         JL 0x0069829e
006981A8  0F BF 48 0E               MOVSX ECX,word ptr [EAX + 0xe]
006981AC  3B D9                     CMP EBX,ECX
006981AE  0F 8D EA 00 00 00         JGE 0x0069829e
006981B4  0F BF 58 08               MOVSX EBX,word ptr [EAX + 0x8]
006981B8  89 9D 24 FF FF FF         MOV dword ptr [EBP + 0xffffff24],EBX
006981BE  3B D3                     CMP EDX,EBX
006981C0  0F 8C D8 00 00 00         JL 0x0069829e
006981C6  0F BF 40 0A               MOVSX EAX,word ptr [EAX + 0xa]
006981CA  3B D0                     CMP EDX,EAX
006981CC  0F 8D CC 00 00 00         JGE 0x0069829e
006981D2  C7 45 9C 01 00 00 00      MOV dword ptr [EBP + -0x64],0x1
006981D9  8B 7D AC                  MOV EDI,dword ptr [EBP + -0x54]
006981DC  8D 0C FF                  LEA ECX,[EDI + EDI*0x8]
006981DF  8D 3C 4F                  LEA EDI,[EDI + ECX*0x2]
006981E2  8D 3C 7F                  LEA EDI,[EDI + EDI*0x2]
006981E5  C1 E7 02                  SHL EDI,0x2
006981E8  8B 04 37                  MOV EAX,dword ptr [EDI + ESI*0x1]
006981EB  33 D2                     XOR EDX,EDX
006981ED  3B C2                     CMP EAX,EDX
006981EF  0F 8E A0 00 00 00         JLE 0x00698295
006981F5  89 95 70 FF FF FF         MOV dword ptr [EBP + 0xffffff70],EDX
006981FB  EB 06                     JMP 0x00698203
LAB_006981fd:
006981FD  8B 9D 24 FF FF FF         MOV EBX,dword ptr [EBP + 0xffffff24]
LAB_00698203:
00698203  8B C2                     MOV EAX,EDX
00698205  6B C0 1C                  IMUL EAX,EAX,0x1c
00698208  03 C7                     ADD EAX,EDI
0069820A  03 C6                     ADD EAX,ESI
0069820C  8B 48 04                  MOV ECX,dword ptr [EAX + 0x4]
0069820F  2B CB                     SUB ECX,EBX
00698211  03 4D 8C                  ADD ECX,dword ptr [EBP + -0x74]
00698214  8B 40 08                  MOV EAX,dword ptr [EAX + 0x8]
00698217  2B 85 28 FF FF FF         SUB EAX,dword ptr [EBP + 0xffffff28]
0069821D  03 45 80                  ADD EAX,dword ptr [EBP + -0x80]
00698220  85 C9                     TEST ECX,ECX
00698222  7C 56                     JL 0x0069827a
00698224  3B 4D CC                  CMP ECX,dword ptr [EBP + -0x34]
00698227  7D 51                     JGE 0x0069827a
00698229  85 C0                     TEST EAX,EAX
0069822B  7C 4D                     JL 0x0069827a
0069822D  3B 45 C0                  CMP EAX,dword ptr [EBP + -0x40]
00698230  7D 48                     JGE 0x0069827a
00698232  8B 55 8C                  MOV EDX,dword ptr [EBP + -0x74]
00698235  3B 95 24 FF FF FF         CMP EDX,dword ptr [EBP + 0xffffff24]
0069823B  7C 4F                     JL 0x0069828c
0069823D  8B 9D 30 FF FF FF         MOV EBX,dword ptr [EBP + 0xffffff30]
00698243  0F BF 5B 0A               MOVSX EBX,word ptr [EBX + 0xa]
00698247  3B D3                     CMP EDX,EBX
00698249  7F 41                     JG 0x0069828c
0069824B  8B 55 80                  MOV EDX,dword ptr [EBP + -0x80]
0069824E  3B 95 28 FF FF FF         CMP EDX,dword ptr [EBP + 0xffffff28]
00698254  7C 36                     JL 0x0069828c
00698256  8B 9D 30 FF FF FF         MOV EBX,dword ptr [EBP + 0xffffff30]
0069825C  0F BF 5B 0E               MOVSX EBX,word ptr [EBX + 0xe]
00698260  3B D3                     CMP EDX,EBX
00698262  7F 28                     JG 0x0069828c
00698264  0F AF 45 CC               IMUL EAX,dword ptr [EBP + -0x34]
00698268  03 C1                     ADD EAX,ECX
0069826A  8B 4D A0                  MOV ECX,dword ptr [EBP + -0x60]
0069826D  66 83 3C 41 00            CMP word ptr [ECX + EAX*0x2],0x0
00698272  75 18                     JNZ 0x0069828c
00698274  8B 95 70 FF FF FF         MOV EDX,dword ptr [EBP + 0xffffff70]
LAB_0069827a:
0069827A  42                        INC EDX
0069827B  89 95 70 FF FF FF         MOV dword ptr [EBP + 0xffffff70],EDX
00698281  3B 14 37                  CMP EDX,dword ptr [EDI + ESI*0x1]
00698284  0F 8C 73 FF FF FF         JL 0x006981fd
0069828A  EB 0C                     JMP 0x00698298
LAB_0069828c:
0069828C  C7 45 9C 00 00 00 00      MOV dword ptr [EBP + -0x64],0x0
00698293  EB 03                     JMP 0x00698298
LAB_00698295:
00698295  89 55 9C                  MOV dword ptr [EBP + -0x64],EDX
LAB_00698298:
00698298  83 7D 9C 01               CMP dword ptr [EBP + -0x64],0x1
0069829C  74 17                     JZ 0x006982b5
LAB_0069829e:
0069829E  8B 85 40 FF FF FF         MOV EAX,dword ptr [EBP + 0xffffff40]
006982A4  48                        DEC EAX
006982A5  89 85 40 FF FF FF         MOV dword ptr [EBP + 0xffffff40],EAX
006982AB  85 C0                     TEST EAX,EAX
006982AD  0F 8F 7F FE FF FF         JG 0x00698132
006982B3  EB 0F                     JMP 0x006982c4
LAB_006982b5:
006982B5  8B 55 8C                  MOV EDX,dword ptr [EBP + -0x74]
006982B8  89 55 C8                  MOV dword ptr [EBP + -0x38],EDX
006982BB  8B 45 80                  MOV EAX,dword ptr [EBP + -0x80]
006982BE  89 85 6C FF FF FF         MOV dword ptr [EBP + 0xffffff6c],EAX
LAB_006982c4:
006982C4  8B 45 9C                  MOV EAX,dword ptr [EBP + -0x64]
006982C7  85 C0                     TEST EAX,EAX
006982C9  0F 84 BD 00 00 00         JZ 0x0069838c
006982CF  8B 45 AC                  MOV EAX,dword ptr [EBP + -0x54]
006982D2  8D 0C C0                  LEA ECX,[EAX + EAX*0x8]
006982D5  8D 3C 48                  LEA EDI,[EAX + ECX*0x2]
006982D8  8D 3C 7F                  LEA EDI,[EDI + EDI*0x2]
006982DB  C1 E7 02                  SHL EDI,0x2
006982DE  6A 01                     PUSH 0x1
006982E0  6A 00                     PUSH 0x0
006982E2  8B 54 37 08               MOV EDX,dword ptr [EDI + ESI*0x1 + 0x8]
006982E6  8B 8D 6C FF FF FF         MOV ECX,dword ptr [EBP + 0xffffff6c]
006982EC  03 D1                     ADD EDX,ECX
006982EE  52                        PUSH EDX
006982EF  8B 54 37 04               MOV EDX,dword ptr [EDI + ESI*0x1 + 0x4]
006982F3  8B 45 C8                  MOV EAX,dword ptr [EBP + -0x38]
006982F6  03 D0                     ADD EDX,EAX
006982F8  52                        PUSH EDX
006982F9  51                        PUSH ECX
006982FA  50                        PUSH EAX
006982FB  8B 8D 34 FF FF FF         MOV ECX,dword ptr [EBP + 0xffffff34]
00698301  E8 F2 CB D6 FF            CALL 0x00404ef8
00698306  33 DB                     XOR EBX,EBX
00698308  8B 04 37                  MOV EAX,dword ptr [EDI + ESI*0x1]
0069830B  48                        DEC EAX
0069830C  85 C0                     TEST EAX,EAX
0069830E  7E 68                     JLE 0x00698378
LAB_00698310:
00698310  8B 45 AC                  MOV EAX,dword ptr [EBP + -0x54]
00698313  8D 0C C0                  LEA ECX,[EAX + EAX*0x8]
00698316  8D 04 48                  LEA EAX,[EAX + ECX*0x2]
00698319  8D 0C 40                  LEA ECX,[EAX + EAX*0x2]
0069831C  8D 14 19                  LEA EDX,[ECX + EBX*0x1]
0069831F  8B 84 96 C8 00 00 00      MOV EAX,dword ptr [ESI + EDX*0x4 + 0xc8]
00698326  03 CB                     ADD ECX,EBX
00698328  8B 8C 8E CC 00 00 00      MOV ECX,dword ptr [ESI + ECX*0x4 + 0xcc]
0069832F  6B C9 1C                  IMUL ECX,ECX,0x1c
00698332  03 CF                     ADD ECX,EDI
00698334  03 CE                     ADD ECX,ESI
00698336  6B C0 1C                  IMUL EAX,EAX,0x1c
00698339  03 C7                     ADD EAX,EDI
0069833B  03 C6                     ADD EAX,ESI
0069833D  6A 01                     PUSH 0x1
0069833F  6A 00                     PUSH 0x0
00698341  8B 51 08                  MOV EDX,dword ptr [ECX + 0x8]
00698344  03 95 6C FF FF FF         ADD EDX,dword ptr [EBP + 0xffffff6c]
0069834A  52                        PUSH EDX
0069834B  8B 51 04                  MOV EDX,dword ptr [ECX + 0x4]
0069834E  8B 4D C8                  MOV ECX,dword ptr [EBP + -0x38]
00698351  03 D1                     ADD EDX,ECX
00698353  52                        PUSH EDX
00698354  8B 50 08                  MOV EDX,dword ptr [EAX + 0x8]
00698357  03 95 6C FF FF FF         ADD EDX,dword ptr [EBP + 0xffffff6c]
0069835D  52                        PUSH EDX
0069835E  8B 40 04                  MOV EAX,dword ptr [EAX + 0x4]
00698361  03 C1                     ADD EAX,ECX
00698363  50                        PUSH EAX
00698364  8B 8D 34 FF FF FF         MOV ECX,dword ptr [EBP + 0xffffff34]
0069836A  E8 89 CB D6 FF            CALL 0x00404ef8
0069836F  43                        INC EBX
00698370  8B 0C 37                  MOV ECX,dword ptr [EDI + ESI*0x1]
00698373  49                        DEC ECX
00698374  3B D9                     CMP EBX,ECX
00698376  7C 98                     JL 0x00698310
LAB_00698378:
00698378  FF 4D 0C                  DEC dword ptr [EBP + 0xc]
0069837B  8B 45 84                  MOV EAX,dword ptr [EBP + -0x7c]
0069837E  C1 E0 04                  SHL EAX,0x4
00698381  8B 55 DC                  MOV EDX,dword ptr [EBP + -0x24]
00698384  C7 44 10 04 00 00 00 00   MOV dword ptr [EAX + EDX*0x1 + 0x4],0x0
LAB_0069838c:
0069838C  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
0069838F  85 C0                     TEST EAX,EAX
00698391  0F 8F 17 FC FF FF         JG 0x00697fae
LAB_00698397:
00698397  8B 5D 98                  MOV EBX,dword ptr [EBP + -0x68]
LAB_0069839a:
0069839A  8D 0C 5B                  LEA ECX,[EBX + EBX*0x2]
0069839D  89 8D 5C FF FF FF         MOV dword ptr [EBP + 0xffffff5c],ECX
006983A3  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
006983A6  85 C0                     TEST EAX,EAX
006983A8  0F 8C 98 02 00 00         JL 0x00698646
006983AE  EB 16                     JMP 0x006983c6
LAB_006983c3:
006983C3  8B 5D 98                  MOV EBX,dword ptr [EBP + -0x68]
LAB_006983c6:
006983C6  8B 85 5C FF FF FF         MOV EAX,dword ptr [EBP + 0xffffff5c]
006983CC  85 C0                     TEST EAX,EAX
006983CE  0F 8E 72 02 00 00         JLE 0x00698646
006983D4  E8 E7 62 09 00            CALL 0x0072e6c0
006983D9  99                        CDQ
006983DA  F7 FB                     IDIV EBX
006983DC  C1 E2 04                  SHL EDX,0x4
006983DF  8B 45 DC                  MOV EAX,dword ptr [EBP + -0x24]
006983E2  0F BF 14 02               MOVSX EDX,word ptr [EDX + EAX*0x1]
006983E6  8B 8D 34 FF FF FF         MOV ECX,dword ptr [EBP + 0xffffff34]
006983EC  8B 81 53 58 00 00         MOV EAX,dword ptr [ECX + 0x5853]
006983F2  3B 50 0C                  CMP EDX,dword ptr [EAX + 0xc]
006983F5  73 0B                     JNC 0x00698402
006983F7  8B 48 08                  MOV ECX,dword ptr [EAX + 0x8]
006983FA  0F AF CA                  IMUL ECX,EDX
006983FD  03 48 1C                  ADD ECX,dword ptr [EAX + 0x1c]
00698400  EB 02                     JMP 0x00698404
LAB_00698402:
00698402  33 C9                     XOR ECX,ECX
LAB_00698404:
00698404  89 8D 60 FF FF FF         MOV dword ptr [EBP + 0xffffff60],ECX
0069840A  83 39 00                  CMP dword ptr [ECX],0x0
0069840D  0F 85 F9 01 00 00         JNZ 0x0069860c
00698413  83 79 05 01               CMP dword ptr [ECX + 0x5],0x1
00698417  0F 8F EF 01 00 00         JG 0x0069860c
0069841D  8B 51 11                  MOV EDX,dword ptr [ECX + 0x11]
00698420  83 FA 04                  CMP EDX,0x4
00698423  0F 8C E3 01 00 00         JL 0x0069860c
00698429  8B 41 15                  MOV EAX,dword ptr [ECX + 0x15]
0069842C  85 C0                     TEST EAX,EAX
0069842E  0F 84 D8 01 00 00         JZ 0x0069860c
00698434  B8 67 66 66 66            MOV EAX,0x66666667
00698439  F7 EA                     IMUL EDX
0069843B  C1 FA 02                  SAR EDX,0x2
0069843E  8B C2                     MOV EAX,EDX
00698440  C1 E8 1F                  SHR EAX,0x1f
00698443  8D 54 02 01               LEA EDX,[EDX + EAX*0x1 + 0x1]
00698447  89 55 B4                  MOV dword ptr [EBP + -0x4c],EDX
0069844A  8B 79 15                  MOV EDI,dword ptr [ECX + 0x15]
0069844D  8B 77 0C                  MOV ESI,dword ptr [EDI + 0xc]
00698450  E8 6B 62 09 00            CALL 0x0072e6c0
00698455  99                        CDQ
00698456  F7 FE                     IDIV ESI
00698458  89 55 D8                  MOV dword ptr [EBP + -0x28],EDX
0069845B  C7 85 70 FF FF FF 00 00 00 00  MOV dword ptr [EBP + 0xffffff70],0x0
00698465  85 F6                     TEST ESI,ESI
00698467  0F 8E 9F 01 00 00         JLE 0x0069860c
0069846D  8B 9D 34 FF FF FF         MOV EBX,dword ptr [EBP + 0xffffff34]
LAB_00698473:
00698473  8B 45 D8                  MOV EAX,dword ptr [EBP + -0x28]
00698476  8B 8D 70 FF FF FF         MOV ECX,dword ptr [EBP + 0xffffff70]
0069847C  03 C8                     ADD ECX,EAX
0069847E  3B CE                     CMP ECX,ESI
00698480  7E 04                     JLE 0x00698486
00698482  2B CE                     SUB ECX,ESI
00698484  3B CE                     CMP ECX,ESI
LAB_00698486:
00698486  73 0B                     JNC 0x00698493
00698488  8B 47 08                  MOV EAX,dword ptr [EDI + 0x8]
0069848B  0F AF C1                  IMUL EAX,ECX
0069848E  03 47 1C                  ADD EAX,dword ptr [EDI + 0x1c]
00698491  EB 02                     JMP 0x00698495
LAB_00698493:
00698493  33 C0                     XOR EAX,EAX
LAB_00698495:
00698495  85 C0                     TEST EAX,EAX
00698497  0F 84 4E 01 00 00         JZ 0x006985eb
0069849D  8B 48 02                  MOV ECX,dword ptr [EAX + 0x2]
006984A0  8B BB 33 58 00 00         MOV EDI,dword ptr [EBX + 0x5833]
006984A6  8B C1                     MOV EAX,ECX
006984A8  99                        CDQ
006984A9  F7 FF                     IDIV EDI
006984AB  8B F0                     MOV ESI,EAX
006984AD  8B C1                     MOV EAX,ECX
006984AF  99                        CDQ
006984B0  F7 FF                     IDIV EDI
006984B2  8B FA                     MOV EDI,EDX
006984B4  E8 07 62 09 00            CALL 0x0072e6c0
006984B9  25 03 00 00 80            AND EAX,0x80000003
006984BE  79 05                     JNS 0x006984c5
006984C0  48                        DEC EAX
006984C1  83 C8 FC                  OR EAX,0xfffffffc
006984C4  40                        INC EAX
LAB_006984c5:
006984C5  83 F8 01                  CMP EAX,0x1
006984C8  0F 85 1D 01 00 00         JNZ 0x006985eb
006984CE  8D 95 44 FF FF FF         LEA EDX,[EBP + 0xffffff44]
006984D4  52                        PUSH EDX
006984D5  33 C0                     XOR EAX,EAX
006984D7  50                        PUSH EAX
006984D8  56                        PUSH ESI
006984D9  57                        PUSH EDI
006984DA  8B 43 08                  MOV EAX,dword ptr [EBX + 0x8]
006984DD  50                        PUSH EAX
006984DE  E8 69 BC D6 FF            CALL 0x0040414c
006984E3  C7 85 38 FF FF FF 00 00 00 00  MOV dword ptr [EBP + 0xffffff38],0x0
006984ED  68 FF 00 00 00            PUSH 0xff
006984F2  33 C0                     XOR EAX,EAX
006984F4  50                        PUSH EAX
006984F5  56                        PUSH ESI
006984F6  57                        PUSH EDI
006984F7  8B 4B 08                  MOV ECX,dword ptr [EBX + 0x8]
006984FA  51                        PUSH ECX
006984FB  E8 B0 94 D6 FF            CALL 0x004019b0
00698500  83 C4 28                  ADD ESP,0x28
00698503  85 C0                     TEST EAX,EAX
00698505  74 1F                     JZ 0x00698526
00698507  8B 85 48 FF FF FF         MOV EAX,dword ptr [EBP + 0xffffff48]
0069850D  8B D0                     MOV EDX,EAX
0069850F  81 E2 00 20 00 00         AND EDX,0x2000
00698515  81 FA 00 20 00 00         CMP EDX,0x2000
0069851B  75 13                     JNZ 0x00698530
0069851D  A8 0F                     TEST AL,0xf
0069851F  75 0F                     JNZ 0x00698530
00698521  F6 C4 40                  TEST AH,0x40
00698524  75 0A                     JNZ 0x00698530
LAB_00698526:
00698526  C7 85 38 FF FF FF 01 00 00 00  MOV dword ptr [EBP + 0xffffff38],0x1
LAB_00698530:
00698530  8B 85 38 FF FF FF         MOV EAX,dword ptr [EBP + 0xffffff38]
00698536  85 C0                     TEST EAX,EAX
00698538  0F 84 AD 00 00 00         JZ 0x006985eb
0069853E  E8 7D 61 09 00            CALL 0x0072e6c0
00698543  99                        CDQ
00698544  B9 06 00 00 00            MOV ECX,0x6
00698549  F7 F9                     IDIV ECX
0069854B  83 FA 01                  CMP EDX,0x1
0069854E  75 1A                     JNZ 0x0069856a
00698550  E8 6B 61 09 00            CALL 0x0072e6c0
00698555  99                        CDQ
00698556  B9 03 00 00 00            MOV ECX,0x3
0069855B  F7 F9                     IDIV ECX
0069855D  42                        INC EDX
0069855E  52                        PUSH EDX
0069855F  6A 00                     PUSH 0x0
00698561  6A 01                     PUSH 0x1
00698563  6A 01                     PUSH 0x1
00698565  33 C0                     XOR EAX,EAX
00698567  50                        PUSH EAX
00698568  EB 60                     JMP 0x006985ca
LAB_0069856a:
0069856A  83 FA 02                  CMP EDX,0x2
0069856D  74 30                     JZ 0x0069859f
0069856F  E8 4C 61 09 00            CALL 0x0072e6c0
00698574  99                        CDQ
00698575  B9 06 00 00 00            MOV ECX,0x6
0069857A  F7 F9                     IDIV ECX
0069857C  42                        INC EDX
0069857D  52                        PUSH EDX
0069857E  6A 00                     PUSH 0x0
00698580  68 FF 00 00 00            PUSH 0xff
00698585  E8 36 61 09 00            CALL 0x0072e6c0
0069858A  25 01 00 00 80            AND EAX,0x80000001
0069858F  79 05                     JNS 0x00698596
00698591  48                        DEC EAX
00698592  83 C8 FE                  OR EAX,0xfffffffe
00698595  40                        INC EAX
LAB_00698596:
00698596  83 C0 02                  ADD EAX,0x2
00698599  50                        PUSH EAX
0069859A  33 C0                     XOR EAX,EAX
0069859C  50                        PUSH EAX
0069859D  EB 2B                     JMP 0x006985ca
LAB_0069859f:
0069859F  E8 1C 61 09 00            CALL 0x0072e6c0
006985A4  99                        CDQ
006985A5  B9 06 00 00 00            MOV ECX,0x6
006985AA  F7 F9                     IDIV ECX
006985AC  42                        INC EDX
006985AD  52                        PUSH EDX
006985AE  6A 00                     PUSH 0x0
006985B0  68 FF 00 00 00            PUSH 0xff
006985B5  E8 06 61 09 00            CALL 0x0072e6c0
006985BA  25 01 00 00 80            AND EAX,0x80000001
006985BF  79 05                     JNS 0x006985c6
006985C1  48                        DEC EAX
006985C2  83 C8 FE                  OR EAX,0xfffffffe
006985C5  40                        INC EAX
LAB_006985c6:
006985C6  40                        INC EAX
006985C7  50                        PUSH EAX
006985C8  6A 01                     PUSH 0x1
LAB_006985ca:
006985CA  56                        PUSH ESI
006985CB  57                        PUSH EDI
006985CC  8B CB                     MOV ECX,EBX
006985CE  E8 7C 9A D6 FF            CALL 0x0040204f
006985D3  8B 75 08                  MOV ESI,dword ptr [EBP + 0x8]
006985D6  4E                        DEC ESI
006985D7  89 75 08                  MOV dword ptr [EBP + 0x8],ESI
006985DA  8B 45 B4                  MOV EAX,dword ptr [EBP + -0x4c]
006985DD  48                        DEC EAX
006985DE  89 45 B4                  MOV dword ptr [EBP + -0x4c],EAX
006985E1  85 C0                     TEST EAX,EAX
006985E3  7E 27                     JLE 0x0069860c
006985E5  8B C6                     MOV EAX,ESI
006985E7  85 C0                     TEST EAX,EAX
006985E9  7E 21                     JLE 0x0069860c
LAB_006985eb:
006985EB  8B 85 70 FF FF FF         MOV EAX,dword ptr [EBP + 0xffffff70]
006985F1  40                        INC EAX
006985F2  89 85 70 FF FF FF         MOV dword ptr [EBP + 0xffffff70],EAX
006985F8  8B 95 60 FF FF FF         MOV EDX,dword ptr [EBP + 0xffffff60]
006985FE  8B 7A 15                  MOV EDI,dword ptr [EDX + 0x15]
00698601  8B 77 0C                  MOV ESI,dword ptr [EDI + 0xc]
00698604  3B C6                     CMP EAX,ESI
00698606  0F 8C 67 FE FF FF         JL 0x00698473
LAB_0069860c:
0069860C  FF 8D 5C FF FF FF         DEC dword ptr [EBP + 0xffffff5c]
00698612  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
00698615  85 C0                     TEST EAX,EAX
00698617  0F 8D A6 FD FF FF         JGE 0x006983c3
0069861D  EB 27                     JMP 0x00698646
LAB_00698646:
00698646  8D A5 18 FF FF FF         LEA ESP,[EBP + 0xffffff18]
0069864C  8B 4D F0                  MOV ECX,dword ptr [EBP + -0x10]
0069864F  64 89 0D 00 00 00 00      MOV dword ptr FS:[0x0],ECX
00698656  5F                        POP EDI
00698657  5E                        POP ESI
00698658  5B                        POP EBX
00698659  8B E5                     MOV ESP,EBP
0069865B  5D                        POP EBP
0069865C  C2 08 00                  RET 0x8
