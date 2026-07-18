FUN_0071f340:
0071F340  53                        PUSH EBX
0071F341  56                        PUSH ESI
0071F342  8B F1                     MOV ESI,ECX
0071F344  57                        PUSH EDI
0071F345  33 DB                     XOR EBX,EBX
0071F347  8B BE 3C 01 00 00         MOV EDI,dword ptr [ESI + 0x13c]
0071F34D  8B 86 04 02 00 00         MOV EAX,dword ptr [ESI + 0x204]
0071F353  3B F8                     CMP EDI,EAX
0071F355  7D 35                     JGE 0x0071f38c
LAB_0071f357:
0071F357  8B 96 38 01 00 00         MOV EDX,dword ptr [ESI + 0x138]
0071F35D  33 C0                     XOR EAX,EAX
0071F35F  3B FA                     CMP EDI,EDX
0071F361  8B 16                     MOV EDX,dword ptr [ESI]
0071F363  0F 94 C0                  SETZ AL
0071F366  50                        PUSH EAX
0071F367  57                        PUSH EDI
0071F368  8B CE                     MOV ECX,ESI
0071F36A  FF 52 08                  CALL dword ptr [EDX + 0x8]
0071F36D  8B 56 30                  MOV EDX,dword ptr [ESI + 0x30]
0071F370  8D 0C 18                  LEA ECX,[EAX + EBX*0x1]
0071F373  3B CA                     CMP ECX,EDX
0071F375  7F 15                     JG 0x0071f38c
0071F377  8B 96 08 02 00 00         MOV EDX,dword ptr [ESI + 0x208]
0071F37D  03 D0                     ADD EDX,EAX
0071F37F  8B 86 04 02 00 00         MOV EAX,dword ptr [ESI + 0x204]
0071F385  03 DA                     ADD EBX,EDX
0071F387  47                        INC EDI
0071F388  3B F8                     CMP EDI,EAX
0071F38A  7C CB                     JL 0x0071f357
LAB_0071f38c:
0071F38C  8B 8E 3C 01 00 00         MOV ECX,dword ptr [ESI + 0x13c]
0071F392  8B C7                     MOV EAX,EDI
0071F394  5F                        POP EDI
0071F395  5E                        POP ESI
0071F396  2B C1                     SUB EAX,ECX
0071F398  5B                        POP EBX
0071F399  C3                        RET
