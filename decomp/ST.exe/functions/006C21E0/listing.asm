FUN_006c21e0:
006C21E0  55                        PUSH EBP
006C21E1  8B EC                     MOV EBP,ESP
006C21E3  8B 45 30                  MOV EAX,dword ptr [EBP + 0x30]
006C21E6  8B 4D 2C                  MOV ECX,dword ptr [EBP + 0x2c]
006C21E9  8B 55 28                  MOV EDX,dword ptr [EBP + 0x28]
006C21EC  50                        PUSH EAX
006C21ED  8B 45 24                  MOV EAX,dword ptr [EBP + 0x24]
006C21F0  51                        PUSH ECX
006C21F1  8B 4D 20                  MOV ECX,dword ptr [EBP + 0x20]
006C21F4  52                        PUSH EDX
006C21F5  8B 55 1C                  MOV EDX,dword ptr [EBP + 0x1c]
006C21F8  50                        PUSH EAX
006C21F9  8B 45 18                  MOV EAX,dword ptr [EBP + 0x18]
006C21FC  51                        PUSH ECX
006C21FD  8B 4D 14                  MOV ECX,dword ptr [EBP + 0x14]
006C2200  52                        PUSH EDX
006C2201  8B 55 10                  MOV EDX,dword ptr [EBP + 0x10]
006C2204  50                        PUSH EAX
006C2205  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
006C2208  6A 00                     PUSH 0x0
006C220A  80 CE 10                  OR DH,0x10
006C220D  51                        PUSH ECX
006C220E  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
006C2211  52                        PUSH EDX
006C2212  50                        PUSH EAX
006C2213  51                        PUSH ECX
006C2214  E8 97 ED FF FF            CALL 0x006c0fb0
006C2219  5D                        POP EBP
006C221A  C2 2C 00                  RET 0x2c
