FUN_0053a6b0:
0053A6B0  55                        PUSH EBP
0053A6B1  8B EC                     MOV EBP,ESP
0053A6B3  83 EC 48                  SUB ESP,0x48
0053A6B6  A1 F8 8D 85 00            MOV EAX,[0x00858df8]
0053A6BB  56                        PUSH ESI
0053A6BC  89 4D FC                  MOV dword ptr [EBP + -0x4],ECX
0053A6BF  57                        PUSH EDI
0053A6C0  8D 55 BC                  LEA EDX,[EBP + -0x44]
0053A6C3  8D 4D B8                  LEA ECX,[EBP + -0x48]
0053A6C6  6A 00                     PUSH 0x0
0053A6C8  52                        PUSH EDX
0053A6C9  89 45 B8                  MOV dword ptr [EBP + -0x48],EAX
0053A6CC  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
0053A6D2  E8 19 31 1F 00            CALL 0x0072d7f0
0053A6D7  8B F0                     MOV ESI,EAX
0053A6D9  83 C4 08                  ADD ESP,0x8
0053A6DC  85 F6                     TEST ESI,ESI
0053A6DE  0F 85 9A 00 00 00         JNZ 0x0053a77e
0053A6E4  8B 75 FC                  MOV ESI,dword ptr [EBP + -0x4]
0053A6E7  8B 7D 08                  MOV EDI,dword ptr [EBP + 0x8]
0053A6EA  66 8B 86 72 01 00 00      MOV AX,word ptr [ESI + 0x172]
0053A6F1  48                        DEC EAX
0053A6F2  74 54                     JZ 0x0053a748
0053A6F4  48                        DEC EAX
0053A6F5  74 13                     JZ 0x0053a70a
0053A6F7  48                        DEC EAX
0053A6F8  74 5A                     JZ 0x0053a754
0053A6FA  8B 45 B8                  MOV EAX,dword ptr [EBP + -0x48]
0053A6FD  A3 F8 8D 85 00            MOV [0x00858df8],EAX
0053A702  5F                        POP EDI
0053A703  5E                        POP ESI
0053A704  8B E5                     MOV ESP,EBP
0053A706  5D                        POP EBP
0053A707  C2 04 00                  RET 0x4
LAB_0053a70a:
0053A70A  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
0053A70D  85 C0                     TEST EAX,EAX
0053A70F  74 5D                     JZ 0x0053a76e
0053A711  68 AF 00 00 00            PUSH 0xaf
0053A716  66 C7 86 72 01 00 00 03 00  MOV word ptr [ESI + 0x172],0x3
0053A71F  E8 0B B7 EC FF            CALL 0x00405e2f
0053A724  8B 0D 88 16 80 00         MOV ECX,dword ptr [0x00801688]
0053A72A  83 C4 04                  ADD ESP,0x4
0053A72D  85 C9                     TEST ECX,ECX
0053A72F  74 3D                     JZ 0x0053a76e
0053A731  6A 00                     PUSH 0x0
0053A733  E8 9A 87 EC FF            CALL 0x00402ed2
0053A738  8B 45 B8                  MOV EAX,dword ptr [EBP + -0x48]
0053A73B  A3 F8 8D 85 00            MOV [0x00858df8],EAX
0053A740  5F                        POP EDI
0053A741  5E                        POP ESI
0053A742  8B E5                     MOV ESP,EBP
0053A744  5D                        POP EBP
0053A745  C2 04 00                  RET 0x4
LAB_0053a748:
0053A748  85 FF                     TEST EDI,EDI
0053A74A  75 22                     JNZ 0x0053a76e
0053A74C  57                        PUSH EDI
0053A74D  8B CE                     MOV ECX,ESI
0053A74F  E8 6A 91 EC FF            CALL 0x004038be
LAB_0053a754:
0053A754  85 FF                     TEST EDI,EDI
0053A756  75 16                     JNZ 0x0053a76e
0053A758  68 B0 00 00 00            PUSH 0xb0
0053A75D  66 C7 86 72 01 00 00 04 00  MOV word ptr [ESI + 0x172],0x4
0053A766  E8 C4 B6 EC FF            CALL 0x00405e2f
0053A76B  83 C4 04                  ADD ESP,0x4
LAB_0053a76e:
0053A76E  8B 45 B8                  MOV EAX,dword ptr [EBP + -0x48]
0053A771  A3 F8 8D 85 00            MOV [0x00858df8],EAX
0053A776  5F                        POP EDI
0053A777  5E                        POP ESI
0053A778  8B E5                     MOV ESP,EBP
0053A77A  5D                        POP EBP
0053A77B  C2 04 00                  RET 0x4
LAB_0053a77e:
0053A77E  8B 4D B8                  MOV ECX,dword ptr [EBP + -0x48]
0053A781  68 28 76 7C 00            PUSH 0x7c7628
0053A786  68 CC 4C 7A 00            PUSH 0x7a4ccc
0053A78B  56                        PUSH ESI
0053A78C  6A 00                     PUSH 0x0
0053A78E  68 CB 00 00 00            PUSH 0xcb
0053A793  68 74 75 7C 00            PUSH 0x7c7574
0053A798  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
0053A79E  E8 2D 2D 17 00            CALL 0x006ad4d0
0053A7A3  83 C4 18                  ADD ESP,0x18
0053A7A6  85 C0                     TEST EAX,EAX
0053A7A8  74 01                     JZ 0x0053a7ab
0053A7AA  CC                        INT3
LAB_0053a7ab:
0053A7AB  68 CB 00 00 00            PUSH 0xcb
0053A7B0  68 74 75 7C 00            PUSH 0x7c7574
0053A7B5  6A 00                     PUSH 0x0
0053A7B7  56                        PUSH ESI
0053A7B8  E8 83 B6 16 00            CALL 0x006a5e40
0053A7BD  5F                        POP EDI
0053A7BE  5E                        POP ESI
0053A7BF  8B E5                     MOV ESP,EBP
0053A7C1  5D                        POP EBP
0053A7C2  C2 04 00                  RET 0x4
