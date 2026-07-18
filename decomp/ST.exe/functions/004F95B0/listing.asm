FUN_004f95b0:
004F95B0  55                        PUSH EBP
004F95B1  8B EC                     MOV EBP,ESP
004F95B3  83 EC 4C                  SUB ESP,0x4c
004F95B6  A1 F8 8D 85 00            MOV EAX,[0x00858df8]
004F95BB  89 4D F8                  MOV dword ptr [EBP + -0x8],ECX
004F95BE  56                        PUSH ESI
004F95BF  8D 55 B8                  LEA EDX,[EBP + -0x48]
004F95C2  8D 4D B4                  LEA ECX,[EBP + -0x4c]
004F95C5  6A 00                     PUSH 0x0
004F95C7  52                        PUSH EDX
004F95C8  89 45 B4                  MOV dword ptr [EBP + -0x4c],EAX
004F95CB  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
004F95D1  E8 1A 42 23 00            CALL 0x0072d7f0
004F95D6  8B F0                     MOV ESI,EAX
004F95D8  83 C4 08                  ADD ESP,0x8
004F95DB  85 F6                     TEST ESI,ESI
004F95DD  75 3F                     JNZ 0x004f961e
004F95DF  6A 01                     PUSH 0x1
004F95E1  6A 01                     PUSH 0x1
004F95E3  50                        PUSH EAX
004F95E4  E8 07 BF 1B 00            CALL 0x006b54f0
004F95E9  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
004F95EC  68 1C 22 7C 00            PUSH 0x7c221c
004F95F1  51                        PUSH ECX
004F95F2  50                        PUSH EAX
004F95F3  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
004F95F6  E8 A5 7F F0 FF            CALL 0x004015a0
004F95FB  8B 55 0C                  MOV EDX,dword ptr [EBP + 0xc]
004F95FE  8B 4D F8                  MOV ECX,dword ptr [EBP + -0x8]
004F9601  83 C4 0C                  ADD ESP,0xc
004F9604  8D 45 FC                  LEA EAX,[EBP + -0x4]
004F9607  52                        PUSH EDX
004F9608  50                        PUSH EAX
004F9609  E8 0D 9B F0 FF            CALL 0x0040311b
004F960E  8B 4D B4                  MOV ECX,dword ptr [EBP + -0x4c]
004F9611  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
004F9617  5E                        POP ESI
004F9618  8B E5                     MOV ESP,EBP
004F961A  5D                        POP EBP
004F961B  C2 08 00                  RET 0x8
LAB_004f961e:
004F961E  8B 55 B4                  MOV EDX,dword ptr [EBP + -0x4c]
004F9621  68 24 22 7C 00            PUSH 0x7c2224
004F9626  68 CC 4C 7A 00            PUSH 0x7a4ccc
004F962B  56                        PUSH ESI
004F962C  6A 00                     PUSH 0x0
004F962E  68 51 03 00 00            PUSH 0x351
004F9633  68 D8 1B 7C 00            PUSH 0x7c1bd8
004F9638  89 15 F8 8D 85 00         MOV dword ptr [0x00858df8],EDX
004F963E  E8 8D 3E 1B 00            CALL 0x006ad4d0
004F9643  83 C4 18                  ADD ESP,0x18
004F9646  85 C0                     TEST EAX,EAX
004F9648  74 01                     JZ 0x004f964b
004F964A  CC                        INT3
LAB_004f964b:
004F964B  68 51 03 00 00            PUSH 0x351
004F9650  68 D8 1B 7C 00            PUSH 0x7c1bd8
004F9655  6A 00                     PUSH 0x0
004F9657  56                        PUSH ESI
004F9658  E8 E3 C7 1A 00            CALL 0x006a5e40
004F965D  5E                        POP ESI
004F965E  8B E5                     MOV ESP,EBP
004F9660  5D                        POP EBP
004F9661  C2 08 00                  RET 0x8
