FUN_0062af40:
0062AF40  55                        PUSH EBP
0062AF41  8B EC                     MOV EBP,ESP
0062AF43  56                        PUSH ESI
0062AF44  8B F1                     MOV ESI,ECX
0062AF46  68 D7 00 00 00            PUSH 0xd7
0062AF4B  E8 20 FD 07 00            CALL 0x006aac70
0062AF50  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
0062AF53  85 C0                     TEST EAX,EAX
0062AF55  C7 02 00 00 00 00         MOV dword ptr [EDX],0x0
0062AF5B  74 1B                     JZ 0x0062af78
0062AF5D  57                        PUSH EDI
0062AF5E  B9 35 00 00 00            MOV ECX,0x35
0062AF63  8B F8                     MOV EDI,EAX
0062AF65  F3 A5                     MOVSD.REP ES:EDI,ESI
0062AF67  66 A5                     MOVSW ES:EDI,ESI
0062AF69  A4                        MOVSB ES:EDI,ESI
0062AF6A  C7 40 0C 02 00 00 00      MOV dword ptr [EAX + 0xc],0x2
0062AF71  C7 02 D7 00 00 00         MOV dword ptr [EDX],0xd7
0062AF77  5F                        POP EDI
LAB_0062af78:
0062AF78  5E                        POP ESI
0062AF79  5D                        POP EBP
0062AF7A  C2 04 00                  RET 0x4
