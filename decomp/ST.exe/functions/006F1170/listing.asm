FUN_006f1170:
006F1170  55                        PUSH EBP
006F1171  8B EC                     MOV EBP,ESP
006F1173  83 EC 44                  SUB ESP,0x44
006F1176  A1 F8 8D 85 00            MOV EAX,[0x00858df8]
006F117B  56                        PUSH ESI
006F117C  8D 55 C0                  LEA EDX,[EBP + -0x40]
006F117F  8D 4D BC                  LEA ECX,[EBP + -0x44]
006F1182  6A 00                     PUSH 0x0
006F1184  52                        PUSH EDX
006F1185  89 45 BC                  MOV dword ptr [EBP + -0x44],EAX
006F1188  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
006F118E  E8 5D C6 03 00            CALL 0x0072d7f0
006F1193  8B F0                     MOV ESI,EAX
006F1195  83 C4 08                  ADD ESP,0x8
006F1198  85 F6                     TEST ESI,ESI
006F119A  75 39                     JNZ 0x006f11d5
006F119C  8B 75 08                  MOV ESI,dword ptr [EBP + 0x8]
006F119F  85 F6                     TEST ESI,ESI
006F11A1  74 25                     JZ 0x006f11c8
006F11A3  8B 06                     MOV EAX,dword ptr [ESI]
006F11A5  50                        PUSH EAX
006F11A6  E8 45 F7 05 00            CALL 0x007508f0
006F11AB  8B 46 14                  MOV EAX,dword ptr [ESI + 0x14]
006F11AE  85 C0                     TEST EAX,EAX
006F11B0  74 10                     JZ 0x006f11c2
006F11B2  8D 4E 04                  LEA ECX,[ESI + 0x4]
006F11B5  8D 96 31 02 00 00         LEA EDX,[ESI + 0x231]
006F11BB  51                        PUSH ECX
006F11BC  52                        PUSH EDX
006F11BD  E8 CE F7 05 00            CALL 0x00750990
LAB_006f11c2:
006F11C2  56                        PUSH ESI
006F11C3  E8 C8 4C FB FF            CALL 0x006a5e90
LAB_006f11c8:
006F11C8  8B 45 BC                  MOV EAX,dword ptr [EBP + -0x44]
006F11CB  A3 F8 8D 85 00            MOV [0x00858df8],EAX
006F11D0  5E                        POP ESI
006F11D1  8B E5                     MOV ESP,EBP
006F11D3  5D                        POP EBP
006F11D4  C3                        RET
LAB_006f11d5:
006F11D5  8B 4D BC                  MOV ECX,dword ptr [EBP + -0x44]
006F11D8  68 BC FA 7E 00            PUSH 0x7efabc
006F11DD  68 CC 4C 7A 00            PUSH 0x7a4ccc
006F11E2  56                        PUSH ESI
006F11E3  6A 00                     PUSH 0x0
006F11E5  68 8B 00 00 00            PUSH 0x8b
006F11EA  68 A4 FA 7E 00            PUSH 0x7efaa4
006F11EF  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
006F11F5  E8 D6 C2 FB FF            CALL 0x006ad4d0
006F11FA  83 C4 18                  ADD ESP,0x18
006F11FD  85 C0                     TEST EAX,EAX
006F11FF  74 01                     JZ 0x006f1202
006F1201  CC                        INT3
LAB_006f1202:
006F1202  68 8D 00 00 00            PUSH 0x8d
006F1207  68 A4 FA 7E 00            PUSH 0x7efaa4
006F120C  6A 00                     PUSH 0x0
006F120E  56                        PUSH ESI
006F120F  E8 2C 4C FB FF            CALL 0x006a5e40
006F1214  5E                        POP ESI
006F1215  8B E5                     MOV ESP,EBP
006F1217  5D                        POP EBP
006F1218  C3                        RET
