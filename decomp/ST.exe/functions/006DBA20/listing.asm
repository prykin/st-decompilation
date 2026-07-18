FUN_006dba20:
006DBA20  55                        PUSH EBP
006DBA21  8B EC                     MOV EBP,ESP
006DBA23  56                        PUSH ESI
006DBA24  8B 75 08                  MOV ESI,dword ptr [EBP + 0x8]
006DBA27  85 F6                     TEST ESI,ESI
006DBA29  57                        PUSH EDI
006DBA2A  7D 20                     JGE 0x006dba4c
006DBA2C  B9 67 01 00 00            MOV ECX,0x167
006DBA31  B8 6D C1 16 6C            MOV EAX,0x6c16c16d
006DBA36  2B CE                     SUB ECX,ESI
006DBA38  F7 E1                     MUL ECX
006DBA3A  2B CA                     SUB ECX,EDX
006DBA3C  D1 E9                     SHR ECX,0x1
006DBA3E  03 CA                     ADD ECX,EDX
006DBA40  C1 E9 08                  SHR ECX,0x8
006DBA43  8D 04 89                  LEA EAX,[ECX + ECX*0x4]
006DBA46  8D 04 C0                  LEA EAX,[EAX + EAX*0x8]
006DBA49  8D 34 C6                  LEA ESI,[ESI + EAX*0x8]
LAB_006dba4c:
006DBA4C  81 FE 68 01 00 00         CMP ESI,0x168
006DBA52  7C 21                     JL 0x006dba75
006DBA54  B8 6D C1 16 6C            MOV EAX,0x6c16c16d
006DBA59  F7 E6                     MUL ESI
006DBA5B  8B C6                     MOV EAX,ESI
006DBA5D  2B C2                     SUB EAX,EDX
006DBA5F  D1 E8                     SHR EAX,0x1
006DBA61  03 C2                     ADD EAX,EDX
006DBA63  C1 E8 08                  SHR EAX,0x8
006DBA66  8B C8                     MOV ECX,EAX
006DBA68  F7 D9                     NEG ECX
006DBA6A  C1 E1 02                  SHL ECX,0x2
006DBA6D  2B C8                     SUB ECX,EAX
006DBA6F  8D 0C C9                  LEA ECX,[ECX + ECX*0x8]
006DBA72  8D 34 CE                  LEA ESI,[ESI + ECX*0x8]
LAB_006dba75:
006DBA75  B8 00 00 68 01            MOV EAX,0x1680000
006DBA7A  99                        CDQ
006DBA7B  F7 7D 0C                  IDIV dword ptr [EBP + 0xc]
006DBA7E  C1 E6 10                  SHL ESI,0x10
006DBA81  8B F8                     MOV EDI,EAX
006DBA83  99                        CDQ
006DBA84  2B C2                     SUB EAX,EDX
006DBA86  57                        PUSH EDI
006DBA87  D1 F8                     SAR EAX,0x1
006DBA89  03 C6                     ADD EAX,ESI
006DBA8B  50                        PUSH EAX
006DBA8C  E8 7F FB FF FF            CALL 0x006db610
006DBA91  C1 F8 10                  SAR EAX,0x10
006DBA94  0F AF C7                  IMUL EAX,EDI
006DBA97  C1 F8 10                  SAR EAX,0x10
006DBA9A  33 D2                     XOR EDX,EDX
006DBA9C  3D 68 01 00 00            CMP EAX,0x168
006DBAA1  0F 9D C2                  SETGE DL
006DBAA4  4A                        DEC EDX
006DBAA5  5F                        POP EDI
006DBAA6  23 C2                     AND EAX,EDX
006DBAA8  5E                        POP ESI
006DBAA9  5D                        POP EBP
006DBAAA  C2 08 00                  RET 0x8
