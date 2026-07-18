FUN_006e3450:
006E3450  55                        PUSH EBP
006E3451  8B EC                     MOV EBP,ESP
006E3453  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
006E3456  53                        PUSH EBX
006E3457  33 DB                     XOR EBX,EBX
006E3459  56                        PUSH ESI
006E345A  3B C3                     CMP EAX,EBX
006E345C  57                        PUSH EDI
006E345D  B9 FC FF FF FF            MOV ECX,0xfffffffc
006E3462  74 48                     JZ 0x006e34ac
006E3464  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
006E3467  8B 7A 0C                  MOV EDI,dword ptr [EDX + 0xc]
006E346A  89 5A 04                  MOV dword ptr [EDX + 0x4],EBX
LAB_006e346d:
006E346D  8B 72 04                  MOV ESI,dword ptr [EDX + 0x4]
006E3470  3B F7                     CMP ESI,EDI
006E3472  73 3F                     JNC 0x006e34b3
006E3474  8B 4A 08                  MOV ECX,dword ptr [EDX + 0x8]
006E3477  0F AF CE                  IMUL ECX,ESI
006E347A  03 4A 1C                  ADD ECX,dword ptr [EDX + 0x1c]
006E347D  8D 76 01                  LEA ESI,[ESI + 0x1]
006E3480  89 72 04                  MOV dword ptr [EDX + 0x4],ESI
006E3483  74 2E                     JZ 0x006e34b3
006E3485  8B 71 04                  MOV ESI,dword ptr [ECX + 0x4]
006E3488  39 46 08                  CMP dword ptr [ESI + 0x8],EAX
006E348B  74 03                     JZ 0x006e3490
006E348D  43                        INC EBX
006E348E  EB DD                     JMP 0x006e346d
LAB_006e3490:
006E3490  8B 45 10                  MOV EAX,dword ptr [EBP + 0x10]
006E3493  85 C0                     TEST EAX,EAX
006E3495  74 02                     JZ 0x006e3499
006E3497  89 18                     MOV dword ptr [EAX],EBX
LAB_006e3499:
006E3499  8B 45 14                  MOV EAX,dword ptr [EBP + 0x14]
006E349C  85 C0                     TEST EAX,EAX
006E349E  74 05                     JZ 0x006e34a5
006E34A0  8B 49 04                  MOV ECX,dword ptr [ECX + 0x4]
006E34A3  89 08                     MOV dword ptr [EAX],ECX
LAB_006e34a5:
006E34A5  5F                        POP EDI
006E34A6  5E                        POP ESI
006E34A7  33 C0                     XOR EAX,EAX
006E34A9  5B                        POP EBX
006E34AA  5D                        POP EBP
006E34AB  C3                        RET
LAB_006e34ac:
006E34AC  5F                        POP EDI
006E34AD  5E                        POP ESI
006E34AE  8B C1                     MOV EAX,ECX
006E34B0  5B                        POP EBX
006E34B1  5D                        POP EBP
006E34B2  C3                        RET
LAB_006e34b3:
006E34B3  5F                        POP EDI
006E34B4  5E                        POP ESI
006E34B5  B8 FC FF FF FF            MOV EAX,0xfffffffc
006E34BA  5B                        POP EBX
006E34BB  5D                        POP EBP
006E34BC  C3                        RET
