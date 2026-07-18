FUN_004960d0:
004960D0  55                        PUSH EBP
004960D1  8B EC                     MOV EBP,ESP
004960D3  0F BF 05 78 B2 7F 00      MOVSX EAX,word ptr [0x007fb278]
004960DA  0F BF 4D 0C               MOVSX ECX,word ptr [EBP + 0xc]
004960DE  0F BF 15 7E B2 7F 00      MOVSX EDX,word ptr [0x007fb27e]
004960E5  0F AF C1                  IMUL EAX,ECX
004960E8  0F BF 4D 10               MOVSX ECX,word ptr [EBP + 0x10]
004960EC  0F AF D1                  IMUL EDX,ECX
004960EF  8B 0D 80 B2 7F 00         MOV ECX,dword ptr [0x007fb280]
004960F5  03 C2                     ADD EAX,EDX
004960F7  0F BF 55 08               MOVSX EDX,word ptr [EBP + 0x8]
004960FB  03 C2                     ADD EAX,EDX
004960FD  66 83 3C 41 00            CMP word ptr [ECX + EAX*0x2],0x0
00496102  8D 04 41                  LEA EAX,[ECX + EAX*0x2]
00496105  7D 07                     JGE 0x0049610e
00496107  83 C8 FF                  OR EAX,0xffffffff
0049610A  5D                        POP EBP
0049610B  C2 10 00                  RET 0x10
LAB_0049610e:
0049610E  66 C7 00 FE FF            MOV word ptr [EAX],0xfffe
00496113  33 C0                     XOR EAX,EAX
00496115  5D                        POP EBP
00496116  C2 10 00                  RET 0x10
