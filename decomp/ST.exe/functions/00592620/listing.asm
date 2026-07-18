FUN_00592620:
00592620  55                        PUSH EBP
00592621  8B EC                     MOV EBP,ESP
00592623  51                        PUSH ECX
00592624  56                        PUSH ESI
00592625  8B F1                     MOV ESI,ECX
00592627  57                        PUSH EDI
00592628  C7 45 FC 0D 00 00 00      MOV dword ptr [EBP + -0x4],0xd
0059262F  C7 86 F8 1F 00 00 00 00 00 00  MOV dword ptr [ESI + 0x1ff8],0x0
00592639  8D 7E 66                  LEA EDI,[ESI + 0x66]
LAB_0059263c:
0059263C  8B 07                     MOV EAX,dword ptr [EDI]
0059263E  85 C0                     TEST EAX,EAX
00592640  74 24                     JZ 0x00592666
00592642  8B 4E 0C                  MOV ECX,dword ptr [ESI + 0xc]
00592645  89 46 25                  MOV dword ptr [ESI + 0x25],EAX
00592648  C7 46 29 02 00 00 00      MOV dword ptr [ESI + 0x29],0x2
0059264F  C7 46 2D 20 00 00 00      MOV dword ptr [ESI + 0x2d],0x20
00592656  C7 46 31 00 00 00 00      MOV dword ptr [ESI + 0x31],0x0
0059265D  8B 01                     MOV EAX,dword ptr [ECX]
0059265F  8D 56 1D                  LEA EDX,[ESI + 0x1d]
00592662  52                        PUSH EDX
00592663  FF 50 18                  CALL dword ptr [EAX + 0x18]
LAB_00592666:
00592666  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
00592669  83 C7 04                  ADD EDI,0x4
0059266C  48                        DEC EAX
0059266D  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
00592670  75 CA                     JNZ 0x0059263c
00592672  5F                        POP EDI
00592673  5E                        POP ESI
00592674  8B E5                     MOV ESP,EBP
00592676  5D                        POP EBP
00592677  C3                        RET
