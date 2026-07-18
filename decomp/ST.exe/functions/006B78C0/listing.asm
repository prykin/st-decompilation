FUN_006b78c0:
006B78C0  55                        PUSH EBP
006B78C1  8B EC                     MOV EBP,ESP
006B78C3  56                        PUSH ESI
006B78C4  8B 75 0C                  MOV ESI,dword ptr [EBP + 0xc]
006B78C7  57                        PUSH EDI
006B78C8  8B FE                     MOV EDI,ESI
006B78CA  83 C9 FF                  OR ECX,0xffffffff
006B78CD  33 C0                     XOR EAX,EAX
006B78CF  F2 AE                     SCASB.REPNE ES:EDI
006B78D1  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
006B78D4  F7 D1                     NOT ECX
006B78D6  49                        DEC ECX
006B78D7  85 C0                     TEST EAX,EAX
006B78D9  8B D1                     MOV EDX,ECX
006B78DB  74 1B                     JZ 0x006b78f8
006B78DD  3B C6                     CMP EAX,ESI
006B78DF  74 17                     JZ 0x006b78f8
006B78E1  8D 4A 01                  LEA ECX,[EDX + 0x1]
006B78E4  53                        PUSH EBX
006B78E5  8B D9                     MOV EBX,ECX
006B78E7  8B F8                     MOV EDI,EAX
006B78E9  C1 E9 02                  SHR ECX,0x2
006B78EC  F3 A5                     MOVSD.REP ES:EDI,ESI
006B78EE  8B CB                     MOV ECX,EBX
006B78F0  5B                        POP EBX
006B78F1  83 E1 03                  AND ECX,0x3
006B78F4  F3 A4                     MOVSB.REP ES:EDI,ESI
006B78F6  EB 02                     JMP 0x006b78fa
LAB_006b78f8:
006B78F8  8B C6                     MOV EAX,ESI
LAB_006b78fa:
006B78FA  5F                        POP EDI
006B78FB  5E                        POP ESI
006B78FC  85 D2                     TEST EDX,EDX
006B78FE  74 13                     JZ 0x006b7913
006B7900  8A 4C 02 FF               MOV CL,byte ptr [EDX + EAX*0x1 + -0x1]
006B7904  80 F9 5C                  CMP CL,0x5c
006B7907  74 05                     JZ 0x006b790e
006B7909  80 F9 2F                  CMP CL,0x2f
006B790C  75 05                     JNZ 0x006b7913
LAB_006b790e:
006B790E  C6 44 02 FF 00            MOV byte ptr [EDX + EAX*0x1 + -0x1],0x0
LAB_006b7913:
006B7913  5D                        POP EBP
006B7914  C2 08 00                  RET 0x8
