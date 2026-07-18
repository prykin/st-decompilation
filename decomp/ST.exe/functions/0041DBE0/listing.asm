FUN_0041dbe0:
0041DBE0  55                        PUSH EBP
0041DBE1  8B EC                     MOV EBP,ESP
0041DBE3  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
0041DBE6  8B 4D 10                  MOV ECX,dword ptr [EBP + 0x10]
0041DBE9  8B 55 14                  MOV EDX,dword ptr [EBP + 0x14]
0041DBEC  66 C7 00 00 00            MOV word ptr [EAX],0x0
0041DBF1  8B 45 18                  MOV EAX,dword ptr [EBP + 0x18]
0041DBF4  66 C7 01 00 00            MOV word ptr [ECX],0x0
0041DBF9  66 C7 02 00 00            MOV word ptr [EDX],0x0
0041DBFE  C7 00 00 00 00 00         MOV dword ptr [EAX],0x0
0041DC04  33 C0                     XOR EAX,EAX
0041DC06  5D                        POP EBP
0041DC07  C2 14 00                  RET 0x14
