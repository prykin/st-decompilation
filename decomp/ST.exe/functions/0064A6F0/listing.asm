FUN_0064a6f0:
0064A6F0  55                        PUSH EBP
0064A6F1  8B EC                     MOV EBP,ESP
0064A6F3  83 EC 44                  SUB ESP,0x44
0064A6F6  A1 F8 8D 85 00            MOV EAX,[0x00858df8]
0064A6FB  56                        PUSH ESI
0064A6FC  8D 55 C0                  LEA EDX,[EBP + -0x40]
0064A6FF  8D 4D BC                  LEA ECX,[EBP + -0x44]
0064A702  6A 00                     PUSH 0x0
0064A704  52                        PUSH EDX
0064A705  89 45 BC                  MOV dword ptr [EBP + -0x44],EAX
0064A708  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
0064A70E  E8 DD 30 0E 00            CALL 0x0072d7f0
0064A713  8B F0                     MOV ESI,EAX
0064A715  83 C4 08                  ADD ESP,0x8
0064A718  85 F6                     TEST ESI,ESI
0064A71A  75 4E                     JNZ 0x0064a76a
0064A71C  8B 75 08                  MOV ESI,dword ptr [EBP + 0x8]
0064A71F  85 F6                     TEST ESI,ESI
0064A721  75 14                     JNZ 0x0064a737
0064A723  A1 7C D7 7E 00            MOV EAX,[0x007ed77c]
0064A728  6A 25                     PUSH 0x25
0064A72A  68 04 2A 7D 00            PUSH 0x7d2a04
0064A72F  50                        PUSH EAX
0064A730  6A CC                     PUSH -0x34
0064A732  E8 09 B7 05 00            CALL 0x006a5e40
LAB_0064a737:
0064A737  56                        PUSH ESI
0064A738  E8 67 88 DB FF            CALL 0x00402fa4
0064A73D  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
0064A740  83 C4 04                  ADD ESP,0x4
0064A743  85 C0                     TEST EAX,EAX
0064A745  7F 05                     JG 0x0064a74c
0064A747  B8 0A 00 00 00            MOV EAX,0xa
LAB_0064a74c:
0064A74C  8D 0C 80                  LEA ECX,[EAX + EAX*0x4]
0064A74F  89 06                     MOV dword ptr [ESI],EAX
0064A751  51                        PUSH ECX
0064A752  E8 B9 04 06 00            CALL 0x006aac10
0064A757  8B 55 BC                  MOV EDX,dword ptr [EBP + -0x44]
0064A75A  89 46 08                  MOV dword ptr [ESI + 0x8],EAX
0064A75D  89 15 F8 8D 85 00         MOV dword ptr [0x00858df8],EDX
0064A763  33 C0                     XOR EAX,EAX
0064A765  5E                        POP ESI
0064A766  8B E5                     MOV ESP,EBP
0064A768  5D                        POP EBP
0064A769  C3                        RET
LAB_0064a76a:
0064A76A  8B 45 BC                  MOV EAX,dword ptr [EBP + -0x44]
0064A76D  6A 2A                     PUSH 0x2a
0064A76F  68 04 2A 7D 00            PUSH 0x7d2a04
0064A774  6A 00                     PUSH 0x0
0064A776  56                        PUSH ESI
0064A777  A3 F8 8D 85 00            MOV [0x00858df8],EAX
0064A77C  E8 BF B6 05 00            CALL 0x006a5e40
0064A781  8B C6                     MOV EAX,ESI
0064A783  5E                        POP ESI
0064A784  8B E5                     MOV ESP,EBP
0064A786  5D                        POP EBP
0064A787  C3                        RET
