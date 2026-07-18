FUN_0064fd80:
0064FD80  55                        PUSH EBP
0064FD81  8B EC                     MOV EBP,ESP
0064FD83  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
0064FD86  33 D2                     XOR EDX,EDX
0064FD88  53                        PUSH EBX
0064FD89  BB 08 00 00 00            MOV EBX,0x8
0064FD8E  66 8B 08                  MOV CX,word ptr [EAX]
0064FD91  66 83 F9 01               CMP CX,0x1
0064FD95  7D 0E                     JGE 0x0064fda5
0064FD97  89 50 08                  MOV dword ptr [EAX + 0x8],EDX
LAB_0064fd9a:
0064FD9A  66 83 F9 02               CMP CX,0x2
0064FD9E  7D 12                     JGE 0x0064fdb2
0064FDA0  89 50 0C                  MOV dword ptr [EAX + 0xc],EDX
0064FDA3  EB 1B                     JMP 0x0064fdc0
LAB_0064fda5:
0064FDA5  38 98 D0 00 00 00         CMP byte ptr [EAX + 0xd0],BL
0064FDAB  74 ED                     JZ 0x0064fd9a
0064FDAD  33 C0                     XOR EAX,EAX
0064FDAF  5B                        POP EBX
0064FDB0  5D                        POP EBP
0064FDB1  C3                        RET
LAB_0064fdb2:
0064FDB2  80 B8 D1 00 00 00 0A      CMP byte ptr [EAX + 0xd1],0xa
0064FDB9  74 05                     JZ 0x0064fdc0
0064FDBB  33 C0                     XOR EAX,EAX
0064FDBD  5B                        POP EBX
0064FDBE  5D                        POP EBP
0064FDBF  C3                        RET
LAB_0064fdc0:
0064FDC0  66 83 F9 03               CMP CX,0x3
0064FDC4  7D 0E                     JGE 0x0064fdd4
0064FDC6  89 50 10                  MOV dword ptr [EAX + 0x10],EDX
LAB_0064fdc9:
0064FDC9  66 83 F9 04               CMP CX,0x4
0064FDCD  7D 12                     JGE 0x0064fde1
0064FDCF  89 50 14                  MOV dword ptr [EAX + 0x14],EDX
0064FDD2  EB 1A                     JMP 0x0064fdee
LAB_0064fdd4:
0064FDD4  38 98 D2 00 00 00         CMP byte ptr [EAX + 0xd2],BL
0064FDDA  74 ED                     JZ 0x0064fdc9
0064FDDC  33 C0                     XOR EAX,EAX
0064FDDE  5B                        POP EBX
0064FDDF  5D                        POP EBP
0064FDE0  C3                        RET
LAB_0064fde1:
0064FDE1  38 98 D3 00 00 00         CMP byte ptr [EAX + 0xd3],BL
0064FDE7  74 05                     JZ 0x0064fdee
0064FDE9  33 C0                     XOR EAX,EAX
0064FDEB  5B                        POP EBX
0064FDEC  5D                        POP EBP
0064FDED  C3                        RET
LAB_0064fdee:
0064FDEE  66 83 F9 05               CMP CX,0x5
0064FDF2  7D 11                     JGE 0x0064fe05
0064FDF4  89 50 18                  MOV dword ptr [EAX + 0x18],EDX
LAB_0064fdf7:
0064FDF7  83 CA FF                  OR EDX,0xffffffff
0064FDFA  66 83 F9 06               CMP CX,0x6
0064FDFE  7D 12                     JGE 0x0064fe12
0064FE00  89 50 1C                  MOV dword ptr [EAX + 0x1c],EDX
0064FE03  EB 1A                     JMP 0x0064fe1f
LAB_0064fe05:
0064FE05  38 98 D4 00 00 00         CMP byte ptr [EAX + 0xd4],BL
0064FE0B  74 EA                     JZ 0x0064fdf7
0064FE0D  33 C0                     XOR EAX,EAX
0064FE0F  5B                        POP EBX
0064FE10  5D                        POP EBP
0064FE11  C3                        RET
LAB_0064fe12:
0064FE12  38 98 D5 00 00 00         CMP byte ptr [EAX + 0xd5],BL
0064FE18  74 05                     JZ 0x0064fe1f
0064FE1A  33 C0                     XOR EAX,EAX
0064FE1C  5B                        POP EBX
0064FE1D  5D                        POP EBP
0064FE1E  C3                        RET
LAB_0064fe1f:
0064FE1F  66 83 F9 07               CMP CX,0x7
0064FE23  7D 0D                     JGE 0x0064fe32
0064FE25  89 50 20                  MOV dword ptr [EAX + 0x20],EDX
LAB_0064fe28:
0064FE28  66 3B CB                  CMP CX,BX
0064FE2B  7D 12                     JGE 0x0064fe3f
0064FE2D  89 50 24                  MOV dword ptr [EAX + 0x24],EDX
0064FE30  EB 1A                     JMP 0x0064fe4c
LAB_0064fe32:
0064FE32  38 98 D6 00 00 00         CMP byte ptr [EAX + 0xd6],BL
0064FE38  74 EE                     JZ 0x0064fe28
0064FE3A  33 C0                     XOR EAX,EAX
0064FE3C  5B                        POP EBX
0064FE3D  5D                        POP EBP
0064FE3E  C3                        RET
LAB_0064fe3f:
0064FE3F  38 98 D7 00 00 00         CMP byte ptr [EAX + 0xd7],BL
0064FE45  74 05                     JZ 0x0064fe4c
0064FE47  33 C0                     XOR EAX,EAX
0064FE49  5B                        POP EBX
0064FE4A  5D                        POP EBP
0064FE4B  C3                        RET
LAB_0064fe4c:
0064FE4C  66 83 F9 09               CMP CX,0x9
0064FE50  7D 0F                     JGE 0x0064fe61
0064FE52  C7 40 28 01 00 00 00      MOV dword ptr [EAX + 0x28],0x1
LAB_0064fe59:
0064FE59  B8 01 00 00 00            MOV EAX,0x1
0064FE5E  5B                        POP EBX
0064FE5F  5D                        POP EBP
0064FE60  C3                        RET
LAB_0064fe61:
0064FE61  38 98 D8 00 00 00         CMP byte ptr [EAX + 0xd8],BL
0064FE67  74 F0                     JZ 0x0064fe59
0064FE69  33 C0                     XOR EAX,EAX
0064FE6B  5B                        POP EBX
0064FE6C  5D                        POP EBP
0064FE6D  C3                        RET
