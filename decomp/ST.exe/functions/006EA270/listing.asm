FUN_006ea270:
006EA270  55                        PUSH EBP
006EA271  8B EC                     MOV EBP,ESP
006EA273  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
006EA276  8B 81 10 03 00 00         MOV EAX,dword ptr [ECX + 0x310]
006EA27C  3B D0                     CMP EDX,EAX
006EA27E  73 4F                     JNC 0x006ea2cf
006EA280  8B 89 1C 03 00 00         MOV ECX,dword ptr [ECX + 0x31c]
006EA286  8D 04 52                  LEA EAX,[EDX + EDX*0x2]
006EA289  C1 E0 03                  SHL EAX,0x3
006EA28C  2B C2                     SUB EAX,EDX
006EA28E  8D 04 40                  LEA EAX,[EAX + EAX*0x2]
006EA291  8D 04 81                  LEA EAX,[ECX + EAX*0x4]
006EA294  8B 08                     MOV ECX,dword ptr [EAX]
006EA296  F6 C5 80                  TEST CH,0x80
006EA299  74 34                     JZ 0x006ea2cf
006EA29B  8B 88 A0 00 00 00         MOV ECX,dword ptr [EAX + 0xa0]
006EA2A1  85 C9                     TEST ECX,ECX
006EA2A3  74 39                     JZ 0x006ea2de
006EA2A5  8B 4D 0C                  MOV ECX,dword ptr [EBP + 0xc]
006EA2A8  8B 90 94 00 00 00         MOV EDX,dword ptr [EAX + 0x94]
006EA2AE  3B CA                     CMP ECX,EDX
006EA2B0  73 0F                     JNC 0x006ea2c1
006EA2B2  8B 55 10                  MOV EDX,dword ptr [EBP + 0x10]
006EA2B5  52                        PUSH EDX
006EA2B6  51                        PUSH ECX
006EA2B7  50                        PUSH EAX
006EA2B8  E8 53 F7 FF FF            CALL 0x006e9a10
006EA2BD  5D                        POP EBP
006EA2BE  C2 0C 00                  RET 0xc
LAB_006ea2c1:
006EA2C1  68 30 EE 7E 00            PUSH 0x7eee30
006EA2C6  E8 D5 EE FF FF            CALL 0x006e91a0
006EA2CB  5D                        POP EBP
006EA2CC  C2 0C 00                  RET 0xc
LAB_006ea2cf:
006EA2CF  83 FA FF                  CMP EDX,-0x1
006EA2D2  74 0A                     JZ 0x006ea2de
006EA2D4  68 30 EE 7E 00            PUSH 0x7eee30
006EA2D9  E8 72 E9 FF FF            CALL 0x006e8c50
LAB_006ea2de:
006EA2DE  5D                        POP EBP
006EA2DF  C2 0C 00                  RET 0xc
