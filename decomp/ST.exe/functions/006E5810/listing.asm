SystemClassTy::PostMessage:
006E5810  55                        PUSH EBP
006E5811  8B EC                     MOV EBP,ESP
006E5813  83 EC 48                  SUB ESP,0x48
006E5816  A1 F8 8D 85 00            MOV EAX,[0x00858df8]
006E581B  89 4D FC                  MOV dword ptr [EBP + -0x4],ECX
006E581E  56                        PUSH ESI
006E581F  8D 55 BC                  LEA EDX,[EBP + -0x44]
006E5822  8D 4D B8                  LEA ECX,[EBP + -0x48]
006E5825  6A 00                     PUSH 0x0
006E5827  52                        PUSH EDX
006E5828  89 45 B8                  MOV dword ptr [EBP + -0x48],EAX
006E582B  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
006E5831  E8 BA 7F 04 00            CALL 0x0072d7f0
006E5836  8B F0                     MOV ESI,EAX
006E5838  83 C4 08                  ADD ESP,0x8
006E583B  85 F6                     TEST ESI,ESI
006E583D  75 21                     JNZ 0x006e5860
006E583F  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
006E5842  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
006E5845  50                        PUSH EAX
006E5846  8B 51 04                  MOV EDX,dword ptr [ECX + 0x4]
006E5849  52                        PUSH EDX
006E584A  E8 71 89 FC FF            CALL 0x006ae1c0
006E584F  8B 45 B8                  MOV EAX,dword ptr [EBP + -0x48]
006E5852  A3 F8 8D 85 00            MOV [0x00858df8],EAX
006E5857  33 C0                     XOR EAX,EAX
006E5859  5E                        POP ESI
006E585A  8B E5                     MOV ESP,EBP
006E585C  5D                        POP EBP
006E585D  C2 04 00                  RET 0x4
LAB_006e5860:
006E5860  8B 4D B8                  MOV ECX,dword ptr [EBP + -0x48]
006E5863  68 20 EB 7E 00            PUSH 0x7eeb20
006E5868  68 CC 4C 7A 00            PUSH 0x7a4ccc
006E586D  56                        PUSH ESI
006E586E  6A 00                     PUSH 0x0
006E5870  68 0A 04 00 00            PUSH 0x40a
006E5875  68 8C E7 7E 00            PUSH 0x7ee78c
006E587A  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
006E5880  E8 4B 7C FC FF            CALL 0x006ad4d0
006E5885  83 C4 18                  ADD ESP,0x18
006E5888  85 C0                     TEST EAX,EAX
006E588A  74 01                     JZ 0x006e588d
006E588C  CC                        INT3
LAB_006e588d:
006E588D  68 0B 04 00 00            PUSH 0x40b
006E5892  68 8C E7 7E 00            PUSH 0x7ee78c
006E5897  6A 00                     PUSH 0x0
006E5899  56                        PUSH ESI
006E589A  E8 A1 05 FC FF            CALL 0x006a5e40
006E589F  8B C6                     MOV EAX,ESI
006E58A1  5E                        POP ESI
006E58A2  8B E5                     MOV ESP,EBP
006E58A4  5D                        POP EBP
006E58A5  C2 04 00                  RET 0x4
