FUN_0058a970:
0058A970  55                        PUSH EBP
0058A971  8B EC                     MOV EBP,ESP
0058A973  8B 41 1C                  MOV EAX,dword ptr [ECX + 0x1c]
0058A976  33 D2                     XOR EDX,EDX
0058A978  69 C0 6D 4E C6 41         IMUL EAX,EAX,0x41c64e6d
0058A97E  05 39 30 00 00            ADD EAX,0x3039
0058A983  89 41 1C                  MOV dword ptr [ECX + 0x1c],EAX
0058A986  B9 15 00 00 00            MOV ECX,0x15
0058A98B  C1 E8 10                  SHR EAX,0x10
0058A98E  F7 F1                     DIV ECX
0058A990  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
0058A993  8D 44 02 1E               LEA EAX,[EDX + EAX*0x1 + 0x1e]
0058A997  5D                        POP EBP
0058A998  C2 08 00                  RET 0x8
