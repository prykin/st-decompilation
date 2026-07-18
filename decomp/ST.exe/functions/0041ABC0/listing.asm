FUN_0041abc0:
0041ABC0  55                        PUSH EBP
0041ABC1  8B EC                     MOV EBP,ESP
0041ABC3  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
0041ABC6  33 D2                     XOR EDX,EDX
0041ABC8  8B 01                     MOV EAX,dword ptr [ECX]
0041ABCA  3B C2                     CMP EAX,EDX
0041ABCC  74 03                     JZ 0x0041abd1
0041ABCE  89 50 0C                  MOV dword ptr [EAX + 0xc],EDX
LAB_0041abd1:
0041ABD1  8B 41 04                  MOV EAX,dword ptr [ECX + 0x4]
0041ABD4  3B C2                     CMP EAX,EDX
0041ABD6  74 03                     JZ 0x0041abdb
0041ABD8  89 50 0C                  MOV dword ptr [EAX + 0xc],EDX
LAB_0041abdb:
0041ABDB  5D                        POP EBP
0041ABDC  C2 04 00                  RET 0x4
