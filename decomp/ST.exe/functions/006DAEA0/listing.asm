FUN_006daea0:
006DAEA0  55                        PUSH EBP
006DAEA1  8B EC                     MOV EBP,ESP
006DAEA3  8B 45 20                  MOV EAX,dword ptr [EBP + 0x20]
006DAEA6  8B 4D 18                  MOV ECX,dword ptr [EBP + 0x18]
006DAEA9  50                        PUSH EAX
006DAEAA  8B 45 1C                  MOV EAX,dword ptr [EBP + 0x1c]
006DAEAD  8B 55 10                  MOV EDX,dword ptr [EBP + 0x10]
006DAEB0  50                        PUSH EAX
006DAEB1  51                        PUSH ECX
006DAEB2  6A 00                     PUSH 0x0
006DAEB4  6A 00                     PUSH 0x0
006DAEB6  50                        PUSH EAX
006DAEB7  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
006DAEBA  51                        PUSH ECX
006DAEBB  8B 4D 14                  MOV ECX,dword ptr [EBP + 0x14]
006DAEBE  51                        PUSH ECX
006DAEBF  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
006DAEC2  52                        PUSH EDX
006DAEC3  50                        PUSH EAX
006DAEC4  51                        PUSH ECX
006DAEC5  E8 36 FE FF FF            CALL 0x006dad00
006DAECA  5D                        POP EBP
006DAECB  C2 1C 00                  RET 0x1c
