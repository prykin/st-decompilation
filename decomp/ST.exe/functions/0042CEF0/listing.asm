STAllPlayersC::DelObjFromSaveTmps:
0042CEF0  55                        PUSH EBP
0042CEF1  8B EC                     MOV EBP,ESP
0042CEF3  51                        PUSH ECX
0042CEF4  33 C0                     XOR EAX,EAX
0042CEF6  53                        PUSH EBX
0042CEF7  A0 4D 87 80 00            MOV AL,[0x0080874d]
0042CEFC  56                        PUSH ESI
0042CEFD  57                        PUSH EDI
0042CEFE  8B 7D 08                  MOV EDI,dword ptr [EBP + 0x8]
0042CF01  8D 0C 80                  LEA ECX,[EAX + EAX*0x4]
0042CF04  8D 14 C8                  LEA EDX,[EAX + ECX*0x8]
0042CF07  8D 0C 50                  LEA ECX,[EAX + EDX*0x2]
0042CF0A  C1 E1 04                  SHL ECX,0x4
0042CF0D  03 C8                     ADD ECX,EAX
0042CF0F  81 FF A4 01 00 00         CMP EDI,0x1a4
0042CF15  8D 34 4D 27 50 7F 00      LEA ESI,[ECX*0x2 + 0x7f5027]
0042CF1C  0F 8F D9 00 00 00         JG 0x0042cffb
0042CF22  0F 84 E9 00 00 00         JZ 0x0042d011
0042CF28  83 FF 14                  CMP EDI,0x14
0042CF2B  74 43                     JZ 0x0042cf70
0042CF2D  83 FF 5A                  CMP EDI,0x5a
0042CF30  0F 84 DB 00 00 00         JZ 0x0042d011
0042CF36  81 FF 72 01 00 00         CMP EDI,0x172
0042CF3C  0F 84 CF 00 00 00         JZ 0x0042d011
LAB_0042cf42:
0042CF42  68 28 63 7A 00            PUSH 0x7a6328
0042CF47  68 CC 4C 7A 00            PUSH 0x7a4ccc
0042CF4C  6A 00                     PUSH 0x0
0042CF4E  6A 00                     PUSH 0x0
0042CF50  68 BB 03 00 00            PUSH 0x3bb
0042CF55  68 04 60 7A 00            PUSH 0x7a6004
0042CF5A  E8 71 05 28 00            CALL 0x006ad4d0
0042CF5F  83 C4 18                  ADD ESP,0x18
0042CF62  85 C0                     TEST EAX,EAX
0042CF64  74 01                     JZ 0x0042cf67
0042CF66  CC                        INT3
LAB_0042cf67:
0042CF67  5F                        POP EDI
0042CF68  5E                        POP ESI
0042CF69  5B                        POP EBX
0042CF6A  8B E5                     MOV ESP,EBP
0042CF6C  5D                        POP EBP
0042CF6D  C2 0C 00                  RET 0xc
LAB_0042cf70:
0042CF70  83 C6 0A                  ADD ESI,0xa
0042CF73  C7 45 FC 0A 00 00 00      MOV dword ptr [EBP + -0x4],0xa
LAB_0042cf7a:
0042CF7A  83 7E F6 3C               CMP dword ptr [ESI + -0xa],0x3c
0042CF7E  75 66                     JNZ 0x0042cfe6
0042CF80  0F BE 55 0C               MOVSX EDX,byte ptr [EBP + 0xc]
0042CF84  39 56 FA                  CMP dword ptr [ESI + -0x6],EDX
0042CF87  75 5D                     JNZ 0x0042cfe6
0042CF89  8B 06                     MOV EAX,dword ptr [ESI]
0042CF8B  33 FF                     XOR EDI,EDI
0042CF8D  8B 58 0C                  MOV EBX,dword ptr [EAX + 0xc]
0042CF90  85 DB                     TEST EBX,EBX
0042CF92  7E 52                     JLE 0x0042cfe6
LAB_0042cf94:
0042CF94  8D 4D 08                  LEA ECX,[EBP + 0x8]
0042CF97  8B D7                     MOV EDX,EDI
0042CF99  51                        PUSH ECX
0042CF9A  8B 0E                     MOV ECX,dword ptr [ESI]
0042CF9C  E8 CF FC 27 00            CALL 0x006acc70
0042CFA1  66 8B 55 10               MOV DX,word ptr [EBP + 0x10]
0042CFA5  66 39 55 08               CMP word ptr [EBP + 0x8],DX
0042CFA9  74 07                     JZ 0x0042cfb2
0042CFAB  47                        INC EDI
0042CFAC  3B FB                     CMP EDI,EBX
0042CFAE  7C E4                     JL 0x0042cf94
0042CFB0  EB 34                     JMP 0x0042cfe6
LAB_0042cfb2:
0042CFB2  8D 45 08                  LEA EAX,[EBP + 0x8]
0042CFB5  C7 45 08 FF FF 00 00      MOV dword ptr [EBP + 0x8],0xffff
0042CFBC  8B 0E                     MOV ECX,dword ptr [ESI]
0042CFBE  50                        PUSH EAX
0042CFBF  57                        PUSH EDI
0042CFC0  51                        PUSH ECX
0042CFC1  E8 7A 11 28 00            CALL 0x006ae140
0042CFC6  66 FF 4E 04               DEC word ptr [ESI + 0x4]
0042CFCA  66 83 7E 04 00            CMP word ptr [ESI + 0x4],0x0
0042CFCF  77 15                     JA 0x0042cfe6
0042CFD1  8B 16                     MOV EDX,dword ptr [ESI]
0042CFD3  52                        PUSH EDX
0042CFD4  E8 37 11 28 00            CALL 0x006ae110
0042CFD9  C7 06 00 00 00 00         MOV dword ptr [ESI],0x0
0042CFDF  C7 46 F6 00 00 00 00      MOV dword ptr [ESI + -0xa],0x0
LAB_0042cfe6:
0042CFE6  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
0042CFE9  83 C6 10                  ADD ESI,0x10
0042CFEC  48                        DEC EAX
0042CFED  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
0042CFF0  75 88                     JNZ 0x0042cf7a
0042CFF2  5F                        POP EDI
0042CFF3  5E                        POP ESI
0042CFF4  5B                        POP EBX
0042CFF5  8B E5                     MOV ESP,EBP
0042CFF7  5D                        POP EBP
0042CFF8  C2 0C 00                  RET 0xc
LAB_0042cffb:
0042CFFB  81 FF B8 01 00 00         CMP EDI,0x1b8
0042D001  7F 4F                     JG 0x0042d052
0042D003  74 0C                     JZ 0x0042d011
0042D005  81 FF AE 01 00 00         CMP EDI,0x1ae
0042D00B  0F 85 31 FF FF FF         JNZ 0x0042cf42
LAB_0042d011:
0042D011  66 8B 55 10               MOV DX,word ptr [EBP + 0x10]
0042D015  33 C9                     XOR ECX,ECX
0042D017  8D 46 08                  LEA EAX,[ESI + 0x8]
LAB_0042d01a:
0042D01A  39 78 F8                  CMP dword ptr [EAX + -0x8],EDI
0042D01D  75 0E                     JNZ 0x0042d02d
0042D01F  0F BE 5D 0C               MOVSX EBX,byte ptr [EBP + 0xc]
0042D023  39 58 FC                  CMP dword ptr [EAX + -0x4],EBX
0042D026  75 05                     JNZ 0x0042d02d
0042D028  66 39 10                  CMP word ptr [EAX],DX
0042D02B  74 12                     JZ 0x0042d03f
LAB_0042d02d:
0042D02D  41                        INC ECX
0042D02E  83 C0 10                  ADD EAX,0x10
0042D031  83 F9 09                  CMP ECX,0x9
0042D034  7E E4                     JLE 0x0042d01a
0042D036  5F                        POP EDI
0042D037  5E                        POP ESI
0042D038  5B                        POP EBX
0042D039  8B E5                     MOV ESP,EBP
0042D03B  5D                        POP EBP
0042D03C  C2 0C 00                  RET 0xc
LAB_0042d03f:
0042D03F  C1 E1 04                  SHL ECX,0x4
0042D042  5F                        POP EDI
0042D043  C7 04 31 00 00 00 00      MOV dword ptr [ECX + ESI*0x1],0x0
0042D04A  5E                        POP ESI
0042D04B  5B                        POP EBX
0042D04C  8B E5                     MOV ESP,EBP
0042D04E  5D                        POP EBP
0042D04F  C2 0C 00                  RET 0xc
LAB_0042d052:
0042D052  81 FF E8 03 00 00         CMP EDI,0x3e8
0042D058  0F 8C E4 FE FF FF         JL 0x0042cf42
0042D05E  81 FF E9 03 00 00         CMP EDI,0x3e9
0042D064  0F 8F D8 FE FF FF         JG 0x0042cf42
0042D06A  83 C6 0A                  ADD ESI,0xa
0042D06D  C7 45 FC 0A 00 00 00      MOV dword ptr [EBP + -0x4],0xa
LAB_0042d074:
0042D074  81 7E F6 9A 01 00 00      CMP dword ptr [ESI + -0xa],0x19a
0042D07B  75 66                     JNZ 0x0042d0e3
0042D07D  0F BE 45 0C               MOVSX EAX,byte ptr [EBP + 0xc]
0042D081  39 46 FA                  CMP dword ptr [ESI + -0x6],EAX
0042D084  75 5D                     JNZ 0x0042d0e3
0042D086  8B 0E                     MOV ECX,dword ptr [ESI]
0042D088  33 FF                     XOR EDI,EDI
0042D08A  8B 59 0C                  MOV EBX,dword ptr [ECX + 0xc]
0042D08D  85 DB                     TEST EBX,EBX
0042D08F  7E 52                     JLE 0x0042d0e3
LAB_0042d091:
0042D091  8B 0E                     MOV ECX,dword ptr [ESI]
0042D093  8D 55 08                  LEA EDX,[EBP + 0x8]
0042D096  52                        PUSH EDX
0042D097  8B D7                     MOV EDX,EDI
0042D099  E8 D2 FB 27 00            CALL 0x006acc70
0042D09E  66 8B 45 10               MOV AX,word ptr [EBP + 0x10]
0042D0A2  66 39 45 08               CMP word ptr [EBP + 0x8],AX
0042D0A6  74 07                     JZ 0x0042d0af
0042D0A8  47                        INC EDI
0042D0A9  3B FB                     CMP EDI,EBX
0042D0AB  7C E4                     JL 0x0042d091
0042D0AD  EB 34                     JMP 0x0042d0e3
LAB_0042d0af:
0042D0AF  8D 4D 08                  LEA ECX,[EBP + 0x8]
0042D0B2  C7 45 08 FF FF 00 00      MOV dword ptr [EBP + 0x8],0xffff
0042D0B9  8B 16                     MOV EDX,dword ptr [ESI]
0042D0BB  51                        PUSH ECX
0042D0BC  57                        PUSH EDI
0042D0BD  52                        PUSH EDX
0042D0BE  E8 7D 10 28 00            CALL 0x006ae140
0042D0C3  66 FF 4E 04               DEC word ptr [ESI + 0x4]
0042D0C7  66 83 7E 04 00            CMP word ptr [ESI + 0x4],0x0
0042D0CC  77 15                     JA 0x0042d0e3
0042D0CE  8B 06                     MOV EAX,dword ptr [ESI]
0042D0D0  50                        PUSH EAX
0042D0D1  E8 3A 10 28 00            CALL 0x006ae110
0042D0D6  C7 06 00 00 00 00         MOV dword ptr [ESI],0x0
0042D0DC  C7 46 F6 00 00 00 00      MOV dword ptr [ESI + -0xa],0x0
LAB_0042d0e3:
0042D0E3  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
0042D0E6  83 C6 10                  ADD ESI,0x10
0042D0E9  48                        DEC EAX
0042D0EA  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
0042D0ED  75 85                     JNZ 0x0042d074
0042D0EF  5F                        POP EDI
0042D0F0  5E                        POP ESI
0042D0F1  5B                        POP EBX
0042D0F2  8B E5                     MOV ESP,EBP
0042D0F4  5D                        POP EBP
0042D0F5  C2 0C 00                  RET 0xc
