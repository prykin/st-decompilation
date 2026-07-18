FUN_00680710:
00680710  55                        PUSH EBP
00680711  8B EC                     MOV EBP,ESP
00680713  81 EC 00 04 00 00         SUB ESP,0x400
00680719  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
0068071C  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
0068071F  56                        PUSH ESI
00680720  57                        PUSH EDI
00680721  6A 00                     PUSH 0x0
00680723  50                        PUSH EAX
00680724  6A 02                     PUSH 0x2
00680726  51                        PUSH ECX
00680727  68 45 03 00 00            PUSH 0x345
0068072C  E8 8F 07 07 00            CALL 0x006f0ec0
00680731  8B 15 18 76 80 00         MOV EDX,dword ptr [0x00807618]
00680737  8B F8                     MOV EDI,EAX
00680739  83 C4 14                  ADD ESP,0x14
0068073C  8D B7 31 02 00 00         LEA ESI,[EDI + 0x231]
00680742  56                        PUSH ESI
00680743  52                        PUSH EDX
00680744  68 58 1B 00 00            PUSH 0x1b58
00680749  E8 F2 F9 02 00            CALL 0x006b0140
0068074E  50                        PUSH EAX
0068074F  8D 85 00 FC FF FF         LEA EAX,[EBP + 0xfffffc00]
00680755  50                        PUSH EAX
00680756  FF 15 E8 BD 85 00         CALL dword ptr [0x0085bde8]
0068075C  56                        PUSH ESI
0068075D  E8 9C 3C D8 FF            CALL 0x004043fe
00680762  8D 8D 00 FC FF FF         LEA ECX,[EBP + 0xfffffc00]
00680768  51                        PUSH ECX
00680769  E8 20 39 D8 FF            CALL 0x0040408e
0068076E  56                        PUSH ESI
0068076F  E8 9C 1B D8 FF            CALL 0x00402310
00680774  8D 95 00 FC FF FF         LEA EDX,[EBP + 0xfffffc00]
0068077A  52                        PUSH EDX
0068077B  E8 C5 27 D8 FF            CALL 0x00402f45
00680780  83 C4 1C                  ADD ESP,0x1c
00680783  8B C7                     MOV EAX,EDI
00680785  C7 05 10 8A 84 00 00 00 00 00  MOV dword ptr [0x00848a10],0x0
0068078F  C7 05 0C 8A 84 00 00 00 00 00  MOV dword ptr [0x00848a0c],0x0
00680799  5F                        POP EDI
0068079A  5E                        POP ESI
0068079B  8B E5                     MOV ESP,EBP
0068079D  5D                        POP EBP
0068079E  C3                        RET
