FUN_006f2a10:
006F2A10  55                        PUSH EBP
006F2A11  8B EC                     MOV EBP,ESP
006F2A13  83 EC 48                  SUB ESP,0x48
006F2A16  A1 F8 8D 85 00            MOV EAX,[0x00858df8]
006F2A1B  56                        PUSH ESI
006F2A1C  89 4D FC                  MOV dword ptr [EBP + -0x4],ECX
006F2A1F  57                        PUSH EDI
006F2A20  8D 55 BC                  LEA EDX,[EBP + -0x44]
006F2A23  8D 4D B8                  LEA ECX,[EBP + -0x48]
006F2A26  6A 00                     PUSH 0x0
006F2A28  52                        PUSH EDX
006F2A29  89 45 B8                  MOV dword ptr [EBP + -0x48],EAX
006F2A2C  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
006F2A32  E8 B9 AD 03 00            CALL 0x0072d7f0
006F2A37  8B F0                     MOV ESI,EAX
006F2A39  83 C4 08                  ADD ESP,0x8
006F2A3C  85 F6                     TEST ESI,ESI
006F2A3E  75 5E                     JNZ 0x006f2a9e
006F2A40  8B 75 08                  MOV ESI,dword ptr [EBP + 0x8]
006F2A43  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
006F2A46  85 F6                     TEST ESI,ESI
006F2A48  75 03                     JNZ 0x006f2a4d
006F2A4A  8D 72 18                  LEA ESI,[EDX + 0x18]
LAB_006f2a4d:
006F2A4D  B9 86 00 00 00            MOV ECX,0x86
006F2A52  33 C0                     XOR EAX,EAX
006F2A54  8B FE                     MOV EDI,ESI
006F2A56  6A 00                     PUSH 0x0
006F2A58  F3 AB                     STOSD.REP ES:EDI
006F2A5A  AA                        STOSB ES:EDI
006F2A5B  8B 02                     MOV EAX,dword ptr [EDX]
006F2A5D  6A 00                     PUSH 0x0
006F2A5F  56                        PUSH ESI
006F2A60  50                        PUSH EAX
006F2A61  E8 8A F1 05 00            CALL 0x00751bf0
006F2A66  83 F8 FC                  CMP EAX,-0x4
006F2A69  75 13                     JNZ 0x006f2a7e
006F2A6B  8B 4D B8                  MOV ECX,dword ptr [EBP + -0x48]
006F2A6E  33 C0                     XOR EAX,EAX
006F2A70  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
006F2A76  5F                        POP EDI
006F2A77  5E                        POP ESI
006F2A78  8B E5                     MOV ESP,EBP
006F2A7A  5D                        POP EBP
006F2A7B  C2 04 00                  RET 0x4
LAB_006f2a7e:
006F2A7E  8B 55 B8                  MOV EDX,dword ptr [EBP + -0x48]
006F2A81  89 15 F8 8D 85 00         MOV dword ptr [0x00858df8],EDX
006F2A87  0F BF 46 16               MOVSX EAX,word ptr [ESI + 0x16]
006F2A8B  C6 44 30 18 00            MOV byte ptr [EAX + ESI*0x1 + 0x18],0x0
006F2A90  8D 4C 30 18               LEA ECX,[EAX + ESI*0x1 + 0x18]
006F2A94  8B C6                     MOV EAX,ESI
006F2A96  5F                        POP EDI
006F2A97  5E                        POP ESI
006F2A98  8B E5                     MOV ESP,EBP
006F2A9A  5D                        POP EBP
006F2A9B  C2 04 00                  RET 0x4
LAB_006f2a9e:
006F2A9E  8B 55 B8                  MOV EDX,dword ptr [EBP + -0x48]
006F2AA1  68 10 FD 7E 00            PUSH 0x7efd10
006F2AA6  68 CC 4C 7A 00            PUSH 0x7a4ccc
006F2AAB  56                        PUSH ESI
006F2AAC  6A 00                     PUSH 0x0
006F2AAE  68 5A 03 00 00            PUSH 0x35a
006F2AB3  68 A4 FA 7E 00            PUSH 0x7efaa4
006F2AB8  89 15 F8 8D 85 00         MOV dword ptr [0x00858df8],EDX
006F2ABE  E8 0D AA FB FF            CALL 0x006ad4d0
006F2AC3  83 C4 18                  ADD ESP,0x18
006F2AC6  85 C0                     TEST EAX,EAX
006F2AC8  74 01                     JZ 0x006f2acb
006F2ACA  CC                        INT3
LAB_006f2acb:
006F2ACB  68 5C 03 00 00            PUSH 0x35c
006F2AD0  68 A4 FA 7E 00            PUSH 0x7efaa4
006F2AD5  6A 00                     PUSH 0x0
006F2AD7  56                        PUSH ESI
006F2AD8  E8 63 33 FB FF            CALL 0x006a5e40
006F2ADD  5F                        POP EDI
006F2ADE  33 C0                     XOR EAX,EAX
006F2AE0  5E                        POP ESI
006F2AE1  8B E5                     MOV ESP,EBP
006F2AE3  5D                        POP EBP
006F2AE4  C2 04 00                  RET 0x4
