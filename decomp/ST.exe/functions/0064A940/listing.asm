FUN_0064a940:
0064A940  55                        PUSH EBP
0064A941  8B EC                     MOV EBP,ESP
0064A943  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
0064A946  85 C0                     TEST EAX,EAX
0064A948  7C 12                     JL 0x0064a95c
0064A94A  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
0064A94D  3B 41 04                  CMP EAX,dword ptr [ECX + 0x4]
0064A950  7F 0A                     JG 0x0064a95c
0064A952  89 41 04                  MOV dword ptr [ECX + 0x4],EAX
0064A955  B8 01 00 00 00            MOV EAX,0x1
0064A95A  5D                        POP EBP
0064A95B  C3                        RET
LAB_0064a95c:
0064A95C  33 C0                     XOR EAX,EAX
0064A95E  5D                        POP EBP
0064A95F  C3                        RET
