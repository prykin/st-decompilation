FUN_006eaaa0:
006EAAA0  55                        PUSH EBP
006EAAA1  8B EC                     MOV EBP,ESP
006EAAA3  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
006EAAA6  8B 81 10 03 00 00         MOV EAX,dword ptr [ECX + 0x310]
006EAAAC  53                        PUSH EBX
006EAAAD  33 DB                     XOR EBX,EBX
006EAAAF  56                        PUSH ESI
006EAAB0  3B D0                     CMP EDX,EAX
006EAAB2  57                        PUSH EDI
006EAAB3  0F 83 86 00 00 00         JNC 0x006eab3f
006EAAB9  8B B1 1C 03 00 00         MOV ESI,dword ptr [ECX + 0x31c]
006EAABF  8D 04 52                  LEA EAX,[EDX + EDX*0x2]
006EAAC2  C1 E0 03                  SHL EAX,0x3
006EAAC5  2B C2                     SUB EAX,EDX
006EAAC7  8D 04 40                  LEA EAX,[EAX + EAX*0x2]
006EAACA  8B 3C 86                  MOV EDI,dword ptr [ESI + EAX*0x4]
006EAACD  8D 34 86                  LEA ESI,[ESI + EAX*0x4]
006EAAD0  F7 C7 00 80 00 00         TEST EDI,0x8000
006EAAD6  74 67                     JZ 0x006eab3f
006EAAD8  8B 56 08                  MOV EDX,dword ptr [ESI + 0x8]
006EAADB  4A                        DEC EDX
006EAADC  3B D3                     CMP EDX,EBX
006EAADE  89 56 08                  MOV dword ptr [ESI + 0x8],EDX
006EAAE1  7E 05                     JLE 0x006eaae8
006EAAE3  39 5D 0C                  CMP dword ptr [EBP + 0xc],EBX
006EAAE6  74 66                     JZ 0x006eab4e
LAB_006eaae8:
006EAAE8  F7 C7 00 00 01 00         TEST EDI,0x10000
006EAAEE  B8 01 00 00 00            MOV EAX,0x1
006EAAF3  74 40                     JZ 0x006eab35
006EAAF5  3B D3                     CMP EDX,EBX
006EAAF7  75 0B                     JNZ 0x006eab04
006EAAF9  81 E7 FF FF 87 FF         AND EDI,0xff87ffff
006EAAFF  83 CF 4C                  OR EDI,0x4c
006EAB02  89 3E                     MOV dword ptr [ESI],EDI
LAB_006eab04:
006EAB04  F6 46 04 40               TEST byte ptr [ESI + 0x4],0x40
006EAB08  74 2B                     JZ 0x006eab35
006EAB0A  8B 7E 1C                  MOV EDI,dword ptr [ESI + 0x1c]
006EAB0D  8B 89 1C 03 00 00         MOV ECX,dword ptr [ECX + 0x31c]
006EAB13  8D 14 7F                  LEA EDX,[EDI + EDI*0x2]
006EAB16  C1 E2 03                  SHL EDX,0x3
006EAB19  2B D7                     SUB EDX,EDI
006EAB1B  8D 14 52                  LEA EDX,[EDX + EDX*0x2]
006EAB1E  8D 0C 91                  LEA ECX,[ECX + EDX*0x4]
006EAB21  39 59 08                  CMP dword ptr [ECX + 0x8],EBX
006EAB24  75 0F                     JNZ 0x006eab35
006EAB26  8B 11                     MOV EDX,dword ptr [ECX]
006EAB28  F7 C2 00 00 01 00         TEST EDX,0x10000
006EAB2E  74 05                     JZ 0x006eab35
006EAB30  83 CA 04                  OR EDX,0x4
006EAB33  89 11                     MOV dword ptr [ECX],EDX
LAB_006eab35:
006EAB35  89 5E 08                  MOV dword ptr [ESI + 0x8],EBX
006EAB38  5F                        POP EDI
006EAB39  5E                        POP ESI
006EAB3A  5B                        POP EBX
006EAB3B  5D                        POP EBP
006EAB3C  C2 08 00                  RET 0x8
LAB_006eab3f:
006EAB3F  83 FA FF                  CMP EDX,-0x1
006EAB42  74 0A                     JZ 0x006eab4e
006EAB44  68 1C EF 7E 00            PUSH 0x7eef1c
006EAB49  E8 02 E1 FF FF            CALL 0x006e8c50
LAB_006eab4e:
006EAB4E  5F                        POP EDI
006EAB4F  8B C3                     MOV EAX,EBX
006EAB51  5E                        POP ESI
006EAB52  5B                        POP EBX
006EAB53  5D                        POP EBP
006EAB54  C2 08 00                  RET 0x8
