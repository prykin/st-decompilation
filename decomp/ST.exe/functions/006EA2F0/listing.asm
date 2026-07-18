FUN_006ea2f0:
006EA2F0  55                        PUSH EBP
006EA2F1  8B EC                     MOV EBP,ESP
006EA2F3  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
006EA2F6  8B 81 10 03 00 00         MOV EAX,dword ptr [ECX + 0x310]
006EA2FC  3B D0                     CMP EDX,EAX
006EA2FE  73 23                     JNC 0x006ea323
006EA300  8B 89 1C 03 00 00         MOV ECX,dword ptr [ECX + 0x31c]
006EA306  8D 04 52                  LEA EAX,[EDX + EDX*0x2]
006EA309  C1 E0 03                  SHL EAX,0x3
006EA30C  2B C2                     SUB EAX,EDX
006EA30E  8D 04 40                  LEA EAX,[EAX + EAX*0x2]
006EA311  8D 04 81                  LEA EAX,[ECX + EAX*0x4]
006EA314  8B 08                     MOV ECX,dword ptr [EAX]
006EA316  F6 C5 80                  TEST CH,0x80
006EA319  74 08                     JZ 0x006ea323
006EA31B  83 60 04 8F               AND dword ptr [EAX + 0x4],0xffffff8f
006EA31F  5D                        POP EBP
006EA320  C2 04 00                  RET 0x4
LAB_006ea323:
006EA323  83 FA FF                  CMP EDX,-0x1
006EA326  74 0A                     JZ 0x006ea332
006EA328  68 44 EE 7E 00            PUSH 0x7eee44
006EA32D  E8 1E E9 FF FF            CALL 0x006e8c50
LAB_006ea332:
006EA332  5D                        POP EBP
006EA333  C2 04 00                  RET 0x4
