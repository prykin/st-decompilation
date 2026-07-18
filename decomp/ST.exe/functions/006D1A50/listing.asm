FUN_006d1a50:
006D1A50  55                        PUSH EBP
006D1A51  8B EC                     MOV EBP,ESP
006D1A53  8B 45 2C                  MOV EAX,dword ptr [EBP + 0x2c]
006D1A56  8B 4D 28                  MOV ECX,dword ptr [EBP + 0x28]
006D1A59  8B 55 24                  MOV EDX,dword ptr [EBP + 0x24]
006D1A5C  50                        PUSH EAX
006D1A5D  8B 45 20                  MOV EAX,dword ptr [EBP + 0x20]
006D1A60  51                        PUSH ECX
006D1A61  8B 4D 1C                  MOV ECX,dword ptr [EBP + 0x1c]
006D1A64  6A 08                     PUSH 0x8
006D1A66  52                        PUSH EDX
006D1A67  8B 55 18                  MOV EDX,dword ptr [EBP + 0x18]
006D1A6A  50                        PUSH EAX
006D1A6B  8B 45 14                  MOV EAX,dword ptr [EBP + 0x14]
006D1A6E  51                        PUSH ECX
006D1A6F  8B 4D 10                  MOV ECX,dword ptr [EBP + 0x10]
006D1A72  52                        PUSH EDX
006D1A73  8B 55 0C                  MOV EDX,dword ptr [EBP + 0xc]
006D1A76  6A 18                     PUSH 0x18
006D1A78  50                        PUSH EAX
006D1A79  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
006D1A7C  51                        PUSH ECX
006D1A7D  52                        PUSH EDX
006D1A7E  50                        PUSH EAX
006D1A7F  E8 1C FC FF FF            CALL 0x006d16a0
006D1A84  5D                        POP EBP
006D1A85  C2 28 00                  RET 0x28
