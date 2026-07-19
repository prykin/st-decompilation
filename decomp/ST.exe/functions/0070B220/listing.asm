mfImtGetNumIms:
0070B220  55                        PUSH EBP
0070B221  8B EC                     MOV EBP,ESP
0070B223  83 EC 50                  SUB ESP,0x50
0070B226  A1 F8 8D 85 00            MOV EAX,[0x00858df8]
0070B22B  56                        PUSH ESI
0070B22C  8D 55 B4                  LEA EDX,[EBP + -0x4c]
0070B22F  8D 4D B0                  LEA ECX,[EBP + -0x50]
0070B232  6A 00                     PUSH 0x0
0070B234  52                        PUSH EDX
0070B235  89 45 B0                  MOV dword ptr [EBP + -0x50],EAX
0070B238  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
0070B23E  E8 AD 25 02 00            CALL 0x0072d7f0
0070B243  8B F0                     MOV ESI,EAX
0070B245  83 C4 08                  ADD ESP,0x8
0070B248  85 F6                     TEST ESI,ESI
0070B24A  75 3E                     JNZ 0x0070b28a
0070B24C  8B 45 10                  MOV EAX,dword ptr [EBP + 0x10]
0070B24F  8B 55 0C                  MOV EDX,dword ptr [EBP + 0xc]
0070B252  8D 4D F4                  LEA ECX,[EBP + -0xc]
0070B255  50                        PUSH EAX
0070B256  51                        PUSH ECX
0070B257  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
0070B25A  52                        PUSH EDX
0070B25B  6A 0B                     PUSH 0xb
0070B25D  E8 AE 70 FE FF            CALL 0x006f2310
0070B262  85 C0                     TEST EAX,EAX
0070B264  75 12                     JNZ 0x0070b278
0070B266  8B 45 B0                  MOV EAX,dword ptr [EBP + -0x50]
0070B269  A3 F8 8D 85 00            MOV [0x00858df8],EAX
0070B26E  B8 FC FF FF FF            MOV EAX,0xfffffffc
0070B273  5E                        POP ESI
0070B274  8B E5                     MOV ESP,EBP
0070B276  5D                        POP EBP
0070B277  C3                        RET
LAB_0070b278:
0070B278  8B 4D B0                  MOV ECX,dword ptr [EBP + -0x50]
0070B27B  0F BF 45 F4               MOVSX EAX,word ptr [EBP + -0xc]
0070B27F  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
0070B285  5E                        POP ESI
0070B286  8B E5                     MOV ESP,EBP
0070B288  5D                        POP EBP
0070B289  C3                        RET
LAB_0070b28a:
0070B28A  8B 55 B0                  MOV EDX,dword ptr [EBP + -0x50]
0070B28D  68 8C 00 7F 00            PUSH 0x7f008c
0070B292  68 CC 4C 7A 00            PUSH 0x7a4ccc
0070B297  56                        PUSH ESI
0070B298  6A 00                     PUSH 0x0
0070B29A  68 FE 01 00 00            PUSH 0x1fe
0070B29F  68 E0 FF 7E 00            PUSH 0x7effe0
0070B2A4  89 15 F8 8D 85 00         MOV dword ptr [0x00858df8],EDX
0070B2AA  E8 21 22 FA FF            CALL 0x006ad4d0
0070B2AF  83 C4 18                  ADD ESP,0x18
0070B2B2  85 C0                     TEST EAX,EAX
0070B2B4  74 01                     JZ 0x0070b2b7
0070B2B6  CC                        INT3
LAB_0070b2b7:
0070B2B7  68 00 02 00 00            PUSH 0x200
0070B2BC  68 E0 FF 7E 00            PUSH 0x7effe0
0070B2C1  6A 00                     PUSH 0x0
0070B2C3  56                        PUSH ESI
0070B2C4  E8 77 AB F9 FF            CALL 0x006a5e40
0070B2C9  85 F6                     TEST ESI,ESI
0070B2CB  7D 07                     JGE 0x0070b2d4
0070B2CD  8B C6                     MOV EAX,ESI
0070B2CF  5E                        POP ESI
0070B2D0  8B E5                     MOV ESP,EBP
0070B2D2  5D                        POP EBP
0070B2D3  C3                        RET
LAB_0070b2d4:
0070B2D4  83 C8 FF                  OR EAX,0xffffffff
0070B2D7  5E                        POP ESI
0070B2D8  8B E5                     MOV ESP,EBP
0070B2DA  5D                        POP EBP
0070B2DB  C3                        RET
