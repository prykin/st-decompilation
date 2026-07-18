FUN_006db990:
006DB990  55                        PUSH EBP
006DB991  8B EC                     MOV EBP,ESP
006DB993  56                        PUSH ESI
006DB994  8B 75 08                  MOV ESI,dword ptr [EBP + 0x8]
006DB997  85 F6                     TEST ESI,ESI
006DB999  57                        PUSH EDI
006DB99A  7D 20                     JGE 0x006db9bc
006DB99C  B9 67 01 00 00            MOV ECX,0x167
006DB9A1  B8 6D C1 16 6C            MOV EAX,0x6c16c16d
006DB9A6  2B CE                     SUB ECX,ESI
006DB9A8  F7 E1                     MUL ECX
006DB9AA  2B CA                     SUB ECX,EDX
006DB9AC  D1 E9                     SHR ECX,0x1
006DB9AE  03 CA                     ADD ECX,EDX
006DB9B0  C1 E9 08                  SHR ECX,0x8
006DB9B3  8D 04 89                  LEA EAX,[ECX + ECX*0x4]
006DB9B6  8D 04 C0                  LEA EAX,[EAX + EAX*0x8]
006DB9B9  8D 34 C6                  LEA ESI,[ESI + EAX*0x8]
LAB_006db9bc:
006DB9BC  81 FE 68 01 00 00         CMP ESI,0x168
006DB9C2  7C 21                     JL 0x006db9e5
006DB9C4  B8 6D C1 16 6C            MOV EAX,0x6c16c16d
006DB9C9  F7 E6                     MUL ESI
006DB9CB  8B C6                     MOV EAX,ESI
006DB9CD  2B C2                     SUB EAX,EDX
006DB9CF  D1 E8                     SHR EAX,0x1
006DB9D1  03 C2                     ADD EAX,EDX
006DB9D3  C1 E8 08                  SHR EAX,0x8
006DB9D6  8B C8                     MOV ECX,EAX
006DB9D8  F7 D9                     NEG ECX
006DB9DA  C1 E1 02                  SHL ECX,0x2
006DB9DD  2B C8                     SUB ECX,EAX
006DB9DF  8D 0C C9                  LEA ECX,[ECX + ECX*0x8]
006DB9E2  8D 34 CE                  LEA ESI,[ESI + ECX*0x8]
LAB_006db9e5:
006DB9E5  8B 7D 0C                  MOV EDI,dword ptr [EBP + 0xc]
006DB9E8  B8 00 00 B4 00            MOV EAX,0xb40000
006DB9ED  99                        CDQ
006DB9EE  F7 FF                     IDIV EDI
006DB9F0  C1 E6 10                  SHL ESI,0x10
006DB9F3  8B C8                     MOV ECX,EAX
006DB9F5  B8 B7 60 0B B6            MOV EAX,0xb60b60b7
006DB9FA  03 CE                     ADD ECX,ESI
006DB9FC  0F AF CF                  IMUL ECX,EDI
006DB9FF  F7 E9                     IMUL ECX
006DBA01  03 D1                     ADD EDX,ECX
006DBA03  C1 FA 08                  SAR EDX,0x8
006DBA06  8B C2                     MOV EAX,EDX
006DBA08  C1 E8 1F                  SHR EAX,0x1f
006DBA0B  03 D0                     ADD EDX,EAX
006DBA0D  33 C0                     XOR EAX,EAX
006DBA0F  C1 FA 10                  SAR EDX,0x10
006DBA12  3B D7                     CMP EDX,EDI
006DBA14  5F                        POP EDI
006DBA15  0F 9D C0                  SETGE AL
006DBA18  48                        DEC EAX
006DBA19  5E                        POP ESI
006DBA1A  23 C2                     AND EAX,EDX
006DBA1C  5D                        POP EBP
006DBA1D  C2 08 00                  RET 0x8
