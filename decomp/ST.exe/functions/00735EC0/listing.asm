__get_fname:
00735EC0  55                        PUSH EBP
00735EC1  8B EC                     MOV EBP,ESP
00735EC3  51                        PUSH ECX
00735EC4  C7 45 FC 00 00 00 00      MOV dword ptr [EBP + -0x4],0x0
00735ECB  EB 09                     JMP 0x00735ed6
LAB_00735ecd:
00735ECD  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
00735ED0  83 C0 01                  ADD EAX,0x1
00735ED3  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
LAB_00735ed6:
00735ED6  83 7D FC 1B               CMP dword ptr [EBP + -0x4],0x1b
00735EDA  7D 1D                     JGE 0x00735ef9
00735EDC  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
00735EDF  8B 14 CD 50 15 7F 00      MOV EDX,dword ptr [ECX*0x8 + 0x7f1550]
00735EE6  3B 55 08                  CMP EDX,dword ptr [EBP + 0x8]
00735EE9  75 0C                     JNZ 0x00735ef7
00735EEB  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
00735EEE  8B 04 C5 54 15 7F 00      MOV EAX,dword ptr [EAX*0x8 + 0x7f1554]
00735EF5  EB 04                     JMP 0x00735efb
LAB_00735ef7:
00735EF7  EB D4                     JMP 0x00735ecd
LAB_00735ef9:
00735EF9  33 C0                     XOR EAX,EAX
LAB_00735efb:
00735EFB  8B E5                     MOV ESP,EBP
00735EFD  5D                        POP EBP
00735EFE  C3                        RET
