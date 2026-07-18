FUN_006c6e30:
006C6E30  55                        PUSH EBP
006C6E31  8B EC                     MOV EBP,ESP
006C6E33  83 EC 0C                  SUB ESP,0xc
006C6E36  53                        PUSH EBX
006C6E37  56                        PUSH ESI
006C6E38  8B 75 08                  MOV ESI,dword ptr [EBP + 0x8]
006C6E3B  57                        PUSH EDI
006C6E3C  8D 5E 2A                  LEA EBX,[ESI + 0x2a]
006C6E3F  53                        PUSH EBX
006C6E40  E8 1B 42 FE FF            CALL 0x006ab060
006C6E45  8D 45 F4                  LEA EAX,[EBP + -0xc]
006C6E48  6A 09                     PUSH 0x9
006C6E4A  50                        PUSH EAX
006C6E4B  56                        PUSH ESI
006C6E4C  FF 56 42                  CALL dword ptr [ESI + 0x42]
006C6E4F  83 F8 09                  CMP EAX,0x9
006C6E52  74 16                     JZ 0x006c6e6a
006C6E54  85 C0                     TEST EAX,EAX
006C6E56  0F 8C A3 00 00 00         JL 0x006c6eff
006C6E5C  5F                        POP EDI
006C6E5D  5E                        POP ESI
006C6E5E  B8 FB FF FF FF            MOV EAX,0xfffffffb
006C6E63  5B                        POP EBX
006C6E64  8B E5                     MOV ESP,EBP
006C6E66  5D                        POP EBP
006C6E67  C2 04 00                  RET 0x4
LAB_006c6e6a:
006C6E6A  0F BF 4D F4               MOVSX ECX,word ptr [EBP + -0xc]
006C6E6E  0F BF 55 F6               MOVSX EDX,word ptr [EBP + -0xa]
006C6E72  0F BF 45 F8               MOVSX EAX,word ptr [EBP + -0x8]
006C6E76  89 4E 1A                  MOV dword ptr [ESI + 0x1a],ECX
006C6E79  89 56 1E                  MOV dword ptr [ESI + 0x1e],EDX
006C6E7C  0F BF 4D FA               MOVSX ECX,word ptr [EBP + -0x6]
006C6E80  89 4E 26                  MOV dword ptr [ESI + 0x26],ECX
006C6E83  8A 4D FC                  MOV CL,byte ptr [EBP + -0x4]
006C6E86  F6 C1 80                  TEST CL,0x80
006C6E89  89 46 22                  MOV dword ptr [ESI + 0x22],EAX
006C6E8C  74 58                     JZ 0x006c6ee6
006C6E8E  80 E1 07                  AND CL,0x7
006C6E91  B8 01 00 00 00            MOV EAX,0x1
006C6E96  88 4E 19                  MOV byte ptr [ESI + 0x19],CL
006C6E99  41                        INC ECX
006C6E9A  D3 E0                     SHL EAX,CL
006C6E9C  8D 3C 40                  LEA EDI,[EAX + EAX*0x2]
006C6E9F  57                        PUSH EDI
006C6EA0  E8 CB 8C FF FF            CALL 0x006bfb70
006C6EA5  85 C0                     TEST EAX,EAX
006C6EA7  89 03                     MOV dword ptr [EBX],EAX
006C6EA9  75 0E                     JNZ 0x006c6eb9
006C6EAB  5F                        POP EDI
006C6EAC  5E                        POP ESI
006C6EAD  B8 FE FF FF FF            MOV EAX,0xfffffffe
006C6EB2  5B                        POP EBX
006C6EB3  8B E5                     MOV ESP,EBP
006C6EB5  5D                        POP EBP
006C6EB6  C2 04 00                  RET 0x4
LAB_006c6eb9:
006C6EB9  57                        PUSH EDI
006C6EBA  50                        PUSH EAX
006C6EBB  56                        PUSH ESI
006C6EBC  FF 56 42                  CALL dword ptr [ESI + 0x42]
006C6EBF  3B C7                     CMP EAX,EDI
006C6EC1  89 45 08                  MOV dword ptr [EBP + 0x8],EAX
006C6EC4  74 28                     JZ 0x006c6eee
006C6EC6  53                        PUSH EBX
006C6EC7  E8 94 41 FE FF            CALL 0x006ab060
006C6ECC  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
006C6ECF  85 C0                     TEST EAX,EAX
006C6ED1  7C 07                     JL 0x006c6eda
006C6ED3  C7 45 08 FB FF FF FF      MOV dword ptr [EBP + 0x8],0xfffffffb
LAB_006c6eda:
006C6EDA  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
006C6EDD  5F                        POP EDI
006C6EDE  5E                        POP ESI
006C6EDF  5B                        POP EBX
006C6EE0  8B E5                     MOV ESP,EBP
006C6EE2  5D                        POP EBP
006C6EE3  C2 04 00                  RET 0x4
LAB_006c6ee6:
006C6EE6  8A 56 10                  MOV DL,byte ptr [ESI + 0x10]
006C6EE9  88 56 19                  MOV byte ptr [ESI + 0x19],DL
006C6EEC  EB 03                     JMP 0x006c6ef1
LAB_006c6eee:
006C6EEE  8A 4D FC                  MOV CL,byte ptr [EBP + -0x4]
LAB_006c6ef1:
006C6EF1  80 E1 40                  AND CL,0x40
006C6EF4  80 F9 40                  CMP CL,0x40
006C6EF7  0F 94 C0                  SETZ AL
006C6EFA  88 46 18                  MOV byte ptr [ESI + 0x18],AL
006C6EFD  33 C0                     XOR EAX,EAX
LAB_006c6eff:
006C6EFF  5F                        POP EDI
006C6F00  5E                        POP ESI
006C6F01  5B                        POP EBX
006C6F02  8B E5                     MOV ESP,EBP
006C6F04  5D                        POP EBP
006C6F05  C2 04 00                  RET 0x4
