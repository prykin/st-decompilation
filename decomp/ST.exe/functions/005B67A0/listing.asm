FUN_005b67a0:
005B67A0  55                        PUSH EBP
005B67A1  8B EC                     MOV EBP,ESP
005B67A3  83 EC 48                  SUB ESP,0x48
005B67A6  8B 45 24                  MOV EAX,dword ptr [EBP + 0x24]
005B67A9  53                        PUSH EBX
005B67AA  56                        PUSH ESI
005B67AB  57                        PUSH EDI
005B67AC  85 C0                     TEST EAX,EAX
005B67AE  0F 84 AE 00 00 00         JZ 0x005b6862
005B67B4  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
005B67B7  A1 F8 8D 85 00            MOV EAX,[0x00858df8]
005B67BC  8D 55 BC                  LEA EDX,[EBP + -0x44]
005B67BF  8D 4D B8                  LEA ECX,[EBP + -0x48]
005B67C2  6A 00                     PUSH 0x0
005B67C4  52                        PUSH EDX
005B67C5  89 45 B8                  MOV dword ptr [EBP + -0x48],EAX
005B67C8  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
005B67CE  E8 1D 70 17 00            CALL 0x0072d7f0
005B67D3  8B F0                     MOV ESI,EAX
005B67D5  83 C4 08                  ADD ESP,0x8
005B67D8  85 F6                     TEST ESI,ESI
005B67DA  75 48                     JNZ 0x005b6824
005B67DC  8B 75 FC                  MOV ESI,dword ptr [EBP + -0x4]
005B67DF  8B 7D 20                  MOV EDI,dword ptr [EBP + 0x20]
005B67E2  8B 5D 1C                  MOV EBX,dword ptr [EBP + 0x1c]
005B67E5  8B 4D 18                  MOV ECX,dword ptr [EBP + 0x18]
005B67E8  8B 55 14                  MOV EDX,dword ptr [EBP + 0x14]
005B67EB  8D 46 04                  LEA EAX,[ESI + 0x4]
005B67EE  50                        PUSH EAX
005B67EF  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
005B67F2  57                        PUSH EDI
005B67F3  53                        PUSH EBX
005B67F4  51                        PUSH ECX
005B67F5  52                        PUSH EDX
005B67F6  50                        PUSH EAX
005B67F7  E8 F4 00 11 00            CALL 0x006c68f0
005B67FC  8B 0E                     MOV ECX,dword ptr [ESI]
005B67FE  8B 55 18                  MOV EDX,dword ptr [EBP + 0x18]
005B6801  8B 45 14                  MOV EAX,dword ptr [EBP + 0x14]
005B6804  51                        PUSH ECX
005B6805  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
005B6808  57                        PUSH EDI
005B6809  53                        PUSH EBX
005B680A  52                        PUSH EDX
005B680B  50                        PUSH EAX
005B680C  51                        PUSH ECX
005B680D  E8 3E 00 11 00            CALL 0x006c6850
005B6812  8B 55 B8                  MOV EDX,dword ptr [EBP + -0x48]
005B6815  89 15 F8 8D 85 00         MOV dword ptr [0x00858df8],EDX
005B681B  5F                        POP EDI
005B681C  5E                        POP ESI
005B681D  5B                        POP EBX
005B681E  8B E5                     MOV ESP,EBP
005B6820  5D                        POP EBP
005B6821  C2 20 00                  RET 0x20
LAB_005b6824:
005B6824  8B 45 B8                  MOV EAX,dword ptr [EBP + -0x48]
005B6827  68 1C CB 7C 00            PUSH 0x7ccb1c
005B682C  68 CC 4C 7A 00            PUSH 0x7a4ccc
005B6831  56                        PUSH ESI
005B6832  6A 00                     PUSH 0x0
005B6834  68 3B 01 00 00            PUSH 0x13b
005B6839  68 38 CA 7C 00            PUSH 0x7cca38
005B683E  A3 F8 8D 85 00            MOV [0x00858df8],EAX
005B6843  E8 88 6C 0F 00            CALL 0x006ad4d0
005B6848  83 C4 18                  ADD ESP,0x18
005B684B  85 C0                     TEST EAX,EAX
005B684D  74 01                     JZ 0x005b6850
005B684F  CC                        INT3
LAB_005b6850:
005B6850  68 3B 01 00 00            PUSH 0x13b
005B6855  68 38 CA 7C 00            PUSH 0x7cca38
005B685A  6A 00                     PUSH 0x0
005B685C  56                        PUSH ESI
005B685D  E8 DE F5 0E 00            CALL 0x006a5e40
LAB_005b6862:
005B6862  5F                        POP EDI
005B6863  5E                        POP ESI
005B6864  5B                        POP EBX
005B6865  8B E5                     MOV ESP,EBP
005B6867  5D                        POP EBP
005B6868  C2 20 00                  RET 0x20
