FUN_00695c10:
00695C10  55                        PUSH EBP
00695C11  8B EC                     MOV EBP,ESP
00695C13  83 EC 20                  SUB ESP,0x20
00695C16  53                        PUSH EBX
00695C17  56                        PUSH ESI
00695C18  8B F1                     MOV ESI,ECX
00695C1A  57                        PUSH EDI
00695C1B  B9 07 00 00 00            MOV ECX,0x7
00695C20  33 C0                     XOR EAX,EAX
00695C22  8D 7D E0                  LEA EDI,[EBP + -0x20]
00695C25  83 CB FF                  OR EBX,0xffffffff
00695C28  F3 AB                     STOSD.REP ES:EDI
00695C2A  8B 4D 0C                  MOV ECX,dword ptr [EBP + 0xc]
00695C2D  AA                        STOSB ES:EDI
00695C2E  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
00695C31  89 4D E5                  MOV dword ptr [EBP + -0x1b],ECX
00695C34  89 45 E0                  MOV dword ptr [EBP + -0x20],EAX
00695C37  8B 45 10                  MOV EAX,dword ptr [EBP + 0x10]
00695C3A  85 C0                     TEST EAX,EAX
00695C3C  7D 02                     JGE 0x00695c40
00695C3E  33 C0                     XOR EAX,EAX
LAB_00695c40:
00695C40  8B 55 14                  MOV EDX,dword ptr [EBP + 0x14]
00695C43  88 45 E4                  MOV byte ptr [EBP + -0x1c],AL
00695C46  8B 45 18                  MOV EAX,dword ptr [EBP + 0x18]
00695C49  89 55 E9                  MOV dword ptr [EBP + -0x17],EDX
00695C4C  89 45 ED                  MOV dword ptr [EBP + -0x13],EAX
00695C4F  8B 86 53 58 00 00         MOV EAX,dword ptr [ESI + 0x5853]
00695C55  85 C0                     TEST EAX,EAX
00695C57  75 13                     JNZ 0x00695c6c
00695C59  6A 0A                     PUSH 0xa
00695C5B  6A 1D                     PUSH 0x1d
00695C5D  6A 0A                     PUSH 0xa
00695C5F  6A 00                     PUSH 0x0
00695C61  E8 2A 86 01 00            CALL 0x006ae290
00695C66  89 86 53 58 00 00         MOV dword ptr [ESI + 0x5853],EAX
LAB_00695c6c:
00695C6C  8B B6 53 58 00 00         MOV ESI,dword ptr [ESI + 0x5853]
00695C72  85 F6                     TEST ESI,ESI
00695C74  74 13                     JZ 0x00695c89
00695C76  8D 4D E0                  LEA ECX,[EBP + -0x20]
00695C79  51                        PUSH ECX
00695C7A  56                        PUSH ESI
00695C7B  E8 40 85 01 00            CALL 0x006ae1c0
00695C80  5F                        POP EDI
00695C81  5E                        POP ESI
00695C82  5B                        POP EBX
00695C83  8B E5                     MOV ESP,EBP
00695C85  5D                        POP EBP
00695C86  C2 14 00                  RET 0x14
LAB_00695c89:
00695C89  5F                        POP EDI
00695C8A  8B C3                     MOV EAX,EBX
00695C8C  5E                        POP ESI
00695C8D  5B                        POP EBX
00695C8E  8B E5                     MOV ESP,EBP
00695C90  5D                        POP EBP
00695C91  C2 14 00                  RET 0x14
