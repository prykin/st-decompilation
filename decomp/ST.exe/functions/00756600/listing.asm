FUN_00756600:
00756600  55                        PUSH EBP
00756601  8B EC                     MOV EBP,ESP
00756603  56                        PUSH ESI
00756604  8B 75 08                  MOV ESI,dword ptr [EBP + 0x8]
00756607  8B 46 0C                  MOV EAX,dword ptr [ESI + 0xc]
0075660A  3D CA 00 00 00            CMP EAX,0xca
0075660F  7C 07                     JL 0x00756618
00756611  3D D2 00 00 00            CMP EAX,0xd2
00756616  7E 25                     JLE 0x0075663d
LAB_00756618:
00756618  A1 7C D7 7E 00            MOV EAX,[0x007ed77c]
0075661D  68 6D 01 00 00            PUSH 0x16d
00756622  68 38 2D 7F 00            PUSH 0x7f2d38
00756627  50                        PUSH EAX
00756628  6A 12                     PUSH 0x12
0075662A  E8 11 F8 F4 FF            CALL 0x006a5e40
0075662F  8B 8E A2 01 00 00         MOV ECX,dword ptr [ESI + 0x1a2]
00756635  5E                        POP ESI
00756636  8B 41 10                  MOV EAX,dword ptr [ECX + 0x10]
00756639  5D                        POP EBP
0075663A  C2 04 00                  RET 0x4
LAB_0075663d:
0075663D  8B 96 A2 01 00 00         MOV EDX,dword ptr [ESI + 0x1a2]
00756643  5E                        POP ESI
00756644  8B 42 10                  MOV EAX,dword ptr [EDX + 0x10]
00756647  5D                        POP EBP
00756648  C2 04 00                  RET 0x4
