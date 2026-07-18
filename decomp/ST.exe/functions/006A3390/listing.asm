FUN_006a3390:
006A3390  55                        PUSH EBP
006A3391  8B EC                     MOV EBP,ESP
006A3393  8B 4D 0C                  MOV ECX,dword ptr [EBP + 0xc]
006A3396  53                        PUSH EBX
006A3397  8B 5D 10                  MOV EBX,dword ptr [EBP + 0x10]
006A339A  56                        PUSH ESI
006A339B  8B 75 14                  MOV ESI,dword ptr [EBP + 0x14]
006A339E  57                        PUSH EDI
006A339F  8B 7D 08                  MOV EDI,dword ptr [EBP + 0x8]
006A33A2  33 C0                     XOR EAX,EAX
006A33A4  3B FB                     CMP EDI,EBX
006A33A6  74 06                     JZ 0x006a33ae
006A33A8  3B CE                     CMP ECX,ESI
006A33AA  75 06                     JNZ 0x006a33b2
006A33AC  EB 06                     JMP 0x006a33b4
LAB_006a33ae:
006A33AE  3B CE                     CMP ECX,ESI
006A33B0  75 02                     JNZ 0x006a33b4
LAB_006a33b2:
006A33B2  33 C0                     XOR EAX,EAX
LAB_006a33b4:
006A33B4  8B D7                     MOV EDX,EDI
006A33B6  2B D3                     SUB EDX,EBX
006A33B8  85 D2                     TEST EDX,EDX
006A33BA  7E 0B                     JLE 0x006a33c7
006A33BC  3B CE                     CMP ECX,ESI
006A33BE  75 05                     JNZ 0x006a33c5
006A33C0  B8 01 00 00 00            MOV EAX,0x1
LAB_006a33c5:
006A33C5  85 D2                     TEST EDX,EDX
LAB_006a33c7:
006A33C7  7D 09                     JGE 0x006a33d2
006A33C9  3B CE                     CMP ECX,ESI
006A33CB  75 05                     JNZ 0x006a33d2
006A33CD  B8 03 00 00 00            MOV EAX,0x3
LAB_006a33d2:
006A33D2  2B CE                     SUB ECX,ESI
006A33D4  85 C9                     TEST ECX,ECX
006A33D6  7E 0B                     JLE 0x006a33e3
006A33D8  3B FB                     CMP EDI,EBX
006A33DA  75 05                     JNZ 0x006a33e1
006A33DC  B8 04 00 00 00            MOV EAX,0x4
LAB_006a33e1:
006A33E1  85 C9                     TEST ECX,ECX
LAB_006a33e3:
006A33E3  7D 09                     JGE 0x006a33ee
006A33E5  3B FB                     CMP EDI,EBX
006A33E7  75 05                     JNZ 0x006a33ee
006A33E9  B8 02 00 00 00            MOV EAX,0x2
LAB_006a33ee:
006A33EE  5F                        POP EDI
006A33EF  5E                        POP ESI
006A33F0  5B                        POP EBX
006A33F1  5D                        POP EBP
006A33F2  C3                        RET
