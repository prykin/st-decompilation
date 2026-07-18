FUN_004a80a0:
004A80A0  55                        PUSH EBP
004A80A1  8B EC                     MOV EBP,ESP
004A80A3  83 EC 30                  SUB ESP,0x30
004A80A6  53                        PUSH EBX
004A80A7  56                        PUSH ESI
004A80A8  8B F1                     MOV ESI,ECX
004A80AA  57                        PUSH EDI
004A80AB  6A 01                     PUSH 0x1
004A80AD  6A 02                     PUSH 0x2
004A80AF  8B 86 2E 02 00 00         MOV EAX,dword ptr [ESI + 0x22e]
004A80B5  6A 00                     PUSH 0x0
004A80B7  6A 00                     PUSH 0x0
004A80B9  8B 78 0C                  MOV EDI,dword ptr [EAX + 0xc]
004A80BC  89 7D F8                  MOV dword ptr [EBP + -0x8],EDI
004A80BF  E8 CC 61 20 00            CALL 0x006ae290
004A80C4  33 DB                     XOR EBX,EBX
004A80C6  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
004A80C9  85 FF                     TEST EDI,EDI
004A80CB  0F 8E B1 00 00 00         JLE 0x004a8182
LAB_004a80d1:
004A80D1  8D 4D D0                  LEA ECX,[EBP + -0x30]
004A80D4  8B D3                     MOV EDX,EBX
004A80D6  51                        PUSH ECX
004A80D7  8B 8E 2E 02 00 00         MOV ECX,dword ptr [ESI + 0x22e]
004A80DD  E8 8E 4B 20 00            CALL 0x006acc70
004A80E2  66 81 7D D4 FF FF         CMP word ptr [EBP + -0x2c],0xffff
004A80E8  0F 84 8B 00 00 00         JZ 0x004a8179
004A80EE  33 C0                     XOR EAX,EAX
004A80F0  8D 55 D0                  LEA EDX,[EBP + -0x30]
004A80F3  89 45 D0                  MOV dword ptr [EBP + -0x30],EAX
004A80F6  89 45 E2                  MOV dword ptr [EBP + -0x1e],EAX
004A80F9  8B 86 2E 02 00 00         MOV EAX,dword ptr [ESI + 0x22e]
004A80FF  52                        PUSH EDX
004A8100  53                        PUSH EBX
004A8101  50                        PUSH EAX
004A8102  E8 39 60 20 00            CALL 0x006ae140
004A8107  8B 4D D4                  MOV ECX,dword ptr [EBP + -0x2c]
004A810A  8A 56 24                  MOV DL,byte ptr [ESI + 0x24]
004A810D  6A 01                     PUSH 0x1
004A810F  51                        PUSH ECX
004A8110  8B 0D 74 A1 7F 00         MOV ECX,dword ptr [0x007fa174]
004A8116  52                        PUSH EDX
004A8117  E8 9E A7 F5 FF            CALL 0x004028ba
004A811C  8B F8                     MOV EDI,EAX
004A811E  85 FF                     TEST EDI,EDI
004A8120  75 3D                     JNZ 0x004a815f
004A8122  68 BC C4 7A 00            PUSH 0x7ac4bc
004A8127  68 CC 4C 7A 00            PUSH 0x7a4ccc
004A812C  50                        PUSH EAX
004A812D  50                        PUSH EAX
004A812E  68 C9 16 00 00            PUSH 0x16c9
004A8133  68 3C BE 7A 00            PUSH 0x7abe3c
004A8138  E8 93 53 20 00            CALL 0x006ad4d0
004A813D  83 C4 18                  ADD ESP,0x18
004A8140  85 C0                     TEST EAX,EAX
004A8142  74 01                     JZ 0x004a8145
004A8144  CC                        INT3
LAB_004a8145:
004A8145  A1 7C D7 7E 00            MOV EAX,[0x007ed77c]
004A814A  68 CA 16 00 00            PUSH 0x16ca
004A814F  68 3C BE 7A 00            PUSH 0x7abe3c
004A8154  50                        PUSH EAX
004A8155  68 04 00 FE AF            PUSH 0xaffe0004
004A815A  E8 E1 DC 1F 00            CALL 0x006a5e40
LAB_004a815f:
004A815F  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
004A8162  8D 4D D4                  LEA ECX,[EBP + -0x2c]
004A8165  51                        PUSH ECX
004A8166  52                        PUSH EDX
004A8167  E8 54 60 20 00            CALL 0x006ae1c0
004A816C  C7 87 93 04 00 00 01 00 00 00  MOV dword ptr [EDI + 0x493],0x1
004A8176  8B 7D F8                  MOV EDI,dword ptr [EBP + -0x8]
LAB_004a8179:
004A8179  43                        INC EBX
004A817A  3B DF                     CMP EBX,EDI
004A817C  0F 8C 4F FF FF FF         JL 0x004a80d1
LAB_004a8182:
004A8182  8B 96 32 02 00 00         MOV EDX,dword ptr [ESI + 0x232]
004A8188  8B 8E 2A 02 00 00         MOV ECX,dword ptr [ESI + 0x22a]
004A818E  8D 45 E8                  LEA EAX,[EBP + -0x18]
004A8191  50                        PUSH EAX
004A8192  E8 D9 4A 20 00            CALL 0x006acc70
004A8197  8B 7D FC                  MOV EDI,dword ptr [EBP + -0x4]
004A819A  8B 47 0C                  MOV EAX,dword ptr [EDI + 0xc]
004A819D  85 C0                     TEST EAX,EAX
004A819F  76 19                     JBE 0x004a81ba
004A81A1  0F BF 4D EC               MOVSX ECX,word ptr [EBP + -0x14]
004A81A5  0F BF 55 EA               MOVSX EDX,word ptr [EBP + -0x16]
004A81A9  0F BF 45 E8               MOVSX EAX,word ptr [EBP + -0x18]
004A81AD  6A 00                     PUSH 0x0
004A81AF  51                        PUSH ECX
004A81B0  52                        PUSH EDX
004A81B1  50                        PUSH EAX
004A81B2  57                        PUSH EDI
004A81B3  8B CE                     MOV ECX,ESI
004A81B5  E8 C1 DB F5 FF            CALL 0x00405d7b
LAB_004a81ba:
004A81BA  57                        PUSH EDI
004A81BB  E8 50 5F 20 00            CALL 0x006ae110
004A81C0  5F                        POP EDI
004A81C1  5E                        POP ESI
004A81C2  5B                        POP EBX
004A81C3  8B E5                     MOV ESP,EBP
004A81C5  5D                        POP EBP
004A81C6  C3                        RET
