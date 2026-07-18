FUN_0062d910:
0062D910  55                        PUSH EBP
0062D911  8B EC                     MOV EBP,ESP
0062D913  83 EC 78                  SUB ESP,0x78
0062D916  8B 45 20                  MOV EAX,dword ptr [EBP + 0x20]
0062D919  53                        PUSH EBX
0062D91A  56                        PUSH ESI
0062D91B  33 F6                     XOR ESI,ESI
0062D91D  89 4D FC                  MOV dword ptr [EBP + -0x4],ECX
0062D920  89 30                     MOV dword ptr [EAX],ESI
0062D922  8B 0D F8 8D 85 00         MOV ECX,dword ptr [0x00858df8]
0062D928  57                        PUSH EDI
0062D929  8D 45 8C                  LEA EAX,[EBP + -0x74]
0062D92C  8D 55 88                  LEA EDX,[EBP + -0x78]
0062D92F  56                        PUSH ESI
0062D930  50                        PUSH EAX
0062D931  C7 45 F4 FF FF FF FF      MOV dword ptr [EBP + -0xc],0xffffffff
0062D938  89 4D 88                  MOV dword ptr [EBP + -0x78],ECX
0062D93B  89 15 F8 8D 85 00         MOV dword ptr [0x00858df8],EDX
0062D941  E8 AA FE 0F 00            CALL 0x0072d7f0
0062D946  8B F8                     MOV EDI,EAX
0062D948  83 C4 08                  ADD ESP,0x8
0062D94B  3B FE                     CMP EDI,ESI
0062D94D  0F 85 FC 00 00 00         JNZ 0x0062da4f
0062D953  8B 7D FC                  MOV EDI,dword ptr [EBP + -0x4]
0062D956  8B 5D 08                  MOV EBX,dword ptr [EBP + 0x8]
0062D959  8B 44 9F 50               MOV EAX,dword ptr [EDI + EBX*0x4 + 0x50]
0062D95D  3B C6                     CMP EAX,ESI
0062D95F  75 12                     JNZ 0x0062d973
0062D961  6A 0A                     PUSH 0xa
0062D963  6A 28                     PUSH 0x28
0062D965  6A 0A                     PUSH 0xa
0062D967  56                        PUSH ESI
0062D968  E8 23 09 08 00            CALL 0x006ae290
0062D96D  89 44 9F 50               MOV dword ptr [EDI + EBX*0x4 + 0x50],EAX
0062D971  EB 64                     JMP 0x0062d9d7
LAB_0062d973:
0062D973  8B 40 0C                  MOV EAX,dword ptr [EAX + 0xc]
0062D976  33 D2                     XOR EDX,EDX
0062D978  3B C6                     CMP EAX,ESI
0062D97A  89 45 F8                  MOV dword ptr [EBP + -0x8],EAX
0062D97D  7E 58                     JLE 0x0062d9d7
LAB_0062d97f:
0062D97F  8B 4C 9F 50               MOV ECX,dword ptr [EDI + EBX*0x4 + 0x50]
0062D983  3B 51 0C                  CMP EDX,dword ptr [ECX + 0xc]
0062D986  73 0B                     JNC 0x0062d993
0062D988  8B 41 08                  MOV EAX,dword ptr [ECX + 0x8]
0062D98B  0F AF C2                  IMUL EAX,EDX
0062D98E  03 41 1C                  ADD EAX,dword ptr [ECX + 0x1c]
0062D991  EB 02                     JMP 0x0062d995
LAB_0062d993:
0062D993  33 C0                     XOR EAX,EAX
LAB_0062d995:
0062D995  3B C6                     CMP EAX,ESI
0062D997  74 36                     JZ 0x0062d9cf
0062D999  8B 4D 18                  MOV ECX,dword ptr [EBP + 0x18]
0062D99C  39 08                     CMP dword ptr [EAX],ECX
0062D99E  75 2F                     JNZ 0x0062d9cf
0062D9A0  66 8B 4D 1C               MOV CX,word ptr [EBP + 0x1c]
0062D9A4  89 70 0C                  MOV dword ptr [EAX + 0xc],ESI
0062D9A7  66 89 48 04               MOV word ptr [EAX + 0x4],CX
0062D9AB  66 8B 4D 0C               MOV CX,word ptr [EBP + 0xc]
0062D9AF  66 89 48 06               MOV word ptr [EAX + 0x6],CX
0062D9B3  66 8B 4D 10               MOV CX,word ptr [EBP + 0x10]
0062D9B7  66 89 48 08               MOV word ptr [EAX + 0x8],CX
0062D9BB  66 8B 4D 14               MOV CX,word ptr [EBP + 0x14]
0062D9BF  66 89 48 0A               MOV word ptr [EAX + 0xa],CX
0062D9C3  89 70 20                  MOV dword ptr [EAX + 0x20],ESI
0062D9C6  8B 45 20                  MOV EAX,dword ptr [EBP + 0x20]
0062D9C9  C7 00 01 00 00 00         MOV dword ptr [EAX],0x1
LAB_0062d9cf:
0062D9CF  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
0062D9D2  42                        INC EDX
0062D9D3  3B D0                     CMP EDX,EAX
0062D9D5  7C A8                     JL 0x0062d97f
LAB_0062d9d7:
0062D9D7  8B 54 9F 50               MOV EDX,dword ptr [EDI + EBX*0x4 + 0x50]
0062D9DB  3B D6                     CMP EDX,ESI
0062D9DD  74 5B                     JZ 0x0062da3a
0062D9DF  8B 4D 20                  MOV ECX,dword ptr [EBP + 0x20]
0062D9E2  39 31                     CMP dword ptr [ECX],ESI
0062D9E4  75 54                     JNZ 0x0062da3a
0062D9E6  B9 0A 00 00 00            MOV ECX,0xa
0062D9EB  33 C0                     XOR EAX,EAX
0062D9ED  8D 7D CC                  LEA EDI,[EBP + -0x34]
0062D9F0  F3 AB                     STOSD.REP ES:EDI
0062D9F2  66 8B 4D 1C               MOV CX,word ptr [EBP + 0x1c]
0062D9F6  8B 45 18                  MOV EAX,dword ptr [EBP + 0x18]
0062D9F9  66 89 4D D0               MOV word ptr [EBP + -0x30],CX
0062D9FD  66 8B 4D 10               MOV CX,word ptr [EBP + 0x10]
0062DA01  89 45 CC                  MOV dword ptr [EBP + -0x34],EAX
0062DA04  66 8B 45 0C               MOV AX,word ptr [EBP + 0xc]
0062DA08  66 89 4D D4               MOV word ptr [EBP + -0x2c],CX
0062DA0C  8D 4D CC                  LEA ECX,[EBP + -0x34]
0062DA0F  66 89 45 D2               MOV word ptr [EBP + -0x2e],AX
0062DA13  66 8B 45 14               MOV AX,word ptr [EBP + 0x14]
0062DA17  51                        PUSH ECX
0062DA18  52                        PUSH EDX
0062DA19  66 89 45 D6               MOV word ptr [EBP + -0x2a],AX
0062DA1D  89 75 D8                  MOV dword ptr [EBP + -0x28],ESI
0062DA20  89 75 EC                  MOV dword ptr [EBP + -0x14],ESI
0062DA23  E8 98 07 08 00            CALL 0x006ae1c0
0062DA28  8B 55 88                  MOV EDX,dword ptr [EBP + -0x78]
0062DA2B  89 15 F8 8D 85 00         MOV dword ptr [0x00858df8],EDX
0062DA31  5F                        POP EDI
0062DA32  5E                        POP ESI
0062DA33  5B                        POP EBX
0062DA34  8B E5                     MOV ESP,EBP
0062DA36  5D                        POP EBP
0062DA37  C2 1C 00                  RET 0x1c
LAB_0062da3a:
0062DA3A  8B 55 88                  MOV EDX,dword ptr [EBP + -0x78]
0062DA3D  8B 45 F4                  MOV EAX,dword ptr [EBP + -0xc]
0062DA40  89 15 F8 8D 85 00         MOV dword ptr [0x00858df8],EDX
0062DA46  5F                        POP EDI
0062DA47  5E                        POP ESI
0062DA48  5B                        POP EBX
0062DA49  8B E5                     MOV ESP,EBP
0062DA4B  5D                        POP EBP
0062DA4C  C2 1C 00                  RET 0x1c
LAB_0062da4f:
0062DA4F  8B 45 88                  MOV EAX,dword ptr [EBP + -0x78]
0062DA52  68 48 14 7D 00            PUSH 0x7d1448
0062DA57  68 CC 4C 7A 00            PUSH 0x7a4ccc
0062DA5C  57                        PUSH EDI
0062DA5D  56                        PUSH ESI
0062DA5E  68 C8 01 00 00            PUSH 0x1c8
0062DA63  68 EC 13 7D 00            PUSH 0x7d13ec
0062DA68  A3 F8 8D 85 00            MOV [0x00858df8],EAX
0062DA6D  E8 5E FA 07 00            CALL 0x006ad4d0
0062DA72  83 C4 18                  ADD ESP,0x18
0062DA75  85 C0                     TEST EAX,EAX
0062DA77  74 01                     JZ 0x0062da7a
0062DA79  CC                        INT3
LAB_0062da7a:
0062DA7A  68 CA 01 00 00            PUSH 0x1ca
0062DA7F  68 EC 13 7D 00            PUSH 0x7d13ec
0062DA84  56                        PUSH ESI
0062DA85  57                        PUSH EDI
0062DA86  E8 B5 83 07 00            CALL 0x006a5e40
0062DA8B  5F                        POP EDI
0062DA8C  5E                        POP ESI
0062DA8D  B8 FF FF 00 00            MOV EAX,0xffff
0062DA92  5B                        POP EBX
0062DA93  8B E5                     MOV ESP,EBP
0062DA95  5D                        POP EBP
0062DA96  C2 1C 00                  RET 0x1c
