FUN_006db910:
006DB910  55                        PUSH EBP
006DB911  8B EC                     MOV EBP,ESP
006DB913  8B 4D 10                  MOV ECX,dword ptr [EBP + 0x10]
006DB916  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
006DB919  8B 45 14                  MOV EAX,dword ptr [EBP + 0x14]
006DB91C  56                        PUSH ESI
006DB91D  8B 75 0C                  MOV ESI,dword ptr [EBP + 0xc]
006DB920  2B CA                     SUB ECX,EDX
006DB922  2B F0                     SUB ESI,EAX
006DB924  75 14                     JNZ 0x006db93a
006DB926  33 C0                     XOR EAX,EAX
006DB928  5E                        POP ESI
006DB929  85 C9                     TEST ECX,ECX
006DB92B  0F 9C C0                  SETL AL
006DB92E  48                        DEC EAX
006DB92F  24 4C                     AND AL,0x4c
006DB931  05 B4 00 00 00            ADD EAX,0xb4
006DB936  5D                        POP EBP
006DB937  C2 10 00                  RET 0x10
LAB_006db93a:
006DB93A  8B C1                     MOV EAX,ECX
006DB93C  57                        PUSH EDI
006DB93D  99                        CDQ
006DB93E  33 C2                     XOR EAX,EDX
006DB940  2B C2                     SUB EAX,EDX
006DB942  8D 04 80                  LEA EAX,[EAX + EAX*0x4]
006DB945  8D 3C 80                  LEA EDI,[EAX + EAX*0x4]
006DB948  8B C6                     MOV EAX,ESI
006DB94A  99                        CDQ
006DB94B  33 C2                     XOR EAX,EDX
006DB94D  C1 E7 02                  SHL EDI,0x2
006DB950  2B C2                     SUB EAX,EDX
006DB952  3B F8                     CMP EDI,EAX
006DB954  5F                        POP EDI
006DB955  7F 14                     JG 0x006db96b
006DB957  33 C0                     XOR EAX,EAX
006DB959  85 F6                     TEST ESI,ESI
006DB95B  0F 9C C0                  SETL AL
006DB95E  48                        DEC EAX
006DB95F  5E                        POP ESI
006DB960  24 4C                     AND AL,0x4c
006DB962  05 0E 01 00 00            ADD EAX,0x10e
006DB967  5D                        POP EBP
006DB968  C2 10 00                  RET 0x10
LAB_006db96b:
006DB96B  51                        PUSH ECX
006DB96C  68 00 00 01 00            PUSH 0x10000
006DB971  56                        PUSH ESI
006DB972  E8 B9 FC FF FF            CALL 0x006db630
006DB977  50                        PUSH EAX
006DB978  E8 A3 FE FF FF            CALL 0x006db820
006DB97D  85 F6                     TEST ESI,ESI
006DB97F  7D 05                     JGE 0x006db986
006DB981  05 B4 00 00 00            ADD EAX,0xb4
LAB_006db986:
006DB986  5E                        POP ESI
006DB987  5D                        POP EBP
006DB988  C2 10 00                  RET 0x10
