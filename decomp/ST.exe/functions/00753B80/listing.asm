FUN_00753b80:
00753B80  55                        PUSH EBP
00753B81  8B EC                     MOV EBP,ESP
00753B83  8B 55 10                  MOV EDX,dword ptr [EBP + 0x10]
00753B86  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
00753B89  85 D2                     TEST EDX,EDX
00753B8B  75 08                     JNZ 0x00753b95
00753B8D  8B 41 0C                  MOV EAX,dword ptr [ECX + 0xc]
00753B90  8B 40 24                  MOV EAX,dword ptr [EAX + 0x24]
00753B93  EB 03                     JMP 0x00753b98
LAB_00753b95:
00753B95  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
LAB_00753b98:
00753B98  89 41 10                  MOV dword ptr [ECX + 0x10],EAX
00753B9B  8B 41 08                  MOV EAX,dword ptr [ECX + 0x8]
00753B9E  56                        PUSH ESI
00753B9F  8B 71 10                  MOV ESI,dword ptr [ECX + 0x10]
00753BA2  8B 40 34                  MOV EAX,dword ptr [EAX + 0x34]
00753BA5  8B 49 0C                  MOV ECX,dword ptr [ECX + 0xc]
00753BA8  03 C6                     ADD EAX,ESI
00753BAA  8B 30                     MOV ESI,dword ptr [EAX]
00753BAC  89 74 D1 40               MOV dword ptr [ECX + EDX*0x8 + 0x40],ESI
00753BB0  5E                        POP ESI
00753BB1  5D                        POP EBP
00753BB2  C2 0C 00                  RET 0xc
