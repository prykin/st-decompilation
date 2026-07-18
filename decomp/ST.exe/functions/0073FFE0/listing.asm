__CopyMan:
0073FFE0  55                        PUSH EBP
0073FFE1  8B EC                     MOV EBP,ESP
0073FFE3  83 EC 0C                  SUB ESP,0xc
0073FFE6  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
0073FFE9  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
0073FFEC  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
0073FFEF  89 4D F8                  MOV dword ptr [EBP + -0x8],ECX
0073FFF2  C7 45 F4 00 00 00 00      MOV dword ptr [EBP + -0xc],0x0
0073FFF9  EB 09                     JMP 0x00740004
LAB_0073fffb:
0073FFFB  8B 55 F4                  MOV EDX,dword ptr [EBP + -0xc]
0073FFFE  83 C2 01                  ADD EDX,0x1
00740001  89 55 F4                  MOV dword ptr [EBP + -0xc],EDX
LAB_00740004:
00740004  83 7D F4 03               CMP dword ptr [EBP + -0xc],0x3
00740008  7D 1E                     JGE 0x00740028
0074000A  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
0074000D  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
00740010  8B 11                     MOV EDX,dword ptr [ECX]
00740012  89 10                     MOV dword ptr [EAX],EDX
00740014  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
00740017  83 C0 04                  ADD EAX,0x4
0074001A  89 45 F8                  MOV dword ptr [EBP + -0x8],EAX
0074001D  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
00740020  83 C1 04                  ADD ECX,0x4
00740023  89 4D FC                  MOV dword ptr [EBP + -0x4],ECX
00740026  EB D3                     JMP 0x0073fffb
LAB_00740028:
00740028  8B E5                     MOV ESP,EBP
0074002A  5D                        POP EBP
0074002B  C3                        RET
