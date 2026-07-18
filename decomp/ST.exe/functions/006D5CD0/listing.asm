FUN_006d5cd0:
006D5CD0  55                        PUSH EBP
006D5CD1  8B EC                     MOV EBP,ESP
006D5CD3  8B 45 10                  MOV EAX,dword ptr [EBP + 0x10]
006D5CD6  56                        PUSH ESI
006D5CD7  57                        PUSH EDI
006D5CD8  8B F1                     MOV ESI,ECX
006D5CDA  8B 4D 0C                  MOV ECX,dword ptr [EBP + 0xc]
006D5CDD  6A 01                     PUSH 0x1
006D5CDF  33 FF                     XOR EDI,EDI
006D5CE1  50                        PUSH EAX
006D5CE2  57                        PUSH EDI
006D5CE3  51                        PUSH ECX
006D5CE4  8B CE                     MOV ECX,ESI
006D5CE6  E8 39 33 07 00            CALL 0x00749024
006D5CEB  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
006D5CEE  89 7E 58                  MOV dword ptr [ESI + 0x58],EDI
006D5CF1  89 7E 60                  MOV dword ptr [ESI + 0x60],EDI
006D5CF4  89 7E 64                  MOV dword ptr [ESI + 0x64],EDI
006D5CF7  89 7E 6C                  MOV dword ptr [ESI + 0x6c],EDI
006D5CFA  89 7E 68                  MOV dword ptr [ESI + 0x68],EDI
006D5CFD  89 7E 70                  MOV dword ptr [ESI + 0x70],EDI
006D5D00  89 56 5C                  MOV dword ptr [ESI + 0x5c],EDX
006D5D03  C7 06 1C DD 79 00         MOV dword ptr [ESI],0x79dd1c
006D5D09  C7 46 0C F8 DC 79 00      MOV dword ptr [ESI + 0xc],0x79dcf8
006D5D10  8B C6                     MOV EAX,ESI
006D5D12  5F                        POP EDI
006D5D13  5E                        POP ESI
006D5D14  5D                        POP EBP
006D5D15  C2 0C 00                  RET 0xc
