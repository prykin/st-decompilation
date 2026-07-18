FUN_0062ca70:
0062CA70  55                        PUSH EBP
0062CA71  8B EC                     MOV EBP,ESP
0062CA73  56                        PUSH ESI
0062CA74  6A 6D                     PUSH 0x6d
0062CA76  33 F6                     XOR ESI,ESI
0062CA78  E8 F3 E1 07 00            CALL 0x006aac70
0062CA7D  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
0062CA80  85 C0                     TEST EAX,EAX
0062CA82  89 01                     MOV dword ptr [ECX],EAX
0062CA84  74 17                     JZ 0x0062ca9d
0062CA86  8B 75 0C                  MOV ESI,dword ptr [EBP + 0xc]
0062CA89  57                        PUSH EDI
0062CA8A  B9 1B 00 00 00            MOV ECX,0x1b
0062CA8F  8B F8                     MOV EDI,EAX
0062CA91  F3 A5                     MOVSD.REP ES:EDI,ESI
0062CA93  A4                        MOVSB ES:EDI,ESI
0062CA94  5F                        POP EDI
0062CA95  B8 01 00 00 00            MOV EAX,0x1
0062CA9A  5E                        POP ESI
0062CA9B  5D                        POP EBP
0062CA9C  C3                        RET
LAB_0062ca9d:
0062CA9D  8B C6                     MOV EAX,ESI
0062CA9F  5E                        POP ESI
0062CAA0  5D                        POP EBP
0062CAA1  C3                        RET
