FUN_004cfde0:
004CFDE0  55                        PUSH EBP
004CFDE1  8B EC                     MOV EBP,ESP
004CFDE3  53                        PUSH EBX
004CFDE4  56                        PUSH ESI
004CFDE5  8B F1                     MOV ESI,ECX
004CFDE7  57                        PUSH EDI
004CFDE8  8B 0D 74 A1 7F 00         MOV ECX,dword ptr [0x007fa174]
004CFDEE  8A 86 3D 02 00 00         MOV AL,byte ptr [ESI + 0x23d]
004CFDF4  50                        PUSH EAX
004CFDF5  E8 BD 4B F3 FF            CALL 0x004049b7
004CFDFA  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
004CFDFD  8B 8E 45 02 00 00         MOV ECX,dword ptr [ESI + 0x245]
004CFE03  25 FF 00 00 00            AND EAX,0xff
004CFE08  48                        DEC EAX
004CFE09  83 EA 09                  SUB EDX,0x9
004CFE0C  0F 84 E9 00 00 00         JZ 0x004cfefb
004CFE12  83 EA 04                  SUB EDX,0x4
004CFE15  0F 84 BA 00 00 00         JZ 0x004cfed5
004CFE1B  4A                        DEC EDX
004CFE1C  0F 85 4F 01 00 00         JNZ 0x004cff71
004CFE22  8B 96 D0 04 00 00         MOV EDX,dword ptr [ESI + 0x4d0]
004CFE28  83 FA 03                  CMP EDX,0x3
004CFE2B  75 47                     JNZ 0x004cfe74
LAB_004cfe2d:
004CFE2D  8B 96 35 02 00 00         MOV EDX,dword ptr [ESI + 0x235]
004CFE33  8B 1C 8D 70 51 7B 00      MOV EBX,dword ptr [ECX*0x4 + 0x7b5170]
004CFE3A  8D 3C 50                  LEA EDI,[EAX + EDX*0x2]
004CFE3D  03 D7                     ADD EDX,EDI
004CFE3F  8B 7D 0C                  MOV EDI,dword ptr [EBP + 0xc]
004CFE42  8D 14 97                  LEA EDX,[EDI + EDX*0x4]
004CFE45  8B 14 D3                  MOV EDX,dword ptr [EBX + EDX*0x8]
004CFE48  8B 5D 10                  MOV EBX,dword ptr [EBP + 0x10]
004CFE4B  83 EA 0F                  SUB EDX,0xf
004CFE4E  89 13                     MOV dword ptr [EBX],EDX
004CFE50  8B B6 35 02 00 00         MOV ESI,dword ptr [ESI + 0x235]
004CFE56  8D 04 70                  LEA EAX,[EAX + ESI*0x2]
004CFE59  03 F0                     ADD ESI,EAX
004CFE5B  8B 04 8D 70 51 7B 00      MOV EAX,dword ptr [ECX*0x4 + 0x7b5170]
004CFE62  8D 14 B7                  LEA EDX,[EDI + ESI*0x4]
004CFE65  5F                        POP EDI
004CFE66  5E                        POP ESI
004CFE67  5B                        POP EBX
004CFE68  8B 0C D0                  MOV ECX,dword ptr [EAX + EDX*0x8]
004CFE6B  8B 55 14                  MOV EDX,dword ptr [EBP + 0x14]
004CFE6E  89 0A                     MOV dword ptr [EDX],ECX
004CFE70  5D                        POP EBP
004CFE71  C2 10 00                  RET 0x10
LAB_004cfe74:
004CFE74  83 FA 04                  CMP EDX,0x4
004CFE77  0F 84 CF 00 00 00         JZ 0x004cff4c
004CFE7D  83 FA 05                  CMP EDX,0x5
004CFE80  75 47                     JNZ 0x004cfec9
LAB_004cfe82:
004CFE82  8B 96 35 02 00 00         MOV EDX,dword ptr [ESI + 0x235]
004CFE88  8B 1C 8D 70 51 7B 00      MOV EBX,dword ptr [ECX*0x4 + 0x7b5170]
004CFE8F  8D 3C 50                  LEA EDI,[EAX + EDX*0x2]
004CFE92  03 D7                     ADD EDX,EDI
004CFE94  8B 7D 0C                  MOV EDI,dword ptr [EBP + 0xc]
004CFE97  8D 14 97                  LEA EDX,[EDI + EDX*0x4]
004CFE9A  8B 14 D3                  MOV EDX,dword ptr [EBX + EDX*0x8]
004CFE9D  8B 5D 10                  MOV EBX,dword ptr [EBP + 0x10]
004CFEA0  89 13                     MOV dword ptr [EBX],EDX
004CFEA2  8B B6 35 02 00 00         MOV ESI,dword ptr [ESI + 0x235]
004CFEA8  8D 04 70                  LEA EAX,[EAX + ESI*0x2]
004CFEAB  03 F0                     ADD ESI,EAX
004CFEAD  8B 04 8D 70 51 7B 00      MOV EAX,dword ptr [ECX*0x4 + 0x7b5170]
004CFEB4  8D 14 B7                  LEA EDX,[EDI + ESI*0x4]
004CFEB7  5F                        POP EDI
004CFEB8  5E                        POP ESI
004CFEB9  5B                        POP EBX
004CFEBA  8B 0C D0                  MOV ECX,dword ptr [EAX + EDX*0x8]
004CFEBD  8B 55 14                  MOV EDX,dword ptr [EBP + 0x14]
004CFEC0  83 E9 0F                  SUB ECX,0xf
004CFEC3  89 0A                     MOV dword ptr [EDX],ECX
004CFEC5  5D                        POP EBP
004CFEC6  C2 10 00                  RET 0x10
LAB_004cfec9:
004CFEC9  83 FA 02                  CMP EDX,0x2
004CFECC  74 4F                     JZ 0x004cff1d
LAB_004cfece:
004CFECE  83 FA 01                  CMP EDX,0x1
004CFED1  75 79                     JNZ 0x004cff4c
004CFED3  EB AD                     JMP 0x004cfe82
LAB_004cfed5:
004CFED5  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
004CFED8  25 01 00 00 80            AND EAX,0x80000001
004CFEDD  79 05                     JNS 0x004cfee4
004CFEDF  48                        DEC EAX
004CFEE0  83 C8 FE                  OR EAX,0xfffffffe
004CFEE3  40                        INC EAX
LAB_004cfee4:
004CFEE4  8B 55 14                  MOV EDX,dword ptr [EBP + 0x14]
004CFEE7  8B 4D 10                  MOV ECX,dword ptr [EBP + 0x10]
004CFEEA  F7 D8                     NEG EAX
004CFEEC  1B C0                     SBB EAX,EAX
004CFEEE  5F                        POP EDI
004CFEEF  F7 D8                     NEG EAX
004CFEF1  89 02                     MOV dword ptr [EDX],EAX
004CFEF3  5E                        POP ESI
004CFEF4  89 01                     MOV dword ptr [ECX],EAX
004CFEF6  5B                        POP EBX
004CFEF7  5D                        POP EBP
004CFEF8  C2 10 00                  RET 0x10
LAB_004cfefb:
004CFEFB  8B 96 D0 04 00 00         MOV EDX,dword ptr [ESI + 0x4d0]
004CFF01  83 FA 03                  CMP EDX,0x3
004CFF04  0F 84 23 FF FF FF         JZ 0x004cfe2d
004CFF0A  83 FA 04                  CMP EDX,0x4
004CFF0D  74 3D                     JZ 0x004cff4c
004CFF0F  83 FA 05                  CMP EDX,0x5
004CFF12  0F 84 6A FF FF FF         JZ 0x004cfe82
004CFF18  83 FA 02                  CMP EDX,0x2
004CFF1B  75 B1                     JNZ 0x004cfece
LAB_004cff1d:
004CFF1D  8B B6 35 02 00 00         MOV ESI,dword ptr [ESI + 0x235]
004CFF23  8B 55 0C                  MOV EDX,dword ptr [EBP + 0xc]
004CFF26  8B 0C 8D 70 51 7B 00      MOV ECX,dword ptr [ECX*0x4 + 0x7b5170]
004CFF2D  5F                        POP EDI
004CFF2E  8D 04 70                  LEA EAX,[EAX + ESI*0x2]
004CFF31  03 F0                     ADD ESI,EAX
004CFF33  8D 04 B2                  LEA EAX,[EDX + ESI*0x4]
004CFF36  8B 55 10                  MOV EDX,dword ptr [EBP + 0x10]
004CFF39  5E                        POP ESI
004CFF3A  5B                        POP EBX
004CFF3B  8B 04 C1                  MOV EAX,dword ptr [ECX + EAX*0x8]
004CFF3E  8B 4D 14                  MOV ECX,dword ptr [EBP + 0x14]
004CFF41  83 C0 F1                  ADD EAX,-0xf
004CFF44  89 02                     MOV dword ptr [EDX],EAX
004CFF46  89 01                     MOV dword ptr [ECX],EAX
004CFF48  5D                        POP EBP
004CFF49  C2 10 00                  RET 0x10
LAB_004cff4c:
004CFF4C  8B B6 35 02 00 00         MOV ESI,dword ptr [ESI + 0x235]
004CFF52  8B 55 0C                  MOV EDX,dword ptr [EBP + 0xc]
004CFF55  8B 0C 8D 70 51 7B 00      MOV ECX,dword ptr [ECX*0x4 + 0x7b5170]
004CFF5C  8D 04 70                  LEA EAX,[EAX + ESI*0x2]
004CFF5F  03 F0                     ADD ESI,EAX
004CFF61  8D 04 B2                  LEA EAX,[EDX + ESI*0x4]
004CFF64  8B 55 10                  MOV EDX,dword ptr [EBP + 0x10]
004CFF67  8B 04 C1                  MOV EAX,dword ptr [ECX + EAX*0x8]
004CFF6A  8B 4D 14                  MOV ECX,dword ptr [EBP + 0x14]
004CFF6D  89 02                     MOV dword ptr [EDX],EAX
004CFF6F  89 01                     MOV dword ptr [ECX],EAX
LAB_004cff71:
004CFF71  5F                        POP EDI
004CFF72  5E                        POP ESI
004CFF73  5B                        POP EBX
004CFF74  5D                        POP EBP
004CFF75  C2 10 00                  RET 0x10
