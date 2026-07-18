STColl3C::GetMessage:
005F5F20  55                        PUSH EBP
005F5F21  8B EC                     MOV EBP,ESP
005F5F23  83 EC 5C                  SUB ESP,0x5c
005F5F26  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
005F5F29  53                        PUSH EBX
005F5F2A  56                        PUSH ESI
005F5F2B  57                        PUSH EDI
005F5F2C  50                        PUSH EAX
005F5F2D  89 4D FC                  MOV dword ptr [EBP + -0x4],ECX
005F5F30  E8 D2 EF E0 FF            CALL 0x00404f07
005F5F35  3D FF FF 00 00            CMP EAX,0xffff
005F5F3A  0F 84 F1 04 00 00         JZ 0x005f6431
005F5F40  8B 0D F8 8D 85 00         MOV ECX,dword ptr [0x00858df8]
005F5F46  8D 45 A8                  LEA EAX,[EBP + -0x58]
005F5F49  8D 55 A4                  LEA EDX,[EBP + -0x5c]
005F5F4C  6A 00                     PUSH 0x0
005F5F4E  50                        PUSH EAX
005F5F4F  89 4D A4                  MOV dword ptr [EBP + -0x5c],ECX
005F5F52  89 15 F8 8D 85 00         MOV dword ptr [0x00858df8],EDX
005F5F58  E8 93 78 13 00            CALL 0x0072d7f0
005F5F5D  8B F0                     MOV ESI,EAX
005F5F5F  83 C4 08                  ADD ESP,0x8
005F5F62  85 F6                     TEST ESI,ESI
005F5F64  0F 85 88 04 00 00         JNZ 0x005f63f2
005F5F6A  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
005F5F6D  8B 41 10                  MOV EAX,dword ptr [ECX + 0x10]
005F5F70  3D 0F 01 00 00            CMP EAX,0x10f
005F5F75  0F 87 70 03 00 00         JA 0x005f62eb
005F5F7B  0F 84 28 03 00 00         JZ 0x005f62a9
005F5F81  83 F8 03                  CMP EAX,0x3
005F5F84  0F 87 F8 02 00 00         JA 0x005f6282
005F5F8A  0F 84 A3 02 00 00         JZ 0x005f6233
005F5F90  2B C6                     SUB EAX,ESI
005F5F92  0F 84 73 02 00 00         JZ 0x005f620b
005F5F98  83 E8 02                  SUB EAX,0x2
005F5F9B  0F 85 3D 04 00 00         JNZ 0x005f63de
005F5FA1  8B 71 14                  MOV ESI,dword ptr [ECX + 0x14]
005F5FA4  83 7E 0C 02               CMP dword ptr [ESI + 0xc],0x2
005F5FA8  0F 84 34 01 00 00         JZ 0x005f60e2
005F5FAE  8B 5D FC                  MOV EBX,dword ptr [EBP + -0x4]
005F5FB1  B9 0B 00 00 00            MOV ECX,0xb
005F5FB6  B8 79 19 8C 02            MOV EAX,0x28c1979
005F5FBB  8D BB 31 02 00 00         LEA EDI,[EBX + 0x231]
005F5FC1  F3 A5                     MOVSD.REP ES:EDI,ESI
005F5FC3  8B 8B 45 02 00 00         MOV ECX,dword ptr [EBX + 0x245]
005F5FC9  85 C9                     TEST ECX,ECX
005F5FCB  7C 10                     JL 0x005f5fdd
005F5FCD  F7 E9                     IMUL ECX
005F5FCF  D1 FA                     SAR EDX,0x1
005F5FD1  8B CA                     MOV ECX,EDX
005F5FD3  C1 E9 1F                  SHR ECX,0x1f
005F5FD6  03 D1                     ADD EDX,ECX
005F5FD8  0F BF C2                  MOVSX EAX,DX
005F5FDB  EB 0F                     JMP 0x005f5fec
LAB_005f5fdd:
005F5FDD  F7 E9                     IMUL ECX
005F5FDF  D1 FA                     SAR EDX,0x1
005F5FE1  8B C2                     MOV EAX,EDX
005F5FE3  C1 E8 1F                  SHR EAX,0x1f
005F5FE6  03 D0                     ADD EDX,EAX
005F5FE8  0F BF C2                  MOVSX EAX,DX
005F5FEB  48                        DEC EAX
LAB_005f5fec:
005F5FEC  8B 8B 49 02 00 00         MOV ECX,dword ptr [EBX + 0x249]
005F5FF2  89 83 5D 02 00 00         MOV dword ptr [EBX + 0x25d],EAX
005F5FF8  85 C9                     TEST ECX,ECX
005F5FFA  B8 79 19 8C 02            MOV EAX,0x28c1979
005F5FFF  7C 10                     JL 0x005f6011
005F6001  F7 E9                     IMUL ECX
005F6003  D1 FA                     SAR EDX,0x1
005F6005  8B CA                     MOV ECX,EDX
005F6007  C1 E9 1F                  SHR ECX,0x1f
005F600A  03 D1                     ADD EDX,ECX
005F600C  0F BF C2                  MOVSX EAX,DX
005F600F  EB 0F                     JMP 0x005f6020
LAB_005f6011:
005F6011  F7 E9                     IMUL ECX
005F6013  D1 FA                     SAR EDX,0x1
005F6015  8B C2                     MOV EAX,EDX
005F6017  C1 E8 1F                  SHR EAX,0x1f
005F601A  03 D0                     ADD EDX,EAX
005F601C  0F BF C2                  MOVSX EAX,DX
005F601F  48                        DEC EAX
LAB_005f6020:
005F6020  8B 8B 4D 02 00 00         MOV ECX,dword ptr [EBX + 0x24d]
005F6026  89 83 61 02 00 00         MOV dword ptr [EBX + 0x261],EAX
005F602C  85 C9                     TEST ECX,ECX
005F602E  B8 1F 85 EB 51            MOV EAX,0x51eb851f
005F6033  7C 11                     JL 0x005f6046
005F6035  F7 E9                     IMUL ECX
005F6037  C1 FA 06                  SAR EDX,0x6
005F603A  8B CA                     MOV ECX,EDX
005F603C  C1 E9 1F                  SHR ECX,0x1f
005F603F  03 D1                     ADD EDX,ECX
005F6041  0F BF C2                  MOVSX EAX,DX
005F6044  EB 10                     JMP 0x005f6056
LAB_005f6046:
005F6046  F7 E9                     IMUL ECX
005F6048  C1 FA 06                  SAR EDX,0x6
005F604B  8B C2                     MOV EAX,EDX
005F604D  C1 E8 1F                  SHR EAX,0x1f
005F6050  03 D0                     ADD EDX,EAX
005F6052  0F BF C2                  MOVSX EAX,DX
005F6055  48                        DEC EAX
LAB_005f6056:
005F6056  8D 8B 85 02 00 00         LEA ECX,[EBX + 0x285]
005F605C  89 83 65 02 00 00         MOV dword ptr [EBX + 0x265],EAX
005F6062  8D 93 81 02 00 00         LEA EDX,[EBX + 0x281]
005F6068  51                        PUSH ECX
005F6069  8D 83 7D 02 00 00         LEA EAX,[EBX + 0x27d]
005F606F  52                        PUSH EDX
005F6070  50                        PUSH EAX
005F6071  8B CB                     MOV ECX,EBX
005F6073  E8 C3 B5 E0 FF            CALL 0x0040163b
005F6078  C7 83 69 02 00 00 58 02 00 00  MOV dword ptr [EBX + 0x269],0x258
005F6082  C7 83 DD 02 00 00 01 00 00 00  MOV dword ptr [EBX + 0x2dd],0x1
005F608C  8B 0D 38 2A 80 00         MOV ECX,dword ptr [0x00802a38]
005F6092  8B 91 E4 00 00 00         MOV EDX,dword ptr [ECX + 0xe4]
005F6098  8B 8B 59 02 00 00         MOV ECX,dword ptr [EBX + 0x259]
005F609E  03 D1                     ADD EDX,ECX
005F60A0  89 93 E1 02 00 00         MOV dword ptr [EBX + 0x2e1],EDX
005F60A6  8B 0D A4 17 81 00         MOV ECX,dword ptr [0x008117a4]
005F60AC  85 C9                     TEST ECX,ECX
005F60AE  74 17                     JZ 0x005f60c7
005F60B0  8B 83 55 02 00 00         MOV EAX,dword ptr [EBX + 0x255]
005F60B6  8B 53 18                  MOV EDX,dword ptr [EBX + 0x18]
005F60B9  50                        PUSH EAX
005F60BA  8B 83 35 02 00 00         MOV EAX,dword ptr [EBX + 0x235]
005F60C0  52                        PUSH EDX
005F60C1  50                        PUSH EAX
005F60C2  E8 23 DE E0 FF            CALL 0x00403eea
LAB_005f60c7:
005F60C7  8B 4D A4                  MOV ECX,dword ptr [EBP + -0x5c]
005F60CA  C6 83 E5 02 00 00 01      MOV byte ptr [EBX + 0x2e5],0x1
005F60D1  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
005F60D7  33 C0                     XOR EAX,EAX
005F60D9  5F                        POP EDI
005F60DA  5E                        POP ESI
005F60DB  5B                        POP EBX
005F60DC  8B E5                     MOV ESP,EBP
005F60DE  5D                        POP EBP
005F60DF  C2 04 00                  RET 0x4
LAB_005f60e2:
005F60E2  56                        PUSH ESI
005F60E3  8B 75 FC                  MOV ESI,dword ptr [EBP + -0x4]
005F60E6  8B CE                     MOV ECX,ESI
005F60E8  E8 0E CD E0 FF            CALL 0x00402dfb
005F60ED  85 C0                     TEST EAX,EAX
005F60EF  75 1B                     JNZ 0x005f610c
005F60F1  8B CE                     MOV ECX,ESI
005F60F3  E8 0C BA E0 FF            CALL 0x00401b04
005F60F8  8B 4D A4                  MOV ECX,dword ptr [EBP + -0x5c]
005F60FB  33 C0                     XOR EAX,EAX
005F60FD  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
005F6103  5F                        POP EDI
005F6104  5E                        POP ESI
005F6105  5B                        POP EBX
005F6106  8B E5                     MOV ESP,EBP
005F6108  5D                        POP EBP
005F6109  C2 04 00                  RET 0x4
LAB_005f610c:
005F610C  8D 4D F8                  LEA ECX,[EBP + -0x8]
005F610F  8D 55 F4                  LEA EDX,[EBP + -0xc]
005F6112  51                        PUSH ECX
005F6113  8D 45 F0                  LEA EAX,[EBP + -0x10]
005F6116  52                        PUSH EDX
005F6117  50                        PUSH EAX
005F6118  8B CE                     MOV ECX,ESI
005F611A  E8 A6 B7 E0 FF            CALL 0x004018c5
005F611F  8B 4D F8                  MOV ECX,dword ptr [EBP + -0x8]
005F6122  8B 55 F4                  MOV EDX,dword ptr [EBP + -0xc]
005F6125  8B 45 F0                  MOV EAX,dword ptr [EBP + -0x10]
005F6128  51                        PUSH ECX
005F6129  8B 0D 84 B2 7F 00         MOV ECX,dword ptr [0x007fb284]
005F612F  52                        PUSH EDX
005F6130  50                        PUSH EAX
005F6131  E8 05 EC E0 FF            CALL 0x00404d3b
005F6136  85 C0                     TEST EAX,EAX
005F6138  0F 84 9D 00 00 00         JZ 0x005f61db
005F613E  8B 55 F0                  MOV EDX,dword ptr [EBP + -0x10]
005F6141  8B 4D F4                  MOV ECX,dword ptr [EBP + -0xc]
005F6144  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
005F6147  66 85 D2                  TEST DX,DX
005F614A  7C 52                     JL 0x005f619e
005F614C  66 8B 3D 40 B2 7F 00      MOV DI,word ptr [0x007fb240]
005F6153  66 3B D7                  CMP DX,DI
005F6156  7D 46                     JGE 0x005f619e
005F6158  66 85 C9                  TEST CX,CX
005F615B  7C 41                     JL 0x005f619e
005F615D  66 3B 0D 42 B2 7F 00      CMP CX,word ptr [0x007fb242]
005F6164  7D 38                     JGE 0x005f619e
005F6166  66 85 C0                  TEST AX,AX
005F6169  7C 33                     JL 0x005f619e
005F616B  66 3B 05 44 B2 7F 00      CMP AX,word ptr [0x007fb244]
005F6172  7D 2A                     JGE 0x005f619e
005F6174  0F BF 1D 46 B2 7F 00      MOVSX EBX,word ptr [0x007fb246]
005F617B  0F BF C0                  MOVSX EAX,AX
005F617E  0F AF D8                  IMUL EBX,EAX
005F6181  0F BF C7                  MOVSX EAX,DI
005F6184  0F BF F9                  MOVSX EDI,CX
005F6187  0F AF C7                  IMUL EAX,EDI
005F618A  03 D8                     ADD EBX,EAX
005F618C  0F BF C2                  MOVSX EAX,DX
005F618F  03 D8                     ADD EBX,EAX
005F6191  A1 48 B2 7F 00            MOV EAX,[0x007fb248]
005F6196  8B 3C D8                  MOV EDI,dword ptr [EAX + EBX*0x8]
005F6199  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
005F619C  EB 02                     JMP 0x005f61a0
LAB_005f619e:
005F619E  33 FF                     XOR EDI,EDI
LAB_005f61a0:
005F61A0  85 FF                     TEST EDI,EDI
005F61A2  75 37                     JNZ 0x005f61db
005F61A4  8B 9E DD 02 00 00         MOV EBX,dword ptr [ESI + 0x2dd]
005F61AA  BF 01 00 00 00            MOV EDI,0x1
005F61AF  3B DF                     CMP EBX,EDI
005F61B1  74 2F                     JZ 0x005f61e2
005F61B3  8B 5E 18                  MOV EBX,dword ptr [ESI + 0x18]
005F61B6  0F BF C0                  MOVSX EAX,AX
005F61B9  0F BF C9                  MOVSX ECX,CX
005F61BC  53                        PUSH EBX
005F61BD  56                        PUSH ESI
005F61BE  0F BF D2                  MOVSX EDX,DX
005F61C1  6A 00                     PUSH 0x0
005F61C3  50                        PUSH EAX
005F61C4  51                        PUSH ECX
005F61C5  8B 0D 84 B2 7F 00         MOV ECX,dword ptr [0x007fb284]
005F61CB  52                        PUSH EDX
005F61CC  E8 54 B1 E0 FF            CALL 0x00401325
005F61D1  85 C0                     TEST EAX,EAX
005F61D3  74 02                     JZ 0x005f61d7
005F61D5  33 FF                     XOR EDI,EDI
LAB_005f61d7:
005F61D7  85 FF                     TEST EDI,EDI
005F61D9  75 07                     JNZ 0x005f61e2
LAB_005f61db:
005F61DB  8B CE                     MOV ECX,ESI
005F61DD  E8 22 B9 E0 FF            CALL 0x00401b04
LAB_005f61e2:
005F61E2  8A 86 B6 02 00 00         MOV AL,byte ptr [ESI + 0x2b6]
005F61E8  84 C0                     TEST AL,AL
005F61EA  0F 84 EE 01 00 00         JZ 0x005f63de
005F61F0  8B CE                     MOV ECX,ESI
005F61F2  E8 D1 D1 E0 FF            CALL 0x004033c8
005F61F7  8B 4D A4                  MOV ECX,dword ptr [EBP + -0x5c]
005F61FA  33 C0                     XOR EAX,EAX
005F61FC  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
005F6202  5F                        POP EDI
005F6203  5E                        POP ESI
005F6204  5B                        POP EBX
005F6205  8B E5                     MOV ESP,EBP
005F6207  5D                        POP EBP
005F6208  C2 04 00                  RET 0x4
LAB_005f620b:
005F620B  8B 75 FC                  MOV ESI,dword ptr [EBP + -0x4]
005F620E  8B CE                     MOV ECX,ESI
005F6210  E8 70 B5 E0 FF            CALL 0x00401785
005F6215  8B 16                     MOV EDX,dword ptr [ESI]
005F6217  8B CE                     MOV ECX,ESI
005F6219  FF 92 D8 00 00 00         CALL dword ptr [EDX + 0xd8]
005F621F  8B 4D A4                  MOV ECX,dword ptr [EBP + -0x5c]
005F6222  33 C0                     XOR EAX,EAX
005F6224  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
005F622A  5F                        POP EDI
005F622B  5E                        POP ESI
005F622C  5B                        POP EBX
005F622D  8B E5                     MOV ESP,EBP
005F622F  5D                        POP EBP
005F6230  C2 04 00                  RET 0x4
LAB_005f6233:
005F6233  A1 A4 17 81 00            MOV EAX,[0x008117a4]
005F6238  8B 75 FC                  MOV ESI,dword ptr [EBP + -0x4]
005F623B  85 C0                     TEST EAX,EAX
005F623D  74 1D                     JZ 0x005f625c
005F623F  8B CE                     MOV ECX,ESI
005F6241  E8 9D E8 E0 FF            CALL 0x00404ae3
005F6246  8B 46 18                  MOV EAX,dword ptr [ESI + 0x18]
005F6249  8B 8E 35 02 00 00         MOV ECX,dword ptr [ESI + 0x235]
005F624F  50                        PUSH EAX
005F6250  51                        PUSH ECX
005F6251  8B 0D A4 17 81 00         MOV ECX,dword ptr [0x008117a4]
005F6257  E8 80 C7 E0 FF            CALL 0x004029dc
LAB_005f625c:
005F625C  8B CE                     MOV ECX,ESI
005F625E  E8 B7 D9 E0 FF            CALL 0x00403c1a
005F6263  8D 8E D5 01 00 00         LEA ECX,[ESI + 0x1d5]
005F6269  E8 67 BF E0 FF            CALL 0x004021d5
005F626E  8B 4D A4                  MOV ECX,dword ptr [EBP + -0x5c]
005F6271  33 C0                     XOR EAX,EAX
005F6273  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
005F6279  5F                        POP EDI
005F627A  5E                        POP ESI
005F627B  5B                        POP EBX
005F627C  8B E5                     MOV ESP,EBP
005F627E  5D                        POP EBP
005F627F  C2 04 00                  RET 0x4
LAB_005f6282:
005F6282  3D 08 01 00 00            CMP EAX,0x108
005F6287  0F 85 51 01 00 00         JNZ 0x005f63de
005F628D  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
005F6290  E8 24 B8 E0 FF            CALL 0x00401ab9
005F6295  8B 4D A4                  MOV ECX,dword ptr [EBP + -0x5c]
005F6298  33 C0                     XOR EAX,EAX
005F629A  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
005F62A0  5F                        POP EDI
005F62A1  5E                        POP ESI
005F62A2  5B                        POP EBX
005F62A3  8B E5                     MOV ESP,EBP
005F62A5  5D                        POP EBP
005F62A6  C2 04 00                  RET 0x4
LAB_005f62a9:
005F62A9  8B 75 FC                  MOV ESI,dword ptr [EBP + -0x4]
005F62AC  8D 55 EC                  LEA EDX,[EBP + -0x14]
005F62AF  52                        PUSH EDX
005F62B0  8B CE                     MOV ECX,ESI
005F62B2  E8 A2 DB E0 FF            CALL 0x00403e59
005F62B7  8B 4D EC                  MOV ECX,dword ptr [EBP + -0x14]
005F62BA  8B 56 18                  MOV EDX,dword ptr [ESI + 0x18]
005F62BD  51                        PUSH ECX
005F62BE  8B 0D 38 2A 80 00         MOV ECX,dword ptr [0x00802a38]
005F62C4  50                        PUSH EAX
005F62C5  52                        PUSH EDX
005F62C6  89 45 E8                  MOV dword ptr [EBP + -0x18],EAX
005F62C9  E8 2B C3 E0 FF            CALL 0x004025f9
005F62CE  8D 45 E8                  LEA EAX,[EBP + -0x18]
005F62D1  50                        PUSH EAX
005F62D2  E8 89 4D 0B 00            CALL 0x006ab060
005F62D7  8B 4D A4                  MOV ECX,dword ptr [EBP + -0x5c]
005F62DA  33 C0                     XOR EAX,EAX
005F62DC  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
005F62E2  5F                        POP EDI
005F62E3  5E                        POP ESI
005F62E4  5B                        POP EBX
005F62E5  8B E5                     MOV ESP,EBP
005F62E7  5D                        POP EBP
005F62E8  C2 04 00                  RET 0x4
LAB_005f62eb:
005F62EB  05 F0 FE FF FF            ADD EAX,0xfffffef0
005F62F0  83 F8 18                  CMP EAX,0x18
005F62F3  0F 87 E5 00 00 00         JA 0x005f63de
005F62F9  33 D2                     XOR EDX,EDX
005F62FB  8A 90 54 64 5F 00         MOV DL,byte ptr [EAX + 0x5f6454]
switchD_005f6301::switchD:
005F6301  FF 24 95 40 64 5F 00      JMP dword ptr [EDX*0x4 + 0x5f6440]
switchD_005f6301::caseD_110:
005F6308  8B 75 FC                  MOV ESI,dword ptr [EBP + -0x4]
005F630B  8B 79 14                  MOV EDI,dword ptr [ECX + 0x14]
005F630E  8B CE                     MOV ECX,ESI
005F6310  8B 06                     MOV EAX,dword ptr [ESI]
005F6312  FF 50 78                  CALL dword ptr [EAX + 0x78]
005F6315  85 C0                     TEST EAX,EAX
005F6317  0F 8E C1 00 00 00         JLE 0x005f63de
005F631D  8B 0F                     MOV ECX,dword ptr [EDI]
005F631F  51                        PUSH ECX
005F6320  8B CE                     MOV ECX,ESI
005F6322  E8 94 F6 E0 FF            CALL 0x004059bb
005F6327  85 C0                     TEST EAX,EAX
005F6329  0F 84 AF 00 00 00         JZ 0x005f63de
005F632F  6A 00                     PUSH 0x0
005F6331  8B CE                     MOV ECX,ESI
005F6333  E8 56 BA E0 FF            CALL 0x00401d8e
005F6338  33 D2                     XOR EDX,EDX
005F633A  33 C0                     XOR EAX,EAX
005F633C  8A 57 08                  MOV DL,byte ptr [EDI + 0x8]
005F633F  8B CE                     MOV ECX,ESI
005F6341  89 96 75 02 00 00         MOV dword ptr [ESI + 0x275],EDX
005F6347  66 8B 47 0E               MOV AX,word ptr [EDI + 0xe]
005F634B  89 86 79 02 00 00         MOV dword ptr [ESI + 0x279],EAX
005F6351  E8 C4 D8 E0 FF            CALL 0x00403c1a
005F6356  8B 4D A4                  MOV ECX,dword ptr [EBP + -0x5c]
005F6359  C7 86 DD 02 00 00 0D 00 00 00  MOV dword ptr [ESI + 0x2dd],0xd
005F6363  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
005F6369  33 C0                     XOR EAX,EAX
005F636B  5F                        POP EDI
005F636C  5E                        POP ESI
005F636D  5B                        POP EBX
005F636E  8B E5                     MOV ESP,EBP
005F6370  5D                        POP EBP
005F6371  C2 04 00                  RET 0x4
switchD_005f6301::caseD_128:
005F6374  8B 75 FC                  MOV ESI,dword ptr [EBP + -0x4]
005F6377  8D 8E D5 01 00 00         LEA ECX,[ESI + 0x1d5]
005F637D  E8 8D D9 E0 FF            CALL 0x00403d0f
005F6382  8B CE                     MOV ECX,ESI
005F6384  C6 86 BB 02 00 00 00      MOV byte ptr [ESI + 0x2bb],0x0
005F638B  E8 BC E2 E0 FF            CALL 0x0040464c
005F6390  8B CE                     MOV ECX,ESI
005F6392  E8 6D B7 E0 FF            CALL 0x00401b04
005F6397  8B 4D A4                  MOV ECX,dword ptr [EBP + -0x5c]
005F639A  33 C0                     XOR EAX,EAX
005F639C  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
005F63A2  5F                        POP EDI
005F63A3  5E                        POP ESI
005F63A4  5B                        POP EBX
005F63A5  8B E5                     MOV ESP,EBP
005F63A7  5D                        POP EBP
005F63A8  C2 04 00                  RET 0x4
switchD_005f6301::caseD_112:
005F63AB  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
005F63AE  81 C1 D5 01 00 00         ADD ECX,0x1d5
005F63B4  E8 D7 C6 E0 FF            CALL 0x00402a90
005F63B9  8B 4D A4                  MOV ECX,dword ptr [EBP + -0x5c]
005F63BC  33 C0                     XOR EAX,EAX
005F63BE  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
005F63C4  5F                        POP EDI
005F63C5  5E                        POP ESI
005F63C6  5B                        POP EBX
005F63C7  8B E5                     MOV ESP,EBP
005F63C9  5D                        POP EBP
005F63CA  C2 04 00                  RET 0x4
switchD_005f6301::caseD_113:
005F63CD  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
005F63D0  8B 82 D5 01 00 00         MOV EAX,dword ptr [EDX + 0x1d5]
005F63D6  8D 8A D5 01 00 00         LEA ECX,[EDX + 0x1d5]
005F63DC  FF 10                     CALL dword ptr [EAX]
switchD_005f6301::caseD_111:
005F63DE  8B 4D A4                  MOV ECX,dword ptr [EBP + -0x5c]
005F63E1  33 C0                     XOR EAX,EAX
005F63E3  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
005F63E9  5F                        POP EDI
005F63EA  5E                        POP ESI
005F63EB  5B                        POP EBX
005F63EC  8B E5                     MOV ESP,EBP
005F63EE  5D                        POP EBP
005F63EF  C2 04 00                  RET 0x4
LAB_005f63f2:
005F63F2  8B 55 A4                  MOV EDX,dword ptr [EBP + -0x5c]
005F63F5  68 8C E8 7C 00            PUSH 0x7ce88c
005F63FA  68 CC 4C 7A 00            PUSH 0x7a4ccc
005F63FF  56                        PUSH ESI
005F6400  6A 00                     PUSH 0x0
005F6402  68 E8 00 00 00            PUSH 0xe8
005F6407  68 68 E8 7C 00            PUSH 0x7ce868
005F640C  89 15 F8 8D 85 00         MOV dword ptr [0x00858df8],EDX
005F6412  E8 B9 70 0B 00            CALL 0x006ad4d0
005F6417  83 C4 18                  ADD ESP,0x18
005F641A  85 C0                     TEST EAX,EAX
005F641C  74 01                     JZ 0x005f641f
005F641E  CC                        INT3
LAB_005f641f:
005F641F  68 EA 00 00 00            PUSH 0xea
005F6424  68 68 E8 7C 00            PUSH 0x7ce868
005F6429  6A 00                     PUSH 0x0
005F642B  56                        PUSH ESI
005F642C  E8 0F FA 0A 00            CALL 0x006a5e40
LAB_005f6431:
005F6431  5F                        POP EDI
005F6432  5E                        POP ESI
005F6433  B8 FF FF 00 00            MOV EAX,0xffff
005F6438  5B                        POP EBX
005F6439  8B E5                     MOV ESP,EBP
005F643B  5D                        POP EBP
005F643C  C2 04 00                  RET 0x4
