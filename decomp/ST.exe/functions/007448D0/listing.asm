___addl:
007448D0  55                        PUSH EBP
007448D1  8B EC                     MOV EBP,ESP
007448D3  83 EC 08                  SUB ESP,0x8
007448D6  C7 45 F8 00 00 00 00      MOV dword ptr [EBP + -0x8],0x0
007448DD  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
007448E0  03 45 0C                  ADD EAX,dword ptr [EBP + 0xc]
007448E3  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
007448E6  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
007448E9  3B 4D 08                  CMP ECX,dword ptr [EBP + 0x8]
007448EC  72 08                     JC 0x007448f6
007448EE  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
007448F1  3B 55 0C                  CMP EDX,dword ptr [EBP + 0xc]
007448F4  73 09                     JNC 0x007448ff
LAB_007448f6:
007448F6  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
007448F9  83 C0 01                  ADD EAX,0x1
007448FC  89 45 F8                  MOV dword ptr [EBP + -0x8],EAX
LAB_007448ff:
007448FF  8B 4D 10                  MOV ECX,dword ptr [EBP + 0x10]
00744902  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
00744905  89 11                     MOV dword ptr [ECX],EDX
00744907  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
0074490A  8B E5                     MOV ESP,EBP
0074490C  5D                        POP EBP
0074490D  C3                        RET
