FUN_0065dd30:
0065DD30  55                        PUSH EBP
0065DD31  8B EC                     MOV EBP,ESP
0065DD33  83 EC 28                  SUB ESP,0x28
0065DD36  56                        PUSH ESI
0065DD37  57                        PUSH EDI
0065DD38  8B F1                     MOV ESI,ECX
0065DD3A  33 FF                     XOR EDI,EDI
0065DD3C  89 75 EC                  MOV dword ptr [EBP + -0x14],ESI
0065DD3F  89 7D F4                  MOV dword ptr [EBP + -0xc],EDI
0065DD42  E8 88 3B DA FF            CALL 0x004018cf
0065DD47  8B D0                     MOV EDX,EAX
0065DD49  85 D2                     TEST EDX,EDX
0065DD4B  89 55 E8                  MOV dword ptr [EBP + -0x18],EDX
0065DD4E  0F 84 5C 02 00 00         JZ 0x0065dfb0
0065DD54  8A 86 81 00 00 00         MOV AL,byte ptr [ESI + 0x81]
0065DD5A  84 C0                     TEST AL,AL
0065DD5C  7C 07                     JL 0x0065dd65
0065DD5E  3C 08                     CMP AL,0x8
0065DD60  0F BE C0                  MOVSX EAX,AL
0065DD63  7C 03                     JL 0x0065dd68
LAB_0065dd65:
0065DD65  8B 46 24                  MOV EAX,dword ptr [ESI + 0x24]
LAB_0065dd68:
0065DD68  8A 4D 10                  MOV CL,byte ptr [EBP + 0x10]
0065DD6B  80 F9 08                  CMP CL,0x8
0065DD6E  75 05                     JNZ 0x0065dd75
0065DD70  88 45 10                  MOV byte ptr [EBP + 0x10],AL
0065DD73  EB 0D                     JMP 0x0065dd82
LAB_0065dd75:
0065DD75  84 C9                     TEST CL,CL
0065DD77  7C 05                     JL 0x0065dd7e
0065DD79  80 F9 08                  CMP CL,0x8
0065DD7C  7E 04                     JLE 0x0065dd82
LAB_0065dd7e:
0065DD7E  C6 45 10 FF               MOV byte ptr [EBP + 0x10],0xff
LAB_0065dd82:
0065DD82  8B 42 0C                  MOV EAX,dword ptr [EDX + 0xc]
0065DD85  33 C9                     XOR ECX,ECX
0065DD87  85 C0                     TEST EAX,EAX
0065DD89  89 4D F0                  MOV dword ptr [EBP + -0x10],ECX
0065DD8C  0F 8E 18 02 00 00         JLE 0x0065dfaa
0065DD92  53                        PUSH EBX
0065DD93  EB 03                     JMP 0x0065dd98
LAB_0065dd95:
0065DD95  8B 75 EC                  MOV ESI,dword ptr [EBP + -0x14]
LAB_0065dd98:
0065DD98  3B C8                     CMP ECX,EAX
0065DD9A  73 0B                     JNC 0x0065dda7
0065DD9C  8B 42 08                  MOV EAX,dword ptr [EDX + 0x8]
0065DD9F  0F AF C1                  IMUL EAX,ECX
0065DDA2  03 42 1C                  ADD EAX,dword ptr [EDX + 0x1c]
0065DDA5  EB 02                     JMP 0x0065dda9
LAB_0065dda7:
0065DDA7  33 C0                     XOR EAX,EAX
LAB_0065dda9:
0065DDA9  66 8B 00                  MOV AX,word ptr [EAX]
0065DDAC  8A 4E 24                  MOV CL,byte ptr [ESI + 0x24]
0065DDAF  6A 01                     PUSH 0x1
0065DDB1  50                        PUSH EAX
0065DDB2  51                        PUSH ECX
0065DDB3  8B 0D 74 A1 7F 00         MOV ECX,dword ptr [0x007fa174]
0065DDB9  E8 FC 4A DA FF            CALL 0x004028ba
0065DDBE  8B F8                     MOV EDI,EAX
0065DDC0  85 FF                     TEST EDI,EDI
0065DDC2  0F 84 C9 01 00 00         JZ 0x0065df91
0065DDC8  8B 17                     MOV EDX,dword ptr [EDI]
0065DDCA  8B CF                     MOV ECX,EDI
0065DDCC  FF 92 F8 00 00 00         CALL dword ptr [EDX + 0xf8]
0065DDD2  85 C0                     TEST EAX,EAX
0065DDD4  0F 84 B7 01 00 00         JZ 0x0065df91
0065DDDA  8B 07                     MOV EAX,dword ptr [EDI]
0065DDDC  8B CF                     MOV ECX,EDI
0065DDDE  FF 50 2C                  CALL dword ptr [EAX + 0x2c]
0065DDE1  8B D8                     MOV EBX,EAX
0065DDE3  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
0065DDE6  85 C0                     TEST EAX,EAX
0065DDE8  74 52                     JZ 0x0065de3c
0065DDEA  83 FB 78                  CMP EBX,0x78
0065DDED  75 33                     JNZ 0x0065de22
0065DDEF  A9 00 00 00 80            TEST EAX,0x80000000
0065DDF4  0F 85 97 01 00 00         JNZ 0x0065df91
0065DDFA  8B F0                     MOV ESI,EAX
0065DDFC  81 E6 FF FF FF 3F         AND ESI,0x3fffffff
0065DE02  74 38                     JZ 0x0065de3c
0065DE04  8B 17                     MOV EDX,dword ptr [EDI]
0065DE06  8B CF                     MOV ECX,EDI
0065DE08  FF 52 2C                  CALL dword ptr [EDX + 0x2c]
0065DE0B  3B C3                     CMP EAX,EBX
0065DE0D  75 08                     JNZ 0x0065de17
0065DE0F  8B 87 59 02 00 00         MOV EAX,dword ptr [EDI + 0x259]
0065DE15  EB 02                     JMP 0x0065de19
LAB_0065de17:
0065DE17  33 C0                     XOR EAX,EAX
LAB_0065de19:
0065DE19  3B F0                     CMP ESI,EAX
0065DE1B  74 1F                     JZ 0x0065de3c
0065DE1D  E9 6F 01 00 00            JMP 0x0065df91
LAB_0065de22:
0065DE22  A9 00 00 00 40            TEST EAX,0x40000000
0065DE27  0F 85 64 01 00 00         JNZ 0x0065df91
0065DE2D  25 FF FF FF 3F            AND EAX,0x3fffffff
0065DE32  74 08                     JZ 0x0065de3c
0065DE34  3B C3                     CMP EAX,EBX
0065DE36  0F 85 55 01 00 00         JNZ 0x0065df91
LAB_0065de3c:
0065DE3C  8B 75 08                  MOV ESI,dword ptr [EBP + 0x8]
0065DE3F  81 FE FF FF FF 3F         CMP ESI,0x3fffffff
0065DE45  74 5F                     JZ 0x0065dea6
0065DE47  83 FB 78                  CMP EBX,0x78
0065DE4A  75 38                     JNZ 0x0065de84
0065DE4C  F7 C6 00 00 00 80         TEST ESI,0x80000000
0065DE52  0F 85 39 01 00 00         JNZ 0x0065df91
0065DE58  8B 07                     MOV EAX,dword ptr [EDI]
0065DE5A  8B CF                     MOV ECX,EDI
0065DE5C  FF 50 2C                  CALL dword ptr [EAX + 0x2c]
0065DE5F  3B C3                     CMP EAX,EBX
0065DE61  75 08                     JNZ 0x0065de6b
0065DE63  8B 87 59 02 00 00         MOV EAX,dword ptr [EDI + 0x259]
0065DE69  EB 02                     JMP 0x0065de6d
LAB_0065de6b:
0065DE6B  33 C0                     XOR EAX,EAX
LAB_0065de6d:
0065DE6D  50                        PUSH EAX
0065DE6E  E8 98 62 DA FF            CALL 0x0040410b
0065DE73  23 C6                     AND EAX,ESI
0065DE75  83 C4 04                  ADD ESP,0x4
0065DE78  A9 FF FF FF 3F            TEST EAX,0x3fffffff
0065DE7D  75 27                     JNZ 0x0065dea6
0065DE7F  E9 0D 01 00 00            JMP 0x0065df91
LAB_0065de84:
0065DE84  F7 C6 00 00 00 40         TEST ESI,0x40000000
0065DE8A  0F 85 01 01 00 00         JNZ 0x0065df91
0065DE90  53                        PUSH EBX
0065DE91  E8 75 62 DA FF            CALL 0x0040410b
0065DE96  23 C6                     AND EAX,ESI
0065DE98  83 C4 04                  ADD ESP,0x4
0065DE9B  A9 FF FF FF 3F            TEST EAX,0x3fffffff
0065DEA0  0F 84 EB 00 00 00         JZ 0x0065df91
LAB_0065dea6:
0065DEA6  8B 5D 14                  MOV EBX,dword ptr [EBP + 0x14]
0065DEA9  85 DB                     TEST EBX,EBX
0065DEAB  74 4A                     JZ 0x0065def7
0065DEAD  80 3B 00                  CMP byte ptr [EBX],0x0
0065DEB0  74 45                     JZ 0x0065def7
0065DEB2  8B 17                     MOV EDX,dword ptr [EDI]
0065DEB4  8D 45 D8                  LEA EAX,[EBP + -0x28]
0065DEB7  50                        PUSH EAX
0065DEB8  8B CF                     MOV ECX,EDI
0065DEBA  FF 52 74                  CALL dword ptr [EDX + 0x74]
0065DEBD  8D 75 D8                  LEA ESI,[EBP + -0x28]
0065DEC0  8B C3                     MOV EAX,EBX
LAB_0065dec2:
0065DEC2  8A 10                     MOV DL,byte ptr [EAX]
0065DEC4  8A 1E                     MOV BL,byte ptr [ESI]
0065DEC6  8A CA                     MOV CL,DL
0065DEC8  3A D3                     CMP DL,BL
0065DECA  75 1E                     JNZ 0x0065deea
0065DECC  84 C9                     TEST CL,CL
0065DECE  74 16                     JZ 0x0065dee6
0065DED0  8A 50 01                  MOV DL,byte ptr [EAX + 0x1]
0065DED3  8A 5E 01                  MOV BL,byte ptr [ESI + 0x1]
0065DED6  8A CA                     MOV CL,DL
0065DED8  3A D3                     CMP DL,BL
0065DEDA  75 0E                     JNZ 0x0065deea
0065DEDC  83 C0 02                  ADD EAX,0x2
0065DEDF  83 C6 02                  ADD ESI,0x2
0065DEE2  84 C9                     TEST CL,CL
0065DEE4  75 DC                     JNZ 0x0065dec2
LAB_0065dee6:
0065DEE6  33 C0                     XOR EAX,EAX
0065DEE8  EB 05                     JMP 0x0065deef
LAB_0065deea:
0065DEEA  1B C0                     SBB EAX,EAX
0065DEEC  83 D8 FF                  SBB EAX,-0x1
LAB_0065deef:
0065DEEF  85 C0                     TEST EAX,EAX
0065DEF1  0F 85 9A 00 00 00         JNZ 0x0065df91
LAB_0065def7:
0065DEF7  8A 5D 10                  MOV BL,byte ptr [EBP + 0x10]
0065DEFA  80 FB FF                  CMP BL,0xff
0065DEFD  74 12                     JZ 0x0065df11
0065DEFF  8B 07                     MOV EAX,dword ptr [EDI]
0065DF01  8B CF                     MOV ECX,EDI
0065DF03  FF 50 6C                  CALL dword ptr [EAX + 0x6c]
0065DF06  0F BE CB                  MOVSX ECX,BL
0065DF09  3B C8                     CMP ECX,EAX
0065DF0B  0F 85 80 00 00 00         JNZ 0x0065df91
LAB_0065df11:
0065DF11  66 83 7D 24 00            CMP word ptr [EBP + 0x24],0x0
0065DF16  7E 76                     JLE 0x0065df8e
0065DF18  66 83 7D 28 00            CMP word ptr [EBP + 0x28],0x0
0065DF1D  7E 6F                     JLE 0x0065df8e
0065DF1F  66 83 7D 2C 00            CMP word ptr [EBP + 0x2c],0x0
0065DF24  7E 68                     JLE 0x0065df8e
0065DF26  8D 55 FA                  LEA EDX,[EBP + -0x6]
0065DF29  8D 45 FC                  LEA EAX,[EBP + -0x4]
0065DF2C  52                        PUSH EDX
0065DF2D  8D 4D FE                  LEA ECX,[EBP + -0x2]
0065DF30  50                        PUSH EAX
0065DF31  51                        PUSH ECX
0065DF32  8B CF                     MOV ECX,EDI
0065DF34  E8 8C 39 DA FF            CALL 0x004018c5
0065DF39  66 8B 45 FE               MOV AX,word ptr [EBP + -0x2]
0065DF3D  66 8B 75 18               MOV SI,word ptr [EBP + 0x18]
0065DF41  66 3B C6                  CMP AX,SI
0065DF44  7C 4B                     JL 0x0065df91
0065DF46  66 8B 4D FC               MOV CX,word ptr [EBP + -0x4]
0065DF4A  66 8B 7D 1C               MOV DI,word ptr [EBP + 0x1c]
0065DF4E  66 3B CF                  CMP CX,DI
0065DF51  7C 3E                     JL 0x0065df91
0065DF53  66 8B 55 FA               MOV DX,word ptr [EBP + -0x6]
0065DF57  66 3B 55 20               CMP DX,word ptr [EBP + 0x20]
0065DF5B  7C 34                     JL 0x0065df91
0065DF5D  0F BF 5D 24               MOVSX EBX,word ptr [EBP + 0x24]
0065DF61  0F BF F6                  MOVSX ESI,SI
0065DF64  0F BF C0                  MOVSX EAX,AX
0065DF67  03 F3                     ADD ESI,EBX
0065DF69  3B C6                     CMP EAX,ESI
0065DF6B  7D 24                     JGE 0x0065df91
0065DF6D  0F BF 75 28               MOVSX ESI,word ptr [EBP + 0x28]
0065DF71  0F BF C7                  MOVSX EAX,DI
0065DF74  0F BF C9                  MOVSX ECX,CX
0065DF77  03 C6                     ADD EAX,ESI
0065DF79  3B C8                     CMP ECX,EAX
0065DF7B  7D 14                     JGE 0x0065df91
0065DF7D  0F BF 45 20               MOVSX EAX,word ptr [EBP + 0x20]
0065DF81  0F BF 4D 2C               MOVSX ECX,word ptr [EBP + 0x2c]
0065DF85  0F BF D2                  MOVSX EDX,DX
0065DF88  03 C1                     ADD EAX,ECX
0065DF8A  3B D0                     CMP EDX,EAX
0065DF8C  7D 03                     JGE 0x0065df91
LAB_0065df8e:
0065DF8E  FF 45 F4                  INC dword ptr [EBP + -0xc]
FUN_0065dd30::cf_common_join_0065DF91:
0065DF91  8B 55 E8                  MOV EDX,dword ptr [EBP + -0x18]
0065DF94  8B 4D F0                  MOV ECX,dword ptr [EBP + -0x10]
0065DF97  41                        INC ECX
0065DF98  8B 42 0C                  MOV EAX,dword ptr [EDX + 0xc]
0065DF9B  89 4D F0                  MOV dword ptr [EBP + -0x10],ECX
0065DF9E  3B C8                     CMP ECX,EAX
0065DFA0  0F 8C EF FD FF FF         JL 0x0065dd95
0065DFA6  8B 7D F4                  MOV EDI,dword ptr [EBP + -0xc]
0065DFA9  5B                        POP EBX
LAB_0065dfaa:
0065DFAA  52                        PUSH EDX
0065DFAB  E8 60 01 05 00            CALL 0x006ae110
LAB_0065dfb0:
0065DFB0  8B C7                     MOV EAX,EDI
0065DFB2  5F                        POP EDI
0065DFB3  5E                        POP ESI
0065DFB4  8B E5                     MOV ESP,EBP
0065DFB6  5D                        POP EBP
0065DFB7  C2 28 00                  RET 0x28
