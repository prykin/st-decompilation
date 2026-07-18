FUN_006b4fa0:
006B4FA0  55                        PUSH EBP
006B4FA1  8B EC                     MOV EBP,ESP
006B4FA3  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
006B4FA6  8B 42 20                  MOV EAX,dword ptr [EDX + 0x20]
006B4FA9  85 C0                     TEST EAX,EAX
006B4FAB  75 29                     JNZ 0x006b4fd6
006B4FAD  33 C9                     XOR ECX,ECX
006B4FAF  66 8B 4A 0E               MOV CX,word ptr [EDX + 0xe]
006B4FB3  85 C9                     TEST ECX,ECX
006B4FB5  74 1F                     JZ 0x006b4fd6
006B4FB7  83 F9 08                  CMP ECX,0x8
006B4FBA  7F 0F                     JG 0x006b4fcb
006B4FBC  B8 01 00 00 00            MOV EAX,0x1
006B4FC1  D3 E0                     SHL EAX,CL
006B4FC3  8D 44 82 28               LEA EAX,[EDX + EAX*0x4 + 0x28]
006B4FC7  5D                        POP EBP
006B4FC8  C2 04 00                  RET 0x4
LAB_006b4fcb:
006B4FCB  83 7A 10 03               CMP dword ptr [EDX + 0x10],0x3
006B4FCF  75 05                     JNZ 0x006b4fd6
006B4FD1  B8 03 00 00 00            MOV EAX,0x3
LAB_006b4fd6:
006B4FD6  8D 44 82 28               LEA EAX,[EDX + EAX*0x4 + 0x28]
006B4FDA  5D                        POP EBP
006B4FDB  C2 04 00                  RET 0x4
