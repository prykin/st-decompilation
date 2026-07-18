FUN_00521900:
00521900  55                        PUSH EBP
00521901  8B EC                     MOV EBP,ESP
00521903  83 EC 48                  SUB ESP,0x48
00521906  A1 F8 8D 85 00            MOV EAX,[0x00858df8]
0052190B  89 4D FC                  MOV dword ptr [EBP + -0x4],ECX
0052190E  56                        PUSH ESI
0052190F  8D 55 BC                  LEA EDX,[EBP + -0x44]
00521912  8D 4D B8                  LEA ECX,[EBP + -0x48]
00521915  6A 00                     PUSH 0x0
00521917  52                        PUSH EDX
00521918  89 45 B8                  MOV dword ptr [EBP + -0x48],EAX
0052191B  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
00521921  E8 CA BE 20 00            CALL 0x0072d7f0
00521926  8B F0                     MOV ESI,EAX
00521928  83 C4 08                  ADD ESP,0x8
0052192B  85 F6                     TEST ESI,ESI
0052192D  75 3E                     JNZ 0x0052196d
0052192F  8B 75 FC                  MOV ESI,dword ptr [EBP + -0x4]
00521932  8B 0D A8 75 80 00         MOV ECX,dword ptr [0x008075a8]
00521938  8D 86 88 01 00 00         LEA EAX,[ESI + 0x188]
0052193E  50                        PUSH EAX
0052193F  6A 00                     PUSH 0x0
00521941  6A 03                     PUSH 0x3
00521943  51                        PUSH ECX
00521944  E8 07 01 19 00            CALL 0x006b1a50
00521949  8B 4E 48                  MOV ECX,dword ptr [ESI + 0x48]
0052194C  8B 86 8C 01 00 00         MOV EAX,dword ptr [ESI + 0x18c]
00521952  8B 55 B8                  MOV EDX,dword ptr [EBP + -0x48]
00521955  2B C1                     SUB EAX,ECX
00521957  89 46 44                  MOV dword ptr [ESI + 0x44],EAX
0052195A  03 C1                     ADD EAX,ECX
0052195C  89 86 74 01 00 00         MOV dword ptr [ESI + 0x174],EAX
00521962  89 15 F8 8D 85 00         MOV dword ptr [0x00858df8],EDX
00521968  5E                        POP ESI
00521969  8B E5                     MOV ESP,EBP
0052196B  5D                        POP EBP
0052196C  C3                        RET
LAB_0052196d:
0052196D  8B 45 B8                  MOV EAX,dword ptr [EBP + -0x48]
00521970  68 44 40 7C 00            PUSH 0x7c4044
00521975  68 CC 4C 7A 00            PUSH 0x7a4ccc
0052197A  56                        PUSH ESI
0052197B  6A 00                     PUSH 0x0
0052197D  6A 22                     PUSH 0x22
0052197F  68 1C 40 7C 00            PUSH 0x7c401c
00521984  A3 F8 8D 85 00            MOV [0x00858df8],EAX
00521989  E8 42 BB 18 00            CALL 0x006ad4d0
0052198E  83 C4 18                  ADD ESP,0x18
00521991  85 C0                     TEST EAX,EAX
00521993  74 01                     JZ 0x00521996
00521995  CC                        INT3
LAB_00521996:
00521996  6A 22                     PUSH 0x22
00521998  68 1C 40 7C 00            PUSH 0x7c401c
0052199D  6A 00                     PUSH 0x0
0052199F  56                        PUSH ESI
005219A0  E8 9B 44 18 00            CALL 0x006a5e40
005219A5  5E                        POP ESI
005219A6  8B E5                     MOV ESP,EBP
005219A8  5D                        POP EBP
005219A9  C3                        RET
