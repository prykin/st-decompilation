FUN_006c87c0:
006C87C0  55                        PUSH EBP
006C87C1  8B EC                     MOV EBP,ESP
006C87C3  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
006C87C6  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
006C87C9  3B 41 08                  CMP EAX,dword ptr [ECX + 0x8]
006C87CC  73 17                     JNC 0x006c87e5
006C87CE  8B 49 14                  MOV ECX,dword ptr [ECX + 0x14]
006C87D1  8D 04 81                  LEA EAX,[ECX + EAX*0x4]
006C87D4  83 38 00                  CMP dword ptr [EAX],0x0
006C87D7  74 06                     JZ 0x006c87df
006C87D9  50                        PUSH EAX
006C87DA  E8 81 28 FE FF            CALL 0x006ab060
LAB_006c87df:
006C87DF  33 C0                     XOR EAX,EAX
006C87E1  5D                        POP EBP
006C87E2  C2 08 00                  RET 0x8
LAB_006c87e5:
006C87E5  B8 FC FF FF FF            MOV EAX,0xfffffffc
006C87EA  5D                        POP EBP
006C87EB  C2 08 00                  RET 0x8
