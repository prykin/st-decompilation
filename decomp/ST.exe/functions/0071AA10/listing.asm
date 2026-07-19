mfSarLoad:
0071AA10  55                        PUSH EBP
0071AA11  8B EC                     MOV EBP,ESP
0071AA13  83 EC 4C                  SUB ESP,0x4c
0071AA16  A1 F8 8D 85 00            MOV EAX,[0x00858df8]
0071AA1B  56                        PUSH ESI
0071AA1C  57                        PUSH EDI
0071AA1D  8D 55 B8                  LEA EDX,[EBP + -0x48]
0071AA20  8D 4D B4                  LEA ECX,[EBP + -0x4c]
0071AA23  6A 00                     PUSH 0x0
0071AA25  52                        PUSH EDX
0071AA26  C7 45 FC 00 00 00 00      MOV dword ptr [EBP + -0x4],0x0
0071AA2D  C7 45 F8 00 00 00 00      MOV dword ptr [EBP + -0x8],0x0
0071AA34  89 45 B4                  MOV dword ptr [EBP + -0x4c],EAX
0071AA37  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
0071AA3D  E8 AE 2D 01 00            CALL 0x0072d7f0
0071AA42  8B F0                     MOV ESI,EAX
0071AA44  83 C4 08                  ADD ESP,0x8
0071AA47  85 F6                     TEST ESI,ESI
0071AA49  75 76                     JNZ 0x0071aac1
0071AA4B  8B 75 08                  MOV ESI,dword ptr [EBP + 0x8]
0071AA4E  85 F6                     TEST ESI,ESI
0071AA50  75 14                     JNZ 0x0071aa66
0071AA52  A1 7C D7 7E 00            MOV EAX,[0x007ed77c]
0071AA57  6A 15                     PUSH 0x15
0071AA59  68 98 08 7F 00            PUSH 0x7f0898
0071AA5E  50                        PUSH EAX
0071AA5F  6A CC                     PUSH -0x34
0071AA61  E8 DA B3 F8 FF            CALL 0x006a5e40
LAB_0071aa66:
0071AA66  8B 4D 10                  MOV ECX,dword ptr [EBP + 0x10]
0071AA69  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
0071AA6C  8D 55 FC                  LEA EDX,[EBP + -0x4]
0071AA6F  51                        PUSH ECX
0071AA70  52                        PUSH EDX
0071AA71  50                        PUSH EAX
0071AA72  6A 17                     PUSH 0x17
0071AA74  8B CE                     MOV ECX,ESI
0071AA76  E8 65 72 FD FF            CALL 0x006f1ce0
0071AA7B  85 C0                     TEST EAX,EAX
0071AA7D  75 0F                     JNZ 0x0071aa8e
0071AA7F  8B 4D B4                  MOV ECX,dword ptr [EBP + -0x4c]
0071AA82  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
0071AA88  5F                        POP EDI
0071AA89  5E                        POP ESI
0071AA8A  8B E5                     MOV ESP,EBP
0071AA8C  5D                        POP EBP
0071AA8D  C3                        RET
LAB_0071aa8e:
0071AA8E  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
0071AA91  52                        PUSH EDX
0071AA92  6A 00                     PUSH 0x0
0071AA94  E8 E7 DB FA FF            CALL 0x006c8680
0071AA99  8B F8                     MOV EDI,EAX
0071AA9B  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
0071AA9E  85 C0                     TEST EAX,EAX
0071AAA0  89 7D F8                  MOV dword ptr [EBP + -0x8],EDI
0071AAA3  74 0B                     JZ 0x0071aab0
0071AAA5  8D 45 FC                  LEA EAX,[EBP + -0x4]
0071AAA8  8B CE                     MOV ECX,ESI
0071AAAA  50                        PUSH EAX
0071AAAB  E8 30 76 FD FF            CALL 0x006f20e0
LAB_0071aab0:
0071AAB0  8B 4D B4                  MOV ECX,dword ptr [EBP + -0x4c]
0071AAB3  8B C7                     MOV EAX,EDI
0071AAB5  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
0071AABB  5F                        POP EDI
0071AABC  5E                        POP ESI
0071AABD  8B E5                     MOV ESP,EBP
0071AABF  5D                        POP EBP
0071AAC0  C3                        RET
LAB_0071aac1:
0071AAC1  8B 55 B4                  MOV EDX,dword ptr [EBP + -0x4c]
0071AAC4  68 8C 08 7F 00            PUSH 0x7f088c
0071AAC9  68 CC 4C 7A 00            PUSH 0x7a4ccc
0071AACE  56                        PUSH ESI
0071AACF  6A 00                     PUSH 0x0
0071AAD1  6A 1E                     PUSH 0x1e
0071AAD3  68 98 08 7F 00            PUSH 0x7f0898
0071AAD8  89 15 F8 8D 85 00         MOV dword ptr [0x00858df8],EDX
0071AADE  E8 ED 29 F9 FF            CALL 0x006ad4d0
0071AAE3  83 C4 18                  ADD ESP,0x18
0071AAE6  85 C0                     TEST EAX,EAX
0071AAE8  74 01                     JZ 0x0071aaeb
0071AAEA  CC                        INT3
LAB_0071aaeb:
0071AAEB  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
0071AAEE  85 C0                     TEST EAX,EAX
0071AAF0  74 0C                     JZ 0x0071aafe
0071AAF2  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
0071AAF5  8D 45 FC                  LEA EAX,[EBP + -0x4]
0071AAF8  50                        PUSH EAX
0071AAF9  E8 E2 75 FD FF            CALL 0x006f20e0
LAB_0071aafe:
0071AAFE  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
0071AB01  85 C0                     TEST EAX,EAX
0071AB03  74 06                     JZ 0x0071ab0b
0071AB05  50                        PUSH EAX
0071AB06  E8 65 AA F9 FF            CALL 0x006b5570
LAB_0071ab0b:
0071AB0B  6A 23                     PUSH 0x23
0071AB0D  68 98 08 7F 00            PUSH 0x7f0898
0071AB12  6A 00                     PUSH 0x0
0071AB14  56                        PUSH ESI
0071AB15  E8 26 B3 F8 FF            CALL 0x006a5e40
0071AB1A  5F                        POP EDI
0071AB1B  33 C0                     XOR EAX,EAX
0071AB1D  5E                        POP ESI
0071AB1E  8B E5                     MOV ESP,EBP
0071AB20  5D                        POP EBP
0071AB21  C3                        RET
