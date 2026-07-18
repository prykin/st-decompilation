FUN_00558bd0:
00558BD0  55                        PUSH EBP
00558BD1  8B EC                     MOV EBP,ESP
00558BD3  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
00558BD6  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
00558BD9  8B 55 10                  MOV EDX,dword ptr [EBP + 0x10]
00558BDC  50                        PUSH EAX
00558BDD  51                        PUSH ECX
00558BDE  8B 0D 98 75 80 00         MOV ECX,dword ptr [0x00807598]
00558BE4  52                        PUSH EDX
00558BE5  E8 D6 EC 1B 00            CALL 0x007178c0
00558BEA  33 C0                     XOR EAX,EAX
00558BEC  5D                        POP EBP
00558BED  C3                        RET
