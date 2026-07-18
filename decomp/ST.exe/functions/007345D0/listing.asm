__strnset:
007345D0  55                        PUSH EBP
007345D1  8B EC                     MOV EBP,ESP
007345D3  57                        PUSH EDI
007345D4  53                        PUSH EBX
007345D5  8B 7D 08                  MOV EDI,dword ptr [EBP + 0x8]
007345D8  8B D7                     MOV EDX,EDI
007345DA  8B 5D 10                  MOV EBX,dword ptr [EBP + 0x10]
007345DD  33 C0                     XOR EAX,EAX
007345DF  8B CB                     MOV ECX,EBX
007345E1  E3 10                     JECXZ 0x007345f3
007345E3  F2 AE                     SCASB.REPNE ES:EDI
007345E5  75 01                     JNZ 0x007345e8
007345E7  41                        INC ECX
LAB_007345e8:
007345E8  2B D9                     SUB EBX,ECX
007345EA  8B CB                     MOV ECX,EBX
007345EC  8B FA                     MOV EDI,EDX
007345EE  8A 45 0C                  MOV AL,byte ptr [EBP + 0xc]
007345F1  F3 AA                     STOSB.REP ES:EDI
LAB_007345f3:
007345F3  8B C2                     MOV EAX,EDX
007345F5  5B                        POP EBX
007345F6  5F                        POP EDI
007345F7  C9                        LEAVE
007345F8  C3                        RET
