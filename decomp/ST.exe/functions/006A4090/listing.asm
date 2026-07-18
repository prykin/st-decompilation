FUN_006a4090:
006A4090  55                        PUSH EBP
006A4091  8B EC                     MOV EBP,ESP
006A4093  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
006A4096  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
006A4099  6A 00                     PUSH 0x0
006A409B  6A 00                     PUSH 0x0
006A409D  6A 01                     PUSH 0x1
006A409F  50                        PUSH EAX
006A40A0  51                        PUSH ECX
006A40A1  E8 A2 E1 D5 FF            CALL 0x00402248
006A40A6  83 C4 14                  ADD ESP,0x14
006A40A9  5D                        POP EBP
006A40AA  C3                        RET
