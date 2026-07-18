FUN_004e3790:
004E3790  55                        PUSH EBP
004E3791  8B EC                     MOV EBP,ESP
004E3793  8B 45 10                  MOV EAX,dword ptr [EBP + 0x10]
004E3796  53                        PUSH EBX
004E3797  8B 5D 08                  MOV EBX,dword ptr [EBP + 0x8]
004E379A  56                        PUSH ESI
004E379B  57                        PUSH EDI
004E379C  6A 01                     PUSH 0x1
004E379E  50                        PUSH EAX
004E379F  6A 01                     PUSH 0x1
004E37A1  53                        PUSH EBX
004E37A2  8B F1                     MOV ESI,ECX
004E37A4  6A 02                     PUSH 0x2
004E37A6  E8 23 23 F2 FF            CALL 0x00405ace
004E37AB  8B F8                     MOV EDI,EAX
004E37AD  85 FF                     TEST EDI,EDI
004E37AF  74 21                     JZ 0x004e37d2
004E37B1  8B 4E 24                  MOV ECX,dword ptr [ESI + 0x24]
004E37B4  53                        PUSH EBX
004E37B5  51                        PUSH ECX
004E37B6  8B 0D 74 A1 7F 00         MOV ECX,dword ptr [0x007fa174]
004E37BC  E8 AA E0 F1 FF            CALL 0x0040186b
004E37C1  8B 55 0C                  MOV EDX,dword ptr [EBP + 0xc]
004E37C4  4A                        DEC EDX
004E37C5  3B C2                     CMP EAX,EDX
004E37C7  74 09                     JZ 0x004e37d2
004E37C9  5F                        POP EDI
004E37CA  5E                        POP ESI
004E37CB  33 C0                     XOR EAX,EAX
004E37CD  5B                        POP EBX
004E37CE  5D                        POP EBP
004E37CF  C2 0C 00                  RET 0xc
LAB_004e37d2:
004E37D2  8B C7                     MOV EAX,EDI
004E37D4  5F                        POP EDI
004E37D5  5E                        POP ESI
004E37D6  5B                        POP EBX
004E37D7  5D                        POP EBP
004E37D8  C2 0C 00                  RET 0xc
