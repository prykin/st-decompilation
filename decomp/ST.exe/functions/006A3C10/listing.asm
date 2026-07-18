FUN_006a3c10:
006A3C10  55                        PUSH EBP
006A3C11  8B EC                     MOV EBP,ESP
006A3C13  8B 45 14                  MOV EAX,dword ptr [EBP + 0x14]
006A3C16  8B 4D 10                  MOV ECX,dword ptr [EBP + 0x10]
006A3C19  8B 55 0C                  MOV EDX,dword ptr [EBP + 0xc]
006A3C1C  50                        PUSH EAX
006A3C1D  A1 CC 71 85 00            MOV EAX,[0x008571cc]
006A3C22  51                        PUSH ECX
006A3C23  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
006A3C26  52                        PUSH EDX
006A3C27  50                        PUSH EAX
006A3C28  51                        PUSH ECX
006A3C29  E8 6A 1D D6 FF            CALL 0x00405998
006A3C2E  83 C4 14                  ADD ESP,0x14
006A3C31  5D                        POP EBP
006A3C32  C3                        RET
