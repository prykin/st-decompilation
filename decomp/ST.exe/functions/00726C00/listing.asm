mfQSprGetNumFas:
00726C00  55                        PUSH EBP
00726C01  8B EC                     MOV EBP,ESP
00726C03  83 EC 50                  SUB ESP,0x50
00726C06  A1 F8 8D 85 00            MOV EAX,[0x00858df8]
00726C0B  56                        PUSH ESI
00726C0C  8D 55 B4                  LEA EDX,[EBP + -0x4c]
00726C0F  8D 4D B0                  LEA ECX,[EBP + -0x50]
00726C12  6A 00                     PUSH 0x0
00726C14  52                        PUSH EDX
00726C15  89 45 B0                  MOV dword ptr [EBP + -0x50],EAX
00726C18  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
00726C1E  E8 CD 6B 00 00            CALL 0x0072d7f0
00726C23  8B F0                     MOV ESI,EAX
00726C25  83 C4 08                  ADD ESP,0x8
00726C28  85 F6                     TEST ESI,ESI
00726C2A  75 43                     JNZ 0x00726c6f
00726C2C  8B 45 10                  MOV EAX,dword ptr [EBP + 0x10]
00726C2F  8B 55 0C                  MOV EDX,dword ptr [EBP + 0xc]
00726C32  8D 4D F4                  LEA ECX,[EBP + -0xc]
00726C35  50                        PUSH EAX
00726C36  51                        PUSH ECX
00726C37  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
00726C3A  52                        PUSH EDX
00726C3B  6A 06                     PUSH 0x6
00726C3D  E8 CE B6 FC FF            CALL 0x006f2310
00726C42  85 C0                     TEST EAX,EAX
00726C44  75 17                     JNZ 0x00726c5d
00726C46  A1 7C D7 7E 00            MOV EAX,[0x007ed77c]
00726C4B  68 F6 01 00 00            PUSH 0x1f6
00726C50  68 8C 0C 7F 00            PUSH 0x7f0c8c
00726C55  50                        PUSH EAX
00726C56  6A FC                     PUSH -0x4
00726C58  E8 E3 F1 F7 FF            CALL 0x006a5e40
LAB_00726c5d:
00726C5D  8B 4D B0                  MOV ECX,dword ptr [EBP + -0x50]
00726C60  0F BF 45 FE               MOVSX EAX,word ptr [EBP + -0x2]
00726C64  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
00726C6A  5E                        POP ESI
00726C6B  8B E5                     MOV ESP,EBP
00726C6D  5D                        POP EBP
00726C6E  C3                        RET
LAB_00726c6f:
00726C6F  8B 45 10                  MOV EAX,dword ptr [EBP + 0x10]
00726C72  8B 55 B0                  MOV EDX,dword ptr [EBP + -0x50]
00726C75  85 C0                     TEST EAX,EAX
00726C77  89 15 F8 8D 85 00         MOV dword ptr [0x00858df8],EDX
00726C7D  75 0C                     JNZ 0x00726c8b
00726C7F  83 FE FC                  CMP ESI,-0x4
00726C82  75 07                     JNZ 0x00726c8b
00726C84  8B C6                     MOV EAX,ESI
00726C86  5E                        POP ESI
00726C87  8B E5                     MOV ESP,EBP
00726C89  5D                        POP EBP
00726C8A  C3                        RET
LAB_00726c8b:
00726C8B  68 38 0D 7F 00            PUSH 0x7f0d38
00726C90  68 CC 4C 7A 00            PUSH 0x7a4ccc
00726C95  56                        PUSH ESI
00726C96  6A 00                     PUSH 0x0
00726C98  68 FA 01 00 00            PUSH 0x1fa
00726C9D  68 8C 0C 7F 00            PUSH 0x7f0c8c
00726CA2  E8 29 68 F8 FF            CALL 0x006ad4d0
00726CA7  83 C4 18                  ADD ESP,0x18
00726CAA  85 C0                     TEST EAX,EAX
00726CAC  74 01                     JZ 0x00726caf
00726CAE  CC                        INT3
LAB_00726caf:
00726CAF  68 FC 01 00 00            PUSH 0x1fc
00726CB4  68 8C 0C 7F 00            PUSH 0x7f0c8c
00726CB9  6A 00                     PUSH 0x0
00726CBB  56                        PUSH ESI
00726CBC  E8 7F F1 F7 FF            CALL 0x006a5e40
00726CC1  85 F6                     TEST ESI,ESI
00726CC3  7D 07                     JGE 0x00726ccc
00726CC5  8B C6                     MOV EAX,ESI
00726CC7  5E                        POP ESI
00726CC8  8B E5                     MOV ESP,EBP
00726CCA  5D                        POP EBP
00726CCB  C3                        RET
LAB_00726ccc:
00726CCC  83 C8 FF                  OR EAX,0xffffffff
00726CCF  5E                        POP ESI
00726CD0  8B E5                     MOV ESP,EBP
00726CD2  5D                        POP EBP
00726CD3  C3                        RET
