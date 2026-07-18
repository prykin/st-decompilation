FUN_006d5720:
006D5720  55                        PUSH EBP
006D5721  8B EC                     MOV EBP,ESP
006D5723  8B 45 18                  MOV EAX,dword ptr [EBP + 0x18]
006D5726  56                        PUSH ESI
006D5727  8B F1                     MOV ESI,ECX
006D5729  57                        PUSH EDI
006D572A  8B 4D 14                  MOV ECX,dword ptr [EBP + 0x14]
006D572D  8B 7D 0C                  MOV EDI,dword ptr [EBP + 0xc]
006D5730  50                        PUSH EAX
006D5731  51                        PUSH ECX
006D5732  57                        PUSH EDI
006D5733  8B CE                     MOV ECX,ESI
006D5735  E8 25 52 07 00            CALL 0x0074a95f
006D573A  8B 55 10                  MOV EDX,dword ptr [EBP + 0x10]
006D573D  89 BE E0 00 00 00         MOV dword ptr [ESI + 0xe0],EDI
006D5743  89 96 E4 00 00 00         MOV dword ptr [ESI + 0xe4],EDX
006D5749  C7 06 BC DC 79 00         MOV dword ptr [ESI],0x79dcbc
006D574F  C7 46 0C 74 DC 79 00      MOV dword ptr [ESI + 0xc],0x79dc74
006D5756  C7 46 10 60 DC 79 00      MOV dword ptr [ESI + 0x10],0x79dc60
006D575D  C7 86 98 00 00 00 3C DC 79 00  MOV dword ptr [ESI + 0x98],0x79dc3c
006D5767  C7 86 E8 00 00 00 00 00 00 00  MOV dword ptr [ESI + 0xe8],0x0
006D5771  8B C6                     MOV EAX,ESI
006D5773  5F                        POP EDI
006D5774  5E                        POP ESI
006D5775  5D                        POP EBP
006D5776  C2 14 00                  RET 0x14
