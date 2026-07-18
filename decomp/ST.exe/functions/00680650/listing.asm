FUN_00680650:
00680650  55                        PUSH EBP
00680651  8B EC                     MOV EBP,ESP
00680653  81 EC 00 04 00 00         SUB ESP,0x400
00680659  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
0068065C  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
0068065F  56                        PUSH ESI
00680660  57                        PUSH EDI
00680661  6A 00                     PUSH 0x0
00680663  50                        PUSH EAX
00680664  6A 01                     PUSH 0x1
00680666  51                        PUSH ECX
00680667  68 45 03 00 00            PUSH 0x345
0068066C  E8 4F 08 07 00            CALL 0x006f0ec0
00680671  8B 15 18 76 80 00         MOV EDX,dword ptr [0x00807618]
00680677  8B F8                     MOV EDI,EAX
00680679  83 C4 14                  ADD ESP,0x14
0068067C  8D B7 31 02 00 00         LEA ESI,[EDI + 0x231]
00680682  56                        PUSH ESI
00680683  52                        PUSH EDX
00680684  68 58 1B 00 00            PUSH 0x1b58
00680689  E8 B2 FA 02 00            CALL 0x006b0140
0068068E  50                        PUSH EAX
0068068F  8D 85 00 FC FF FF         LEA EAX,[EBP + 0xfffffc00]
00680695  50                        PUSH EAX
00680696  FF 15 E8 BD 85 00         CALL dword ptr [0x0085bde8]
0068069C  56                        PUSH ESI
0068069D  E8 5C 3D D8 FF            CALL 0x004043fe
006806A2  8D 8D 00 FC FF FF         LEA ECX,[EBP + 0xfffffc00]
006806A8  51                        PUSH ECX
006806A9  E8 E0 39 D8 FF            CALL 0x0040408e
006806AE  56                        PUSH ESI
006806AF  E8 5C 1C D8 FF            CALL 0x00402310
006806B4  8D 95 00 FC FF FF         LEA EDX,[EBP + 0xfffffc00]
006806BA  52                        PUSH EDX
006806BB  E8 85 28 D8 FF            CALL 0x00402f45
006806C0  83 C4 1C                  ADD ESP,0x1c
006806C3  8B C7                     MOV EAX,EDI
006806C5  C7 05 10 8A 84 00 00 00 00 00  MOV dword ptr [0x00848a10],0x0
006806CF  C7 05 0C 8A 84 00 00 00 00 00  MOV dword ptr [0x00848a0c],0x0
006806D9  5F                        POP EDI
006806DA  5E                        POP ESI
006806DB  8B E5                     MOV ESP,EBP
006806DD  5D                        POP EBP
006806DE  C3                        RET
