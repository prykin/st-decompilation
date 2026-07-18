FUN_00621430:
00621430  55                        PUSH EBP
00621431  8B EC                     MOV EBP,ESP
00621433  83 EC 14                  SUB ESP,0x14
00621436  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
00621439  8B 55 14                  MOV EDX,dword ptr [EBP + 0x14]
0062143C  56                        PUSH ESI
0062143D  89 45 F0                  MOV dword ptr [EBP + -0x10],EAX
00621440  89 45 EC                  MOV dword ptr [EBP + -0x14],EAX
00621443  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
00621446  8B F1                     MOV ESI,ECX
00621448  89 45 F4                  MOV dword ptr [EBP + -0xc],EAX
0062144B  8B 4D 10                  MOV ECX,dword ptr [EBP + 0x10]
0062144E  57                        PUSH EDI
0062144F  8B 86 01 01 00 00         MOV EAX,dword ptr [ESI + 0x101]
00621455  83 CF FF                  OR EDI,0xffffffff
00621458  85 C0                     TEST EAX,EAX
0062145A  89 4D F8                  MOV dword ptr [EBP + -0x8],ECX
0062145D  89 55 FC                  MOV dword ptr [EBP + -0x4],EDX
00621460  75 13                     JNZ 0x00621475
00621462  6A 0A                     PUSH 0xa
00621464  6A 14                     PUSH 0x14
00621466  6A 0A                     PUSH 0xa
00621468  6A 00                     PUSH 0x0
0062146A  E8 21 CE 08 00            CALL 0x006ae290
0062146F  89 86 01 01 00 00         MOV dword ptr [ESI + 0x101],EAX
LAB_00621475:
00621475  8B B6 01 01 00 00         MOV ESI,dword ptr [ESI + 0x101]
0062147B  85 F6                     TEST ESI,ESI
0062147D  74 12                     JZ 0x00621491
0062147F  8D 45 EC                  LEA EAX,[EBP + -0x14]
00621482  50                        PUSH EAX
00621483  56                        PUSH ESI
00621484  E8 37 CD 08 00            CALL 0x006ae1c0
00621489  5F                        POP EDI
0062148A  5E                        POP ESI
0062148B  8B E5                     MOV ESP,EBP
0062148D  5D                        POP EBP
0062148E  C2 10 00                  RET 0x10
LAB_00621491:
00621491  8B C7                     MOV EAX,EDI
00621493  5F                        POP EDI
00621494  5E                        POP ESI
00621495  8B E5                     MOV ESP,EBP
00621497  5D                        POP EBP
00621498  C2 10 00                  RET 0x10
