FUN_0068e690:
0068E690  55                        PUSH EBP
0068E691  8B EC                     MOV EBP,ESP
0068E693  83 EC 08                  SUB ESP,0x8
0068E696  56                        PUSH ESI
0068E697  8B 75 08                  MOV ESI,dword ptr [EBP + 0x8]
0068E69A  33 C0                     XOR EAX,EAX
0068E69C  57                        PUSH EDI
0068E69D  89 45 F8                  MOV dword ptr [EBP + -0x8],EAX
0068E6A0  8B F9                     MOV EDI,ECX
0068E6A2  85 F6                     TEST ESI,ESI
0068E6A4  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
0068E6A7  75 25                     JNZ 0x0068e6ce
0068E6A9  8B 0D 7C D7 7E 00         MOV ECX,dword ptr [0x007ed77c]
0068E6AF  68 07 01 00 00            PUSH 0x107
0068E6B4  68 E0 56 7D 00            PUSH 0x7d56e0
0068E6B9  51                        PUSH ECX
0068E6BA  6A FA                     PUSH -0x6
0068E6BC  E8 7F 77 01 00            CALL 0x006a5e40
0068E6C1  5F                        POP EDI
0068E6C2  B8 FA FF FF FF            MOV EAX,0xfffffffa
0068E6C7  5E                        POP ESI
0068E6C8  8B E5                     MOV ESP,EBP
0068E6CA  5D                        POP EBP
0068E6CB  C2 04 00                  RET 0x4
LAB_0068e6ce:
0068E6CE  8B 8F A5 00 00 00         MOV ECX,dword ptr [EDI + 0xa5]
0068E6D4  8B 56 18                  MOV EDX,dword ptr [ESI + 0x18]
0068E6D7  8D 45 F8                  LEA EAX,[EBP + -0x8]
0068E6DA  89 75 FC                  MOV dword ptr [EBP + -0x4],ESI
0068E6DD  50                        PUSH EAX
0068E6DE  51                        PUSH ECX
0068E6DF  89 55 F8                  MOV dword ptr [EBP + -0x8],EDX
0068E6E2  E8 D9 FA 01 00            CALL 0x006ae1c0
0068E6E7  89 BE 84 02 00 00         MOV dword ptr [ESI + 0x284],EDI
0068E6ED  8B 97 9D 00 00 00         MOV EDX,dword ptr [EDI + 0x9d]
0068E6F3  89 96 97 00 00 00         MOV dword ptr [ESI + 0x97],EDX
0068E6F9  5F                        POP EDI
0068E6FA  33 C0                     XOR EAX,EAX
0068E6FC  5E                        POP ESI
0068E6FD  8B E5                     MOV ESP,EBP
0068E6FF  5D                        POP EBP
0068E700  C2 04 00                  RET 0x4
