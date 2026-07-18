FUN_006b5440:
006B5440  55                        PUSH EBP
006B5441  8B EC                     MOV EBP,ESP
006B5443  8B 45 20                  MOV EAX,dword ptr [EBP + 0x20]
006B5446  50                        PUSH EAX
006B5447  8B 45 18                  MOV EAX,dword ptr [EBP + 0x18]
006B544A  8B 48 08                  MOV ECX,dword ptr [EAX + 0x8]
006B544D  8B 50 04                  MOV EDX,dword ptr [EAX + 0x4]
006B5450  51                        PUSH ECX
006B5451  8B 4D 1C                  MOV ECX,dword ptr [EBP + 0x1c]
006B5454  52                        PUSH EDX
006B5455  8B 55 14                  MOV EDX,dword ptr [EBP + 0x14]
006B5458  6A 00                     PUSH 0x0
006B545A  6A 00                     PUSH 0x0
006B545C  51                        PUSH ECX
006B545D  8B 4D 0C                  MOV ECX,dword ptr [EBP + 0xc]
006B5460  50                        PUSH EAX
006B5461  8B 45 10                  MOV EAX,dword ptr [EBP + 0x10]
006B5464  52                        PUSH EDX
006B5465  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
006B5468  50                        PUSH EAX
006B5469  51                        PUSH ECX
006B546A  52                        PUSH EDX
006B546B  E8 A0 FC FF FF            CALL 0x006b5110
006B5470  5D                        POP EBP
006B5471  C2 1C 00                  RET 0x1c
