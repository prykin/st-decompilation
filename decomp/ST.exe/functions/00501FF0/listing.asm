CPanelTy::Update2PanelWB:
00501FF0  55                        PUSH EBP
00501FF1  8B EC                     MOV EBP,ESP
00501FF3  81 EC A4 00 00 00         SUB ESP,0xa4
00501FF9  A1 F8 8D 85 00            MOV EAX,[0x00858df8]
00501FFE  53                        PUSH EBX
00501FFF  56                        PUSH ESI
00502000  89 4D FC                  MOV dword ptr [EBP + -0x4],ECX
00502003  57                        PUSH EDI
00502004  8D 95 60 FF FF FF         LEA EDX,[EBP + 0xffffff60]
0050200A  8D 8D 5C FF FF FF         LEA ECX,[EBP + 0xffffff5c]
00502010  6A 00                     PUSH 0x0
00502012  52                        PUSH EDX
00502013  89 85 5C FF FF FF         MOV dword ptr [EBP + 0xffffff5c],EAX
00502019  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
0050201F  E8 CC B7 22 00            CALL 0x0072d7f0
00502024  8B F0                     MOV ESI,EAX
00502026  83 C4 08                  ADD ESP,0x8
00502029  85 F6                     TEST ESI,ESI
0050202B  0F 85 BC 01 00 00         JNZ 0x005021ed
00502031  8B 5D FC                  MOV EBX,dword ptr [EBP + -0x4]
00502034  B9 17 00 00 00            MOV ECX,0x17
00502039  8D 7D A0                  LEA EDI,[EBP + -0x60]
0050203C  8D 93 99 0B 00 00         LEA EDX,[EBX + 0xb99]
00502042  8B F2                     MOV ESI,EDX
00502044  52                        PUSH EDX
00502045  F3 A5                     MOVSD.REP ES:EDI,ESI
00502047  B9 17 00 00 00            MOV ECX,0x17
0050204C  8B FA                     MOV EDI,EDX
0050204E  F3 AB                     STOSD.REP ES:EDI
00502050  8B 0D 74 A1 7F 00         MOV ECX,dword ptr [0x007fa174]
00502056  6A 02                     PUSH 0x2
00502058  E8 5F 15 F0 FF            CALL 0x004035bc
0050205D  8A 83 9E 0B 00 00         MOV AL,byte ptr [EBX + 0xb9e]
00502063  8A 4D A5                  MOV CL,byte ptr [EBP + -0x5b]
00502066  3A C8                     CMP CL,AL
00502068  0F 85 E7 00 00 00         JNZ 0x00502155
0050206E  25 FF 00 00 00            AND EAX,0xff
00502073  48                        DEC EAX
00502074  83 F8 03                  CMP EAX,0x3
00502077  0F 87 5D 01 00 00         JA 0x005021da
switchD_0050207d::switchD:
0050207D  FF 24 85 38 22 50 00      JMP dword ptr [EAX*0x4 + 0x502238]
switchD_0050207d::caseD_1:
00502084  8B 45 A0                  MOV EAX,dword ptr [EBP + -0x60]
00502087  8B 8B 99 0B 00 00         MOV ECX,dword ptr [EBX + 0xb99]
0050208D  8D B3 99 0B 00 00         LEA ESI,[EBX + 0xb99]
00502093  3B C1                     CMP EAX,ECX
00502095  0F 85 BA 00 00 00         JNZ 0x00502155
0050209B  8A 4D A4                  MOV CL,byte ptr [EBP + -0x5c]
0050209E  8A 83 9D 0B 00 00         MOV AL,byte ptr [EBX + 0xb9d]
005020A4  3A C8                     CMP CL,AL
005020A6  0F 85 A9 00 00 00         JNZ 0x00502155
005020AC  8D 55 A0                  LEA EDX,[EBP + -0x60]
005020AF  8B CB                     MOV ECX,EBX
005020B1  52                        PUSH EDX
005020B2  56                        PUSH ESI
005020B3  E8 36 1F F0 FF            CALL 0x00403fee
005020B8  8B 36                     MOV ESI,dword ptr [ESI]
005020BA  8D 46 F8                  LEA EAX,[ESI + -0x8]
005020BD  83 F8 1D                  CMP EAX,0x1d
005020C0  0F 87 14 01 00 00         JA 0x005021da
005020C6  33 C9                     XOR ECX,ECX
005020C8  8A 88 54 22 50 00         MOV CL,byte ptr [EAX + 0x502254]
switchD_005020ce::switchD:
005020CE  FF 24 8D 48 22 50 00      JMP dword ptr [ECX*0x4 + 0x502248]
switchD_005020ce::caseD_16:
005020D5  8A 93 CD 0B 00 00         MOV DL,byte ptr [EBX + 0xbcd]
005020DB  8A 45 D4                  MOV AL,byte ptr [EBP + -0x2c]
005020DE  3A D0                     CMP DL,AL
005020E0  0F 84 F4 00 00 00         JZ 0x005021da
005020E6  8B CB                     MOV ECX,EBX
005020E8  E8 C2 35 F0 FF            CALL 0x004056af
005020ED  8B 83 54 01 00 00         MOV EAX,dword ptr [EBX + 0x154]
005020F3  85 C0                     TEST EAX,EAX
005020F5  0F 8C DF 00 00 00         JL 0x005021da
005020FB  E9 C1 00 00 00            JMP 0x005021c1
switchD_005020ce::caseD_8:
00502100  8A 8B B6 0B 00 00         MOV CL,byte ptr [EBX + 0xbb6]
00502106  8A 45 BD                  MOV AL,byte ptr [EBP + -0x43]
00502109  3A C8                     CMP CL,AL
0050210B  75 1E                     JNZ 0x0050212b
0050210D  8A 93 B5 0B 00 00         MOV DL,byte ptr [EBX + 0xbb5]
00502113  8A 45 BC                  MOV AL,byte ptr [EBP + -0x44]
00502116  3A D0                     CMP DL,AL
00502118  75 11                     JNZ 0x0050212b
0050211A  8A 83 B7 0B 00 00         MOV AL,byte ptr [EBX + 0xbb7]
00502120  8A 4D BE                  MOV CL,byte ptr [EBP + -0x42]
00502123  3A C1                     CMP AL,CL
00502125  0F 84 AF 00 00 00         JZ 0x005021da
LAB_0050212b:
0050212B  8B CB                     MOV ECX,EBX
0050212D  E8 AD F6 EF FF            CALL 0x004017df
00502132  8B 83 54 01 00 00         MOV EAX,dword ptr [EBX + 0x154]
00502138  85 C0                     TEST EAX,EAX
0050213A  0F 8C 9A 00 00 00         JL 0x005021da
00502140  EB 7F                     JMP 0x005021c1
switchD_0050207d::caseD_2:
00502142  8B 4D A0                  MOV ECX,dword ptr [EBP + -0x60]
00502145  8B 93 99 0B 00 00         MOV EDX,dword ptr [EBX + 0xb99]
0050214B  8D 83 99 0B 00 00         LEA EAX,[EBX + 0xb99]
00502151  3B CA                     CMP ECX,EDX
00502153  74 28                     JZ 0x0050217d
CPanelTy::Update2PanelWB::cf_common_exit_00502155:
00502155  8B CB                     MOV ECX,EBX
00502157  E8 73 01 F0 FF            CALL 0x004022cf
0050215C  8B CB                     MOV ECX,EBX
0050215E  E8 0C 34 F0 FF            CALL 0x0040556f
00502163  8B CB                     MOV ECX,EBX
00502165  E8 F2 F1 EF FF            CALL 0x0040135c
0050216A  8B 8D 5C FF FF FF         MOV ECX,dword ptr [EBP + 0xffffff5c]
00502170  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
00502176  5F                        POP EDI
00502177  5E                        POP ESI
00502178  5B                        POP EBX
00502179  8B E5                     MOV ESP,EBP
0050217B  5D                        POP EBP
0050217C  C3                        RET
LAB_0050217d:
0050217D  8D 55 A0                  LEA EDX,[EBP + -0x60]
00502180  8B CB                     MOV ECX,EBX
00502182  52                        PUSH EDX
00502183  50                        PUSH EAX
00502184  E8 65 1E F0 FF            CALL 0x00403fee
00502189  8B 8D 5C FF FF FF         MOV ECX,dword ptr [EBP + 0xffffff5c]
0050218F  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
00502195  5F                        POP EDI
00502196  5E                        POP ESI
00502197  5B                        POP EBX
00502198  8B E5                     MOV ESP,EBP
0050219A  5D                        POP EBP
0050219B  C3                        RET
switchD_0050207d::caseD_4:
0050219C  8B 83 99 0B 00 00         MOV EAX,dword ptr [EBX + 0xb99]
005021A2  8B 4D A0                  MOV ECX,dword ptr [EBP + -0x60]
005021A5  3B C8                     CMP ECX,EAX
005021A7  75 AC                     JNZ 0x00502155
005021A9  3D AF 00 00 00            CMP EAX,0xaf
005021AE  75 2A                     JNZ 0x005021da
005021B0  8B CB                     MOV ECX,EBX
005021B2  E8 F8 34 F0 FF            CALL 0x004056af
005021B7  8B 83 54 01 00 00         MOV EAX,dword ptr [EBX + 0x154]
005021BD  85 C0                     TEST EAX,EAX
005021BF  7C 19                     JL 0x005021da
LAB_005021c1:
005021C1  8B 8B A0 00 00 00         MOV ECX,dword ptr [EBX + 0xa0]
005021C7  8B 53 48                  MOV EDX,dword ptr [EBX + 0x48]
005021CA  51                        PUSH ECX
005021CB  52                        PUSH EDX
005021CC  6A FF                     PUSH -0x1
005021CE  50                        PUSH EAX
005021CF  A1 A8 75 80 00            MOV EAX,[0x008075a8]
005021D4  50                        PUSH EAX
005021D5  E8 66 14 1B 00            CALL 0x006b3640
switchD_0050207d::default:
005021DA  8B 8D 5C FF FF FF         MOV ECX,dword ptr [EBP + 0xffffff5c]
005021E0  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
005021E6  5F                        POP EDI
005021E7  5E                        POP ESI
005021E8  5B                        POP EBX
005021E9  8B E5                     MOV ESP,EBP
005021EB  5D                        POP EBP
005021EC  C3                        RET
LAB_005021ed:
005021ED  8B 95 5C FF FF FF         MOV EDX,dword ptr [EBP + 0xffffff5c]
005021F3  68 C0 25 7C 00            PUSH 0x7c25c0
005021F8  68 CC 4C 7A 00            PUSH 0x7a4ccc
005021FD  56                        PUSH ESI
005021FE  6A 00                     PUSH 0x0
00502200  68 3E 01 00 00            PUSH 0x13e
00502205  68 24 25 7C 00            PUSH 0x7c2524
0050220A  89 15 F8 8D 85 00         MOV dword ptr [0x00858df8],EDX
00502210  E8 BB B2 1A 00            CALL 0x006ad4d0
00502215  83 C4 18                  ADD ESP,0x18
00502218  85 C0                     TEST EAX,EAX
0050221A  74 01                     JZ 0x0050221d
0050221C  CC                        INT3
LAB_0050221d:
0050221D  68 3E 01 00 00            PUSH 0x13e
00502222  68 24 25 7C 00            PUSH 0x7c2524
00502227  6A 00                     PUSH 0x0
00502229  56                        PUSH ESI
0050222A  E8 11 3C 1A 00            CALL 0x006a5e40
0050222F  5F                        POP EDI
00502230  5E                        POP ESI
00502231  5B                        POP EBX
00502232  8B E5                     MOV ESP,EBP
00502234  5D                        POP EBP
00502235  C3                        RET
