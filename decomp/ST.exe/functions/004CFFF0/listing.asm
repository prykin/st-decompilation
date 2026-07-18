FUN_004cfff0:
004CFFF0  55                        PUSH EBP
004CFFF1  8B EC                     MOV EBP,ESP
004CFFF3  53                        PUSH EBX
004CFFF4  56                        PUSH ESI
004CFFF5  8B F1                     MOV ESI,ECX
004CFFF7  57                        PUSH EDI
004CFFF8  8B 0D 74 A1 7F 00         MOV ECX,dword ptr [0x007fa174]
004CFFFE  8A 86 3D 02 00 00         MOV AL,byte ptr [ESI + 0x23d]
004D0004  50                        PUSH EAX
004D0005  E8 AD 49 F3 FF            CALL 0x004049b7
004D000A  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
004D000D  8B 8E 45 02 00 00         MOV ECX,dword ptr [ESI + 0x245]
004D0013  25 FF 00 00 00            AND EAX,0xff
004D0018  48                        DEC EAX
004D0019  83 EA 09                  SUB EDX,0x9
004D001C  0F 84 DC 00 00 00         JZ 0x004d00fe
004D0022  83 EA 04                  SUB EDX,0x4
004D0025  0F 84 BA 00 00 00         JZ 0x004d00e5
004D002B  4A                        DEC EDX
004D002C  0F 85 42 01 00 00         JNZ 0x004d0174
004D0032  8B 96 D0 04 00 00         MOV EDX,dword ptr [ESI + 0x4d0]
004D0038  83 FA 03                  CMP EDX,0x3
004D003B  75 47                     JNZ 0x004d0084
LAB_004d003d:
004D003D  8B 96 35 02 00 00         MOV EDX,dword ptr [ESI + 0x235]
004D0043  8B 1C 8D 70 51 7B 00      MOV EBX,dword ptr [ECX*0x4 + 0x7b5170]
004D004A  8D 3C 50                  LEA EDI,[EAX + EDX*0x2]
004D004D  03 D7                     ADD EDX,EDI
004D004F  8B 7D 0C                  MOV EDI,dword ptr [EBP + 0xc]
004D0052  8D 14 97                  LEA EDX,[EDI + EDX*0x4]
004D0055  8B 14 D3                  MOV EDX,dword ptr [EBX + EDX*0x8]
004D0058  8B 5D 10                  MOV EBX,dword ptr [EBP + 0x10]
004D005B  83 EA 10                  SUB EDX,0x10
004D005E  89 13                     MOV dword ptr [EBX],EDX
004D0060  8B B6 35 02 00 00         MOV ESI,dword ptr [ESI + 0x235]
004D0066  8D 04 70                  LEA EAX,[EAX + ESI*0x2]
004D0069  03 F0                     ADD ESI,EAX
004D006B  8B 04 8D 70 51 7B 00      MOV EAX,dword ptr [ECX*0x4 + 0x7b5170]
004D0072  8D 14 B7                  LEA EDX,[EDI + ESI*0x4]
004D0075  5F                        POP EDI
004D0076  5E                        POP ESI
004D0077  5B                        POP EBX
004D0078  8B 0C D0                  MOV ECX,dword ptr [EAX + EDX*0x8]
004D007B  8B 55 14                  MOV EDX,dword ptr [EBP + 0x14]
004D007E  89 0A                     MOV dword ptr [EDX],ECX
004D0080  5D                        POP EBP
004D0081  C2 10 00                  RET 0x10
LAB_004d0084:
004D0084  83 FA 04                  CMP EDX,0x4
004D0087  0F 84 C2 00 00 00         JZ 0x004d014f
004D008D  83 FA 05                  CMP EDX,0x5
004D0090  75 47                     JNZ 0x004d00d9
LAB_004d0092:
004D0092  8B 96 35 02 00 00         MOV EDX,dword ptr [ESI + 0x235]
004D0098  8B 1C 8D 70 51 7B 00      MOV EBX,dword ptr [ECX*0x4 + 0x7b5170]
004D009F  8D 3C 50                  LEA EDI,[EAX + EDX*0x2]
004D00A2  03 D7                     ADD EDX,EDI
004D00A4  8B 7D 0C                  MOV EDI,dword ptr [EBP + 0xc]
004D00A7  8D 14 97                  LEA EDX,[EDI + EDX*0x4]
004D00AA  8B 14 D3                  MOV EDX,dword ptr [EBX + EDX*0x8]
004D00AD  8B 5D 10                  MOV EBX,dword ptr [EBP + 0x10]
004D00B0  89 13                     MOV dword ptr [EBX],EDX
004D00B2  8B B6 35 02 00 00         MOV ESI,dword ptr [ESI + 0x235]
004D00B8  8D 04 70                  LEA EAX,[EAX + ESI*0x2]
004D00BB  03 F0                     ADD ESI,EAX
004D00BD  8B 04 8D 70 51 7B 00      MOV EAX,dword ptr [ECX*0x4 + 0x7b5170]
004D00C4  8D 14 B7                  LEA EDX,[EDI + ESI*0x4]
004D00C7  5F                        POP EDI
004D00C8  5E                        POP ESI
004D00C9  5B                        POP EBX
004D00CA  8B 0C D0                  MOV ECX,dword ptr [EAX + EDX*0x8]
004D00CD  8B 55 14                  MOV EDX,dword ptr [EBP + 0x14]
004D00D0  83 E9 10                  SUB ECX,0x10
004D00D3  89 0A                     MOV dword ptr [EDX],ECX
004D00D5  5D                        POP EBP
004D00D6  C2 10 00                  RET 0x10
LAB_004d00d9:
004D00D9  83 FA 02                  CMP EDX,0x2
004D00DC  74 42                     JZ 0x004d0120
LAB_004d00de:
004D00DE  83 FA 01                  CMP EDX,0x1
004D00E1  75 6C                     JNZ 0x004d014f
004D00E3  EB AD                     JMP 0x004d0092
LAB_004d00e5:
004D00E5  8B 55 14                  MOV EDX,dword ptr [EBP + 0x14]
004D00E8  8B 45 10                  MOV EAX,dword ptr [EBP + 0x10]
004D00EB  5F                        POP EDI
004D00EC  5E                        POP ESI
004D00ED  C7 02 00 00 00 00         MOV dword ptr [EDX],0x0
004D00F3  C7 00 00 00 00 00         MOV dword ptr [EAX],0x0
004D00F9  5B                        POP EBX
004D00FA  5D                        POP EBP
004D00FB  C2 10 00                  RET 0x10
LAB_004d00fe:
004D00FE  8B 96 D0 04 00 00         MOV EDX,dword ptr [ESI + 0x4d0]
004D0104  83 FA 03                  CMP EDX,0x3
004D0107  0F 84 30 FF FF FF         JZ 0x004d003d
004D010D  83 FA 04                  CMP EDX,0x4
004D0110  74 3D                     JZ 0x004d014f
004D0112  83 FA 05                  CMP EDX,0x5
004D0115  0F 84 77 FF FF FF         JZ 0x004d0092
004D011B  83 FA 02                  CMP EDX,0x2
004D011E  75 BE                     JNZ 0x004d00de
LAB_004d0120:
004D0120  8B B6 35 02 00 00         MOV ESI,dword ptr [ESI + 0x235]
004D0126  8B 55 0C                  MOV EDX,dword ptr [EBP + 0xc]
004D0129  8B 0C 8D 70 51 7B 00      MOV ECX,dword ptr [ECX*0x4 + 0x7b5170]
004D0130  5F                        POP EDI
004D0131  8D 04 70                  LEA EAX,[EAX + ESI*0x2]
004D0134  03 F0                     ADD ESI,EAX
004D0136  8D 04 B2                  LEA EAX,[EDX + ESI*0x4]
004D0139  8B 55 10                  MOV EDX,dword ptr [EBP + 0x10]
004D013C  5E                        POP ESI
004D013D  5B                        POP EBX
004D013E  8B 04 C1                  MOV EAX,dword ptr [ECX + EAX*0x8]
004D0141  8B 4D 14                  MOV ECX,dword ptr [EBP + 0x14]
004D0144  83 C0 F0                  ADD EAX,-0x10
004D0147  89 02                     MOV dword ptr [EDX],EAX
004D0149  89 01                     MOV dword ptr [ECX],EAX
004D014B  5D                        POP EBP
004D014C  C2 10 00                  RET 0x10
LAB_004d014f:
004D014F  8B B6 35 02 00 00         MOV ESI,dword ptr [ESI + 0x235]
004D0155  8B 55 0C                  MOV EDX,dword ptr [EBP + 0xc]
004D0158  8B 0C 8D 70 51 7B 00      MOV ECX,dword ptr [ECX*0x4 + 0x7b5170]
004D015F  8D 04 70                  LEA EAX,[EAX + ESI*0x2]
004D0162  03 F0                     ADD ESI,EAX
004D0164  8D 04 B2                  LEA EAX,[EDX + ESI*0x4]
004D0167  8B 55 10                  MOV EDX,dword ptr [EBP + 0x10]
004D016A  8B 04 C1                  MOV EAX,dword ptr [ECX + EAX*0x8]
004D016D  8B 4D 14                  MOV ECX,dword ptr [EBP + 0x14]
004D0170  89 02                     MOV dword ptr [EDX],EAX
004D0172  89 01                     MOV dword ptr [ECX],EAX
LAB_004d0174:
004D0174  5F                        POP EDI
004D0175  5E                        POP ESI
004D0176  5B                        POP EBX
004D0177  5D                        POP EBP
004D0178  C2 10 00                  RET 0x10
