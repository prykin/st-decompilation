SystemClassTy::InitSystem:
006E51F0  55                        PUSH EBP
006E51F1  8B EC                     MOV EBP,ESP
006E51F3  83 EC 48                  SUB ESP,0x48
006E51F6  A1 F8 8D 85 00            MOV EAX,[0x00858df8]
006E51FB  89 4D FC                  MOV dword ptr [EBP + -0x4],ECX
006E51FE  56                        PUSH ESI
006E51FF  8D 55 BC                  LEA EDX,[EBP + -0x44]
006E5202  8D 4D B8                  LEA ECX,[EBP + -0x48]
006E5205  6A 00                     PUSH 0x0
006E5207  52                        PUSH EDX
006E5208  89 45 B8                  MOV dword ptr [EBP + -0x48],EAX
006E520B  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
006E5211  E8 DA 85 04 00            CALL 0x0072d7f0
006E5216  8B F0                     MOV ESI,EAX
006E5218  83 C4 08                  ADD ESP,0x8
006E521B  85 F6                     TEST ESI,ESI
006E521D  75 64                     JNZ 0x006e5283
006E521F  6A 14                     PUSH 0x14
006E5221  6A 08                     PUSH 0x8
006E5223  6A 14                     PUSH 0x14
006E5225  50                        PUSH EAX
006E5226  E8 65 90 FC FF            CALL 0x006ae290
006E522B  8B 75 FC                  MOV ESI,dword ptr [EBP + -0x4]
006E522E  6A 0A                     PUSH 0xa
006E5230  6A 20                     PUSH 0x20
006E5232  6A 14                     PUSH 0x14
006E5234  6A 00                     PUSH 0x0
006E5236  89 46 10                  MOV dword ptr [ESI + 0x10],EAX
006E5239  E8 52 90 FC FF            CALL 0x006ae290
006E523E  6A 0A                     PUSH 0xa
006E5240  6A 20                     PUSH 0x20
006E5242  6A 14                     PUSH 0x14
006E5244  6A 00                     PUSH 0x0
006E5246  89 46 04                  MOV dword ptr [ESI + 0x4],EAX
006E5249  E8 42 90 FC FF            CALL 0x006ae290
006E524E  89 46 08                  MOV dword ptr [ESI + 0x8],EAX
006E5251  8B 06                     MOV EAX,dword ptr [ESI]
006E5253  8B CE                     MOV ECX,ESI
006E5255  FF 50 14                  CALL dword ptr [EAX + 0x14]
006E5258  85 C0                     TEST EAX,EAX
006E525A  74 17                     JZ 0x006e5273
006E525C  8B 0D 7C D7 7E 00         MOV ECX,dword ptr [0x007ed77c]
006E5262  68 64 03 00 00            PUSH 0x364
006E5267  68 8C E7 7E 00            PUSH 0x7ee78c
006E526C  51                        PUSH ECX
006E526D  50                        PUSH EAX
006E526E  E8 CD 0B FC FF            CALL 0x006a5e40
LAB_006e5273:
006E5273  8B 55 B8                  MOV EDX,dword ptr [EBP + -0x48]
006E5276  33 C0                     XOR EAX,EAX
006E5278  89 15 F8 8D 85 00         MOV dword ptr [0x00858df8],EDX
006E527E  5E                        POP ESI
006E527F  8B E5                     MOV ESP,EBP
006E5281  5D                        POP EBP
006E5282  C3                        RET
LAB_006e5283:
006E5283  8B 45 B8                  MOV EAX,dword ptr [EBP + -0x48]
006E5286  68 7C EA 7E 00            PUSH 0x7eea7c
006E528B  68 CC 4C 7A 00            PUSH 0x7a4ccc
006E5290  56                        PUSH ESI
006E5291  6A 00                     PUSH 0x0
006E5293  68 66 03 00 00            PUSH 0x366
006E5298  68 8C E7 7E 00            PUSH 0x7ee78c
006E529D  A3 F8 8D 85 00            MOV [0x00858df8],EAX
006E52A2  E8 29 82 FC FF            CALL 0x006ad4d0
006E52A7  83 C4 18                  ADD ESP,0x18
006E52AA  85 C0                     TEST EAX,EAX
006E52AC  74 01                     JZ 0x006e52af
006E52AE  CC                        INT3
LAB_006e52af:
006E52AF  68 67 03 00 00            PUSH 0x367
006E52B4  68 8C E7 7E 00            PUSH 0x7ee78c
006E52B9  6A 00                     PUSH 0x0
006E52BB  56                        PUSH ESI
006E52BC  E8 7F 0B FC FF            CALL 0x006a5e40
006E52C1  8B C6                     MOV EAX,ESI
006E52C3  5E                        POP ESI
006E52C4  8B E5                     MOV ESP,EBP
006E52C6  5D                        POP EBP
006E52C7  C3                        RET
