FUN_006a2bb0:
006A2BB0  55                        PUSH EBP
006A2BB1  8B EC                     MOV EBP,ESP
006A2BB3  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
006A2BB6  25 FF 7F 00 00            AND EAX,0x7fff
006A2BBB  50                        PUSH EAX
006A2BBC  68 B4 FA 7D 00            PUSH 0x7dfab4
006A2BC1  68 AC FA 7D 00            PUSH 0x7dfaac
006A2BC6  68 84 40 85 00            PUSH 0x854084
006A2BCB  FF 15 E8 BD 85 00         CALL dword ptr [0x0085bde8]
006A2BD1  83 C4 10                  ADD ESP,0x10
006A2BD4  B8 84 40 85 00            MOV EAX,0x854084
006A2BD9  5D                        POP EBP
006A2BDA  C3                        RET
