FUN_0052f7e0:
0052F7E0  55                        PUSH EBP
0052F7E1  8B EC                     MOV EBP,ESP
0052F7E3  83 EC 48                  SUB ESP,0x48
0052F7E6  A1 F8 8D 85 00            MOV EAX,[0x00858df8]
0052F7EB  89 4D FC                  MOV dword ptr [EBP + -0x4],ECX
0052F7EE  56                        PUSH ESI
0052F7EF  8D 55 BC                  LEA EDX,[EBP + -0x44]
0052F7F2  8D 4D B8                  LEA ECX,[EBP + -0x48]
0052F7F5  6A 00                     PUSH 0x0
0052F7F7  52                        PUSH EDX
0052F7F8  89 45 B8                  MOV dword ptr [EBP + -0x48],EAX
0052F7FB  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
0052F801  E8 EA DF 1F 00            CALL 0x0072d7f0
0052F806  8B F0                     MOV ESI,EAX
0052F808  83 C4 08                  ADD ESP,0x8
0052F80B  85 F6                     TEST ESI,ESI
0052F80D  75 64                     JNZ 0x0052f873
0052F80F  8B 75 FC                  MOV ESI,dword ptr [EBP + -0x4]
0052F812  66 8B 86 72 01 00 00      MOV AX,word ptr [ESI + 0x172]
0052F819  48                        DEC EAX
0052F81A  74 05                     JZ 0x0052f821
0052F81C  83 E8 02                  SUB EAX,0x2
0052F81F  75 45                     JNZ 0x0052f866
LAB_0052f821:
0052F821  8B CE                     MOV ECX,ESI
0052F823  C6 86 AA 01 00 00 00      MOV byte ptr [ESI + 0x1aa],0x0
0052F82A  C6 86 A9 01 00 00 00      MOV byte ptr [ESI + 0x1a9],0x0
0052F831  C6 86 A4 01 00 00 01      MOV byte ptr [ESI + 0x1a4],0x1
0052F838  E8 14 30 ED FF            CALL 0x00402851
0052F83D  66 83 BE 72 01 00 00 01   CMP word ptr [ESI + 0x172],0x1
0052F845  75 09                     JNZ 0x0052f850
0052F847  6A 00                     PUSH 0x0
0052F849  8B CE                     MOV ECX,ESI
0052F84B  E8 CA 61 ED FF            CALL 0x00405a1a
LAB_0052f850:
0052F850  68 B0 00 00 00            PUSH 0xb0
0052F855  66 C7 86 72 01 00 00 04 00  MOV word ptr [ESI + 0x172],0x4
0052F85E  E8 CC 65 ED FF            CALL 0x00405e2f
0052F863  83 C4 04                  ADD ESP,0x4
LAB_0052f866:
0052F866  8B 45 B8                  MOV EAX,dword ptr [EBP + -0x48]
0052F869  A3 F8 8D 85 00            MOV [0x00858df8],EAX
0052F86E  5E                        POP ESI
0052F86F  8B E5                     MOV ESP,EBP
0052F871  5D                        POP EBP
0052F872  C3                        RET
LAB_0052f873:
0052F873  8B 4D B8                  MOV ECX,dword ptr [EBP + -0x48]
0052F876  68 00 72 7C 00            PUSH 0x7c7200
0052F87B  68 CC 4C 7A 00            PUSH 0x7a4ccc
0052F880  56                        PUSH ESI
0052F881  6A 00                     PUSH 0x0
0052F883  68 39 01 00 00            PUSH 0x139
0052F888  68 A0 70 7C 00            PUSH 0x7c70a0
0052F88D  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
0052F893  E8 38 DC 17 00            CALL 0x006ad4d0
0052F898  83 C4 18                  ADD ESP,0x18
0052F89B  85 C0                     TEST EAX,EAX
0052F89D  74 01                     JZ 0x0052f8a0
0052F89F  CC                        INT3
LAB_0052f8a0:
0052F8A0  68 39 01 00 00            PUSH 0x139
0052F8A5  68 A0 70 7C 00            PUSH 0x7c70a0
0052F8AA  6A 00                     PUSH 0x0
0052F8AC  56                        PUSH ESI
0052F8AD  E8 8E 65 17 00            CALL 0x006a5e40
0052F8B2  5E                        POP ESI
0052F8B3  8B E5                     MOV ESP,EBP
0052F8B5  5D                        POP EBP
0052F8B6  C3                        RET
