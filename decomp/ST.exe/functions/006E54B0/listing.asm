FUN_006e54b0:
006E54B0  55                        PUSH EBP
006E54B1  8B EC                     MOV EBP,ESP
006E54B3  83 EC 50                  SUB ESP,0x50
006E54B6  A1 F8 8D 85 00            MOV EAX,[0x00858df8]
006E54BB  89 4D FC                  MOV dword ptr [EBP + -0x4],ECX
006E54BE  56                        PUSH ESI
006E54BF  8D 55 B4                  LEA EDX,[EBP + -0x4c]
006E54C2  8D 4D B0                  LEA ECX,[EBP + -0x50]
006E54C5  6A 00                     PUSH 0x0
006E54C7  52                        PUSH EDX
006E54C8  89 45 B0                  MOV dword ptr [EBP + -0x50],EAX
006E54CB  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
006E54D1  E8 1A 83 04 00            CALL 0x0072d7f0
006E54D6  8B F0                     MOV ESI,EAX
006E54D8  83 C4 08                  ADD ESP,0x8
006E54DB  85 F6                     TEST ESI,ESI
006E54DD  75 51                     JNZ 0x006e5530
006E54DF  8B 45 14                  MOV EAX,dword ptr [EBP + 0x14]
006E54E2  8B 75 FC                  MOV ESI,dword ptr [EBP + -0x4]
006E54E5  89 45 F4                  MOV dword ptr [EBP + -0xc],EAX
006E54E8  50                        PUSH EAX
006E54E9  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
006E54EC  8B 4E 18                  MOV ECX,dword ptr [ESI + 0x18]
006E54EF  50                        PUSH EAX
006E54F0  E8 1B E3 FF FF            CALL 0x006e3810
006E54F5  8B 4D 0C                  MOV ECX,dword ptr [EBP + 0xc]
006E54F8  89 45 F8                  MOV dword ptr [EBP + -0x8],EAX
006E54FB  85 C9                     TEST ECX,ECX
006E54FD  74 05                     JZ 0x006e5504
006E54FF  8B 50 08                  MOV EDX,dword ptr [EAX + 0x8]
006E5502  89 11                     MOV dword ptr [ECX],EDX
LAB_006e5504:
006E5504  8B 4D 10                  MOV ECX,dword ptr [EBP + 0x10]
006E5507  85 C9                     TEST ECX,ECX
006E5509  74 02                     JZ 0x006e550d
006E550B  89 01                     MOV dword ptr [ECX],EAX
LAB_006e550d:
006E550D  89 70 0C                  MOV dword ptr [EAX + 0xc],ESI
006E5510  8B 4E 10                  MOV ECX,dword ptr [ESI + 0x10]
006E5513  8D 45 F4                  LEA EAX,[EBP + -0xc]
006E5516  50                        PUSH EAX
006E5517  51                        PUSH ECX
006E5518  E8 A3 8C FC FF            CALL 0x006ae1c0
006E551D  8B 55 B0                  MOV EDX,dword ptr [EBP + -0x50]
006E5520  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
006E5523  89 15 F8 8D 85 00         MOV dword ptr [0x00858df8],EDX
006E5529  5E                        POP ESI
006E552A  8B E5                     MOV ESP,EBP
006E552C  5D                        POP EBP
006E552D  C2 10 00                  RET 0x10
LAB_006e5530:
006E5530  8B 45 B0                  MOV EAX,dword ptr [EBP + -0x50]
006E5533  A3 F8 8D 85 00            MOV [0x00858df8],EAX
006E5538  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
006E553B  50                        PUSH EAX
006E553C  50                        PUSH EAX
006E553D  68 C8 EA 7E 00            PUSH 0x7eeac8
006E5542  56                        PUSH ESI
006E5543  6A 00                     PUSH 0x0
006E5545  68 B3 03 00 00            PUSH 0x3b3
006E554A  68 8C E7 7E 00            PUSH 0x7ee78c
006E554F  E8 7C 7F FC FF            CALL 0x006ad4d0
006E5554  83 C4 1C                  ADD ESP,0x1c
006E5557  85 C0                     TEST EAX,EAX
006E5559  74 01                     JZ 0x006e555c
006E555B  CC                        INT3
LAB_006e555c:
006E555C  68 B4 03 00 00            PUSH 0x3b4
006E5561  68 8C E7 7E 00            PUSH 0x7ee78c
006E5566  6A 00                     PUSH 0x0
006E5568  56                        PUSH ESI
006E5569  E8 D2 08 FC FF            CALL 0x006a5e40
006E556E  33 C0                     XOR EAX,EAX
006E5570  5E                        POP ESI
006E5571  8B E5                     MOV ESP,EBP
006E5573  5D                        POP EBP
006E5574  C2 10 00                  RET 0x10
