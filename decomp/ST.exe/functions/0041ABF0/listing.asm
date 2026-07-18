FUN_0041abf0:
0041ABF0  55                        PUSH EBP
0041ABF1  8B EC                     MOV EBP,ESP
0041ABF3  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
0041ABF6  33 D2                     XOR EDX,EDX
0041ABF8  8B 08                     MOV ECX,dword ptr [EAX]
0041ABFA  3B CA                     CMP ECX,EDX
0041ABFC  74 03                     JZ 0x0041ac01
0041ABFE  89 51 0C                  MOV dword ptr [ECX + 0xc],EDX
LAB_0041ac01:
0041AC01  8B 48 04                  MOV ECX,dword ptr [EAX + 0x4]
0041AC04  3B CA                     CMP ECX,EDX
0041AC06  74 03                     JZ 0x0041ac0b
0041AC08  89 51 0C                  MOV dword ptr [ECX + 0xc],EDX
LAB_0041ac0b:
0041AC0B  8B 48 08                  MOV ECX,dword ptr [EAX + 0x8]
0041AC0E  3B CA                     CMP ECX,EDX
0041AC10  74 03                     JZ 0x0041ac15
0041AC12  89 51 0C                  MOV dword ptr [ECX + 0xc],EDX
LAB_0041ac15:
0041AC15  8B 40 0C                  MOV EAX,dword ptr [EAX + 0xc]
0041AC18  3B C2                     CMP EAX,EDX
0041AC1A  74 03                     JZ 0x0041ac1f
0041AC1C  89 50 0C                  MOV dword ptr [EAX + 0xc],EDX
LAB_0041ac1f:
0041AC1F  5D                        POP EBP
0041AC20  C2 04 00                  RET 0x4
