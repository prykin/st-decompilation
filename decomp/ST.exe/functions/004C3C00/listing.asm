FUN_004c3c00:
004C3C00  55                        PUSH EBP
004C3C01  8B EC                     MOV EBP,ESP
004C3C03  81 EC B4 00 00 00         SUB ESP,0xb4
004C3C09  A1 F8 8D 85 00            MOV EAX,[0x00858df8]
004C3C0E  53                        PUSH EBX
004C3C0F  56                        PUSH ESI
004C3C10  89 4D A4                  MOV dword ptr [EBP + -0x5c],ECX
004C3C13  33 DB                     XOR EBX,EBX
004C3C15  57                        PUSH EDI
004C3C16  8D 95 50 FF FF FF         LEA EDX,[EBP + 0xffffff50]
004C3C1C  8D 8D 4C FF FF FF         LEA ECX,[EBP + 0xffffff4c]
004C3C22  53                        PUSH EBX
004C3C23  52                        PUSH EDX
004C3C24  89 5D FC                  MOV dword ptr [EBP + -0x4],EBX
004C3C27  89 5D E4                  MOV dword ptr [EBP + -0x1c],EBX
004C3C2A  89 85 4C FF FF FF         MOV dword ptr [EBP + 0xffffff4c],EAX
004C3C30  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
004C3C36  E8 B5 9B 26 00            CALL 0x0072d7f0
004C3C3B  8B F0                     MOV ESI,EAX
004C3C3D  83 C4 08                  ADD ESP,0x8
004C3C40  3B F3                     CMP ESI,EBX
004C3C42  0F 85 DA 06 00 00         JNZ 0x004c4322
004C3C48  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
004C3C4B  8B 75 A4                  MOV ESI,dword ptr [EBP + -0x5c]
004C3C4E  8B C1                     MOV EAX,ECX
004C3C50  8D 55 D8                  LEA EDX,[EBP + -0x28]
004C3C53  C1 E0 07                  SHL EAX,0x7
004C3C56  85 D2                     TEST EDX,EDX
004C3C58  8D 3C 30                  LEA EDI,[EAX + ESI*0x1]
004C3C5B  89 7D F4                  MOV dword ptr [EBP + -0xc],EDI
004C3C5E  89 9F 8D 02 00 00         MOV dword ptr [EDI + 0x28d],EBX
004C3C64  89 9F 91 02 00 00         MOV dword ptr [EDI + 0x291],EBX
004C3C6A  74 08                     JZ 0x004c3c74
004C3C6C  66 8B 46 41               MOV AX,word ptr [ESI + 0x41]
004C3C70  66 89 45 D8               MOV word ptr [EBP + -0x28],AX
LAB_004c3c74:
004C3C74  8D 55 D0                  LEA EDX,[EBP + -0x30]
004C3C77  85 D2                     TEST EDX,EDX
004C3C79  74 08                     JZ 0x004c3c83
004C3C7B  66 8B 46 43               MOV AX,word ptr [ESI + 0x43]
004C3C7F  66 89 45 D0               MOV word ptr [EBP + -0x30],AX
LAB_004c3c83:
004C3C83  8D 55 D4                  LEA EDX,[EBP + -0x2c]
004C3C86  85 D2                     TEST EDX,EDX
004C3C88  74 08                     JZ 0x004c3c92
004C3C8A  66 8B 46 45               MOV AX,word ptr [ESI + 0x45]
004C3C8E  66 89 45 D4               MOV word ptr [EBP + -0x2c],AX
LAB_004c3c92:
004C3C92  8B 86 35 02 00 00         MOV EAX,dword ptr [ESI + 0x235]
004C3C98  8D 14 41                  LEA EDX,[ECX + EAX*0x2]
004C3C9B  83 3C 95 90 2A 79 00 01   CMP dword ptr [EDX*0x4 + 0x792a90],0x1
004C3CA3  0F 85 0C 06 00 00         JNZ 0x004c42b5
004C3CA9  51                        PUSH ECX
004C3CAA  50                        PUSH EAX
004C3CAB  8B 46 24                  MOV EAX,dword ptr [ESI + 0x24]
004C3CAE  50                        PUSH EAX
004C3CAF  E8 91 1F F4 FF            CALL 0x00405c45
004C3CB4  89 45 AC                  MOV dword ptr [EBP + -0x54],EAX
004C3CB7  8B 86 B4 05 00 00         MOV EAX,dword ptr [ESI + 0x5b4]
004C3CBD  83 C4 0C                  ADD ESP,0xc
004C3CC0  8D 58 F8                  LEA EBX,[EAX + -0x8]
004C3CC3  83 C0 08                  ADD EAX,0x8
004C3CC6  3B D8                     CMP EBX,EAX
004C3CC8  89 5D EC                  MOV dword ptr [EBP + -0x14],EBX
004C3CCB  0F 8F E2 05 00 00         JG 0x004c42b3
LAB_004c3cd1:
004C3CD1  85 DB                     TEST EBX,EBX
004C3CD3  0F 8C 9F 05 00 00         JL 0x004c4278
004C3CD9  0F BF 0D 42 B2 7F 00      MOVSX ECX,word ptr [0x007fb242]
004C3CE0  3B D9                     CMP EBX,ECX
004C3CE2  0F 8D 90 05 00 00         JGE 0x004c4278
004C3CE8  8B 86 B0 05 00 00         MOV EAX,dword ptr [ESI + 0x5b0]
004C3CEE  8D 78 F8                  LEA EDI,[EAX + -0x8]
004C3CF1  8D 50 08                  LEA EDX,[EAX + 0x8]
004C3CF4  3B FA                     CMP EDI,EDX
004C3CF6  89 7D DC                  MOV dword ptr [EBP + -0x24],EDI
004C3CF9  0F 8F 79 05 00 00         JG 0x004c4278
LAB_004c3cff:
004C3CFF  85 FF                     TEST EDI,EDI
004C3D01  0F 8C 5C 05 00 00         JL 0x004c4263
004C3D07  0F BF 0D 40 B2 7F 00      MOVSX ECX,word ptr [0x007fb240]
004C3D0E  3B F9                     CMP EDI,ECX
004C3D10  0F 8D 4D 05 00 00         JGE 0x004c4263
004C3D16  8B 96 B4 05 00 00         MOV EDX,dword ptr [ESI + 0x5b4]
004C3D1C  52                        PUSH EDX
004C3D1D  50                        PUSH EAX
004C3D1E  53                        PUSH EBX
004C3D1F  57                        PUSH EDI
004C3D20  E8 B3 91 1E 00            CALL 0x006aced8
004C3D25  8B C8                     MOV ECX,EAX
004C3D27  8B 45 AC                  MOV EAX,dword ptr [EBP + -0x54]
004C3D2A  83 C4 10                  ADD ESP,0x10
004C3D2D  3B C8                     CMP ECX,EAX
004C3D2F  0F 8F 2E 05 00 00         JG 0x004c4263
004C3D35  B8 56 55 55 55            MOV EAX,0x55555556
004C3D3A  F7 E9                     IMUL ECX
004C3D3C  8B 4D F4                  MOV ECX,dword ptr [EBP + -0xc]
004C3D3F  8B C2                     MOV EAX,EDX
004C3D41  C1 E8 1F                  SHR EAX,0x1f
004C3D44  03 D0                     ADD EDX,EAX
004C3D46  8B 81 81 02 00 00         MOV EAX,dword ptr [ECX + 0x281]
004C3D4C  83 F8 03                  CMP EAX,0x3
004C3D4F  89 55 E0                  MOV dword ptr [EBP + -0x20],EDX
004C3D52  7E 07                     JLE 0x004c3d5b
004C3D54  C7 45 E0 05 00 00 00      MOV dword ptr [EBP + -0x20],0x5
LAB_004c3d5b:
004C3D5B  8B 8E B8 05 00 00         MOV ECX,dword ptr [ESI + 0x5b8]
004C3D61  8B 55 E0                  MOV EDX,dword ptr [EBP + -0x20]
004C3D64  8B C1                     MOV EAX,ECX
004C3D66  2B C2                     SUB EAX,EDX
004C3D68  8D 4C 11 01               LEA ECX,[ECX + EDX*0x1 + 0x1]
004C3D6C  48                        DEC EAX
004C3D6D  3B C1                     CMP EAX,ECX
004C3D6F  89 45 C8                  MOV dword ptr [EBP + -0x38],EAX
004C3D72  0F 8F EB 04 00 00         JG 0x004c4263
LAB_004c3d78:
004C3D78  66 8B 0D 40 B2 7F 00      MOV CX,word ptr [0x007fb240]
004C3D7F  85 C0                     TEST EAX,EAX
004C3D81  0F 8C C3 04 00 00         JL 0x004c424a
004C3D87  83 F8 05                  CMP EAX,0x5
004C3D8A  0F 8D BA 04 00 00         JGE 0x004c424a
004C3D90  66 85 FF                  TEST DI,DI
004C3D93  7C 4C                     JL 0x004c3de1
004C3D95  66 3B F9                  CMP DI,CX
004C3D98  7D 47                     JGE 0x004c3de1
004C3D9A  66 85 DB                  TEST BX,BX
004C3D9D  7C 42                     JL 0x004c3de1
004C3D9F  66 3B 1D 42 B2 7F 00      CMP BX,word ptr [0x007fb242]
004C3DA6  7D 39                     JGE 0x004c3de1
004C3DA8  66 85 C0                  TEST AX,AX
004C3DAB  7C 34                     JL 0x004c3de1
004C3DAD  66 3B 05 44 B2 7F 00      CMP AX,word ptr [0x007fb244]
004C3DB4  7D 2B                     JGE 0x004c3de1
004C3DB6  0F BF D3                  MOVSX EDX,BX
004C3DB9  0F BF 1D 46 B2 7F 00      MOVSX EBX,word ptr [0x007fb246]
004C3DC0  0F BF C9                  MOVSX ECX,CX
004C3DC3  0F AF D1                  IMUL EDX,ECX
004C3DC6  0F BF C8                  MOVSX ECX,AX
004C3DC9  0F AF CB                  IMUL ECX,EBX
004C3DCC  03 D1                     ADD EDX,ECX
004C3DCE  8B 5D EC                  MOV EBX,dword ptr [EBP + -0x14]
004C3DD1  0F BF CF                  MOVSX ECX,DI
004C3DD4  03 D1                     ADD EDX,ECX
004C3DD6  8B 0D 48 B2 7F 00         MOV ECX,dword ptr [0x007fb248]
004C3DDC  8B 0C D1                  MOV ECX,dword ptr [ECX + EDX*0x8]
004C3DDF  EB 02                     JMP 0x004c3de3
LAB_004c3de1:
004C3DE1  33 C9                     XOR ECX,ECX
LAB_004c3de3:
004C3DE3  85 C9                     TEST ECX,ECX
004C3DE5  89 4D FC                  MOV dword ptr [EBP + -0x4],ECX
004C3DE8  0F 84 5C 04 00 00         JZ 0x004c424a
004C3DEE  3B CE                     CMP ECX,ESI
004C3DF0  0F 84 54 04 00 00         JZ 0x004c424a
004C3DF6  8B 11                     MOV EDX,dword ptr [ECX]
004C3DF8  FF 92 F8 00 00 00         CALL dword ptr [EDX + 0xf8]
004C3DFE  85 C0                     TEST EAX,EAX
004C3E00  0F 84 3B 04 00 00         JZ 0x004c4241
004C3E06  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
004C3E09  81 79 24 FF 00 00 00      CMP dword ptr [ECX + 0x24],0xff
004C3E10  0F 84 2B 04 00 00         JZ 0x004c4241
004C3E16  8B 56 24                  MOV EDX,dword ptr [ESI + 0x24]
004C3E19  8B 01                     MOV EAX,dword ptr [ECX]
004C3E1B  52                        PUSH EDX
004C3E1C  FF 90 F4 00 00 00         CALL dword ptr [EAX + 0xf4]
004C3E22  85 C0                     TEST EAX,EAX
004C3E24  0F 84 17 04 00 00         JZ 0x004c4241
004C3E2A  8D 45 FA                  LEA EAX,[EBP + -0x6]
004C3E2D  8D 4D F0                  LEA ECX,[EBP + -0x10]
004C3E30  50                        PUSH EAX
004C3E31  8D 55 F2                  LEA EDX,[EBP + -0xe]
004C3E34  51                        PUSH ECX
004C3E35  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
004C3E38  52                        PUSH EDX
004C3E39  E8 87 DA F3 FF            CALL 0x004018c5
004C3E3E  8D 45 E8                  LEA EAX,[EBP + -0x18]
004C3E41  8D 4D CC                  LEA ECX,[EBP + -0x34]
004C3E44  50                        PUSH EAX
004C3E45  8D 55 C4                  LEA EDX,[EBP + -0x3c]
004C3E48  51                        PUSH ECX
004C3E49  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
004C3E4C  52                        PUSH EDX
004C3E4D  E8 91 F3 F3 FF            CALL 0x004031e3
004C3E52  0F BF 7D D4               MOVSX EDI,word ptr [EBP + -0x2c]
004C3E56  0F BF 45 D0               MOVSX EAX,word ptr [EBP + -0x30]
004C3E5A  0F BF 4D D8               MOVSX ECX,word ptr [EBP + -0x28]
004C3E5E  0F BF 55 E8               MOVSX EDX,word ptr [EBP + -0x18]
004C3E62  57                        PUSH EDI
004C3E63  50                        PUSH EAX
004C3E64  0F BF 45 CC               MOVSX EAX,word ptr [EBP + -0x34]
004C3E68  51                        PUSH ECX
004C3E69  52                        PUSH EDX
004C3E6A  0F BF 4D C4               MOVSX ECX,word ptr [EBP + -0x3c]
004C3E6E  50                        PUSH EAX
004C3E6F  51                        PUSH ECX
004C3E70  E8 98 90 1E 00            CALL 0x006acf0d
004C3E75  8B C8                     MOV ECX,EAX
004C3E77  83 C4 18                  ADD ESP,0x18
004C3E7A  0F BF 45 E8               MOVSX EAX,word ptr [EBP + -0x18]
004C3E7E  2B C7                     SUB EAX,EDI
004C3E80  99                        CDQ
004C3E81  33 C2                     XOR EAX,EDX
004C3E83  2B C2                     SUB EAX,EDX
004C3E85  8D 04 80                  LEA EAX,[EAX + EAX*0x4]
004C3E88  D1 E0                     SHL EAX,0x1
004C3E8A  99                        CDQ
004C3E8B  F7 F9                     IDIV ECX
004C3E8D  8B 4D F4                  MOV ECX,dword ptr [EBP + -0xc]
004C3E90  3B 81 81 02 00 00         CMP EAX,dword ptr [ECX + 0x281]
004C3E96  0F 8F A5 03 00 00         JG 0x004c4241
004C3E9C  8B 15 38 2A 80 00         MOV EDX,dword ptr [0x00802a38]
004C3EA2  8B 82 E4 00 00 00         MOV EAX,dword ptr [EDX + 0xe4]
004C3EA8  89 81 95 02 00 00         MOV dword ptr [ECX + 0x295],EAX
004C3EAE  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
004C3EB1  85 C0                     TEST EAX,EAX
004C3EB3  0F 84 C7 01 00 00         JZ 0x004c4080
004C3EB9  8B 86 55 02 00 00         MOV EAX,dword ptr [ESI + 0x255]
004C3EBF  85 C0                     TEST EAX,EAX
004C3EC1  0F 84 B9 01 00 00         JZ 0x004c4080
004C3EC7  8B 45 D4                  MOV EAX,dword ptr [EBP + -0x2c]
004C3ECA  8B 4D D0                  MOV ECX,dword ptr [EBP + -0x30]
004C3ECD  50                        PUSH EAX
004C3ECE  8B 45 D8                  MOV EAX,dword ptr [EBP + -0x28]
004C3ED1  51                        PUSH ECX
004C3ED2  50                        PUSH EAX
004C3ED3  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
004C3ED6  8B 16                     MOV EDX,dword ptr [ESI]
004C3ED8  66 8B 48 45               MOV CX,word ptr [EAX + 0x45]
004C3EDC  51                        PUSH ECX
004C3EDD  66 8B 48 43               MOV CX,word ptr [EAX + 0x43]
004C3EE1  66 8B 40 41               MOV AX,word ptr [EAX + 0x41]
004C3EE5  51                        PUSH ECX
004C3EE6  50                        PUSH EAX
004C3EE7  8B CE                     MOV ECX,ESI
004C3EE9  FF 52 10                  CALL dword ptr [EDX + 0x10]
004C3EEC  0F BF C0                  MOVSX EAX,AX
004C3EEF  05 B4 00 00 00            ADD EAX,0xb4
004C3EF4  B9 68 01 00 00            MOV ECX,0x168
004C3EF9  99                        CDQ
004C3EFA  F7 F9                     IDIV ECX
004C3EFC  B8 89 88 88 88            MOV EAX,0x88888889
004C3F01  8B BE 59 02 00 00         MOV EDI,dword ptr [ESI + 0x259]
004C3F07  8B CA                     MOV ECX,EDX
004C3F09  F7 E9                     IMUL ECX
004C3F0B  03 D1                     ADD EDX,ECX
004C3F0D  C1 FA 03                  SAR EDX,0x3
004C3F10  8B C2                     MOV EAX,EDX
004C3F12  C1 E8 1F                  SHR EAX,0x1f
004C3F15  03 D0                     ADD EDX,EAX
004C3F17  B8 89 88 88 88            MOV EAX,0x88888889
004C3F1C  8B CA                     MOV ECX,EDX
004C3F1E  F7 EF                     IMUL EDI
004C3F20  03 D7                     ADD EDX,EDI
004C3F22  8D 1C 49                  LEA EBX,[ECX + ECX*0x2]
004C3F25  C1 FA 03                  SAR EDX,0x3
004C3F28  8B C2                     MOV EAX,EDX
004C3F2A  C1 E8 1F                  SHR EAX,0x1f
004C3F2D  03 D0                     ADD EDX,EAX
004C3F2F  8D 14 DA                  LEA EDX,[EDX + EBX*0x8]
004C3F32  8B 04 95 C8 E8 7B 00      MOV EAX,dword ptr [EDX*0x4 + 0x7be8c8]
004C3F39  99                        CDQ
004C3F3A  33 C2                     XOR EAX,EDX
004C3F3C  2B C2                     SUB EAX,EDX
004C3F3E  8B 55 F4                  MOV EDX,dword ptr [EBP + -0xc]
004C3F41  3B 82 79 02 00 00         CMP EAX,dword ptr [EDX + 0x279]
004C3F47  0F 8F F4 02 00 00         JG 0x004c4241
004C3F4D  8B 86 35 02 00 00         MOV EAX,dword ptr [ESI + 0x235]
004C3F53  8B 5D 08                  MOV EBX,dword ptr [EBP + 0x8]
004C3F56  8D 04 43                  LEA EAX,[EBX + EAX*0x2]
004C3F59  8D 14 40                  LEA EDX,[EAX + EAX*0x2]
004C3F5C  81 3C 95 A0 2C 79 00 B0 00 00 00  CMP dword ptr [EDX*0x4 + 0x792ca0],0xb0
004C3F67  75 17                     JNZ 0x004c3f80
004C3F69  8B C1                     MOV EAX,ECX
004C3F6B  B9 03 00 00 00            MOV ECX,0x3
004C3F70  99                        CDQ
004C3F71  F7 F9                     IDIV ECX
004C3F73  85 D2                     TEST EDX,EDX
004C3F75  0F 85 C6 02 00 00         JNZ 0x004c4241
004C3F7B  E9 00 01 00 00            JMP 0x004c4080
LAB_004c3f80:
004C3F80  8D 14 80                  LEA EDX,[EAX + EAX*0x4]
004C3F83  33 C9                     XOR ECX,ECX
004C3F85  89 4D BC                  MOV dword ptr [EBP + -0x44],ECX
004C3F88  89 4D B8                  MOV dword ptr [EBP + -0x48],ECX
004C3F8B  8D 04 50                  LEA EAX,[EAX + EDX*0x2]
004C3F8E  D1 E0                     SHL EAX,0x1
004C3F90  39 88 D0 32 79 00         CMP dword ptr [EAX + 0x7932d0],ECX
004C3F96  0F 8E D9 00 00 00         JLE 0x004c4075
004C3F9C  33 FF                     XOR EDI,EDI
LAB_004c3f9e:
004C3F9E  66 8B 8E 59 02 00 00      MOV CX,word ptr [ESI + 0x259]
004C3FA5  8D 94 38 D4 32 79 00      LEA EDX,[EAX + EDI*0x1 + 0x7932d4]
004C3FAC  66 F7 D9                  NEG CX
004C3FAF  51                        PUSH ECX
004C3FB0  8B 0A                     MOV ECX,dword ptr [EDX]
004C3FB2  83 EC 08                  SUB ESP,0x8
004C3FB5  66 8B 52 04               MOV DX,word ptr [EDX + 0x4]
004C3FB9  8B C4                     MOV EAX,ESP
004C3FBB  89 08                     MOV dword ptr [EAX],ECX
004C3FBD  8B CE                     MOV ECX,ESI
004C3FBF  66 89 50 04               MOV word ptr [EAX + 0x4],DX
004C3FC3  8D 45 90                  LEA EAX,[EBP + -0x70]
004C3FC6  50                        PUSH EAX
004C3FC7  E8 60 F4 F3 FF            CALL 0x0040342c
004C3FCC  8B 08                     MOV ECX,dword ptr [EAX]
004C3FCE  89 4D 9C                  MOV dword ptr [EBP + -0x64],ECX
004C3FD1  66 8B 50 04               MOV DX,word ptr [EAX + 0x4]
004C3FD5  8B 86 20 04 00 00         MOV EAX,dword ptr [ESI + 0x420]
004C3FDB  50                        PUSH EAX
004C3FDC  8B 86 35 02 00 00         MOV EAX,dword ptr [ESI + 0x235]
004C3FE2  66 89 55 A0               MOV word ptr [EBP + -0x60],DX
004C3FE6  8D 55 C0                  LEA EDX,[EBP + -0x40]
004C3FE9  8D 04 43                  LEA EAX,[EBX + EAX*0x2]
004C3FEC  52                        PUSH EDX
004C3FED  8D 14 40                  LEA EDX,[EAX + EAX*0x2]
004C3FF0  8B 04 95 A0 2C 79 00      MOV EAX,dword ptr [EDX*0x4 + 0x792ca0]
004C3FF7  8B 55 E8                  MOV EDX,dword ptr [EBP + -0x18]
004C3FFA  50                        PUSH EAX
004C3FFB  8B 45 CC                  MOV EAX,dword ptr [EBP + -0x34]
004C3FFE  52                        PUSH EDX
004C3FFF  8B 55 C4                  MOV EDX,dword ptr [EBP + -0x3c]
004C4002  50                        PUSH EAX
004C4003  8B 45 A0                  MOV EAX,dword ptr [EBP + -0x60]
004C4006  52                        PUSH EDX
004C4007  8B 55 D4                  MOV EDX,dword ptr [EBP + -0x2c]
004C400A  03 C2                     ADD EAX,EDX
004C400C  8B 55 D0                  MOV EDX,dword ptr [EBP + -0x30]
004C400F  50                        PUSH EAX
004C4010  8B 45 9E                  MOV EAX,dword ptr [EBP + -0x62]
004C4013  03 C2                     ADD EAX,EDX
004C4015  50                        PUSH EAX
004C4016  8B 45 D8                  MOV EAX,dword ptr [EBP + -0x28]
004C4019  03 C8                     ADD ECX,EAX
004C401B  51                        PUSH ECX
004C401C  8B CE                     MOV ECX,ESI
004C401E  E8 E4 18 F4 FF            CALL 0x00405907
004C4023  85 C0                     TEST EAX,EAX
004C4025  75 20                     JNZ 0x004c4047
004C4027  8B 4D F4                  MOV ECX,dword ptr [EBP + -0xc]
004C402A  F6 81 65 02 00 00 02      TEST byte ptr [ECX + 0x265],0x2
004C4031  74 1B                     JZ 0x004c404e
004C4033  8B 45 C0                  MOV EAX,dword ptr [EBP + -0x40]
004C4036  85 C0                     TEST EAX,EAX
004C4038  74 14                     JZ 0x004c404e
004C403A  8B 50 18                  MOV EDX,dword ptr [EAX + 0x18]
004C403D  8B 81 6D 02 00 00         MOV EAX,dword ptr [ECX + 0x26d]
004C4043  3B D0                     CMP EDX,EAX
004C4045  75 07                     JNZ 0x004c404e
LAB_004c4047:
004C4047  C7 45 BC 01 00 00 00      MOV dword ptr [EBP + -0x44],0x1
LAB_004c404e:
004C404E  8B 86 35 02 00 00         MOV EAX,dword ptr [ESI + 0x235]
004C4054  8B 4D B8                  MOV ECX,dword ptr [EBP + -0x48]
004C4057  41                        INC ECX
004C4058  83 C7 06                  ADD EDI,0x6
004C405B  8D 04 43                  LEA EAX,[EBX + EAX*0x2]
004C405E  89 4D B8                  MOV dword ptr [EBP + -0x48],ECX
004C4061  8D 14 80                  LEA EDX,[EAX + EAX*0x4]
004C4064  8D 04 50                  LEA EAX,[EAX + EDX*0x2]
004C4067  D1 E0                     SHL EAX,0x1
004C4069  3B 88 D0 32 79 00         CMP ECX,dword ptr [EAX + 0x7932d0]
004C406F  0F 8C 29 FF FF FF         JL 0x004c3f9e
LAB_004c4075:
004C4075  8B 45 BC                  MOV EAX,dword ptr [EBP + -0x44]
004C4078  85 C0                     TEST EAX,EAX
004C407A  0F 84 C1 01 00 00         JZ 0x004c4241
LAB_004c4080:
004C4080  8B 55 F4                  MOV EDX,dword ptr [EBP + -0xc]
004C4083  8B 7D FC                  MOV EDI,dword ptr [EBP + -0x4]
004C4086  8B 82 65 02 00 00         MOV EAX,dword ptr [EDX + 0x265]
004C408C  A8 02                     TEST AL,0x2
004C408E  74 11                     JZ 0x004c40a1
004C4090  8B 4F 18                  MOV ECX,dword ptr [EDI + 0x18]
004C4093  8B 9A 6D 02 00 00         MOV EBX,dword ptr [EDX + 0x26d]
004C4099  3B CB                     CMP ECX,EBX
004C409B  0F 84 EE 01 00 00         JZ 0x004c428f
LAB_004c40a1:
004C40A1  A8 01                     TEST AL,0x1
004C40A3  0F 84 98 01 00 00         JZ 0x004c4241
004C40A9  8B 86 20 04 00 00         MOV EAX,dword ptr [ESI + 0x420]
004C40AF  85 C0                     TEST EAX,EAX
004C40B1  0F 85 EE 00 00 00         JNZ 0x004c41a5
004C40B7  8B 47 24                  MOV EAX,dword ptr [EDI + 0x24]
004C40BA  83 F8 08                  CMP EAX,0x8
004C40BD  0F 83 7E 01 00 00         JNC 0x004c4241
004C40C3  8B 0D 38 2A 80 00         MOV ECX,dword ptr [0x00802a38]
004C40C9  85 C9                     TEST ECX,ECX
004C40CB  74 11                     JZ 0x004c40de
004C40CD  8D 04 C0                  LEA EAX,[EAX + EAX*0x8]
004C40D0  80 BC C0 E9 87 80 00 08   CMP byte ptr [EAX + EAX*0x8 + 0x8087e9],0x8
004C40D8  0F 83 63 01 00 00         JNC 0x004c4241
LAB_004c40de:
004C40DE  8A 0D 8F 8A 80 00         MOV CL,byte ptr [0x00808a8f]
004C40E4  8A 47 24                  MOV AL,byte ptr [EDI + 0x24]
004C40E7  8A 56 24                  MOV DL,byte ptr [ESI + 0x24]
004C40EA  88 45 B4                  MOV byte ptr [EBP + -0x4c],AL
004C40ED  84 C9                     TEST CL,CL
004C40EF  88 55 B0                  MOV byte ptr [EBP + -0x50],DL
004C40F2  74 2D                     JZ 0x004c4121
004C40F4  8B 45 B0                  MOV EAX,dword ptr [EBP + -0x50]
004C40F7  33 C9                     XOR ECX,ECX
004C40F9  25 FF 00 00 00            AND EAX,0xff
004C40FE  8D 14 C0                  LEA EDX,[EAX + EAX*0x8]
004C4101  8B 45 B4                  MOV EAX,dword ptr [EBP + -0x4c]
004C4104  25 FF 00 00 00            AND EAX,0xff
004C4109  8A 94 D2 EA 87 80 00      MOV DL,byte ptr [EDX + EDX*0x8 + 0x8087ea]
004C4110  8D 04 C0                  LEA EAX,[EAX + EAX*0x8]
004C4113  3A 94 C0 EA 87 80 00      CMP DL,byte ptr [EAX + EAX*0x8 + 0x8087ea]
004C411A  0F 95 C1                  SETNZ CL
004C411D  8B C1                     MOV EAX,ECX
004C411F  EB 7C                     JMP 0x004c419d
LAB_004c4121:
004C4121  3A C2                     CMP AL,DL
004C4123  74 6D                     JZ 0x004c4192
004C4125  8B 45 B4                  MOV EAX,dword ptr [EBP + -0x4c]
004C4128  8B 55 B0                  MOV EDX,dword ptr [EBP + -0x50]
004C412B  25 FF 00 00 00            AND EAX,0xff
004C4130  81 E2 FF 00 00 00         AND EDX,0xff
004C4136  8A 9C C2 4F 8A 80 00      MOV BL,byte ptr [EDX + EAX*0x8 + 0x808a4f]
004C413D  84 DB                     TEST BL,BL
004C413F  75 12                     JNZ 0x004c4153
004C4141  8A 8C D0 4F 8A 80 00      MOV CL,byte ptr [EAX + EDX*0x8 + 0x808a4f]
004C4148  84 C9                     TEST CL,CL
004C414A  75 07                     JNZ 0x004c4153
004C414C  B8 FE FF FF FF            MOV EAX,0xfffffffe
004C4151  EB 41                     JMP 0x004c4194
LAB_004c4153:
004C4153  80 FB 01                  CMP BL,0x1
004C4156  75 10                     JNZ 0x004c4168
004C4158  8A 8C D0 4F 8A 80 00      MOV CL,byte ptr [EAX + EDX*0x8 + 0x808a4f]
004C415F  84 C9                     TEST CL,CL
004C4161  75 05                     JNZ 0x004c4168
004C4163  83 C8 FF                  OR EAX,0xffffffff
004C4166  EB 2C                     JMP 0x004c4194
LAB_004c4168:
004C4168  84 DB                     TEST BL,BL
004C416A  75 11                     JNZ 0x004c417d
004C416C  80 BC D0 4F 8A 80 00 01   CMP byte ptr [EAX + EDX*0x8 + 0x808a4f],0x1
004C4174  75 07                     JNZ 0x004c417d
004C4176  B8 01 00 00 00            MOV EAX,0x1
004C417B  EB 17                     JMP 0x004c4194
LAB_004c417d:
004C417D  80 FB 01                  CMP BL,0x1
004C4180  75 10                     JNZ 0x004c4192
004C4182  38 9C D0 4F 8A 80 00      CMP byte ptr [EAX + EDX*0x8 + 0x808a4f],BL
004C4189  75 07                     JNZ 0x004c4192
004C418B  B8 02 00 00 00            MOV EAX,0x2
004C4190  EB 02                     JMP 0x004c4194
LAB_004c4192:
004C4192  33 C0                     XOR EAX,EAX
LAB_004c4194:
004C4194  33 D2                     XOR EDX,EDX
004C4196  85 C0                     TEST EAX,EAX
004C4198  0F 9C C2                  SETL DL
004C419B  8B C2                     MOV EAX,EDX
LAB_004c419d:
004C419D  85 C0                     TEST EAX,EAX
004C419F  0F 84 9C 00 00 00         JZ 0x004c4241
LAB_004c41a5:
004C41A5  8B 07                     MOV EAX,dword ptr [EDI]
004C41A7  8B CF                     MOV ECX,EDI
004C41A9  FF 90 F0 00 00 00         CALL dword ptr [EAX + 0xf0]
004C41AF  85 C0                     TEST EAX,EAX
004C41B1  0F 84 8A 00 00 00         JZ 0x004c4241
004C41B7  8B 4D C8                  MOV ECX,dword ptr [EBP + -0x38]
004C41BA  8B 55 EC                  MOV EDX,dword ptr [EBP + -0x14]
004C41BD  8B 45 DC                  MOV EAX,dword ptr [EBP + -0x24]
004C41C0  51                        PUSH ECX
004C41C1  8B 8E B8 05 00 00         MOV ECX,dword ptr [ESI + 0x5b8]
004C41C7  52                        PUSH EDX
004C41C8  8B 96 B4 05 00 00         MOV EDX,dword ptr [ESI + 0x5b4]
004C41CE  50                        PUSH EAX
004C41CF  8B 86 B0 05 00 00         MOV EAX,dword ptr [ESI + 0x5b0]
004C41D5  51                        PUSH ECX
004C41D6  52                        PUSH EDX
004C41D7  50                        PUSH EAX
004C41D8  E8 F3 6B 1E 00            CALL 0x006aadd0
004C41DD  8B 7D F4                  MOV EDI,dword ptr [EBP + -0xc]
004C41E0  8B D8                     MOV EBX,EAX
004C41E2  8B 87 69 02 00 00         MOV EAX,dword ptr [EDI + 0x269]
004C41E8  85 C0                     TEST EAX,EAX
004C41EA  74 0A                     JZ 0x004c41f6
004C41EC  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
004C41EF  8B 11                     MOV EDX,dword ptr [ECX]
004C41F1  FF 52 7C                  CALL dword ptr [EDX + 0x7c]
004C41F4  EB 09                     JMP 0x004c41ff
LAB_004c41f6:
004C41F6  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
004C41F9  8B 80 15 02 00 00         MOV EAX,dword ptr [EAX + 0x215]
LAB_004c41ff:
004C41FF  8B 4D E4                  MOV ECX,dword ptr [EBP + -0x1c]
004C4202  85 C9                     TEST ECX,ECX
004C4204  74 11                     JZ 0x004c4217
004C4206  8B 4D 98                  MOV ECX,dword ptr [EBP + -0x68]
004C4209  3B C1                     CMP EAX,ECX
004C420B  7F 0A                     JG 0x004c4217
004C420D  75 32                     JNZ 0x004c4241
004C420F  3B 5D A8                  CMP EBX,dword ptr [EBP + -0x58]
004C4212  7D 2D                     JGE 0x004c4241
004C4214  8B 7D F4                  MOV EDI,dword ptr [EBP + -0xc]
LAB_004c4217:
004C4217  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
004C421A  89 45 98                  MOV dword ptr [EBP + -0x68],EAX
004C421D  0F BF 55 F2               MOVSX EDX,word ptr [EBP + -0xe]
004C4221  0F BF 45 F0               MOVSX EAX,word ptr [EBP + -0x10]
004C4225  89 4D E4                  MOV dword ptr [EBP + -0x1c],ECX
004C4228  89 97 D5 02 00 00         MOV dword ptr [EDI + 0x2d5],EDX
004C422E  0F BF 4D FA               MOVSX ECX,word ptr [EBP + -0x6]
004C4232  89 87 D9 02 00 00         MOV dword ptr [EDI + 0x2d9],EAX
004C4238  89 5D A8                  MOV dword ptr [EBP + -0x58],EBX
004C423B  89 8F DD 02 00 00         MOV dword ptr [EDI + 0x2dd],ECX
LAB_004c4241:
004C4241  8B 5D EC                  MOV EBX,dword ptr [EBP + -0x14]
004C4244  8B 7D DC                  MOV EDI,dword ptr [EBP + -0x24]
004C4247  8B 45 C8                  MOV EAX,dword ptr [EBP + -0x38]
LAB_004c424a:
004C424A  8B 96 B8 05 00 00         MOV EDX,dword ptr [ESI + 0x5b8]
004C4250  8B 4D E0                  MOV ECX,dword ptr [EBP + -0x20]
004C4253  40                        INC EAX
004C4254  8D 54 0A 01               LEA EDX,[EDX + ECX*0x1 + 0x1]
004C4258  89 45 C8                  MOV dword ptr [EBP + -0x38],EAX
004C425B  3B C2                     CMP EAX,EDX
004C425D  0F 8E 15 FB FF FF         JLE 0x004c3d78
LAB_004c4263:
004C4263  8B 86 B0 05 00 00         MOV EAX,dword ptr [ESI + 0x5b0]
004C4269  47                        INC EDI
004C426A  89 7D DC                  MOV dword ptr [EBP + -0x24],EDI
004C426D  8D 48 08                  LEA ECX,[EAX + 0x8]
004C4270  3B F9                     CMP EDI,ECX
004C4272  0F 8E 87 FA FF FF         JLE 0x004c3cff
LAB_004c4278:
004C4278  8B 96 B4 05 00 00         MOV EDX,dword ptr [ESI + 0x5b4]
004C427E  43                        INC EBX
004C427F  83 C2 08                  ADD EDX,0x8
004C4282  89 5D EC                  MOV dword ptr [EBP + -0x14],EBX
004C4285  3B DA                     CMP EBX,EDX
004C4287  0F 8E 44 FA FF FF         JLE 0x004c3cd1
004C428D  EB 21                     JMP 0x004c42b0
LAB_004c428f:
004C428F  0F BF 45 F2               MOVSX EAX,word ptr [EBP + -0xe]
004C4293  0F BF 4D F0               MOVSX ECX,word ptr [EBP + -0x10]
004C4297  89 82 D5 02 00 00         MOV dword ptr [EDX + 0x2d5],EAX
004C429D  89 8A D9 02 00 00         MOV dword ptr [EDX + 0x2d9],ECX
004C42A3  0F BF 45 FA               MOVSX EAX,word ptr [EBP + -0x6]
004C42A7  89 7D E4                  MOV dword ptr [EBP + -0x1c],EDI
004C42AA  89 82 DD 02 00 00         MOV dword ptr [EDX + 0x2dd],EAX
LAB_004c42b0:
004C42B0  8B 7D F4                  MOV EDI,dword ptr [EBP + -0xc]
LAB_004c42b3:
004C42B3  33 DB                     XOR EBX,EBX
LAB_004c42b5:
004C42B5  8B 45 E4                  MOV EAX,dword ptr [EBP + -0x1c]
004C42B8  3B C3                     CMP EAX,EBX
004C42BA  74 50                     JZ 0x004c430c
004C42BC  8B 48 18                  MOV ECX,dword ptr [EAX + 0x18]
004C42BF  89 8F 8D 02 00 00         MOV dword ptr [EDI + 0x28d],ECX
004C42C5  89 87 91 02 00 00         MOV dword ptr [EDI + 0x291],EAX
004C42CB  F6 87 65 02 00 00 02      TEST byte ptr [EDI + 0x265],0x2
004C42D2  74 38                     JZ 0x004c430c
004C42D4  8B 87 6D 02 00 00         MOV EAX,dword ptr [EDI + 0x26d]
004C42DA  8B 8F 8D 02 00 00         MOV ECX,dword ptr [EDI + 0x28d]
004C42E0  3B C8                     CMP ECX,EAX
004C42E2  74 28                     JZ 0x004c430c
004C42E4  8B 0D 38 2A 80 00         MOV ECX,dword ptr [0x00802a38]
004C42EA  8D 55 FC                  LEA EDX,[EBP + -0x4]
004C42ED  52                        PUSH EDX
004C42EE  50                        PUSH EAX
004C42EF  E8 DC 1F 22 00            CALL 0x006e62d0
004C42F4  85 C0                     TEST EAX,EAX
004C42F6  74 14                     JZ 0x004c430c
004C42F8  8B 87 65 02 00 00         MOV EAX,dword ptr [EDI + 0x265]
004C42FE  24 FD                     AND AL,0xfd
004C4300  89 87 65 02 00 00         MOV dword ptr [EDI + 0x265],EAX
004C4306  89 9F 6D 02 00 00         MOV dword ptr [EDI + 0x26d],EBX
LAB_004c430c:
004C430C  8B 85 4C FF FF FF         MOV EAX,dword ptr [EBP + 0xffffff4c]
004C4312  A3 F8 8D 85 00            MOV [0x00858df8],EAX
004C4317  33 C0                     XOR EAX,EAX
004C4319  5F                        POP EDI
004C431A  5E                        POP ESI
004C431B  5B                        POP EBX
004C431C  8B E5                     MOV ESP,EBP
004C431E  5D                        POP EBP
004C431F  C2 08 00                  RET 0x8
LAB_004c4322:
004C4322  8B 8D 4C FF FF FF         MOV ECX,dword ptr [EBP + 0xffffff4c]
004C4328  68 58 C9 7A 00            PUSH 0x7ac958
004C432D  68 CC 4C 7A 00            PUSH 0x7a4ccc
004C4332  56                        PUSH ESI
004C4333  53                        PUSH EBX
004C4334  68 26 01 00 00            PUSH 0x126
004C4339  68 10 C9 7A 00            PUSH 0x7ac910
004C433E  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
004C4344  E8 87 91 1E 00            CALL 0x006ad4d0
004C4349  83 C4 18                  ADD ESP,0x18
004C434C  85 C0                     TEST EAX,EAX
004C434E  74 01                     JZ 0x004c4351
004C4350  CC                        INT3
LAB_004c4351:
004C4351  68 27 01 00 00            PUSH 0x127
004C4356  68 10 C9 7A 00            PUSH 0x7ac910
004C435B  53                        PUSH EBX
004C435C  56                        PUSH ESI
004C435D  E8 DE 1A 1E 00            CALL 0x006a5e40
004C4362  8B C6                     MOV EAX,ESI
004C4364  5F                        POP EDI
004C4365  5E                        POP ESI
004C4366  5B                        POP EBX
004C4367  8B E5                     MOV ESP,EBP
004C4369  5D                        POP EBP
004C436A  C2 08 00                  RET 0x8
