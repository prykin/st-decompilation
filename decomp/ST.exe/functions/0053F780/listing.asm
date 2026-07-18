FUN_0053f780:
0053F780  55                        PUSH EBP
0053F781  8B EC                     MOV EBP,ESP
0053F783  83 EC 48                  SUB ESP,0x48
0053F786  8B D1                     MOV EDX,ECX
0053F788  53                        PUSH EBX
0053F789  56                        PUSH ESI
0053F78A  8B 75 08                  MOV ESI,dword ptr [EBP + 0x8]
0053F78D  8B 42 5C                  MOV EAX,dword ptr [EDX + 0x5c]
0053F790  57                        PUSH EDI
0053F791  3B F0                     CMP ESI,EAX
0053F793  89 55 FC                  MOV dword ptr [EBP + -0x4],EDX
0053F796  0F 84 2C 01 00 00         JZ 0x0053f8c8
0053F79C  B9 08 00 00 00            MOV ECX,0x8
0053F7A1  33 C0                     XOR EAX,EAX
0053F7A3  8D 7A 18                  LEA EDI,[EDX + 0x18]
0053F7A6  89 72 5C                  MOV dword ptr [EDX + 0x5c],ESI
0053F7A9  F3 AB                     STOSD.REP ES:EDI
0053F7AB  8B 82 74 01 00 00         MOV EAX,dword ptr [EDX + 0x174]
0053F7B1  C7 42 28 24 00 00 00      MOV dword ptr [EDX + 0x28],0x24
0053F7B8  85 F6                     TEST ESI,ESI
0053F7BA  74 02                     JZ 0x0053f7be
0053F7BC  F7 D8                     NEG EAX
LAB_0053f7be:
0053F7BE  66 89 42 2E               MOV word ptr [EDX + 0x2e],AX
0053F7C2  A1 F8 8D 85 00            MOV EAX,[0x00858df8]
0053F7C7  8D 55 BC                  LEA EDX,[EBP + -0x44]
0053F7CA  8D 4D B8                  LEA ECX,[EBP + -0x48]
0053F7CD  6A 00                     PUSH 0x0
0053F7CF  52                        PUSH EDX
0053F7D0  89 45 B8                  MOV dword ptr [EBP + -0x48],EAX
0053F7D3  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
0053F7D9  E8 12 E0 1E 00            CALL 0x0072d7f0
0053F7DE  8B F0                     MOV ESI,EAX
0053F7E0  83 C4 08                  ADD ESP,0x8
0053F7E3  85 F6                     TEST ESI,ESI
0053F7E5  0F 85 9E 00 00 00         JNZ 0x0053f889
0053F7EB  8B 75 FC                  MOV ESI,dword ptr [EBP + -0x4]
0053F7EE  8B 86 80 01 00 00         MOV EAX,dword ptr [ESI + 0x180]
0053F7F4  85 C0                     TEST EAX,EAX
0053F7F6  74 0E                     JZ 0x0053f806
0053F7F8  8D 4E 18                  LEA ECX,[ESI + 0x18]
0053F7FB  51                        PUSH ECX
0053F7FC  50                        PUSH EAX
0053F7FD  6A 02                     PUSH 0x2
0053F7FF  8B CE                     MOV ECX,ESI
0053F801  E8 7A 68 1A 00            CALL 0x006e6080
LAB_0053f806:
0053F806  8B 86 9D 01 00 00         MOV EAX,dword ptr [ESI + 0x19d]
0053F80C  85 C0                     TEST EAX,EAX
0053F80E  74 0E                     JZ 0x0053f81e
0053F810  8D 56 18                  LEA EDX,[ESI + 0x18]
0053F813  8B CE                     MOV ECX,ESI
0053F815  52                        PUSH EDX
0053F816  50                        PUSH EAX
0053F817  6A 02                     PUSH 0x2
0053F819  E8 62 68 1A 00            CALL 0x006e6080
LAB_0053f81e:
0053F81E  8D BE A1 01 00 00         LEA EDI,[ESI + 0x1a1]
0053F824  BB 05 00 00 00            MOV EBX,0x5
LAB_0053f829:
0053F829  8B 07                     MOV EAX,dword ptr [EDI]
0053F82B  85 C0                     TEST EAX,EAX
0053F82D  74 0E                     JZ 0x0053f83d
0053F82F  8D 4E 18                  LEA ECX,[ESI + 0x18]
0053F832  51                        PUSH ECX
0053F833  50                        PUSH EAX
0053F834  6A 02                     PUSH 0x2
0053F836  8B CE                     MOV ECX,ESI
0053F838  E8 43 68 1A 00            CALL 0x006e6080
LAB_0053f83d:
0053F83D  83 C7 04                  ADD EDI,0x4
0053F840  4B                        DEC EBX
0053F841  75 E6                     JNZ 0x0053f829
0053F843  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
0053F846  85 C0                     TEST EAX,EAX
0053F848  74 0E                     JZ 0x0053f858
0053F84A  A0 4C 73 80 00            MOV AL,[0x0080734c]
0053F84F  84 C0                     TEST AL,AL
0053F851  B8 55 00 00 00            MOV EAX,0x55
0053F856  75 05                     JNZ 0x0053f85d
LAB_0053f858:
0053F858  B8 56 00 00 00            MOV EAX,0x56
LAB_0053f85d:
0053F85D  89 46 28                  MOV dword ptr [ESI + 0x28],EAX
0053F860  8B 86 9D 01 00 00         MOV EAX,dword ptr [ESI + 0x19d]
0053F866  85 C0                     TEST EAX,EAX
0053F868  74 0E                     JZ 0x0053f878
0053F86A  8D 56 18                  LEA EDX,[ESI + 0x18]
0053F86D  8B CE                     MOV ECX,ESI
0053F86F  52                        PUSH EDX
0053F870  50                        PUSH EAX
0053F871  6A 02                     PUSH 0x2
0053F873  E8 08 68 1A 00            CALL 0x006e6080
LAB_0053f878:
0053F878  8B 45 B8                  MOV EAX,dword ptr [EBP + -0x48]
0053F87B  A3 F8 8D 85 00            MOV [0x00858df8],EAX
0053F880  5F                        POP EDI
0053F881  5E                        POP ESI
0053F882  5B                        POP EBX
0053F883  8B E5                     MOV ESP,EBP
0053F885  5D                        POP EBP
0053F886  C2 04 00                  RET 0x4
LAB_0053f889:
0053F889  8B 4D B8                  MOV ECX,dword ptr [EBP + -0x48]
0053F88C  68 7C 7A 7C 00            PUSH 0x7c7a7c
0053F891  68 CC 4C 7A 00            PUSH 0x7a4ccc
0053F896  56                        PUSH ESI
0053F897  6A 00                     PUSH 0x0
0053F899  68 FF 01 00 00            PUSH 0x1ff
0053F89E  68 70 78 7C 00            PUSH 0x7c7870
0053F8A3  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
0053F8A9  E8 22 DC 16 00            CALL 0x006ad4d0
0053F8AE  83 C4 18                  ADD ESP,0x18
0053F8B1  85 C0                     TEST EAX,EAX
0053F8B3  74 01                     JZ 0x0053f8b6
0053F8B5  CC                        INT3
LAB_0053f8b6:
0053F8B6  68 FF 01 00 00            PUSH 0x1ff
0053F8BB  68 70 78 7C 00            PUSH 0x7c7870
0053F8C0  6A 00                     PUSH 0x0
0053F8C2  56                        PUSH ESI
0053F8C3  E8 78 65 16 00            CALL 0x006a5e40
LAB_0053f8c8:
0053F8C8  5F                        POP EDI
0053F8C9  5E                        POP ESI
0053F8CA  5B                        POP EBX
0053F8CB  8B E5                     MOV ESP,EBP
0053F8CD  5D                        POP EBP
0053F8CE  C2 04 00                  RET 0x4
