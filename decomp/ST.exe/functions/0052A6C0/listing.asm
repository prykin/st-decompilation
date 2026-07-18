FUN_0052a6c0:
0052A6C0  55                        PUSH EBP
0052A6C1  8B EC                     MOV EBP,ESP
0052A6C3  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
0052A6C6  33 C9                     XOR ECX,ECX
0052A6C8  33 C0                     XOR EAX,EAX
0052A6CA  66 8B 4A 14               MOV CX,word ptr [EDX + 0x14]
0052A6CE  85 C9                     TEST ECX,ECX
0052A6D0  7C 0A                     JL 0x0052a6dc
0052A6D2  83 F9 01                  CMP ECX,0x1
0052A6D5  7F 05                     JG 0x0052a6dc
0052A6D7  B8 01 00 00 00            MOV EAX,0x1
LAB_0052a6dc:
0052A6DC  5D                        POP EBP
0052A6DD  C3                        RET
