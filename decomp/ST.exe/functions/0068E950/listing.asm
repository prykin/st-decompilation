AiTactClassTy::ClaimSave:
0068E950  55                        PUSH EBP
0068E951  8B EC                     MOV EBP,ESP
0068E953  83 EC 4C                  SUB ESP,0x4c
0068E956  A1 F8 8D 85 00            MOV EAX,[0x00858df8]
0068E95B  56                        PUSH ESI
0068E95C  89 4D FC                  MOV dword ptr [EBP + -0x4],ECX
0068E95F  57                        PUSH EDI
0068E960  8D 55 B8                  LEA EDX,[EBP + -0x48]
0068E963  8D 4D B4                  LEA ECX,[EBP + -0x4c]
0068E966  6A 00                     PUSH 0x0
0068E968  52                        PUSH EDX
0068E969  89 45 B4                  MOV dword ptr [EBP + -0x4c],EAX
0068E96C  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
0068E972  E8 79 EE 09 00            CALL 0x0072d7f0
0068E977  8B F0                     MOV ESI,EAX
0068E979  83 C4 08                  ADD ESP,0x8
0068E97C  85 F6                     TEST ESI,ESI
0068E97E  75 3E                     JNZ 0x0068e9be
0068E980  8B 7D FC                  MOV EDI,dword ptr [EBP + -0x4]
0068E983  8B 87 30 01 00 00         MOV EAX,dword ptr [EDI + 0x130]
0068E989  8D B7 30 01 00 00         LEA ESI,[EDI + 0x130]
0068E98F  85 C0                     TEST EAX,EAX
0068E991  74 06                     JZ 0x0068e999
0068E993  56                        PUSH ESI
0068E994  E8 C7 C6 01 00            CALL 0x006ab060
LAB_0068e999:
0068E999  8B 87 BD 00 00 00         MOV EAX,dword ptr [EDI + 0xbd]
0068E99F  85 C0                     TEST EAX,EAX
0068E9A1  74 0C                     JZ 0x0068e9af
0068E9A3  8D 4D F8                  LEA ECX,[EBP + -0x8]
0068E9A6  51                        PUSH ECX
0068E9A7  50                        PUSH EAX
0068E9A8  E8 73 16 02 00            CALL 0x006b0020
0068E9AD  89 06                     MOV dword ptr [ESI],EAX
LAB_0068e9af:
0068E9AF  8B 55 B4                  MOV EDX,dword ptr [EBP + -0x4c]
0068E9B2  89 15 F8 8D 85 00         MOV dword ptr [0x00858df8],EDX
0068E9B8  5F                        POP EDI
0068E9B9  5E                        POP ESI
0068E9BA  8B E5                     MOV ESP,EBP
0068E9BC  5D                        POP EBP
0068E9BD  C3                        RET
LAB_0068e9be:
0068E9BE  8B 45 B4                  MOV EAX,dword ptr [EBP + -0x4c]
0068E9C1  68 54 57 7D 00            PUSH 0x7d5754
0068E9C6  68 CC 4C 7A 00            PUSH 0x7a4ccc
0068E9CB  56                        PUSH ESI
0068E9CC  6A 00                     PUSH 0x0
0068E9CE  68 6D 01 00 00            PUSH 0x16d
0068E9D3  68 E0 56 7D 00            PUSH 0x7d56e0
0068E9D8  A3 F8 8D 85 00            MOV [0x00858df8],EAX
0068E9DD  E8 EE EA 01 00            CALL 0x006ad4d0
0068E9E2  83 C4 18                  ADD ESP,0x18
0068E9E5  85 C0                     TEST EAX,EAX
0068E9E7  74 01                     JZ 0x0068e9ea
0068E9E9  CC                        INT3
LAB_0068e9ea:
0068E9EA  68 6E 01 00 00            PUSH 0x16e
0068E9EF  68 E0 56 7D 00            PUSH 0x7d56e0
0068E9F4  6A 00                     PUSH 0x0
0068E9F6  56                        PUSH ESI
0068E9F7  E8 44 74 01 00            CALL 0x006a5e40
0068E9FC  5F                        POP EDI
0068E9FD  5E                        POP ESI
0068E9FE  8B E5                     MOV ESP,EBP
0068EA00  5D                        POP EBP
0068EA01  C3                        RET
