FUN_006d1a90:
006D1A90  55                        PUSH EBP
006D1A91  8B EC                     MOV EBP,ESP
006D1A93  8B 45 2C                  MOV EAX,dword ptr [EBP + 0x2c]
006D1A96  8B 4D 28                  MOV ECX,dword ptr [EBP + 0x28]
006D1A99  8B 55 24                  MOV EDX,dword ptr [EBP + 0x24]
006D1A9C  50                        PUSH EAX
006D1A9D  8B 45 20                  MOV EAX,dword ptr [EBP + 0x20]
006D1AA0  51                        PUSH ECX
006D1AA1  8B 4D 1C                  MOV ECX,dword ptr [EBP + 0x1c]
006D1AA4  6A 18                     PUSH 0x18
006D1AA6  52                        PUSH EDX
006D1AA7  8B 55 18                  MOV EDX,dword ptr [EBP + 0x18]
006D1AAA  50                        PUSH EAX
006D1AAB  8B 45 14                  MOV EAX,dword ptr [EBP + 0x14]
006D1AAE  51                        PUSH ECX
006D1AAF  8B 4D 10                  MOV ECX,dword ptr [EBP + 0x10]
006D1AB2  52                        PUSH EDX
006D1AB3  8B 55 0C                  MOV EDX,dword ptr [EBP + 0xc]
006D1AB6  6A 10                     PUSH 0x10
006D1AB8  50                        PUSH EAX
006D1AB9  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
006D1ABC  51                        PUSH ECX
006D1ABD  52                        PUSH EDX
006D1ABE  50                        PUSH EAX
006D1ABF  E8 DC FB FF FF            CALL 0x006d16a0
006D1AC4  5D                        POP EBP
006D1AC5  C2 28 00                  RET 0x28
