FUN_005ab0a0:
005AB0A0  55                        PUSH EBP
005AB0A1  8B EC                     MOV EBP,ESP
005AB0A3  83 EC 4C                  SUB ESP,0x4c
005AB0A6  A1 F8 8D 85 00            MOV EAX,[0x00858df8]
005AB0AB  89 4D F8                  MOV dword ptr [EBP + -0x8],ECX
005AB0AE  56                        PUSH ESI
005AB0AF  8D 55 B8                  LEA EDX,[EBP + -0x48]
005AB0B2  8D 4D B4                  LEA ECX,[EBP + -0x4c]
005AB0B5  6A 00                     PUSH 0x0
005AB0B7  52                        PUSH EDX
005AB0B8  C7 45 FC 00 00 00 00      MOV dword ptr [EBP + -0x4],0x0
005AB0BF  89 45 B4                  MOV dword ptr [EBP + -0x4c],EAX
005AB0C2  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
005AB0C8  E8 23 27 18 00            CALL 0x0072d7f0
005AB0CD  8B F0                     MOV ESI,EAX
005AB0CF  83 C4 08                  ADD ESP,0x8
005AB0D2  85 F6                     TEST ESI,ESI
005AB0D4  75 73                     JNZ 0x005ab149
005AB0D6  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
005AB0D9  8B 48 03                  MOV ECX,dword ptr [EAX + 0x3]
005AB0DC  85 C9                     TEST ECX,ECX
005AB0DE  7C 58                     JL 0x005ab138
005AB0E0  8A 50 02                  MOV DL,byte ptr [EAX + 0x2]
005AB0E3  84 D2                     TEST DL,DL
005AB0E5  8B 50 17                  MOV EDX,dword ptr [EAX + 0x17]
005AB0E8  74 2C                     JZ 0x005ab116
005AB0EA  85 D2                     TEST EDX,EDX
005AB0EC  7E 4A                     JLE 0x005ab138
005AB0EE  4A                        DEC EDX
005AB0EF  51                        PUSH ECX
005AB0F0  89 50 17                  MOV dword ptr [EAX + 0x17],EDX
005AB0F3  A1 A8 75 80 00            MOV EAX,[0x008075a8]
005AB0F8  50                        PUSH EAX
005AB0F9  C7 45 FC 01 00 00 00      MOV dword ptr [EBP + -0x4],0x1
005AB100  E8 CB 84 10 00            CALL 0x006b35d0
005AB105  8B 55 B4                  MOV EDX,dword ptr [EBP + -0x4c]
005AB108  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
005AB10B  89 15 F8 8D 85 00         MOV dword ptr [0x00858df8],EDX
005AB111  5E                        POP ESI
005AB112  8B E5                     MOV ESP,EBP
005AB114  5D                        POP EBP
005AB115  C3                        RET
LAB_005ab116:
005AB116  8B 70 13                  MOV ESI,dword ptr [EAX + 0x13]
005AB119  83 EE 02                  SUB ESI,0x2
005AB11C  3B D6                     CMP EDX,ESI
005AB11E  7D 18                     JGE 0x005ab138
005AB120  42                        INC EDX
005AB121  51                        PUSH ECX
005AB122  89 50 17                  MOV dword ptr [EAX + 0x17],EDX
005AB125  8B 0D A8 75 80 00         MOV ECX,dword ptr [0x008075a8]
005AB12B  51                        PUSH ECX
005AB12C  C7 45 FC 01 00 00 00      MOV dword ptr [EBP + -0x4],0x1
005AB133  E8 98 84 10 00            CALL 0x006b35d0
LAB_005ab138:
005AB138  8B 55 B4                  MOV EDX,dword ptr [EBP + -0x4c]
005AB13B  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
005AB13E  89 15 F8 8D 85 00         MOV dword ptr [0x00858df8],EDX
005AB144  5E                        POP ESI
005AB145  8B E5                     MOV ESP,EBP
005AB147  5D                        POP EBP
005AB148  C3                        RET
LAB_005ab149:
005AB149  8B 45 B4                  MOV EAX,dword ptr [EBP + -0x4c]
005AB14C  68 F0 C6 7C 00            PUSH 0x7cc6f0
005AB151  68 CC 4C 7A 00            PUSH 0x7a4ccc
005AB156  56                        PUSH ESI
005AB157  6A 00                     PUSH 0x0
005AB159  68 C1 00 00 00            PUSH 0xc1
005AB15E  68 74 C6 7C 00            PUSH 0x7cc674
005AB163  A3 F8 8D 85 00            MOV [0x00858df8],EAX
005AB168  E8 63 23 10 00            CALL 0x006ad4d0
005AB16D  83 C4 18                  ADD ESP,0x18
005AB170  85 C0                     TEST EAX,EAX
005AB172  74 01                     JZ 0x005ab175
005AB174  CC                        INT3
LAB_005ab175:
005AB175  68 C1 00 00 00            PUSH 0xc1
005AB17A  68 74 C6 7C 00            PUSH 0x7cc674
005AB17F  6A 00                     PUSH 0x0
005AB181  56                        PUSH ESI
005AB182  E8 B9 AC 0F 00            CALL 0x006a5e40
005AB187  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
005AB18A  5E                        POP ESI
005AB18B  8B E5                     MOV ESP,EBP
005AB18D  5D                        POP EBP
005AB18E  C3                        RET
