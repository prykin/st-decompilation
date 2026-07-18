FUN_006d70b0:
006D70B0  55                        PUSH EBP
006D70B1  8B EC                     MOV EBP,ESP
006D70B3  8B 45 10                  MOV EAX,dword ptr [EBP + 0x10]
006D70B6  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
006D70B9  56                        PUSH ESI
006D70BA  8B F1                     MOV ESI,ECX
006D70BC  8B 4D 0C                  MOV ECX,dword ptr [EBP + 0xc]
006D70BF  50                        PUSH EAX
006D70C0  68 E0 DA 79 00            PUSH 0x79dae0
006D70C5  51                        PUSH ECX
006D70C6  52                        PUSH EDX
006D70C7  8B CE                     MOV ECX,ESI
006D70C9  E8 84 58 07 00            CALL 0x0074c952
006D70CE  8B 45 14                  MOV EAX,dword ptr [EBP + 0x14]
006D70D1  C7 06 EC DD 79 00         MOV dword ptr [ESI],0x79ddec
006D70D7  89 86 A0 00 00 00         MOV dword ptr [ESI + 0xa0],EAX
006D70DD  C7 46 0C B0 DD 79 00      MOV dword ptr [ESI + 0xc],0x79ddb0
006D70E4  C7 46 10 9C DD 79 00      MOV dword ptr [ESI + 0x10],0x79dd9c
006D70EB  8B C6                     MOV EAX,ESI
006D70ED  5E                        POP ESI
006D70EE  5D                        POP EBP
006D70EF  C2 10 00                  RET 0x10
