FUN_005fa0b0:
005FA0B0  53                        PUSH EBX
005FA0B1  56                        PUSH ESI
005FA0B2  57                        PUSH EDI
005FA0B3  8B F9                     MOV EDI,ECX
005FA0B5  B8 89 88 88 88            MOV EAX,0x88888889
005FA0BA  8B 35 FC 73 80 00         MOV ESI,dword ptr [0x008073fc]
005FA0C0  0F BF 4F 6C               MOVSX ECX,word ptr [EDI + 0x6c]
005FA0C4  F7 E9                     IMUL ECX
005FA0C6  03 D1                     ADD EDX,ECX
005FA0C8  B9 18 00 00 00            MOV ECX,0x18
005FA0CD  C1 FA 03                  SAR EDX,0x3
005FA0D0  8B C2                     MOV EAX,EDX
005FA0D2  C1 E8 1F                  SHR EAX,0x1f
005FA0D5  03 D0                     ADD EDX,EAX
005FA0D7  B8 18 00 00 00            MOV EAX,0x18
005FA0DC  2B C2                     SUB EAX,EDX
005FA0DE  99                        CDQ
005FA0DF  F7 F9                     IDIV ECX
005FA0E1  B8 04 00 00 00            MOV EAX,0x4
005FA0E6  2B C6                     SUB EAX,ESI
005FA0E8  8D B7 D5 01 00 00         LEA ESI,[EDI + 0x1d5]
005FA0EE  8D 04 40                  LEA EAX,[EAX + EAX*0x2]
005FA0F1  8D 04 42                  LEA EAX,[EDX + EAX*0x2]
005FA0F4  99                        CDQ
005FA0F5  F7 F9                     IDIV ECX
005FA0F7  8B CE                     MOV ECX,ESI
005FA0F9  8B DA                     MOV EBX,EDX
005FA0FB  53                        PUSH EBX
005FA0FC  6A 0E                     PUSH 0xe
005FA0FE  E8 61 6F E0 FF            CALL 0x00401064
005FA103  53                        PUSH EBX
005FA104  6A 0C                     PUSH 0xc
005FA106  8B CE                     MOV ECX,ESI
005FA108  E8 57 6F E0 FF            CALL 0x00401064
005FA10D  0F BF 4F 6C               MOVSX ECX,word ptr [EDI + 0x6c]
005FA111  B8 89 88 88 88            MOV EAX,0x88888889
005FA116  F7 E9                     IMUL ECX
005FA118  03 D1                     ADD EDX,ECX
005FA11A  B9 18 00 00 00            MOV ECX,0x18
005FA11F  C1 FA 03                  SAR EDX,0x3
005FA122  8B C2                     MOV EAX,EDX
005FA124  C1 E8 1F                  SHR EAX,0x1f
005FA127  03 D0                     ADD EDX,EAX
005FA129  B8 18 00 00 00            MOV EAX,0x18
005FA12E  2B C2                     SUB EAX,EDX
005FA130  99                        CDQ
005FA131  F7 F9                     IDIV ECX
005FA133  8B CE                     MOV ECX,ESI
005FA135  52                        PUSH EDX
005FA136  6A 0E                     PUSH 0xe
005FA138  E8 C1 B1 E0 FF            CALL 0x004052fe
005FA13D  6A 0E                     PUSH 0xe
005FA13F  8B CE                     MOV ECX,ESI
005FA141  E8 76 8F E0 FF            CALL 0x004030bc
005FA146  5F                        POP EDI
005FA147  5E                        POP ESI
005FA148  5B                        POP EBX
005FA149  C3                        RET
