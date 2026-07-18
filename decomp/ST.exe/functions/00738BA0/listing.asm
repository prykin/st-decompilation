__whiteout:
00738BA0  55                        PUSH EBP
00738BA1  8B EC                     MOV EBP,ESP
00738BA3  51                        PUSH ECX
LAB_00738ba4:
00738BA4  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
00738BA7  8B 08                     MOV ECX,dword ptr [EAX]
00738BA9  83 C1 01                  ADD ECX,0x1
00738BAC  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
00738BAF  89 0A                     MOV dword ptr [EDX],ECX
00738BB1  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
00738BB4  50                        PUSH EAX
00738BB5  E8 66 FF FF FF            CALL 0x00738b20
00738BBA  83 C4 04                  ADD ESP,0x4
00738BBD  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
00738BC0  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
00738BC3  51                        PUSH ECX
00738BC4  E8 97 BB FF FF            CALL 0x00734760
00738BC9  83 C4 04                  ADD ESP,0x4
00738BCC  85 C0                     TEST EAX,EAX
00738BCE  74 02                     JZ 0x00738bd2
00738BD0  EB D2                     JMP 0x00738ba4
LAB_00738bd2:
00738BD2  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
00738BD5  8B E5                     MOV ESP,EBP
00738BD7  5D                        POP EBP
00738BD8  C3                        RET
