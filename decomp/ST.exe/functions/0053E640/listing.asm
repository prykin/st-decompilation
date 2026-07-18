FUN_0053e640:
0053E640  55                        PUSH EBP
0053E641  8B EC                     MOV EBP,ESP
0053E643  83 EC 48                  SUB ESP,0x48
0053E646  A1 F8 8D 85 00            MOV EAX,[0x00858df8]
0053E64B  89 4D FC                  MOV dword ptr [EBP + -0x4],ECX
0053E64E  56                        PUSH ESI
0053E64F  8D 55 BC                  LEA EDX,[EBP + -0x44]
0053E652  8D 4D B8                  LEA ECX,[EBP + -0x48]
0053E655  6A 00                     PUSH 0x0
0053E657  52                        PUSH EDX
0053E658  89 45 B8                  MOV dword ptr [EBP + -0x48],EAX
0053E65B  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
0053E661  E8 8A F1 1E 00            CALL 0x0072d7f0
0053E666  8B F0                     MOV ESI,EAX
0053E668  83 C4 08                  ADD ESP,0x8
0053E66B  85 F6                     TEST ESI,ESI
0053E66D  75 66                     JNZ 0x0053e6d5
0053E66F  8B 75 FC                  MOV ESI,dword ptr [EBP + -0x4]
0053E672  8B 86 7C 01 00 00         MOV EAX,dword ptr [ESI + 0x17c]
0053E678  85 C0                     TEST EAX,EAX
0053E67A  74 09                     JZ 0x0053e685
0053E67C  8B 4E 0C                  MOV ECX,dword ptr [ESI + 0xc]
0053E67F  50                        PUSH EAX
0053E680  E8 2B 70 1A 00            CALL 0x006e56b0
LAB_0053e685:
0053E685  8B 86 89 01 00 00         MOV EAX,dword ptr [ESI + 0x189]
0053E68B  C7 86 7C 01 00 00 00 00 00 00  MOV dword ptr [ESI + 0x17c],0x0
0053E695  85 C0                     TEST EAX,EAX
0053E697  74 13                     JZ 0x0053e6ac
0053E699  50                        PUSH EAX
0053E69A  E8 C1 1E 1D 00            CALL 0x00710560
0053E69F  83 C4 04                  ADD ESP,0x4
0053E6A2  C7 86 89 01 00 00 00 00 00 00  MOV dword ptr [ESI + 0x189],0x0
LAB_0053e6ac:
0053E6AC  8B 8E 85 01 00 00         MOV ECX,dword ptr [ESI + 0x185]
0053E6B2  8D 86 85 01 00 00         LEA EAX,[ESI + 0x185]
0053E6B8  85 C9                     TEST ECX,ECX
0053E6BA  74 0C                     JZ 0x0053e6c8
0053E6BC  8B 0D 90 67 80 00         MOV ECX,dword ptr [0x00806790]
0053E6C2  50                        PUSH EAX
0053E6C3  E8 18 3A 1B 00            CALL 0x006f20e0
LAB_0053e6c8:
0053E6C8  8B 45 B8                  MOV EAX,dword ptr [EBP + -0x48]
0053E6CB  A3 F8 8D 85 00            MOV [0x00858df8],EAX
0053E6D0  5E                        POP ESI
0053E6D1  8B E5                     MOV ESP,EBP
0053E6D3  5D                        POP EBP
0053E6D4  C3                        RET
LAB_0053e6d5:
0053E6D5  8B 4D B8                  MOV ECX,dword ptr [EBP + -0x48]
0053E6D8  68 48 79 7C 00            PUSH 0x7c7948
0053E6DD  68 CC 4C 7A 00            PUSH 0x7a4ccc
0053E6E2  56                        PUSH ESI
0053E6E3  6A 00                     PUSH 0x0
0053E6E5  68 FA 00 00 00            PUSH 0xfa
0053E6EA  68 70 78 7C 00            PUSH 0x7c7870
0053E6EF  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
0053E6F5  E8 D6 ED 16 00            CALL 0x006ad4d0
0053E6FA  83 C4 18                  ADD ESP,0x18
0053E6FD  85 C0                     TEST EAX,EAX
0053E6FF  74 01                     JZ 0x0053e702
0053E701  CC                        INT3
LAB_0053e702:
0053E702  68 FA 00 00 00            PUSH 0xfa
0053E707  68 70 78 7C 00            PUSH 0x7c7870
0053E70C  6A 00                     PUSH 0x0
0053E70E  56                        PUSH ESI
0053E70F  E8 2C 77 16 00            CALL 0x006a5e40
0053E714  5E                        POP ESI
0053E715  8B E5                     MOV ESP,EBP
0053E717  5D                        POP EBP
0053E718  C3                        RET
