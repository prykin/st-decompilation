FUN_00680590:
00680590  55                        PUSH EBP
00680591  8B EC                     MOV EBP,ESP
00680593  81 EC 00 04 00 00         SUB ESP,0x400
00680599  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
0068059C  56                        PUSH ESI
0068059D  57                        PUSH EDI
0068059E  6A 00                     PUSH 0x0
006805A0  6A 00                     PUSH 0x0
006805A2  6A 00                     PUSH 0x0
006805A4  50                        PUSH EAX
006805A5  68 45 03 00 00            PUSH 0x345
006805AA  E8 11 09 07 00            CALL 0x006f0ec0
006805AF  8B 0D 18 76 80 00         MOV ECX,dword ptr [0x00807618]
006805B5  8B F8                     MOV EDI,EAX
006805B7  83 C4 14                  ADD ESP,0x14
006805BA  8D B7 31 02 00 00         LEA ESI,[EDI + 0x231]
006805C0  56                        PUSH ESI
006805C1  51                        PUSH ECX
006805C2  68 58 1B 00 00            PUSH 0x1b58
006805C7  E8 74 FB 02 00            CALL 0x006b0140
006805CC  8D 95 00 FC FF FF         LEA EDX,[EBP + 0xfffffc00]
006805D2  50                        PUSH EAX
006805D3  52                        PUSH EDX
006805D4  FF 15 E8 BD 85 00         CALL dword ptr [0x0085bde8]
006805DA  56                        PUSH ESI
006805DB  E8 1E 3E D8 FF            CALL 0x004043fe
006805E0  8D 85 00 FC FF FF         LEA EAX,[EBP + 0xfffffc00]
006805E6  50                        PUSH EAX
006805E7  E8 A2 3A D8 FF            CALL 0x0040408e
006805EC  56                        PUSH ESI
006805ED  E8 1E 1D D8 FF            CALL 0x00402310
006805F2  8D 8D 00 FC FF FF         LEA ECX,[EBP + 0xfffffc00]
006805F8  51                        PUSH ECX
006805F9  E8 47 29 D8 FF            CALL 0x00402f45
006805FE  83 C4 1C                  ADD ESP,0x1c
00680601  8B C7                     MOV EAX,EDI
00680603  C7 05 10 8A 84 00 00 00 00 00  MOV dword ptr [0x00848a10],0x0
0068060D  C7 05 0C 8A 84 00 00 00 00 00  MOV dword ptr [0x00848a0c],0x0
00680617  5F                        POP EDI
00680618  5E                        POP ESI
00680619  8B E5                     MOV ESP,EBP
0068061B  5D                        POP EBP
0068061C  C3                        RET
