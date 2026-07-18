__ShrMan:
007400A0  55                        PUSH EBP
007400A1  8B EC                     MOV EBP,ESP
007400A3  83 EC 18                  SUB ESP,0x18
007400A6  56                        PUSH ESI
007400A7  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
007400AA  99                        CDQ
007400AB  83 E2 1F                  AND EDX,0x1f
007400AE  03 C2                     ADD EAX,EDX
007400B0  C1 F8 05                  SAR EAX,0x5
007400B3  89 45 E8                  MOV dword ptr [EBP + -0x18],EAX
007400B6  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
007400B9  25 1F 00 00 80            AND EAX,0x8000001f
007400BE  79 05                     JNS 0x007400c5
007400C0  48                        DEC EAX
007400C1  83 C8 E0                  OR EAX,0xffffffe0
007400C4  40                        INC EAX
LAB_007400c5:
007400C5  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
007400C8  83 CA FF                  OR EDX,0xffffffff
007400CB  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
007400CE  D3 E2                     SHL EDX,CL
007400D0  F7 D2                     NOT EDX
007400D2  89 55 EC                  MOV dword ptr [EBP + -0x14],EDX
007400D5  C7 45 F8 00 00 00 00      MOV dword ptr [EBP + -0x8],0x0
007400DC  C7 45 F4 00 00 00 00      MOV dword ptr [EBP + -0xc],0x0
007400E3  EB 09                     JMP 0x007400ee
LAB_007400e5:
007400E5  8B 45 F4                  MOV EAX,dword ptr [EBP + -0xc]
007400E8  83 C0 01                  ADD EAX,0x1
007400EB  89 45 F4                  MOV dword ptr [EBP + -0xc],EAX
LAB_007400ee:
007400EE  83 7D F4 03               CMP dword ptr [EBP + -0xc],0x3
007400F2  7D 4D                     JGE 0x00740141
007400F4  8B 4D F4                  MOV ECX,dword ptr [EBP + -0xc]
007400F7  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
007400FA  8B 04 8A                  MOV EAX,dword ptr [EDX + ECX*0x4]
007400FD  23 45 EC                  AND EAX,dword ptr [EBP + -0x14]
00740100  89 45 F0                  MOV dword ptr [EBP + -0x10],EAX
00740103  8B 4D F4                  MOV ECX,dword ptr [EBP + -0xc]
00740106  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
00740109  8B 04 8A                  MOV EAX,dword ptr [EDX + ECX*0x4]
0074010C  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
0074010F  D3 E8                     SHR EAX,CL
00740111  8B 4D F4                  MOV ECX,dword ptr [EBP + -0xc]
00740114  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
00740117  89 04 8A                  MOV dword ptr [EDX + ECX*0x4],EAX
0074011A  8B 45 F4                  MOV EAX,dword ptr [EBP + -0xc]
0074011D  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
00740120  8B 14 81                  MOV EDX,dword ptr [ECX + EAX*0x4]
00740123  0B 55 F8                  OR EDX,dword ptr [EBP + -0x8]
00740126  8B 45 F4                  MOV EAX,dword ptr [EBP + -0xc]
00740129  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
0074012C  89 14 81                  MOV dword ptr [ECX + EAX*0x4],EDX
0074012F  B9 20 00 00 00            MOV ECX,0x20
00740134  2B 4D FC                  SUB ECX,dword ptr [EBP + -0x4]
00740137  8B 55 F0                  MOV EDX,dword ptr [EBP + -0x10]
0074013A  D3 E2                     SHL EDX,CL
0074013C  89 55 F8                  MOV dword ptr [EBP + -0x8],EDX
0074013F  EB A4                     JMP 0x007400e5
LAB_00740141:
00740141  C7 45 F4 02 00 00 00      MOV dword ptr [EBP + -0xc],0x2
00740148  EB 09                     JMP 0x00740153
LAB_0074014a:
0074014A  8B 45 F4                  MOV EAX,dword ptr [EBP + -0xc]
0074014D  83 E8 01                  SUB EAX,0x1
00740150  89 45 F4                  MOV dword ptr [EBP + -0xc],EAX
LAB_00740153:
00740153  83 7D F4 00               CMP dword ptr [EBP + -0xc],0x0
00740157  7C 2E                     JL 0x00740187
00740159  8B 4D F4                  MOV ECX,dword ptr [EBP + -0xc]
0074015C  3B 4D E8                  CMP ECX,dword ptr [EBP + -0x18]
0074015F  7C 17                     JL 0x00740178
00740161  8B 55 F4                  MOV EDX,dword ptr [EBP + -0xc]
00740164  2B 55 E8                  SUB EDX,dword ptr [EBP + -0x18]
00740167  8B 45 F4                  MOV EAX,dword ptr [EBP + -0xc]
0074016A  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
0074016D  8B 75 08                  MOV ESI,dword ptr [EBP + 0x8]
00740170  8B 14 96                  MOV EDX,dword ptr [ESI + EDX*0x4]
00740173  89 14 81                  MOV dword ptr [ECX + EAX*0x4],EDX
00740176  EB 0D                     JMP 0x00740185
LAB_00740178:
00740178  8B 45 F4                  MOV EAX,dword ptr [EBP + -0xc]
0074017B  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
0074017E  C7 04 81 00 00 00 00      MOV dword ptr [ECX + EAX*0x4],0x0
LAB_00740185:
00740185  EB C3                     JMP 0x0074014a
LAB_00740187:
00740187  5E                        POP ESI
00740188  8B E5                     MOV ESP,EBP
0074018A  5D                        POP EBP
0074018B  C3                        RET
