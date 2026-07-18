FUN_00710f00:
00710F00  55                        PUSH EBP
00710F01  8B EC                     MOV EBP,ESP
00710F03  83 EC 48                  SUB ESP,0x48
00710F06  A1 F8 8D 85 00            MOV EAX,[0x00858df8]
00710F0B  89 4D FC                  MOV dword ptr [EBP + -0x4],ECX
00710F0E  56                        PUSH ESI
00710F0F  8D 55 BC                  LEA EDX,[EBP + -0x44]
00710F12  8D 4D B8                  LEA ECX,[EBP + -0x48]
00710F15  6A 00                     PUSH 0x0
00710F17  52                        PUSH EDX
00710F18  89 45 B8                  MOV dword ptr [EBP + -0x48],EAX
00710F1B  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
00710F21  E8 CA C8 01 00            CALL 0x0072d7f0
00710F26  8B F0                     MOV ESI,EAX
00710F28  83 C4 08                  ADD ESP,0x8
00710F2B  85 F6                     TEST ESI,ESI
00710F2D  75 30                     JNZ 0x00710f5f
00710F2F  8B 75 FC                  MOV ESI,dword ptr [EBP + -0x4]
00710F32  8B 4E 72                  MOV ECX,dword ptr [ESI + 0x72]
00710F35  8D 46 72                  LEA EAX,[ESI + 0x72]
00710F38  85 C9                     TEST ECX,ECX
00710F3A  74 14                     JZ 0x00710f50
00710F3C  8B 4E 7A                  MOV ECX,dword ptr [ESI + 0x7a]
00710F3F  85 C9                     TEST ECX,ECX
00710F41  74 0D                     JZ 0x00710f50
00710F43  50                        PUSH EAX
00710F44  E8 17 A1 F9 FF            CALL 0x006ab060
00710F49  C7 46 76 00 00 00 00      MOV dword ptr [ESI + 0x76],0x0
LAB_00710f50:
00710F50  8B 45 B8                  MOV EAX,dword ptr [EBP + -0x48]
00710F53  A3 F8 8D 85 00            MOV [0x00858df8],EAX
00710F58  33 C0                     XOR EAX,EAX
00710F5A  5E                        POP ESI
00710F5B  8B E5                     MOV ESP,EBP
00710F5D  5D                        POP EBP
00710F5E  C3                        RET
LAB_00710f5f:
00710F5F  8B 4D B8                  MOV ECX,dword ptr [EBP + -0x48]
00710F62  68 64 02 7F 00            PUSH 0x7f0264
00710F67  68 CC 4C 7A 00            PUSH 0x7a4ccc
00710F6C  56                        PUSH ESI
00710F6D  6A 00                     PUSH 0x0
00710F6F  68 E3 04 00 00            PUSH 0x4e3
00710F74  68 90 01 7F 00            PUSH 0x7f0190
00710F79  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
00710F7F  E8 4C C5 F9 FF            CALL 0x006ad4d0
00710F84  83 C4 18                  ADD ESP,0x18
00710F87  85 C0                     TEST EAX,EAX
00710F89  74 01                     JZ 0x00710f8c
00710F8B  CC                        INT3
LAB_00710f8c:
00710F8C  68 E5 04 00 00            PUSH 0x4e5
00710F91  68 90 01 7F 00            PUSH 0x7f0190
00710F96  6A 00                     PUSH 0x0
00710F98  56                        PUSH ESI
00710F99  E8 A2 4E F9 FF            CALL 0x006a5e40
00710F9E  8B C6                     MOV EAX,ESI
00710FA0  5E                        POP ESI
00710FA1  8B E5                     MOV ESP,EBP
00710FA3  5D                        POP EBP
00710FA4  C3                        RET
