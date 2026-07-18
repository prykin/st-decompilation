FUN_006b8280:
006B8280  55                        PUSH EBP
006B8281  8B EC                     MOV EBP,ESP
006B8283  56                        PUSH ESI
006B8284  8B 75 0C                  MOV ESI,dword ptr [EBP + 0xc]
006B8287  57                        PUSH EDI
006B8288  8B FE                     MOV EDI,ESI
006B828A  83 C9 FF                  OR ECX,0xffffffff
006B828D  33 C0                     XOR EAX,EAX
006B828F  F2 AE                     SCASB.REPNE ES:EDI
006B8291  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
006B8294  F7 D1                     NOT ECX
006B8296  49                        DEC ECX
006B8297  85 C0                     TEST EAX,EAX
006B8299  8B D1                     MOV EDX,ECX
006B829B  74 1B                     JZ 0x006b82b8
006B829D  3B C6                     CMP EAX,ESI
006B829F  74 17                     JZ 0x006b82b8
006B82A1  8D 4A 01                  LEA ECX,[EDX + 0x1]
006B82A4  53                        PUSH EBX
006B82A5  8B D9                     MOV EBX,ECX
006B82A7  8B F8                     MOV EDI,EAX
006B82A9  C1 E9 02                  SHR ECX,0x2
006B82AC  F3 A5                     MOVSD.REP ES:EDI,ESI
006B82AE  8B CB                     MOV ECX,EBX
006B82B0  5B                        POP EBX
006B82B1  83 E1 03                  AND ECX,0x3
006B82B4  F3 A4                     MOVSB.REP ES:EDI,ESI
006B82B6  EB 02                     JMP 0x006b82ba
LAB_006b82b8:
006B82B8  8B C6                     MOV EAX,ESI
LAB_006b82ba:
006B82BA  5F                        POP EDI
006B82BB  5E                        POP ESI
006B82BC  85 D2                     TEST EDX,EDX
006B82BE  74 1C                     JZ 0x006b82dc
006B82C0  8A 4C 02 FF               MOV CL,byte ptr [EDX + EAX*0x1 + -0x1]
006B82C4  80 F9 5C                  CMP CL,0x5c
006B82C7  74 13                     JZ 0x006b82dc
006B82C9  80 F9 2F                  CMP CL,0x2f
006B82CC  74 0E                     JZ 0x006b82dc
006B82CE  80 F9 3A                  CMP CL,0x3a
006B82D1  74 09                     JZ 0x006b82dc
006B82D3  C6 04 02 5C               MOV byte ptr [EDX + EAX*0x1],0x5c
006B82D7  C6 44 02 01 00            MOV byte ptr [EDX + EAX*0x1 + 0x1],0x0
LAB_006b82dc:
006B82DC  5D                        POP EBP
006B82DD  C2 08 00                  RET 0x8
