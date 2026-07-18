FUN_006db7f0:
006DB7F0  55                        PUSH EBP
006DB7F1  8B EC                     MOV EBP,ESP
006DB7F3  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
006DB7F6  50                        PUSH EAX
006DB7F7  E8 64 FF FF FF            CALL 0x006db760
006DB7FC  B9 5A 00 00 00            MOV ECX,0x5a
006DB801  2B C8                     SUB ECX,EAX
006DB803  8D 81 68 01 00 00         LEA EAX,[ECX + 0x168]
006DB809  78 02                     JS 0x006db80d
006DB80B  8B C1                     MOV EAX,ECX
LAB_006db80d:
006DB80D  5D                        POP EBP
006DB80E  C2 04 00                  RET 0x4
