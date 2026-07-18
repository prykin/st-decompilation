AiFltClassTy::PrepareToSave:
0065D4B0  55                        PUSH EBP
0065D4B1  8B EC                     MOV EBP,ESP
0065D4B3  83 EC 48                  SUB ESP,0x48
0065D4B6  A1 F8 8D 85 00            MOV EAX,[0x00858df8]
0065D4BB  89 4D FC                  MOV dword ptr [EBP + -0x4],ECX
0065D4BE  56                        PUSH ESI
0065D4BF  8D 55 BC                  LEA EDX,[EBP + -0x44]
0065D4C2  8D 4D B8                  LEA ECX,[EBP + -0x48]
0065D4C5  6A 00                     PUSH 0x0
0065D4C7  52                        PUSH EDX
0065D4C8  89 45 B8                  MOV dword ptr [EBP + -0x48],EAX
0065D4CB  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
0065D4D1  E8 1A 03 0D 00            CALL 0x0072d7f0
0065D4D6  8B F0                     MOV ESI,EAX
0065D4D8  83 C4 08                  ADD ESP,0x8
0065D4DB  85 F6                     TEST ESI,ESI
0065D4DD  75 3E                     JNZ 0x0065d51d
0065D4DF  8B 75 FC                  MOV ESI,dword ptr [EBP + -0x4]
0065D4E2  85 F6                     TEST ESI,ESI
0065D4E4  74 05                     JZ 0x0065d4eb
0065D4E6  8D 46 20                  LEA EAX,[ESI + 0x20]
0065D4E9  EB 02                     JMP 0x0065d4ed
LAB_0065d4eb:
0065D4EB  33 C0                     XOR EAX,EAX
LAB_0065d4ed:
0065D4ED  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
0065D4F0  51                        PUSH ECX
0065D4F1  50                        PUSH EAX
0065D4F2  E8 CD 3F DA FF            CALL 0x004014c4
0065D4F7  C7 00 84 03 00 00         MOV dword ptr [EAX],0x384
0065D4FD  C7 40 0C 01 00 00 00      MOV dword ptr [EAX + 0xc],0x1
0065D504  8B 56 1C                  MOV EDX,dword ptr [ESI + 0x1c]
0065D507  83 C4 08                  ADD ESP,0x8
0065D50A  89 50 66                  MOV dword ptr [EAX + 0x66],EDX
0065D50D  8B 4D B8                  MOV ECX,dword ptr [EBP + -0x48]
0065D510  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
0065D516  5E                        POP ESI
0065D517  8B E5                     MOV ESP,EBP
0065D519  5D                        POP EBP
0065D51A  C2 04 00                  RET 0x4
LAB_0065d51d:
0065D51D  8B 55 B8                  MOV EDX,dword ptr [EBP + -0x48]
0065D520  68 BC 2B 7D 00            PUSH 0x7d2bbc
0065D525  68 CC 4C 7A 00            PUSH 0x7a4ccc
0065D52A  56                        PUSH ESI
0065D52B  6A 00                     PUSH 0x0
0065D52D  6A 4F                     PUSH 0x4f
0065D52F  68 80 2B 7D 00            PUSH 0x7d2b80
0065D534  89 15 F8 8D 85 00         MOV dword ptr [0x00858df8],EDX
0065D53A  E8 91 FF 04 00            CALL 0x006ad4d0
0065D53F  83 C4 18                  ADD ESP,0x18
0065D542  85 C0                     TEST EAX,EAX
0065D544  74 01                     JZ 0x0065d547
0065D546  CC                        INT3
LAB_0065d547:
0065D547  6A 50                     PUSH 0x50
0065D549  68 80 2B 7D 00            PUSH 0x7d2b80
0065D54E  6A 00                     PUSH 0x0
0065D550  56                        PUSH ESI
0065D551  E8 EA 88 04 00            CALL 0x006a5e40
0065D556  33 C0                     XOR EAX,EAX
0065D558  5E                        POP ESI
0065D559  8B E5                     MOV ESP,EBP
0065D55B  5D                        POP EBP
0065D55C  C2 04 00                  RET 0x4
