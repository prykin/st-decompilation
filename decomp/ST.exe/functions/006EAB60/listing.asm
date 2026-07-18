FUN_006eab60:
006EAB60  55                        PUSH EBP
006EAB61  8B EC                     MOV EBP,ESP
006EAB63  8B 81 10 03 00 00         MOV EAX,dword ptr [ECX + 0x310]
006EAB69  56                        PUSH ESI
006EAB6A  8B 75 08                  MOV ESI,dword ptr [EBP + 0x8]
006EAB6D  3B F0                     CMP ESI,EAX
006EAB6F  73 6B                     JNC 0x006eabdc
006EAB71  8B 91 1C 03 00 00         MOV EDX,dword ptr [ECX + 0x31c]
006EAB77  8D 04 76                  LEA EAX,[ESI + ESI*0x2]
006EAB7A  C1 E0 03                  SHL EAX,0x3
006EAB7D  2B C6                     SUB EAX,ESI
006EAB7F  8D 04 40                  LEA EAX,[EAX + EAX*0x2]
006EAB82  8D 04 82                  LEA EAX,[EDX + EAX*0x4]
006EAB85  8B 10                     MOV EDX,dword ptr [EAX]
006EAB87  F6 C6 80                  TEST DH,0x80
006EAB8A  74 50                     JZ 0x006eabdc
006EAB8C  8B 70 08                  MOV ESI,dword ptr [EAX + 0x8]
006EAB8F  80 E2 5D                  AND DL,0x5d
006EAB92  46                        INC ESI
006EAB93  89 10                     MOV dword ptr [EAX],EDX
006EAB95  F6 C2 11                  TEST DL,0x11
006EAB98  89 70 08                  MOV dword ptr [EAX + 0x8],ESI
006EAB9B  74 4E                     JZ 0x006eabeb
006EAB9D  83 CA 4C                  OR EDX,0x4c
006EABA0  89 10                     MOV dword ptr [EAX],EDX
006EABA2  8A 50 04                  MOV DL,byte ptr [EAX + 0x4]
006EABA5  F6 C2 40                  TEST DL,0x40
006EABA8  74 41                     JZ 0x006eabeb
006EABAA  8B 50 1C                  MOV EDX,dword ptr [EAX + 0x1c]
006EABAD  8B 89 1C 03 00 00         MOV ECX,dword ptr [ECX + 0x31c]
006EABB3  8D 04 52                  LEA EAX,[EDX + EDX*0x2]
006EABB6  C1 E0 03                  SHL EAX,0x3
006EABB9  2B C2                     SUB EAX,EDX
006EABBB  8D 04 40                  LEA EAX,[EAX + EAX*0x2]
006EABBE  8D 04 81                  LEA EAX,[ECX + EAX*0x4]
006EABC1  8B 48 08                  MOV ECX,dword ptr [EAX + 0x8]
006EABC4  85 C9                     TEST ECX,ECX
006EABC6  75 23                     JNZ 0x006eabeb
006EABC8  8B 08                     MOV ECX,dword ptr [EAX]
006EABCA  F7 C1 00 00 01 00         TEST ECX,0x10000
006EABD0  74 19                     JZ 0x006eabeb
006EABD2  83 C9 04                  OR ECX,0x4
006EABD5  5E                        POP ESI
006EABD6  89 08                     MOV dword ptr [EAX],ECX
006EABD8  5D                        POP EBP
006EABD9  C2 04 00                  RET 0x4
LAB_006eabdc:
006EABDC  83 FE FF                  CMP ESI,-0x1
006EABDF  74 0A                     JZ 0x006eabeb
006EABE1  68 24 EF 7E 00            PUSH 0x7eef24
006EABE6  E8 65 E0 FF FF            CALL 0x006e8c50
LAB_006eabeb:
006EABEB  5E                        POP ESI
006EABEC  5D                        POP EBP
006EABED  C2 04 00                  RET 0x4
