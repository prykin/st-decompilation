FUN_00576bb0:
00576BB0  55                        PUSH EBP
00576BB1  8B EC                     MOV EBP,ESP
00576BB3  83 EC 44                  SUB ESP,0x44
00576BB6  A1 F8 8D 85 00            MOV EAX,[0x00858df8]
00576BBB  56                        PUSH ESI
00576BBC  8D 55 C0                  LEA EDX,[EBP + -0x40]
00576BBF  8D 4D BC                  LEA ECX,[EBP + -0x44]
00576BC2  6A 00                     PUSH 0x0
00576BC4  52                        PUSH EDX
00576BC5  89 45 BC                  MOV dword ptr [EBP + -0x44],EAX
00576BC8  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
00576BCE  E8 1D 6C 1B 00            CALL 0x0072d7f0
00576BD3  8B F0                     MOV ESI,EAX
00576BD5  83 C4 08                  ADD ESP,0x8
00576BD8  85 F6                     TEST ESI,ESI
00576BDA  0F 85 81 00 00 00         JNZ 0x00576c61
00576BE0  6A 24                     PUSH 0x24
00576BE2  E8 49 79 1B 00            CALL 0x0072e530
00576BE7  83 C4 04                  ADD ESP,0x4
00576BEA  85 C0                     TEST EAX,EAX
00576BEC  74 10                     JZ 0x00576bfe
00576BEE  8B 0D 28 67 80 00         MOV ECX,dword ptr [0x00806728]
00576BF4  51                        PUSH ECX
00576BF5  8B C8                     MOV ECX,EAX
00576BF7  E8 4C A7 E8 FF            CALL 0x00401348
00576BFC  EB 02                     JMP 0x00576c00
LAB_00576bfe:
00576BFE  33 C0                     XOR EAX,EAX
LAB_00576c00:
00576C00  85 C0                     TEST EAX,EAX
00576C02  A3 38 16 81 00            MOV [0x00811638],EAX
00576C07  75 1A                     JNZ 0x00576c23
00576C09  8B 15 7C D7 7E 00         MOV EDX,dword ptr [0x007ed77c]
00576C0F  6A 38                     PUSH 0x38
00576C11  68 5C AB 7C 00            PUSH 0x7cab5c
00576C16  52                        PUSH EDX
00576C17  6A FF                     PUSH -0x1
00576C19  E8 22 F2 12 00            CALL 0x006a5e40
00576C1E  A1 38 16 81 00            MOV EAX,[0x00811638]
LAB_00576c23:
00576C23  C7 40 20 00 00 00 00      MOV dword ptr [EAX + 0x20],0x0
00576C2A  8B 0D 38 16 81 00         MOV ECX,dword ptr [0x00811638]
00576C30  8B 01                     MOV EAX,dword ptr [ECX]
00576C32  FF 10                     CALL dword ptr [EAX]
00576C34  8B 0D 38 16 81 00         MOV ECX,dword ptr [0x00811638]
00576C3A  6A 00                     PUSH 0x0
00576C3C  51                        PUSH ECX
00576C3D  B9 20 76 80 00            MOV ECX,0x807620
00576C42  E8 09 DA 16 00            CALL 0x006e4650
00576C47  8B 15 38 16 81 00         MOV EDX,dword ptr [0x00811638]
00576C4D  C7 42 20 01 00 00 00      MOV dword ptr [EDX + 0x20],0x1
00576C54  8B 45 BC                  MOV EAX,dword ptr [EBP + -0x44]
00576C57  A3 F8 8D 85 00            MOV [0x00858df8],EAX
00576C5C  5E                        POP ESI
00576C5D  8B E5                     MOV ESP,EBP
00576C5F  5D                        POP EBP
00576C60  C3                        RET
LAB_00576c61:
00576C61  8B 4D BC                  MOV ECX,dword ptr [EBP + -0x44]
00576C64  68 A0 AB 7C 00            PUSH 0x7caba0
00576C69  68 CC 4C 7A 00            PUSH 0x7a4ccc
00576C6E  56                        PUSH ESI
00576C6F  6A 00                     PUSH 0x0
00576C71  6A 40                     PUSH 0x40
00576C73  68 5C AB 7C 00            PUSH 0x7cab5c
00576C78  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
00576C7E  E8 4D 68 13 00            CALL 0x006ad4d0
00576C83  83 C4 18                  ADD ESP,0x18
00576C86  85 C0                     TEST EAX,EAX
00576C88  74 01                     JZ 0x00576c8b
00576C8A  CC                        INT3
LAB_00576c8b:
00576C8B  6A 41                     PUSH 0x41
00576C8D  68 5C AB 7C 00            PUSH 0x7cab5c
00576C92  6A 00                     PUSH 0x0
00576C94  56                        PUSH ESI
00576C95  E8 A6 F1 12 00            CALL 0x006a5e40
00576C9A  5E                        POP ESI
00576C9B  8B E5                     MOV ESP,EBP
00576C9D  5D                        POP EBP
00576C9E  C3                        RET
