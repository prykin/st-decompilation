STGroupC::GetTOBJQty:
00423520  55                        PUSH EBP
00423521  8B EC                     MOV EBP,ESP
00423523  83 EC 54                  SUB ESP,0x54
00423526  A1 F8 8D 85 00            MOV EAX,[0x00858df8]
0042352B  53                        PUSH EBX
0042352C  56                        PUSH ESI
0042352D  89 4D F4                  MOV dword ptr [EBP + -0xc],ECX
00423530  33 DB                     XOR EBX,EBX
00423532  57                        PUSH EDI
00423533  8D 55 B0                  LEA EDX,[EBP + -0x50]
00423536  8D 4D AC                  LEA ECX,[EBP + -0x54]
00423539  53                        PUSH EBX
0042353A  52                        PUSH EDX
0042353B  89 45 AC                  MOV dword ptr [EBP + -0x54],EAX
0042353E  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
00423544  E8 A7 A2 30 00            CALL 0x0072d7f0
00423549  8B F0                     MOV ESI,EAX
0042354B  83 C4 08                  ADD ESP,0x8
0042354E  3B F3                     CMP ESI,EBX
00423550  0F 85 85 00 00 00         JNZ 0x004235db
00423556  8B 7D F4                  MOV EDI,dword ptr [EBP + -0xc]
00423559  89 5D FC                  MOV dword ptr [EBP + -0x4],EBX
0042355C  8B 47 29                  MOV EAX,dword ptr [EDI + 0x29]
0042355F  8B 40 0C                  MOV EAX,dword ptr [EAX + 0xc]
00423562  85 C0                     TEST EAX,EAX
00423564  89 45 F0                  MOV dword ptr [EBP + -0x10],EAX
00423567  7E 5D                     JLE 0x004235c6
LAB_00423569:
00423569  8D 4D F8                  LEA ECX,[EBP + -0x8]
0042356C  8B D3                     MOV EDX,EBX
0042356E  51                        PUSH ECX
0042356F  8B 4F 29                  MOV ECX,dword ptr [EDI + 0x29]
00423572  E8 F9 96 28 00            CALL 0x006acc70
00423577  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
0042357A  66 3D FF FF               CMP AX,0xffff
0042357E  74 3E                     JZ 0x004235be
00423580  8A 57 24                  MOV DL,byte ptr [EDI + 0x24]
00423583  8B 0D 74 A1 7F 00         MOV ECX,dword ptr [0x007fa174]
00423589  6A 01                     PUSH 0x1
0042358B  50                        PUSH EAX
0042358C  52                        PUSH EDX
0042358D  E8 28 F3 FD FF            CALL 0x004028ba
00423592  8B F0                     MOV ESI,EAX
00423594  85 F6                     TEST ESI,ESI
00423596  75 17                     JNZ 0x004235af
00423598  A1 7C D7 7E 00            MOV EAX,[0x007ed77c]
0042359D  6A 66                     PUSH 0x66
0042359F  68 A4 50 7A 00            PUSH 0x7a50a4
004235A4  50                        PUSH EAX
004235A5  68 04 00 FE AF            PUSH 0xaffe0004
004235AA  E8 91 28 28 00            CALL 0x006a5e40
LAB_004235af:
004235AF  8B 16                     MOV EDX,dword ptr [ESI]
004235B1  8B CE                     MOV ECX,ESI
004235B3  FF 52 2C                  CALL dword ptr [EDX + 0x2c]
004235B6  3B 45 08                  CMP EAX,dword ptr [EBP + 0x8]
004235B9  75 03                     JNZ 0x004235be
004235BB  FF 45 FC                  INC dword ptr [EBP + -0x4]
LAB_004235be:
004235BE  8B 45 F0                  MOV EAX,dword ptr [EBP + -0x10]
004235C1  43                        INC EBX
004235C2  3B D8                     CMP EBX,EAX
004235C4  7C A3                     JL 0x00423569
LAB_004235c6:
004235C6  8B 45 AC                  MOV EAX,dword ptr [EBP + -0x54]
004235C9  A3 F8 8D 85 00            MOV [0x00858df8],EAX
004235CE  66 8B 45 FC               MOV AX,word ptr [EBP + -0x4]
004235D2  5F                        POP EDI
004235D3  5E                        POP ESI
004235D4  5B                        POP EBX
004235D5  8B E5                     MOV ESP,EBP
004235D7  5D                        POP EBP
004235D8  C2 04 00                  RET 0x4
LAB_004235db:
004235DB  8B 4D AC                  MOV ECX,dword ptr [EBP + -0x54]
004235DE  68 E8 50 7A 00            PUSH 0x7a50e8
004235E3  68 CC 4C 7A 00            PUSH 0x7a4ccc
004235E8  56                        PUSH ESI
004235E9  53                        PUSH EBX
004235EA  6A 6B                     PUSH 0x6b
004235EC  68 A4 50 7A 00            PUSH 0x7a50a4
004235F1  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
004235F7  E8 D4 9E 28 00            CALL 0x006ad4d0
004235FC  83 C4 18                  ADD ESP,0x18
004235FF  85 C0                     TEST EAX,EAX
00423601  74 01                     JZ 0x00423604
00423603  CC                        INT3
LAB_00423604:
00423604  6A 6C                     PUSH 0x6c
00423606  68 A4 50 7A 00            PUSH 0x7a50a4
0042360B  53                        PUSH EBX
0042360C  56                        PUSH ESI
0042360D  E8 2E 28 28 00            CALL 0x006a5e40
00423612  66 8B 45 FC               MOV AX,word ptr [EBP + -0x4]
00423616  5F                        POP EDI
00423617  5E                        POP ESI
00423618  5B                        POP EBX
00423619  8B E5                     MOV ESP,EBP
0042361B  5D                        POP EBP
0042361C  C2 04 00                  RET 0x4
