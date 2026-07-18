FUN_0075a590:
0075A590  55                        PUSH EBP
0075A591  8B EC                     MOV EBP,ESP
0075A593  83 EC 08                  SUB ESP,0x8
0075A596  53                        PUSH EBX
0075A597  56                        PUSH ESI
0075A598  8B 75 08                  MOV ESI,dword ptr [EBP + 0x8]
0075A59B  C7 45 FC 00 00 00 00      MOV dword ptr [EBP + -0x4],0x0
0075A5A2  8B 86 96 01 00 00         MOV EAX,dword ptr [ESI + 0x196]
0075A5A8  8B 9E D0 00 00 00         MOV EBX,dword ptr [ESI + 0xd0]
0075A5AE  89 45 F8                  MOV dword ptr [EBP + -0x8],EAX
0075A5B1  8B 46 1C                  MOV EAX,dword ptr [ESI + 0x1c]
0075A5B4  85 C0                     TEST EAX,EAX
0075A5B6  7E 78                     JLE 0x0075a630
0075A5B8  57                        PUSH EDI
0075A5B9  83 C3 0C                  ADD EBX,0xc
0075A5BC  EB 03                     JMP 0x0075a5c1
LAB_0075a5be:
0075A5BE  8B 75 08                  MOV ESI,dword ptr [EBP + 0x8]
LAB_0075a5c1:
0075A5C1  8B 4B 18                  MOV ECX,dword ptr [EBX + 0x18]
0075A5C4  0F AF 0B                  IMUL ECX,dword ptr [EBX]
0075A5C7  8B C1                     MOV EAX,ECX
0075A5C9  99                        CDQ
0075A5CA  F7 BE 2A 01 00 00         IDIV dword ptr [ESI + 0x12a]
0075A5D0  33 D2                     XOR EDX,EDX
0075A5D2  8B F8                     MOV EDI,EAX
0075A5D4  8B 43 20                  MOV EAX,dword ptr [EBX + 0x20]
0075A5D7  F7 F1                     DIV ECX
0075A5D9  8B F2                     MOV ESI,EDX
0075A5DB  85 F6                     TEST ESI,ESI
0075A5DD  75 02                     JNZ 0x0075a5e1
0075A5DF  8B F1                     MOV ESI,ECX
LAB_0075a5e1:
0075A5E1  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
0075A5E4  85 C9                     TEST ECX,ECX
0075A5E6  75 11                     JNZ 0x0075a5f9
0075A5E8  8D 46 FF                  LEA EAX,[ESI + -0x1]
0075A5EB  99                        CDQ
0075A5EC  F7 FF                     IDIV EDI
0075A5EE  8B D0                     MOV EDX,EAX
0075A5F0  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
0075A5F3  42                        INC EDX
0075A5F4  89 50 48                  MOV dword ptr [EAX + 0x48],EDX
0075A5F7  EB 03                     JMP 0x0075a5fc
LAB_0075a5f9:
0075A5F9  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
LAB_0075a5fc:
0075A5FC  8B 50 40                  MOV EDX,dword ptr [EAX + 0x40]
0075A5FF  8B 44 90 38               MOV EAX,dword ptr [EAX + EDX*0x4 + 0x38]
0075A603  8D 14 3F                  LEA EDX,[EDI + EDI*0x1]
0075A606  85 D2                     TEST EDX,EDX
0075A608  8B 04 88                  MOV EAX,dword ptr [EAX + ECX*0x4]
0075A60B  7E 13                     JLE 0x0075a620
0075A60D  8D 0C B0                  LEA ECX,[EAX + ESI*0x4]
0075A610  8B C1                     MOV EAX,ECX
LAB_0075a612:
0075A612  8B 71 FC                  MOV ESI,dword ptr [ECX + -0x4]
0075A615  89 30                     MOV dword ptr [EAX],ESI
0075A617  83 C0 04                  ADD EAX,0x4
0075A61A  4A                        DEC EDX
0075A61B  75 F5                     JNZ 0x0075a612
0075A61D  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
LAB_0075a620:
0075A620  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
0075A623  41                        INC ECX
0075A624  83 C3 54                  ADD EBX,0x54
0075A627  89 4D FC                  MOV dword ptr [EBP + -0x4],ECX
0075A62A  3B 4A 1C                  CMP ECX,dword ptr [EDX + 0x1c]
0075A62D  7C 8F                     JL 0x0075a5be
0075A62F  5F                        POP EDI
LAB_0075a630:
0075A630  5E                        POP ESI
0075A631  5B                        POP EBX
0075A632  8B E5                     MOV ESP,EBP
0075A634  5D                        POP EBP
0075A635  C2 04 00                  RET 0x4
