FUN_006e53a0:
006E53A0  55                        PUSH EBP
006E53A1  8B EC                     MOV EBP,ESP
006E53A3  83 EC 54                  SUB ESP,0x54
006E53A6  A1 F8 8D 85 00            MOV EAX,[0x00858df8]
006E53AB  53                        PUSH EBX
006E53AC  56                        PUSH ESI
006E53AD  89 4D F8                  MOV dword ptr [EBP + -0x8],ECX
006E53B0  57                        PUSH EDI
006E53B1  8D 55 B0                  LEA EDX,[EBP + -0x50]
006E53B4  8D 4D AC                  LEA ECX,[EBP + -0x54]
006E53B7  6A 00                     PUSH 0x0
006E53B9  52                        PUSH EDX
006E53BA  C7 45 FC FC FF FF FF      MOV dword ptr [EBP + -0x4],0xfffffffc
006E53C1  89 45 AC                  MOV dword ptr [EBP + -0x54],EAX
006E53C4  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
006E53CA  E8 21 84 04 00            CALL 0x0072d7f0
006E53CF  8B F0                     MOV ESI,EAX
006E53D1  83 C4 08                  ADD ESP,0x8
006E53D4  85 F6                     TEST ESI,ESI
006E53D6  75 79                     JNZ 0x006e5451
006E53D8  8B 75 F8                  MOV ESI,dword ptr [EBP + -0x8]
006E53DB  8D 45 F0                  LEA EAX,[EBP + -0x10]
006E53DE  50                        PUSH EAX
006E53DF  8D 7E 0C                  LEA EDI,[ESI + 0xc]
006E53E2  57                        PUSH EDI
006E53E3  E8 28 45 FD FF            CALL 0x006b9910
006E53E8  8B 56 10                  MOV EDX,dword ptr [ESI + 0x10]
006E53EB  33 C9                     XOR ECX,ECX
006E53ED  89 4D F4                  MOV dword ptr [EBP + -0xc],ECX
006E53F0  8B 42 0C                  MOV EAX,dword ptr [EDX + 0xc]
006E53F3  85 C0                     TEST EAX,EAX
006E53F5  76 3B                     JBE 0x006e5432
006E53F7  8B 75 08                  MOV ESI,dword ptr [EBP + 0x8]
006E53FA  3B C8                     CMP ECX,EAX
006E53FC  73 0D                     JNC 0x006e540b
LAB_006e53fe:
006E53FE  8B 42 08                  MOV EAX,dword ptr [EDX + 0x8]
006E5401  8B 5A 1C                  MOV EBX,dword ptr [EDX + 0x1c]
006E5404  0F AF C1                  IMUL EAX,ECX
006E5407  03 C3                     ADD EAX,EBX
006E5409  EB 02                     JMP 0x006e540d
LAB_006e540b:
006E540B  33 C0                     XOR EAX,EAX
LAB_006e540d:
006E540D  8B 40 04                  MOV EAX,dword ptr [EAX + 0x4]
006E5410  39 70 04                  CMP dword ptr [EAX + 0x4],ESI
006E5413  74 0D                     JZ 0x006e5422
006E5415  41                        INC ECX
006E5416  89 4D F4                  MOV dword ptr [EBP + -0xc],ECX
006E5419  8B 42 0C                  MOV EAX,dword ptr [EDX + 0xc]
006E541C  3B C8                     CMP ECX,EAX
006E541E  72 DE                     JC 0x006e53fe
006E5420  EB 10                     JMP 0x006e5432
LAB_006e5422:
006E5422  8B 4D 0C                  MOV ECX,dword ptr [EBP + 0xc]
006E5425  85 C9                     TEST ECX,ECX
006E5427  74 02                     JZ 0x006e542b
006E5429  89 01                     MOV dword ptr [ECX],EAX
LAB_006e542b:
006E542B  C7 45 FC 00 00 00 00      MOV dword ptr [EBP + -0x4],0x0
LAB_006e5432:
006E5432  8D 4D F0                  LEA ECX,[EBP + -0x10]
006E5435  51                        PUSH ECX
006E5436  57                        PUSH EDI
006E5437  E8 84 44 FD FF            CALL 0x006b98c0
006E543C  8B 55 AC                  MOV EDX,dword ptr [EBP + -0x54]
006E543F  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
006E5442  89 15 F8 8D 85 00         MOV dword ptr [0x00858df8],EDX
006E5448  5F                        POP EDI
006E5449  5E                        POP ESI
006E544A  5B                        POP EBX
006E544B  8B E5                     MOV ESP,EBP
006E544D  5D                        POP EBP
006E544E  C2 08 00                  RET 0x8
LAB_006e5451:
006E5451  8B 55 F8                  MOV EDX,dword ptr [EBP + -0x8]
006E5454  8B 45 AC                  MOV EAX,dword ptr [EBP + -0x54]
006E5457  8D 4D F0                  LEA ECX,[EBP + -0x10]
006E545A  83 C2 0C                  ADD EDX,0xc
006E545D  51                        PUSH ECX
006E545E  52                        PUSH EDX
006E545F  A3 F8 8D 85 00            MOV [0x00858df8],EAX
006E5464  E8 57 44 FD FF            CALL 0x006b98c0
006E5469  68 A0 EA 7E 00            PUSH 0x7eeaa0
006E546E  68 CC 4C 7A 00            PUSH 0x7a4ccc
006E5473  56                        PUSH ESI
006E5474  6A 00                     PUSH 0x0
006E5476  68 A2 03 00 00            PUSH 0x3a2
006E547B  68 8C E7 7E 00            PUSH 0x7ee78c
006E5480  E8 4B 80 FC FF            CALL 0x006ad4d0
006E5485  83 C4 18                  ADD ESP,0x18
006E5488  85 C0                     TEST EAX,EAX
006E548A  74 01                     JZ 0x006e548d
006E548C  CC                        INT3
LAB_006e548d:
006E548D  68 A3 03 00 00            PUSH 0x3a3
006E5492  68 8C E7 7E 00            PUSH 0x7ee78c
006E5497  6A 00                     PUSH 0x0
006E5499  56                        PUSH ESI
006E549A  E8 A1 09 FC FF            CALL 0x006a5e40
006E549F  8B C6                     MOV EAX,ESI
006E54A1  5F                        POP EDI
006E54A2  5E                        POP ESI
006E54A3  5B                        POP EBX
006E54A4  8B E5                     MOV ESP,EBP
006E54A6  5D                        POP EBP
006E54A7  C2 08 00                  RET 0x8
