FUN_006a6f00:
006A6F00  55                        PUSH EBP
006A6F01  8B EC                     MOV EBP,ESP
006A6F03  83 EC 4C                  SUB ESP,0x4c
006A6F06  8B 4D 10                  MOV ECX,dword ptr [EBP + 0x10]
006A6F09  53                        PUSH EBX
006A6F0A  56                        PUSH ESI
006A6F0B  57                        PUSH EDI
006A6F0C  8B 7D 0C                  MOV EDI,dword ptr [EBP + 0xc]
006A6F0F  8B 75 18                  MOV ESI,dword ptr [EBP + 0x18]
006A6F12  8B C7                     MOV EAX,EDI
006A6F14  8B D7                     MOV EDX,EDI
006A6F16  0F AF C1                  IMUL EAX,ECX
006A6F19  0F AF 55 1C               IMUL EDX,dword ptr [EBP + 0x1c]
006A6F1D  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
006A6F20  0F AF 45 20               IMUL EAX,dword ptr [EBP + 0x20]
006A6F24  03 F0                     ADD ESI,EAX
006A6F26  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
006A6F29  03 D6                     ADD EDX,ESI
006A6F2B  C7 45 E8 00 00 00 00      MOV dword ptr [EBP + -0x18],0x0
006A6F32  66 83 3C 50 00            CMP word ptr [EAX + EDX*0x2],0x0
006A6F37  8D 1C 50                  LEA EBX,[EAX + EDX*0x2]
006A6F3A  7D 0B                     JGE 0x006a6f47
006A6F3C  5F                        POP EDI
006A6F3D  5E                        POP ESI
006A6F3E  33 C0                     XOR EAX,EAX
006A6F40  5B                        POP EBX
006A6F41  8B E5                     MOV ESP,EBP
006A6F43  5D                        POP EBP
006A6F44  C2 1C 00                  RET 0x1c
LAB_006a6f47:
006A6F47  03 F9                     ADD EDI,ECX
006A6F49  0F AF 7D 14               IMUL EDI,dword ptr [EBP + 0x14]
006A6F4D  D1 E7                     SHL EDI,0x1
006A6F4F  89 7D F0                  MOV dword ptr [EBP + -0x10],EDI
006A6F52  8D 0C FD 00 00 00 00      LEA ECX,[EDI*0x8 + 0x0]
006A6F59  51                        PUSH ECX
006A6F5A  E8 11 8C 01 00            CALL 0x006bfb70
006A6F5F  85 C0                     TEST EAX,EAX
006A6F61  89 45 EC                  MOV dword ptr [EBP + -0x14],EAX
006A6F64  0F 84 44 07 00 00         JZ 0x006a76ae
006A6F6A  8A 55 18                  MOV DL,byte ptr [EBP + 0x18]
006A6F6D  8B F0                     MOV ESI,EAX
006A6F6F  8D 04 B8                  LEA EAX,[EAX + EDI*0x4]
006A6F72  66 C7 03 00 00            MOV word ptr [EBX],0x0
006A6F77  B9 01 00 00 00            MOV ECX,0x1
006A6F7C  89 75 F4                  MOV dword ptr [EBP + -0xc],ESI
006A6F7F  88 10                     MOV byte ptr [EAX],DL
006A6F81  8A 55 1C                  MOV DL,byte ptr [EBP + 0x1c]
006A6F84  88 50 01                  MOV byte ptr [EAX + 0x1],DL
006A6F87  8A 55 20                  MOV DL,byte ptr [EBP + 0x20]
006A6F8A  89 45 F8                  MOV dword ptr [EBP + -0x8],EAX
006A6F8D  89 4D B8                  MOV dword ptr [EBP + -0x48],ECX
006A6F90  88 50 02                  MOV byte ptr [EAX + 0x2],DL
006A6F93  C7 45 B4 02 00 00 00      MOV dword ptr [EBP + -0x4c],0x2
LAB_006a6f9a:
006A6F9A  33 D2                     XOR EDX,EDX
006A6F9C  3B CA                     CMP ECX,EDX
006A6F9E  89 55 18                  MOV dword ptr [EBP + 0x18],EDX
006A6FA1  89 55 BC                  MOV dword ptr [EBP + -0x44],EDX
006A6FA4  0F 8E 0B 07 00 00         JLE 0x006a76b5
LAB_006a6faa:
006A6FAA  8B 7D F8                  MOV EDI,dword ptr [EBP + -0x8]
006A6FAD  33 C9                     XOR ECX,ECX
006A6FAF  33 C0                     XOR EAX,EAX
006A6FB1  33 DB                     XOR EBX,EBX
006A6FB3  8A 4C 97 02               MOV CL,byte ptr [EDI + EDX*0x4 + 0x2]
006A6FB7  8A 44 97 01               MOV AL,byte ptr [EDI + EDX*0x4 + 0x1]
006A6FBB  8A 1C 97                  MOV BL,byte ptr [EDI + EDX*0x4]
006A6FBE  89 4D 1C                  MOV dword ptr [EBP + 0x1c],ECX
006A6FC1  0F AF 4D FC               IMUL ECX,dword ptr [EBP + -0x4]
006A6FC5  8B D0                     MOV EDX,EAX
006A6FC7  8B FB                     MOV EDI,EBX
006A6FC9  0F AF 55 0C               IMUL EDX,dword ptr [EBP + 0xc]
006A6FCD  03 F9                     ADD EDI,ECX
006A6FCF  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
006A6FD2  03 D7                     ADD EDX,EDI
006A6FD4  89 45 C0                  MOV dword ptr [EBP + -0x40],EAX
006A6FD7  8D 3C 51                  LEA EDI,[ECX + EDX*0x2]
006A6FDA  8B 55 18                  MOV EDX,dword ptr [EBP + 0x18]
006A6FDD  8B 4D F0                  MOV ECX,dword ptr [EBP + -0x10]
006A6FE0  83 C2 1A                  ADD EDX,0x1a
006A6FE3  3B D1                     CMP EDX,ECX
006A6FE5  89 7D 20                  MOV dword ptr [EBP + 0x20],EDI
006A6FE8  0F 8E 8B 00 00 00         JLE 0x006a7079
006A6FEE  8B C1                     MOV EAX,ECX
006A6FF0  8B 4D EC                  MOV ECX,dword ptr [EBP + -0x14]
006A6FF3  05 80 00 00 00            ADD EAX,0x80
006A6FF8  89 45 F0                  MOV dword ptr [EBP + -0x10],EAX
006A6FFB  C1 E0 03                  SHL EAX,0x3
006A6FFE  50                        PUSH EAX
006A6FFF  51                        PUSH ECX
006A7000  E8 4B 8B 01 00            CALL 0x006bfb50
006A7005  85 C0                     TEST EAX,EAX
006A7007  0F 84 A1 06 00 00         JZ 0x006a76ae
006A700D  8B 4D F4                  MOV ECX,dword ptr [EBP + -0xc]
006A7010  8B 55 EC                  MOV EDX,dword ptr [EBP + -0x14]
006A7013  8B 75 F8                  MOV ESI,dword ptr [EBP + -0x8]
006A7016  2B CA                     SUB ECX,EDX
006A7018  2B F2                     SUB ESI,EDX
006A701A  C1 F9 02                  SAR ECX,0x2
006A701D  C1 FE 02                  SAR ESI,0x2
006A7020  8D 0C 88                  LEA ECX,[EAX + ECX*0x4]
006A7023  8D 14 B0                  LEA EDX,[EAX + ESI*0x4]
006A7026  3B C8                     CMP ECX,EAX
006A7028  89 4D F4                  MOV dword ptr [EBP + -0xc],ECX
006A702B  89 55 F8                  MOV dword ptr [EBP + -0x8],EDX
006A702E  75 0D                     JNZ 0x006a703d
006A7030  8B CA                     MOV ECX,EDX
006A7032  81 C1 00 02 00 00         ADD ECX,0x200
006A7038  89 4D F8                  MOV dword ptr [EBP + -0x8],ECX
006A703B  EB 09                     JMP 0x006a7046
LAB_006a703d:
006A703D  81 C1 00 02 00 00         ADD ECX,0x200
006A7043  89 4D F4                  MOV dword ptr [EBP + -0xc],ECX
LAB_006a7046:
006A7046  8B 4D F4                  MOV ECX,dword ptr [EBP + -0xc]
006A7049  8B 55 18                  MOV EDX,dword ptr [EBP + 0x18]
006A704C  89 45 EC                  MOV dword ptr [EBP + -0x14],EAX
006A704F  8D 34 91                  LEA ESI,[ECX + EDX*0x4]
006A7052  8B 4D F0                  MOV ECX,dword ptr [EBP + -0x10]
006A7055  8D 14 8D 00 FE FF FF      LEA EDX,[ECX*0x4 + 0xfffffe00]
006A705C  52                        PUSH EDX
006A705D  8D 94 88 00 FE FF FF      LEA EDX,[EAX + ECX*0x4 + 0xfffffe00]
006A7064  8D 04 88                  LEA EAX,[EAX + ECX*0x4]
006A7067  52                        PUSH EDX
006A7068  50                        PUSH EAX
006A7069  E8 02 6A 08 00            CALL 0x0072da70
006A706E  8B 4D 1C                  MOV ECX,dword ptr [EBP + 0x1c]
006A7071  8B 45 C0                  MOV EAX,dword ptr [EBP + -0x40]
006A7074  83 C4 0C                  ADD ESP,0xc
006A7077  EB 03                     JMP 0x006a707c
LAB_006a7079:
006A7079  8B 4D 1C                  MOV ECX,dword ptr [EBP + 0x1c]
LAB_006a707c:
006A707C  8B 55 0C                  MOV EDX,dword ptr [EBP + 0xc]
006A707F  C7 45 1C FF 00 00 00      MOV dword ptr [EBP + 0x1c],0xff
006A7086  4A                        DEC EDX
006A7087  3B DA                     CMP EBX,EDX
006A7089  7D 07                     JGE 0x006a7092
006A708B  C7 45 1C FE 00 00 00      MOV dword ptr [EBP + 0x1c],0xfe
LAB_006a7092:
006A7092  85 DB                     TEST EBX,EBX
006A7094  7E 04                     JLE 0x006a709a
006A7096  83 65 1C EF               AND dword ptr [EBP + 0x1c],0xffffffef
LAB_006a709a:
006A709A  8B 55 10                  MOV EDX,dword ptr [EBP + 0x10]
006A709D  4A                        DEC EDX
006A709E  3B C2                     CMP EAX,EDX
006A70A0  7D 04                     JGE 0x006a70a6
006A70A2  83 65 1C FD               AND dword ptr [EBP + 0x1c],0xfffffffd
LAB_006a70a6:
006A70A6  85 C0                     TEST EAX,EAX
006A70A8  7E 04                     JLE 0x006a70ae
006A70AA  83 65 1C DF               AND dword ptr [EBP + 0x1c],0xffffffdf
LAB_006a70ae:
006A70AE  8B 55 14                  MOV EDX,dword ptr [EBP + 0x14]
006A70B1  4A                        DEC EDX
006A70B2  3B CA                     CMP ECX,EDX
006A70B4  7D 04                     JGE 0x006a70ba
006A70B6  83 65 1C FB               AND dword ptr [EBP + 0x1c],0xfffffffb
LAB_006a70ba:
006A70BA  85 C9                     TEST ECX,ECX
006A70BC  7E 04                     JLE 0x006a70c2
006A70BE  83 65 1C BF               AND dword ptr [EBP + 0x1c],0xffffffbf
LAB_006a70c2:
006A70C2  8B 55 1C                  MOV EDX,dword ptr [EBP + 0x1c]
006A70C5  83 E2 10                  AND EDX,0x10
006A70C8  89 55 E4                  MOV dword ptr [EBP + -0x1c],EDX
006A70CB  75 23                     JNZ 0x006a70f0
006A70CD  66 83 7F FE 00            CMP word ptr [EDI + -0x2],0x0
006A70D2  7D 1C                     JGE 0x006a70f0
006A70D4  8A D3                     MOV DL,BL
006A70D6  66 C7 47 FE 00 00         MOV word ptr [EDI + -0x2],0x0
006A70DC  FE CA                     DEC DL
006A70DE  88 46 01                  MOV byte ptr [ESI + 0x1],AL
006A70E1  88 16                     MOV byte ptr [ESI],DL
006A70E3  8B 55 18                  MOV EDX,dword ptr [EBP + 0x18]
006A70E6  88 4E 02                  MOV byte ptr [ESI + 0x2],CL
006A70E9  83 C6 04                  ADD ESI,0x4
006A70EC  42                        INC EDX
006A70ED  89 55 18                  MOV dword ptr [EBP + 0x18],EDX
LAB_006a70f0:
006A70F0  8B 55 1C                  MOV EDX,dword ptr [EBP + 0x1c]
006A70F3  83 E2 01                  AND EDX,0x1
006A70F6  89 55 E0                  MOV dword ptr [EBP + -0x20],EDX
006A70F9  75 23                     JNZ 0x006a711e
006A70FB  66 83 7F 02 00            CMP word ptr [EDI + 0x2],0x0
006A7100  7D 1C                     JGE 0x006a711e
006A7102  8A D3                     MOV DL,BL
006A7104  66 C7 47 02 00 00         MOV word ptr [EDI + 0x2],0x0
006A710A  FE C2                     INC DL
006A710C  88 46 01                  MOV byte ptr [ESI + 0x1],AL
006A710F  88 16                     MOV byte ptr [ESI],DL
006A7111  8B 55 18                  MOV EDX,dword ptr [EBP + 0x18]
006A7114  88 4E 02                  MOV byte ptr [ESI + 0x2],CL
006A7117  83 C6 04                  ADD ESI,0x4
006A711A  42                        INC EDX
006A711B  89 55 18                  MOV dword ptr [EBP + 0x18],EDX
LAB_006a711e:
006A711E  8B 55 1C                  MOV EDX,dword ptr [EBP + 0x1c]
006A7121  83 E2 20                  AND EDX,0x20
006A7124  89 55 DC                  MOV dword ptr [EBP + -0x24],EDX
006A7127  75 2B                     JNZ 0x006a7154
006A7129  8B 55 0C                  MOV EDX,dword ptr [EBP + 0xc]
006A712C  03 D2                     ADD EDX,EDX
006A712E  2B FA                     SUB EDI,EDX
006A7130  66 83 3F 00               CMP word ptr [EDI],0x0
006A7134  7D 1B                     JGE 0x006a7151
006A7136  8A D0                     MOV DL,AL
006A7138  66 C7 07 00 00            MOV word ptr [EDI],0x0
006A713D  FE CA                     DEC DL
006A713F  88 1E                     MOV byte ptr [ESI],BL
006A7141  88 56 01                  MOV byte ptr [ESI + 0x1],DL
006A7144  8B 55 18                  MOV EDX,dword ptr [EBP + 0x18]
006A7147  88 4E 02                  MOV byte ptr [ESI + 0x2],CL
006A714A  83 C6 04                  ADD ESI,0x4
006A714D  42                        INC EDX
006A714E  89 55 18                  MOV dword ptr [EBP + 0x18],EDX
LAB_006a7151:
006A7151  8B 7D 20                  MOV EDI,dword ptr [EBP + 0x20]
LAB_006a7154:
006A7154  8B 55 1C                  MOV EDX,dword ptr [EBP + 0x1c]
006A7157  83 E2 02                  AND EDX,0x2
006A715A  89 55 D8                  MOV dword ptr [EBP + -0x28],EDX
006A715D  75 26                     JNZ 0x006a7185
006A715F  8B 55 0C                  MOV EDX,dword ptr [EBP + 0xc]
006A7162  66 83 3C 57 00            CMP word ptr [EDI + EDX*0x2],0x0
006A7167  7D 1C                     JGE 0x006a7185
006A7169  66 C7 04 57 00 00         MOV word ptr [EDI + EDX*0x2],0x0
006A716F  8A D0                     MOV DL,AL
006A7171  FE C2                     INC DL
006A7173  88 1E                     MOV byte ptr [ESI],BL
006A7175  88 56 01                  MOV byte ptr [ESI + 0x1],DL
006A7178  8B 55 18                  MOV EDX,dword ptr [EBP + 0x18]
006A717B  88 4E 02                  MOV byte ptr [ESI + 0x2],CL
006A717E  83 C6 04                  ADD ESI,0x4
006A7181  42                        INC EDX
006A7182  89 55 18                  MOV dword ptr [EBP + 0x18],EDX
LAB_006a7185:
006A7185  8B 55 1C                  MOV EDX,dword ptr [EBP + 0x1c]
006A7188  83 E2 40                  AND EDX,0x40
006A718B  89 55 D0                  MOV dword ptr [EBP + -0x30],EDX
006A718E  75 2B                     JNZ 0x006a71bb
006A7190  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
006A7193  03 D2                     ADD EDX,EDX
006A7195  2B FA                     SUB EDI,EDX
006A7197  66 83 3F 00               CMP word ptr [EDI],0x0
006A719B  7D 1B                     JGE 0x006a71b8
006A719D  8A D1                     MOV DL,CL
006A719F  66 C7 07 00 00            MOV word ptr [EDI],0x0
006A71A4  FE CA                     DEC DL
006A71A6  88 1E                     MOV byte ptr [ESI],BL
006A71A8  88 56 02                  MOV byte ptr [ESI + 0x2],DL
006A71AB  8B 55 18                  MOV EDX,dword ptr [EBP + 0x18]
006A71AE  88 46 01                  MOV byte ptr [ESI + 0x1],AL
006A71B1  83 C6 04                  ADD ESI,0x4
006A71B4  42                        INC EDX
006A71B5  89 55 18                  MOV dword ptr [EBP + 0x18],EDX
LAB_006a71b8:
006A71B8  8B 7D 20                  MOV EDI,dword ptr [EBP + 0x20]
LAB_006a71bb:
006A71BB  8B 55 1C                  MOV EDX,dword ptr [EBP + 0x1c]
006A71BE  83 E2 04                  AND EDX,0x4
006A71C1  89 55 D4                  MOV dword ptr [EBP + -0x2c],EDX
006A71C4  75 26                     JNZ 0x006a71ec
006A71C6  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
006A71C9  66 83 3C 57 00            CMP word ptr [EDI + EDX*0x2],0x0
006A71CE  7D 1C                     JGE 0x006a71ec
006A71D0  66 C7 04 57 00 00         MOV word ptr [EDI + EDX*0x2],0x0
006A71D6  8A D1                     MOV DL,CL
006A71D8  FE C2                     INC DL
006A71DA  88 1E                     MOV byte ptr [ESI],BL
006A71DC  88 56 02                  MOV byte ptr [ESI + 0x2],DL
006A71DF  8B 55 18                  MOV EDX,dword ptr [EBP + 0x18]
006A71E2  88 46 01                  MOV byte ptr [ESI + 0x1],AL
006A71E5  83 C6 04                  ADD ESI,0x4
006A71E8  42                        INC EDX
006A71E9  89 55 18                  MOV dword ptr [EBP + 0x18],EDX
LAB_006a71ec:
006A71EC  8B 55 1C                  MOV EDX,dword ptr [EBP + 0x1c]
006A71EF  83 E2 30                  AND EDX,0x30
006A71F2  89 55 CC                  MOV dword ptr [EBP + -0x34],EDX
006A71F5  75 31                     JNZ 0x006a7228
006A71F7  8B 55 0C                  MOV EDX,dword ptr [EBP + 0xc]
006A71FA  8D 54 12 02               LEA EDX,[EDX + EDX*0x1 + 0x2]
006A71FE  2B FA                     SUB EDI,EDX
006A7200  66 83 3F 00               CMP word ptr [EDI],0x0
006A7204  7D 1F                     JGE 0x006a7225
006A7206  8A D3                     MOV DL,BL
006A7208  66 C7 07 00 00            MOV word ptr [EDI],0x0
006A720D  FE CA                     DEC DL
006A720F  88 4E 02                  MOV byte ptr [ESI + 0x2],CL
006A7212  88 16                     MOV byte ptr [ESI],DL
006A7214  8A D0                     MOV DL,AL
006A7216  FE CA                     DEC DL
006A7218  88 56 01                  MOV byte ptr [ESI + 0x1],DL
006A721B  8B 55 18                  MOV EDX,dword ptr [EBP + 0x18]
006A721E  83 C6 04                  ADD ESI,0x4
006A7221  42                        INC EDX
006A7222  89 55 18                  MOV dword ptr [EBP + 0x18],EDX
LAB_006a7225:
006A7225  8B 7D 20                  MOV EDI,dword ptr [EBP + 0x20]
LAB_006a7228:
006A7228  8B 55 1C                  MOV EDX,dword ptr [EBP + 0x1c]
006A722B  83 E2 21                  AND EDX,0x21
006A722E  89 55 C8                  MOV dword ptr [EBP + -0x38],EDX
006A7231  75 33                     JNZ 0x006a7266
006A7233  8B 55 0C                  MOV EDX,dword ptr [EBP + 0xc]
006A7236  03 D2                     ADD EDX,EDX
006A7238  2B FA                     SUB EDI,EDX
006A723A  66 83 7F 02 00            CMP word ptr [EDI + 0x2],0x0
006A723F  8D 57 02                  LEA EDX,[EDI + 0x2]
006A7242  7D 1F                     JGE 0x006a7263
006A7244  66 C7 02 00 00            MOV word ptr [EDX],0x0
006A7249  8A D3                     MOV DL,BL
006A724B  FE C2                     INC DL
006A724D  88 4E 02                  MOV byte ptr [ESI + 0x2],CL
006A7250  88 16                     MOV byte ptr [ESI],DL
006A7252  8A D0                     MOV DL,AL
006A7254  FE CA                     DEC DL
006A7256  88 56 01                  MOV byte ptr [ESI + 0x1],DL
006A7259  8B 55 18                  MOV EDX,dword ptr [EBP + 0x18]
006A725C  83 C6 04                  ADD ESI,0x4
006A725F  42                        INC EDX
006A7260  89 55 18                  MOV dword ptr [EBP + 0x18],EDX
LAB_006a7263:
006A7263  8B 7D 20                  MOV EDI,dword ptr [EBP + 0x20]
LAB_006a7266:
006A7266  8B 55 1C                  MOV EDX,dword ptr [EBP + 0x1c]
006A7269  83 E2 12                  AND EDX,0x12
006A726C  89 55 C4                  MOV dword ptr [EBP + -0x3c],EDX
006A726F  75 2C                     JNZ 0x006a729d
006A7271  8B 55 0C                  MOV EDX,dword ptr [EBP + 0xc]
006A7274  66 83 7C 57 FE 00         CMP word ptr [EDI + EDX*0x2 + -0x2],0x0
006A727A  7D 21                     JGE 0x006a729d
006A727C  66 C7 44 57 FE 00 00      MOV word ptr [EDI + EDX*0x2 + -0x2],0x0
006A7283  8A D3                     MOV DL,BL
006A7285  FE CA                     DEC DL
006A7287  88 4E 02                  MOV byte ptr [ESI + 0x2],CL
006A728A  88 16                     MOV byte ptr [ESI],DL
006A728C  8A D0                     MOV DL,AL
006A728E  FE C2                     INC DL
006A7290  88 56 01                  MOV byte ptr [ESI + 0x1],DL
006A7293  8B 55 18                  MOV EDX,dword ptr [EBP + 0x18]
006A7296  83 C6 04                  ADD ESI,0x4
006A7299  42                        INC EDX
006A729A  89 55 18                  MOV dword ptr [EBP + 0x18],EDX
LAB_006a729d:
006A729D  8B 55 1C                  MOV EDX,dword ptr [EBP + 0x1c]
006A72A0  83 E2 03                  AND EDX,0x3
006A72A3  89 55 C0                  MOV dword ptr [EBP + -0x40],EDX
006A72A6  75 2C                     JNZ 0x006a72d4
006A72A8  8B 55 0C                  MOV EDX,dword ptr [EBP + 0xc]
006A72AB  66 83 7C 57 02 00         CMP word ptr [EDI + EDX*0x2 + 0x2],0x0
006A72B1  7D 21                     JGE 0x006a72d4
006A72B3  66 C7 44 57 02 00 00      MOV word ptr [EDI + EDX*0x2 + 0x2],0x0
006A72BA  8A D3                     MOV DL,BL
006A72BC  FE C2                     INC DL
006A72BE  88 4E 02                  MOV byte ptr [ESI + 0x2],CL
006A72C1  88 16                     MOV byte ptr [ESI],DL
006A72C3  8A D0                     MOV DL,AL
006A72C5  FE C2                     INC DL
006A72C7  88 56 01                  MOV byte ptr [ESI + 0x1],DL
006A72CA  8B 55 18                  MOV EDX,dword ptr [EBP + 0x18]
006A72CD  83 C6 04                  ADD ESI,0x4
006A72D0  42                        INC EDX
006A72D1  89 55 18                  MOV dword ptr [EBP + 0x18],EDX
LAB_006a72d4:
006A72D4  8B 55 D4                  MOV EDX,dword ptr [EBP + -0x2c]
006A72D7  85 D2                     TEST EDX,EDX
006A72D9  0F 85 C9 00 00 00         JNZ 0x006a73a8
006A72DF  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
006A72E2  8B 7D 20                  MOV EDI,dword ptr [EBP + 0x20]
006A72E5  8D 3C 57                  LEA EDI,[EDI + EDX*0x2]
006A72E8  8B 55 E4                  MOV EDX,dword ptr [EBP + -0x1c]
006A72EB  85 D2                     TEST EDX,EDX
006A72ED  75 27                     JNZ 0x006a7316
006A72EF  66 83 7F FE 00            CMP word ptr [EDI + -0x2],0x0
006A72F4  7D 20                     JGE 0x006a7316
006A72F6  8A D3                     MOV DL,BL
006A72F8  66 C7 47 FE 00 00         MOV word ptr [EDI + -0x2],0x0
006A72FE  FE CA                     DEC DL
006A7300  88 46 01                  MOV byte ptr [ESI + 0x1],AL
006A7303  88 16                     MOV byte ptr [ESI],DL
006A7305  8A D1                     MOV DL,CL
006A7307  FE C2                     INC DL
006A7309  88 56 02                  MOV byte ptr [ESI + 0x2],DL
006A730C  8B 55 18                  MOV EDX,dword ptr [EBP + 0x18]
006A730F  83 C6 04                  ADD ESI,0x4
006A7312  42                        INC EDX
006A7313  89 55 18                  MOV dword ptr [EBP + 0x18],EDX
LAB_006a7316:
006A7316  8B 55 E0                  MOV EDX,dword ptr [EBP + -0x20]
006A7319  85 D2                     TEST EDX,EDX
006A731B  75 27                     JNZ 0x006a7344
006A731D  66 83 7F 02 00            CMP word ptr [EDI + 0x2],0x0
006A7322  7D 20                     JGE 0x006a7344
006A7324  8A D3                     MOV DL,BL
006A7326  66 C7 47 02 00 00         MOV word ptr [EDI + 0x2],0x0
006A732C  FE C2                     INC DL
006A732E  88 46 01                  MOV byte ptr [ESI + 0x1],AL
006A7331  88 16                     MOV byte ptr [ESI],DL
006A7333  8A D1                     MOV DL,CL
006A7335  FE C2                     INC DL
006A7337  88 56 02                  MOV byte ptr [ESI + 0x2],DL
006A733A  8B 55 18                  MOV EDX,dword ptr [EBP + 0x18]
006A733D  83 C6 04                  ADD ESI,0x4
006A7340  42                        INC EDX
006A7341  89 55 18                  MOV dword ptr [EBP + 0x18],EDX
LAB_006a7344:
006A7344  8B 55 D8                  MOV EDX,dword ptr [EBP + -0x28]
006A7347  85 D2                     TEST EDX,EDX
006A7349  75 2A                     JNZ 0x006a7375
006A734B  8B 55 0C                  MOV EDX,dword ptr [EBP + 0xc]
006A734E  66 83 3C 57 00            CMP word ptr [EDI + EDX*0x2],0x0
006A7353  7D 20                     JGE 0x006a7375
006A7355  66 C7 04 57 00 00         MOV word ptr [EDI + EDX*0x2],0x0
006A735B  8A D0                     MOV DL,AL
006A735D  FE C2                     INC DL
006A735F  88 1E                     MOV byte ptr [ESI],BL
006A7361  88 56 01                  MOV byte ptr [ESI + 0x1],DL
006A7364  8A D1                     MOV DL,CL
006A7366  FE C2                     INC DL
006A7368  88 56 02                  MOV byte ptr [ESI + 0x2],DL
006A736B  8B 55 18                  MOV EDX,dword ptr [EBP + 0x18]
006A736E  83 C6 04                  ADD ESI,0x4
006A7371  42                        INC EDX
006A7372  89 55 18                  MOV dword ptr [EBP + 0x18],EDX
LAB_006a7375:
006A7375  8B 55 DC                  MOV EDX,dword ptr [EBP + -0x24]
006A7378  85 D2                     TEST EDX,EDX
006A737A  75 2C                     JNZ 0x006a73a8
006A737C  8B 55 0C                  MOV EDX,dword ptr [EBP + 0xc]
006A737F  03 D2                     ADD EDX,EDX
006A7381  2B FA                     SUB EDI,EDX
006A7383  66 83 3F 00               CMP word ptr [EDI],0x0
006A7387  7D 1F                     JGE 0x006a73a8
006A7389  8A D0                     MOV DL,AL
006A738B  66 C7 07 00 00            MOV word ptr [EDI],0x0
006A7390  FE CA                     DEC DL
006A7392  88 1E                     MOV byte ptr [ESI],BL
006A7394  88 56 01                  MOV byte ptr [ESI + 0x1],DL
006A7397  8A D1                     MOV DL,CL
006A7399  FE C2                     INC DL
006A739B  88 56 02                  MOV byte ptr [ESI + 0x2],DL
006A739E  8B 55 18                  MOV EDX,dword ptr [EBP + 0x18]
006A73A1  83 C6 04                  ADD ESI,0x4
006A73A4  42                        INC EDX
006A73A5  89 55 18                  MOV dword ptr [EBP + 0x18],EDX
LAB_006a73a8:
006A73A8  8B 55 D0                  MOV EDX,dword ptr [EBP + -0x30]
006A73AB  85 D2                     TEST EDX,EDX
006A73AD  0F 85 D0 00 00 00         JNZ 0x006a7483
006A73B3  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
006A73B6  8B 7D 20                  MOV EDI,dword ptr [EBP + 0x20]
006A73B9  03 D2                     ADD EDX,EDX
006A73BB  2B FA                     SUB EDI,EDX
006A73BD  8B 55 E4                  MOV EDX,dword ptr [EBP + -0x1c]
006A73C0  85 D2                     TEST EDX,EDX
006A73C2  89 7D 1C                  MOV dword ptr [EBP + 0x1c],EDI
006A73C5  75 27                     JNZ 0x006a73ee
006A73C7  66 83 7F FE 00            CMP word ptr [EDI + -0x2],0x0
006A73CC  7D 20                     JGE 0x006a73ee
006A73CE  8A D3                     MOV DL,BL
006A73D0  66 C7 47 FE 00 00         MOV word ptr [EDI + -0x2],0x0
006A73D6  FE CA                     DEC DL
006A73D8  88 46 01                  MOV byte ptr [ESI + 0x1],AL
006A73DB  88 16                     MOV byte ptr [ESI],DL
006A73DD  8A D1                     MOV DL,CL
006A73DF  FE CA                     DEC DL
006A73E1  88 56 02                  MOV byte ptr [ESI + 0x2],DL
006A73E4  8B 55 18                  MOV EDX,dword ptr [EBP + 0x18]
006A73E7  83 C6 04                  ADD ESI,0x4
006A73EA  42                        INC EDX
006A73EB  89 55 18                  MOV dword ptr [EBP + 0x18],EDX
LAB_006a73ee:
006A73EE  8B 55 E0                  MOV EDX,dword ptr [EBP + -0x20]
006A73F1  85 D2                     TEST EDX,EDX
006A73F3  75 27                     JNZ 0x006a741c
006A73F5  66 83 7F 02 00            CMP word ptr [EDI + 0x2],0x0
006A73FA  7D 20                     JGE 0x006a741c
006A73FC  8A D3                     MOV DL,BL
006A73FE  66 C7 47 02 00 00         MOV word ptr [EDI + 0x2],0x0
006A7404  FE C2                     INC DL
006A7406  88 46 01                  MOV byte ptr [ESI + 0x1],AL
006A7409  88 16                     MOV byte ptr [ESI],DL
006A740B  8A D1                     MOV DL,CL
006A740D  FE CA                     DEC DL
006A740F  88 56 02                  MOV byte ptr [ESI + 0x2],DL
006A7412  8B 55 18                  MOV EDX,dword ptr [EBP + 0x18]
006A7415  83 C6 04                  ADD ESI,0x4
006A7418  42                        INC EDX
006A7419  89 55 18                  MOV dword ptr [EBP + 0x18],EDX
LAB_006a741c:
006A741C  8B 55 DC                  MOV EDX,dword ptr [EBP + -0x24]
006A741F  85 D2                     TEST EDX,EDX
006A7421  75 2F                     JNZ 0x006a7452
006A7423  8B 55 0C                  MOV EDX,dword ptr [EBP + 0xc]
006A7426  03 D2                     ADD EDX,EDX
006A7428  2B FA                     SUB EDI,EDX
006A742A  66 83 3F 00               CMP word ptr [EDI],0x0
006A742E  7D 1F                     JGE 0x006a744f
006A7430  8A D0                     MOV DL,AL
006A7432  66 C7 07 00 00            MOV word ptr [EDI],0x0
006A7437  FE CA                     DEC DL
006A7439  88 1E                     MOV byte ptr [ESI],BL
006A743B  88 56 01                  MOV byte ptr [ESI + 0x1],DL
006A743E  8A D1                     MOV DL,CL
006A7440  FE CA                     DEC DL
006A7442  88 56 02                  MOV byte ptr [ESI + 0x2],DL
006A7445  8B 55 18                  MOV EDX,dword ptr [EBP + 0x18]
006A7448  83 C6 04                  ADD ESI,0x4
006A744B  42                        INC EDX
006A744C  89 55 18                  MOV dword ptr [EBP + 0x18],EDX
LAB_006a744f:
006A744F  8B 7D 1C                  MOV EDI,dword ptr [EBP + 0x1c]
LAB_006a7452:
006A7452  8B 55 D8                  MOV EDX,dword ptr [EBP + -0x28]
006A7455  85 D2                     TEST EDX,EDX
006A7457  75 2A                     JNZ 0x006a7483
006A7459  8B 55 0C                  MOV EDX,dword ptr [EBP + 0xc]
006A745C  66 83 3C 57 00            CMP word ptr [EDI + EDX*0x2],0x0
006A7461  7D 20                     JGE 0x006a7483
006A7463  66 C7 04 57 00 00         MOV word ptr [EDI + EDX*0x2],0x0
006A7469  8A D0                     MOV DL,AL
006A746B  FE C2                     INC DL
006A746D  88 1E                     MOV byte ptr [ESI],BL
006A746F  88 56 01                  MOV byte ptr [ESI + 0x1],DL
006A7472  8A D1                     MOV DL,CL
006A7474  FE CA                     DEC DL
006A7476  88 56 02                  MOV byte ptr [ESI + 0x2],DL
006A7479  8B 55 18                  MOV EDX,dword ptr [EBP + 0x18]
006A747C  83 C6 04                  ADD ESI,0x4
006A747F  42                        INC EDX
006A7480  89 55 18                  MOV dword ptr [EBP + 0x18],EDX
LAB_006a7483:
006A7483  8B 55 D4                  MOV EDX,dword ptr [EBP + -0x2c]
006A7486  85 D2                     TEST EDX,EDX
006A7488  0F 85 F3 00 00 00         JNZ 0x006a7581
006A748E  8B 55 20                  MOV EDX,dword ptr [EBP + 0x20]
006A7491  8B 7D FC                  MOV EDI,dword ptr [EBP + -0x4]
006A7494  8D 3C 7A                  LEA EDI,[EDX + EDI*0x2]
006A7497  8B 55 CC                  MOV EDX,dword ptr [EBP + -0x34]
006A749A  85 D2                     TEST EDX,EDX
006A749C  89 7D 1C                  MOV dword ptr [EBP + 0x1c],EDI
006A749F  75 35                     JNZ 0x006a74d6
006A74A1  8B 55 0C                  MOV EDX,dword ptr [EBP + 0xc]
006A74A4  8D 54 12 02               LEA EDX,[EDX + EDX*0x1 + 0x2]
006A74A8  2B FA                     SUB EDI,EDX
006A74AA  66 83 3F 00               CMP word ptr [EDI],0x0
006A74AE  7D 23                     JGE 0x006a74d3
006A74B0  8A D3                     MOV DL,BL
006A74B2  66 C7 07 00 00            MOV word ptr [EDI],0x0
006A74B7  FE CA                     DEC DL
006A74B9  88 16                     MOV byte ptr [ESI],DL
006A74BB  8A D0                     MOV DL,AL
006A74BD  FE CA                     DEC DL
006A74BF  88 56 01                  MOV byte ptr [ESI + 0x1],DL
006A74C2  8A D1                     MOV DL,CL
006A74C4  FE C2                     INC DL
006A74C6  88 56 02                  MOV byte ptr [ESI + 0x2],DL
006A74C9  8B 55 18                  MOV EDX,dword ptr [EBP + 0x18]
006A74CC  83 C6 04                  ADD ESI,0x4
006A74CF  42                        INC EDX
006A74D0  89 55 18                  MOV dword ptr [EBP + 0x18],EDX
LAB_006a74d3:
006A74D3  8B 7D 1C                  MOV EDI,dword ptr [EBP + 0x1c]
LAB_006a74d6:
006A74D6  8B 55 C8                  MOV EDX,dword ptr [EBP + -0x38]
006A74D9  85 D2                     TEST EDX,EDX
006A74DB  75 37                     JNZ 0x006a7514
006A74DD  8B 55 0C                  MOV EDX,dword ptr [EBP + 0xc]
006A74E0  03 D2                     ADD EDX,EDX
006A74E2  2B FA                     SUB EDI,EDX
006A74E4  66 83 7F 02 00            CMP word ptr [EDI + 0x2],0x0
006A74E9  8D 57 02                  LEA EDX,[EDI + 0x2]
006A74EC  7D 23                     JGE 0x006a7511
006A74EE  66 C7 02 00 00            MOV word ptr [EDX],0x0
006A74F3  8A D3                     MOV DL,BL
006A74F5  FE C2                     INC DL
006A74F7  88 16                     MOV byte ptr [ESI],DL
006A74F9  8A D0                     MOV DL,AL
006A74FB  FE CA                     DEC DL
006A74FD  88 56 01                  MOV byte ptr [ESI + 0x1],DL
006A7500  8A D1                     MOV DL,CL
006A7502  FE C2                     INC DL
006A7504  88 56 02                  MOV byte ptr [ESI + 0x2],DL
006A7507  8B 55 18                  MOV EDX,dword ptr [EBP + 0x18]
006A750A  83 C6 04                  ADD ESI,0x4
006A750D  42                        INC EDX
006A750E  89 55 18                  MOV dword ptr [EBP + 0x18],EDX
LAB_006a7511:
006A7511  8B 7D 1C                  MOV EDI,dword ptr [EBP + 0x1c]
LAB_006a7514:
006A7514  8B 55 C4                  MOV EDX,dword ptr [EBP + -0x3c]
006A7517  85 D2                     TEST EDX,EDX
006A7519  8B 55 0C                  MOV EDX,dword ptr [EBP + 0xc]
006A751C  75 30                     JNZ 0x006a754e
006A751E  66 83 7C 57 FE 00         CMP word ptr [EDI + EDX*0x2 + -0x2],0x0
006A7524  7D 28                     JGE 0x006a754e
006A7526  66 C7 44 57 FE 00 00      MOV word ptr [EDI + EDX*0x2 + -0x2],0x0
006A752D  8A D3                     MOV DL,BL
006A752F  FE CA                     DEC DL
006A7531  88 16                     MOV byte ptr [ESI],DL
006A7533  8A D0                     MOV DL,AL
006A7535  FE C2                     INC DL
006A7537  88 56 01                  MOV byte ptr [ESI + 0x1],DL
006A753A  8A D1                     MOV DL,CL
006A753C  FE C2                     INC DL
006A753E  88 56 02                  MOV byte ptr [ESI + 0x2],DL
006A7541  8B 55 18                  MOV EDX,dword ptr [EBP + 0x18]
006A7544  83 C6 04                  ADD ESI,0x4
006A7547  42                        INC EDX
006A7548  89 55 18                  MOV dword ptr [EBP + 0x18],EDX
006A754B  8B 55 0C                  MOV EDX,dword ptr [EBP + 0xc]
LAB_006a754e:
006A754E  83 7D C0 00               CMP dword ptr [EBP + -0x40],0x0
006A7552  75 2D                     JNZ 0x006a7581
006A7554  66 83 7C 57 02 00         CMP word ptr [EDI + EDX*0x2 + 0x2],0x0
006A755A  7D 25                     JGE 0x006a7581
006A755C  66 C7 44 57 02 00 00      MOV word ptr [EDI + EDX*0x2 + 0x2],0x0
006A7563  8A D3                     MOV DL,BL
006A7565  FE C2                     INC DL
006A7567  88 16                     MOV byte ptr [ESI],DL
006A7569  8A D0                     MOV DL,AL
006A756B  FE C2                     INC DL
006A756D  88 56 01                  MOV byte ptr [ESI + 0x1],DL
006A7570  8A D1                     MOV DL,CL
006A7572  FE C2                     INC DL
006A7574  88 56 02                  MOV byte ptr [ESI + 0x2],DL
006A7577  8B 55 18                  MOV EDX,dword ptr [EBP + 0x18]
006A757A  83 C6 04                  ADD ESI,0x4
006A757D  42                        INC EDX
006A757E  89 55 18                  MOV dword ptr [EBP + 0x18],EDX
LAB_006a7581:
006A7581  8B 55 D0                  MOV EDX,dword ptr [EBP + -0x30]
006A7584  85 D2                     TEST EDX,EDX
006A7586  0F 85 EE 00 00 00         JNZ 0x006a767a
006A758C  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
006A758F  8B 7D 20                  MOV EDI,dword ptr [EBP + 0x20]
006A7592  03 D2                     ADD EDX,EDX
006A7594  2B FA                     SUB EDI,EDX
006A7596  8B 55 CC                  MOV EDX,dword ptr [EBP + -0x34]
006A7599  85 D2                     TEST EDX,EDX
006A759B  89 7D 1C                  MOV dword ptr [EBP + 0x1c],EDI
006A759E  75 35                     JNZ 0x006a75d5
006A75A0  8B 55 0C                  MOV EDX,dword ptr [EBP + 0xc]
006A75A3  8D 54 12 02               LEA EDX,[EDX + EDX*0x1 + 0x2]
006A75A7  2B FA                     SUB EDI,EDX
006A75A9  66 83 3F 00               CMP word ptr [EDI],0x0
006A75AD  7D 23                     JGE 0x006a75d2
006A75AF  8A D3                     MOV DL,BL
006A75B1  66 C7 07 00 00            MOV word ptr [EDI],0x0
006A75B6  FE CA                     DEC DL
006A75B8  88 16                     MOV byte ptr [ESI],DL
006A75BA  8A D0                     MOV DL,AL
006A75BC  FE CA                     DEC DL
006A75BE  88 56 01                  MOV byte ptr [ESI + 0x1],DL
006A75C1  8A D1                     MOV DL,CL
006A75C3  FE CA                     DEC DL
006A75C5  88 56 02                  MOV byte ptr [ESI + 0x2],DL
006A75C8  8B 55 18                  MOV EDX,dword ptr [EBP + 0x18]
006A75CB  83 C6 04                  ADD ESI,0x4
006A75CE  42                        INC EDX
006A75CF  89 55 18                  MOV dword ptr [EBP + 0x18],EDX
LAB_006a75d2:
006A75D2  8B 7D 1C                  MOV EDI,dword ptr [EBP + 0x1c]
LAB_006a75d5:
006A75D5  8B 55 C8                  MOV EDX,dword ptr [EBP + -0x38]
006A75D8  85 D2                     TEST EDX,EDX
006A75DA  75 37                     JNZ 0x006a7613
006A75DC  8B 55 0C                  MOV EDX,dword ptr [EBP + 0xc]
006A75DF  03 D2                     ADD EDX,EDX
006A75E1  2B FA                     SUB EDI,EDX
006A75E3  66 83 7F 02 00            CMP word ptr [EDI + 0x2],0x0
006A75E8  8D 57 02                  LEA EDX,[EDI + 0x2]
006A75EB  7D 23                     JGE 0x006a7610
006A75ED  66 C7 02 00 00            MOV word ptr [EDX],0x0
006A75F2  8A D3                     MOV DL,BL
006A75F4  FE C2                     INC DL
006A75F6  88 16                     MOV byte ptr [ESI],DL
006A75F8  8A D0                     MOV DL,AL
006A75FA  FE CA                     DEC DL
006A75FC  88 56 01                  MOV byte ptr [ESI + 0x1],DL
006A75FF  8A D1                     MOV DL,CL
006A7601  FE CA                     DEC DL
006A7603  88 56 02                  MOV byte ptr [ESI + 0x2],DL
006A7606  8B 55 18                  MOV EDX,dword ptr [EBP + 0x18]
006A7609  83 C6 04                  ADD ESI,0x4
006A760C  42                        INC EDX
006A760D  89 55 18                  MOV dword ptr [EBP + 0x18],EDX
LAB_006a7610:
006A7610  8B 7D 1C                  MOV EDI,dword ptr [EBP + 0x1c]
LAB_006a7613:
006A7613  8B 55 C4                  MOV EDX,dword ptr [EBP + -0x3c]
006A7616  85 D2                     TEST EDX,EDX
006A7618  8B 55 0C                  MOV EDX,dword ptr [EBP + 0xc]
006A761B  75 30                     JNZ 0x006a764d
006A761D  66 83 7C 57 FE 00         CMP word ptr [EDI + EDX*0x2 + -0x2],0x0
006A7623  7D 28                     JGE 0x006a764d
006A7625  66 C7 44 57 FE 00 00      MOV word ptr [EDI + EDX*0x2 + -0x2],0x0
006A762C  8A D3                     MOV DL,BL
006A762E  FE CA                     DEC DL
006A7630  88 16                     MOV byte ptr [ESI],DL
006A7632  8A D0                     MOV DL,AL
006A7634  FE C2                     INC DL
006A7636  88 56 01                  MOV byte ptr [ESI + 0x1],DL
006A7639  8A D1                     MOV DL,CL
006A763B  FE CA                     DEC DL
006A763D  88 56 02                  MOV byte ptr [ESI + 0x2],DL
006A7640  8B 55 18                  MOV EDX,dword ptr [EBP + 0x18]
006A7643  83 C6 04                  ADD ESI,0x4
006A7646  42                        INC EDX
006A7647  89 55 18                  MOV dword ptr [EBP + 0x18],EDX
006A764A  8B 55 0C                  MOV EDX,dword ptr [EBP + 0xc]
LAB_006a764d:
006A764D  83 7D C0 00               CMP dword ptr [EBP + -0x40],0x0
006A7651  75 27                     JNZ 0x006a767a
006A7653  66 83 7C 57 02 00         CMP word ptr [EDI + EDX*0x2 + 0x2],0x0
006A7659  7D 1F                     JGE 0x006a767a
006A765B  FE C3                     INC BL
006A765D  FE C0                     INC AL
006A765F  66 C7 44 57 02 00 00      MOV word ptr [EDI + EDX*0x2 + 0x2],0x0
006A7666  FE C9                     DEC CL
006A7668  88 46 01                  MOV byte ptr [ESI + 0x1],AL
006A766B  8B 45 18                  MOV EAX,dword ptr [EBP + 0x18]
006A766E  88 1E                     MOV byte ptr [ESI],BL
006A7670  88 4E 02                  MOV byte ptr [ESI + 0x2],CL
006A7673  83 C6 04                  ADD ESI,0x4
006A7676  40                        INC EAX
006A7677  89 45 18                  MOV dword ptr [EBP + 0x18],EAX
LAB_006a767a:
006A767A  8B 55 BC                  MOV EDX,dword ptr [EBP + -0x44]
006A767D  8B 45 B8                  MOV EAX,dword ptr [EBP + -0x48]
006A7680  42                        INC EDX
006A7681  3B D0                     CMP EDX,EAX
006A7683  89 55 BC                  MOV dword ptr [EBP + -0x44],EDX
006A7686  0F 8C 1E F9 FF FF         JL 0x006a6faa
006A768C  8B 4D 18                  MOV ECX,dword ptr [EBP + 0x18]
006A768F  85 C9                     TEST ECX,ECX
006A7691  74 22                     JZ 0x006a76b5
006A7693  8B 45 F4                  MOV EAX,dword ptr [EBP + -0xc]
006A7696  8B 75 F8                  MOV ESI,dword ptr [EBP + -0x8]
006A7699  89 45 F8                  MOV dword ptr [EBP + -0x8],EAX
006A769C  8B 45 B4                  MOV EAX,dword ptr [EBP + -0x4c]
006A769F  40                        INC EAX
006A76A0  89 75 F4                  MOV dword ptr [EBP + -0xc],ESI
006A76A3  89 4D B8                  MOV dword ptr [EBP + -0x48],ECX
006A76A6  89 45 B4                  MOV dword ptr [EBP + -0x4c],EAX
006A76A9  E9 EC F8 FF FF            JMP 0x006a6f9a
LAB_006a76ae:
006A76AE  C7 45 E8 FE FF FF FF      MOV dword ptr [EBP + -0x18],0xfffffffe
LAB_006a76b5:
006A76B5  8D 45 EC                  LEA EAX,[EBP + -0x14]
006A76B8  50                        PUSH EAX
006A76B9  E8 A2 39 00 00            CALL 0x006ab060
006A76BE  8B 45 E8                  MOV EAX,dword ptr [EBP + -0x18]
006A76C1  5F                        POP EDI
006A76C2  5E                        POP ESI
006A76C3  5B                        POP EBX
006A76C4  8B E5                     MOV ESP,EBP
006A76C6  5D                        POP EBP
006A76C7  C2 1C 00                  RET 0x1c
