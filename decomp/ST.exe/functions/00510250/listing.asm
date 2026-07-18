FrmPanelTy::DoneFrmPanel:
00510250  55                        PUSH EBP
00510251  8B EC                     MOV EBP,ESP
00510253  83 EC 48                  SUB ESP,0x48
00510256  A1 F8 8D 85 00            MOV EAX,[0x00858df8]
0051025B  53                        PUSH EBX
0051025C  56                        PUSH ESI
0051025D  89 4D FC                  MOV dword ptr [EBP + -0x4],ECX
00510260  57                        PUSH EDI
00510261  8D 55 BC                  LEA EDX,[EBP + -0x44]
00510264  8D 4D B8                  LEA ECX,[EBP + -0x48]
00510267  6A 00                     PUSH 0x0
00510269  52                        PUSH EDX
0051026A  89 45 B8                  MOV dword ptr [EBP + -0x48],EAX
0051026D  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
00510273  E8 78 D5 21 00            CALL 0x0072d7f0
00510278  8B F0                     MOV ESI,EAX
0051027A  83 C4 08                  ADD ESP,0x8
0051027D  85 F6                     TEST ESI,ESI
0051027F  75 68                     JNZ 0x005102e9
00510281  8B 7D FC                  MOV EDI,dword ptr [EBP + -0x4]
00510284  BB 08 00 00 00            MOV EBX,0x8
00510289  8D B7 B3 01 00 00         LEA ESI,[EDI + 0x1b3]
LAB_0051028f:
0051028F  8B 06                     MOV EAX,dword ptr [ESI]
00510291  85 C0                     TEST EAX,EAX
00510293  74 0F                     JZ 0x005102a4
00510295  8B 4F 0C                  MOV ECX,dword ptr [EDI + 0xc]
00510298  50                        PUSH EAX
00510299  E8 12 54 1D 00            CALL 0x006e56b0
0051029E  C7 06 00 00 00 00         MOV dword ptr [ESI],0x0
LAB_005102a4:
005102A4  83 C6 04                  ADD ESI,0x4
005102A7  4B                        DEC EBX
005102A8  75 E5                     JNZ 0x0051028f
005102AA  8D B7 D3 01 00 00         LEA ESI,[EDI + 0x1d3]
005102B0  BB 04 00 00 00            MOV EBX,0x4
LAB_005102b5:
005102B5  8B 06                     MOV EAX,dword ptr [ESI]
005102B7  85 C0                     TEST EAX,EAX
005102B9  74 0F                     JZ 0x005102ca
005102BB  8B 4F 0C                  MOV ECX,dword ptr [EDI + 0xc]
005102BE  50                        PUSH EAX
005102BF  E8 EC 53 1D 00            CALL 0x006e56b0
005102C4  C7 06 00 00 00 00         MOV dword ptr [ESI],0x0
LAB_005102ca:
005102CA  83 C6 04                  ADD ESI,0x4
005102CD  4B                        DEC EBX
005102CE  75 E5                     JNZ 0x005102b5
005102D0  8B 45 B8                  MOV EAX,dword ptr [EBP + -0x48]
005102D3  C7 05 8C 16 80 00 00 00 00 00  MOV dword ptr [0x0080168c],0x0
005102DD  A3 F8 8D 85 00            MOV [0x00858df8],EAX
005102E2  5F                        POP EDI
005102E3  5E                        POP ESI
005102E4  5B                        POP EBX
005102E5  8B E5                     MOV ESP,EBP
005102E7  5D                        POP EBP
005102E8  C3                        RET
LAB_005102e9:
005102E9  8B 4D B8                  MOV ECX,dword ptr [EBP + -0x48]
005102EC  68 6C 2A 7C 00            PUSH 0x7c2a6c
005102F1  68 CC 4C 7A 00            PUSH 0x7a4ccc
005102F6  56                        PUSH ESI
005102F7  6A 00                     PUSH 0x0
005102F9  6A 4F                     PUSH 0x4f
005102FB  68 58 29 7C 00            PUSH 0x7c2958
00510300  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
00510306  E8 C5 D1 19 00            CALL 0x006ad4d0
0051030B  83 C4 18                  ADD ESP,0x18
0051030E  85 C0                     TEST EAX,EAX
00510310  74 01                     JZ 0x00510313
00510312  CC                        INT3
LAB_00510313:
00510313  6A 4F                     PUSH 0x4f
00510315  68 58 29 7C 00            PUSH 0x7c2958
0051031A  6A 00                     PUSH 0x0
0051031C  56                        PUSH ESI
0051031D  E8 1E 5B 19 00            CALL 0x006a5e40
00510322  5F                        POP EDI
00510323  5E                        POP ESI
00510324  5B                        POP EBX
00510325  8B E5                     MOV ESP,EBP
00510327  5D                        POP EBP
00510328  C3                        RET
