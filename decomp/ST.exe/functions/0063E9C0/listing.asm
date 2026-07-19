FUN_0063e9c0:
0063E9C0  55                        PUSH EBP
0063E9C1  8B EC                     MOV EBP,ESP
0063E9C3  83 EC 24                  SUB ESP,0x24
0063E9C6  53                        PUSH EBX
0063E9C7  56                        PUSH ESI
0063E9C8  8B F1                     MOV ESI,ECX
0063E9CA  BB 0A 00 00 00            MOV EBX,0xa
0063E9CF  57                        PUSH EDI
0063E9D0  8B FB                     MOV EDI,EBX
0063E9D2  8B 86 C0 02 00 00         MOV EAX,dword ptr [ESI + 0x2c0]
0063E9D8  8B 8E BC 02 00 00         MOV ECX,dword ptr [ESI + 0x2bc]
0063E9DE  99                        CDQ
0063E9DF  F7 FF                     IDIV EDI
0063E9E1  8B 86 45 02 00 00         MOV EAX,dword ptr [ESI + 0x245]
0063E9E7  8B FA                     MOV EDI,EDX
0063E9E9  0F AF F9                  IMUL EDI,ECX
0063E9EC  83 F8 01                  CMP EAX,0x1
0063E9EF  89 7D E4                  MOV dword ptr [EBP + -0x1c],EDI
0063E9F2  76 11                     JBE 0x0063ea05
0063E9F4  83 F8 02                  CMP EAX,0x2
0063E9F7  75 6F                     JNZ 0x0063ea68
0063E9F9  C7 45 EC 05 00 00 00      MOV dword ptr [EBP + -0x14],0x5
0063EA00  E9 C8 00 00 00            JMP 0x0063eacd
LAB_0063ea05:
0063EA05  89 5D EC                  MOV dword ptr [EBP + -0x14],EBX
0063EA08  8A 9E 29 03 00 00         MOV BL,byte ptr [ESI + 0x329]
0063EA0E  84 DB                     TEST BL,BL
0063EA10  88 5D FF                  MOV byte ptr [EBP + -0x1],BL
0063EA13  75 32                     JNZ 0x0063ea47
0063EA15  8B 96 B0 02 00 00         MOV EDX,dword ptr [ESI + 0x2b0]
0063EA1B  8B 86 B8 02 00 00         MOV EAX,dword ptr [ESI + 0x2b8]
0063EA21  2B D0                     SUB EDX,EAX
0063EA23  B8 67 66 66 66            MOV EAX,0x66666667
0063EA28  F7 EA                     IMUL EDX
0063EA2A  C1 FA 02                  SAR EDX,0x2
0063EA2D  8B C2                     MOV EAX,EDX
0063EA2F  C1 E8 1F                  SHR EAX,0x1f
0063EA32  03 D0                     ADD EDX,EAX
0063EA34  83 FA 01                  CMP EDX,0x1
0063EA37  75 0C                     JNZ 0x0063ea45
0063EA39  C6 86 29 03 00 00 05      MOV byte ptr [ESI + 0x329],0x5
0063EA40  E9 88 00 00 00            JMP 0x0063eacd
LAB_0063ea45:
0063EA45  84 DB                     TEST BL,BL
LAB_0063ea47:
0063EA47  0F 86 80 00 00 00         JBE 0x0063eacd
0063EA4D  8B 15 38 2A 80 00         MOV EDX,dword ptr [0x00802a38]
0063EA53  BB 0A 00 00 00            MOV EBX,0xa
0063EA58  8B 82 E4 00 00 00         MOV EAX,dword ptr [EDX + 0xe4]
0063EA5E  33 D2                     XOR EDX,EDX
0063EA60  F7 F3                     DIV EBX
0063EA62  85 D2                     TEST EDX,EDX
0063EA64  75 67                     JNZ 0x0063eacd
0063EA66  EB 5A                     JMP 0x0063eac2
LAB_0063ea68:
0063EA68  89 5D EC                  MOV dword ptr [EBP + -0x14],EBX
0063EA6B  8A 9E 29 03 00 00         MOV BL,byte ptr [ESI + 0x329]
0063EA71  84 DB                     TEST BL,BL
0063EA73  88 5D FF                  MOV byte ptr [EBP + -0x1],BL
0063EA76  75 2F                     JNZ 0x0063eaa7
0063EA78  8B 96 B0 02 00 00         MOV EDX,dword ptr [ESI + 0x2b0]
0063EA7E  8B 86 B8 02 00 00         MOV EAX,dword ptr [ESI + 0x2b8]
0063EA84  2B D0                     SUB EDX,EAX
0063EA86  B8 67 66 66 66            MOV EAX,0x66666667
0063EA8B  F7 EA                     IMUL EDX
0063EA8D  C1 FA 02                  SAR EDX,0x2
0063EA90  8B C2                     MOV EAX,EDX
0063EA92  C1 E8 1F                  SHR EAX,0x1f
0063EA95  03 D0                     ADD EDX,EAX
0063EA97  83 FA 01                  CMP EDX,0x1
0063EA9A  75 09                     JNZ 0x0063eaa5
0063EA9C  C6 86 29 03 00 00 05      MOV byte ptr [ESI + 0x329],0x5
0063EAA3  EB 28                     JMP 0x0063eacd
LAB_0063eaa5:
0063EAA5  84 DB                     TEST BL,BL
LAB_0063eaa7:
0063EAA7  76 24                     JBE 0x0063eacd
0063EAA9  8B 15 38 2A 80 00         MOV EDX,dword ptr [0x00802a38]
0063EAAF  BB 0A 00 00 00            MOV EBX,0xa
0063EAB4  8B 82 E4 00 00 00         MOV EAX,dword ptr [EDX + 0xe4]
0063EABA  33 D2                     XOR EDX,EDX
0063EABC  F7 F3                     DIV EBX
0063EABE  85 D2                     TEST EDX,EDX
0063EAC0  75 0B                     JNZ 0x0063eacd
LAB_0063eac2:
0063EAC2  8A 45 FF                  MOV AL,byte ptr [EBP + -0x1]
0063EAC5  FE C0                     INC AL
0063EAC7  88 86 29 03 00 00         MOV byte ptr [ESI + 0x329],AL
FUN_0063e9c0::cf_common_join_0063EACD:
0063EACD  8D 04 39                  LEA EAX,[ECX + EDI*0x1]
0063EAD0  89 7D F0                  MOV dword ptr [EBP + -0x10],EDI
0063EAD3  3B F8                     CMP EDI,EAX
0063EAD5  0F 8D F6 05 00 00         JGE 0x0063f0d1
LAB_0063eadb:
0063EADB  8B 86 36 03 00 00         MOV EAX,dword ptr [ESI + 0x336]
0063EAE1  8B 55 F0                  MOV EDX,dword ptr [EBP + -0x10]
0063EAE4  3B 50 0C                  CMP EDX,dword ptr [EAX + 0xc]
0063EAE7  0F 83 CA 05 00 00         JNC 0x0063f0b7
0063EAED  8B 78 08                  MOV EDI,dword ptr [EAX + 0x8]
0063EAF0  0F AF FA                  IMUL EDI,EDX
0063EAF3  03 78 1C                  ADD EDI,dword ptr [EAX + 0x1c]
0063EAF6  85 FF                     TEST EDI,EDI
0063EAF8  0F 84 B9 05 00 00         JZ 0x0063f0b7
0063EAFE  8B C1                     MOV EAX,ECX
0063EB00  C7 45 E0 00 00 00 00      MOV dword ptr [EBP + -0x20],0x0
0063EB07  99                        CDQ
0063EB08  2B C2                     SUB EAX,EDX
0063EB0A  8B C8                     MOV ECX,EAX
0063EB0C  B8 68 01 00 00            MOV EAX,0x168
0063EB11  99                        CDQ
0063EB12  D1 F9                     SAR ECX,0x1
0063EB14  F7 F9                     IDIV ECX
0063EB16  8B 56 1C                  MOV EDX,dword ptr [ESI + 0x1c]
0063EB19  69 D2 6D 4E C6 41         IMUL EDX,EDX,0x41c64e6d
0063EB1F  8B C8                     MOV ECX,EAX
0063EB21  8D 82 39 30 00 00         LEA EAX,[EDX + 0x3039]
0063EB27  89 46 1C                  MOV dword ptr [ESI + 0x1c],EAX
0063EB2A  33 D2                     XOR EDX,EDX
0063EB2C  C1 E8 10                  SHR EAX,0x10
0063EB2F  8D 59 01                  LEA EBX,[ECX + 0x1]
0063EB32  F7 F3                     DIV EBX
0063EB34  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
0063EB37  2B CA                     SUB ECX,EDX
0063EB39  83 F8 0A                  CMP EAX,0xa
0063EB3C  89 4D DC                  MOV dword ptr [EBP + -0x24],ECX
0063EB3F  DF 6D DC                  FILD qword ptr [EBP + -0x24]
0063EB42  D8 0D 44 20 7D 00         FMUL float ptr [0x007d2044]
0063EB48  D8 0D 60 D0 79 00         FMUL float ptr [0x0079d060]
0063EB4E  D8 47 28                  FADD float ptr [EDI + 0x28]
0063EB51  75 1A                     JNZ 0x0063eb6d
0063EB53  8B 45 EC                  MOV EAX,dword ptr [EBP + -0x14]
0063EB56  8B 8E B4 02 00 00         MOV ECX,dword ptr [ESI + 0x2b4]
0063EB5C  0F AF 86 C0 02 00 00      IMUL EAX,dword ptr [ESI + 0x2c0]
0063EB63  03 C1                     ADD EAX,ECX
0063EB65  89 45 E8                  MOV dword ptr [EBP + -0x18],EAX
0063EB68  DB 45 E8                  FILD dword ptr [EBP + -0x18]
0063EB6B  EB 3A                     JMP 0x0063eba7
LAB_0063eb6d:
0063EB6D  8B 8E C0 02 00 00         MOV ECX,dword ptr [ESI + 0x2c0]
0063EB73  8B C1                     MOV EAX,ECX
0063EB75  0F AF C1                  IMUL EAX,ECX
0063EB78  0F AF 4D EC               IMUL ECX,dword ptr [EBP + -0x14]
0063EB7C  8D 14 40                  LEA EDX,[EAX + EAX*0x2]
0063EB7F  C1 E2 05                  SHL EDX,0x5
0063EB82  2B D0                     SUB EDX,EAX
0063EB84  B8 D3 4D 62 10            MOV EAX,0x10624dd3
0063EB89  F7 DA                     NEG EDX
0063EB8B  F7 EA                     IMUL EDX
0063EB8D  C1 FA 07                  SAR EDX,0x7
0063EB90  8B C2                     MOV EAX,EDX
0063EB92  C1 E8 1F                  SHR EAX,0x1f
0063EB95  03 D0                     ADD EDX,EAX
0063EB97  8B 86 B4 02 00 00         MOV EAX,dword ptr [ESI + 0x2b4]
0063EB9D  2B D1                     SUB EDX,ECX
0063EB9F  03 D0                     ADD EDX,EAX
0063EBA1  89 55 E8                  MOV dword ptr [EBP + -0x18],EDX
0063EBA4  DB 45 E8                  FILD dword ptr [EBP + -0x18]
LAB_0063eba7:
0063EBA7  D9 5F 2C                  FSTP float ptr [EDI + 0x2c]
0063EBAA  D9 47 2C                  FLD float ptr [EDI + 0x2c]
0063EBAD  E8 D6 F6 0E 00            CALL 0x0072e288
0063EBB2  89 45 E8                  MOV dword ptr [EBP + -0x18],EAX
0063EBB5  DB 45 E8                  FILD dword ptr [EBP + -0x18]
0063EBB8  D9 C1                     FLD ST1
0063EBBA  D9 FF                     FCOS
0063EBBC  D8 C9                     FMUL ST1
0063EBBE  E8 C5 F6 0E 00            CALL 0x0072e288
0063EBC3  D9 C9                     FXCH
0063EBC5  D9 FE                     FSIN
0063EBC7  8B 4F 14                  MOV ECX,dword ptr [EDI + 0x14]
0063EBCA  8D 1C 08                  LEA EBX,[EAX + ECX*0x1]
0063EBCD  89 5F 08                  MOV dword ptr [EDI + 0x8],EBX
0063EBD0  D8 C9                     FMUL ST1
0063EBD2  D9 C9                     FXCH
0063EBD4  DD D8                     FSTP ST0
0063EBD6  E8 AD F6 0E 00            CALL 0x0072e288
0063EBDB  8B 57 18                  MOV EDX,dword ptr [EDI + 0x18]
0063EBDE  03 C2                     ADD EAX,EDX
0063EBE0  89 45 F4                  MOV dword ptr [EBP + -0xc],EAX
0063EBE3  89 47 0C                  MOV dword ptr [EDI + 0xc],EAX
0063EBE6  83 7D 08 0A               CMP dword ptr [EBP + 0x8],0xa
0063EBEA  0F 85 07 02 00 00         JNZ 0x0063edf7
0063EBF0  8B 45 F0                  MOV EAX,dword ptr [EBP + -0x10]
0063EBF3  33 C9                     XOR ECX,ECX
0063EBF5  8A 8E 28 03 00 00         MOV CL,byte ptr [ESI + 0x328]
0063EBFB  99                        CDQ
0063EBFC  F7 F9                     IDIV ECX
0063EBFE  85 D2                     TEST EDX,EDX
0063EC00  0F 85 7F 03 00 00         JNZ 0x0063ef85
0063EC06  8B 45 F0                  MOV EAX,dword ptr [EBP + -0x10]
0063EC09  8B 55 E4                  MOV EDX,dword ptr [EBP + -0x1c]
0063EC0C  2B C2                     SUB EAX,EDX
0063EC0E  99                        CDQ
0063EC0F  F7 F9                     IDIV ECX
0063EC11  85 DB                     TEST EBX,EBX
0063EC13  8B C8                     MOV ECX,EAX
0063EC15  B8 79 19 8C 02            MOV EAX,0x28c1979
0063EC1A  7C 13                     JL 0x0063ec2f
0063EC1C  F7 EB                     IMUL EBX
0063EC1E  D1 FA                     SAR EDX,0x1
0063EC20  8B C2                     MOV EAX,EDX
0063EC22  C1 E8 1F                  SHR EAX,0x1f
0063EC25  03 D0                     ADD EDX,EAX
0063EC27  0F BF D2                  MOVSX EDX,DX
0063EC2A  89 55 F8                  MOV dword ptr [EBP + -0x8],EDX
0063EC2D  EB 12                     JMP 0x0063ec41
LAB_0063ec2f:
0063EC2F  F7 EB                     IMUL EBX
0063EC31  D1 FA                     SAR EDX,0x1
0063EC33  8B C2                     MOV EAX,EDX
0063EC35  C1 E8 1F                  SHR EAX,0x1f
0063EC38  03 D0                     ADD EDX,EAX
0063EC3A  0F BF C2                  MOVSX EAX,DX
0063EC3D  48                        DEC EAX
0063EC3E  89 45 F8                  MOV dword ptr [EBP + -0x8],EAX
LAB_0063ec41:
0063EC41  8B 55 F4                  MOV EDX,dword ptr [EBP + -0xc]
0063EC44  B8 79 19 8C 02            MOV EAX,0x28c1979
0063EC49  85 D2                     TEST EDX,EDX
0063EC4B  7C 10                     JL 0x0063ec5d
0063EC4D  F7 EA                     IMUL EDX
0063EC4F  D1 FA                     SAR EDX,0x1
0063EC51  8B C2                     MOV EAX,EDX
0063EC53  C1 E8 1F                  SHR EAX,0x1f
0063EC56  03 D0                     ADD EDX,EAX
0063EC58  0F BF DA                  MOVSX EBX,DX
0063EC5B  EB 0F                     JMP 0x0063ec6c
LAB_0063ec5d:
0063EC5D  F7 EA                     IMUL EDX
0063EC5F  D1 FA                     SAR EDX,0x1
0063EC61  8B C2                     MOV EAX,EDX
0063EC63  C1 E8 1F                  SHR EAX,0x1f
0063EC66  03 D0                     ADD EDX,EAX
0063EC68  0F BF DA                  MOVSX EBX,DX
0063EC6B  4B                        DEC EBX
LAB_0063ec6c:
0063EC6C  0F BF 94 8E C4 02 00 00   MOVSX EDX,word ptr [ESI + ECX*0x4 + 0x2c4]
0063EC74  39 55 F8                  CMP dword ptr [EBP + -0x8],EDX
0063EC77  75 10                     JNZ 0x0063ec89
0063EC79  0F BF 84 8E C6 02 00 00   MOVSX EAX,word ptr [ESI + ECX*0x4 + 0x2c6]
0063EC81  3B D8                     CMP EBX,EAX
0063EC83  0F 84 FC 02 00 00         JZ 0x0063ef85
LAB_0063ec89:
0063EC89  66 8B 55 F8               MOV DX,word ptr [EBP + -0x8]
0063EC8D  B8 79 19 8C 02            MOV EAX,0x28c1979
0063EC92  66 89 94 8E C4 02 00 00   MOV word ptr [ESI + ECX*0x4 + 0x2c4],DX
0063EC9A  F7 6D E8                  IMUL dword ptr [EBP + -0x18]
0063EC9D  D1 FA                     SAR EDX,0x1
0063EC9F  8B C2                     MOV EAX,EDX
0063ECA1  66 89 9C 8E C6 02 00 00   MOV word ptr [ESI + ECX*0x4 + 0x2c6],BX
0063ECA9  C1 E8 1F                  SHR EAX,0x1f
0063ECAC  03 D0                     ADD EDX,EAX
0063ECAE  8B CA                     MOV ECX,EDX
0063ECB0  85 C9                     TEST ECX,ECX
0063ECB2  7E 0D                     JLE 0x0063ecc1
0063ECB4  B8 A0 0F 00 00            MOV EAX,0xfa0
0063ECB9  99                        CDQ
0063ECBA  F7 F9                     IDIV ECX
0063ECBC  89 45 E8                  MOV dword ptr [EBP + -0x18],EAX
0063ECBF  EB 07                     JMP 0x0063ecc8
LAB_0063ecc1:
0063ECC1  C7 45 E8 A0 0F 00 00      MOV dword ptr [EBP + -0x18],0xfa0
LAB_0063ecc8:
0063ECC8  33 C0                     XOR EAX,EAX
0063ECCA  89 45 F4                  MOV dword ptr [EBP + -0xc],EAX
LAB_0063eccd:
0063ECCD  8B 4D F8                  MOV ECX,dword ptr [EBP + -0x8]
0063ECD0  66 85 C9                  TEST CX,CX
0063ECD3  0F 8C 0C 01 00 00         JL 0x0063ede5
0063ECD9  66 8B 15 40 B2 7F 00      MOV DX,word ptr [0x007fb240]
0063ECE0  66 3B CA                  CMP CX,DX
0063ECE3  7D 79                     JGE 0x0063ed5e
0063ECE5  66 85 DB                  TEST BX,BX
0063ECE8  7C 74                     JL 0x0063ed5e
0063ECEA  66 3B 1D 42 B2 7F 00      CMP BX,word ptr [0x007fb242]
0063ECF1  7D 6B                     JGE 0x0063ed5e
0063ECF3  66 85 C0                  TEST AX,AX
0063ECF6  7C 66                     JL 0x0063ed5e
0063ECF8  66 3B 05 44 B2 7F 00      CMP AX,word ptr [0x007fb244]
0063ECFF  7D 5D                     JGE 0x0063ed5e
0063ED01  0F BF C8                  MOVSX ECX,AX
0063ED04  0F BF 05 46 B2 7F 00      MOVSX EAX,word ptr [0x007fb246]
0063ED0B  0F AF C8                  IMUL ECX,EAX
0063ED0E  0F BF D2                  MOVSX EDX,DX
0063ED11  0F BF C3                  MOVSX EAX,BX
0063ED14  0F AF D0                  IMUL EDX,EAX
0063ED17  A1 48 B2 7F 00            MOV EAX,[0x007fb248]
0063ED1C  03 CA                     ADD ECX,EDX
0063ED1E  0F BF 55 F8               MOVSX EDX,word ptr [EBP + -0x8]
0063ED22  03 CA                     ADD ECX,EDX
0063ED24  8B 04 C8                  MOV EAX,dword ptr [EAX + ECX*0x8]
0063ED27  85 C0                     TEST EAX,EAX
0063ED29  74 30                     JZ 0x0063ed5b
0063ED2B  66 8B 8E 61 02 00 00      MOV CX,word ptr [ESI + 0x261]
0063ED32  8B 96 5D 02 00 00         MOV EDX,dword ptr [ESI + 0x25d]
0063ED38  68 10 01 00 00            PUSH 0x110
0063ED3D  68 A8 00 00 00            PUSH 0xa8
0063ED42  51                        PUSH ECX
0063ED43  8B 8E 59 02 00 00         MOV ECX,dword ptr [ESI + 0x259]
0063ED49  52                        PUSH EDX
0063ED4A  50                        PUSH EAX
0063ED4B  8B 45 E8                  MOV EAX,dword ptr [EBP + -0x18]
0063ED4E  50                        PUSH EAX
0063ED4F  51                        PUSH ECX
0063ED50  8D 8E 83 03 00 00         LEA ECX,[ESI + 0x383]
0063ED56  E8 C7 50 DC FF            CALL 0x00403e22
LAB_0063ed5b:
0063ED5B  8B 45 F4                  MOV EAX,dword ptr [EBP + -0xc]
LAB_0063ed5e:
0063ED5E  66 8B 0D 40 B2 7F 00      MOV CX,word ptr [0x007fb240]
0063ED65  66 39 4D F8               CMP word ptr [EBP + -0x8],CX
0063ED69  7D 7A                     JGE 0x0063ede5
0063ED6B  66 85 DB                  TEST BX,BX
0063ED6E  7C 75                     JL 0x0063ede5
0063ED70  66 3B 1D 42 B2 7F 00      CMP BX,word ptr [0x007fb242]
0063ED77  7D 6C                     JGE 0x0063ede5
0063ED79  66 85 C0                  TEST AX,AX
0063ED7C  7C 67                     JL 0x0063ede5
0063ED7E  66 3B 05 44 B2 7F 00      CMP AX,word ptr [0x007fb244]
0063ED85  7D 5E                     JGE 0x0063ede5
0063ED87  0F BF D0                  MOVSX EDX,AX
0063ED8A  0F BF 05 46 B2 7F 00      MOVSX EAX,word ptr [0x007fb246]
0063ED91  0F AF D0                  IMUL EDX,EAX
0063ED94  0F BF C9                  MOVSX ECX,CX
0063ED97  0F BF C3                  MOVSX EAX,BX
0063ED9A  0F AF C8                  IMUL ECX,EAX
0063ED9D  A1 48 B2 7F 00            MOV EAX,[0x007fb248]
0063EDA2  03 D1                     ADD EDX,ECX
0063EDA4  0F BF 4D F8               MOVSX ECX,word ptr [EBP + -0x8]
0063EDA8  03 D1                     ADD EDX,ECX
0063EDAA  8B 44 D0 04               MOV EAX,dword ptr [EAX + EDX*0x8 + 0x4]
0063EDAE  85 C0                     TEST EAX,EAX
0063EDB0  74 30                     JZ 0x0063ede2
0063EDB2  66 8B 8E 61 02 00 00      MOV CX,word ptr [ESI + 0x261]
0063EDB9  8B 96 5D 02 00 00         MOV EDX,dword ptr [ESI + 0x25d]
0063EDBF  68 10 01 00 00            PUSH 0x110
0063EDC4  68 A8 00 00 00            PUSH 0xa8
0063EDC9  51                        PUSH ECX
0063EDCA  8B 8E 59 02 00 00         MOV ECX,dword ptr [ESI + 0x259]
0063EDD0  52                        PUSH EDX
0063EDD1  50                        PUSH EAX
0063EDD2  8B 45 E8                  MOV EAX,dword ptr [EBP + -0x18]
0063EDD5  50                        PUSH EAX
0063EDD6  51                        PUSH ECX
0063EDD7  8D 8E 83 03 00 00         LEA ECX,[ESI + 0x383]
0063EDDD  E8 40 50 DC FF            CALL 0x00403e22
LAB_0063ede2:
0063EDE2  8B 45 F4                  MOV EAX,dword ptr [EBP + -0xc]
LAB_0063ede5:
0063EDE5  40                        INC EAX
0063EDE6  83 F8 05                  CMP EAX,0x5
0063EDE9  89 45 F4                  MOV dword ptr [EBP + -0xc],EAX
0063EDEC  0F 8C DB FE FF FF         JL 0x0063eccd
0063EDF2  E9 8E 01 00 00            JMP 0x0063ef85
LAB_0063edf7:
0063EDF7  8B 15 38 2A 80 00         MOV EDX,dword ptr [0x00802a38]
0063EDFD  F6 82 E4 00 00 00 01      TEST byte ptr [EDX + 0xe4],0x1
0063EE04  0F 84 7B 01 00 00         JZ 0x0063ef85
0063EE0A  8B 45 F0                  MOV EAX,dword ptr [EBP + -0x10]
0063EE0D  33 C9                     XOR ECX,ECX
0063EE0F  8A 8E 28 03 00 00         MOV CL,byte ptr [ESI + 0x328]
0063EE15  99                        CDQ
0063EE16  F7 F9                     IDIV ECX
0063EE18  85 D2                     TEST EDX,EDX
0063EE1A  0F 85 65 01 00 00         JNZ 0x0063ef85
0063EE20  8B 45 F0                  MOV EAX,dword ptr [EBP + -0x10]
0063EE23  8B 55 E4                  MOV EDX,dword ptr [EBP + -0x1c]
0063EE26  2B C2                     SUB EAX,EDX
0063EE28  99                        CDQ
0063EE29  F7 F9                     IDIV ECX
0063EE2B  85 DB                     TEST EBX,EBX
0063EE2D  8B C8                     MOV ECX,EAX
0063EE2F  B8 79 19 8C 02            MOV EAX,0x28c1979
0063EE34  7C 13                     JL 0x0063ee49
0063EE36  F7 EB                     IMUL EBX
0063EE38  D1 FA                     SAR EDX,0x1
0063EE3A  8B C2                     MOV EAX,EDX
0063EE3C  C1 E8 1F                  SHR EAX,0x1f
0063EE3F  03 D0                     ADD EDX,EAX
0063EE41  0F BF D2                  MOVSX EDX,DX
0063EE44  89 55 F8                  MOV dword ptr [EBP + -0x8],EDX
0063EE47  EB 12                     JMP 0x0063ee5b
LAB_0063ee49:
0063EE49  F7 EB                     IMUL EBX
0063EE4B  D1 FA                     SAR EDX,0x1
0063EE4D  8B C2                     MOV EAX,EDX
0063EE4F  C1 E8 1F                  SHR EAX,0x1f
0063EE52  03 D0                     ADD EDX,EAX
0063EE54  0F BF C2                  MOVSX EAX,DX
0063EE57  48                        DEC EAX
0063EE58  89 45 F8                  MOV dword ptr [EBP + -0x8],EAX
LAB_0063ee5b:
0063EE5B  8B 55 F4                  MOV EDX,dword ptr [EBP + -0xc]
0063EE5E  B8 79 19 8C 02            MOV EAX,0x28c1979
0063EE63  85 D2                     TEST EDX,EDX
0063EE65  7C 10                     JL 0x0063ee77
0063EE67  F7 EA                     IMUL EDX
0063EE69  D1 FA                     SAR EDX,0x1
0063EE6B  8B C2                     MOV EAX,EDX
0063EE6D  C1 E8 1F                  SHR EAX,0x1f
0063EE70  03 D0                     ADD EDX,EAX
0063EE72  0F BF DA                  MOVSX EBX,DX
0063EE75  EB 0F                     JMP 0x0063ee86
LAB_0063ee77:
0063EE77  F7 EA                     IMUL EDX
0063EE79  D1 FA                     SAR EDX,0x1
0063EE7B  8B C2                     MOV EAX,EDX
0063EE7D  C1 E8 1F                  SHR EAX,0x1f
0063EE80  03 D0                     ADD EDX,EAX
0063EE82  0F BF DA                  MOVSX EBX,DX
0063EE85  4B                        DEC EBX
LAB_0063ee86:
0063EE86  0F BF 94 8E C4 02 00 00   MOVSX EDX,word ptr [ESI + ECX*0x4 + 0x2c4]
0063EE8E  39 55 F8                  CMP dword ptr [EBP + -0x8],EDX
0063EE91  75 10                     JNZ 0x0063eea3
0063EE93  0F BF 84 8E C6 02 00 00   MOVSX EAX,word ptr [ESI + ECX*0x4 + 0x2c6]
0063EE9B  3B D8                     CMP EBX,EAX
0063EE9D  0F 84 E2 00 00 00         JZ 0x0063ef85
LAB_0063eea3:
0063EEA3  66 8B 55 F8               MOV DX,word ptr [EBP + -0x8]
0063EEA7  B8 79 19 8C 02            MOV EAX,0x28c1979
0063EEAC  66 89 94 8E C4 02 00 00   MOV word ptr [ESI + ECX*0x4 + 0x2c4],DX
0063EEB4  F7 6D E8                  IMUL dword ptr [EBP + -0x18]
0063EEB7  D1 FA                     SAR EDX,0x1
0063EEB9  8B C2                     MOV EAX,EDX
0063EEBB  66 89 9C 8E C6 02 00 00   MOV word ptr [ESI + ECX*0x4 + 0x2c6],BX
0063EEC3  C1 E8 1F                  SHR EAX,0x1f
0063EEC6  03 D0                     ADD EDX,EAX
0063EEC8  8B CA                     MOV ECX,EDX
0063EECA  85 C9                     TEST ECX,ECX
0063EECC  7E 0D                     JLE 0x0063eedb
0063EECE  B8 A0 0F 00 00            MOV EAX,0xfa0
0063EED3  99                        CDQ
0063EED4  F7 F9                     IDIV ECX
0063EED6  89 45 E8                  MOV dword ptr [EBP + -0x18],EAX
0063EED9  EB 07                     JMP 0x0063eee2
LAB_0063eedb:
0063EEDB  C7 45 E8 A0 0F 00 00      MOV dword ptr [EBP + -0x18],0xfa0
LAB_0063eee2:
0063EEE2  33 C0                     XOR EAX,EAX
0063EEE4  89 45 F4                  MOV dword ptr [EBP + -0xc],EAX
LAB_0063eee7:
0063EEE7  8B 4D F8                  MOV ECX,dword ptr [EBP + -0x8]
0063EEEA  66 85 C9                  TEST CX,CX
0063EEED  0F 8C 85 00 00 00         JL 0x0063ef78
0063EEF3  66 8B 15 40 B2 7F 00      MOV DX,word ptr [0x007fb240]
0063EEFA  66 3B CA                  CMP CX,DX
0063EEFD  7D 79                     JGE 0x0063ef78
0063EEFF  66 85 DB                  TEST BX,BX
0063EF02  7C 74                     JL 0x0063ef78
0063EF04  66 3B 1D 42 B2 7F 00      CMP BX,word ptr [0x007fb242]
0063EF0B  7D 6B                     JGE 0x0063ef78
0063EF0D  66 85 C0                  TEST AX,AX
0063EF10  7C 66                     JL 0x0063ef78
0063EF12  66 3B 05 44 B2 7F 00      CMP AX,word ptr [0x007fb244]
0063EF19  7D 5D                     JGE 0x0063ef78
0063EF1B  0F BF C8                  MOVSX ECX,AX
0063EF1E  0F BF 05 46 B2 7F 00      MOVSX EAX,word ptr [0x007fb246]
0063EF25  0F AF C8                  IMUL ECX,EAX
0063EF28  0F BF D2                  MOVSX EDX,DX
0063EF2B  0F BF C3                  MOVSX EAX,BX
0063EF2E  0F AF D0                  IMUL EDX,EAX
0063EF31  A1 48 B2 7F 00            MOV EAX,[0x007fb248]
0063EF36  03 CA                     ADD ECX,EDX
0063EF38  0F BF 55 F8               MOVSX EDX,word ptr [EBP + -0x8]
0063EF3C  03 CA                     ADD ECX,EDX
0063EF3E  8B 04 C8                  MOV EAX,dword ptr [EAX + ECX*0x8]
0063EF41  85 C0                     TEST EAX,EAX
0063EF43  74 30                     JZ 0x0063ef75
0063EF45  66 8B 8E 61 02 00 00      MOV CX,word ptr [ESI + 0x261]
0063EF4C  8B 96 5D 02 00 00         MOV EDX,dword ptr [ESI + 0x25d]
0063EF52  68 10 01 00 00            PUSH 0x110
0063EF57  68 A8 00 00 00            PUSH 0xa8
0063EF5C  51                        PUSH ECX
0063EF5D  8B 8E 59 02 00 00         MOV ECX,dword ptr [ESI + 0x259]
0063EF63  52                        PUSH EDX
0063EF64  50                        PUSH EAX
0063EF65  8B 45 E8                  MOV EAX,dword ptr [EBP + -0x18]
0063EF68  50                        PUSH EAX
0063EF69  51                        PUSH ECX
0063EF6A  8D 8E 83 03 00 00         LEA ECX,[ESI + 0x383]
0063EF70  E8 AD 4E DC FF            CALL 0x00403e22
LAB_0063ef75:
0063EF75  8B 45 F4                  MOV EAX,dword ptr [EBP + -0xc]
LAB_0063ef78:
0063EF78  40                        INC EAX
0063EF79  83 F8 05                  CMP EAX,0x5
0063EF7C  89 45 F4                  MOV dword ptr [EBP + -0xc],EAX
0063EF7F  0F 8C 62 FF FF FF         JL 0x0063eee7
LAB_0063ef85:
0063EF85  8B 56 1C                  MOV EDX,dword ptr [ESI + 0x1c]
0063EF88  B9 06 00 00 00            MOV ECX,0x6
0063EF8D  69 D2 6D 4E C6 41         IMUL EDX,EDX,0x41c64e6d
0063EF93  8D 82 39 30 00 00         LEA EAX,[EDX + 0x3039]
0063EF99  33 D2                     XOR EDX,EDX
0063EF9B  89 46 1C                  MOV dword ptr [ESI + 0x1c],EAX
0063EF9E  8B 5F 08                  MOV EBX,dword ptr [EDI + 0x8]
0063EFA1  C1 E8 10                  SHR EAX,0x10
0063EFA4  F7 F1                     DIV ECX
0063EFA6  03 DA                     ADD EBX,EDX
0063EFA8  89 5F 08                  MOV dword ptr [EDI + 0x8],EBX
0063EFAB  8B 56 1C                  MOV EDX,dword ptr [ESI + 0x1c]
0063EFAE  69 D2 6D 4E C6 41         IMUL EDX,EDX,0x41c64e6d
0063EFB4  8D 82 39 30 00 00         LEA EAX,[EDX + 0x3039]
0063EFBA  33 D2                     XOR EDX,EDX
0063EFBC  89 46 1C                  MOV dword ptr [ESI + 0x1c],EAX
0063EFBF  C1 E8 10                  SHR EAX,0x10
0063EFC2  F7 F1                     DIV ECX
0063EFC4  8B 4F 0C                  MOV ECX,dword ptr [EDI + 0xc]
0063EFC7  03 CA                     ADD ECX,EDX
0063EFC9  89 4F 0C                  MOV dword ptr [EDI + 0xc],ECX
0063EFCC  8B C1                     MOV EAX,ECX
0063EFCE  8B 8E 11 02 00 00         MOV ECX,dword ptr [ESI + 0x211]
0063EFD4  8B 99 80 03 00 00         MOV EBX,dword ptr [ECX + 0x380]
0063EFDA  0F AF C3                  IMUL EAX,EBX
0063EFDD  8B D0                     MOV EDX,EAX
0063EFDF  B8 79 19 8C 02            MOV EAX,0x28c1979
0063EFE4  F7 EA                     IMUL EDX
0063EFE6  D1 FA                     SAR EDX,0x1
0063EFE8  8B C2                     MOV EAX,EDX
0063EFEA  C1 E8 1F                  SHR EAX,0x1f
0063EFED  03 D0                     ADD EDX,EAX
0063EFEF  B8 79 19 8C 02            MOV EAX,0x28c1979
0063EFF4  52                        PUSH EDX
0063EFF5  8B 57 08                  MOV EDX,dword ptr [EDI + 0x8]
0063EFF8  0F AF D3                  IMUL EDX,EBX
0063EFFB  F7 EA                     IMUL EDX
0063EFFD  D1 FA                     SAR EDX,0x1
0063EFFF  8B C2                     MOV EAX,EDX
0063F001  C1 E8 1F                  SHR EAX,0x1f
0063F004  03 D0                     ADD EDX,EAX
0063F006  52                        PUSH EDX
0063F007  E8 04 42 0A 00            CALL 0x006e3210
0063F00C  D9 5D E8                  FSTP float ptr [EBP + -0x18]
0063F00F  D9 47 10                  FLD float ptr [EDI + 0x10]
0063F012  D8 5D E8                  FCOMP float ptr [EBP + -0x18]
0063F015  DF E0                     FNSTSW AX
0063F017  F6 C4 40                  TEST AH,0x40
0063F01A  75 5D                     JNZ 0x0063f079
0063F01C  D9 47 10                  FLD float ptr [EDI + 0x10]
0063F01F  D8 5D E8                  FCOMP float ptr [EBP + -0x18]
0063F022  D9 45 E8                  FLD float ptr [EBP + -0x18]
0063F025  DF E0                     FNSTSW AX
0063F027  F6 C4 01                  TEST AH,0x1
0063F02A  74 30                     JZ 0x0063f05c
0063F02C  D8 25 04 05 79 00         FSUB float ptr [0x00790504]
0063F032  D8 5F 10                  FCOMP float ptr [EDI + 0x10]
0063F035  DF E0                     FNSTSW AX
0063F037  F6 C4 41                  TEST AH,0x41
0063F03A  75 18                     JNZ 0x0063f054
0063F03C  8B 4F 38                  MOV ECX,dword ptr [EDI + 0x38]
0063F03F  51                        PUSH ECX
0063F040  8B 8E 11 02 00 00         MOV ECX,dword ptr [ESI + 0x211]
0063F046  E8 55 9B 0A 00            CALL 0x006e8ba0
0063F04B  C7 47 38 FF FF FF FF      MOV dword ptr [EDI + 0x38],0xffffffff
0063F052  EB 25                     JMP 0x0063f079
LAB_0063f054:
0063F054  8B 55 E8                  MOV EDX,dword ptr [EBP + -0x18]
0063F057  89 57 10                  MOV dword ptr [EDI + 0x10],EDX
0063F05A  EB 1D                     JMP 0x0063f079
LAB_0063f05c:
0063F05C  D8 25 A8 D4 79 00         FSUB float ptr [0x0079d4a8]
0063F062  D8 57 10                  FCOM float ptr [EDI + 0x10]
0063F065  DF E0                     FNSTSW AX
0063F067  F6 C4 01                  TEST AH,0x1
0063F06A  74 05                     JZ 0x0063f071
0063F06C  D9 5F 10                  FSTP float ptr [EDI + 0x10]
0063F06F  EB 08                     JMP 0x0063f079
LAB_0063f071:
0063F071  8B 45 E8                  MOV EAX,dword ptr [EBP + -0x18]
0063F074  DD D8                     FSTP ST0
0063F076  89 47 10                  MOV dword ptr [EDI + 0x10],EAX
LAB_0063f079:
0063F079  8B 0D 38 2A 80 00         MOV ECX,dword ptr [0x00802a38]
0063F07F  33 C0                     XOR EAX,EAX
0063F081  8B 91 E4 00 00 00         MOV EDX,dword ptr [ECX + 0xe4]
0063F087  89 57 30                  MOV dword ptr [EDI + 0x30],EDX
0063F08A  8A 86 29 03 00 00         MOV AL,byte ptr [ESI + 0x329]
0063F090  83 C0 05                  ADD EAX,0x5
0063F093  83 F8 0F                  CMP EAX,0xf
0063F096  89 47 20                  MOV dword ptr [EDI + 0x20],EAX
0063F099  7E 07                     JLE 0x0063f0a2
0063F09B  C7 47 20 0E 00 00 00      MOV dword ptr [EDI + 0x20],0xe
LAB_0063f0a2:
0063F0A2  8B 47 20                  MOV EAX,dword ptr [EDI + 0x20]
0063F0A5  83 C0 05                  ADD EAX,0x5
0063F0A8  83 F8 0F                  CMP EAX,0xf
0063F0AB  89 47 24                  MOV dword ptr [EDI + 0x24],EAX
0063F0AE  7E 07                     JLE 0x0063f0b7
0063F0B0  C7 47 24 0F 00 00 00      MOV dword ptr [EDI + 0x24],0xf
LAB_0063f0b7:
0063F0B7  8B 45 F0                  MOV EAX,dword ptr [EBP + -0x10]
0063F0BA  8B 8E BC 02 00 00         MOV ECX,dword ptr [ESI + 0x2bc]
0063F0C0  8B 55 E4                  MOV EDX,dword ptr [EBP + -0x1c]
0063F0C3  40                        INC EAX
0063F0C4  03 D1                     ADD EDX,ECX
0063F0C6  89 45 F0                  MOV dword ptr [EBP + -0x10],EAX
0063F0C9  3B C2                     CMP EAX,EDX
0063F0CB  0F 8C 0A FA FF FF         JL 0x0063eadb
LAB_0063f0d1:
0063F0D1  8B BE C0 02 00 00         MOV EDI,dword ptr [ESI + 0x2c0]
0063F0D7  8B 86 45 02 00 00         MOV EAX,dword ptr [ESI + 0x245]
0063F0DD  47                        INC EDI
0063F0DE  83 F8 01                  CMP EAX,0x1
0063F0E1  89 BE C0 02 00 00         MOV dword ptr [ESI + 0x2c0],EDI
0063F0E7  8B CF                     MOV ECX,EDI
0063F0E9  76 40                     JBE 0x0063f12b
0063F0EB  83 F8 02                  CMP EAX,0x2
0063F0EE  75 3B                     JNZ 0x0063f12b
0063F0F0  8B C1                     MOV EAX,ECX
0063F0F2  5F                        POP EDI
0063F0F3  0F AF C1                  IMUL EAX,ECX
0063F0F6  0F AF 4D EC               IMUL ECX,dword ptr [EBP + -0x14]
0063F0FA  8D 14 40                  LEA EDX,[EAX + EAX*0x2]
0063F0FD  C1 E2 05                  SHL EDX,0x5
0063F100  2B D0                     SUB EDX,EAX
0063F102  B8 D3 4D 62 10            MOV EAX,0x10624dd3
0063F107  F7 EA                     IMUL EDX
0063F109  C1 FA 07                  SAR EDX,0x7
0063F10C  8B C2                     MOV EAX,EDX
0063F10E  C1 E8 1F                  SHR EAX,0x1f
0063F111  03 D0                     ADD EDX,EAX
0063F113  8B 86 B4 02 00 00         MOV EAX,dword ptr [ESI + 0x2b4]
0063F119  2B C2                     SUB EAX,EDX
0063F11B  2B C1                     SUB EAX,ECX
0063F11D  89 86 B8 02 00 00         MOV dword ptr [ESI + 0x2b8],EAX
0063F123  5E                        POP ESI
0063F124  5B                        POP EBX
0063F125  8B E5                     MOV ESP,EBP
0063F127  5D                        POP EBP
0063F128  C2 04 00                  RET 0x4
LAB_0063f12b:
0063F12B  0F AF 4D EC               IMUL ECX,dword ptr [EBP + -0x14]
0063F12F  8B 86 B4 02 00 00         MOV EAX,dword ptr [ESI + 0x2b4]
0063F135  5F                        POP EDI
0063F136  03 C8                     ADD ECX,EAX
0063F138  89 8E B8 02 00 00         MOV dword ptr [ESI + 0x2b8],ECX
0063F13E  5E                        POP ESI
0063F13F  5B                        POP EBX
0063F140  8B E5                     MOV ESP,EBP
0063F142  5D                        POP EBP
0063F143  C2 04 00                  RET 0x4
