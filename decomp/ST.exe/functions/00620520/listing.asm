FUN_00620520:
00620520  55                        PUSH EBP
00620521  8B EC                     MOV EBP,ESP
00620523  83 EC 14                  SUB ESP,0x14
00620526  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
00620529  8B 55 14                  MOV EDX,dword ptr [EBP + 0x14]
0062052C  56                        PUSH ESI
0062052D  89 45 F0                  MOV dword ptr [EBP + -0x10],EAX
00620530  89 45 EC                  MOV dword ptr [EBP + -0x14],EAX
00620533  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
00620536  8B F1                     MOV ESI,ECX
00620538  89 45 F4                  MOV dword ptr [EBP + -0xc],EAX
0062053B  8B 4D 10                  MOV ECX,dword ptr [EBP + 0x10]
0062053E  57                        PUSH EDI
0062053F  8B 86 D1 00 00 00         MOV EAX,dword ptr [ESI + 0xd1]
00620545  83 CF FF                  OR EDI,0xffffffff
00620548  85 C0                     TEST EAX,EAX
0062054A  89 4D F8                  MOV dword ptr [EBP + -0x8],ECX
0062054D  89 55 FC                  MOV dword ptr [EBP + -0x4],EDX
00620550  75 13                     JNZ 0x00620565
00620552  6A 0A                     PUSH 0xa
00620554  6A 14                     PUSH 0x14
00620556  6A 0A                     PUSH 0xa
00620558  6A 00                     PUSH 0x0
0062055A  E8 31 DD 08 00            CALL 0x006ae290
0062055F  89 86 D1 00 00 00         MOV dword ptr [ESI + 0xd1],EAX
LAB_00620565:
00620565  8B B6 D1 00 00 00         MOV ESI,dword ptr [ESI + 0xd1]
0062056B  85 F6                     TEST ESI,ESI
0062056D  74 12                     JZ 0x00620581
0062056F  8D 45 EC                  LEA EAX,[EBP + -0x14]
00620572  50                        PUSH EAX
00620573  56                        PUSH ESI
00620574  E8 47 DC 08 00            CALL 0x006ae1c0
00620579  5F                        POP EDI
0062057A  5E                        POP ESI
0062057B  8B E5                     MOV ESP,EBP
0062057D  5D                        POP EBP
0062057E  C2 10 00                  RET 0x10
LAB_00620581:
00620581  8B C7                     MOV EAX,EDI
00620583  5F                        POP EDI
00620584  5E                        POP ESI
00620585  8B E5                     MOV ESP,EBP
00620587  5D                        POP EBP
00620588  C2 10 00                  RET 0x10
