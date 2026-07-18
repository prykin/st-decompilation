FUN_00648780:
00648780  55                        PUSH EBP
00648781  8B EC                     MOV EBP,ESP
00648783  83 EC 4C                  SUB ESP,0x4c
00648786  A1 F8 8D 85 00            MOV EAX,[0x00858df8]
0064878B  56                        PUSH ESI
0064878C  57                        PUSH EDI
0064878D  8D 55 B8                  LEA EDX,[EBP + -0x48]
00648790  8D 4D B4                  LEA ECX,[EBP + -0x4c]
00648793  6A 00                     PUSH 0x0
00648795  52                        PUSH EDX
00648796  C7 45 F8 00 00 00 00      MOV dword ptr [EBP + -0x8],0x0
0064879D  C7 45 FC 00 00 00 00      MOV dword ptr [EBP + -0x4],0x0
006487A4  89 45 B4                  MOV dword ptr [EBP + -0x4c],EAX
006487A7  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
006487AD  E8 3E 50 0E 00            CALL 0x0072d7f0
006487B2  8B F0                     MOV ESI,EAX
006487B4  83 C4 08                  ADD ESP,0x8
006487B7  85 F6                     TEST ESI,ESI
006487B9  75 5E                     JNZ 0x00648819
006487BB  8B 75 08                  MOV ESI,dword ptr [EBP + 0x8]
006487BE  8B 7D 0C                  MOV EDI,dword ptr [EBP + 0xc]
006487C1  85 F6                     TEST ESI,ESI
006487C3  74 04                     JZ 0x006487c9
006487C5  85 FF                     TEST EDI,EDI
006487C7  75 14                     JNZ 0x006487dd
LAB_006487c9:
006487C9  A1 7C D7 7E 00            MOV EAX,[0x007ed77c]
006487CE  6A 7F                     PUSH 0x7f
006487D0  68 F4 27 7D 00            PUSH 0x7d27f4
006487D5  50                        PUSH EAX
006487D6  6A CC                     PUSH -0x34
006487D8  E8 63 D6 05 00            CALL 0x006a5e40
LAB_006487dd:
006487DD  6A 00                     PUSH 0x0
006487DF  6A 01                     PUSH 0x1
006487E1  57                        PUSH EDI
006487E2  56                        PUSH ESI
006487E3  E8 A8 A5 0A 00            CALL 0x006f2d90
006487E8  83 C4 10                  ADD ESP,0x10
006487EB  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
006487EE  85 C0                     TEST EAX,EAX
006487F0  74 15                     JZ 0x00648807
006487F2  50                        PUSH EAX
006487F3  E8 30 C4 DB FF            CALL 0x00404c28
006487F8  8D 4D FC                  LEA ECX,[EBP + -0x4]
006487FB  89 45 F8                  MOV dword ptr [EBP + -0x8],EAX
006487FE  51                        PUSH ECX
006487FF  E8 A0 98 DB FF            CALL 0x004020a4
00648804  83 C4 08                  ADD ESP,0x8
LAB_00648807:
00648807  8B 55 B4                  MOV EDX,dword ptr [EBP + -0x4c]
0064880A  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
0064880D  89 15 F8 8D 85 00         MOV dword ptr [0x00858df8],EDX
00648813  5F                        POP EDI
00648814  5E                        POP ESI
00648815  8B E5                     MOV ESP,EBP
00648817  5D                        POP EBP
00648818  C3                        RET
LAB_00648819:
00648819  8B 45 B4                  MOV EAX,dword ptr [EBP + -0x4c]
0064881C  68 28 28 7D 00            PUSH 0x7d2828
00648821  68 CC 4C 7A 00            PUSH 0x7a4ccc
00648826  56                        PUSH ESI
00648827  6A 00                     PUSH 0x0
00648829  68 86 00 00 00            PUSH 0x86
0064882E  68 F4 27 7D 00            PUSH 0x7d27f4
00648833  A3 F8 8D 85 00            MOV [0x00858df8],EAX
00648838  E8 93 4C 06 00            CALL 0x006ad4d0
0064883D  83 C4 18                  ADD ESP,0x18
00648840  85 C0                     TEST EAX,EAX
00648842  74 01                     JZ 0x00648845
00648844  CC                        INT3
LAB_00648845:
00648845  8D 4D FC                  LEA ECX,[EBP + -0x4]
00648848  51                        PUSH ECX
00648849  E8 56 98 DB FF            CALL 0x004020a4
0064884E  8D 55 F8                  LEA EDX,[EBP + -0x8]
00648851  52                        PUSH EDX
00648852  E8 4D 98 DB FF            CALL 0x004020a4
00648857  83 C4 08                  ADD ESP,0x8
0064885A  68 88 00 00 00            PUSH 0x88
0064885F  68 F4 27 7D 00            PUSH 0x7d27f4
00648864  6A 00                     PUSH 0x0
00648866  56                        PUSH ESI
00648867  E8 D4 D5 05 00            CALL 0x006a5e40
0064886C  5F                        POP EDI
0064886D  33 C0                     XOR EAX,EAX
0064886F  5E                        POP ESI
00648870  8B E5                     MOV ESP,EBP
00648872  5D                        POP EBP
00648873  C3                        RET
