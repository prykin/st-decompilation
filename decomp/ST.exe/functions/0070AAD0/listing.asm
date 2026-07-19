mfGifLoadToDib:
0070AAD0  55                        PUSH EBP
0070AAD1  8B EC                     MOV EBP,ESP
0070AAD3  83 EC 50                  SUB ESP,0x50
0070AAD6  A1 F8 8D 85 00            MOV EAX,[0x00858df8]
0070AADB  53                        PUSH EBX
0070AADC  56                        PUSH ESI
0070AADD  8D 55 B4                  LEA EDX,[EBP + -0x4c]
0070AAE0  8D 4D B0                  LEA ECX,[EBP + -0x50]
0070AAE3  6A 00                     PUSH 0x0
0070AAE5  52                        PUSH EDX
0070AAE6  C7 45 F8 00 00 00 00      MOV dword ptr [EBP + -0x8],0x0
0070AAED  C7 45 FC 00 00 00 00      MOV dword ptr [EBP + -0x4],0x0
0070AAF4  C7 45 F4 00 00 00 00      MOV dword ptr [EBP + -0xc],0x0
0070AAFB  89 45 B0                  MOV dword ptr [EBP + -0x50],EAX
0070AAFE  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
0070AB04  E8 E7 2C 02 00            CALL 0x0072d7f0
0070AB09  8B F0                     MOV ESI,EAX
0070AB0B  83 C4 08                  ADD ESP,0x8
0070AB0E  85 F6                     TEST ESI,ESI
0070AB10  75 6A                     JNZ 0x0070ab7c
0070AB12  8B 45 10                  MOV EAX,dword ptr [EBP + 0x10]
0070AB15  8B 4D 0C                  MOV ECX,dword ptr [EBP + 0xc]
0070AB18  8B 5D 08                  MOV EBX,dword ptr [EBP + 0x8]
0070AB1B  50                        PUSH EAX
0070AB1C  56                        PUSH ESI
0070AB1D  51                        PUSH ECX
0070AB1E  53                        PUSH EBX
0070AB1F  E8 8C FF FF FF            CALL 0x0070aab0
0070AB24  83 C4 10                  ADD ESP,0x10
0070AB27  89 45 F8                  MOV dword ptr [EBP + -0x8],EAX
0070AB2A  85 C0                     TEST EAX,EAX
0070AB2C  75 0F                     JNZ 0x0070ab3d
0070AB2E  8B 55 B0                  MOV EDX,dword ptr [EBP + -0x50]
0070AB31  89 15 F8 8D 85 00         MOV dword ptr [0x00858df8],EDX
0070AB37  5E                        POP ESI
0070AB38  5B                        POP EBX
0070AB39  8B E5                     MOV ESP,EBP
0070AB3B  5D                        POP EBP
0070AB3C  C3                        RET
LAB_0070ab3d:
0070AB3D  50                        PUSH EAX
0070AB3E  E8 7D D2 FB FF            CALL 0x006c7dc0
0070AB43  8B F0                     MOV ESI,EAX
0070AB45  6A 00                     PUSH 0x0
0070AB47  6A 00                     PUSH 0x0
0070AB49  56                        PUSH ESI
0070AB4A  89 75 F4                  MOV dword ptr [EBP + -0xc],ESI
0070AB4D  E8 1E C5 FB FF            CALL 0x006c7070
0070AB52  85 F6                     TEST ESI,ESI
0070AB54  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
0070AB57  74 06                     JZ 0x0070ab5f
0070AB59  56                        PUSH ESI
0070AB5A  E8 61 C4 FB FF            CALL 0x006c6fc0
LAB_0070ab5f:
0070AB5F  8D 45 F8                  LEA EAX,[EBP + -0x8]
0070AB62  8B CB                     MOV ECX,EBX
0070AB64  50                        PUSH EAX
0070AB65  E8 76 75 FE FF            CALL 0x006f20e0
0070AB6A  8B 4D B0                  MOV ECX,dword ptr [EBP + -0x50]
0070AB6D  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
0070AB70  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
0070AB76  5E                        POP ESI
0070AB77  5B                        POP EBX
0070AB78  8B E5                     MOV ESP,EBP
0070AB7A  5D                        POP EBP
0070AB7B  C3                        RET
LAB_0070ab7c:
0070AB7C  8B 55 B0                  MOV EDX,dword ptr [EBP + -0x50]
0070AB7F  68 50 00 7F 00            PUSH 0x7f0050
0070AB84  68 CC 4C 7A 00            PUSH 0x7a4ccc
0070AB89  56                        PUSH ESI
0070AB8A  6A 00                     PUSH 0x0
0070AB8C  68 1B 01 00 00            PUSH 0x11b
0070AB91  68 E0 FF 7E 00            PUSH 0x7effe0
0070AB96  89 15 F8 8D 85 00         MOV dword ptr [0x00858df8],EDX
0070AB9C  E8 2F 29 FA FF            CALL 0x006ad4d0
0070ABA1  83 C4 18                  ADD ESP,0x18
0070ABA4  85 C0                     TEST EAX,EAX
0070ABA6  74 01                     JZ 0x0070aba9
0070ABA8  CC                        INT3
LAB_0070aba9:
0070ABA9  8B 45 F4                  MOV EAX,dword ptr [EBP + -0xc]
0070ABAC  85 C0                     TEST EAX,EAX
0070ABAE  74 06                     JZ 0x0070abb6
0070ABB0  50                        PUSH EAX
0070ABB1  E8 0A C4 FB FF            CALL 0x006c6fc0
LAB_0070abb6:
0070ABB6  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
0070ABB9  8D 45 F8                  LEA EAX,[EBP + -0x8]
0070ABBC  50                        PUSH EAX
0070ABBD  E8 1E 75 FE FF            CALL 0x006f20e0
0070ABC2  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
0070ABC5  85 C0                     TEST EAX,EAX
0070ABC7  74 09                     JZ 0x0070abd2
0070ABC9  8D 4D FC                  LEA ECX,[EBP + -0x4]
0070ABCC  51                        PUSH ECX
0070ABCD  E8 8E 04 FA FF            CALL 0x006ab060
LAB_0070abd2:
0070ABD2  68 21 01 00 00            PUSH 0x121
0070ABD7  68 E0 FF 7E 00            PUSH 0x7effe0
0070ABDC  6A 00                     PUSH 0x0
0070ABDE  56                        PUSH ESI
0070ABDF  E8 5C B2 F9 FF            CALL 0x006a5e40
0070ABE4  5E                        POP ESI
0070ABE5  33 C0                     XOR EAX,EAX
0070ABE7  5B                        POP EBX
0070ABE8  8B E5                     MOV ESP,EBP
0070ABEA  5D                        POP EBP
0070ABEB  C3                        RET
