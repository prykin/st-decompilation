_gmtime:
0072FC30  55                        PUSH EBP
0072FC31  8B EC                     MOV EBP,ESP
0072FC33  83 EC 14                  SUB ESP,0x14
0072FC36  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
0072FC39  8B 08                     MOV ECX,dword ptr [EAX]
0072FC3B  89 4D F4                  MOV dword ptr [EBP + -0xc],ECX
0072FC3E  C7 45 F8 00 00 00 00      MOV dword ptr [EBP + -0x8],0x0
0072FC45  C7 45 FC A8 71 85 00      MOV dword ptr [EBP + -0x4],0x8571a8
0072FC4C  83 7D F4 00               CMP dword ptr [EBP + -0xc],0x0
0072FC50  7D 07                     JGE 0x0072fc59
0072FC52  33 C0                     XOR EAX,EAX
0072FC54  E9 94 01 00 00            JMP 0x0072fded
LAB_0072fc59:
0072FC59  8B 45 F4                  MOV EAX,dword ptr [EBP + -0xc]
0072FC5C  99                        CDQ
0072FC5D  B9 80 1F 86 07            MOV ECX,0x7861f80
0072FC62  F7 F9                     IDIV ECX
0072FC64  89 45 EC                  MOV dword ptr [EBP + -0x14],EAX
0072FC67  8B 55 EC                  MOV EDX,dword ptr [EBP + -0x14]
0072FC6A  69 D2 80 1F 86 07         IMUL EDX,EDX,0x7861f80
0072FC70  8B 45 F4                  MOV EAX,dword ptr [EBP + -0xc]
0072FC73  2B C2                     SUB EAX,EDX
0072FC75  89 45 F4                  MOV dword ptr [EBP + -0xc],EAX
0072FC78  8B 4D EC                  MOV ECX,dword ptr [EBP + -0x14]
0072FC7B  8D 14 8D 46 00 00 00      LEA EDX,[ECX*0x4 + 0x46]
0072FC82  89 55 EC                  MOV dword ptr [EBP + -0x14],EDX
0072FC85  81 7D F4 80 33 E1 01      CMP dword ptr [EBP + -0xc],0x1e13380
0072FC8C  7C 5B                     JL 0x0072fce9
0072FC8E  8B 45 EC                  MOV EAX,dword ptr [EBP + -0x14]
0072FC91  83 C0 01                  ADD EAX,0x1
0072FC94  89 45 EC                  MOV dword ptr [EBP + -0x14],EAX
0072FC97  8B 4D F4                  MOV ECX,dword ptr [EBP + -0xc]
0072FC9A  81 E9 80 33 E1 01         SUB ECX,0x1e13380
0072FCA0  89 4D F4                  MOV dword ptr [EBP + -0xc],ECX
0072FCA3  81 7D F4 80 33 E1 01      CMP dword ptr [EBP + -0xc],0x1e13380
0072FCAA  7C 3D                     JL 0x0072fce9
0072FCAC  8B 55 EC                  MOV EDX,dword ptr [EBP + -0x14]
0072FCAF  83 C2 01                  ADD EDX,0x1
0072FCB2  89 55 EC                  MOV dword ptr [EBP + -0x14],EDX
0072FCB5  8B 45 F4                  MOV EAX,dword ptr [EBP + -0xc]
0072FCB8  2D 80 33 E1 01            SUB EAX,0x1e13380
0072FCBD  89 45 F4                  MOV dword ptr [EBP + -0xc],EAX
0072FCC0  81 7D F4 00 85 E2 01      CMP dword ptr [EBP + -0xc],0x1e28500
0072FCC7  7C 17                     JL 0x0072fce0
0072FCC9  8B 4D EC                  MOV ECX,dword ptr [EBP + -0x14]
0072FCCC  83 C1 01                  ADD ECX,0x1
0072FCCF  89 4D EC                  MOV dword ptr [EBP + -0x14],ECX
0072FCD2  8B 55 F4                  MOV EDX,dword ptr [EBP + -0xc]
0072FCD5  81 EA 00 85 E2 01         SUB EDX,0x1e28500
0072FCDB  89 55 F4                  MOV dword ptr [EBP + -0xc],EDX
0072FCDE  EB 09                     JMP 0x0072fce9
LAB_0072fce0:
0072FCE0  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
0072FCE3  83 C0 01                  ADD EAX,0x1
0072FCE6  89 45 F8                  MOV dword ptr [EBP + -0x8],EAX
LAB_0072fce9:
0072FCE9  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
0072FCEC  8B 55 EC                  MOV EDX,dword ptr [EBP + -0x14]
0072FCEF  89 51 14                  MOV dword ptr [ECX + 0x14],EDX
0072FCF2  8B 45 F4                  MOV EAX,dword ptr [EBP + -0xc]
0072FCF5  99                        CDQ
0072FCF6  B9 80 51 01 00            MOV ECX,0x15180
0072FCFB  F7 F9                     IDIV ECX
0072FCFD  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
0072FD00  89 42 1C                  MOV dword ptr [EDX + 0x1c],EAX
0072FD03  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
0072FD06  8B 48 1C                  MOV ECX,dword ptr [EAX + 0x1c]
0072FD09  69 C9 80 51 01 00         IMUL ECX,ECX,0x15180
0072FD0F  8B 55 F4                  MOV EDX,dword ptr [EBP + -0xc]
0072FD12  2B D1                     SUB EDX,ECX
0072FD14  89 55 F4                  MOV dword ptr [EBP + -0xc],EDX
0072FD17  83 7D F8 00               CMP dword ptr [EBP + -0x8],0x0
0072FD1B  74 09                     JZ 0x0072fd26
0072FD1D  C7 45 F0 F0 1E 7F 00      MOV dword ptr [EBP + -0x10],0x7f1ef0
0072FD24  EB 07                     JMP 0x0072fd2d
LAB_0072fd26:
0072FD26  C7 45 F0 24 1F 7F 00      MOV dword ptr [EBP + -0x10],0x7f1f24
LAB_0072fd2d:
0072FD2D  C7 45 EC 01 00 00 00      MOV dword ptr [EBP + -0x14],0x1
0072FD34  EB 09                     JMP 0x0072fd3f
LAB_0072fd36:
0072FD36  8B 45 EC                  MOV EAX,dword ptr [EBP + -0x14]
0072FD39  83 C0 01                  ADD EAX,0x1
0072FD3C  89 45 EC                  MOV dword ptr [EBP + -0x14],EAX
LAB_0072fd3f:
0072FD3F  8B 4D EC                  MOV ECX,dword ptr [EBP + -0x14]
0072FD42  8B 55 F0                  MOV EDX,dword ptr [EBP + -0x10]
0072FD45  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
0072FD48  8B 0C 8A                  MOV ECX,dword ptr [EDX + ECX*0x4]
0072FD4B  3B 48 1C                  CMP ECX,dword ptr [EAX + 0x1c]
0072FD4E  7D 02                     JGE 0x0072fd52
0072FD50  EB E4                     JMP 0x0072fd36
LAB_0072fd52:
0072FD52  8B 55 EC                  MOV EDX,dword ptr [EBP + -0x14]
0072FD55  83 EA 01                  SUB EDX,0x1
0072FD58  89 55 EC                  MOV dword ptr [EBP + -0x14],EDX
0072FD5B  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
0072FD5E  8B 4D EC                  MOV ECX,dword ptr [EBP + -0x14]
0072FD61  89 48 10                  MOV dword ptr [EAX + 0x10],ECX
0072FD64  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
0072FD67  8B 45 EC                  MOV EAX,dword ptr [EBP + -0x14]
0072FD6A  8B 4D F0                  MOV ECX,dword ptr [EBP + -0x10]
0072FD6D  8B 52 1C                  MOV EDX,dword ptr [EDX + 0x1c]
0072FD70  2B 14 81                  SUB EDX,dword ptr [ECX + EAX*0x4]
0072FD73  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
0072FD76  89 50 0C                  MOV dword ptr [EAX + 0xc],EDX
0072FD79  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
0072FD7C  8B 01                     MOV EAX,dword ptr [ECX]
0072FD7E  99                        CDQ
0072FD7F  B9 80 51 01 00            MOV ECX,0x15180
0072FD84  F7 F9                     IDIV ECX
0072FD86  83 C0 04                  ADD EAX,0x4
0072FD89  99                        CDQ
0072FD8A  B9 07 00 00 00            MOV ECX,0x7
0072FD8F  F7 F9                     IDIV ECX
0072FD91  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
0072FD94  89 50 18                  MOV dword ptr [EAX + 0x18],EDX
0072FD97  8B 45 F4                  MOV EAX,dword ptr [EBP + -0xc]
0072FD9A  99                        CDQ
0072FD9B  B9 10 0E 00 00            MOV ECX,0xe10
0072FDA0  F7 F9                     IDIV ECX
0072FDA2  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
0072FDA5  89 42 08                  MOV dword ptr [EDX + 0x8],EAX
0072FDA8  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
0072FDAB  8B 48 08                  MOV ECX,dword ptr [EAX + 0x8]
0072FDAE  69 C9 10 0E 00 00         IMUL ECX,ECX,0xe10
0072FDB4  8B 55 F4                  MOV EDX,dword ptr [EBP + -0xc]
0072FDB7  2B D1                     SUB EDX,ECX
0072FDB9  89 55 F4                  MOV dword ptr [EBP + -0xc],EDX
0072FDBC  8B 45 F4                  MOV EAX,dword ptr [EBP + -0xc]
0072FDBF  99                        CDQ
0072FDC0  B9 3C 00 00 00            MOV ECX,0x3c
0072FDC5  F7 F9                     IDIV ECX
0072FDC7  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
0072FDCA  89 42 04                  MOV dword ptr [EDX + 0x4],EAX
0072FDCD  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
0072FDD0  8B 48 04                  MOV ECX,dword ptr [EAX + 0x4]
0072FDD3  6B C9 3C                  IMUL ECX,ECX,0x3c
0072FDD6  8B 55 F4                  MOV EDX,dword ptr [EBP + -0xc]
0072FDD9  2B D1                     SUB EDX,ECX
0072FDDB  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
0072FDDE  89 10                     MOV dword ptr [EAX],EDX
0072FDE0  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
0072FDE3  C7 41 20 00 00 00 00      MOV dword ptr [ECX + 0x20],0x0
0072FDEA  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
LAB_0072fded:
0072FDED  8B E5                     MOV ESP,EBP
0072FDEF  5D                        POP EBP
0072FDF0  C3                        RET
