STLightC::sub_0061D8F0:
0061D8F0  55                        PUSH EBP
0061D8F1  8B EC                     MOV EBP,ESP
0061D8F3  83 EC 0C                  SUB ESP,0xc
0061D8F6  53                        PUSH EBX
0061D8F7  8B D9                     MOV EBX,ECX
0061D8F9  56                        PUSH ESI
0061D8FA  57                        PUSH EDI
0061D8FB  85 DB                     TEST EBX,EBX
0061D8FD  74 05                     JZ 0x0061d904
0061D8FF  8D 7B 1C                  LEA EDI,[EBX + 0x1c]
0061D902  EB 02                     JMP 0x0061d906
LAB_0061d904:
0061D904  33 FF                     XOR EDI,EDI
LAB_0061d906:
0061D906  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
0061D909  B9 24 00 00 00            MOV ECX,0x24
0061D90E  8B F0                     MOV ESI,EAX
0061D910  6A 01                     PUSH 0x1
0061D912  F3 A5                     MOVSD.REP ES:EDI,ESI
0061D914  8D B0 90 00 00 00         LEA ESI,[EAX + 0x90]
0061D91A  8D 45 F4                  LEA EAX,[EBP + -0xc]
0061D91D  50                        PUSH EAX
0061D91E  56                        PUSH ESI
0061D91F  8B CB                     MOV ECX,EBX
0061D921  E8 AD 77 DE FF            CALL 0x004050d3
0061D926  8B 8B 93 00 00 00         MOV ECX,dword ptr [EBX + 0x93]
0061D92C  89 45 F8                  MOV dword ptr [EBP + -0x8],EAX
0061D92F  03 C6                     ADD EAX,ESI
0061D931  C1 E1 04                  SHL ECX,0x4
0061D934  8D 70 04                  LEA ESI,[EAX + 0x4]
0061D937  51                        PUSH ECX
0061D938  89 45 08                  MOV dword ptr [EBP + 0x8],EAX
0061D93B  89 75 FC                  MOV dword ptr [EBP + -0x4],ESI
0061D93E  E8 2D D3 08 00            CALL 0x006aac70
0061D943  8B 8B 93 00 00 00         MOV ECX,dword ptr [EBX + 0x93]
0061D949  8B F8                     MOV EDI,EAX
0061D94B  C1 E1 04                  SHL ECX,0x4
0061D94E  8B D1                     MOV EDX,ECX
0061D950  89 43 57                  MOV dword ptr [EBX + 0x57],EAX
0061D953  C1 E9 02                  SHR ECX,0x2
0061D956  F3 A5                     MOVSD.REP ES:EDI,ESI
0061D958  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
0061D95B  8B CA                     MOV ECX,EDX
0061D95D  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
0061D960  83 E1 03                  AND ECX,0x3
0061D963  F3 A4                     MOVSB.REP ES:EDI,ESI
0061D965  8B 08                     MOV ECX,dword ptr [EAX]
0061D967  8D 44 0A 04               LEA EAX,[EDX + ECX*0x1 + 0x4]
0061D96B  50                        PUSH EAX
0061D96C  6A 00                     PUSH 0x0
0061D96E  E8 ED 26 09 00            CALL 0x006b0060
0061D973  5F                        POP EDI
0061D974  89 83 A3 00 00 00         MOV dword ptr [EBX + 0xa3],EAX
0061D97A  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
0061D97D  5E                        POP ESI
0061D97E  5B                        POP EBX
0061D97F  8B E5                     MOV ESP,EBP
0061D981  5D                        POP EBP
0061D982  C2 04 00                  RET 0x4
