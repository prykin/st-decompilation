FUN_004cfbe0:
004CFBE0  55                        PUSH EBP
004CFBE1  8B EC                     MOV EBP,ESP
004CFBE3  53                        PUSH EBX
004CFBE4  56                        PUSH ESI
004CFBE5  8B F1                     MOV ESI,ECX
004CFBE7  57                        PUSH EDI
004CFBE8  8B 0D 74 A1 7F 00         MOV ECX,dword ptr [0x007fa174]
004CFBEE  8A 86 3D 02 00 00         MOV AL,byte ptr [ESI + 0x23d]
004CFBF4  50                        PUSH EAX
004CFBF5  E8 BD 4D F3 FF            CALL 0x004049b7
004CFBFA  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
004CFBFD  8B 8E 45 02 00 00         MOV ECX,dword ptr [ESI + 0x245]
004CFC03  25 FF 00 00 00            AND EAX,0xff
004CFC08  8D 7A F8                  LEA EDI,[EDX + -0x8]
004CFC0B  48                        DEC EAX
004CFC0C  83 FF 06                  CMP EDI,0x6
004CFC0F  0F 87 39 01 00 00         JA 0x004cfd4e
004CFC15  33 D2                     XOR EDX,EDX
004CFC17  8A 97 64 FD 4C 00         MOV DL,byte ptr [EDI + 0x4cfd64]
switchD_004cfc1d::switchD:
004CFC1D  FF 24 95 58 FD 4C 00      JMP dword ptr [EDX*0x4 + 0x4cfd58]
switchD_004cfc1d::caseD_d:
004CFC24  8B 96 D0 04 00 00         MOV EDX,dword ptr [ESI + 0x4d0]
004CFC2A  83 FA 03                  CMP EDX,0x3
004CFC2D  74 61                     JZ 0x004cfc90
004CFC2F  83 FA 04                  CMP EDX,0x4
004CFC32  75 46                     JNZ 0x004cfc7a
004CFC34  8B 96 35 02 00 00         MOV EDX,dword ptr [ESI + 0x235]
004CFC3A  8B 1C 8D 70 51 7B 00      MOV EBX,dword ptr [ECX*0x4 + 0x7b5170]
004CFC41  8D 3C 50                  LEA EDI,[EAX + EDX*0x2]
004CFC44  03 D7                     ADD EDX,EDI
004CFC46  8B 7D 0C                  MOV EDI,dword ptr [EBP + 0xc]
004CFC49  8D 14 97                  LEA EDX,[EDI + EDX*0x4]
004CFC4C  8B 54 D3 04               MOV EDX,dword ptr [EBX + EDX*0x8 + 0x4]
LAB_004cfc50:
004CFC50  8B 5D 10                  MOV EBX,dword ptr [EBP + 0x10]
004CFC53  89 13                     MOV dword ptr [EBX],EDX
004CFC55  8B B6 35 02 00 00         MOV ESI,dword ptr [ESI + 0x235]
004CFC5B  8D 04 70                  LEA EAX,[EAX + ESI*0x2]
004CFC5E  03 F0                     ADD ESI,EAX
004CFC60  8B 04 8D 70 51 7B 00      MOV EAX,dword ptr [ECX*0x4 + 0x7b5170]
004CFC67  8D 14 B7                  LEA EDX,[EDI + ESI*0x4]
004CFC6A  5F                        POP EDI
004CFC6B  5E                        POP ESI
004CFC6C  5B                        POP EBX
004CFC6D  8B 4C D0 04               MOV ECX,dword ptr [EAX + EDX*0x8 + 0x4]
004CFC71  8B 55 14                  MOV EDX,dword ptr [EBP + 0x14]
004CFC74  89 0A                     MOV dword ptr [EDX],ECX
004CFC76  5D                        POP EBP
004CFC77  C2 10 00                  RET 0x10
LAB_004cfc7a:
004CFC7A  83 FA 05                  CMP EDX,0x5
004CFC7D  0F 85 A6 00 00 00         JNZ 0x004cfd29
004CFC83  EB 5F                     JMP 0x004cfce4
switchD_004cfc1d::caseD_8:
004CFC85  8B 96 D0 04 00 00         MOV EDX,dword ptr [ESI + 0x4d0]
004CFC8B  83 FA 03                  CMP EDX,0x3
004CFC8E  75 1D                     JNZ 0x004cfcad
LAB_004cfc90:
004CFC90  8B 96 35 02 00 00         MOV EDX,dword ptr [ESI + 0x235]
004CFC96  8B 1C 8D 70 51 7B 00      MOV EBX,dword ptr [ECX*0x4 + 0x7b5170]
004CFC9D  8D 3C 50                  LEA EDI,[EAX + EDX*0x2]
004CFCA0  03 D7                     ADD EDX,EDI
004CFCA2  8B 7D 0C                  MOV EDI,dword ptr [EBP + 0xc]
004CFCA5  8D 14 97                  LEA EDX,[EDI + EDX*0x4]
004CFCA8  8B 14 D3                  MOV EDX,dword ptr [EBX + EDX*0x8]
004CFCAB  EB A3                     JMP 0x004cfc50
LAB_004cfcad:
004CFCAD  83 FA 04                  CMP EDX,0x4
004CFCB0  75 2D                     JNZ 0x004cfcdf
004CFCB2  8B B6 35 02 00 00         MOV ESI,dword ptr [ESI + 0x235]
004CFCB8  8B 55 0C                  MOV EDX,dword ptr [EBP + 0xc]
004CFCBB  8B 0C 8D 70 51 7B 00      MOV ECX,dword ptr [ECX*0x4 + 0x7b5170]
004CFCC2  5F                        POP EDI
004CFCC3  8D 04 70                  LEA EAX,[EAX + ESI*0x2]
004CFCC6  03 F0                     ADD ESI,EAX
004CFCC8  8D 04 B2                  LEA EAX,[EDX + ESI*0x4]
004CFCCB  8B 55 14                  MOV EDX,dword ptr [EBP + 0x14]
004CFCCE  5E                        POP ESI
004CFCCF  5B                        POP EBX
004CFCD0  8B 44 C1 04               MOV EAX,dword ptr [ECX + EAX*0x8 + 0x4]
004CFCD4  8B 4D 10                  MOV ECX,dword ptr [EBP + 0x10]
004CFCD7  89 02                     MOV dword ptr [EDX],EAX
004CFCD9  89 01                     MOV dword ptr [ECX],EAX
004CFCDB  5D                        POP EBP
004CFCDC  C2 10 00                  RET 0x10
LAB_004cfcdf:
004CFCDF  83 FA 05                  CMP EDX,0x5
004CFCE2  75 45                     JNZ 0x004cfd29
LAB_004cfce4:
004CFCE4  8B 96 35 02 00 00         MOV EDX,dword ptr [ESI + 0x235]
004CFCEA  8B 1C 8D 70 51 7B 00      MOV EBX,dword ptr [ECX*0x4 + 0x7b5170]
004CFCF1  8D 3C 50                  LEA EDI,[EAX + EDX*0x2]
004CFCF4  03 D7                     ADD EDX,EDI
004CFCF6  8B 7D 0C                  MOV EDI,dword ptr [EBP + 0xc]
004CFCF9  8D 14 97                  LEA EDX,[EDI + EDX*0x4]
004CFCFC  8B 14 D3                  MOV EDX,dword ptr [EBX + EDX*0x8]
004CFCFF  8B 5D 14                  MOV EBX,dword ptr [EBP + 0x14]
004CFD02  89 13                     MOV dword ptr [EBX],EDX
004CFD04  8B B6 35 02 00 00         MOV ESI,dword ptr [ESI + 0x235]
004CFD0A  8D 04 70                  LEA EAX,[EAX + ESI*0x2]
004CFD0D  03 F0                     ADD ESI,EAX
004CFD0F  8B 04 8D 70 51 7B 00      MOV EAX,dword ptr [ECX*0x4 + 0x7b5170]
004CFD16  8D 14 B7                  LEA EDX,[EDI + ESI*0x4]
004CFD19  5F                        POP EDI
004CFD1A  5E                        POP ESI
004CFD1B  5B                        POP EBX
004CFD1C  8B 4C D0 04               MOV ECX,dword ptr [EAX + EDX*0x8 + 0x4]
004CFD20  8B 55 10                  MOV EDX,dword ptr [EBP + 0x10]
004CFD23  89 0A                     MOV dword ptr [EDX],ECX
004CFD25  5D                        POP EBP
004CFD26  C2 10 00                  RET 0x10
LAB_004cfd29:
004CFD29  8B B6 35 02 00 00         MOV ESI,dword ptr [ESI + 0x235]
004CFD2F  8B 55 0C                  MOV EDX,dword ptr [EBP + 0xc]
004CFD32  8B 0C 8D 70 51 7B 00      MOV ECX,dword ptr [ECX*0x4 + 0x7b5170]
004CFD39  8D 04 70                  LEA EAX,[EAX + ESI*0x2]
004CFD3C  03 F0                     ADD ESI,EAX
004CFD3E  8D 04 B2                  LEA EAX,[EDX + ESI*0x4]
004CFD41  8B 55 14                  MOV EDX,dword ptr [EBP + 0x14]
004CFD44  8B 04 C1                  MOV EAX,dword ptr [ECX + EAX*0x8]
004CFD47  8B 4D 10                  MOV ECX,dword ptr [EBP + 0x10]
004CFD4A  89 02                     MOV dword ptr [EDX],EAX
004CFD4C  89 01                     MOV dword ptr [ECX],EAX
switchD_004cfc1d::caseD_a:
004CFD4E  5F                        POP EDI
004CFD4F  5E                        POP ESI
004CFD50  5B                        POP EBX
004CFD51  5D                        POP EBP
004CFD52  C2 10 00                  RET 0x10
