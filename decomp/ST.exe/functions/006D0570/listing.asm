FUN_006d0570:
006D0570  55                        PUSH EBP
006D0571  8B EC                     MOV EBP,ESP
006D0573  8B 4D 14                  MOV ECX,dword ptr [EBP + 0x14]
006D0576  8B 41 08                  MOV EAX,dword ptr [ECX + 0x8]
006D0579  99                        CDQ
006D057A  33 C2                     XOR EAX,EDX
006D057C  2B C2                     SUB EAX,EDX
006D057E  8B 55 18                  MOV EDX,dword ptr [EBP + 0x18]
006D0581  50                        PUSH EAX
006D0582  8B 41 04                  MOV EAX,dword ptr [ECX + 0x4]
006D0585  50                        PUSH EAX
006D0586  8B 45 10                  MOV EAX,dword ptr [EBP + 0x10]
006D0589  6A 00                     PUSH 0x0
006D058B  6A 00                     PUSH 0x0
006D058D  52                        PUSH EDX
006D058E  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
006D0591  51                        PUSH ECX
006D0592  8B 4D 0C                  MOV ECX,dword ptr [EBP + 0xc]
006D0595  50                        PUSH EAX
006D0596  51                        PUSH ECX
006D0597  52                        PUSH EDX
006D0598  E8 C3 FE FF FF            CALL 0x006d0460
006D059D  5D                        POP EBP
006D059E  C2 14 00                  RET 0x14
