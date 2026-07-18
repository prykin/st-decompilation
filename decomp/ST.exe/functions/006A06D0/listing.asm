FUN_006a06d0:
006A06D0  55                        PUSH EBP
006A06D1  8B EC                     MOV EBP,ESP
006A06D3  8B 81 03 57 00 00         MOV EAX,dword ptr [ECX + 0x5703]
006A06D9  8B 91 FF 56 00 00         MOV EDX,dword ptr [ECX + 0x56ff]
006A06DF  0F AF 45 0C               IMUL EAX,dword ptr [EBP + 0xc]
006A06E3  03 C2                     ADD EAX,EDX
006A06E5  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
006A06E8  33 C9                     XOR ECX,ECX
006A06EA  8A 0C 10                  MOV CL,byte ptr [EAX + EDX*0x1]
006A06ED  8B C1                     MOV EAX,ECX
006A06EF  8D 04 80                  LEA EAX,[EAX + EAX*0x4]
006A06F2  8D 04 80                  LEA EAX,[EAX + EAX*0x4]
006A06F5  8D 0C 80                  LEA ECX,[EAX + EAX*0x4]
006A06F8  B8 81 80 80 80            MOV EAX,0x80808081
006A06FD  C1 E1 02                  SHL ECX,0x2
006A0700  F7 E9                     IMUL ECX
006A0702  8B C2                     MOV EAX,EDX
006A0704  03 C1                     ADD EAX,ECX
006A0706  C1 F8 07                  SAR EAX,0x7
006A0709  8B C8                     MOV ECX,EAX
006A070B  C1 E9 1F                  SHR ECX,0x1f
006A070E  03 C1                     ADD EAX,ECX
006A0710  5D                        POP EBP
006A0711  C2 08 00                  RET 0x8
