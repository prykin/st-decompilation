STAllPlayersC::UnRegisterDeposit:
0044A440  55                        PUSH EBP
0044A441  8B EC                     MOV EBP,ESP
0044A443  83 EC 4C                  SUB ESP,0x4c
0044A446  A1 F8 8D 85 00            MOV EAX,[0x00858df8]
0044A44B  53                        PUSH EBX
0044A44C  56                        PUSH ESI
0044A44D  89 4D F8                  MOV dword ptr [EBP + -0x8],ECX
0044A450  57                        PUSH EDI
0044A451  8D 55 B8                  LEA EDX,[EBP + -0x48]
0044A454  8D 4D B4                  LEA ECX,[EBP + -0x4c]
0044A457  6A 00                     PUSH 0x0
0044A459  52                        PUSH EDX
0044A45A  C7 45 FC 00 00 00 00      MOV dword ptr [EBP + -0x4],0x0
0044A461  89 45 B4                  MOV dword ptr [EBP + -0x4c],EAX
0044A464  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
0044A46A  E8 81 33 2E 00            CALL 0x0072d7f0
0044A46F  8B F0                     MOV ESI,EAX
0044A471  83 C4 08                  ADD ESP,0x8
0044A474  85 F6                     TEST ESI,ESI
0044A476  0F 85 84 00 00 00         JNZ 0x0044a500
0044A47C  8B 75 08                  MOV ESI,dword ptr [EBP + 0x8]
0044A47F  8B 5D F8                  MOV EBX,dword ptr [EBP + -0x8]
0044A482  6A 04                     PUSH 0x4
0044A484  56                        PUSH ESI
0044A485  6A FF                     PUSH -0x1
0044A487  8B CB                     MOV ECX,EBX
0044A489  E8 2C 84 FB FF            CALL 0x004028ba
0044A48E  8B 7D 0C                  MOV EDI,dword ptr [EBP + 0xc]
0044A491  3B C7                     CMP EAX,EDI
0044A493  74 1A                     JZ 0x0044a4af
0044A495  A1 7C D7 7E 00            MOV EAX,[0x007ed77c]
0044A49A  68 4E 2F 00 00            PUSH 0x2f4e
0044A49F  68 04 60 7A 00            PUSH 0x7a6004
0044A4A4  50                        PUSH EAX
0044A4A5  68 07 00 FE AF            PUSH 0xaffe0007
0044A4AA  E8 91 B9 25 00            CALL 0x006a5e40
LAB_0044a4af:
0044A4AF  8A 4F 24                  MOV CL,byte ptr [EDI + 0x24]
0044A4B2  8B 57 20                  MOV EDX,dword ptr [EDI + 0x20]
0044A4B5  A0 4D 87 80 00            MOV AL,[0x0080874d]
0044A4BA  56                        PUSH ESI
0044A4BB  51                        PUSH ECX
0044A4BC  52                        PUSH EDX
0044A4BD  50                        PUSH EAX
0044A4BE  8B CB                     MOV ECX,EBX
0044A4C0  E8 DE 7C FB FF            CALL 0x004021a3
0044A4C5  8A 4F 24                  MOV CL,byte ptr [EDI + 0x24]
0044A4C8  8B 57 20                  MOV EDX,dword ptr [EDI + 0x20]
0044A4CB  56                        PUSH ESI
0044A4CC  51                        PUSH ECX
0044A4CD  52                        PUSH EDX
0044A4CE  8B CB                     MOV ECX,EBX
0044A4D0  E8 6E 91 FB FF            CALL 0x00403643
0044A4D5  8B 0D 5C A1 7F 00         MOV ECX,dword ptr [0x007fa15c]
0044A4DB  8D 45 FC                  LEA EAX,[EBP + -0x4]
0044A4DE  81 E6 FF FF 00 00         AND ESI,0xffff
0044A4E4  50                        PUSH EAX
0044A4E5  56                        PUSH ESI
0044A4E6  51                        PUSH ECX
0044A4E7  E8 54 3C 26 00            CALL 0x006ae140
0044A4EC  8B 55 B4                  MOV EDX,dword ptr [EBP + -0x4c]
0044A4EF  89 15 F8 8D 85 00         MOV dword ptr [0x00858df8],EDX
LAB_0044a4f5:
0044A4F5  33 C0                     XOR EAX,EAX
0044A4F7  5F                        POP EDI
0044A4F8  5E                        POP ESI
0044A4F9  5B                        POP EBX
0044A4FA  8B E5                     MOV ESP,EBP
0044A4FC  5D                        POP EBP
0044A4FD  C2 08 00                  RET 0x8
LAB_0044a500:
0044A500  8B 45 B4                  MOV EAX,dword ptr [EBP + -0x4c]
0044A503  81 FE 09 00 FE AF         CMP ESI,0xaffe0009
0044A509  A3 F8 8D 85 00            MOV [0x00858df8],EAX
0044A50E  74 E5                     JZ 0x0044a4f5
0044A510  68 C8 87 7A 00            PUSH 0x7a87c8
0044A515  68 CC 4C 7A 00            PUSH 0x7a4ccc
0044A51A  56                        PUSH ESI
0044A51B  6A 00                     PUSH 0x0
0044A51D  68 57 2F 00 00            PUSH 0x2f57
0044A522  68 04 60 7A 00            PUSH 0x7a6004
0044A527  E8 A4 2F 26 00            CALL 0x006ad4d0
0044A52C  83 C4 18                  ADD ESP,0x18
0044A52F  85 C0                     TEST EAX,EAX
0044A531  74 01                     JZ 0x0044a534
0044A533  CC                        INT3
LAB_0044a534:
0044A534  68 58 2F 00 00            PUSH 0x2f58
0044A539  68 04 60 7A 00            PUSH 0x7a6004
0044A53E  6A 00                     PUSH 0x0
0044A540  56                        PUSH ESI
0044A541  E8 FA B8 25 00            CALL 0x006a5e40
0044A546  5F                        POP EDI
0044A547  5E                        POP ESI
0044A548  83 C8 FF                  OR EAX,0xffffffff
0044A54B  5B                        POP EBX
0044A54C  8B E5                     MOV ESP,EBP
0044A54E  5D                        POP EBP
0044A54F  C2 08 00                  RET 0x8
