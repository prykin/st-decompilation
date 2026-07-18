FUN_00645020:
00645020  55                        PUSH EBP
00645021  8B EC                     MOV EBP,ESP
00645023  83 EC 58                  SUB ESP,0x58
00645026  8B 81 41 02 00 00         MOV EAX,dword ptr [ECX + 0x241]
0064502C  8B 15 F8 8D 85 00         MOV EDX,dword ptr [0x00858df8]
00645032  89 4D F4                  MOV dword ptr [EBP + -0xc],ECX
00645035  53                        PUSH EBX
00645036  8B 48 0C                  MOV ECX,dword ptr [EAX + 0xc]
00645039  56                        PUSH ESI
0064503A  89 4D F8                  MOV dword ptr [EBP + -0x8],ECX
0064503D  57                        PUSH EDI
0064503E  8D 4D AC                  LEA ECX,[EBP + -0x54]
00645041  8D 45 A8                  LEA EAX,[EBP + -0x58]
00645044  6A 00                     PUSH 0x0
00645046  51                        PUSH ECX
00645047  89 55 A8                  MOV dword ptr [EBP + -0x58],EDX
0064504A  A3 F8 8D 85 00            MOV [0x00858df8],EAX
0064504F  E8 9C 87 0E 00            CALL 0x0072d7f0
00645054  8B F0                     MOV ESI,EAX
00645056  83 C4 08                  ADD ESP,0x8
00645059  85 F6                     TEST ESI,ESI
0064505B  0F 85 95 00 00 00         JNZ 0x006450f6
00645061  8B 7D F8                  MOV EDI,dword ptr [EBP + -0x8]
00645064  85 FF                     TEST EDI,EDI
00645066  75 1B                     JNZ 0x00645083
00645068  8B 15 7C D7 7E 00         MOV EDX,dword ptr [0x007ed77c]
0064506E  68 66 04 00 00            PUSH 0x466
00645073  68 C0 25 7D 00            PUSH 0x7d25c0
00645078  52                        PUSH EDX
00645079  68 09 00 FE AF            PUSH 0xaffe0009
0064507E  E8 BD 0D 06 00            CALL 0x006a5e40
LAB_00645083:
00645083  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
00645086  33 F6                     XOR ESI,ESI
00645088  85 FF                     TEST EDI,EDI
0064508A  C7 45 FC 00 00 00 00      MOV dword ptr [EBP + -0x4],0x0
00645091  C7 00 FF FF FF FF         MOV dword ptr [EAX],0xffffffff
00645097  7E 49                     JLE 0x006450e2
00645099  8B 5D 08                  MOV EBX,dword ptr [EBP + 0x8]
LAB_0064509c:
0064509C  8B 45 F4                  MOV EAX,dword ptr [EBP + -0xc]
0064509F  8D 4D EC                  LEA ECX,[EBP + -0x14]
006450A2  51                        PUSH ECX
006450A3  8B D6                     MOV EDX,ESI
006450A5  8B 88 41 02 00 00         MOV ECX,dword ptr [EAX + 0x241]
006450AB  E8 C0 7B 06 00            CALL 0x006acc70
006450B0  39 5D EC                  CMP dword ptr [EBP + -0x14],EBX
006450B3  74 19                     JZ 0x006450ce
006450B5  46                        INC ESI
006450B6  3B F7                     CMP ESI,EDI
006450B8  7C E2                     JL 0x0064509c
006450BA  8B 45 A8                  MOV EAX,dword ptr [EBP + -0x58]
006450BD  A3 F8 8D 85 00            MOV [0x00858df8],EAX
006450C2  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
006450C5  5F                        POP EDI
006450C6  5E                        POP ESI
006450C7  5B                        POP EBX
006450C8  8B E5                     MOV ESP,EBP
006450CA  5D                        POP EBP
006450CB  C2 08 00                  RET 0x8
LAB_006450ce:
006450CE  8B 55 F0                  MOV EDX,dword ptr [EBP + -0x10]
006450D1  33 C9                     XOR ECX,ECX
006450D3  83 FA 01                  CMP EDX,0x1
006450D6  8B 55 0C                  MOV EDX,dword ptr [EBP + 0xc]
006450D9  0F 95 C1                  SETNZ CL
006450DC  41                        INC ECX
006450DD  89 32                     MOV dword ptr [EDX],ESI
006450DF  89 4D FC                  MOV dword ptr [EBP + -0x4],ECX
LAB_006450e2:
006450E2  8B 45 A8                  MOV EAX,dword ptr [EBP + -0x58]
006450E5  A3 F8 8D 85 00            MOV [0x00858df8],EAX
006450EA  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
006450ED  5F                        POP EDI
006450EE  5E                        POP ESI
006450EF  5B                        POP EBX
006450F0  8B E5                     MOV ESP,EBP
006450F2  5D                        POP EBP
006450F3  C2 08 00                  RET 0x8
LAB_006450f6:
006450F6  8B 4D A8                  MOV ECX,dword ptr [EBP + -0x58]
006450F9  81 FE 09 00 FE AF         CMP ESI,0xaffe0009
006450FF  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
00645105  75 14                     JNZ 0x0064511b
00645107  8B 55 0C                  MOV EDX,dword ptr [EBP + 0xc]
0064510A  33 C0                     XOR EAX,EAX
0064510C  C7 02 FF FF FF FF         MOV dword ptr [EDX],0xffffffff
00645112  5F                        POP EDI
00645113  5E                        POP ESI
00645114  5B                        POP EBX
00645115  8B E5                     MOV ESP,EBP
00645117  5D                        POP EBP
00645118  C2 08 00                  RET 0x8
LAB_0064511b:
0064511B  68 E4 25 7D 00            PUSH 0x7d25e4
00645120  68 CC 4C 7A 00            PUSH 0x7a4ccc
00645125  56                        PUSH ESI
00645126  6A 00                     PUSH 0x0
00645128  68 71 04 00 00            PUSH 0x471
0064512D  68 C0 25 7D 00            PUSH 0x7d25c0
00645132  E8 99 83 06 00            CALL 0x006ad4d0
00645137  83 C4 18                  ADD ESP,0x18
0064513A  85 C0                     TEST EAX,EAX
0064513C  74 01                     JZ 0x0064513f
0064513E  CC                        INT3
LAB_0064513f:
0064513F  68 72 04 00 00            PUSH 0x472
00645144  68 C0 25 7D 00            PUSH 0x7d25c0
00645149  6A 00                     PUSH 0x0
0064514B  56                        PUSH ESI
0064514C  E8 EF 0C 06 00            CALL 0x006a5e40
00645151  5F                        POP EDI
00645152  5E                        POP ESI
00645153  83 C8 FF                  OR EAX,0xffffffff
00645156  5B                        POP EBX
00645157  8B E5                     MOV ESP,EBP
00645159  5D                        POP EBP
0064515A  C2 08 00                  RET 0x8
