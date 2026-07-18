FUN_006f1cb0:
006F1CB0  55                        PUSH EBP
006F1CB1  8B EC                     MOV EBP,ESP
006F1CB3  8B 01                     MOV EAX,dword ptr [ECX]
006F1CB5  8B 40 04                  MOV EAX,dword ptr [EAX + 0x4]
006F1CB8  F7 40 08 00 00 10 00      TEST dword ptr [EAX + 0x8],0x100000
006F1CBF  74 06                     JZ 0x006f1cc7
006F1CC1  33 C0                     XOR EAX,EAX
006F1CC3  5D                        POP EBP
006F1CC4  C2 04 00                  RET 0x4
LAB_006f1cc7:
006F1CC7  8B 40 34                  MOV EAX,dword ptr [EAX + 0x34]
006F1CCA  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
006F1CCD  03 C1                     ADD EAX,ECX
006F1CCF  5D                        POP EBP
006F1CD0  C2 04 00                  RET 0x4
