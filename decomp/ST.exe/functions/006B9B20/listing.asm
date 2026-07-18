FUN_006b9b20:
006B9B20  55                        PUSH EBP
006B9B21  8B EC                     MOV EBP,ESP
006B9B23  8B 45 10                  MOV EAX,dword ptr [EBP + 0x10]
006B9B26  8B 4D 0C                  MOV ECX,dword ptr [EBP + 0xc]
006B9B29  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
006B9B2C  50                        PUSH EAX
006B9B2D  51                        PUSH ECX
006B9B2E  6A 00                     PUSH 0x0
006B9B30  52                        PUSH EDX
006B9B31  E8 0A FE FF FF            CALL 0x006b9940
006B9B36  5D                        POP EBP
006B9B37  C2 0C 00                  RET 0xc
