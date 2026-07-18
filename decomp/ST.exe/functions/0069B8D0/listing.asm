FUN_0069b8d0:
0069B8D0  55                        PUSH EBP
0069B8D1  8B EC                     MOV EBP,ESP
0069B8D3  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
0069B8D6  8B 4D 0C                  MOV ECX,dword ptr [EBP + 0xc]
0069B8D9  8B 40 2C                  MOV EAX,dword ptr [EAX + 0x2c]
0069B8DC  8B 49 2C                  MOV ECX,dword ptr [ECX + 0x2c]
0069B8DF  3B C1                     CMP EAX,ECX
0069B8E1  7E 05                     JLE 0x0069b8e8
0069B8E3  83 C8 FF                  OR EAX,0xffffffff
0069B8E6  5D                        POP EBP
0069B8E7  C3                        RET
LAB_0069b8e8:
0069B8E8  33 D2                     XOR EDX,EDX
0069B8EA  3B C1                     CMP EAX,ECX
0069B8EC  0F 9C C2                  SETL DL
0069B8EF  8B C2                     MOV EAX,EDX
0069B8F1  5D                        POP EBP
0069B8F2  C3                        RET
