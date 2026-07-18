FUN_0062af90:
0062AF90  55                        PUSH EBP
0062AF91  8B EC                     MOV EBP,ESP
0062AF93  83 EC 34                  SUB ESP,0x34
0062AF96  89 4D FC                  MOV dword ptr [EBP + -0x4],ECX
0062AF99  53                        PUSH EBX
0062AF9A  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
0062AF9D  56                        PUSH ESI
0062AF9E  85 C9                     TEST ECX,ECX
0062AFA0  57                        PUSH EDI
0062AFA1  BB 01 00 00 00            MOV EBX,0x1
0062AFA6  B8 79 19 8C 02            MOV EAX,0x28c1979
0062AFAB  7C 10                     JL 0x0062afbd
0062AFAD  F7 E9                     IMUL ECX
0062AFAF  D1 FA                     SAR EDX,0x1
0062AFB1  8B C2                     MOV EAX,EDX
0062AFB3  C1 E8 1F                  SHR EAX,0x1f
0062AFB6  03 D0                     ADD EDX,EAX
0062AFB8  0F BF F2                  MOVSX ESI,DX
0062AFBB  EB 0F                     JMP 0x0062afcc
LAB_0062afbd:
0062AFBD  F7 E9                     IMUL ECX
0062AFBF  D1 FA                     SAR EDX,0x1
0062AFC1  8B CA                     MOV ECX,EDX
0062AFC3  C1 E9 1F                  SHR ECX,0x1f
0062AFC6  03 D1                     ADD EDX,ECX
0062AFC8  0F BF F2                  MOVSX ESI,DX
0062AFCB  4E                        DEC ESI
LAB_0062afcc:
0062AFCC  8B 4D 0C                  MOV ECX,dword ptr [EBP + 0xc]
0062AFCF  B8 79 19 8C 02            MOV EAX,0x28c1979
0062AFD4  85 C9                     TEST ECX,ECX
0062AFD6  7C 10                     JL 0x0062afe8
0062AFD8  F7 E9                     IMUL ECX
0062AFDA  D1 FA                     SAR EDX,0x1
0062AFDC  8B C2                     MOV EAX,EDX
0062AFDE  C1 E8 1F                  SHR EAX,0x1f
0062AFE1  03 D0                     ADD EDX,EAX
0062AFE3  0F BF CA                  MOVSX ECX,DX
0062AFE6  EB 0F                     JMP 0x0062aff7
LAB_0062afe8:
0062AFE8  F7 E9                     IMUL ECX
0062AFEA  D1 FA                     SAR EDX,0x1
0062AFEC  8B CA                     MOV ECX,EDX
0062AFEE  C1 E9 1F                  SHR ECX,0x1f
0062AFF1  03 D1                     ADD EDX,ECX
0062AFF3  0F BF CA                  MOVSX ECX,DX
0062AFF6  49                        DEC ECX
LAB_0062aff7:
0062AFF7  8B 55 10                  MOV EDX,dword ptr [EBP + 0x10]
0062AFFA  B8 1F 85 EB 51            MOV EAX,0x51eb851f
0062AFFF  85 D2                     TEST EDX,EDX
0062B001  7C 11                     JL 0x0062b014
0062B003  F7 EA                     IMUL EDX
0062B005  C1 FA 06                  SAR EDX,0x6
0062B008  8B C2                     MOV EAX,EDX
0062B00A  C1 E8 1F                  SHR EAX,0x1f
0062B00D  03 D0                     ADD EDX,EAX
0062B00F  0F BF C2                  MOVSX EAX,DX
0062B012  EB 10                     JMP 0x0062b024
LAB_0062b014:
0062B014  F7 EA                     IMUL EDX
0062B016  C1 FA 06                  SAR EDX,0x6
0062B019  8B C2                     MOV EAX,EDX
0062B01B  C1 E8 1F                  SHR EAX,0x1f
0062B01E  03 D0                     ADD EDX,EAX
0062B020  0F BF C2                  MOVSX EAX,DX
0062B023  48                        DEC EAX
LAB_0062b024:
0062B024  85 F6                     TEST ESI,ESI
0062B026  0F 8C 74 01 00 00         JL 0x0062b1a0
0062B02C  0F BF 15 40 B2 7F 00      MOVSX EDX,word ptr [0x007fb240]
0062B033  3B F2                     CMP ESI,EDX
0062B035  0F 8D 65 01 00 00         JGE 0x0062b1a0
0062B03B  85 C9                     TEST ECX,ECX
0062B03D  0F 8C 5D 01 00 00         JL 0x0062b1a0
0062B043  0F BF 3D 42 B2 7F 00      MOVSX EDI,word ptr [0x007fb242]
0062B04A  3B CF                     CMP ECX,EDI
0062B04C  0F 8D 4E 01 00 00         JGE 0x0062b1a0
0062B052  85 C0                     TEST EAX,EAX
0062B054  0F 8C 46 01 00 00         JL 0x0062b1a0
0062B05A  0F BF 3D 44 B2 7F 00      MOVSX EDI,word ptr [0x007fb244]
0062B061  3B C7                     CMP EAX,EDI
0062B063  0F 8D 37 01 00 00         JGE 0x0062b1a0
0062B069  66 85 F6                  TEST SI,SI
0062B06C  7C 4A                     JL 0x0062b0b8
0062B06E  66 3B 35 40 B2 7F 00      CMP SI,word ptr [0x007fb240]
0062B075  7D 41                     JGE 0x0062b0b8
0062B077  66 85 C9                  TEST CX,CX
0062B07A  7C 3C                     JL 0x0062b0b8
0062B07C  66 3B 0D 42 B2 7F 00      CMP CX,word ptr [0x007fb242]
0062B083  7D 33                     JGE 0x0062b0b8
0062B085  66 85 C0                  TEST AX,AX
0062B088  7C 2E                     JL 0x0062b0b8
0062B08A  66 3B 05 44 B2 7F 00      CMP AX,word ptr [0x007fb244]
0062B091  7D 25                     JGE 0x0062b0b8
0062B093  0F BF 3D 46 B2 7F 00      MOVSX EDI,word ptr [0x007fb246]
0062B09A  0F BF C0                  MOVSX EAX,AX
0062B09D  0F BF C9                  MOVSX ECX,CX
0062B0A0  0F AF F8                  IMUL EDI,EAX
0062B0A3  0F AF CA                  IMUL ECX,EDX
0062B0A6  A1 48 B2 7F 00            MOV EAX,[0x007fb248]
0062B0AB  03 F9                     ADD EDI,ECX
0062B0AD  0F BF D6                  MOVSX EDX,SI
0062B0B0  03 FA                     ADD EDI,EDX
0062B0B2  8B 74 F8 04               MOV ESI,dword ptr [EAX + EDI*0x8 + 0x4]
0062B0B6  EB 02                     JMP 0x0062b0ba
LAB_0062b0b8:
0062B0B8  33 F6                     XOR ESI,ESI
LAB_0062b0ba:
0062B0BA  B9 0C 00 00 00            MOV ECX,0xc
0062B0BF  33 C0                     XOR EAX,EAX
0062B0C1  8D 7D CC                  LEA EDI,[EBP + -0x34]
0062B0C4  8B 55 0C                  MOV EDX,dword ptr [EBP + 0xc]
0062B0C7  F3 AB                     STOSD.REP ES:EDI
0062B0C9  8B 45 10                  MOV EAX,dword ptr [EBP + 0x10]
0062B0CC  8B 7D FC                  MOV EDI,dword ptr [EBP + -0x4]
0062B0CF  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
0062B0D2  89 45 E8                  MOV dword ptr [EBP + -0x18],EAX
0062B0D5  33 C0                     XOR EAX,EAX
0062B0D7  89 4D E0                  MOV dword ptr [EBP + -0x20],ECX
0062B0DA  8A 47 15                  MOV AL,byte ptr [EDI + 0x15]
0062B0DD  8B 4F 18                  MOV ECX,dword ptr [EDI + 0x18]
0062B0E0  89 55 E4                  MOV dword ptr [EBP + -0x1c],EDX
0062B0E3  8B 57 04                  MOV EDX,dword ptr [EDI + 0x4]
0062B0E6  48                        DEC EAX
0062B0E7  C7 45 EC E8 03 00 00      MOV dword ptr [EBP + -0x14],0x3e8
0062B0EE  83 F8 7F                  CMP EAX,0x7f
0062B0F1  89 4D F8                  MOV dword ptr [EBP + -0x8],ECX
0062B0F4  89 55 F0                  MOV dword ptr [EBP + -0x10],EDX
0062B0F7  77 40                     JA 0x0062b139
0062B0F9  33 C9                     XOR ECX,ECX
0062B0FB  8A 88 C4 B1 62 00         MOV CL,byte ptr [EAX + 0x62b1c4]
switchD_0062b101::switchD:
0062B101  FF 24 8D AC B1 62 00      JMP dword ptr [ECX*0x4 + 0x62b1ac]
switchD_0062b101::caseD_1:
0062B108  8B 47 1C                  MOV EAX,dword ptr [EDI + 0x1c]
0062B10B  48                        DEC EAX
0062B10C  74 0A                     JZ 0x0062b118
0062B10E  48                        DEC EAX
0062B10F  75 28                     JNZ 0x0062b139
0062B111  BB 02 00 00 00            MOV EBX,0x2
0062B116  EB 21                     JMP 0x0062b139
LAB_0062b118:
0062B118  BB 01 00 00 00            MOV EBX,0x1
0062B11D  EB 1A                     JMP 0x0062b139
switchD_0062b101::caseD_2:
0062B11F  BB 05 00 00 00            MOV EBX,0x5
0062B124  EB 13                     JMP 0x0062b139
switchD_0062b101::caseD_8:
0062B126  BB 04 00 00 00            MOV EBX,0x4
0062B12B  EB 0C                     JMP 0x0062b139
switchD_0062b101::caseD_40:
0062B12D  BB 06 00 00 00            MOV EBX,0x6
0062B132  EB 05                     JMP 0x0062b139
switchD_0062b101::caseD_10:
0062B134  BB 03 00 00 00            MOV EBX,0x3
switchD_0062b101::caseD_3:
0062B139  81 E3 FF FF 00 00         AND EBX,0xffff
0062B13F  33 D2                     XOR EDX,EDX
0062B141  8A 57 14                  MOV DL,byte ptr [EDI + 0x14]
0062B144  B8 BE 00 00 00            MOV EAX,0xbe
0062B149  C1 E3 10                  SHL EBX,0x10
0062B14C  0B DA                     OR EBX,EDX
0062B14E  89 45 CC                  MOV dword ptr [EBP + -0x34],EAX
0062B151  85 F6                     TEST ESI,ESI
0062B153  89 5D F4                  MOV dword ptr [EBP + -0xc],EBX
0062B156  C7 45 D0 FF 00 00 00      MOV dword ptr [EBP + -0x30],0xff
0062B15D  C7 45 D4 00 00 00 00      MOV dword ptr [EBP + -0x2c],0x0
0062B164  C7 45 D8 01 00 00 00      MOV dword ptr [EBP + -0x28],0x1
0062B16B  74 19                     JZ 0x0062b186
0062B16D  39 46 20                  CMP dword ptr [ESI + 0x20],EAX
0062B170  75 14                     JNZ 0x0062b186
0062B172  8D 45 CC                  LEA EAX,[EBP + -0x34]
0062B175  8B CE                     MOV ECX,ESI
0062B177  50                        PUSH EAX
0062B178  E8 6C 75 DD FF            CALL 0x004026e9
0062B17D  5F                        POP EDI
0062B17E  5E                        POP ESI
0062B17F  5B                        POP EBX
0062B180  8B E5                     MOV ESP,EBP
0062B182  5D                        POP EBP
0062B183  C2 0C 00                  RET 0xc
LAB_0062b186:
0062B186  8B 0D 38 2A 80 00         MOV ECX,dword ptr [0x00802a38]
0062B18C  8D 45 CC                  LEA EAX,[EBP + -0x34]
0062B18F  6A 00                     PUSH 0x0
0062B191  50                        PUSH EAX
0062B192  8B 11                     MOV EDX,dword ptr [ECX]
0062B194  6A 00                     PUSH 0x0
0062B196  6A 00                     PUSH 0x0
0062B198  68 32 01 00 00            PUSH 0x132
0062B19D  FF 52 08                  CALL dword ptr [EDX + 0x8]
LAB_0062b1a0:
0062B1A0  5F                        POP EDI
0062B1A1  5E                        POP ESI
0062B1A2  5B                        POP EBX
0062B1A3  8B E5                     MOV ESP,EBP
0062B1A5  5D                        POP EBP
0062B1A6  C2 0C 00                  RET 0xc
