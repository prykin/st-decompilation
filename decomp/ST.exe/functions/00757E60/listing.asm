FUN_00757e60:
00757E60  55                        PUSH EBP
00757E61  8B EC                     MOV EBP,ESP
00757E63  56                        PUSH ESI
00757E64  8B 75 08                  MOV ESI,dword ptr [EBP + 0x8]
00757E67  6A 60                     PUSH 0x60
00757E69  6A 00                     PUSH 0x0
00757E6B  8B 06                     MOV EAX,dword ptr [ESI]
00757E6D  56                        PUSH ESI
00757E6E  FF 10                     CALL dword ptr [EAX]
00757E70  89 86 A6 01 00 00         MOV dword ptr [ESI + 0x1a6],EAX
00757E76  C7 00 90 91 75 00         MOV dword ptr [EAX],0x759190
00757E7C  8B 8E A6 01 00 00         MOV ECX,dword ptr [ESI + 0x1a6]
00757E82  C7 41 04 70 81 75 00      MOV dword ptr [ECX + 0x4],0x758170
00757E89  8B 96 A6 01 00 00         MOV EDX,dword ptr [ESI + 0x1a6]
00757E8F  C7 42 08 20 91 75 00      MOV dword ptr [EDX + 0x8],0x759120
00757E96  8B 86 A6 01 00 00         MOV EAX,dword ptr [ESI + 0x1a6]
00757E9C  C7 40 0C 00 81 75 00      MOV dword ptr [EAX + 0xc],0x758100
00757EA3  B8 10 00 00 00            MOV EAX,0x10
LAB_00757ea8:
00757EA8  8B 8E A6 01 00 00         MOV ECX,dword ptr [ESI + 0x1a6]
00757EAE  83 C0 04                  ADD EAX,0x4
00757EB1  83 F8 50                  CMP EAX,0x50
00757EB4  C7 44 08 FC 00 81 75 00   MOV dword ptr [EAX + ECX*0x1 + -0x4],0x758100
00757EBC  7C EA                     JL 0x00757ea8
00757EBE  8B 96 A6 01 00 00         MOV EDX,dword ptr [ESI + 0x1a6]
00757EC4  56                        PUSH ESI
00757EC5  C7 42 10 F0 7E 75 00      MOV dword ptr [EDX + 0x10],0x757ef0
00757ECC  8B 86 A6 01 00 00         MOV EAX,dword ptr [ESI + 0x1a6]
00757ED2  C7 40 48 10 80 75 00      MOV dword ptr [EAX + 0x48],0x758010
00757ED9  E8 B2 12 00 00            CALL 0x00759190
00757EDE  5E                        POP ESI
00757EDF  5D                        POP EBP
00757EE0  C2 04 00                  RET 0x4
