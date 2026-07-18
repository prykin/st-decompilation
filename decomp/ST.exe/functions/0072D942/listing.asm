FUN_0072d942:
0072D942  53                        PUSH EBX
0072D943  51                        PUSH ECX
0072D944  BB D8 10 7F 00            MOV EBX,0x7f10d8
0072D949  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
0072D94C  89 4B 08                  MOV dword ptr [EBX + 0x8],ECX
0072D94F  89 43 04                  MOV dword ptr [EBX + 0x4],EAX
0072D952  89 6B 0C                  MOV dword ptr [EBX + 0xc],EBP
0072D955  59                        POP ECX
0072D956  5B                        POP EBX
0072D957  C2 04 00                  RET 0x4
