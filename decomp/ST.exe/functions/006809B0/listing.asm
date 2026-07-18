FUN_006809b0:
006809B0  55                        PUSH EBP
006809B1  8B EC                     MOV EBP,ESP
006809B3  83 EC 0C                  SUB ESP,0xc
006809B6  8B 55 0C                  MOV EDX,dword ptr [EBP + 0xc]
006809B9  33 C0                     XOR EAX,EAX
006809BB  89 45 F4                  MOV dword ptr [EBP + -0xc],EAX
006809BE  8D 4D F4                  LEA ECX,[EBP + -0xc]
006809C1  89 45 F8                  MOV dword ptr [EBP + -0x8],EAX
006809C4  51                        PUSH ECX
006809C5  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
006809C8  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
006809CB  52                        PUSH EDX
006809CC  50                        PUSH EAX
006809CD  6A 0C                     PUSH 0xc
006809CF  E8 72 29 D8 FF            CALL 0x00403346
006809D4  83 C4 10                  ADD ESP,0x10
006809D7  8B E5                     MOV ESP,EBP
006809D9  5D                        POP EBP
006809DA  C3                        RET
