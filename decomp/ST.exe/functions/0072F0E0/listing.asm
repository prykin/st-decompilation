__initterm:
0072F0E0  55                        PUSH EBP
0072F0E1  8B EC                     MOV EBP,ESP
LAB_0072f0e3:
0072F0E3  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
0072F0E6  3B 45 0C                  CMP EAX,dword ptr [EBP + 0xc]
0072F0E9  73 18                     JNC 0x0072f103
0072F0EB  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
0072F0EE  83 39 00                  CMP dword ptr [ECX],0x0
0072F0F1  74 05                     JZ 0x0072f0f8
0072F0F3  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
0072F0F6  FF 12                     CALL dword ptr [EDX]
LAB_0072f0f8:
0072F0F8  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
0072F0FB  83 C0 04                  ADD EAX,0x4
0072F0FE  89 45 08                  MOV dword ptr [EBP + 0x8],EAX
0072F101  EB E0                     JMP 0x0072f0e3
LAB_0072f103:
0072F103  5D                        POP EBP
0072F104  C3                        RET
