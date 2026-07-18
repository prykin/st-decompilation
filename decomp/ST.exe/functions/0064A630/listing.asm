FUN_0064a630:
0064A630  55                        PUSH EBP
0064A631  8B EC                     MOV EBP,ESP
0064A633  83 EC 48                  SUB ESP,0x48
0064A636  A1 F8 8D 85 00            MOV EAX,[0x00858df8]
0064A63B  56                        PUSH ESI
0064A63C  8D 55 BC                  LEA EDX,[EBP + -0x44]
0064A63F  8D 4D B8                  LEA ECX,[EBP + -0x48]
0064A642  6A 00                     PUSH 0x0
0064A644  52                        PUSH EDX
0064A645  C7 45 FC 00 00 00 00      MOV dword ptr [EBP + -0x4],0x0
0064A64C  89 45 B8                  MOV dword ptr [EBP + -0x48],EAX
0064A64F  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
0064A655  E8 96 31 0E 00            CALL 0x0072d7f0
0064A65A  8B F0                     MOV ESI,EAX
0064A65C  83 C4 08                  ADD ESP,0x8
0064A65F  85 F6                     TEST ESI,ESI
0064A661  75 28                     JNZ 0x0064a68b
0064A663  6A 10                     PUSH 0x10
0064A665  E8 A6 05 06 00            CALL 0x006aac10
0064A66A  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
0064A66D  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
0064A670  51                        PUSH ECX
0064A671  50                        PUSH EAX
0064A672  E8 1E AC DB FF            CALL 0x00405295
0064A677  8B 55 B8                  MOV EDX,dword ptr [EBP + -0x48]
0064A67A  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
0064A67D  83 C4 08                  ADD ESP,0x8
0064A680  89 15 F8 8D 85 00         MOV dword ptr [0x00858df8],EDX
0064A686  5E                        POP ESI
0064A687  8B E5                     MOV ESP,EBP
0064A689  5D                        POP EBP
0064A68A  C3                        RET
LAB_0064a68b:
0064A68B  8B 45 B8                  MOV EAX,dword ptr [EBP + -0x48]
0064A68E  8D 4D FC                  LEA ECX,[EBP + -0x4]
0064A691  51                        PUSH ECX
0064A692  A3 F8 8D 85 00            MOV [0x00858df8],EAX
0064A697  E8 A1 72 DB FF            CALL 0x0040193d
0064A69C  83 C4 04                  ADD ESP,0x4
0064A69F  6A 17                     PUSH 0x17
0064A6A1  68 04 2A 7D 00            PUSH 0x7d2a04
0064A6A6  6A 00                     PUSH 0x0
0064A6A8  56                        PUSH ESI
0064A6A9  E8 92 B7 05 00            CALL 0x006a5e40
0064A6AE  33 C0                     XOR EAX,EAX
0064A6B0  5E                        POP ESI
0064A6B1  8B E5                     MOV ESP,EBP
0064A6B3  5D                        POP EBP
0064A6B4  C3                        RET
