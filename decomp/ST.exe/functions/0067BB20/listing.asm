FUN_0067bb20:
0067BB20  55                        PUSH EBP
0067BB21  8B EC                     MOV EBP,ESP
0067BB23  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
0067BB26  8B 4D 0C                  MOV ECX,dword ptr [EBP + 0xc]
0067BB29  8B 40 04                  MOV EAX,dword ptr [EAX + 0x4]
0067BB2C  8B 51 04                  MOV EDX,dword ptr [ECX + 0x4]
0067BB2F  2B C2                     SUB EAX,EDX
0067BB31  5D                        POP EBP
0067BB32  C3                        RET
