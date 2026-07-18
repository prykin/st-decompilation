FUN_006d49f0:
006D49F0  55                        PUSH EBP
006D49F1  8B EC                     MOV EBP,ESP
006D49F3  8B 45 14                  MOV EAX,dword ptr [EBP + 0x14]
006D49F6  8B 4D 10                  MOV ECX,dword ptr [EBP + 0x10]
006D49F9  8B 55 0C                  MOV EDX,dword ptr [EBP + 0xc]
006D49FC  56                        PUSH ESI
006D49FD  50                        PUSH EAX
006D49FE  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
006D4A01  51                        PUSH ECX
006D4A02  52                        PUSH EDX
006D4A03  50                        PUSH EAX
006D4A04  E8 27 FF FF FF            CALL 0x006d4930
006D4A09  8B F0                     MOV ESI,EAX
006D4A0B  85 F6                     TEST ESI,ESI
006D4A0D  74 1E                     JZ 0x006d4a2d
006D4A0F  8B 0D 7C D7 7E 00         MOV ECX,dword ptr [0x007ed77c]
006D4A15  68 8E 01 00 00            PUSH 0x18e
006D4A1A  68 2C E2 7E 00            PUSH 0x7ee22c
006D4A1F  51                        PUSH ECX
006D4A20  56                        PUSH ESI
006D4A21  E8 1A 14 FD FF            CALL 0x006a5e40
006D4A26  8B C6                     MOV EAX,ESI
006D4A28  5E                        POP ESI
006D4A29  5D                        POP EBP
006D4A2A  C2 10 00                  RET 0x10
LAB_006d4a2d:
006D4A2D  33 C0                     XOR EAX,EAX
006D4A2F  5E                        POP ESI
006D4A30  5D                        POP EBP
006D4A31  C2 10 00                  RET 0x10
