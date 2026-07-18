FUN_006e9350:
006E9350  55                        PUSH EBP
006E9351  8B EC                     MOV EBP,ESP
006E9353  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
006E9356  8B 81 10 03 00 00         MOV EAX,dword ptr [ECX + 0x310]
006E935C  3B D0                     CMP EDX,EAX
006E935E  73 4B                     JNC 0x006e93ab
006E9360  8B 89 1C 03 00 00         MOV ECX,dword ptr [ECX + 0x31c]
006E9366  8D 04 52                  LEA EAX,[EDX + EDX*0x2]
006E9369  C1 E0 03                  SHL EAX,0x3
006E936C  2B C2                     SUB EAX,EDX
006E936E  8D 04 40                  LEA EAX,[EAX + EAX*0x2]
006E9371  8D 04 81                  LEA EAX,[ECX + EAX*0x4]
006E9374  8B 08                     MOV ECX,dword ptr [EAX]
006E9376  F6 C5 80                  TEST CH,0x80
006E9379  74 30                     JZ 0x006e93ab
006E937B  8B 55 0C                  MOV EDX,dword ptr [EBP + 0xc]
006E937E  89 90 C0 00 00 00         MOV dword ptr [EAX + 0xc0],EDX
006E9384  8B 55 10                  MOV EDX,dword ptr [EBP + 0x10]
006E9387  83 C2 07                  ADD EDX,0x7
006E938A  C1 FA 03                  SAR EDX,0x3
006E938D  89 90 BC 00 00 00         MOV dword ptr [EAX + 0xbc],EDX
006E9393  8B 50 08                  MOV EDX,dword ptr [EAX + 0x8]
006E9396  85 D2                     TEST EDX,EDX
006E9398  75 20                     JNZ 0x006e93ba
006E939A  F7 C1 01 00 01 00         TEST ECX,0x10001
006E93A0  74 18                     JZ 0x006e93ba
006E93A2  83 C9 04                  OR ECX,0x4
006E93A5  89 08                     MOV dword ptr [EAX],ECX
006E93A7  5D                        POP EBP
006E93A8  C2 0C 00                  RET 0xc
LAB_006e93ab:
006E93AB  83 FA FF                  CMP EDX,-0x1
006E93AE  74 0A                     JZ 0x006e93ba
006E93B0  68 14 ED 7E 00            PUSH 0x7eed14
006E93B5  E8 96 F8 FF FF            CALL 0x006e8c50
LAB_006e93ba:
006E93BA  5D                        POP EBP
006E93BB  C2 0C 00                  RET 0xc
