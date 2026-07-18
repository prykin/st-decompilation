FUN_00627700:
00627700  55                        PUSH EBP
00627701  8B EC                     MOV EBP,ESP
00627703  83 EC 20                  SUB ESP,0x20
00627706  56                        PUSH ESI
00627707  8B 35 BC 17 81 00         MOV ESI,dword ptr [0x008117bc]
0062770D  85 F6                     TEST ESI,ESI
0062770F  8B D1                     MOV EDX,ECX
00627711  74 57                     JZ 0x0062776a
00627713  57                        PUSH EDI
00627714  B9 08 00 00 00            MOV ECX,0x8
00627719  33 C0                     XOR EAX,EAX
0062771B  8D 7D E0                  LEA EDI,[EBP + -0x20]
0062771E  F3 AB                     STOSD.REP ES:EDI
00627720  66 8B 42 24               MOV AX,word ptr [EDX + 0x24]
00627724  66 8B 4A 32               MOV CX,word ptr [EDX + 0x32]
00627728  66 89 45 F4               MOV word ptr [EBP + -0xc],AX
0062772C  66 8B 82 62 02 00 00      MOV AX,word ptr [EDX + 0x262]
00627733  66 89 45 F8               MOV word ptr [EBP + -0x8],AX
00627737  8B 82 A1 02 00 00         MOV EAX,dword ptr [EDX + 0x2a1]
0062773D  85 C0                     TEST EAX,EAX
0062773F  66 89 4D F6               MOV word ptr [EBP + -0xa],CX
00627743  5F                        POP EDI
00627744  74 0D                     JZ 0x00627753
00627746  66 8B 8A A5 02 00 00      MOV CX,word ptr [EDX + 0x2a5]
0062774D  66 89 4D FA               MOV word ptr [EBP + -0x6],CX
00627751  EB 06                     JMP 0x00627759
LAB_00627753:
00627753  66 C7 45 FA FF FF         MOV word ptr [EBP + -0x6],0xffff
LAB_00627759:
00627759  C7 45 F0 E3 5D 00 00      MOV dword ptr [EBP + -0x10],0x5de3
00627760  8B 16                     MOV EDX,dword ptr [ESI]
00627762  8D 45 E0                  LEA EAX,[EBP + -0x20]
00627765  8B CE                     MOV ECX,ESI
00627767  50                        PUSH EAX
00627768  FF 12                     CALL dword ptr [EDX]
LAB_0062776a:
0062776A  5E                        POP ESI
0062776B  8B E5                     MOV ESP,EBP
0062776D  5D                        POP EBP
0062776E  C3                        RET
