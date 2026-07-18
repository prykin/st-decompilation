xcptlookup:
0073D2C0  55                        PUSH EBP
0073D2C1  8B EC                     MOV EBP,ESP
0073D2C3  51                        PUSH ECX
0073D2C4  C7 45 FC 70 1F 7F 00      MOV dword ptr [EBP + -0x4],0x7f1f70
LAB_0073d2cb:
0073D2CB  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
0073D2CE  8B 08                     MOV ECX,dword ptr [EAX]
0073D2D0  3B 4D 08                  CMP ECX,dword ptr [EBP + 0x8]
0073D2D3  74 1D                     JZ 0x0073d2f2
0073D2D5  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
0073D2D8  83 C2 0C                  ADD EDX,0xc
0073D2DB  89 55 FC                  MOV dword ptr [EBP + -0x4],EDX
0073D2DE  A1 F0 1F 7F 00            MOV EAX,[0x007f1ff0]
0073D2E3  6B C0 0C                  IMUL EAX,EAX,0xc
0073D2E6  05 70 1F 7F 00            ADD EAX,0x7f1f70
0073D2EB  39 45 FC                  CMP dword ptr [EBP + -0x4],EAX
0073D2EE  73 02                     JNC 0x0073d2f2
0073D2F0  EB D9                     JMP 0x0073d2cb
LAB_0073d2f2:
0073D2F2  8B 0D F0 1F 7F 00         MOV ECX,dword ptr [0x007f1ff0]
0073D2F8  6B C9 0C                  IMUL ECX,ECX,0xc
0073D2FB  81 C1 70 1F 7F 00         ADD ECX,0x7f1f70
0073D301  39 4D FC                  CMP dword ptr [EBP + -0x4],ECX
0073D304  73 0A                     JNC 0x0073d310
0073D306  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
0073D309  8B 02                     MOV EAX,dword ptr [EDX]
0073D30B  3B 45 08                  CMP EAX,dword ptr [EBP + 0x8]
0073D30E  74 04                     JZ 0x0073d314
LAB_0073d310:
0073D310  33 C0                     XOR EAX,EAX
0073D312  EB 03                     JMP 0x0073d317
LAB_0073d314:
0073D314  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
LAB_0073d317:
0073D317  8B E5                     MOV ESP,EBP
0073D319  5D                        POP EBP
0073D31A  C3                        RET
