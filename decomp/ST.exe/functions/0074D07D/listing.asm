FUN_0074d07d:
0074D07D  55                        PUSH EBP
0074D07E  8B EC                     MOV EBP,ESP
0074D080  83 EC 10                  SUB ESP,0x10
0074D083  53                        PUSH EBX
0074D084  56                        PUSH ESI
0074D085  8B 75 0C                  MOV ESI,dword ptr [EBP + 0xc]
0074D088  8B D9                     MOV EBX,ECX
0074D08A  80 65 0C 00               AND byte ptr [EBP + 0xc],0x0
0074D08E  33 C9                     XOR ECX,ECX
0074D090  89 0E                     MOV dword ptr [ESI],ECX
0074D092  8B 83 A8 00 00 00         MOV EAX,dword ptr [EBX + 0xa8]
0074D098  57                        PUSH EDI
0074D099  33 FF                     XOR EDI,EDI
0074D09B  8B 80 8C 00 00 00         MOV EAX,dword ptr [EAX + 0x8c]
0074D0A1  3B C1                     CMP EAX,ECX
0074D0A3  74 10                     JZ 0x0074d0b5
0074D0A5  39 88 E4 00 00 00         CMP dword ptr [EAX + 0xe4],ECX
0074D0AB  75 08                     JNZ 0x0074d0b5
0074D0AD  8B 80 9C 00 00 00         MOV EAX,dword ptr [EAX + 0x9c]
0074D0B3  89 06                     MOV dword ptr [ESI],EAX
LAB_0074d0b5:
0074D0B5  8B 06                     MOV EAX,dword ptr [ESI]
0074D0B7  3B C1                     CMP EAX,ECX
0074D0B9  74 08                     JZ 0x0074d0c3
0074D0BB  8B 08                     MOV ECX,dword ptr [EAX]
0074D0BD  50                        PUSH EAX
0074D0BE  FF 51 04                  CALL dword ptr [ECX + 0x4]
0074D0C1  EB 1D                     JMP 0x0074d0e0
LAB_0074d0c3:
0074D0C3  39 4B 18                  CMP dword ptr [EBX + 0x18],ECX
0074D0C6  BF 0A 02 04 80            MOV EDI,0x8004020a
0074D0CB  74 13                     JZ 0x0074d0e0
0074D0CD  8B 83 9C 00 00 00         MOV EAX,dword ptr [EBX + 0x9c]
0074D0D3  56                        PUSH ESI
0074D0D4  50                        PUSH EAX
0074D0D5  8B 08                     MOV ECX,dword ptr [EAX]
0074D0D7  FF 51 0C                  CALL dword ptr [ECX + 0xc]
0074D0DA  8B F8                     MOV EDI,EAX
0074D0DC  C6 45 0C 01               MOV byte ptr [EBP + 0xc],0x1
LAB_0074d0e0:
0074D0E0  83 3E 00                  CMP dword ptr [ESI],0x0
0074D0E3  75 0E                     JNZ 0x0074d0f3
0074D0E5  8B 03                     MOV EAX,dword ptr [EBX]
0074D0E7  56                        PUSH ESI
0074D0E8  8B CB                     MOV ECX,EBX
0074D0EA  FF 50 48                  CALL dword ptr [EAX + 0x48]
0074D0ED  8B F8                     MOV EDI,EAX
0074D0EF  C6 45 0C 01               MOV byte ptr [EBP + 0xc],0x1
LAB_0074d0f3:
0074D0F3  85 FF                     TEST EDI,EDI
0074D0F5  7D 04                     JGE 0x0074d0fb
0074D0F7  8B C7                     MOV EAX,EDI
0074D0F9  EB 54                     JMP 0x0074d14f
LAB_0074d0fb:
0074D0FB  80 7D 0C 00               CMP byte ptr [EBP + 0xc],0x0
0074D0FF  74 41                     JZ 0x0074d142
0074D101  33 C0                     XOR EAX,EAX
0074D103  8D 7D F0                  LEA EDI,[EBP + -0x10]
0074D106  AB                        STOSD ES:EDI
0074D107  AB                        STOSD ES:EDI
0074D108  AB                        STOSD ES:EDI
0074D109  AB                        STOSD ES:EDI
0074D10A  8B 7D 08                  MOV EDI,dword ptr [EBP + 0x8]
0074D10D  8D 4D F0                  LEA ECX,[EBP + -0x10]
0074D110  51                        PUSH ECX
0074D111  57                        PUSH EDI
0074D112  8B 07                     MOV EAX,dword ptr [EDI]
0074D114  FF 50 14                  CALL dword ptr [EAX + 0x14]
0074D117  83 7D F8 00               CMP dword ptr [EBP + -0x8],0x0
0074D11B  75 07                     JNZ 0x0074d124
0074D11D  C7 45 F8 01 00 00 00      MOV dword ptr [EBP + -0x8],0x1
LAB_0074d124:
0074D124  8B 03                     MOV EAX,dword ptr [EBX]
0074D126  8D 4D F0                  LEA ECX,[EBP + -0x10]
0074D129  51                        PUSH ECX
0074D12A  8B CB                     MOV ECX,EBX
0074D12C  FF 36                     PUSH dword ptr [ESI]
0074D12E  FF 50 3C                  CALL dword ptr [EAX + 0x3c]
0074D131  85 C0                     TEST EAX,EAX
0074D133  7D 10                     JGE 0x0074d145
0074D135  8B 06                     MOV EAX,dword ptr [ESI]
0074D137  50                        PUSH EAX
0074D138  8B 08                     MOV ECX,dword ptr [EAX]
0074D13A  FF 51 08                  CALL dword ptr [ECX + 0x8]
0074D13D  83 26 00                  AND dword ptr [ESI],0x0
0074D140  EB 03                     JMP 0x0074d145
LAB_0074d142:
0074D142  8B 7D 08                  MOV EDI,dword ptr [EBP + 0x8]
LAB_0074d145:
0074D145  8B 07                     MOV EAX,dword ptr [EDI]
0074D147  6A 00                     PUSH 0x0
0074D149  FF 36                     PUSH dword ptr [ESI]
0074D14B  57                        PUSH EDI
0074D14C  FF 50 10                  CALL dword ptr [EAX + 0x10]
LAB_0074d14f:
0074D14F  5F                        POP EDI
0074D150  5E                        POP ESI
0074D151  5B                        POP EBX
0074D152  C9                        LEAVE
0074D153  C2 08 00                  RET 0x8
