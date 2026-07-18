CPanelTy::SetNewDeep:
005007A0  55                        PUSH EBP
005007A1  8B EC                     MOV EBP,ESP
005007A3  83 EC 54                  SUB ESP,0x54
005007A6  A1 84 87 80 00            MOV EAX,[0x00808784]
005007AB  53                        PUSH EBX
005007AC  56                        PUSH ESI
005007AD  57                        PUSH EDI
005007AE  85 C0                     TEST EAX,EAX
005007B0  89 4D F4                  MOV dword ptr [EBP + -0xc],ECX
005007B3  0F 85 23 03 00 00         JNZ 0x00500adc
005007B9  A1 88 87 80 00            MOV EAX,[0x00808788]
005007BE  85 C0                     TEST EAX,EAX
005007C0  75 16                     JNZ 0x005007d8
005007C2  A1 8C 87 80 00            MOV EAX,[0x0080878c]
005007C7  85 C0                     TEST EAX,EAX
005007C9  75 0D                     JNZ 0x005007d8
005007CB  A1 90 87 80 00            MOV EAX,[0x00808790]
005007D0  85 C0                     TEST EAX,EAX
005007D2  75 04                     JNZ 0x005007d8
005007D4  33 C0                     XOR EAX,EAX
005007D6  EB 05                     JMP 0x005007dd
LAB_005007d8:
005007D8  B8 01 00 00 00            MOV EAX,0x1
LAB_005007dd:
005007DD  85 C0                     TEST EAX,EAX
005007DF  0F 85 F7 02 00 00         JNZ 0x00500adc
005007E5  8A 45 08                  MOV AL,byte ptr [EBP + 0x8]
005007E8  84 C0                     TEST AL,AL
005007EA  74 31                     JZ 0x0050081d
005007EC  8A 81 6E 0C 00 00         MOV AL,byte ptr [ECX + 0xc6e]
005007F2  84 C0                     TEST AL,AL
005007F4  0F 84 E2 02 00 00         JZ 0x00500adc
005007FA  8A 81 51 0C 00 00         MOV AL,byte ptr [ECX + 0xc51]
00500800  84 C0                     TEST AL,AL
00500802  0F 84 D4 02 00 00         JZ 0x00500adc
00500808  3C 03                     CMP AL,0x3
0050080A  0F 84 CC 02 00 00         JZ 0x00500adc
00500810  3C 04                     CMP AL,0x4
00500812  75 2D                     JNZ 0x00500841
00500814  5F                        POP EDI
00500815  5E                        POP ESI
00500816  5B                        POP EBX
00500817  8B E5                     MOV ESP,EBP
00500819  5D                        POP EBP
0050081A  C2 08 00                  RET 0x8
LAB_0050081d:
0050081D  8A 81 80 0B 00 00         MOV AL,byte ptr [ECX + 0xb80]
00500823  84 C0                     TEST AL,AL
00500825  0F 84 B1 02 00 00         JZ 0x00500adc
0050082B  8A 81 63 0B 00 00         MOV AL,byte ptr [ECX + 0xb63]
00500831  84 C0                     TEST AL,AL
00500833  0F 84 A3 02 00 00         JZ 0x00500adc
00500839  3C 03                     CMP AL,0x3
0050083B  0F 84 9B 02 00 00         JZ 0x00500adc
LAB_00500841:
00500841  A1 F8 8D 85 00            MOV EAX,[0x00858df8]
00500846  8D 55 B0                  LEA EDX,[EBP + -0x50]
00500849  8D 4D AC                  LEA ECX,[EBP + -0x54]
0050084C  6A 00                     PUSH 0x0
0050084E  52                        PUSH EDX
0050084F  89 45 AC                  MOV dword ptr [EBP + -0x54],EAX
00500852  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
00500858  E8 93 CF 22 00            CALL 0x0072d7f0
0050085D  8B F0                     MOV ESI,EAX
0050085F  83 C4 08                  ADD ESP,0x8
00500862  85 F6                     TEST ESI,ESI
00500864  0F 85 33 02 00 00         JNZ 0x00500a9d
0050086A  8B 5D 08                  MOV EBX,dword ptr [EBP + 0x8]
0050086D  8B 75 F4                  MOV ESI,dword ptr [EBP + -0xc]
00500870  8B FB                     MOV EDI,EBX
00500872  81 E7 FF 00 00 00         AND EDI,0xff
00500878  89 7D F8                  MOV dword ptr [EBP + -0x8],EDI
0050087B  8A 84 37 A8 02 00 00      MOV AL,byte ptr [EDI + ESI*0x1 + 0x2a8]
00500882  3C FF                     CMP AL,0xff
00500884  0F 84 FB 00 00 00         JZ 0x00500985
0050088A  80 3D 4E 87 80 00 03      CMP byte ptr [0x0080874e],0x3
00500891  0F 85 41 01 00 00         JNZ 0x005009d8
00500897  84 DB                     TEST BL,BL
00500899  74 50                     JZ 0x005008eb
0050089B  25 FF 00 00 00            AND EAX,0xff
005008A0  8A 8C 30 7B 0C 00 00      MOV CL,byte ptr [EAX + ESI*0x1 + 0xc7b]
005008A7  84 C9                     TEST CL,CL
005008A9  74 05                     JZ 0x005008b0
005008AB  83 C0 19                  ADD EAX,0x19
005008AE  EB 03                     JMP 0x005008b3
LAB_005008b0:
005008B0  83 C0 14                  ADD EAX,0x14
LAB_005008b3:
005008B3  8B 96 A2 02 00 00         MOV EDX,dword ptr [ESI + 0x2a2]
005008B9  33 C9                     XOR ECX,ECX
005008BB  8A 8C 37 A8 02 00 00      MOV CL,byte ptr [EDI + ESI*0x1 + 0x2a8]
005008C2  50                        PUSH EAX
005008C3  52                        PUSH EDX
005008C4  8B F9                     MOV EDI,ECX
005008C6  E8 D5 AA 20 00            CALL 0x0070b3a0
005008CB  50                        PUSH EAX
005008CC  8D 44 BF 05               LEA EAX,[EDI + EDI*0x4 + 0x5]
005008D0  8D 14 BF                  LEA EDX,[EDI + EDI*0x4]
005008D3  6A 06                     PUSH 0x6
005008D5  8D 4C 47 01               LEA ECX,[EDI + EAX*0x2 + 0x1]
005008D9  51                        PUSH ECX
005008DA  8B 8E 94 01 00 00         MOV ECX,dword ptr [ESI + 0x194]
005008E0  8D 84 57 87 00 00 00      LEA EAX,[EDI + EDX*0x2 + 0x87]
005008E7  50                        PUSH EAX
005008E8  51                        PUSH ECX
005008E9  EB 4E                     JMP 0x00500939
LAB_005008eb:
005008EB  33 C0                     XOR EAX,EAX
005008ED  8A 86 A8 02 00 00         MOV AL,byte ptr [ESI + 0x2a8]
005008F3  8A 8C 30 8D 0B 00 00      MOV CL,byte ptr [EAX + ESI*0x1 + 0xb8d]
005008FA  84 C9                     TEST CL,CL
005008FC  75 03                     JNZ 0x00500901
005008FE  83 C0 05                  ADD EAX,0x5
LAB_00500901:
00500901  33 D2                     XOR EDX,EDX
00500903  50                        PUSH EAX
00500904  8B 86 A2 02 00 00         MOV EAX,dword ptr [ESI + 0x2a2]
0050090A  8A 96 A8 02 00 00         MOV DL,byte ptr [ESI + 0x2a8]
00500910  50                        PUSH EAX
00500911  8B FA                     MOV EDI,EDX
00500913  E8 88 AA 20 00            CALL 0x0070b3a0
00500918  50                        PUSH EAX
00500919  B8 05 00 00 00            MOV EAX,0x5
0050091E  8D 4C BF 05               LEA ECX,[EDI + EDI*0x4 + 0x5]
00500922  2B C7                     SUB EAX,EDI
00500924  6A 06                     PUSH 0x6
00500926  8D 54 4F 01               LEA EDX,[EDI + ECX*0x2 + 0x1]
0050092A  8D 0C 80                  LEA ECX,[EAX + EAX*0x4]
0050092D  52                        PUSH EDX
0050092E  8D 14 48                  LEA EDX,[EAX + ECX*0x2]
00500931  8B 86 8C 01 00 00         MOV EAX,dword ptr [ESI + 0x18c]
00500937  52                        PUSH EDX
00500938  50                        PUSH EAX
LAB_00500939:
00500939  E8 EB 28 F0 FF            CALL 0x00403229
0050093E  83 C4 1C                  ADD ESP,0x1c
00500941  F6 DB                     NEG BL
00500943  1A DB                     SBB BL,BL
00500945  80 E3 02                  AND BL,0x2
00500948  80 C3 03                  ADD BL,0x3
0050094B  80 FB 0B                  CMP BL,0xb
0050094E  88 5D F0                  MOV byte ptr [EBP + -0x10],BL
00500951  73 2F                     JNC 0x00500982
00500953  8B 45 F0                  MOV EAX,dword ptr [EBP + -0x10]
00500956  25 FF 00 00 00            AND EAX,0xff
0050095B  8B 8C 86 48 01 00 00      MOV ECX,dword ptr [ESI + EAX*0x4 + 0x148]
00500962  85 C9                     TEST ECX,ECX
00500964  7C 1C                     JL 0x00500982
00500966  8B 94 86 94 00 00 00      MOV EDX,dword ptr [ESI + EAX*0x4 + 0x94]
0050096D  8B 44 86 3C               MOV EAX,dword ptr [ESI + EAX*0x4 + 0x3c]
00500971  52                        PUSH EDX
00500972  50                        PUSH EAX
00500973  6A FF                     PUSH -0x1
00500975  51                        PUSH ECX
00500976  8B 0D A8 75 80 00         MOV ECX,dword ptr [0x008075a8]
0050097C  51                        PUSH ECX
0050097D  E8 BE 2C 1B 00            CALL 0x006b3640
LAB_00500982:
00500982  8B 7D F8                  MOV EDI,dword ptr [EBP + -0x8]
LAB_00500985:
00500985  8A 5D 0C                  MOV BL,byte ptr [EBP + 0xc]
00500988  C6 84 37 A6 02 00 00 00   MOV byte ptr [EDI + ESI*0x1 + 0x2a6],0x0
00500990  88 9C 37 A8 02 00 00      MOV byte ptr [EDI + ESI*0x1 + 0x2a8],BL
00500997  68 B4 00 00 00            PUSH 0xb4
0050099C  C7 84 BE AA 02 00 00 00 00 00 00  MOV dword ptr [ESI + EDI*0x4 + 0x2aa],0x0
005009A7  E8 83 54 F0 FF            CALL 0x00405e2f
005009AC  8B 0D 38 2A 80 00         MOV ECX,dword ptr [0x00802a38]
005009B2  83 C4 04                  ADD ESP,0x4
005009B5  8D 55 FF                  LEA EDX,[EBP + -0x1]
005009B8  88 5D FF                  MOV byte ptr [EBP + -0x1],BL
005009BB  6A FF                     PUSH -0x1
005009BD  6A 00                     PUSH 0x0
005009BF  52                        PUSH EDX
005009C0  6A 15                     PUSH 0x15
005009C2  E8 6C 32 F0 FF            CALL 0x00403c33
005009C7  8B 45 AC                  MOV EAX,dword ptr [EBP + -0x54]
005009CA  A3 F8 8D 85 00            MOV [0x00858df8],EAX
005009CF  5F                        POP EDI
005009D0  5E                        POP ESI
005009D1  5B                        POP EBX
005009D2  8B E5                     MOV ESP,EBP
005009D4  5D                        POP EBP
005009D5  C2 08 00                  RET 0x8
LAB_005009d8:
005009D8  84 DB                     TEST BL,BL
005009DA  74 0E                     JZ 0x005009ea
005009DC  25 FF 00 00 00            AND EAX,0xff
005009E1  8A 84 30 7B 0C 00 00      MOV AL,byte ptr [EAX + ESI*0x1 + 0xc7b]
005009E8  EB 0F                     JMP 0x005009f9
LAB_005009ea:
005009EA  33 D2                     XOR EDX,EDX
005009EC  8A 96 A8 02 00 00         MOV DL,byte ptr [ESI + 0x2a8]
005009F2  8A 84 32 8D 0B 00 00      MOV AL,byte ptr [EDX + ESI*0x1 + 0xb8d]
LAB_005009f9:
005009F9  84 DB                     TEST BL,BL
005009FB  74 0B                     JZ 0x00500a08
005009FD  8B 8E 98 01 00 00         MOV ECX,dword ptr [ESI + 0x198]
00500A03  89 4D F8                  MOV dword ptr [EBP + -0x8],ECX
00500A06  EB 09                     JMP 0x00500a11
LAB_00500a08:
00500A08  8B 96 88 01 00 00         MOV EDX,dword ptr [ESI + 0x188]
00500A0E  89 55 F8                  MOV dword ptr [EBP + -0x8],EDX
LAB_00500a11:
00500A11  F6 D8                     NEG AL
00500A13  1B C0                     SBB EAX,EAX
00500A15  24 FE                     AND AL,0xfe
00500A17  83 C0 02                  ADD EAX,0x2
00500A1A  50                        PUSH EAX
00500A1B  8B 86 A2 02 00 00         MOV EAX,dword ptr [ESI + 0x2a2]
00500A21  50                        PUSH EAX
00500A22  E8 79 A9 20 00            CALL 0x0070b3a0
00500A27  50                        PUSH EAX
00500A28  33 C0                     XOR EAX,EAX
00500A2A  8A 84 37 A8 02 00 00      MOV AL,byte ptr [EDI + ESI*0x1 + 0x2a8]
00500A31  6A 01                     PUSH 0x1
00500A33  8D 0C C5 00 00 00 00      LEA ECX,[EAX*0x8 + 0x0]
00500A3A  2B C8                     SUB ECX,EAX
00500A3C  8D 54 88 06               LEA EDX,[EAX + ECX*0x4 + 0x6]
00500A40  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
00500A43  52                        PUSH EDX
00500A44  6A 07                     PUSH 0x7
00500A46  50                        PUSH EAX
00500A47  E8 DD 27 F0 FF            CALL 0x00403229
00500A4C  83 C4 1C                  ADD ESP,0x1c
00500A4F  F6 DB                     NEG BL
00500A51  1A DB                     SBB BL,BL
00500A53  80 E3 04                  AND BL,0x4
00500A56  80 C3 02                  ADD BL,0x2
00500A59  80 FB 0B                  CMP BL,0xb
00500A5C  88 5D F0                  MOV byte ptr [EBP + -0x10],BL
00500A5F  0F 83 20 FF FF FF         JNC 0x00500985
00500A65  8B 45 F0                  MOV EAX,dword ptr [EBP + -0x10]
00500A68  25 FF 00 00 00            AND EAX,0xff
00500A6D  8B 8C 86 48 01 00 00      MOV ECX,dword ptr [ESI + EAX*0x4 + 0x148]
00500A74  85 C9                     TEST ECX,ECX
00500A76  0F 8C 09 FF FF FF         JL 0x00500985
00500A7C  8B 94 86 94 00 00 00      MOV EDX,dword ptr [ESI + EAX*0x4 + 0x94]
00500A83  8B 44 86 3C               MOV EAX,dword ptr [ESI + EAX*0x4 + 0x3c]
00500A87  52                        PUSH EDX
00500A88  50                        PUSH EAX
00500A89  6A FF                     PUSH -0x1
00500A8B  51                        PUSH ECX
00500A8C  8B 0D A8 75 80 00         MOV ECX,dword ptr [0x008075a8]
00500A92  51                        PUSH ECX
00500A93  E8 A8 2B 1B 00            CALL 0x006b3640
00500A98  E9 E8 FE FF FF            JMP 0x00500985
LAB_00500a9d:
00500A9D  8B 4D AC                  MOV ECX,dword ptr [EBP + -0x54]
00500AA0  68 EC 24 7C 00            PUSH 0x7c24ec
00500AA5  68 CC 4C 7A 00            PUSH 0x7a4ccc
00500AAA  56                        PUSH ESI
00500AAB  6A 00                     PUSH 0x0
00500AAD  68 FB 01 00 00            PUSH 0x1fb
00500AB2  68 CC 23 7C 00            PUSH 0x7c23cc
00500AB7  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
00500ABD  E8 0E CA 1A 00            CALL 0x006ad4d0
00500AC2  83 C4 18                  ADD ESP,0x18
00500AC5  85 C0                     TEST EAX,EAX
00500AC7  74 01                     JZ 0x00500aca
00500AC9  CC                        INT3
LAB_00500aca:
00500ACA  68 FB 01 00 00            PUSH 0x1fb
00500ACF  68 CC 23 7C 00            PUSH 0x7c23cc
00500AD4  6A 00                     PUSH 0x0
00500AD6  56                        PUSH ESI
00500AD7  E8 64 53 1A 00            CALL 0x006a5e40
LAB_00500adc:
00500ADC  5F                        POP EDI
00500ADD  5E                        POP ESI
00500ADE  5B                        POP EBX
00500ADF  8B E5                     MOV ESP,EBP
00500AE1  5D                        POP EBP
00500AE2  C2 08 00                  RET 0x8
