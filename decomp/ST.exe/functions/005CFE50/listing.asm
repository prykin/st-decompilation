FUN_005cfe50:
005CFE50  55                        PUSH EBP
005CFE51  8B EC                     MOV EBP,ESP
005CFE53  81 EC D8 00 00 00         SUB ESP,0xd8
005CFE59  A1 F8 8D 85 00            MOV EAX,[0x00858df8]
005CFE5E  56                        PUSH ESI
005CFE5F  8D 55 C0                  LEA EDX,[EBP + -0x40]
005CFE62  8D 4D BC                  LEA ECX,[EBP + -0x44]
005CFE65  6A 00                     PUSH 0x0
005CFE67  52                        PUSH EDX
005CFE68  89 45 BC                  MOV dword ptr [EBP + -0x44],EAX
005CFE6B  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
005CFE71  E8 7A D9 15 00            CALL 0x0072d7f0
005CFE76  8B F0                     MOV ESI,EAX
005CFE78  83 C4 08                  ADD ESP,0x8
005CFE7B  85 F6                     TEST ESI,ESI
005CFE7D  75 46                     JNZ 0x005cfec5
005CFE7F  50                        PUSH EAX
005CFE80  8D 85 28 FF FF FF         LEA EAX,[EBP + 0xffffff28]
005CFE86  50                        PUSH EAX
005CFE87  68 B6 87 80 00            PUSH 0x8087b6
005CFE8C  E8 32 49 E3 FF            CALL 0x004047c3
005CFE91  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
005CFE94  A1 64 17 81 00            MOV EAX,[0x00811764]
005CFE99  6A FF                     PUSH -0x1
005CFE9B  6A 01                     PUSH 0x1
005CFE9D  8D 8D 28 FF FF FF         LEA ECX,[EBP + 0xffffff28]
005CFEA3  68 94 00 00 00            PUSH 0x94
005CFEA8  51                        PUSH ECX
005CFEA9  6A 1C                     PUSH 0x1c
005CFEAB  52                        PUSH EDX
005CFEAC  50                        PUSH EAX
005CFEAD  E8 AE 54 14 00            CALL 0x00715360
005CFEB2  8B 4D BC                  MOV ECX,dword ptr [EBP + -0x44]
005CFEB5  83 C4 28                  ADD ESP,0x28
005CFEB8  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
005CFEBE  5E                        POP ESI
005CFEBF  8B E5                     MOV ESP,EBP
005CFEC1  5D                        POP EBP
005CFEC2  C2 04 00                  RET 0x4
LAB_005cfec5:
005CFEC5  8B 55 BC                  MOV EDX,dword ptr [EBP + -0x44]
005CFEC8  68 B8 D3 7C 00            PUSH 0x7cd3b8
005CFECD  68 CC 4C 7A 00            PUSH 0x7a4ccc
005CFED2  56                        PUSH ESI
005CFED3  6A 00                     PUSH 0x0
005CFED5  68 C9 04 00 00            PUSH 0x4c9
005CFEDA  68 58 D2 7C 00            PUSH 0x7cd258
005CFEDF  89 15 F8 8D 85 00         MOV dword ptr [0x00858df8],EDX
005CFEE5  E8 E6 D5 0D 00            CALL 0x006ad4d0
005CFEEA  83 C4 18                  ADD ESP,0x18
005CFEED  85 C0                     TEST EAX,EAX
005CFEEF  74 01                     JZ 0x005cfef2
005CFEF1  CC                        INT3
LAB_005cfef2:
005CFEF2  68 C9 04 00 00            PUSH 0x4c9
005CFEF7  68 58 D2 7C 00            PUSH 0x7cd258
005CFEFC  6A 00                     PUSH 0x0
005CFEFE  56                        PUSH ESI
005CFEFF  E8 3C 5F 0D 00            CALL 0x006a5e40
005CFF04  5E                        POP ESI
005CFF05  8B E5                     MOV ESP,EBP
005CFF07  5D                        POP EBP
005CFF08  C2 04 00                  RET 0x4
