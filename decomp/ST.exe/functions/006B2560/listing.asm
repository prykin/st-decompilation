FUN_006b2560:
006B2560  55                        PUSH EBP
006B2561  8B EC                     MOV EBP,ESP
006B2563  8B 45 18                  MOV EAX,dword ptr [EBP + 0x18]
006B2566  8B 4D 14                  MOV ECX,dword ptr [EBP + 0x14]
006B2569  8B 55 10                  MOV EDX,dword ptr [EBP + 0x10]
006B256C  6A 01                     PUSH 0x1
006B256E  50                        PUSH EAX
006B256F  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
006B2572  51                        PUSH ECX
006B2573  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
006B2576  52                        PUSH EDX
006B2577  50                        PUSH EAX
006B2578  51                        PUSH ECX
006B2579  E8 02 FF FF FF            CALL 0x006b2480
006B257E  5D                        POP EBP
006B257F  C2 14 00                  RET 0x14
