FUN_00736030:
00736030  55                        PUSH EBP
00736031  8B EC                     MOV EBP,ESP
00736033  83 EC 08                  SUB ESP,0x8
00736036  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
00736039  89 45 F8                  MOV dword ptr [EBP + -0x8],EAX
0073603C  8B 4D 0C                  MOV ECX,dword ptr [EBP + 0xc]
0073603F  89 4D FC                  MOV dword ptr [EBP + -0x4],ECX
00736042  8B 55 0E                  MOV EDX,dword ptr [EBP + 0xe]
00736045  81 E2 FF FF 00 00         AND EDX,0xffff
0073604B  81 E2 0F 80 00 00         AND EDX,0x800f
00736051  8B 45 10                  MOV EAX,dword ptr [EBP + 0x10]
00736054  C1 E0 04                  SHL EAX,0x4
00736057  0B D0                     OR EDX,EAX
00736059  66 89 55 FE               MOV word ptr [EBP + -0x2],DX
0073605D  DD 45 F8                  FLD double ptr [EBP + -0x8]
00736060  8B E5                     MOV ESP,EBP
00736062  5D                        POP EBP
00736063  C3                        RET
