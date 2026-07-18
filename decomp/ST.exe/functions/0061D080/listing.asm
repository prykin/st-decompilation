FUN_0061d080:
0061D080  55                        PUSH EBP
0061D081  8B EC                     MOV EBP,ESP
0061D083  8B 81 93 00 00 00         MOV EAX,dword ptr [ECX + 0x93]
0061D089  83 F8 05                  CMP EAX,0x5
0061D08C  74 16                     JZ 0x0061d0a4
0061D08E  83 F8 06                  CMP EAX,0x6
0061D091  74 11                     JZ 0x0061d0a4
0061D093  66 8B 45 0C               MOV AX,word ptr [EBP + 0xc]
0061D097  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
0061D09A  66 89 81 89 00 00 00      MOV word ptr [ECX + 0x89],AX
0061D0A1  89 51 51                  MOV dword ptr [ECX + 0x51],EDX
LAB_0061d0a4:
0061D0A4  5D                        POP EBP
0061D0A5  C2 08 00                  RET 0x8
