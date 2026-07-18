FUN_0072da40:
0072DA40  51                        PUSH ECX
0072DA41  3D 00 10 00 00            CMP EAX,0x1000
0072DA46  8D 4C 24 08               LEA ECX,[ESP + 0x8]
0072DA4A  72 14                     JC 0x0072da60
LAB_0072da4c:
0072DA4C  81 E9 00 10 00 00         SUB ECX,0x1000
0072DA52  2D 00 10 00 00            SUB EAX,0x1000
0072DA57  85 01                     TEST dword ptr [ECX],EAX
0072DA59  3D 00 10 00 00            CMP EAX,0x1000
0072DA5E  73 EC                     JNC 0x0072da4c
LAB_0072da60:
0072DA60  2B C8                     SUB ECX,EAX
0072DA62  8B C4                     MOV EAX,ESP
0072DA64  85 01                     TEST dword ptr [ECX],EAX
0072DA66  8B E1                     MOV ESP,ECX
0072DA68  8B 08                     MOV ECX,dword ptr [EAX]
0072DA6A  8B 40 04                  MOV EAX,dword ptr [EAX + 0x4]
0072DA6D  50                        PUSH EAX
0072DA6E  C3                        RET
