FUN_00636170:
00636170  55                        PUSH EBP
00636171  8B EC                     MOV EBP,ESP
00636173  51                        PUSH ECX
00636174  56                        PUSH ESI
00636175  68 98 1D 7D 00            PUSH 0x7d1d98
0063617A  68 8C 1D 7D 00            PUSH 0x7d1d8c
0063617F  C7 45 FC FF FF FF FF      MOV dword ptr [EBP + -0x4],0xffffffff
00636186  E8 E5 88 0F 00            CALL 0x0072ea70
0063618B  8B F0                     MOV ESI,EAX
0063618D  83 C4 08                  ADD ESP,0x8
00636190  85 F6                     TEST ESI,ESI
00636192  74 40                     JZ 0x006361d4
00636194  8D 45 FC                  LEA EAX,[EBP + -0x4]
00636197  50                        PUSH EAX
00636198  68 88 1D 7D 00            PUSH 0x7d1d88
0063619D  56                        PUSH ESI
0063619E  E8 AD 9E 0F 00            CALL 0x00730050
006361A3  83 C4 0C                  ADD ESP,0xc
006361A6  85 C0                     TEST EAX,EAX
006361A8  56                        PUSH ESI
006361A9  7F 18                     JG 0x006361c3
006361AB  E8 E0 88 0F 00            CALL 0x0072ea90
006361B0  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
006361B3  83 C4 04                  ADD ESP,0x4
006361B6  89 0D B0 1B 7D 00         MOV dword ptr [0x007d1bb0],ECX
006361BC  33 C0                     XOR EAX,EAX
006361BE  5E                        POP ESI
006361BF  8B E5                     MOV ESP,EBP
006361C1  5D                        POP EBP
006361C2  C3                        RET
LAB_006361c3:
006361C3  E8 C8 88 0F 00            CALL 0x0072ea90
006361C8  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
006361CB  83 C4 04                  ADD ESP,0x4
006361CE  89 15 B0 1B 7D 00         MOV dword ptr [0x007d1bb0],EDX
LAB_006361d4:
006361D4  33 C0                     XOR EAX,EAX
006361D6  5E                        POP ESI
006361D7  8B E5                     MOV ESP,EBP
006361D9  5D                        POP EBP
006361DA  C3                        RET
