JumpManagC::sub_006179D0:
006179D0  8B 51 5E                  MOV EDX,dword ptr [ECX + 0x5e]
006179D3  56                        PUSH ESI
006179D4  85 D2                     TEST EDX,EDX
006179D6  74 30                     JZ 0x00617a08
006179D8  8B 42 0C                  MOV EAX,dword ptr [EDX + 0xc]
006179DB  33 F6                     XOR ESI,ESI
006179DD  85 C0                     TEST EAX,EAX
006179DF  7E 27                     JLE 0x00617a08
006179E1  53                        PUSH EBX
006179E2  3B F0                     CMP ESI,EAX
LAB_006179e4:
006179E4  73 16                     JNC 0x006179fc
006179E6  8B 42 08                  MOV EAX,dword ptr [EDX + 0x8]
006179E9  8B 5A 1C                  MOV EBX,dword ptr [EDX + 0x1c]
006179EC  0F AF C6                  IMUL EAX,ESI
006179EF  03 C3                     ADD EAX,EBX
006179F1  85 C0                     TEST EAX,EAX
006179F3  74 07                     JZ 0x006179fc
006179F5  C7 40 18 00 00 00 00      MOV dword ptr [EAX + 0x18],0x0
LAB_006179fc:
006179FC  8B 51 5E                  MOV EDX,dword ptr [ECX + 0x5e]
006179FF  46                        INC ESI
00617A00  8B 42 0C                  MOV EAX,dword ptr [EDX + 0xc]
00617A03  3B F0                     CMP ESI,EAX
00617A05  7C DD                     JL 0x006179e4
00617A07  5B                        POP EBX
LAB_00617a08:
00617A08  5E                        POP ESI
00617A09  C3                        RET
