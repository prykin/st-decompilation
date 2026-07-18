FUN_006ecfc0:
006ECFC0  55                        PUSH EBP
006ECFC1  8B EC                     MOV EBP,ESP
006ECFC3  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
006ECFC6  8B 4D 0C                  MOV ECX,dword ptr [EBP + 0xc]
006ECFC9  53                        PUSH EBX
006ECFCA  56                        PUSH ESI
006ECFCB  8B 70 64                  MOV ESI,dword ptr [EAX + 0x64]
006ECFCE  8B 49 64                  MOV ECX,dword ptr [ECX + 0x64]
006ECFD1  57                        PUSH EDI
006ECFD2  8B 56 04                  MOV EDX,dword ptr [ESI + 0x4]
006ECFD5  83 E2 72                  AND EDX,0x72
006ECFD8  80 FA 02                  CMP DL,0x2
006ECFDB  0F 85 87 00 00 00         JNZ 0x006ed068
006ECFE1  8B 41 04                  MOV EAX,dword ptr [ECX + 0x4]
006ECFE4  83 E0 72                  AND EAX,0x72
006ECFE7  3A C2                     CMP AL,DL
006ECFE9  75 17                     JNZ 0x006ed002
006ECFEB  8B 46 2C                  MOV EAX,dword ptr [ESI + 0x2c]
006ECFEE  8B 79 2C                  MOV EDI,dword ptr [ECX + 0x2c]
006ECFF1  8B 51 14                  MOV EDX,dword ptr [ECX + 0x14]
006ECFF4  8B 4E 14                  MOV ECX,dword ptr [ESI + 0x14]
006ECFF7  2B C7                     SUB EAX,EDI
006ECFF9  5F                        POP EDI
006ECFFA  2B C2                     SUB EAX,EDX
006ECFFC  5E                        POP ESI
006ECFFD  03 C1                     ADD EAX,ECX
006ECFFF  5B                        POP EBX
006ED000  5D                        POP EBP
006ED001  C3                        RET
LAB_006ed002:
006ED002  8B 5E 14                  MOV EBX,dword ptr [ESI + 0x14]
006ED005  8B 46 2C                  MOV EAX,dword ptr [ESI + 0x2c]
006ED008  8B 79 14                  MOV EDI,dword ptr [ECX + 0x14]
006ED00B  03 C3                     ADD EAX,EBX
006ED00D  3B C7                     CMP EAX,EDI
006ED00F  0F 8C BE 00 00 00         JL 0x006ed0d3
006ED015  75 0E                     JNZ 0x006ed025
006ED017  8B 56 0C                  MOV EDX,dword ptr [ESI + 0xc]
006ED01A  8B 41 0C                  MOV EAX,dword ptr [ECX + 0xc]
006ED01D  3B D0                     CMP EDX,EAX
006ED01F  0F 8C AE 00 00 00         JL 0x006ed0d3
LAB_006ed025:
006ED025  8B 46 30                  MOV EAX,dword ptr [ESI + 0x30]
006ED028  99                        CDQ
006ED029  2B C2                     SUB EAX,EDX
006ED02B  D1 F8                     SAR EAX,0x1
006ED02D  03 C3                     ADD EAX,EBX
006ED02F  3B C7                     CMP EAX,EDI
006ED031  0F 8F B3 00 00 00         JG 0x006ed0ea
006ED037  75 0E                     JNZ 0x006ed047
006ED039  8B 46 0C                  MOV EAX,dword ptr [ESI + 0xc]
006ED03C  8B 51 0C                  MOV EDX,dword ptr [ECX + 0xc]
006ED03F  3B C2                     CMP EAX,EDX
006ED041  0F 8F A3 00 00 00         JG 0x006ed0ea
LAB_006ed047:
006ED047  8B 56 38                  MOV EDX,dword ptr [ESI + 0x38]
006ED04A  8B 46 50                  MOV EAX,dword ptr [ESI + 0x50]
006ED04D  8B 71 50                  MOV ESI,dword ptr [ECX + 0x50]
006ED050  8B FA                     MOV EDI,EDX
006ED052  C1 FF 02                  SAR EDI,0x2
006ED055  2B C7                     SUB EAX,EDI
006ED057  8B B9 88 00 00 00         MOV EDI,dword ptr [ECX + 0x88]
006ED05D  2B C7                     SUB EAX,EDI
006ED05F  5F                        POP EDI
006ED060  2B C6                     SUB EAX,ESI
006ED062  5E                        POP ESI
006ED063  03 C2                     ADD EAX,EDX
006ED065  5B                        POP EBX
006ED066  5D                        POP EBP
006ED067  C3                        RET
LAB_006ed068:
006ED068  8B 51 04                  MOV EDX,dword ptr [ECX + 0x4]
006ED06B  83 E2 72                  AND EDX,0x72
006ED06E  80 FA 02                  CMP DL,0x2
006ED071  75 56                     JNZ 0x006ed0c9
006ED073  8B 41 30                  MOV EAX,dword ptr [ECX + 0x30]
006ED076  8B 79 14                  MOV EDI,dword ptr [ECX + 0x14]
006ED079  99                        CDQ
006ED07A  2B C2                     SUB EAX,EDX
006ED07C  8B 56 14                  MOV EDX,dword ptr [ESI + 0x14]
006ED07F  D1 F8                     SAR EAX,0x1
006ED081  03 C7                     ADD EAX,EDI
006ED083  3B D0                     CMP EDX,EAX
006ED085  7C 4C                     JL 0x006ed0d3
006ED087  75 0A                     JNZ 0x006ed093
006ED089  8B 46 0C                  MOV EAX,dword ptr [ESI + 0xc]
006ED08C  8B 59 0C                  MOV EBX,dword ptr [ECX + 0xc]
006ED08F  3B C3                     CMP EAX,EBX
006ED091  7C 40                     JL 0x006ed0d3
LAB_006ed093:
006ED093  8B 41 2C                  MOV EAX,dword ptr [ECX + 0x2c]
006ED096  03 C7                     ADD EAX,EDI
006ED098  3B D0                     CMP EDX,EAX
006ED09A  7F 4E                     JG 0x006ed0ea
006ED09C  75 0A                     JNZ 0x006ed0a8
006ED09E  8B 56 0C                  MOV EDX,dword ptr [ESI + 0xc]
006ED0A1  8B 41 0C                  MOV EAX,dword ptr [ECX + 0xc]
006ED0A4  3B D0                     CMP EDX,EAX
006ED0A6  7F 42                     JG 0x006ed0ea
LAB_006ed0a8:
006ED0A8  8B 51 38                  MOV EDX,dword ptr [ECX + 0x38]
006ED0AB  8B 79 50                  MOV EDI,dword ptr [ECX + 0x50]
006ED0AE  8B 9E 88 00 00 00         MOV EBX,dword ptr [ESI + 0x88]
006ED0B4  8B C2                     MOV EAX,EDX
006ED0B6  C1 F8 02                  SAR EAX,0x2
006ED0B9  2B C7                     SUB EAX,EDI
006ED0BB  8B 7E 50                  MOV EDI,dword ptr [ESI + 0x50]
006ED0BE  03 C3                     ADD EAX,EBX
006ED0C0  03 C7                     ADD EAX,EDI
006ED0C2  5F                        POP EDI
006ED0C3  5E                        POP ESI
006ED0C4  2B C2                     SUB EAX,EDX
006ED0C6  5B                        POP EBX
006ED0C7  5D                        POP EBP
006ED0C8  C3                        RET
LAB_006ed0c9:
006ED0C9  8B 46 14                  MOV EAX,dword ptr [ESI + 0x14]
006ED0CC  8B 51 14                  MOV EDX,dword ptr [ECX + 0x14]
006ED0CF  3B C2                     CMP EAX,EDX
006ED0D1  7D 08                     JGE 0x006ed0db
LAB_006ed0d3:
006ED0D3  5F                        POP EDI
006ED0D4  5E                        POP ESI
006ED0D5  83 C8 FF                  OR EAX,0xffffffff
006ED0D8  5B                        POP EBX
006ED0D9  5D                        POP EBP
006ED0DA  C3                        RET
LAB_006ed0db:
006ED0DB  75 0D                     JNZ 0x006ed0ea
006ED0DD  8B 46 0C                  MOV EAX,dword ptr [ESI + 0xc]
006ED0E0  8B 51 0C                  MOV EDX,dword ptr [ECX + 0xc]
006ED0E3  5F                        POP EDI
006ED0E4  5E                        POP ESI
006ED0E5  2B C2                     SUB EAX,EDX
006ED0E7  5B                        POP EBX
006ED0E8  5D                        POP EBP
006ED0E9  C3                        RET
LAB_006ed0ea:
006ED0EA  5F                        POP EDI
006ED0EB  5E                        POP ESI
006ED0EC  B8 01 00 00 00            MOV EAX,0x1
006ED0F1  5B                        POP EBX
006ED0F2  5D                        POP EBP
006ED0F3  C3                        RET
