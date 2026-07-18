FUN_006525e0:
006525E0  55                        PUSH EBP
006525E1  8B EC                     MOV EBP,ESP
006525E3  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
006525E6  33 C0                     XOR EAX,EAX
006525E8  BA 08 00 00 00            MOV EDX,0x8
LAB_006525ed:
006525ED  38 94 01 D0 00 00 00      CMP byte ptr [ECX + EAX*0x1 + 0xd0],DL
006525F4  75 36                     JNZ 0x0065262c
006525F6  40                        INC EAX
006525F7  83 F8 06                  CMP EAX,0x6
006525FA  7C F1                     JL 0x006525ed
006525FC  66 8B 01                  MOV AX,word ptr [ECX]
006525FF  66 3D 07 00               CMP AX,0x7
00652603  7D 1F                     JGE 0x00652624
00652605  C7 41 20 00 00 00 00      MOV dword ptr [ECX + 0x20],0x0
LAB_0065260c:
0065260C  66 3B C2                  CMP AX,DX
0065260F  7D 1F                     JGE 0x00652630
00652611  8B 51 10                  MOV EDX,dword ptr [ECX + 0x10]
00652614  33 C0                     XOR EAX,EAX
00652616  85 D2                     TEST EDX,EDX
00652618  C7 41 24 00 00 00 00      MOV dword ptr [ECX + 0x24],0x0
0065261F  0F 9D C0                  SETGE AL
00652622  5D                        POP EBP
00652623  C3                        RET
LAB_00652624:
00652624  38 91 D6 00 00 00         CMP byte ptr [ECX + 0xd6],DL
0065262A  74 E0                     JZ 0x0065260c
LAB_0065262c:
0065262C  33 C0                     XOR EAX,EAX
0065262E  5D                        POP EBP
0065262F  C3                        RET
LAB_00652630:
00652630  38 91 D7 00 00 00         CMP byte ptr [ECX + 0xd7],DL
00652636  74 04                     JZ 0x0065263c
00652638  33 C0                     XOR EAX,EAX
0065263A  5D                        POP EBP
0065263B  C3                        RET
LAB_0065263c:
0065263C  8B 51 10                  MOV EDX,dword ptr [ECX + 0x10]
0065263F  33 C0                     XOR EAX,EAX
00652641  85 D2                     TEST EDX,EDX
00652643  0F 9D C0                  SETGE AL
00652646  5D                        POP EBP
00652647  C3                        RET
