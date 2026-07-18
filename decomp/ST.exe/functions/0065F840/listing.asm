FUN_0065f840:
0065F840  55                        PUSH EBP
0065F841  8B EC                     MOV EBP,ESP
0065F843  83 EC 50                  SUB ESP,0x50
0065F846  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
0065F849  53                        PUSH EBX
0065F84A  33 DB                     XOR EBX,EBX
0065F84C  56                        PUSH ESI
0065F84D  3B C3                     CMP EAX,EBX
0065F84F  57                        PUSH EDI
0065F850  89 5D FC                  MOV dword ptr [EBP + -0x4],EBX
0065F853  0F 84 D6 00 00 00         JZ 0x0065f92f
0065F859  8B 40 0C                  MOV EAX,dword ptr [EAX + 0xc]
0065F85C  3B C3                     CMP EAX,EBX
0065F85E  0F 84 CB 00 00 00         JZ 0x0065f92f
0065F864  39 45 0C                  CMP dword ptr [EBP + 0xc],EAX
0065F867  0F 8D C2 00 00 00         JGE 0x0065f92f
0065F86D  39 5D 10                  CMP dword ptr [EBP + 0x10],EBX
0065F870  0F 8E B9 00 00 00         JLE 0x0065f92f
0065F876  A1 F8 8D 85 00            MOV EAX,[0x00858df8]
0065F87B  8D 55 B4                  LEA EDX,[EBP + -0x4c]
0065F87E  8D 4D B0                  LEA ECX,[EBP + -0x50]
0065F881  53                        PUSH EBX
0065F882  52                        PUSH EDX
0065F883  89 45 B0                  MOV dword ptr [EBP + -0x50],EAX
0065F886  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
0065F88C  E8 5F DF 0C 00            CALL 0x0072d7f0
0065F891  83 C4 08                  ADD ESP,0x8
0065F894  3B C3                     CMP EAX,EBX
0065F896  75 76                     JNZ 0x0065f90e
0065F898  6A 05                     PUSH 0x5
0065F89A  6A 06                     PUSH 0x6
0065F89C  6A 05                     PUSH 0x5
0065F89E  53                        PUSH EBX
0065F89F  E8 EC E9 04 00            CALL 0x006ae290
0065F8A4  8B 7D 08                  MOV EDI,dword ptr [EBP + 0x8]
0065F8A7  8B 4D 0C                  MOV ECX,dword ptr [EBP + 0xc]
0065F8AA  8B D8                     MOV EBX,EAX
0065F8AC  8B F1                     MOV ESI,ECX
0065F8AE  8B 47 0C                  MOV EAX,dword ptr [EDI + 0xc]
0065F8B1  89 5D FC                  MOV dword ptr [EBP + -0x4],EBX
0065F8B4  3B C8                     CMP ECX,EAX
0065F8B6  7D 42                     JGE 0x0065f8fa
0065F8B8  EB 03                     JMP 0x0065f8bd
LAB_0065f8ba:
0065F8BA  8B 4D 0C                  MOV ECX,dword ptr [EBP + 0xc]
LAB_0065f8bd:
0065F8BD  8B D6                     MOV EDX,ESI
0065F8BF  2B D1                     SUB EDX,ECX
0065F8C1  8B 4D 10                  MOV ECX,dword ptr [EBP + 0x10]
0065F8C4  3B D1                     CMP EDX,ECX
0065F8C6  7D 32                     JGE 0x0065f8fa
0065F8C8  3B F0                     CMP ESI,EAX
0065F8CA  73 0D                     JNC 0x0065f8d9
0065F8CC  8B 47 08                  MOV EAX,dword ptr [EDI + 0x8]
0065F8CF  8B 4F 1C                  MOV ECX,dword ptr [EDI + 0x1c]
0065F8D2  0F AF C6                  IMUL EAX,ESI
0065F8D5  03 C1                     ADD EAX,ECX
0065F8D7  EB 02                     JMP 0x0065f8db
LAB_0065f8d9:
0065F8D9  33 C0                     XOR EAX,EAX
LAB_0065f8db:
0065F8DB  8B 08                     MOV ECX,dword ptr [EAX]
0065F8DD  89 4D F4                  MOV dword ptr [EBP + -0xc],ECX
0065F8E0  66 8B 50 04               MOV DX,word ptr [EAX + 0x4]
0065F8E4  8D 45 F4                  LEA EAX,[EBP + -0xc]
0065F8E7  66 89 55 F8               MOV word ptr [EBP + -0x8],DX
0065F8EB  50                        PUSH EAX
0065F8EC  53                        PUSH EBX
0065F8ED  E8 CE E8 04 00            CALL 0x006ae1c0
0065F8F2  8B 47 0C                  MOV EAX,dword ptr [EDI + 0xc]
0065F8F5  46                        INC ESI
0065F8F6  3B F0                     CMP ESI,EAX
0065F8F8  7C C0                     JL 0x0065f8ba
LAB_0065f8fa:
0065F8FA  8B 4D B0                  MOV ECX,dword ptr [EBP + -0x50]
0065F8FD  8B C3                     MOV EAX,EBX
0065F8FF  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
0065F905  5F                        POP EDI
0065F906  5E                        POP ESI
0065F907  5B                        POP EBX
0065F908  8B E5                     MOV ESP,EBP
0065F90A  5D                        POP EBP
0065F90B  C2 0C 00                  RET 0xc
LAB_0065f90e:
0065F90E  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
0065F911  8B 55 B0                  MOV EDX,dword ptr [EBP + -0x50]
0065F914  3B C3                     CMP EAX,EBX
0065F916  89 15 F8 8D 85 00         MOV dword ptr [0x00858df8],EDX
0065F91C  74 06                     JZ 0x0065f924
0065F91E  50                        PUSH EAX
0065F91F  E8 EC E7 04 00            CALL 0x006ae110
LAB_0065f924:
0065F924  8B C3                     MOV EAX,EBX
0065F926  5F                        POP EDI
0065F927  5E                        POP ESI
0065F928  5B                        POP EBX
0065F929  8B E5                     MOV ESP,EBP
0065F92B  5D                        POP EBP
0065F92C  C2 0C 00                  RET 0xc
LAB_0065f92f:
0065F92F  5F                        POP EDI
0065F930  5E                        POP ESI
0065F931  33 C0                     XOR EAX,EAX
0065F933  5B                        POP EBX
0065F934  8B E5                     MOV ESP,EBP
0065F936  5D                        POP EBP
0065F937  C2 0C 00                  RET 0xc
