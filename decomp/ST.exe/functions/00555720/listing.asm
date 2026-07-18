FUN_00555720:
00555720  55                        PUSH EBP
00555721  8B EC                     MOV EBP,ESP
00555723  83 EC 44                  SUB ESP,0x44
00555726  A1 F8 8D 85 00            MOV EAX,[0x00858df8]
0055572B  56                        PUSH ESI
0055572C  8D 4D C0                  LEA ECX,[EBP + -0x40]
0055572F  6A 00                     PUSH 0x0
00555731  51                        PUSH ECX
00555732  89 45 BC                  MOV dword ptr [EBP + -0x44],EAX
00555735  E8 B6 80 1D 00            CALL 0x0072d7f0
0055573A  8B F0                     MOV ESI,EAX
0055573C  83 C4 08                  ADD ESP,0x8
0055573F  85 F6                     TEST ESI,ESI
00555741  75 0E                     JNZ 0x00555751
00555743  8B 55 BC                  MOV EDX,dword ptr [EBP + -0x44]
00555746  89 15 F8 8D 85 00         MOV dword ptr [0x00858df8],EDX
0055574C  5E                        POP ESI
0055574D  8B E5                     MOV ESP,EBP
0055574F  5D                        POP EBP
00555750  C3                        RET
LAB_00555751:
00555751  8B 45 BC                  MOV EAX,dword ptr [EBP + -0x44]
00555754  68 24 91 7C 00            PUSH 0x7c9124
00555759  68 CC 4C 7A 00            PUSH 0x7a4ccc
0055575E  56                        PUSH ESI
0055575F  6A 00                     PUSH 0x0
00555761  6A 37                     PUSH 0x37
00555763  68 04 91 7C 00            PUSH 0x7c9104
00555768  A3 F8 8D 85 00            MOV [0x00858df8],EAX
0055576D  E8 5E 7D 15 00            CALL 0x006ad4d0
00555772  83 C4 18                  ADD ESP,0x18
00555775  85 C0                     TEST EAX,EAX
00555777  74 01                     JZ 0x0055577a
00555779  CC                        INT3
LAB_0055577a:
0055577A  6A 38                     PUSH 0x38
0055577C  68 04 91 7C 00            PUSH 0x7c9104
00555781  6A 00                     PUSH 0x0
00555783  56                        PUSH ESI
00555784  E8 B7 06 15 00            CALL 0x006a5e40
00555789  8B C6                     MOV EAX,ESI
0055578B  5E                        POP ESI
0055578C  8B E5                     MOV ESP,EBP
0055578E  5D                        POP EBP
0055578F  C3                        RET
