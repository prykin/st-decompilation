FUN_0044a730:
0044A730  55                        PUSH EBP
0044A731  8B EC                     MOV EBP,ESP
0044A733  83 EC 4C                  SUB ESP,0x4c
0044A736  A1 F8 8D 85 00            MOV EAX,[0x00858df8]
0044A73B  53                        PUSH EBX
0044A73C  56                        PUSH ESI
0044A73D  89 4D F8                  MOV dword ptr [EBP + -0x8],ECX
0044A740  57                        PUSH EDI
0044A741  8D 55 B8                  LEA EDX,[EBP + -0x48]
0044A744  8D 4D B4                  LEA ECX,[EBP + -0x4c]
0044A747  6A 00                     PUSH 0x0
0044A749  52                        PUSH EDX
0044A74A  C7 45 FC 00 00 00 00      MOV dword ptr [EBP + -0x4],0x0
0044A751  89 45 B4                  MOV dword ptr [EBP + -0x4c],EAX
0044A754  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
0044A75A  E8 91 30 2E 00            CALL 0x0072d7f0
0044A75F  8B F0                     MOV ESI,EAX
0044A761  83 C4 08                  ADD ESP,0x8
0044A764  85 F6                     TEST ESI,ESI
0044A766  0F 85 84 00 00 00         JNZ 0x0044a7f0
0044A76C  8B 75 08                  MOV ESI,dword ptr [EBP + 0x8]
0044A76F  8B 5D F8                  MOV EBX,dword ptr [EBP + -0x8]
0044A772  6A 05                     PUSH 0x5
0044A774  56                        PUSH ESI
0044A775  6A FF                     PUSH -0x1
0044A777  8B CB                     MOV ECX,EBX
0044A779  E8 3C 81 FB FF            CALL 0x004028ba
0044A77E  8B 7D 0C                  MOV EDI,dword ptr [EBP + 0xc]
0044A781  3B C7                     CMP EAX,EDI
0044A783  74 1A                     JZ 0x0044a79f
0044A785  A1 7C D7 7E 00            MOV EAX,[0x007ed77c]
0044A78A  68 85 2F 00 00            PUSH 0x2f85
0044A78F  68 04 60 7A 00            PUSH 0x7a6004
0044A794  50                        PUSH EAX
0044A795  68 07 00 FE AF            PUSH 0xaffe0007
0044A79A  E8 A1 B6 25 00            CALL 0x006a5e40
LAB_0044a79f:
0044A79F  8A 4F 24                  MOV CL,byte ptr [EDI + 0x24]
0044A7A2  8B 57 20                  MOV EDX,dword ptr [EDI + 0x20]
0044A7A5  A0 4D 87 80 00            MOV AL,[0x0080874d]
0044A7AA  56                        PUSH ESI
0044A7AB  51                        PUSH ECX
0044A7AC  52                        PUSH EDX
0044A7AD  50                        PUSH EAX
0044A7AE  8B CB                     MOV ECX,EBX
0044A7B0  E8 EE 79 FB FF            CALL 0x004021a3
0044A7B5  8A 4F 24                  MOV CL,byte ptr [EDI + 0x24]
0044A7B8  8B 57 20                  MOV EDX,dword ptr [EDI + 0x20]
0044A7BB  56                        PUSH ESI
0044A7BC  51                        PUSH ECX
0044A7BD  52                        PUSH EDX
0044A7BE  8B CB                     MOV ECX,EBX
0044A7C0  E8 7E 8E FB FF            CALL 0x00403643
0044A7C5  8B 0D 60 A1 7F 00         MOV ECX,dword ptr [0x007fa160]
0044A7CB  8D 45 FC                  LEA EAX,[EBP + -0x4]
0044A7CE  81 E6 FF FF 00 00         AND ESI,0xffff
0044A7D4  50                        PUSH EAX
0044A7D5  56                        PUSH ESI
0044A7D6  51                        PUSH ECX
0044A7D7  E8 64 39 26 00            CALL 0x006ae140
0044A7DC  8B 55 B4                  MOV EDX,dword ptr [EBP + -0x4c]
0044A7DF  89 15 F8 8D 85 00         MOV dword ptr [0x00858df8],EDX
LAB_0044a7e5:
0044A7E5  33 C0                     XOR EAX,EAX
0044A7E7  5F                        POP EDI
0044A7E8  5E                        POP ESI
0044A7E9  5B                        POP EBX
0044A7EA  8B E5                     MOV ESP,EBP
0044A7EC  5D                        POP EBP
0044A7ED  C2 0C 00                  RET 0xc
LAB_0044a7f0:
0044A7F0  8B 45 B4                  MOV EAX,dword ptr [EBP + -0x4c]
0044A7F3  81 FE 09 00 FE AF         CMP ESI,0xaffe0009
0044A7F9  A3 F8 8D 85 00            MOV [0x00858df8],EAX
0044A7FE  74 E5                     JZ 0x0044a7e5
0044A800  68 18 88 7A 00            PUSH 0x7a8818
0044A805  68 CC 4C 7A 00            PUSH 0x7a4ccc
0044A80A  56                        PUSH ESI
0044A80B  6A 00                     PUSH 0x0
0044A80D  68 90 2F 00 00            PUSH 0x2f90
0044A812  68 04 60 7A 00            PUSH 0x7a6004
0044A817  E8 B4 2C 26 00            CALL 0x006ad4d0
0044A81C  83 C4 18                  ADD ESP,0x18
0044A81F  85 C0                     TEST EAX,EAX
0044A821  74 01                     JZ 0x0044a824
0044A823  CC                        INT3
LAB_0044a824:
0044A824  68 91 2F 00 00            PUSH 0x2f91
0044A829  68 04 60 7A 00            PUSH 0x7a6004
0044A82E  6A 00                     PUSH 0x0
0044A830  56                        PUSH ESI
0044A831  E8 0A B6 25 00            CALL 0x006a5e40
0044A836  5F                        POP EDI
0044A837  5E                        POP ESI
0044A838  83 C8 FF                  OR EAX,0xffffffff
0044A83B  5B                        POP EBX
0044A83C  8B E5                     MOV ESP,EBP
0044A83E  5D                        POP EBP
0044A83F  C2 0C 00                  RET 0xc
