FUN_0064ff70:
0064FF70  55                        PUSH EBP
0064FF71  8B EC                     MOV EBP,ESP
0064FF73  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
0064FF76  33 D2                     XOR EDX,EDX
0064FF78  53                        PUSH EBX
0064FF79  BB 08 00 00 00            MOV EBX,0x8
0064FF7E  66 8B 08                  MOV CX,word ptr [EAX]
0064FF81  66 83 F9 01               CMP CX,0x1
0064FF85  7D 0E                     JGE 0x0064ff95
0064FF87  89 50 08                  MOV dword ptr [EAX + 0x8],EDX
LAB_0064ff8a:
0064FF8A  66 83 F9 02               CMP CX,0x2
0064FF8E  7D 12                     JGE 0x0064ffa2
0064FF90  89 50 0C                  MOV dword ptr [EAX + 0xc],EDX
0064FF93  EB 1A                     JMP 0x0064ffaf
LAB_0064ff95:
0064FF95  38 98 D0 00 00 00         CMP byte ptr [EAX + 0xd0],BL
0064FF9B  74 ED                     JZ 0x0064ff8a
0064FF9D  33 C0                     XOR EAX,EAX
0064FF9F  5B                        POP EBX
0064FFA0  5D                        POP EBP
0064FFA1  C3                        RET
LAB_0064ffa2:
0064FFA2  38 98 D1 00 00 00         CMP byte ptr [EAX + 0xd1],BL
0064FFA8  74 05                     JZ 0x0064ffaf
0064FFAA  33 C0                     XOR EAX,EAX
0064FFAC  5B                        POP EBX
0064FFAD  5D                        POP EBP
0064FFAE  C3                        RET
LAB_0064ffaf:
0064FFAF  66 83 F9 03               CMP CX,0x3
0064FFB3  7D 0E                     JGE 0x0064ffc3
0064FFB5  89 50 10                  MOV dword ptr [EAX + 0x10],EDX
LAB_0064ffb8:
0064FFB8  66 83 F9 04               CMP CX,0x4
0064FFBC  7D 12                     JGE 0x0064ffd0
0064FFBE  89 50 14                  MOV dword ptr [EAX + 0x14],EDX
0064FFC1  EB 1A                     JMP 0x0064ffdd
LAB_0064ffc3:
0064FFC3  38 98 D2 00 00 00         CMP byte ptr [EAX + 0xd2],BL
0064FFC9  74 ED                     JZ 0x0064ffb8
0064FFCB  33 C0                     XOR EAX,EAX
0064FFCD  5B                        POP EBX
0064FFCE  5D                        POP EBP
0064FFCF  C3                        RET
LAB_0064ffd0:
0064FFD0  38 98 D3 00 00 00         CMP byte ptr [EAX + 0xd3],BL
0064FFD6  74 05                     JZ 0x0064ffdd
0064FFD8  33 C0                     XOR EAX,EAX
0064FFDA  5B                        POP EBX
0064FFDB  5D                        POP EBP
0064FFDC  C3                        RET
LAB_0064ffdd:
0064FFDD  83 CA FF                  OR EDX,0xffffffff
0064FFE0  66 83 F9 05               CMP CX,0x5
0064FFE4  7D 0E                     JGE 0x0064fff4
0064FFE6  89 50 18                  MOV dword ptr [EAX + 0x18],EDX
LAB_0064ffe9:
0064FFE9  66 83 F9 06               CMP CX,0x6
0064FFED  7D 12                     JGE 0x00650001
0064FFEF  89 50 1C                  MOV dword ptr [EAX + 0x1c],EDX
0064FFF2  EB 1A                     JMP 0x0065000e
LAB_0064fff4:
0064FFF4  38 98 D4 00 00 00         CMP byte ptr [EAX + 0xd4],BL
0064FFFA  74 ED                     JZ 0x0064ffe9
0064FFFC  33 C0                     XOR EAX,EAX
0064FFFE  5B                        POP EBX
0064FFFF  5D                        POP EBP
00650000  C3                        RET
LAB_00650001:
00650001  38 98 D5 00 00 00         CMP byte ptr [EAX + 0xd5],BL
00650007  74 05                     JZ 0x0065000e
00650009  33 C0                     XOR EAX,EAX
0065000B  5B                        POP EBX
0065000C  5D                        POP EBP
0065000D  C3                        RET
LAB_0065000e:
0065000E  66 83 F9 07               CMP CX,0x7
00650012  7D 17                     JGE 0x0065002b
00650014  89 50 20                  MOV dword ptr [EAX + 0x20],EDX
LAB_00650017:
00650017  66 3B CB                  CMP CX,BX
0065001A  7D 1C                     JGE 0x00650038
0065001C  C7 40 24 01 00 00 00      MOV dword ptr [EAX + 0x24],0x1
00650023  B8 01 00 00 00            MOV EAX,0x1
00650028  5B                        POP EBX
00650029  5D                        POP EBP
0065002A  C3                        RET
LAB_0065002b:
0065002B  38 98 D6 00 00 00         CMP byte ptr [EAX + 0xd6],BL
00650031  74 E4                     JZ 0x00650017
00650033  33 C0                     XOR EAX,EAX
00650035  5B                        POP EBX
00650036  5D                        POP EBP
00650037  C3                        RET
LAB_00650038:
00650038  38 98 D7 00 00 00         CMP byte ptr [EAX + 0xd7],BL
0065003E  74 05                     JZ 0x00650045
00650040  33 C0                     XOR EAX,EAX
00650042  5B                        POP EBX
00650043  5D                        POP EBP
00650044  C3                        RET
LAB_00650045:
00650045  B8 01 00 00 00            MOV EAX,0x1
0065004A  5B                        POP EBX
0065004B  5D                        POP EBP
0065004C  C3                        RET
