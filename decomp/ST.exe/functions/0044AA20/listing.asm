FUN_0044aa20:
0044AA20  55                        PUSH EBP
0044AA21  8B EC                     MOV EBP,ESP
0044AA23  83 EC 4C                  SUB ESP,0x4c
0044AA26  A1 F8 8D 85 00            MOV EAX,[0x00858df8]
0044AA2B  53                        PUSH EBX
0044AA2C  56                        PUSH ESI
0044AA2D  89 4D F8                  MOV dword ptr [EBP + -0x8],ECX
0044AA30  57                        PUSH EDI
0044AA31  8D 55 B8                  LEA EDX,[EBP + -0x48]
0044AA34  8D 4D B4                  LEA ECX,[EBP + -0x4c]
0044AA37  6A 00                     PUSH 0x0
0044AA39  52                        PUSH EDX
0044AA3A  C7 45 FC 00 00 00 00      MOV dword ptr [EBP + -0x4],0x0
0044AA41  89 45 B4                  MOV dword ptr [EBP + -0x4c],EAX
0044AA44  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
0044AA4A  E8 A1 2D 2E 00            CALL 0x0072d7f0
0044AA4F  8B F0                     MOV ESI,EAX
0044AA51  83 C4 08                  ADD ESP,0x8
0044AA54  85 F6                     TEST ESI,ESI
0044AA56  0F 85 84 00 00 00         JNZ 0x0044aae0
0044AA5C  8B 75 08                  MOV ESI,dword ptr [EBP + 0x8]
0044AA5F  8B 5D F8                  MOV EBX,dword ptr [EBP + -0x8]
0044AA62  6A 06                     PUSH 0x6
0044AA64  56                        PUSH ESI
0044AA65  6A FF                     PUSH -0x1
0044AA67  8B CB                     MOV ECX,EBX
0044AA69  E8 4C 7E FB FF            CALL 0x004028ba
0044AA6E  8B 7D 0C                  MOV EDI,dword ptr [EBP + 0xc]
0044AA71  3B C7                     CMP EAX,EDI
0044AA73  74 1A                     JZ 0x0044aa8f
0044AA75  A1 7C D7 7E 00            MOV EAX,[0x007ed77c]
0044AA7A  68 B8 2F 00 00            PUSH 0x2fb8
0044AA7F  68 04 60 7A 00            PUSH 0x7a6004
0044AA84  50                        PUSH EAX
0044AA85  68 07 00 FE AF            PUSH 0xaffe0007
0044AA8A  E8 B1 B3 25 00            CALL 0x006a5e40
LAB_0044aa8f:
0044AA8F  8A 4F 24                  MOV CL,byte ptr [EDI + 0x24]
0044AA92  8B 57 20                  MOV EDX,dword ptr [EDI + 0x20]
0044AA95  A0 4D 87 80 00            MOV AL,[0x0080874d]
0044AA9A  56                        PUSH ESI
0044AA9B  51                        PUSH ECX
0044AA9C  52                        PUSH EDX
0044AA9D  50                        PUSH EAX
0044AA9E  8B CB                     MOV ECX,EBX
0044AAA0  E8 FE 76 FB FF            CALL 0x004021a3
0044AAA5  8A 4F 24                  MOV CL,byte ptr [EDI + 0x24]
0044AAA8  8B 57 20                  MOV EDX,dword ptr [EDI + 0x20]
0044AAAB  56                        PUSH ESI
0044AAAC  51                        PUSH ECX
0044AAAD  52                        PUSH EDX
0044AAAE  8B CB                     MOV ECX,EBX
0044AAB0  E8 8E 8B FB FF            CALL 0x00403643
0044AAB5  8B 0D 64 A1 7F 00         MOV ECX,dword ptr [0x007fa164]
0044AABB  8D 45 FC                  LEA EAX,[EBP + -0x4]
0044AABE  81 E6 FF FF 00 00         AND ESI,0xffff
0044AAC4  50                        PUSH EAX
0044AAC5  56                        PUSH ESI
0044AAC6  51                        PUSH ECX
0044AAC7  E8 74 36 26 00            CALL 0x006ae140
0044AACC  8B 55 B4                  MOV EDX,dword ptr [EBP + -0x4c]
0044AACF  89 15 F8 8D 85 00         MOV dword ptr [0x00858df8],EDX
LAB_0044aad5:
0044AAD5  33 C0                     XOR EAX,EAX
0044AAD7  5F                        POP EDI
0044AAD8  5E                        POP ESI
0044AAD9  5B                        POP EBX
0044AADA  8B E5                     MOV ESP,EBP
0044AADC  5D                        POP EBP
0044AADD  C2 08 00                  RET 0x8
LAB_0044aae0:
0044AAE0  8B 45 B4                  MOV EAX,dword ptr [EBP + -0x4c]
0044AAE3  81 FE 09 00 FE AF         CMP ESI,0xaffe0009
0044AAE9  A3 F8 8D 85 00            MOV [0x00858df8],EAX
0044AAEE  74 E5                     JZ 0x0044aad5
0044AAF0  68 68 88 7A 00            PUSH 0x7a8868
0044AAF5  68 CC 4C 7A 00            PUSH 0x7a4ccc
0044AAFA  56                        PUSH ESI
0044AAFB  6A 00                     PUSH 0x0
0044AAFD  68 C1 2F 00 00            PUSH 0x2fc1
0044AB02  68 04 60 7A 00            PUSH 0x7a6004
0044AB07  E8 C4 29 26 00            CALL 0x006ad4d0
0044AB0C  83 C4 18                  ADD ESP,0x18
0044AB0F  85 C0                     TEST EAX,EAX
0044AB11  74 01                     JZ 0x0044ab14
0044AB13  CC                        INT3
LAB_0044ab14:
0044AB14  68 C2 2F 00 00            PUSH 0x2fc2
0044AB19  68 04 60 7A 00            PUSH 0x7a6004
0044AB1E  6A 00                     PUSH 0x0
0044AB20  56                        PUSH ESI
0044AB21  E8 1A B3 25 00            CALL 0x006a5e40
0044AB26  5F                        POP EDI
0044AB27  5E                        POP ESI
0044AB28  83 C8 FF                  OR EAX,0xffffffff
0044AB2B  5B                        POP EBX
0044AB2C  8B E5                     MOV ESP,EBP
0044AB2E  5D                        POP EBP
0044AB2F  C2 08 00                  RET 0x8
