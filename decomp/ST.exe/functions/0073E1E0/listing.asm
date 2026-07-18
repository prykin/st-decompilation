__GET_RTERRMSG:
0073E1E0  55                        PUSH EBP
0073E1E1  8B EC                     MOV EBP,ESP
0073E1E3  51                        PUSH ECX
0073E1E4  C7 45 FC 00 00 00 00      MOV dword ptr [EBP + -0x4],0x0
0073E1EB  EB 09                     JMP 0x0073e1f6
LAB_0073e1ed:
0073E1ED  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
0073E1F0  83 C0 01                  ADD EAX,0x1
0073E1F3  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
LAB_0073e1f6:
0073E1F6  83 7D FC 12               CMP dword ptr [EBP + -0x4],0x12
0073E1FA  73 13                     JNC 0x0073e20f
0073E1FC  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
0073E1FF  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
0073E202  3B 14 CD 00 20 7F 00      CMP EDX,dword ptr [ECX*0x8 + 0x7f2000]
0073E209  75 02                     JNZ 0x0073e20d
0073E20B  EB 02                     JMP 0x0073e20f
LAB_0073e20d:
0073E20D  EB DE                     JMP 0x0073e1ed
LAB_0073e20f:
0073E20F  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
0073E212  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
0073E215  3B 0C C5 00 20 7F 00      CMP ECX,dword ptr [EAX*0x8 + 0x7f2000]
0073E21C  75 0C                     JNZ 0x0073e22a
0073E21E  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
0073E221  8B 04 D5 04 20 7F 00      MOV EAX,dword ptr [EDX*0x8 + 0x7f2004]
0073E228  EB 02                     JMP 0x0073e22c
LAB_0073e22a:
0073E22A  33 C0                     XOR EAX,EAX
LAB_0073e22c:
0073E22C  8B E5                     MOV ESP,EBP
0073E22E  5D                        POP EBP
0073E22F  C3                        RET
