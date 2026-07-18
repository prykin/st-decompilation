FUN_006c8840:
006C8840  55                        PUSH EBP
006C8841  8B EC                     MOV EBP,ESP
006C8843  83 EC 0C                  SUB ESP,0xc
006C8846  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
006C8849  53                        PUSH EBX
006C884A  8B 5D 0C                  MOV EBX,dword ptr [EBP + 0xc]
006C884D  56                        PUSH ESI
006C884E  8B 42 08                  MOV EAX,dword ptr [EDX + 0x8]
006C8851  57                        PUSH EDI
006C8852  83 C0 07                  ADD EAX,0x7
006C8855  8B F2                     MOV ESI,EDX
006C8857  C1 E8 03                  SHR EAX,0x3
006C885A  8B FB                     MOV EDI,EBX
006C885C  8D 48 18                  LEA ECX,[EAX + 0x18]
006C885F  89 4D F8                  MOV dword ptr [EBP + -0x8],ECX
006C8862  B9 06 00 00 00            MOV ECX,0x6
006C8867  F3 A5                     MOVSD.REP ES:EDI,ESI
006C8869  8B 3B                     MOV EDI,dword ptr [EBX]
006C886B  C7 43 14 00 00 00 00      MOV dword ptr [EBX + 0x14],0x0
006C8872  83 E7 F7                  AND EDI,0xfffffff7
006C8875  89 3B                     MOV dword ptr [EBX],EDI
006C8877  8D 7B 18                  LEA EDI,[EBX + 0x18]
006C887A  89 7D F4                  MOV dword ptr [EBP + -0xc],EDI
006C887D  8D 0C 07                  LEA ECX,[EDI + EAX*0x1]
006C8880  89 4D FC                  MOV dword ptr [EBP + -0x4],ECX
006C8883  8B C8                     MOV ECX,EAX
006C8885  8B F1                     MOV ESI,ECX
006C8887  33 C0                     XOR EAX,EAX
006C8889  C1 E9 02                  SHR ECX,0x2
006C888C  F3 AB                     STOSD.REP ES:EDI
006C888E  8B CE                     MOV ECX,ESI
006C8890  83 E1 03                  AND ECX,0x3
006C8893  F3 AA                     STOSB.REP ES:EDI
006C8895  8B 4A 08                  MOV ECX,dword ptr [EDX + 0x8]
006C8898  33 C0                     XOR EAX,EAX
006C889A  85 C9                     TEST ECX,ECX
006C889C  89 45 0C                  MOV dword ptr [EBP + 0xc],EAX
006C889F  7E 54                     JLE 0x006c88f5
LAB_006c88a1:
006C88A1  8B 4A 14                  MOV ECX,dword ptr [EDX + 0x14]
006C88A4  8B 34 81                  MOV ESI,dword ptr [ECX + EAX*0x4]
006C88A7  85 F6                     TEST ESI,ESI
006C88A9  74 3F                     JZ 0x006c88ea
006C88AB  8B FE                     MOV EDI,ESI
006C88AD  83 C9 FF                  OR ECX,0xffffffff
006C88B0  33 C0                     XOR EAX,EAX
006C88B2  F2 AE                     SCASB.REPNE ES:EDI
006C88B4  8B 7D F8                  MOV EDI,dword ptr [EBP + -0x8]
006C88B7  F7 D1                     NOT ECX
006C88B9  49                        DEC ECX
006C88BA  8B C1                     MOV EAX,ECX
006C88BC  40                        INC EAX
006C88BD  8B C8                     MOV ECX,EAX
006C88BF  03 F8                     ADD EDI,EAX
006C88C1  8B D1                     MOV EDX,ECX
006C88C3  89 7D F8                  MOV dword ptr [EBP + -0x8],EDI
006C88C6  8B 7D FC                  MOV EDI,dword ptr [EBP + -0x4]
006C88C9  C1 E9 02                  SHR ECX,0x2
006C88CC  F3 A5                     MOVSD.REP ES:EDI,ESI
006C88CE  8B CA                     MOV ECX,EDX
006C88D0  83 E1 03                  AND ECX,0x3
006C88D3  F3 A4                     MOVSB.REP ES:EDI,ESI
006C88D5  01 45 FC                  ADD dword ptr [EBP + -0x4],EAX
006C88D8  8B 4D F4                  MOV ECX,dword ptr [EBP + -0xc]
006C88DB  8B 55 0C                  MOV EDX,dword ptr [EBP + 0xc]
006C88DE  80 F2 07                  XOR DL,0x7
006C88E1  0F AB 11                  BTS [ECX],EDX
006C88E4  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
006C88E7  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
LAB_006c88ea:
006C88EA  8B 4A 08                  MOV ECX,dword ptr [EDX + 0x8]
006C88ED  40                        INC EAX
006C88EE  3B C1                     CMP EAX,ECX
006C88F0  89 45 0C                  MOV dword ptr [EBP + 0xc],EAX
006C88F3  7C AC                     JL 0x006c88a1
LAB_006c88f5:
006C88F5  8B 45 10                  MOV EAX,dword ptr [EBP + 0x10]
006C88F8  85 C0                     TEST EAX,EAX
006C88FA  74 05                     JZ 0x006c8901
006C88FC  8B 4D F8                  MOV ECX,dword ptr [EBP + -0x8]
006C88FF  89 08                     MOV dword ptr [EAX],ECX
LAB_006c8901:
006C8901  5F                        POP EDI
006C8902  8B C3                     MOV EAX,EBX
006C8904  5E                        POP ESI
006C8905  5B                        POP EBX
006C8906  8B E5                     MOV ESP,EBP
006C8908  5D                        POP EBP
006C8909  C2 0C 00                  RET 0xc
