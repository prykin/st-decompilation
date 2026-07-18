FUN_007562e0:
007562E0  55                        PUSH EBP
007562E1  8B EC                     MOV EBP,ESP
007562E3  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
007562E6  3D FE 00 00 00            CMP EAX,0xfe
007562EB  75 13                     JNZ 0x00756300
007562ED  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
007562F0  8B 55 10                  MOV EDX,dword ptr [EBP + 0x10]
007562F3  8B 88 A6 01 00 00         MOV ECX,dword ptr [EAX + 0x1a6]
007562F9  89 51 0C                  MOV dword ptr [ECX + 0xc],EDX
007562FC  5D                        POP EBP
007562FD  C2 0C 00                  RET 0xc
LAB_00756300:
00756300  3D E0 00 00 00            CMP EAX,0xe0
00756305  7C 1E                     JL 0x00756325
00756307  3D EF 00 00 00            CMP EAX,0xef
0075630C  7F 17                     JG 0x00756325
0075630E  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
00756311  8B 91 A6 01 00 00         MOV EDX,dword ptr [ECX + 0x1a6]
00756317  8B 4D 10                  MOV ECX,dword ptr [EBP + 0x10]
0075631A  89 8C 82 90 FC FF FF      MOV dword ptr [EDX + EAX*0x4 + 0xfffffc90],ECX
00756321  5D                        POP EBP
00756322  C2 0C 00                  RET 0xc
LAB_00756325:
00756325  8B 15 7C D7 7E 00         MOV EDX,dword ptr [0x007ed77c]
0075632B  6A 74                     PUSH 0x74
0075632D  68 38 2D 7F 00            PUSH 0x7f2d38
00756332  52                        PUSH EDX
00756333  6A 43                     PUSH 0x43
00756335  E8 06 FB F4 FF            CALL 0x006a5e40
0075633A  5D                        POP EBP
0075633B  C2 0C 00                  RET 0xc
