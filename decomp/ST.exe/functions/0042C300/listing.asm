FUN_0042c300:
0042C300  55                        PUSH EBP
0042C301  8B EC                     MOV EBP,ESP
0042C303  51                        PUSH ECX
0042C304  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
0042C307  53                        PUSH EBX
0042C308  56                        PUSH ESI
0042C309  8B 75 10                  MOV ESI,dword ptr [EBP + 0x10]
0042C30C  57                        PUSH EDI
0042C30D  33 FF                     XOR EDI,EDI
0042C30F  8B D9                     MOV EBX,ECX
0042C311  2B C7                     SUB EAX,EDI
0042C313  89 5D FC                  MOV dword ptr [EBP + -0x4],EBX
0042C316  74 51                     JZ 0x0042c369
0042C318  48                        DEC EAX
0042C319  74 1C                     JZ 0x0042c337
0042C31B  A1 7C D7 7E 00            MOV EAX,[0x007ed77c]
0042C320  68 8F 02 00 00            PUSH 0x28f
0042C325  68 04 60 7A 00            PUSH 0x7a6004
0042C32A  50                        PUSH EAX
0042C32B  68 09 00 FE AF            PUSH 0xaffe0009
0042C330  E8 0B 9B 27 00            CALL 0x006a5e40
0042C335  EB 69                     JMP 0x0042c3a0
LAB_0042c337:
0042C337  0F BE 45 08               MOVSX EAX,byte ptr [EBP + 0x8]
0042C33B  6A 00                     PUSH 0x0
0042C33D  8D 0C 80                  LEA ECX,[EAX + EAX*0x4]
0042C340  8D 14 C8                  LEA EDX,[EAX + ECX*0x8]
0042C343  8D 0C 50                  LEA ECX,[EAX + EDX*0x2]
0042C346  C1 E1 04                  SHL ECX,0x4
0042C349  03 C8                     ADD ECX,EAX
0042C34B  85 F6                     TEST ESI,ESI
0042C34D  8D 3C 4D D3 4F 7F 00      LEA EDI,[ECX*0x2 + 0x7f4fd3]
0042C354  75 0F                     JNZ 0x0042c365
0042C356  6A 04                     PUSH 0x4
0042C358  8B CB                     MOV ECX,EBX
0042C35A  E8 F6 88 FD FF            CALL 0x00404c55
0042C35F  6A 00                     PUSH 0x0
0042C361  6A 05                     PUSH 0x5
0042C363  EB 34                     JMP 0x0042c399
LAB_0042c365:
0042C365  6A 0F                     PUSH 0xf
0042C367  EB 30                     JMP 0x0042c399
LAB_0042c369:
0042C369  0F BE 45 08               MOVSX EAX,byte ptr [EBP + 0x8]
0042C36D  6A 00                     PUSH 0x0
0042C36F  8D 14 80                  LEA EDX,[EAX + EAX*0x4]
0042C372  8D 0C D0                  LEA ECX,[EAX + EDX*0x8]
0042C375  8D 14 48                  LEA EDX,[EAX + ECX*0x2]
0042C378  C1 E2 04                  SHL EDX,0x4
0042C37B  03 D0                     ADD EDX,EAX
0042C37D  85 F6                     TEST ESI,ESI
0042C37F  8D 3C 55 83 4F 7F 00      LEA EDI,[EDX*0x2 + 0x7f4f83]
0042C386  75 0F                     JNZ 0x0042c397
0042C388  6A 01                     PUSH 0x1
0042C38A  8B CB                     MOV ECX,EBX
0042C38C  E8 C4 88 FD FF            CALL 0x00404c55
0042C391  6A 00                     PUSH 0x0
0042C393  6A 02                     PUSH 0x2
0042C395  EB 02                     JMP 0x0042c399
LAB_0042c397:
0042C397  6A 0E                     PUSH 0xe
LAB_0042c399:
0042C399  8B CB                     MOV ECX,EBX
0042C39B  E8 B5 88 FD FF            CALL 0x00404c55
LAB_0042c3a0:
0042C3A0  C1 E6 04                  SHL ESI,0x4
0042C3A3  03 F7                     ADD ESI,EDI
0042C3A5  8B 06                     MOV EAX,dword ptr [ESI]
0042C3A7  83 F8 3C                  CMP EAX,0x3c
0042C3AA  74 07                     JZ 0x0042c3b3
0042C3AC  3D 9A 01 00 00            CMP EAX,0x19a
0042C3B1  75 36                     JNZ 0x0042c3e9
LAB_0042c3b3:
0042C3B3  0F BE 45 14               MOVSX EAX,byte ptr [EBP + 0x14]
0042C3B7  39 46 04                  CMP dword ptr [ESI + 0x4],EAX
0042C3BA  75 2D                     JNZ 0x0042c3e9
0042C3BC  8B 5E 0A                  MOV EBX,dword ptr [ESI + 0xa]
0042C3BF  33 FF                     XOR EDI,EDI
0042C3C1  8B 43 0C                  MOV EAX,dword ptr [EBX + 0xc]
0042C3C4  85 C0                     TEST EAX,EAX
0042C3C6  89 45 0C                  MOV dword ptr [EBP + 0xc],EAX
0042C3C9  7E 1E                     JLE 0x0042c3e9
LAB_0042c3cb:
0042C3CB  8D 4D 08                  LEA ECX,[EBP + 0x8]
0042C3CE  8B D7                     MOV EDX,EDI
0042C3D0  51                        PUSH ECX
0042C3D1  8B CB                     MOV ECX,EBX
0042C3D3  E8 98 08 28 00            CALL 0x006acc70
0042C3D8  8B 45 18                  MOV EAX,dword ptr [EBP + 0x18]
0042C3DB  66 39 45 08               CMP word ptr [EBP + 0x8],AX
0042C3DF  74 14                     JZ 0x0042c3f5
0042C3E1  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
0042C3E4  47                        INC EDI
0042C3E5  3B F8                     CMP EDI,EAX
0042C3E7  7C E2                     JL 0x0042c3cb
LAB_0042c3e9:
0042C3E9  5F                        POP EDI
0042C3EA  5E                        POP ESI
0042C3EB  83 C8 FF                  OR EAX,0xffffffff
0042C3EE  5B                        POP EBX
0042C3EF  8B E5                     MOV ESP,EBP
0042C3F1  5D                        POP EBP
0042C3F2  C2 14 00                  RET 0x14
LAB_0042c3f5:
0042C3F5  8B 55 14                  MOV EDX,dword ptr [EBP + 0x14]
0042C3F8  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
0042C3FB  6A 01                     PUSH 0x1
0042C3FD  50                        PUSH EAX
0042C3FE  52                        PUSH EDX
0042C3FF  E8 B6 64 FD FF            CALL 0x004028ba
0042C404  8B 10                     MOV EDX,dword ptr [EAX]
0042C406  6A 00                     PUSH 0x0
0042C408  8B C8                     MOV ECX,EAX
0042C40A  FF 92 E8 00 00 00         CALL dword ptr [EDX + 0xe8]
0042C410  8D 45 08                  LEA EAX,[EBP + 0x8]
0042C413  C7 45 08 FF FF 00 00      MOV dword ptr [EBP + 0x8],0xffff
0042C41A  50                        PUSH EAX
0042C41B  57                        PUSH EDI
0042C41C  53                        PUSH EBX
0042C41D  E8 1E 1D 28 00            CALL 0x006ae140
0042C422  66 FF 4E 0E               DEC word ptr [ESI + 0xe]
0042C426  66 83 7E 0E 00            CMP word ptr [ESI + 0xe],0x0
0042C42B  77 16                     JA 0x0042c443
0042C42D  8B 4E 0A                  MOV ECX,dword ptr [ESI + 0xa]
0042C430  51                        PUSH ECX
0042C431  E8 DA 1C 28 00            CALL 0x006ae110
0042C436  C7 46 0A 00 00 00 00      MOV dword ptr [ESI + 0xa],0x0
0042C43D  C7 06 00 00 00 00         MOV dword ptr [ESI],0x0
LAB_0042c443:
0042C443  5F                        POP EDI
0042C444  5E                        POP ESI
0042C445  33 C0                     XOR EAX,EAX
0042C447  5B                        POP EBX
0042C448  8B E5                     MOV ESP,EBP
0042C44A  5D                        POP EBP
0042C44B  C2 14 00                  RET 0x14
