imgGetSprFromFile:
0070BE80  55                        PUSH EBP
0070BE81  8B EC                     MOV EBP,ESP
0070BE83  83 EC 4C                  SUB ESP,0x4c
0070BE86  A1 F8 8D 85 00            MOV EAX,[0x00858df8]
0070BE8B  56                        PUSH ESI
0070BE8C  8D 55 B8                  LEA EDX,[EBP + -0x48]
0070BE8F  8D 4D B4                  LEA ECX,[EBP + -0x4c]
0070BE92  6A 00                     PUSH 0x0
0070BE94  52                        PUSH EDX
0070BE95  C7 45 F8 00 00 00 00      MOV dword ptr [EBP + -0x8],0x0
0070BE9C  C7 45 FC 00 00 00 00      MOV dword ptr [EBP + -0x4],0x0
0070BEA3  89 45 B4                  MOV dword ptr [EBP + -0x4c],EAX
0070BEA6  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
0070BEAC  E8 3F 19 02 00            CALL 0x0072d7f0
0070BEB1  8B F0                     MOV ESI,EAX
0070BEB3  83 C4 08                  ADD ESP,0x8
0070BEB6  85 F6                     TEST ESI,ESI
0070BEB8  75 60                     JNZ 0x0070bf1a
0070BEBA  8B 4D 18                  MOV ECX,dword ptr [EBP + 0x18]
0070BEBD  8B 55 14                  MOV EDX,dword ptr [EBP + 0x14]
0070BEC0  50                        PUSH EAX
0070BEC1  50                        PUSH EAX
0070BEC2  8B 45 20                  MOV EAX,dword ptr [EBP + 0x20]
0070BEC5  6A 08                     PUSH 0x8
0070BEC7  50                        PUSH EAX
0070BEC8  8B 45 10                  MOV EAX,dword ptr [EBP + 0x10]
0070BECB  51                        PUSH ECX
0070BECC  8B 4D 0C                  MOV ECX,dword ptr [EBP + 0xc]
0070BECF  52                        PUSH EDX
0070BED0  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
0070BED3  50                        PUSH EAX
0070BED4  51                        PUSH ECX
0070BED5  52                        PUSH EDX
0070BED6  E8 25 FA FF FF            CALL 0x0070b900
0070BEDB  8B 4D 1C                  MOV ECX,dword ptr [EBP + 0x1c]
0070BEDE  83 C4 24                  ADD ESP,0x24
0070BEE1  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
0070BEE4  51                        PUSH ECX
0070BEE5  50                        PUSH EAX
0070BEE6  E8 B5 90 FA FF            CALL 0x006b4fa0
0070BEEB  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
0070BEEE  50                        PUSH EAX
0070BEEF  8D 45 F8                  LEA EAX,[EBP + -0x8]
0070BEF2  52                        PUSH EDX
0070BEF3  50                        PUSH EAX
0070BEF4  E8 27 8C FA FF            CALL 0x006b4b20
0070BEF9  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
0070BEFC  85 C0                     TEST EAX,EAX
0070BEFE  74 09                     JZ 0x0070bf09
0070BF00  8D 4D FC                  LEA ECX,[EBP + -0x4]
0070BF03  51                        PUSH ECX
0070BF04  E8 57 F1 F9 FF            CALL 0x006ab060
LAB_0070bf09:
0070BF09  8B 55 B4                  MOV EDX,dword ptr [EBP + -0x4c]
0070BF0C  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
0070BF0F  89 15 F8 8D 85 00         MOV dword ptr [0x00858df8],EDX
0070BF15  5E                        POP ESI
0070BF16  8B E5                     MOV ESP,EBP
0070BF18  5D                        POP EBP
0070BF19  C3                        RET
LAB_0070bf1a:
0070BF1A  8B 45 B4                  MOV EAX,dword ptr [EBP + -0x4c]
0070BF1D  68 EC 00 7F 00            PUSH 0x7f00ec
0070BF22  68 CC 4C 7A 00            PUSH 0x7a4ccc
0070BF27  56                        PUSH ESI
0070BF28  6A 00                     PUSH 0x0
0070BF2A  68 CB 03 00 00            PUSH 0x3cb
0070BF2F  68 E0 FF 7E 00            PUSH 0x7effe0
0070BF34  A3 F8 8D 85 00            MOV [0x00858df8],EAX
0070BF39  E8 92 15 FA FF            CALL 0x006ad4d0
0070BF3E  83 C4 18                  ADD ESP,0x18
0070BF41  85 C0                     TEST EAX,EAX
0070BF43  74 01                     JZ 0x0070bf46
0070BF45  CC                        INT3
LAB_0070bf46:
0070BF46  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
0070BF49  85 C0                     TEST EAX,EAX
0070BF4B  74 09                     JZ 0x0070bf56
0070BF4D  8D 4D FC                  LEA ECX,[EBP + -0x4]
0070BF50  51                        PUSH ECX
0070BF51  E8 0A F1 F9 FF            CALL 0x006ab060
LAB_0070bf56:
0070BF56  68 CF 03 00 00            PUSH 0x3cf
0070BF5B  68 E0 FF 7E 00            PUSH 0x7effe0
0070BF60  6A 00                     PUSH 0x0
0070BF62  56                        PUSH ESI
0070BF63  E8 D8 9E F9 FF            CALL 0x006a5e40
0070BF68  33 C0                     XOR EAX,EAX
0070BF6A  5E                        POP ESI
0070BF6B  8B E5                     MOV ESP,EBP
0070BF6D  5D                        POP EBP
0070BF6E  C3                        RET
