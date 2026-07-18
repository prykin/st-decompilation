FUN_0041ac40:
0041AC40  55                        PUSH EBP
0041AC41  8B EC                     MOV EBP,ESP
0041AC43  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
0041AC46  33 D2                     XOR EDX,EDX
0041AC48  8B 08                     MOV ECX,dword ptr [EAX]
0041AC4A  3B CA                     CMP ECX,EDX
0041AC4C  74 03                     JZ 0x0041ac51
0041AC4E  89 51 0C                  MOV dword ptr [ECX + 0xc],EDX
LAB_0041ac51:
0041AC51  8B 48 04                  MOV ECX,dword ptr [EAX + 0x4]
0041AC54  3B CA                     CMP ECX,EDX
0041AC56  74 03                     JZ 0x0041ac5b
0041AC58  89 51 0C                  MOV dword ptr [ECX + 0xc],EDX
LAB_0041ac5b:
0041AC5B  8B 48 08                  MOV ECX,dword ptr [EAX + 0x8]
0041AC5E  3B CA                     CMP ECX,EDX
0041AC60  74 03                     JZ 0x0041ac65
0041AC62  89 51 0C                  MOV dword ptr [ECX + 0xc],EDX
LAB_0041ac65:
0041AC65  8B 48 0C                  MOV ECX,dword ptr [EAX + 0xc]
0041AC68  3B CA                     CMP ECX,EDX
0041AC6A  74 03                     JZ 0x0041ac6f
0041AC6C  89 51 0C                  MOV dword ptr [ECX + 0xc],EDX
LAB_0041ac6f:
0041AC6F  8B 40 10                  MOV EAX,dword ptr [EAX + 0x10]
0041AC72  3B C2                     CMP EAX,EDX
0041AC74  74 03                     JZ 0x0041ac79
0041AC76  89 50 0C                  MOV dword ptr [EAX + 0xc],EDX
LAB_0041ac79:
0041AC79  5D                        POP EBP
0041AC7A  C2 04 00                  RET 0x4
