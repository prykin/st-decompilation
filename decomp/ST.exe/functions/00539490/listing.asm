PausePanelTy::DonePausePanel:
00539490  55                        PUSH EBP
00539491  8B EC                     MOV EBP,ESP
00539493  83 EC 48                  SUB ESP,0x48
00539496  A1 F8 8D 85 00            MOV EAX,[0x00858df8]
0053949B  89 4D FC                  MOV dword ptr [EBP + -0x4],ECX
0053949E  56                        PUSH ESI
0053949F  8D 55 BC                  LEA EDX,[EBP + -0x44]
005394A2  8D 4D B8                  LEA ECX,[EBP + -0x48]
005394A5  6A 00                     PUSH 0x0
005394A7  52                        PUSH EDX
005394A8  89 45 B8                  MOV dword ptr [EBP + -0x48],EAX
005394AB  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
005394B1  E8 3A 43 1F 00            CALL 0x0072d7f0
005394B6  8B F0                     MOV ESI,EAX
005394B8  83 C4 08                  ADD ESP,0x8
005394BB  85 F6                     TEST ESI,ESI
005394BD  75 70                     JNZ 0x0053952f
005394BF  8B 75 FC                  MOV ESI,dword ptr [EBP + -0x4]
005394C2  8B 86 84 01 00 00         MOV EAX,dword ptr [ESI + 0x184]
005394C8  85 C0                     TEST EAX,EAX
005394CA  74 09                     JZ 0x005394d5
005394CC  8B 4E 0C                  MOV ECX,dword ptr [ESI + 0xc]
005394CF  50                        PUSH EAX
005394D0  E8 DB C1 1A 00            CALL 0x006e56b0
LAB_005394d5:
005394D5  C7 86 84 01 00 00 00 00 00 00  MOV dword ptr [ESI + 0x184],0x0
005394DF  C7 05 E0 16 80 00 00 00 00 00  MOV dword ptr [0x008016e0],0x0
005394E9  8B 86 7C 01 00 00         MOV EAX,dword ptr [ESI + 0x17c]
005394EF  85 C0                     TEST EAX,EAX
005394F1  74 13                     JZ 0x00539506
005394F3  50                        PUSH EAX
005394F4  E8 67 70 1D 00            CALL 0x00710560
005394F9  83 C4 04                  ADD ESP,0x4
005394FC  C7 86 7C 01 00 00 00 00 00 00  MOV dword ptr [ESI + 0x17c],0x0
LAB_00539506:
00539506  8B 8E 80 01 00 00         MOV ECX,dword ptr [ESI + 0x180]
0053950C  8D 86 80 01 00 00         LEA EAX,[ESI + 0x180]
00539512  85 C9                     TEST ECX,ECX
00539514  74 0C                     JZ 0x00539522
00539516  8B 0D 90 67 80 00         MOV ECX,dword ptr [0x00806790]
0053951C  50                        PUSH EAX
0053951D  E8 BE 8B 1B 00            CALL 0x006f20e0
LAB_00539522:
00539522  8B 45 B8                  MOV EAX,dword ptr [EBP + -0x48]
00539525  A3 F8 8D 85 00            MOV [0x00858df8],EAX
0053952A  5E                        POP ESI
0053952B  8B E5                     MOV ESP,EBP
0053952D  5D                        POP EBP
0053952E  C3                        RET
LAB_0053952f:
0053952F  8B 4D B8                  MOV ECX,dword ptr [EBP + -0x48]
00539532  68 E4 74 7C 00            PUSH 0x7c74e4
00539537  68 CC 4C 7A 00            PUSH 0x7a4ccc
0053953C  56                        PUSH ESI
0053953D  6A 00                     PUSH 0x0
0053953F  6A 3B                     PUSH 0x3b
00539541  68 90 74 7C 00            PUSH 0x7c7490
00539546  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
0053954C  E8 7F 3F 17 00            CALL 0x006ad4d0
00539551  83 C4 18                  ADD ESP,0x18
00539554  85 C0                     TEST EAX,EAX
00539556  74 01                     JZ 0x00539559
00539558  CC                        INT3
LAB_00539559:
00539559  6A 3B                     PUSH 0x3b
0053955B  68 90 74 7C 00            PUSH 0x7c7490
00539560  6A 00                     PUSH 0x0
00539562  56                        PUSH ESI
00539563  E8 D8 C8 16 00            CALL 0x006a5e40
00539568  5E                        POP ESI
00539569  8B E5                     MOV ESP,EBP
0053956B  5D                        POP EBP
0053956C  C3                        RET
