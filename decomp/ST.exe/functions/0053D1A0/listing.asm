SAMPanelTy::DoneSAMPanel:
0053D1A0  55                        PUSH EBP
0053D1A1  8B EC                     MOV EBP,ESP
0053D1A3  83 EC 48                  SUB ESP,0x48
0053D1A6  A1 F8 8D 85 00            MOV EAX,[0x00858df8]
0053D1AB  53                        PUSH EBX
0053D1AC  56                        PUSH ESI
0053D1AD  89 4D FC                  MOV dword ptr [EBP + -0x4],ECX
0053D1B0  57                        PUSH EDI
0053D1B1  8D 55 BC                  LEA EDX,[EBP + -0x44]
0053D1B4  8D 4D B8                  LEA ECX,[EBP + -0x48]
0053D1B7  6A 00                     PUSH 0x0
0053D1B9  52                        PUSH EDX
0053D1BA  89 45 B8                  MOV dword ptr [EBP + -0x48],EAX
0053D1BD  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
0053D1C3  E8 28 06 1F 00            CALL 0x0072d7f0
0053D1C8  8B F0                     MOV ESI,EAX
0053D1CA  83 C4 08                  ADD ESP,0x8
0053D1CD  85 F6                     TEST ESI,ESI
0053D1CF  75 48                     JNZ 0x0053d219
0053D1D1  8B 7D FC                  MOV EDI,dword ptr [EBP + -0x4]
0053D1D4  BB 07 00 00 00            MOV EBX,0x7
0053D1D9  89 87 B1 01 00 00         MOV dword ptr [EDI + 0x1b1],EAX
0053D1DF  8D B7 B5 01 00 00         LEA ESI,[EDI + 0x1b5]
LAB_0053d1e5:
0053D1E5  8B 06                     MOV EAX,dword ptr [ESI]
0053D1E7  85 C0                     TEST EAX,EAX
0053D1E9  74 0F                     JZ 0x0053d1fa
0053D1EB  8B 4F 0C                  MOV ECX,dword ptr [EDI + 0xc]
0053D1EE  50                        PUSH EAX
0053D1EF  E8 BC 84 1A 00            CALL 0x006e56b0
0053D1F4  C7 06 00 00 00 00         MOV dword ptr [ESI],0x0
LAB_0053d1fa:
0053D1FA  83 C6 04                  ADD ESI,0x4
0053D1FD  4B                        DEC EBX
0053D1FE  75 E5                     JNZ 0x0053d1e5
0053D200  8B 45 B8                  MOV EAX,dword ptr [EBP + -0x48]
0053D203  C7 05 EC 16 80 00 00 00 00 00  MOV dword ptr [0x008016ec],0x0
0053D20D  A3 F8 8D 85 00            MOV [0x00858df8],EAX
0053D212  5F                        POP EDI
0053D213  5E                        POP ESI
0053D214  5B                        POP EBX
0053D215  8B E5                     MOV ESP,EBP
0053D217  5D                        POP EBP
0053D218  C3                        RET
LAB_0053d219:
0053D219  8B 4D B8                  MOV ECX,dword ptr [EBP + -0x48]
0053D21C  68 FC 77 7C 00            PUSH 0x7c77fc
0053D221  68 CC 4C 7A 00            PUSH 0x7a4ccc
0053D226  56                        PUSH ESI
0053D227  6A 00                     PUSH 0x0
0053D229  6A 38                     PUSH 0x38
0053D22B  68 98 77 7C 00            PUSH 0x7c7798
0053D230  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
0053D236  E8 95 02 17 00            CALL 0x006ad4d0
0053D23B  83 C4 18                  ADD ESP,0x18
0053D23E  85 C0                     TEST EAX,EAX
0053D240  74 01                     JZ 0x0053d243
0053D242  CC                        INT3
LAB_0053d243:
0053D243  6A 38                     PUSH 0x38
0053D245  68 98 77 7C 00            PUSH 0x7c7798
0053D24A  6A 00                     PUSH 0x0
0053D24C  56                        PUSH ESI
0053D24D  E8 EE 8B 16 00            CALL 0x006a5e40
0053D252  5F                        POP EDI
0053D253  5E                        POP ESI
0053D254  5B                        POP EBX
0053D255  8B E5                     MOV ESP,EBP
0053D257  5D                        POP EBP
0053D258  C3                        RET
