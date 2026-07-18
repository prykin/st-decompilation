FUN_006ea790:
006EA790  55                        PUSH EBP
006EA791  8B EC                     MOV EBP,ESP
006EA793  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
006EA796  8B 81 10 03 00 00         MOV EAX,dword ptr [ECX + 0x310]
006EA79C  3B D0                     CMP EDX,EAX
006EA79E  73 40                     JNC 0x006ea7e0
006EA7A0  8B 89 1C 03 00 00         MOV ECX,dword ptr [ECX + 0x31c]
006EA7A6  8D 04 52                  LEA EAX,[EDX + EDX*0x2]
006EA7A9  C1 E0 03                  SHL EAX,0x3
006EA7AC  2B C2                     SUB EAX,EDX
006EA7AE  8D 04 40                  LEA EAX,[EAX + EAX*0x2]
006EA7B1  8D 0C 81                  LEA ECX,[ECX + EAX*0x4]
006EA7B4  8B 01                     MOV EAX,dword ptr [ECX]
006EA7B6  F6 C4 80                  TEST AH,0x80
006EA7B9  74 25                     JZ 0x006ea7e0
006EA7BB  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
006EA7BE  85 C0                     TEST EAX,EAX
006EA7C0  74 12                     JZ 0x006ea7d4
006EA7C2  8B 55 10                  MOV EDX,dword ptr [EBP + 0x10]
006EA7C5  C1 E2 08                  SHL EDX,0x8
006EA7C8  2B C2                     SUB EAX,EDX
006EA7CA  89 81 B0 00 00 00         MOV dword ptr [ECX + 0xb0],EAX
006EA7D0  5D                        POP EBP
006EA7D1  C2 0C 00                  RET 0xc
LAB_006ea7d4:
006EA7D4  33 C0                     XOR EAX,EAX
006EA7D6  89 81 B0 00 00 00         MOV dword ptr [ECX + 0xb0],EAX
006EA7DC  5D                        POP EBP
006EA7DD  C2 0C 00                  RET 0xc
LAB_006ea7e0:
006EA7E0  83 FA FF                  CMP EDX,-0x1
006EA7E3  74 0A                     JZ 0x006ea7ef
006EA7E5  68 DC EE 7E 00            PUSH 0x7eeedc
006EA7EA  E8 61 E4 FF FF            CALL 0x006e8c50
LAB_006ea7ef:
006EA7EF  5D                        POP EBP
006EA7F0  C2 0C 00                  RET 0xc
