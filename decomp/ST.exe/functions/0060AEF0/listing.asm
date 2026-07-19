FUN_0060aef0:
0060AEF0  55                        PUSH EBP
0060AEF1  8B EC                     MOV EBP,ESP
0060AEF3  6A FF                     PUSH -0x1
0060AEF5  68 38 CD 79 00            PUSH 0x79cd38
0060AEFA  68 64 D9 72 00            PUSH 0x72d964
0060AEFF  64 A1 00 00 00 00         MOV EAX,FS:[0x0]
0060AF05  50                        PUSH EAX
0060AF06  64 89 25 00 00 00 00      MOV dword ptr FS:[0x0],ESP
0060AF0D  81 EC E8 00 00 00         SUB ESP,0xe8
0060AF13  53                        PUSH EBX
0060AF14  56                        PUSH ESI
0060AF15  57                        PUSH EDI
0060AF16  89 65 E8                  MOV dword ptr [EBP + -0x18],ESP
0060AF19  8B D9                     MOV EBX,ECX
0060AF1B  89 9D 08 FF FF FF         MOV dword ptr [EBP + 0xffffff08],EBX
0060AF21  33 FF                     XOR EDI,EDI
0060AF23  89 BD 7C FF FF FF         MOV dword ptr [EBP + 0xffffff7c],EDI
0060AF29  89 7D B8                  MOV dword ptr [EBP + -0x48],EDI
0060AF2C  89 7D 90                  MOV dword ptr [EBP + -0x70],EDI
0060AF2F  89 BD 58 FF FF FF         MOV dword ptr [EBP + 0xffffff58],EDI
0060AF35  83 BB F5 01 00 00 42      CMP dword ptr [EBX + 0x1f5],0x42
0060AF3C  75 43                     JNZ 0x0060af81
0060AF3E  6A 1C                     PUSH 0x1c
0060AF40  8B 83 D9 01 00 00         MOV EAX,dword ptr [EBX + 0x1d9]
0060AF46  50                        PUSH EAX
0060AF47  8B 0D 74 A1 7F 00         MOV ECX,dword ptr [0x007fa174]
0060AF4D  E8 19 69 DF FF            CALL 0x0040186b
0060AF52  85 C0                     TEST EAX,EAX
0060AF54  8B 0D EC 50 79 00         MOV ECX,dword ptr [0x007950ec]
0060AF5A  B8 79 19 8C 02            MOV EAX,0x28c1979
0060AF5F  74 0F                     JZ 0x0060af70
0060AF61  F7 E9                     IMUL ECX
0060AF63  D1 FA                     SAR EDX,0x1
0060AF65  8B CA                     MOV ECX,EDX
0060AF67  C1 E9 1F                  SHR ECX,0x1f
0060AF6A  8D 54 0A 02               LEA EDX,[EDX + ECX*0x1 + 0x2]
0060AF6E  EB 0B                     JMP 0x0060af7b
LAB_0060af70:
0060AF70  F7 E9                     IMUL ECX
0060AF72  D1 FA                     SAR EDX,0x1
0060AF74  8B C2                     MOV EAX,EDX
0060AF76  C1 E8 1F                  SHR EAX,0x1f
0060AF79  03 D0                     ADD EDX,EAX
LAB_0060af7b:
0060AF7B  89 93 4C 02 00 00         MOV dword ptr [EBX + 0x24c],EDX
LAB_0060af81:
0060AF81  8B 8B E9 01 00 00         MOV ECX,dword ptr [EBX + 0x1e9]
0060AF87  3B CF                     CMP ECX,EDI
0060AF89  B8 79 19 8C 02            MOV EAX,0x28c1979
0060AF8E  7C 10                     JL 0x0060afa0
0060AF90  F7 E9                     IMUL ECX
0060AF92  D1 FA                     SAR EDX,0x1
0060AF94  8B CA                     MOV ECX,EDX
0060AF96  C1 E9 1F                  SHR ECX,0x1f
0060AF99  03 D1                     ADD EDX,ECX
0060AF9B  0F BF F2                  MOVSX ESI,DX
0060AF9E  EB 0F                     JMP 0x0060afaf
LAB_0060afa0:
0060AFA0  F7 E9                     IMUL ECX
0060AFA2  D1 FA                     SAR EDX,0x1
0060AFA4  8B C2                     MOV EAX,EDX
0060AFA6  C1 E8 1F                  SHR EAX,0x1f
0060AFA9  03 D0                     ADD EDX,EAX
0060AFAB  0F BF F2                  MOVSX ESI,DX
0060AFAE  4E                        DEC ESI
LAB_0060afaf:
0060AFAF  89 75 88                  MOV dword ptr [EBP + -0x78],ESI
0060AFB2  8B 8B ED 01 00 00         MOV ECX,dword ptr [EBX + 0x1ed]
0060AFB8  3B CF                     CMP ECX,EDI
0060AFBA  B8 79 19 8C 02            MOV EAX,0x28c1979
0060AFBF  7C 10                     JL 0x0060afd1
0060AFC1  F7 E9                     IMUL ECX
0060AFC3  D1 FA                     SAR EDX,0x1
0060AFC5  8B CA                     MOV ECX,EDX
0060AFC7  C1 E9 1F                  SHR ECX,0x1f
0060AFCA  03 D1                     ADD EDX,ECX
0060AFCC  0F BF C2                  MOVSX EAX,DX
0060AFCF  EB 0F                     JMP 0x0060afe0
LAB_0060afd1:
0060AFD1  F7 E9                     IMUL ECX
0060AFD3  D1 FA                     SAR EDX,0x1
0060AFD5  8B C2                     MOV EAX,EDX
0060AFD7  C1 E8 1F                  SHR EAX,0x1f
0060AFDA  03 D0                     ADD EDX,EAX
0060AFDC  0F BF C2                  MOVSX EAX,DX
0060AFDF  48                        DEC EAX
LAB_0060afe0:
0060AFE0  89 85 78 FF FF FF         MOV dword ptr [EBP + 0xffffff78],EAX
0060AFE6  8B 8B 4C 02 00 00         MOV ECX,dword ptr [EBX + 0x24c]
0060AFEC  8B D8                     MOV EBX,EAX
0060AFEE  2B D9                     SUB EBX,ECX
0060AFF0  79 02                     JNS 0x0060aff4
0060AFF2  33 DB                     XOR EBX,EBX
LAB_0060aff4:
0060AFF4  8B D6                     MOV EDX,ESI
0060AFF6  2B D1                     SUB EDX,ECX
0060AFF8  89 55 E0                  MOV dword ptr [EBP + -0x20],EDX
0060AFFB  79 03                     JNS 0x0060b000
0060AFFD  89 7D E0                  MOV dword ptr [EBP + -0x20],EDI
LAB_0060b000:
0060B000  8D 7C 01 01               LEA EDI,[ECX + EAX*0x1 + 0x1]
0060B004  89 7D 8C                  MOV dword ptr [EBP + -0x74],EDI
0060B007  0F BF 05 42 B2 7F 00      MOVSX EAX,word ptr [0x007fb242]
0060B00E  3B F8                     CMP EDI,EAX
0060B010  7E 05                     JLE 0x0060b017
0060B012  8B F8                     MOV EDI,EAX
0060B014  89 7D 8C                  MOV dword ptr [EBP + -0x74],EDI
LAB_0060b017:
0060B017  8D 4C 31 01               LEA ECX,[ECX + ESI*0x1 + 0x1]
0060B01B  89 4D 9C                  MOV dword ptr [EBP + -0x64],ECX
0060B01E  0F BF 05 40 B2 7F 00      MOVSX EAX,word ptr [0x007fb240]
0060B025  3B C8                     CMP ECX,EAX
0060B027  7E 05                     JLE 0x0060b02e
0060B029  8B C8                     MOV ECX,EAX
0060B02B  89 4D 9C                  MOV dword ptr [EBP + -0x64],ECX
LAB_0060b02e:
0060B02E  8B C1                     MOV EAX,ECX
0060B030  2B 45 E0                  SUB EAX,dword ptr [EBP + -0x20]
0060B033  8B CF                     MOV ECX,EDI
0060B035  2B CB                     SUB ECX,EBX
0060B037  0F AF C1                  IMUL EAX,ECX
0060B03A  8D 34 80                  LEA ESI,[EAX + EAX*0x4]
0060B03D  C7 45 FC 00 00 00 00      MOV dword ptr [EBP + -0x4],0x0
0060B044  8D 04 B5 00 00 00 00      LEA EAX,[ESI*0x4 + 0x0]
0060B04B  C1 E8 02                  SHR EAX,0x2
0060B04E  83 C0 03                  ADD EAX,0x3
0060B051  24 FC                     AND AL,0xfc
0060B053  E8 E8 29 12 00            CALL 0x0072da40
0060B058  89 65 E8                  MOV dword ptr [EBP + -0x18],ESP
0060B05B  8B C4                     MOV EAX,ESP
0060B05D  89 85 5C FF FF FF         MOV dword ptr [EBP + 0xffffff5c],EAX
0060B063  C7 00 00 00 00 00         MOV dword ptr [EAX],0x0
0060B069  C7 45 FC FF FF FF FF      MOV dword ptr [EBP + -0x4],0xffffffff
0060B070  8B 95 08 FF FF FF         MOV EDX,dword ptr [EBP + 0xffffff08]
0060B076  83 BA F5 01 00 00 43      CMP dword ptr [EDX + 0x1f5],0x43
0060B07D  75 26                     JNZ 0x0060b0a5
0060B07F  C7 45 FC 01 00 00 00      MOV dword ptr [EBP + -0x4],0x1
0060B086  8D 04 76                  LEA EAX,[ESI + ESI*0x2]
0060B089  C1 E0 02                  SHL EAX,0x2
0060B08C  83 C0 03                  ADD EAX,0x3
0060B08F  24 FC                     AND AL,0xfc
0060B091  E8 AA 29 12 00            CALL 0x0072da40
0060B096  89 65 E8                  MOV dword ptr [EBP + -0x18],ESP
0060B099  8B C4                     MOV EAX,ESP
0060B09B  89 45 90                  MOV dword ptr [EBP + -0x70],EAX
0060B09E  C7 45 FC FF FF FF FF      MOV dword ptr [EBP + -0x4],0xffffffff
LAB_0060b0a5:
0060B0A5  C7 85 60 FF FF FF 00 00 00 00  MOV dword ptr [EBP + 0xffffff60],0x0
0060B0AF  89 5D C4                  MOV dword ptr [EBP + -0x3c],EBX
0060B0B2  3B DF                     CMP EBX,EDI
0060B0B4  0F 8D C7 05 00 00         JGE 0x0060b681
LAB_0060b0ba:
0060B0BA  8B 45 E0                  MOV EAX,dword ptr [EBP + -0x20]
0060B0BD  89 85 6C FF FF FF         MOV dword ptr [EBP + 0xffffff6c],EAX
0060B0C3  3B 45 9C                  CMP EAX,dword ptr [EBP + -0x64]
0060B0C6  0F 8D A6 05 00 00         JGE 0x0060b672
LAB_0060b0cc:
0060B0CC  C7 45 C8 00 00 00 00      MOV dword ptr [EBP + -0x38],0x0
LAB_0060b0d3:
0060B0D3  8B 95 6C FF FF FF         MOV EDX,dword ptr [EBP + 0xffffff6c]
0060B0D9  66 85 D2                  TEST DX,DX
0060B0DC  7C 68                     JL 0x0060b146
0060B0DE  66 8B 35 40 B2 7F 00      MOV SI,word ptr [0x007fb240]
0060B0E5  66 3B D6                  CMP DX,SI
0060B0E8  7D 5C                     JGE 0x0060b146
0060B0EA  8B 4D C4                  MOV ECX,dword ptr [EBP + -0x3c]
0060B0ED  66 85 C9                  TEST CX,CX
0060B0F0  7C 54                     JL 0x0060b146
0060B0F2  66 3B 0D 42 B2 7F 00      CMP CX,word ptr [0x007fb242]
0060B0F9  7D 4B                     JGE 0x0060b146
0060B0FB  8B 45 C8                  MOV EAX,dword ptr [EBP + -0x38]
0060B0FE  66 85 C0                  TEST AX,AX
0060B101  7C 43                     JL 0x0060b146
0060B103  66 3B 05 44 B2 7F 00      CMP AX,word ptr [0x007fb244]
0060B10A  7D 3A                     JGE 0x0060b146
0060B10C  0F BF 3D 46 B2 7F 00      MOVSX EDI,word ptr [0x007fb246]
0060B113  0F BF C0                  MOVSX EAX,AX
0060B116  0F AF F8                  IMUL EDI,EAX
0060B119  0F BF C6                  MOVSX EAX,SI
0060B11C  0F BF C9                  MOVSX ECX,CX
0060B11F  0F AF C1                  IMUL EAX,ECX
0060B122  03 F8                     ADD EDI,EAX
0060B124  0F BF D2                  MOVSX EDX,DX
0060B127  03 FA                     ADD EDI,EDX
0060B129  A1 48 B2 7F 00            MOV EAX,[0x007fb248]
0060B12E  8B 34 F8                  MOV ESI,dword ptr [EAX + EDI*0x8]
0060B131  EB 15                     JMP 0x0060b148
LAB_0060b146:
0060B146  33 F6                     XOR ESI,ESI
LAB_0060b148:
0060B148  85 F6                     TEST ESI,ESI
0060B14A  0F 84 F9 04 00 00         JZ 0x0060b649
0060B150  8B 16                     MOV EDX,dword ptr [ESI]
0060B152  8B CE                     MOV ECX,ESI
0060B154  FF 92 F0 00 00 00         CALL dword ptr [EDX + 0xf0]
0060B15A  85 C0                     TEST EAX,EAX
0060B15C  0F 84 E7 04 00 00         JZ 0x0060b649
0060B162  81 7E 20 E8 03 00 00      CMP dword ptr [ESI + 0x20],0x3e8
0060B169  75 5A                     JNZ 0x0060b1c5
0060B16B  8B 06                     MOV EAX,dword ptr [ESI]
0060B16D  8B CE                     MOV ECX,ESI
0060B16F  FF 50 2C                  CALL dword ptr [EAX + 0x2c]
0060B172  83 3C 85 68 1D 79 00 01   CMP dword ptr [EAX*0x4 + 0x791d68],0x1
0060B17A  75 49                     JNZ 0x0060b1c5
0060B17C  33 C9                     XOR ECX,ECX
0060B17E  33 C0                     XOR EAX,EAX
0060B180  8B 95 60 FF FF FF         MOV EDX,dword ptr [EBP + 0xffffff60]
0060B186  85 D2                     TEST EDX,EDX
0060B188  7E 1A                     JLE 0x0060b1a4
LAB_0060b18a:
0060B18A  8B BD 5C FF FF FF         MOV EDI,dword ptr [EBP + 0xffffff5c]
0060B190  8B 3C 87                  MOV EDI,dword ptr [EDI + EAX*0x4]
0060B193  3B 7E 18                  CMP EDI,dword ptr [ESI + 0x18]
0060B196  74 07                     JZ 0x0060b19f
0060B198  40                        INC EAX
0060B199  3B C2                     CMP EAX,EDX
0060B19B  7C ED                     JL 0x0060b18a
0060B19D  EB 05                     JMP 0x0060b1a4
LAB_0060b19f:
0060B19F  B9 01 00 00 00            MOV ECX,0x1
LAB_0060b1a4:
0060B1A4  85 C9                     TEST ECX,ECX
0060B1A6  0F 85 9D 04 00 00         JNZ 0x0060b649
0060B1AC  8B 4E 18                  MOV ECX,dword ptr [ESI + 0x18]
0060B1AF  8B 95 5C FF FF FF         MOV EDX,dword ptr [EBP + 0xffffff5c]
0060B1B5  8B 85 60 FF FF FF         MOV EAX,dword ptr [EBP + 0xffffff60]
0060B1BB  89 0C 82                  MOV dword ptr [EDX + EAX*0x4],ECX
0060B1BE  40                        INC EAX
0060B1BF  89 85 60 FF FF FF         MOV dword ptr [EBP + 0xffffff60],EAX
LAB_0060b1c5:
0060B1C5  8B 9D 08 FF FF FF         MOV EBX,dword ptr [EBP + 0xffffff08]
0060B1CB  8B BB F5 01 00 00         MOV EDI,dword ptr [EBX + 0x1f5]
0060B1D1  83 FF 43                  CMP EDI,0x43
0060B1D4  8B 46 24                  MOV EAX,dword ptr [ESI + 0x24]
0060B1D7  0F 85 C0 01 00 00         JNZ 0x0060b39d
0060B1DD  83 F8 08                  CMP EAX,0x8
0060B1E0  0F 83 63 04 00 00         JNC 0x0060b649
0060B1E6  8B 0D 38 2A 80 00         MOV ECX,dword ptr [0x00802a38]
0060B1EC  85 C9                     TEST ECX,ECX
0060B1EE  74 11                     JZ 0x0060b201
0060B1F0  8D 04 C0                  LEA EAX,[EAX + EAX*0x8]
0060B1F3  80 BC C0 E9 87 80 00 08   CMP byte ptr [EAX + EAX*0x8 + 0x8087e9],0x8
0060B1FB  0F 83 48 04 00 00         JNC 0x0060b649
LAB_0060b201:
0060B201  8A 46 24                  MOV AL,byte ptr [ESI + 0x24]
0060B204  88 85 4C FF FF FF         MOV byte ptr [EBP + 0xffffff4c],AL
0060B20A  8A 8B D9 01 00 00         MOV CL,byte ptr [EBX + 0x1d9]
0060B210  88 8D 50 FF FF FF         MOV byte ptr [EBP + 0xffffff50],CL
0060B216  8A 15 8F 8A 80 00         MOV DL,byte ptr [0x00808a8f]
0060B21C  84 D2                     TEST DL,DL
0060B21E  74 36                     JZ 0x0060b256
0060B220  8B 85 50 FF FF FF         MOV EAX,dword ptr [EBP + 0xffffff50]
0060B226  25 FF 00 00 00            AND EAX,0xff
0060B22B  8D 0C C0                  LEA ECX,[EAX + EAX*0x8]
0060B22E  8B 85 4C FF FF FF         MOV EAX,dword ptr [EBP + 0xffffff4c]
0060B234  25 FF 00 00 00            AND EAX,0xff
0060B239  8D 04 C0                  LEA EAX,[EAX + EAX*0x8]
0060B23C  8A 8C C9 EA 87 80 00      MOV CL,byte ptr [ECX + ECX*0x8 + 0x8087ea]
0060B243  33 D2                     XOR EDX,EDX
0060B245  3A 8C C0 EA 87 80 00      CMP CL,byte ptr [EAX + EAX*0x8 + 0x8087ea]
0060B24C  0F 95 C2                  SETNZ DL
0060B24F  8B C2                     MOV EAX,EDX
0060B251  E9 83 00 00 00            JMP 0x0060b2d9
LAB_0060b256:
0060B256  3A C1                     CMP AL,CL
0060B258  74 74                     JZ 0x0060b2ce
0060B25A  8B 85 4C FF FF FF         MOV EAX,dword ptr [EBP + 0xffffff4c]
0060B260  25 FF 00 00 00            AND EAX,0xff
0060B265  8B 8D 50 FF FF FF         MOV ECX,dword ptr [EBP + 0xffffff50]
0060B26B  81 E1 FF 00 00 00         AND ECX,0xff
0060B271  8A 94 C1 4F 8A 80 00      MOV DL,byte ptr [ECX + EAX*0x8 + 0x808a4f]
0060B278  84 D2                     TEST DL,DL
0060B27A  75 12                     JNZ 0x0060b28e
0060B27C  8A 9C C8 4F 8A 80 00      MOV BL,byte ptr [EAX + ECX*0x8 + 0x808a4f]
0060B283  84 DB                     TEST BL,BL
0060B285  75 07                     JNZ 0x0060b28e
0060B287  B8 FE FF FF FF            MOV EAX,0xfffffffe
0060B28C  EB 42                     JMP 0x0060b2d0
LAB_0060b28e:
0060B28E  80 FA 01                  CMP DL,0x1
0060B291  75 10                     JNZ 0x0060b2a3
0060B293  8A 9C C8 4F 8A 80 00      MOV BL,byte ptr [EAX + ECX*0x8 + 0x808a4f]
0060B29A  84 DB                     TEST BL,BL
0060B29C  75 05                     JNZ 0x0060b2a3
0060B29E  83 C8 FF                  OR EAX,0xffffffff
0060B2A1  EB 2D                     JMP 0x0060b2d0
LAB_0060b2a3:
0060B2A3  84 D2                     TEST DL,DL
0060B2A5  75 11                     JNZ 0x0060b2b8
0060B2A7  80 BC C8 4F 8A 80 00 01   CMP byte ptr [EAX + ECX*0x8 + 0x808a4f],0x1
0060B2AF  75 07                     JNZ 0x0060b2b8
0060B2B1  B8 01 00 00 00            MOV EAX,0x1
0060B2B6  EB 18                     JMP 0x0060b2d0
LAB_0060b2b8:
0060B2B8  80 FA 01                  CMP DL,0x1
0060B2BB  75 11                     JNZ 0x0060b2ce
0060B2BD  80 BC C8 4F 8A 80 00 01   CMP byte ptr [EAX + ECX*0x8 + 0x808a4f],0x1
0060B2C5  75 07                     JNZ 0x0060b2ce
0060B2C7  B8 02 00 00 00            MOV EAX,0x2
0060B2CC  EB 02                     JMP 0x0060b2d0
LAB_0060b2ce:
0060B2CE  33 C0                     XOR EAX,EAX
LAB_0060b2d0:
0060B2D0  33 C9                     XOR ECX,ECX
0060B2D2  85 C0                     TEST EAX,EAX
0060B2D4  0F 9C C1                  SETL CL
0060B2D7  8B C1                     MOV EAX,ECX
LAB_0060b2d9:
0060B2D9  85 C0                     TEST EAX,EAX
0060B2DB  0F 84 68 03 00 00         JZ 0x0060b649
0060B2E1  8B 16                     MOV EDX,dword ptr [ESI]
0060B2E3  8B CE                     MOV ECX,ESI
0060B2E5  FF 92 F8 00 00 00         CALL dword ptr [EDX + 0xf8]
0060B2EB  85 C0                     TEST EAX,EAX
0060B2ED  0F 84 56 03 00 00         JZ 0x0060b649
0060B2F3  8B 85 7C FF FF FF         MOV EAX,dword ptr [EBP + 0xffffff7c]
0060B2F9  8D 04 40                  LEA EAX,[EAX + EAX*0x2]
0060B2FC  8B 4D 90                  MOV ECX,dword ptr [EBP + -0x70]
0060B2FF  8D 1C 81                  LEA EBX,[ECX + EAX*0x4]
0060B302  89 33                     MOV dword ptr [EBX],ESI
0060B304  8B 16                     MOV EDX,dword ptr [ESI]
0060B306  8B CE                     MOV ECX,ESI
0060B308  FF 52 78                  CALL dword ptr [EDX + 0x78]
0060B30B  89 43 04                  MOV dword ptr [EBX + 0x4],EAX
0060B30E  8B BD 08 FF FF FF         MOV EDI,dword ptr [EBP + 0xffffff08]
0060B314  8B 8F ED 01 00 00         MOV ECX,dword ptr [EDI + 0x1ed]
0060B31A  85 C9                     TEST ECX,ECX
0060B31C  B8 79 19 8C 02            MOV EAX,0x28c1979
0060B321  7C 10                     JL 0x0060b333
0060B323  F7 E9                     IMUL ECX
0060B325  D1 FA                     SAR EDX,0x1
0060B327  8B C2                     MOV EAX,EDX
0060B329  C1 E8 1F                  SHR EAX,0x1f
0060B32C  03 D0                     ADD EDX,EAX
0060B32E  0F BF CA                  MOVSX ECX,DX
0060B331  EB 0F                     JMP 0x0060b342
LAB_0060b333:
0060B333  F7 E9                     IMUL ECX
0060B335  D1 FA                     SAR EDX,0x1
0060B337  8B CA                     MOV ECX,EDX
0060B339  C1 E9 1F                  SHR ECX,0x1f
0060B33C  03 D1                     ADD EDX,ECX
0060B33E  0F BF CA                  MOVSX ECX,DX
0060B341  49                        DEC ECX
LAB_0060b342:
0060B342  8B 97 E9 01 00 00         MOV EDX,dword ptr [EDI + 0x1e9]
0060B348  85 D2                     TEST EDX,EDX
0060B34A  B8 79 19 8C 02            MOV EAX,0x28c1979
0060B34F  7C 10                     JL 0x0060b361
0060B351  F7 EA                     IMUL EDX
0060B353  D1 FA                     SAR EDX,0x1
0060B355  8B C2                     MOV EAX,EDX
0060B357  C1 E8 1F                  SHR EAX,0x1f
0060B35A  03 D0                     ADD EDX,EAX
0060B35C  0F BF C2                  MOVSX EAX,DX
0060B35F  EB 0F                     JMP 0x0060b370
LAB_0060b361:
0060B361  F7 EA                     IMUL EDX
0060B363  D1 FA                     SAR EDX,0x1
0060B365  8B C2                     MOV EAX,EDX
0060B367  C1 E8 1F                  SHR EAX,0x1f
0060B36A  03 D0                     ADD EDX,EAX
0060B36C  0F BF C2                  MOVSX EAX,DX
0060B36F  48                        DEC EAX
LAB_0060b370:
0060B370  51                        PUSH ECX
0060B371  50                        PUSH EAX
0060B372  8B 4D C4                  MOV ECX,dword ptr [EBP + -0x3c]
0060B375  51                        PUSH ECX
0060B376  8B 95 6C FF FF FF         MOV EDX,dword ptr [EBP + 0xffffff6c]
0060B37C  52                        PUSH EDX
0060B37D  E8 0E 1C 0A 00            CALL 0x006acf90
0060B382  89 43 08                  MOV dword ptr [EBX + 0x8],EAX
0060B385  8B 06                     MOV EAX,dword ptr [ESI]
0060B387  8B CE                     MOV ECX,ESI
0060B389  FF 50 2C                  CALL dword ptr [EAX + 0x2c]
0060B38C  83 F8 23                  CMP EAX,0x23
0060B38F  0F 85 AE 02 00 00         JNZ 0x0060b643
0060B395  FF 45 B8                  INC dword ptr [EBP + -0x48]
0060B398  E9 A6 02 00 00            JMP 0x0060b643
LAB_0060b39d:
0060B39D  83 F8 08                  CMP EAX,0x8
0060B3A0  0F 83 20 01 00 00         JNC 0x0060b4c6
0060B3A6  8B 0D 38 2A 80 00         MOV ECX,dword ptr [0x00802a38]
0060B3AC  85 C9                     TEST ECX,ECX
0060B3AE  74 11                     JZ 0x0060b3c1
0060B3B0  8D 04 C0                  LEA EAX,[EAX + EAX*0x8]
0060B3B3  80 BC C0 E9 87 80 00 08   CMP byte ptr [EAX + EAX*0x8 + 0x8087e9],0x8
0060B3BB  0F 83 05 01 00 00         JNC 0x0060b4c6
LAB_0060b3c1:
0060B3C1  8A 46 24                  MOV AL,byte ptr [ESI + 0x24]
0060B3C4  88 85 3C FF FF FF         MOV byte ptr [EBP + 0xffffff3c],AL
0060B3CA  8A 8B D9 01 00 00         MOV CL,byte ptr [EBX + 0x1d9]
0060B3D0  88 8D 40 FF FF FF         MOV byte ptr [EBP + 0xffffff40],CL
0060B3D6  8A 15 8F 8A 80 00         MOV DL,byte ptr [0x00808a8f]
0060B3DC  84 D2                     TEST DL,DL
0060B3DE  74 36                     JZ 0x0060b416
0060B3E0  8B 85 40 FF FF FF         MOV EAX,dword ptr [EBP + 0xffffff40]
0060B3E6  25 FF 00 00 00            AND EAX,0xff
0060B3EB  8D 0C C0                  LEA ECX,[EAX + EAX*0x8]
0060B3EE  8B 85 3C FF FF FF         MOV EAX,dword ptr [EBP + 0xffffff3c]
0060B3F4  25 FF 00 00 00            AND EAX,0xff
0060B3F9  8D 04 C0                  LEA EAX,[EAX + EAX*0x8]
0060B3FC  8A 8C C9 EA 87 80 00      MOV CL,byte ptr [ECX + ECX*0x8 + 0x8087ea]
0060B403  33 D2                     XOR EDX,EDX
0060B405  3A 8C C0 EA 87 80 00      CMP CL,byte ptr [EAX + EAX*0x8 + 0x8087ea]
0060B40C  0F 95 C2                  SETNZ DL
0060B40F  8B C2                     MOV EAX,EDX
0060B411  E9 80 00 00 00            JMP 0x0060b496
LAB_0060b416:
0060B416  3A C1                     CMP AL,CL
0060B418  74 71                     JZ 0x0060b48b
0060B41A  8B 85 3C FF FF FF         MOV EAX,dword ptr [EBP + 0xffffff3c]
0060B420  25 FF 00 00 00            AND EAX,0xff
0060B425  8B 8D 40 FF FF FF         MOV ECX,dword ptr [EBP + 0xffffff40]
0060B42B  81 E1 FF 00 00 00         AND ECX,0xff
0060B431  8A 94 C1 4F 8A 80 00      MOV DL,byte ptr [ECX + EAX*0x8 + 0x808a4f]
0060B438  84 D2                     TEST DL,DL
0060B43A  75 10                     JNZ 0x0060b44c
0060B43C  38 94 C8 4F 8A 80 00      CMP byte ptr [EAX + ECX*0x8 + 0x808a4f],DL
0060B443  75 07                     JNZ 0x0060b44c
0060B445  B8 FE FF FF FF            MOV EAX,0xfffffffe
0060B44A  EB 41                     JMP 0x0060b48d
LAB_0060b44c:
0060B44C  80 FA 01                  CMP DL,0x1
0060B44F  75 0F                     JNZ 0x0060b460
0060B451  80 BC C8 4F 8A 80 00 00   CMP byte ptr [EAX + ECX*0x8 + 0x808a4f],0x0
0060B459  75 05                     JNZ 0x0060b460
0060B45B  83 C8 FF                  OR EAX,0xffffffff
0060B45E  EB 2D                     JMP 0x0060b48d
LAB_0060b460:
0060B460  84 D2                     TEST DL,DL
0060B462  75 11                     JNZ 0x0060b475
0060B464  80 BC C8 4F 8A 80 00 01   CMP byte ptr [EAX + ECX*0x8 + 0x808a4f],0x1
0060B46C  75 07                     JNZ 0x0060b475
0060B46E  B8 01 00 00 00            MOV EAX,0x1
0060B473  EB 18                     JMP 0x0060b48d
LAB_0060b475:
0060B475  80 FA 01                  CMP DL,0x1
0060B478  75 11                     JNZ 0x0060b48b
0060B47A  80 BC C8 4F 8A 80 00 01   CMP byte ptr [EAX + ECX*0x8 + 0x808a4f],0x1
0060B482  75 07                     JNZ 0x0060b48b
0060B484  B8 02 00 00 00            MOV EAX,0x2
0060B489  EB 02                     JMP 0x0060b48d
LAB_0060b48b:
0060B48B  33 C0                     XOR EAX,EAX
LAB_0060b48d:
0060B48D  33 C9                     XOR ECX,ECX
0060B48F  85 C0                     TEST EAX,EAX
0060B491  0F 9C C1                  SETL CL
0060B494  8B C1                     MOV EAX,ECX
LAB_0060b496:
0060B496  85 C0                     TEST EAX,EAX
0060B498  74 2C                     JZ 0x0060b4c6
0060B49A  8B 16                     MOV EDX,dword ptr [ESI]
0060B49C  8B CE                     MOV ECX,ESI
0060B49E  FF 92 F8 00 00 00         CALL dword ptr [EDX + 0xf8]
0060B4A4  85 C0                     TEST EAX,EAX
0060B4A6  0F 84 9D 01 00 00         JZ 0x0060b649
0060B4AC  83 BB F5 01 00 00 4C      CMP dword ptr [EBX + 0x1f5],0x4c
0060B4B3  0F 84 90 01 00 00         JZ 0x0060b649
0060B4B9  56                        PUSH ESI
0060B4BA  8B CB                     MOV ECX,EBX
0060B4BC  E8 23 8B DF FF            CALL 0x00403fe4
0060B4C1  E9 7D 01 00 00            JMP 0x0060b643
LAB_0060b4c6:
0060B4C6  83 FF 4C                  CMP EDI,0x4c
0060B4C9  0F 85 7A 01 00 00         JNZ 0x0060b649
0060B4CF  56                        PUSH ESI
0060B4D0  8B BD 08 FF FF FF         MOV EDI,dword ptr [EBP + 0xffffff08]
0060B4D6  8B CF                     MOV ECX,EDI
0060B4D8  E8 07 8B DF FF            CALL 0x00403fe4
0060B4DD  8B 45 C4                  MOV EAX,dword ptr [EBP + -0x3c]
0060B4E0  50                        PUSH EAX
0060B4E1  8B 8D 6C FF FF FF         MOV ECX,dword ptr [EBP + 0xffffff6c]
0060B4E7  51                        PUSH ECX
0060B4E8  8B 95 78 FF FF FF         MOV EDX,dword ptr [EBP + 0xffffff78]
0060B4EE  52                        PUSH EDX
0060B4EF  8B 45 88                  MOV EAX,dword ptr [EBP + -0x78]
0060B4F2  50                        PUSH EAX
0060B4F3  E8 98 1A 0A 00            CALL 0x006acf90
0060B4F8  8B D8                     MOV EBX,EAX
0060B4FA  8B 4F 1C                  MOV ECX,dword ptr [EDI + 0x1c]
0060B4FD  69 C9 6D 4E C6 41         IMUL ECX,ECX,0x41c64e6d
0060B503  8D 81 39 30 00 00         LEA EAX,[ECX + 0x3039]
0060B509  89 47 1C                  MOV dword ptr [EDI + 0x1c],EAX
0060B50C  8D 4C 5B 01               LEA ECX,[EBX + EBX*0x2 + 0x1]
0060B510  C1 E8 10                  SHR EAX,0x10
0060B513  33 D2                     XOR EDX,EDX
0060B515  F7 F1                     DIV ECX
0060B517  03 DA                     ADD EBX,EDX
0060B519  8D 55 D0                  LEA EDX,[EBP + -0x30]
0060B51C  52                        PUSH EDX
0060B51D  8D 85 64 FF FF FF         LEA EAX,[EBP + 0xffffff64]
0060B523  50                        PUSH EAX
0060B524  8D 4D 94                  LEA ECX,[EBP + -0x6c]
0060B527  51                        PUSH ECX
0060B528  8B CE                     MOV ECX,ESI
0060B52A  E8 96 63 DF FF            CALL 0x004018c5
0060B52F  8B 3D 88 2A 80 00         MOV EDI,dword ptr [0x00802a88]
0060B535  85 FF                     TEST EDI,EDI
0060B537  0F 84 06 01 00 00         JZ 0x0060b643
0060B53D  0F BF 55 D0               MOVSX EDX,word ptr [EBP + -0x30]
0060B541  89 95 18 FF FF FF         MOV dword ptr [EBP + 0xffffff18],EDX
0060B547  0F BF 85 64 FF FF FF      MOVSX EAX,word ptr [EBP + 0xffffff64]
0060B54E  0F BF 4D 94               MOVSX ECX,word ptr [EBP + -0x6c]
0060B552  80 3D 4D 87 80 00 FF      CMP byte ptr [0x0080874d],0xff
0060B559  0F 84 AF 00 00 00         JZ 0x0060b60e
0060B55F  8B 97 F8 00 00 00         MOV EDX,dword ptr [EDI + 0xf8]
0060B565  85 D2                     TEST EDX,EDX
0060B567  0F 84 A1 00 00 00         JZ 0x0060b60e
0060B56D  8D 95 2C FF FF FF         LEA EDX,[EBP + 0xffffff2c]
0060B573  52                        PUSH EDX
0060B574  8D 95 30 FF FF FF         LEA EDX,[EBP + 0xffffff30]
0060B57A  52                        PUSH EDX
0060B57B  50                        PUSH EAX
0060B57C  51                        PUSH ECX
0060B57D  8B 87 0C 01 00 00         MOV EAX,dword ptr [EDI + 0x10c]
0060B583  50                        PUSH EAX
0060B584  8B CF                     MOV ECX,EDI
0060B586  E8 C8 89 DF FF            CALL 0x00403f53
0060B58B  8B 85 18 FF FF FF         MOV EAX,dword ptr [EBP + 0xffffff18]
0060B591  85 C0                     TEST EAX,EAX
0060B593  7C 79                     JL 0x0060b60e
0060B595  8B C8                     MOV ECX,EAX
0060B597  83 F9 05                  CMP ECX,0x5
0060B59A  7D 72                     JGE 0x0060b60e
0060B59C  8B 85 30 FF FF FF         MOV EAX,dword ptr [EBP + 0xffffff30]
0060B5A2  85 C0                     TEST EAX,EAX
0060B5A4  7C 24                     JL 0x0060b5ca
0060B5A6  3B 47 30                  CMP EAX,dword ptr [EDI + 0x30]
0060B5A9  7D 1F                     JGE 0x0060b5ca
0060B5AB  8B 14 8D D0 AE 79 00      MOV EDX,dword ptr [ECX*0x4 + 0x79aed0]
0060B5B2  8B 85 2C FF FF FF         MOV EAX,dword ptr [EBP + 0xffffff2c]
0060B5B8  03 C2                     ADD EAX,EDX
0060B5BA  85 C0                     TEST EAX,EAX
0060B5BC  7C 0C                     JL 0x0060b5ca
0060B5BE  3B 47 34                  CMP EAX,dword ptr [EDI + 0x34]
0060B5C1  7D 07                     JGE 0x0060b5ca
0060B5C3  B8 01 00 00 00            MOV EAX,0x1
0060B5C8  EB 02                     JMP 0x0060b5cc
LAB_0060b5ca:
0060B5CA  33 C0                     XOR EAX,EAX
LAB_0060b5cc:
0060B5CC  85 C0                     TEST EAX,EAX
0060B5CE  74 30                     JZ 0x0060b600
0060B5D0  8B 47 4C                  MOV EAX,dword ptr [EDI + 0x4c]
0060B5D3  85 C0                     TEST EAX,EAX
0060B5D5  74 29                     JZ 0x0060b600
0060B5D7  8B 0C 8D D0 AE 79 00      MOV ECX,dword ptr [ECX*0x4 + 0x79aed0]
0060B5DE  03 8D 2C FF FF FF         ADD ECX,dword ptr [EBP + 0xffffff2c]
0060B5E4  0F AF 4F 30               IMUL ECX,dword ptr [EDI + 0x30]
0060B5E8  03 C8                     ADD ECX,EAX
0060B5EA  33 C0                     XOR EAX,EAX
0060B5EC  8B 95 30 FF FF FF         MOV EDX,dword ptr [EBP + 0xffffff30]
0060B5F2  8A 04 11                  MOV AL,byte ptr [ECX + EDX*0x1]
0060B5F5  33 C9                     XOR ECX,ECX
0060B5F7  85 C0                     TEST EAX,EAX
0060B5F9  0F 95 C1                  SETNZ CL
0060B5FC  8B C1                     MOV EAX,ECX
0060B5FE  EB 13                     JMP 0x0060b613
LAB_0060b600:
0060B600  83 C8 FF                  OR EAX,0xffffffff
0060B603  33 C9                     XOR ECX,ECX
0060B605  85 C0                     TEST EAX,EAX
0060B607  0F 95 C1                  SETNZ CL
0060B60A  8B C1                     MOV EAX,ECX
0060B60C  EB 05                     JMP 0x0060b613
LAB_0060b60e:
0060B60E  B8 01 00 00 00            MOV EAX,0x1
LAB_0060b613:
0060B613  85 C0                     TEST EAX,EAX
0060B615  74 2C                     JZ 0x0060b643
0060B617  8B 16                     MOV EDX,dword ptr [ESI]
0060B619  8B CE                     MOV ECX,ESI
0060B61B  FF 52 2C                  CALL dword ptr [EDX + 0x2c]
0060B61E  83 3C 85 68 1D 79 00 01   CMP dword ptr [EAX*0x4 + 0x791d68],0x1
0060B626  53                        PUSH EBX
0060B627  75 04                     JNZ 0x0060b62d
0060B629  6A 01                     PUSH 0x1
0060B62B  EB 02                     JMP 0x0060b62f
LAB_0060b62d:
0060B62D  6A 00                     PUSH 0x0
LAB_0060b62f:
0060B62F  8D 8E D5 01 00 00         LEA ECX,[ESI + 0x1d5]
0060B635  E8 92 9C DF FF            CALL 0x004052cc
0060B63A  50                        PUSH EAX
0060B63B  E8 9B A6 DF FF            CALL 0x00405cdb
0060B640  83 C4 0C                  ADD ESP,0xc
LAB_0060b643:
0060B643  FF 85 7C FF FF FF         INC dword ptr [EBP + 0xffffff7c]
FUN_0060aef0::cf_continue_loop_0060B649:
0060B649  8B 45 C8                  MOV EAX,dword ptr [EBP + -0x38]
0060B64C  40                        INC EAX
0060B64D  89 45 C8                  MOV dword ptr [EBP + -0x38],EAX
0060B650  83 F8 05                  CMP EAX,0x5
0060B653  0F 8C 7A FA FF FF         JL 0x0060b0d3
0060B659  8B 85 6C FF FF FF         MOV EAX,dword ptr [EBP + 0xffffff6c]
0060B65F  40                        INC EAX
0060B660  89 85 6C FF FF FF         MOV dword ptr [EBP + 0xffffff6c],EAX
0060B666  3B 45 9C                  CMP EAX,dword ptr [EBP + -0x64]
0060B669  0F 8C 5D FA FF FF         JL 0x0060b0cc
0060B66F  8B 7D 8C                  MOV EDI,dword ptr [EBP + -0x74]
LAB_0060b672:
0060B672  8B 45 C4                  MOV EAX,dword ptr [EBP + -0x3c]
0060B675  40                        INC EAX
0060B676  89 45 C4                  MOV dword ptr [EBP + -0x3c],EAX
0060B679  3B C7                     CMP EAX,EDI
0060B67B  0F 8C 39 FA FF FF         JL 0x0060b0ba
LAB_0060b681:
0060B681  8B 85 08 FF FF FF         MOV EAX,dword ptr [EBP + 0xffffff08]
0060B687  83 B8 F5 01 00 00 43      CMP dword ptr [EAX + 0x1f5],0x43
0060B68E  0F 85 DD 02 00 00         JNZ 0x0060b971
0060B694  8B 45 B8                  MOV EAX,dword ptr [EBP + -0x48]
0060B697  85 C0                     TEST EAX,EAX
0060B699  0F 84 95 00 00 00         JZ 0x0060b734
0060B69F  C7 45 FC 02 00 00 00      MOV dword ptr [EBP + -0x4],0x2
0060B6A6  8D 04 40                  LEA EAX,[EAX + EAX*0x2]
0060B6A9  C1 E0 02                  SHL EAX,0x2
0060B6AC  83 C0 03                  ADD EAX,0x3
0060B6AF  24 FC                     AND AL,0xfc
0060B6B1  E8 8A 23 12 00            CALL 0x0072da40
0060B6B6  89 65 E8                  MOV dword ptr [EBP + -0x18],ESP
0060B6B9  8B C4                     MOV EAX,ESP
0060B6BB  89 85 58 FF FF FF         MOV dword ptr [EBP + 0xffffff58],EAX
0060B6C1  C7 45 FC FF FF FF FF      MOV dword ptr [EBP + -0x4],0xffffffff
0060B6C8  33 FF                     XOR EDI,EDI
0060B6CA  89 7D B8                  MOV dword ptr [EBP + -0x48],EDI
0060B6CD  89 7D 98                  MOV dword ptr [EBP + -0x68],EDI
0060B6D0  39 BD 7C FF FF FF         CMP dword ptr [EBP + 0xffffff7c],EDI
0060B6D6  7E 5C                     JLE 0x0060b734
LAB_0060b6d8:
0060B6D8  8B 45 98                  MOV EAX,dword ptr [EBP + -0x68]
0060B6DB  8D 0C 40                  LEA ECX,[EAX + EAX*0x2]
0060B6DE  8B 55 90                  MOV EDX,dword ptr [EBP + -0x70]
0060B6E1  8D 34 8A                  LEA ESI,[EDX + ECX*0x4]
0060B6E4  8B 1E                     MOV EBX,dword ptr [ESI]
0060B6E6  8B 03                     MOV EAX,dword ptr [EBX]
0060B6E8  8B CB                     MOV ECX,EBX
0060B6EA  FF 50 2C                  CALL dword ptr [EAX + 0x2c]
0060B6ED  83 F8 23                  CMP EAX,0x23
0060B6F0  75 33                     JNZ 0x0060b725
0060B6F2  C7 46 08 00 00 00 00      MOV dword ptr [ESI + 0x8],0x0
0060B6F9  53                        PUSH EBX
0060B6FA  8B 8D 08 FF FF FF         MOV ECX,dword ptr [EBP + 0xffffff08]
0060B700  E8 DF 88 DF FF            CALL 0x00403fe4
0060B705  8D 0C 7F                  LEA ECX,[EDI + EDI*0x2]
0060B708  8B 95 58 FF FF FF         MOV EDX,dword ptr [EBP + 0xffffff58]
0060B70E  8D 04 8A                  LEA EAX,[EDX + ECX*0x4]
0060B711  8B 0E                     MOV ECX,dword ptr [ESI]
0060B713  89 08                     MOV dword ptr [EAX],ECX
0060B715  8B 56 04                  MOV EDX,dword ptr [ESI + 0x4]
0060B718  89 50 04                  MOV dword ptr [EAX + 0x4],EDX
0060B71B  8B 4E 08                  MOV ECX,dword ptr [ESI + 0x8]
0060B71E  89 48 08                  MOV dword ptr [EAX + 0x8],ECX
0060B721  47                        INC EDI
0060B722  89 7D B8                  MOV dword ptr [EBP + -0x48],EDI
LAB_0060b725:
0060B725  8B 45 98                  MOV EAX,dword ptr [EBP + -0x68]
0060B728  40                        INC EAX
0060B729  89 45 98                  MOV dword ptr [EBP + -0x68],EAX
0060B72C  3B 85 7C FF FF FF         CMP EAX,dword ptr [EBP + 0xffffff7c]
0060B732  7C A4                     JL 0x0060b6d8
LAB_0060b734:
0060B734  33 DB                     XOR EBX,EBX
0060B736  8B 85 7C FF FF FF         MOV EAX,dword ptr [EBP + 0xffffff7c]
0060B73C  85 C0                     TEST EAX,EAX
0060B73E  7E 56                     JLE 0x0060b796
LAB_0060b740:
0060B740  33 FF                     XOR EDI,EDI
0060B742  89 7D 84                  MOV dword ptr [EBP + -0x7c],EDI
0060B745  85 DB                     TEST EBX,EBX
0060B747  7E 44                     JLE 0x0060b78d
LAB_0060b749:
0060B749  8D 04 5B                  LEA EAX,[EBX + EBX*0x2]
0060B74C  8B 4D 90                  MOV ECX,dword ptr [EBP + -0x70]
0060B74F  8D 04 81                  LEA EAX,[ECX + EAX*0x4]
0060B752  8D 14 7F                  LEA EDX,[EDI + EDI*0x2]
0060B755  8D 0C 91                  LEA ECX,[ECX + EDX*0x4]
0060B758  8B 50 08                  MOV EDX,dword ptr [EAX + 0x8]
0060B75B  8B 71 08                  MOV ESI,dword ptr [ECX + 0x8]
0060B75E  3B D6                     CMP EDX,ESI
0060B760  7D 23                     JGE 0x0060b785
0060B762  8B 79 04                  MOV EDI,dword ptr [ECX + 0x4]
0060B765  89 7D AC                  MOV dword ptr [EBP + -0x54],EDI
0060B768  8B 39                     MOV EDI,dword ptr [ECX]
0060B76A  89 51 08                  MOV dword ptr [ECX + 0x8],EDX
0060B76D  8B 50 04                  MOV EDX,dword ptr [EAX + 0x4]
0060B770  89 51 04                  MOV dword ptr [ECX + 0x4],EDX
0060B773  8B 10                     MOV EDX,dword ptr [EAX]
0060B775  89 11                     MOV dword ptr [ECX],EDX
0060B777  89 70 08                  MOV dword ptr [EAX + 0x8],ESI
0060B77A  8B 4D AC                  MOV ECX,dword ptr [EBP + -0x54]
0060B77D  89 48 04                  MOV dword ptr [EAX + 0x4],ECX
0060B780  89 38                     MOV dword ptr [EAX],EDI
0060B782  8B 7D 84                  MOV EDI,dword ptr [EBP + -0x7c]
LAB_0060b785:
0060B785  47                        INC EDI
0060B786  89 7D 84                  MOV dword ptr [EBP + -0x7c],EDI
0060B789  3B FB                     CMP EDI,EBX
0060B78B  7C BC                     JL 0x0060b749
LAB_0060b78d:
0060B78D  43                        INC EBX
0060B78E  3B 9D 7C FF FF FF         CMP EBX,dword ptr [EBP + 0xffffff7c]
0060B794  7C AA                     JL 0x0060b740
LAB_0060b796:
0060B796  33 C0                     XOR EAX,EAX
0060B798  89 45 80                  MOV dword ptr [EBP + -0x80],EAX
0060B79B  89 45 98                  MOV dword ptr [EBP + -0x68],EAX
0060B79E  39 85 7C FF FF FF         CMP dword ptr [EBP + 0xffffff7c],EAX
0060B7A4  0F 8E C7 01 00 00         JLE 0x0060b971
LAB_0060b7aa:
0060B7AA  8B 45 98                  MOV EAX,dword ptr [EBP + -0x68]
0060B7AD  8D 14 40                  LEA EDX,[EAX + EAX*0x2]
0060B7B0  8B 45 90                  MOV EAX,dword ptr [EBP + -0x70]
0060B7B3  8B 34 90                  MOV ESI,dword ptr [EAX + EDX*0x4]
0060B7B6  C7 45 BC 01 00 00 00      MOV dword ptr [EBP + -0x44],0x1
0060B7BD  8B 16                     MOV EDX,dword ptr [ESI]
0060B7BF  8B CE                     MOV ECX,ESI
0060B7C1  FF 52 2C                  CALL dword ptr [EDX + 0x2c]
0060B7C4  83 F8 23                  CMP EAX,0x23
0060B7C7  0F 84 C4 00 00 00         JZ 0x0060b891
0060B7CD  8B 45 B8                  MOV EAX,dword ptr [EBP + -0x48]
0060B7D0  85 C0                     TEST EAX,EAX
0060B7D2  0F 84 B9 00 00 00         JZ 0x0060b891
0060B7D8  33 FF                     XOR EDI,EDI
0060B7DA  85 C0                     TEST EAX,EAX
0060B7DC  0F 8E AF 00 00 00         JLE 0x0060b891
LAB_0060b7e2:
0060B7E2  8D 04 7F                  LEA EAX,[EDI + EDI*0x2]
0060B7E5  8B 8D 58 FF FF FF         MOV ECX,dword ptr [EBP + 0xffffff58]
0060B7EB  8B 1C 81                  MOV EBX,dword ptr [ECX + EAX*0x4]
0060B7EE  8B 53 24                  MOV EDX,dword ptr [EBX + 0x24]
0060B7F1  3B 56 24                  CMP EDX,dword ptr [ESI + 0x24]
0060B7F4  75 69                     JNZ 0x0060b85f
0060B7F6  8B 83 2E 07 00 00         MOV EAX,dword ptr [EBX + 0x72e]
0060B7FC  85 C0                     TEST EAX,EAX
0060B7FE  74 5F                     JZ 0x0060b85f
0060B800  8D 45 E4                  LEA EAX,[EBP + -0x1c]
0060B803  50                        PUSH EAX
0060B804  8D 8D 70 FF FF FF         LEA ECX,[EBP + 0xffffff70]
0060B80A  51                        PUSH ECX
0060B80B  8D 55 B4                  LEA EDX,[EBP + -0x4c]
0060B80E  52                        PUSH EDX
0060B80F  8B CE                     MOV ECX,ESI
0060B811  E8 CD 79 DF FF            CALL 0x004031e3
0060B816  8D 45 DC                  LEA EAX,[EBP + -0x24]
0060B819  50                        PUSH EAX
0060B81A  8D 8D 68 FF FF FF         LEA ECX,[EBP + 0xffffff68]
0060B820  51                        PUSH ECX
0060B821  8D 55 A4                  LEA EDX,[EBP + -0x5c]
0060B824  52                        PUSH EDX
0060B825  8B CB                     MOV ECX,EBX
0060B827  E8 B7 79 DF FF            CALL 0x004031e3
0060B82C  0F BF 45 DC               MOVSX EAX,word ptr [EBP + -0x24]
0060B830  50                        PUSH EAX
0060B831  0F BF 8D 68 FF FF FF      MOVSX ECX,word ptr [EBP + 0xffffff68]
0060B838  51                        PUSH ECX
0060B839  0F BF 55 A4               MOVSX EDX,word ptr [EBP + -0x5c]
0060B83D  52                        PUSH EDX
0060B83E  0F BF 45 E4               MOVSX EAX,word ptr [EBP + -0x1c]
0060B842  50                        PUSH EAX
0060B843  0F BF 8D 70 FF FF FF      MOVSX ECX,word ptr [EBP + 0xffffff70]
0060B84A  51                        PUSH ECX
0060B84B  0F BF 55 B4               MOVSX EDX,word ptr [EBP + -0x4c]
0060B84F  52                        PUSH EDX
0060B850  E8 B8 16 0A 00            CALL 0x006acf0d
0060B855  83 C4 18                  ADD ESP,0x18
0060B858  3D ED 03 00 00            CMP EAX,0x3ed
0060B85D  7E 2B                     JLE 0x0060b88a
LAB_0060b85f:
0060B85F  47                        INC EDI
0060B860  3B 7D B8                  CMP EDI,dword ptr [EBP + -0x48]
0060B863  0F 8C 79 FF FF FF         JL 0x0060b7e2
0060B869  EB 26                     JMP 0x0060b891
LAB_0060b88a:
0060B88A  C7 45 BC 00 00 00 00      MOV dword ptr [EBP + -0x44],0x0
LAB_0060b891:
0060B891  8B 45 BC                  MOV EAX,dword ptr [EBP + -0x44]
0060B894  85 C0                     TEST EAX,EAX
0060B896  0F 84 C2 00 00 00         JZ 0x0060b95e
0060B89C  8B 45 98                  MOV EAX,dword ptr [EBP + -0x68]
0060B89F  8D 04 40                  LEA EAX,[EAX + EAX*0x2]
0060B8A2  8B 4D 90                  MOV ECX,dword ptr [EBP + -0x70]
0060B8A5  8B 54 81 08               MOV EDX,dword ptr [ECX + EAX*0x4 + 0x8]
0060B8A9  85 D2                     TEST EDX,EDX
0060B8AB  0F 84 AD 00 00 00         JZ 0x0060b95e
0060B8B1  8D 55 E4                  LEA EDX,[EBP + -0x1c]
0060B8B4  52                        PUSH EDX
0060B8B5  8D 85 70 FF FF FF         LEA EAX,[EBP + 0xffffff70]
0060B8BB  50                        PUSH EAX
0060B8BC  8D 4D B4                  LEA ECX,[EBP + -0x4c]
0060B8BF  51                        PUSH ECX
0060B8C0  8B CE                     MOV ECX,ESI
0060B8C2  E8 FE 5F DF FF            CALL 0x004018c5
0060B8C7  0F BF 95 70 FF FF FF      MOVSX EDX,word ptr [EBP + 0xffffff70]
0060B8CE  52                        PUSH EDX
0060B8CF  0F BF 45 B4               MOVSX EAX,word ptr [EBP + -0x4c]
0060B8D3  50                        PUSH EAX
0060B8D4  8B 8D 78 FF FF FF         MOV ECX,dword ptr [EBP + 0xffffff78]
0060B8DA  51                        PUSH ECX
0060B8DB  8B 55 88                  MOV EDX,dword ptr [EBP + -0x78]
0060B8DE  52                        PUSH EDX
0060B8DF  E8 AC 16 0A 00            CALL 0x006acf90
0060B8E4  8B C8                     MOV ECX,EAX
0060B8E6  8B BD 08 FF FF FF         MOV EDI,dword ptr [EBP + 0xffffff08]
0060B8EC  8B 47 1C                  MOV EAX,dword ptr [EDI + 0x1c]
0060B8EF  69 C0 6D 4E C6 41         IMUL EAX,EAX,0x41c64e6d
0060B8F5  05 39 30 00 00            ADD EAX,0x3039
0060B8FA  89 47 1C                  MOV dword ptr [EDI + 0x1c],EAX
0060B8FD  8D 5C 49 01               LEA EBX,[ECX + ECX*0x2 + 0x1]
0060B901  C1 E8 10                  SHR EAX,0x10
0060B904  33 D2                     XOR EDX,EDX
0060B906  F7 F3                     DIV EBX
0060B908  03 CA                     ADD ECX,EDX
0060B90A  51                        PUSH ECX
0060B90B  8D 8E D5 01 00 00         LEA ECX,[ESI + 0x1d5]
0060B911  E8 B6 99 DF FF            CALL 0x004052cc
0060B916  50                        PUSH EAX
0060B917  E8 23 59 DF FF            CALL 0x0040123f
0060B91C  83 C4 08                  ADD ESP,0x8
0060B91F  56                        PUSH ESI
0060B920  8B CF                     MOV ECX,EDI
0060B922  E8 BD 86 DF FF            CALL 0x00403fe4
0060B927  A1 98 17 81 00            MOV EAX,[0x00811798]
0060B92C  85 C0                     TEST EAX,EAX
0060B92E  74 22                     JZ 0x0060b952
0060B930  8B 16                     MOV EDX,dword ptr [ESI]
0060B932  8B CE                     MOV ECX,ESI
0060B934  FF 52 2C                  CALL dword ptr [EDX + 0x2c]
0060B937  50                        PUSH EAX
0060B938  8B 46 24                  MOV EAX,dword ptr [ESI + 0x24]
0060B93B  50                        PUSH EAX
0060B93C  8B 8D 78 FF FF FF         MOV ECX,dword ptr [EBP + 0xffffff78]
0060B942  51                        PUSH ECX
0060B943  8B 55 88                  MOV EDX,dword ptr [EBP + -0x78]
0060B946  52                        PUSH EDX
0060B947  8B 0D 98 17 81 00         MOV ECX,dword ptr [0x00811798]
0060B94D  E8 6B 62 DF FF            CALL 0x00401bbd
LAB_0060b952:
0060B952  8B 45 80                  MOV EAX,dword ptr [EBP + -0x80]
0060B955  40                        INC EAX
0060B956  89 45 80                  MOV dword ptr [EBP + -0x80],EAX
0060B959  83 F8 0A                  CMP EAX,0xa
0060B95C  7D 13                     JGE 0x0060b971
LAB_0060b95e:
0060B95E  8B 45 98                  MOV EAX,dword ptr [EBP + -0x68]
0060B961  40                        INC EAX
0060B962  89 45 98                  MOV dword ptr [EBP + -0x68],EAX
0060B965  3B 85 7C FF FF FF         CMP EAX,dword ptr [EBP + 0xffffff7c]
0060B96B  0F 8C 39 FE FF FF         JL 0x0060b7aa
LAB_0060b971:
0060B971  8B 85 7C FF FF FF         MOV EAX,dword ptr [EBP + 0xffffff7c]
0060B977  EB 2C                     JMP 0x0060b9a5
LAB_0060b9a5:
0060B9A5  8D A5 FC FE FF FF         LEA ESP,[EBP + 0xfffffefc]
0060B9AB  8B 4D F0                  MOV ECX,dword ptr [EBP + -0x10]
0060B9AE  64 89 0D 00 00 00 00      MOV dword ptr FS:[0x0],ECX
0060B9B5  5F                        POP EDI
0060B9B6  5E                        POP ESI
0060B9B7  5B                        POP EBX
0060B9B8  8B E5                     MOV ESP,EBP
0060B9BA  5D                        POP EBP
0060B9BB  C3                        RET
