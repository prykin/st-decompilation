FUN_007121a0:
007121A0  55                        PUSH EBP
007121A1  8B EC                     MOV EBP,ESP
007121A3  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
007121A6  8B 4D 10                  MOV ECX,dword ptr [EBP + 0x10]
007121A9  56                        PUSH ESI
007121AA  8D 34 08                  LEA ESI,[EAX + ECX*0x1]
007121AD  57                        PUSH EDI
007121AE  3B C6                     CMP EAX,ESI
007121B0  7D 22                     JGE 0x007121d4
007121B2  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
007121B5  8B 7A 08                  MOV EDI,dword ptr [EDX + 0x8]
LAB_007121b8:
007121B8  3B C7                     CMP EAX,EDI
007121BA  7D 18                     JGE 0x007121d4
007121BC  85 C0                     TEST EAX,EAX
007121BE  7C 14                     JL 0x007121d4
007121C0  8B 4A 14                  MOV ECX,dword ptr [EDX + 0x14]
007121C3  8B 0C 81                  MOV ECX,dword ptr [ECX + EAX*0x4]
007121C6  85 C9                     TEST ECX,ECX
007121C8  74 05                     JZ 0x007121cf
007121CA  80 39 00                  CMP byte ptr [ECX],0x0
007121CD  75 0B                     JNZ 0x007121da
LAB_007121cf:
007121CF  40                        INC EAX
007121D0  3B C6                     CMP EAX,ESI
007121D2  7C E4                     JL 0x007121b8
LAB_007121d4:
007121D4  5F                        POP EDI
007121D5  5E                        POP ESI
007121D6  33 C0                     XOR EAX,EAX
007121D8  5D                        POP EBP
007121D9  C3                        RET
LAB_007121da:
007121DA  5F                        POP EDI
007121DB  5E                        POP ESI
007121DC  B8 01 00 00 00            MOV EAX,0x1
007121E1  5D                        POP EBP
007121E2  C3                        RET
