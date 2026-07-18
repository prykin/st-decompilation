FUN_0069f8d0:
0069F8D0  55                        PUSH EBP
0069F8D1  8B EC                     MOV EBP,ESP
0069F8D3  83 EC 40                  SUB ESP,0x40
0069F8D6  33 C0                     XOR EAX,EAX
0069F8D8  53                        PUSH EBX
0069F8D9  56                        PUSH ESI
0069F8DA  8B 75 14                  MOV ESI,dword ptr [EBP + 0x14]
0069F8DD  89 45 C8                  MOV dword ptr [EBP + -0x38],EAX
0069F8E0  89 45 C4                  MOV dword ptr [EBP + -0x3c],EAX
0069F8E3  89 45 DC                  MOV dword ptr [EBP + -0x24],EAX
0069F8E6  89 45 EC                  MOV dword ptr [EBP + -0x14],EAX
0069F8E9  89 45 E4                  MOV dword ptr [EBP + -0x1c],EAX
0069F8EC  8B 45 1C                  MOV EAX,dword ptr [EBP + 0x1c]
0069F8EF  3B F0                     CMP ESI,EAX
0069F8F1  57                        PUSH EDI
0069F8F2  BB 01 00 00 00            MOV EBX,0x1
0069F8F7  75 0E                     JNZ 0x0069f907
0069F8F9  8B 7D 18                  MOV EDI,dword ptr [EBP + 0x18]
0069F8FC  8B 45 20                  MOV EAX,dword ptr [EBP + 0x20]
0069F8FF  3B F8                     CMP EDI,EAX
0069F901  0F 84 68 02 00 00         JZ 0x0069fb6f
LAB_0069f907:
0069F907  68 00 04 00 00            PUSH 0x400
0069F90C  C7 45 E0 80 00 00 00      MOV dword ptr [EBP + -0x20],0x80
0069F913  E8 58 B3 00 00            CALL 0x006aac70
0069F918  85 C0                     TEST EAX,EAX
0069F91A  89 45 EC                  MOV dword ptr [EBP + -0x14],EAX
0069F91D  0F 84 37 03 00 00         JZ 0x0069fc5a
0069F923  8B 4D 0C                  MOV ECX,dword ptr [EBP + 0xc]
0069F926  8B 7D 20                  MOV EDI,dword ptr [EBP + 0x20]
0069F929  89 45 E8                  MOV dword ptr [EBP + -0x18],EAX
0069F92C  8D 90 00 02 00 00         LEA EDX,[EAX + 0x200]
0069F932  8B C1                     MOV EAX,ECX
0069F934  8B 75 1C                  MOV ESI,dword ptr [EBP + 0x1c]
0069F937  0F AF C7                  IMUL EAX,EDI
0069F93A  8B 5D 08                  MOV EBX,dword ptr [EBP + 0x8]
0069F93D  03 C6                     ADD EAX,ESI
0069F93F  89 55 F4                  MOV dword ptr [EBP + -0xc],EDX
0069F942  66 83 3C 43 00            CMP word ptr [EBX + EAX*0x2],0x0
0069F947  8D 04 43                  LEA EAX,[EBX + EAX*0x2]
0069F94A  75 05                     JNZ 0x0069f951
0069F94C  66 C7 00 01 00            MOV word ptr [EAX],0x1
LAB_0069f951:
0069F951  66 89 7A 02               MOV word ptr [EDX + 0x2],DI
0069F955  8B 7D E0                  MOV EDI,dword ptr [EBP + -0x20]
0069F958  C7 45 D0 01 00 00 00      MOV dword ptr [EBP + -0x30],0x1
0069F95F  66 89 32                  MOV word ptr [EDX],SI
0069F962  C7 45 F0 02 00 00 00      MOV dword ptr [EBP + -0x10],0x2
LAB_0069f969:
0069F969  8B 5D D0                  MOV EBX,dword ptr [EBP + -0x30]
0069F96C  8B 75 E8                  MOV ESI,dword ptr [EBP + -0x18]
0069F96F  33 C0                     XOR EAX,EAX
0069F971  85 DB                     TEST EBX,EBX
0069F973  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
0069F976  89 45 D4                  MOV dword ptr [EBP + -0x2c],EAX
0069F979  0F 8E D8 02 00 00         JLE 0x0069fc57
0069F97F  8D 1C FD 00 00 00 00      LEA EBX,[EDI*0x8 + 0x0]
0069F986  8D 3C BD 00 FE FF FF      LEA EDI,[EDI*0x4 + 0xfffffe00]
0069F98D  89 5D CC                  MOV dword ptr [EBP + -0x34],EBX
0069F990  C7 45 F8 04 00 00 00      MOV dword ptr [EBP + -0x8],0x4
0069F997  89 7D D8                  MOV dword ptr [EBP + -0x28],EDI
LAB_0069f99a:
0069F99A  0F BF 7C 82 02            MOVSX EDI,word ptr [EDX + EAX*0x4 + 0x2]
0069F99F  0F BF 1C 82               MOVSX EBX,word ptr [EDX + EAX*0x4]
0069F9A3  3B 7D 18                  CMP EDI,dword ptr [EBP + 0x18]
0069F9A6  75 09                     JNZ 0x0069f9b1
0069F9A8  3B 5D 14                  CMP EBX,dword ptr [EBP + 0x14]
0069F9AB  0F 84 B5 01 00 00         JZ 0x0069fb66
LAB_0069f9b1:
0069F9B1  8B D7                     MOV EDX,EDI
0069F9B3  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
0069F9B6  0F AF D1                  IMUL EDX,ECX
0069F9B9  03 D3                     ADD EDX,EBX
0069F9BB  8D 04 50                  LEA EAX,[EAX + EDX*0x2]
0069F9BE  8B 55 F8                  MOV EDX,dword ptr [EBP + -0x8]
0069F9C1  3B 55 E0                  CMP EDX,dword ptr [EBP + -0x20]
0069F9C4  89 45 C0                  MOV dword ptr [EBP + -0x40],EAX
0069F9C7  0F 8E 93 00 00 00         JLE 0x0069fa60
0069F9CD  8B 45 CC                  MOV EAX,dword ptr [EBP + -0x34]
0069F9D0  8B 75 E0                  MOV ESI,dword ptr [EBP + -0x20]
0069F9D3  8B 4D D8                  MOV ECX,dword ptr [EBP + -0x28]
0069F9D6  05 00 04 00 00            ADD EAX,0x400
0069F9DB  89 45 CC                  MOV dword ptr [EBP + -0x34],EAX
0069F9DE  50                        PUSH EAX
0069F9DF  8B 45 EC                  MOV EAX,dword ptr [EBP + -0x14]
0069F9E2  81 C6 80 00 00 00         ADD ESI,0x80
0069F9E8  81 C1 00 02 00 00         ADD ECX,0x200
0069F9EE  50                        PUSH EAX
0069F9EF  89 75 E0                  MOV dword ptr [EBP + -0x20],ESI
0069F9F2  89 4D D8                  MOV dword ptr [EBP + -0x28],ECX
0069F9F5  E8 56 D5 00 00            CALL 0x006acf50
0069F9FA  85 C0                     TEST EAX,EAX
0069F9FC  0F 84 55 02 00 00         JZ 0x0069fc57
0069FA02  8B 55 E8                  MOV EDX,dword ptr [EBP + -0x18]
0069FA05  8B 4D EC                  MOV ECX,dword ptr [EBP + -0x14]
0069FA08  2B D1                     SUB EDX,ECX
0069FA0A  C1 FA 02                  SAR EDX,0x2
0069FA0D  8D 34 90                  LEA ESI,[EAX + EDX*0x4]
0069FA10  8B 55 F4                  MOV EDX,dword ptr [EBP + -0xc]
0069FA13  2B D1                     SUB EDX,ECX
0069FA15  89 75 E8                  MOV dword ptr [EBP + -0x18],ESI
0069FA18  C1 FA 02                  SAR EDX,0x2
0069FA1B  3B F0                     CMP ESI,EAX
0069FA1D  8D 0C 90                  LEA ECX,[EAX + EDX*0x4]
0069FA20  89 4D F4                  MOV dword ptr [EBP + -0xc],ECX
0069FA23  75 0B                     JNZ 0x0069fa30
0069FA25  81 C1 00 02 00 00         ADD ECX,0x200
0069FA2B  89 4D F4                  MOV dword ptr [EBP + -0xc],ECX
0069FA2E  EB 09                     JMP 0x0069fa39
LAB_0069fa30:
0069FA30  81 C6 00 02 00 00         ADD ESI,0x200
0069FA36  89 75 E8                  MOV dword ptr [EBP + -0x18],ESI
LAB_0069fa39:
0069FA39  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
0069FA3C  8B 4D D8                  MOV ECX,dword ptr [EBP + -0x28]
0069FA3F  89 45 EC                  MOV dword ptr [EBP + -0x14],EAX
0069FA42  51                        PUSH ECX
0069FA43  8D 34 96                  LEA ESI,[ESI + EDX*0x4]
0069FA46  8D 14 01                  LEA EDX,[ECX + EAX*0x1]
0069FA49  8D 84 01 00 02 00 00      LEA EAX,[ECX + EAX*0x1 + 0x200]
0069FA50  52                        PUSH EDX
0069FA51  50                        PUSH EAX
0069FA52  E8 19 E0 08 00            CALL 0x0072da70
0069FA57  8B 4D 0C                  MOV ECX,dword ptr [EBP + 0xc]
0069FA5A  8B 45 C0                  MOV EAX,dword ptr [EBP + -0x40]
0069FA5D  83 C4 0C                  ADD ESP,0xc
LAB_0069fa60:
0069FA60  8D 51 FF                  LEA EDX,[ECX + -0x1]
0069FA63  3B DA                     CMP EBX,EDX
0069FA65  7D 2B                     JGE 0x0069fa92
0069FA67  66 83 78 02 00            CMP word ptr [EAX + 0x2],0x0
0069FA6C  75 24                     JNZ 0x0069fa92
0069FA6E  66 8B 55 F0               MOV DX,word ptr [EBP + -0x10]
0069FA72  83 C6 04                  ADD ESI,0x4
0069FA75  66 89 50 02               MOV word ptr [EAX + 0x2],DX
0069FA79  8D 53 01                  LEA EDX,[EBX + 0x1]
0069FA7C  66 89 56 FC               MOV word ptr [ESI + -0x4],DX
0069FA80  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
0069FA83  66 89 7E FE               MOV word ptr [ESI + -0x2],DI
0069FA87  42                        INC EDX
0069FA88  89 55 FC                  MOV dword ptr [EBP + -0x4],EDX
0069FA8B  8B 55 F8                  MOV EDX,dword ptr [EBP + -0x8]
0069FA8E  42                        INC EDX
0069FA8F  89 55 F8                  MOV dword ptr [EBP + -0x8],EDX
LAB_0069fa92:
0069FA92  85 FF                     TEST EDI,EDI
0069FA94  7E 33                     JLE 0x0069fac9
0069FA96  8D 14 09                  LEA EDX,[ECX + ECX*0x1]
0069FA99  8B C8                     MOV ECX,EAX
0069FA9B  2B CA                     SUB ECX,EDX
0069FA9D  66 83 39 00               CMP word ptr [ECX],0x0
0069FAA1  75 23                     JNZ 0x0069fac6
0069FAA3  66 8B 55 F0               MOV DX,word ptr [EBP + -0x10]
0069FAA7  83 C6 04                  ADD ESI,0x4
0069FAAA  66 89 11                  MOV word ptr [ECX],DX
0069FAAD  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
0069FAB0  8D 4F FF                  LEA ECX,[EDI + -0x1]
0069FAB3  66 89 5E FC               MOV word ptr [ESI + -0x4],BX
0069FAB7  66 89 4E FE               MOV word ptr [ESI + -0x2],CX
0069FABB  8B 4D F8                  MOV ECX,dword ptr [EBP + -0x8]
0069FABE  42                        INC EDX
0069FABF  41                        INC ECX
0069FAC0  89 55 FC                  MOV dword ptr [EBP + -0x4],EDX
0069FAC3  89 4D F8                  MOV dword ptr [EBP + -0x8],ECX
LAB_0069fac6:
0069FAC6  8B 4D 0C                  MOV ECX,dword ptr [EBP + 0xc]
LAB_0069fac9:
0069FAC9  85 DB                     TEST EBX,EBX
0069FACB  7E 2B                     JLE 0x0069faf8
0069FACD  66 83 78 FE 00            CMP word ptr [EAX + -0x2],0x0
0069FAD2  75 24                     JNZ 0x0069faf8
0069FAD4  66 8B 55 F0               MOV DX,word ptr [EBP + -0x10]
0069FAD8  83 C6 04                  ADD ESI,0x4
0069FADB  66 89 50 FE               MOV word ptr [EAX + -0x2],DX
0069FADF  8D 53 FF                  LEA EDX,[EBX + -0x1]
0069FAE2  66 89 56 FC               MOV word ptr [ESI + -0x4],DX
0069FAE6  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
0069FAE9  66 89 7E FE               MOV word ptr [ESI + -0x2],DI
0069FAED  42                        INC EDX
0069FAEE  89 55 FC                  MOV dword ptr [EBP + -0x4],EDX
0069FAF1  8B 55 F8                  MOV EDX,dword ptr [EBP + -0x8]
0069FAF4  42                        INC EDX
0069FAF5  89 55 F8                  MOV dword ptr [EBP + -0x8],EDX
LAB_0069faf8:
0069FAF8  8B 55 10                  MOV EDX,dword ptr [EBP + 0x10]
0069FAFB  4A                        DEC EDX
0069FAFC  3B FA                     CMP EDI,EDX
0069FAFE  7D 28                     JGE 0x0069fb28
0069FB00  66 83 3C 48 00            CMP word ptr [EAX + ECX*0x2],0x0
0069FB05  75 21                     JNZ 0x0069fb28
0069FB07  66 8B 55 F0               MOV DX,word ptr [EBP + -0x10]
0069FB0B  47                        INC EDI
0069FB0C  66 89 14 48               MOV word ptr [EAX + ECX*0x2],DX
0069FB10  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
0069FB13  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
0069FB16  66 89 1E                  MOV word ptr [ESI],BX
0069FB19  66 89 7E 02               MOV word ptr [ESI + 0x2],DI
0069FB1D  83 C6 04                  ADD ESI,0x4
0069FB20  42                        INC EDX
0069FB21  40                        INC EAX
0069FB22  89 55 FC                  MOV dword ptr [EBP + -0x4],EDX
0069FB25  89 45 F8                  MOV dword ptr [EBP + -0x8],EAX
LAB_0069fb28:
0069FB28  8B 45 D4                  MOV EAX,dword ptr [EBP + -0x2c]
0069FB2B  8B 7D D0                  MOV EDI,dword ptr [EBP + -0x30]
0069FB2E  8B 55 F4                  MOV EDX,dword ptr [EBP + -0xc]
0069FB31  40                        INC EAX
0069FB32  3B C7                     CMP EAX,EDI
0069FB34  89 45 D4                  MOV dword ptr [EBP + -0x2c],EAX
0069FB37  0F 8C 5D FE FF FF         JL 0x0069f99a
0069FB3D  8B 75 FC                  MOV ESI,dword ptr [EBP + -0x4]
0069FB40  85 F6                     TEST ESI,ESI
0069FB42  0F 84 0F 01 00 00         JZ 0x0069fc57
0069FB48  8B 45 E8                  MOV EAX,dword ptr [EBP + -0x18]
0069FB4B  8B 7D E0                  MOV EDI,dword ptr [EBP + -0x20]
0069FB4E  89 45 F4                  MOV dword ptr [EBP + -0xc],EAX
0069FB51  8B 45 F0                  MOV EAX,dword ptr [EBP + -0x10]
0069FB54  40                        INC EAX
0069FB55  89 55 E8                  MOV dword ptr [EBP + -0x18],EDX
0069FB58  8B 55 F4                  MOV EDX,dword ptr [EBP + -0xc]
0069FB5B  89 75 D0                  MOV dword ptr [EBP + -0x30],ESI
0069FB5E  89 45 F0                  MOV dword ptr [EBP + -0x10],EAX
0069FB61  E9 03 FE FF FF            JMP 0x0069f969
LAB_0069fb66:
0069FB66  8B 7D 18                  MOV EDI,dword ptr [EBP + 0x18]
0069FB69  8B 75 14                  MOV ESI,dword ptr [EBP + 0x14]
0069FB6C  8B 5D F0                  MOV EBX,dword ptr [EBP + -0x10]
LAB_0069fb6f:
0069FB6F  8D 45 EC                  LEA EAX,[EBP + -0x14]
0069FB72  50                        PUSH EAX
0069FB73  E8 E8 B4 00 00            CALL 0x006ab060
0069FB78  8D 0C 9D 00 00 00 00      LEA ECX,[EBX*0x4 + 0x0]
0069FB7F  51                        PUSH ECX
0069FB80  E8 EB B0 00 00            CALL 0x006aac70
0069FB85  85 C0                     TEST EAX,EAX
0069FB87  89 45 DC                  MOV dword ptr [EBP + -0x24],EAX
0069FB8A  0F 84 C7 00 00 00         JZ 0x0069fc57
0069FB90  8B 4D 1C                  MOV ECX,dword ptr [EBP + 0x1c]
0069FB93  C7 45 E4 01 00 00 00      MOV dword ptr [EBP + -0x1c],0x1
0069FB9A  3B F1                     CMP ESI,ECX
0069FB9C  89 75 18                  MOV dword ptr [EBP + 0x18],ESI
0069FB9F  66 89 30                  MOV word ptr [EAX],SI
0069FBA2  89 7D 14                  MOV dword ptr [EBP + 0x14],EDI
0069FBA5  66 89 78 02               MOV word ptr [EAX + 0x2],DI
0069FBA9  75 0B                     JNZ 0x0069fbb6
0069FBAB  8B 5D 20                  MOV EBX,dword ptr [EBP + 0x20]
0069FBAE  3B FB                     CMP EDI,EBX
0069FBB0  0F 84 8D 00 00 00         JZ 0x0069fc43
LAB_0069fbb6:
0069FBB6  83 C0 04                  ADD EAX,0x4
0069FBB9  89 45 CC                  MOV dword ptr [EBP + -0x34],EAX
LAB_0069fbbc:
0069FBBC  BF 30 75 00 00            MOV EDI,0x7530
0069FBC1  BE 12 80 7D 00            MOV ESI,0x7d8012
LAB_0069fbc6:
0069FBC6  0F BF 4E FE               MOVSX ECX,word ptr [ESI + -0x2]
0069FBCA  03 4D 18                  ADD ECX,dword ptr [EBP + 0x18]
0069FBCD  78 3E                     JS 0x0069fc0d
0069FBCF  8B 55 0C                  MOV EDX,dword ptr [EBP + 0xc]
0069FBD2  3B CA                     CMP ECX,EDX
0069FBD4  7D 37                     JGE 0x0069fc0d
0069FBD6  0F BF 06                  MOVSX EAX,word ptr [ESI]
0069FBD9  03 45 14                  ADD EAX,dword ptr [EBP + 0x14]
0069FBDC  78 2F                     JS 0x0069fc0d
0069FBDE  3B 45 10                  CMP EAX,dword ptr [EBP + 0x10]
0069FBE1  7D 2A                     JGE 0x0069fc0d
0069FBE3  3B 4D 1C                  CMP ECX,dword ptr [EBP + 0x1c]
0069FBE6  75 07                     JNZ 0x0069fbef
0069FBE8  8B 5D 20                  MOV EBX,dword ptr [EBP + 0x20]
0069FBEB  3B C3                     CMP EAX,EBX
0069FBED  74 51                     JZ 0x0069fc40
LAB_0069fbef:
0069FBEF  8B D8                     MOV EBX,EAX
0069FBF1  0F AF DA                  IMUL EBX,EDX
0069FBF4  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
0069FBF7  03 D9                     ADD EBX,ECX
0069FBF9  0F BF 14 5A               MOVSX EDX,word ptr [EDX + EBX*0x2]
0069FBFD  85 D2                     TEST EDX,EDX
0069FBFF  7E 0C                     JLE 0x0069fc0d
0069FC01  3B D7                     CMP EDX,EDI
0069FC03  7D 08                     JGE 0x0069fc0d
0069FC05  89 4D C8                  MOV dword ptr [EBP + -0x38],ECX
0069FC08  89 45 C4                  MOV dword ptr [EBP + -0x3c],EAX
0069FC0B  8B FA                     MOV EDI,EDX
LAB_0069fc0d:
0069FC0D  83 C6 04                  ADD ESI,0x4
0069FC10  81 FE 22 80 7D 00         CMP ESI,0x7d8022
0069FC16  7C AE                     JL 0x0069fbc6
0069FC18  8B 55 CC                  MOV EDX,dword ptr [EBP + -0x34]
0069FC1B  8B 45 C8                  MOV EAX,dword ptr [EBP + -0x38]
0069FC1E  8B 4D C4                  MOV ECX,dword ptr [EBP + -0x3c]
0069FC21  89 45 18                  MOV dword ptr [EBP + 0x18],EAX
0069FC24  66 89 02                  MOV word ptr [EDX],AX
0069FC27  89 4D 14                  MOV dword ptr [EBP + 0x14],ECX
0069FC2A  66 89 4A 02               MOV word ptr [EDX + 0x2],CX
0069FC2E  8B 4D E4                  MOV ECX,dword ptr [EBP + -0x1c]
0069FC31  41                        INC ECX
0069FC32  83 C2 04                  ADD EDX,0x4
0069FC35  89 4D E4                  MOV dword ptr [EBP + -0x1c],ECX
0069FC38  89 55 CC                  MOV dword ptr [EBP + -0x34],EDX
0069FC3B  E9 7C FF FF FF            JMP 0x0069fbbc
LAB_0069fc40:
0069FC40  8B 45 DC                  MOV EAX,dword ptr [EBP + -0x24]
LAB_0069fc43:
0069FC43  8B 4D E4                  MOV ECX,dword ptr [EBP + -0x1c]
0069FC46  66 8B 55 1C               MOV DX,word ptr [EBP + 0x1c]
0069FC4A  66 89 14 88               MOV word ptr [EAX + ECX*0x4],DX
0069FC4E  66 89 5C 88 02            MOV word ptr [EAX + ECX*0x4 + 0x2],BX
0069FC53  41                        INC ECX
0069FC54  89 4D E4                  MOV dword ptr [EBP + -0x1c],ECX
LAB_0069fc57:
0069FC57  8B 45 EC                  MOV EAX,dword ptr [EBP + -0x14]
LAB_0069fc5a:
0069FC5A  50                        PUSH EAX
0069FC5B  E8 30 62 00 00            CALL 0x006a5e90
0069FC60  8B 45 24                  MOV EAX,dword ptr [EBP + 0x24]
0069FC63  8B 4D E4                  MOV ECX,dword ptr [EBP + -0x1c]
0069FC66  5F                        POP EDI
0069FC67  5E                        POP ESI
0069FC68  89 08                     MOV dword ptr [EAX],ECX
0069FC6A  8B 45 DC                  MOV EAX,dword ptr [EBP + -0x24]
0069FC6D  5B                        POP EBX
0069FC6E  8B E5                     MOV ESP,EBP
0069FC70  5D                        POP EBP
0069FC71  C2 20 00                  RET 0x20
