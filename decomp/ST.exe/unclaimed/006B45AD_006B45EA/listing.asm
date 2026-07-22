006B45AD  8D 55 B8                  LEA EDX,[EBP + -0x48]
006B45B0  52                        PUSH EDX
006B45B1  56                        PUSH ESI
006B45B2  E8 B9 A1 01 00            CALL 0x006ce770
006B45B7  89 45 E4                  MOV dword ptr [EBP + -0x1c],EAX
006B45BA  85 C0                     TEST EAX,EAX
006B45BC  75 2D                     JNZ 0x006b45eb
006B45BE  53                        PUSH EBX
006B45BF  8B 45 24                  MOV EAX,dword ptr [EBP + 0x24]
006B45C2  50                        PUSH EAX
006B45C3  8B 4D 20                  MOV ECX,dword ptr [EBP + 0x20]
006B45C6  51                        PUSH ECX
006B45C7  8B 55 1C                  MOV EDX,dword ptr [EBP + 0x1c]
006B45CA  52                        PUSH EDX
006B45CB  8B 45 18                  MOV EAX,dword ptr [EBP + 0x18]
006B45CE  50                        PUSH EAX
006B45CF  57                        PUSH EDI
006B45D0  8B 4D 10                  MOV ECX,dword ptr [EBP + 0x10]
006B45D3  51                        PUSH ECX
006B45D4  8B 55 0C                  MOV EDX,dword ptr [EBP + 0xc]
006B45D7  52                        PUSH EDX
006B45D8  8B 45 B8                  MOV EAX,dword ptr [EBP + -0x48]
006B45DB  50                        PUSH EAX
006B45DC  E8 FF BD 01 00            CALL 0x006d03e0
006B45E1  8B 4D B8                  MOV ECX,dword ptr [EBP + -0x48]
006B45E4  51                        PUSH ECX
006B45E5  56                        PUSH ESI
006B45E6  E8 D5 A2 01 00            CALL 0x006ce8c0
