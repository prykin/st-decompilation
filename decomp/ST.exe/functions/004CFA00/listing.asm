FUN_004cfa00:
004CFA00  55                        PUSH EBP
004CFA01  8B EC                     MOV EBP,ESP
004CFA03  53                        PUSH EBX
004CFA04  56                        PUSH ESI
004CFA05  8B F1                     MOV ESI,ECX
004CFA07  57                        PUSH EDI
004CFA08  8B 0D 74 A1 7F 00         MOV ECX,dword ptr [0x007fa174]
004CFA0E  8A 86 3D 02 00 00         MOV AL,byte ptr [ESI + 0x23d]
004CFA14  50                        PUSH EAX
004CFA15  E8 9D 4F F3 FF            CALL 0x004049b7
004CFA1A  8A 8E 3D 02 00 00         MOV CL,byte ptr [ESI + 0x23d]
004CFA20  FE C8                     DEC AL
004CFA22  F6 D8                     NEG AL
004CFA24  1B C0                     SBB EAX,EAX
004CFA26  51                        PUSH ECX
004CFA27  8B 0D 74 A1 7F 00         MOV ECX,dword ptr [0x007fa174]
004CFA2D  24 FD                     AND AL,0xfd
004CFA2F  83 C0 13                  ADD EAX,0x13
004CFA32  8B F8                     MOV EDI,EAX
004CFA34  E8 7E 4F F3 FF            CALL 0x004049b7
004CFA39  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
004CFA3C  8B 8E 45 02 00 00         MOV ECX,dword ptr [ESI + 0x245]
004CFA42  25 FF 00 00 00            AND EAX,0xff
004CFA47  83 C2 F8                  ADD EDX,-0x8
004CFA4A  48                        DEC EAX
004CFA4B  83 FA 06                  CMP EDX,0x6
004CFA4E  0F 87 04 01 00 00         JA 0x004cfb58
004CFA54  33 DB                     XOR EBX,EBX
004CFA56  8A 9A 6C FB 4C 00         MOV BL,byte ptr [EDX + 0x4cfb6c]
switchD_004cfa5c::switchD:
004CFA5C  FF 24 9D 60 FB 4C 00      JMP dword ptr [EBX*0x4 + 0x4cfb60]
switchD_004cfa5c::caseD_d:
004CFA63  8B 96 D0 04 00 00         MOV EDX,dword ptr [ESI + 0x4d0]
004CFA69  83 FA 03                  CMP EDX,0x3
004CFA6C  75 2E                     JNZ 0x004cfa9c
LAB_004cfa6e:
004CFA6E  8B B6 35 02 00 00         MOV ESI,dword ptr [ESI + 0x235]
004CFA74  8B 55 0C                  MOV EDX,dword ptr [EBP + 0xc]
004CFA77  8B 0C 8D 70 51 7B 00      MOV ECX,dword ptr [ECX*0x4 + 0x7b5170]
004CFA7E  8D 04 70                  LEA EAX,[EAX + ESI*0x2]
004CFA81  03 F0                     ADD ESI,EAX
004CFA83  8D 04 B2                  LEA EAX,[EDX + ESI*0x4]
004CFA86  8B 55 10                  MOV EDX,dword ptr [EBP + 0x10]
004CFA89  8B 04 C1                  MOV EAX,dword ptr [ECX + EAX*0x8]
004CFA8C  8B 4D 14                  MOV ECX,dword ptr [EBP + 0x14]
004CFA8F  89 02                     MOV dword ptr [EDX],EAX
004CFA91  03 C7                     ADD EAX,EDI
004CFA93  5F                        POP EDI
004CFA94  5E                        POP ESI
004CFA95  89 01                     MOV dword ptr [ECX],EAX
004CFA97  5B                        POP EBX
004CFA98  5D                        POP EBP
004CFA99  C2 10 00                  RET 0x10
LAB_004cfa9c:
004CFA9C  83 FA 04                  CMP EDX,0x4
004CFA9F  75 2F                     JNZ 0x004cfad0
LAB_004cfaa1:
004CFAA1  8B B6 35 02 00 00         MOV ESI,dword ptr [ESI + 0x235]
004CFAA7  8D 14 70                  LEA EDX,[EAX + ESI*0x2]
004CFAAA  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
004CFAAD  03 F2                     ADD ESI,EDX
004CFAAF  8D 14 B0                  LEA EDX,[EAX + ESI*0x4]
004CFAB2  8B 04 8D 70 51 7B 00      MOV EAX,dword ptr [ECX*0x4 + 0x7b5170]
004CFAB9  8B 0C D0                  MOV ECX,dword ptr [EAX + EDX*0x8]
004CFABC  8B 55 10                  MOV EDX,dword ptr [EBP + 0x10]
004CFABF  8D 04 39                  LEA EAX,[ECX + EDI*0x1]
004CFAC2  8B 4D 14                  MOV ECX,dword ptr [EBP + 0x14]
004CFAC5  5F                        POP EDI
004CFAC6  89 02                     MOV dword ptr [EDX],EAX
004CFAC8  5E                        POP ESI
004CFAC9  89 01                     MOV dword ptr [ECX],EAX
004CFACB  5B                        POP EBX
004CFACC  5D                        POP EBP
004CFACD  C2 10 00                  RET 0x10
LAB_004cfad0:
004CFAD0  83 FA 05                  CMP EDX,0x5
004CFAD3  75 45                     JNZ 0x004cfb1a
004CFAD5  EB 15                     JMP 0x004cfaec
switchD_004cfa5c::caseD_8:
004CFAD7  8B 96 D0 04 00 00         MOV EDX,dword ptr [ESI + 0x4d0]
004CFADD  83 FA 03                  CMP EDX,0x3
004CFAE0  74 8C                     JZ 0x004cfa6e
004CFAE2  83 FA 04                  CMP EDX,0x4
004CFAE5  74 BA                     JZ 0x004cfaa1
004CFAE7  83 FA 05                  CMP EDX,0x5
004CFAEA  75 2E                     JNZ 0x004cfb1a
LAB_004cfaec:
004CFAEC  8B B6 35 02 00 00         MOV ESI,dword ptr [ESI + 0x235]
004CFAF2  8D 14 70                  LEA EDX,[EAX + ESI*0x2]
004CFAF5  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
004CFAF8  03 F2                     ADD ESI,EDX
004CFAFA  8D 14 B0                  LEA EDX,[EAX + ESI*0x4]
004CFAFD  8B 04 8D 70 51 7B 00      MOV EAX,dword ptr [ECX*0x4 + 0x7b5170]
004CFB04  8B 4D 14                  MOV ECX,dword ptr [EBP + 0x14]
004CFB07  8B 04 D0                  MOV EAX,dword ptr [EAX + EDX*0x8]
004CFB0A  8B 55 10                  MOV EDX,dword ptr [EBP + 0x10]
004CFB0D  89 01                     MOV dword ptr [ECX],EAX
004CFB0F  03 C7                     ADD EAX,EDI
004CFB11  5F                        POP EDI
004CFB12  5E                        POP ESI
004CFB13  89 02                     MOV dword ptr [EDX],EAX
004CFB15  5B                        POP EBX
004CFB16  5D                        POP EBP
004CFB17  C2 10 00                  RET 0x10
LAB_004cfb1a:
004CFB1A  8B 96 35 02 00 00         MOV EDX,dword ptr [ESI + 0x235]
004CFB20  8B 1C 8D 70 51 7B 00      MOV EBX,dword ptr [ECX*0x4 + 0x7b5170]
004CFB27  8D 3C 50                  LEA EDI,[EAX + EDX*0x2]
004CFB2A  03 D7                     ADD EDX,EDI
004CFB2C  8B 7D 0C                  MOV EDI,dword ptr [EBP + 0xc]
004CFB2F  8D 14 97                  LEA EDX,[EDI + EDX*0x4]
004CFB32  8B 14 D3                  MOV EDX,dword ptr [EBX + EDX*0x8]
004CFB35  8B 5D 10                  MOV EBX,dword ptr [EBP + 0x10]
004CFB38  89 13                     MOV dword ptr [EBX],EDX
004CFB3A  8B B6 35 02 00 00         MOV ESI,dword ptr [ESI + 0x235]
004CFB40  8D 04 70                  LEA EAX,[EAX + ESI*0x2]
004CFB43  03 F0                     ADD ESI,EAX
004CFB45  8B 04 8D 70 51 7B 00      MOV EAX,dword ptr [ECX*0x4 + 0x7b5170]
004CFB4C  8D 14 B7                  LEA EDX,[EDI + ESI*0x4]
004CFB4F  8B 4C D0 04               MOV ECX,dword ptr [EAX + EDX*0x8 + 0x4]
004CFB53  8B 55 14                  MOV EDX,dword ptr [EBP + 0x14]
004CFB56  89 0A                     MOV dword ptr [EDX],ECX
switchD_004cfa5c::caseD_a:
004CFB58  5F                        POP EDI
004CFB59  5E                        POP ESI
004CFB5A  5B                        POP EBX
004CFB5B  5D                        POP EBP
004CFB5C  C2 10 00                  RET 0x10
