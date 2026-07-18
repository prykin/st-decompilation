FUN_00751e70:
00751E70  55                        PUSH EBP
00751E71  8B EC                     MOV EBP,ESP
00751E73  83 EC 50                  SUB ESP,0x50
00751E76  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
00751E79  56                        PUSH ESI
00751E7A  57                        PUSH EDI
00751E7B  6A 00                     PUSH 0x0
00751E7D  50                        PUSH EAX
00751E7E  6A 00                     PUSH 0x0
00751E80  C7 45 FC 00 00 00 00      MOV dword ptr [EBP + -0x4],0x0
00751E87  E8 F4 24 F8 FF            CALL 0x006d4380
00751E8C  85 C0                     TEST EAX,EAX
00751E8E  89 45 F8                  MOV dword ptr [EBP + -0x8],EAX
00751E91  75 08                     JNZ 0x00751e9b
00751E93  5F                        POP EDI
00751E94  5E                        POP ESI
00751E95  8B E5                     MOV ESP,EBP
00751E97  5D                        POP EBP
00751E98  C2 14 00                  RET 0x14
LAB_00751e9b:
00751E9B  8B 0D F8 8D 85 00         MOV ECX,dword ptr [0x00858df8]
00751EA1  8D 45 B4                  LEA EAX,[EBP + -0x4c]
00751EA4  8D 55 B0                  LEA EDX,[EBP + -0x50]
00751EA7  6A 00                     PUSH 0x0
00751EA9  50                        PUSH EAX
00751EAA  89 4D B0                  MOV dword ptr [EBP + -0x50],ECX
00751EAD  89 15 F8 8D 85 00         MOV dword ptr [0x00858df8],EDX
00751EB3  E8 38 B9 FD FF            CALL 0x0072d7f0
00751EB8  8B 7D F8                  MOV EDI,dword ptr [EBP + -0x8]
00751EBB  83 C4 08                  ADD ESP,0x8
00751EBE  85 C0                     TEST EAX,EAX
00751EC0  75 29                     JNZ 0x00751eeb
00751EC2  8B 4D 18                  MOV ECX,dword ptr [EBP + 0x18]
00751EC5  8B 55 14                  MOV EDX,dword ptr [EBP + 0x14]
00751EC8  8B 45 10                  MOV EAX,dword ptr [EBP + 0x10]
00751ECB  51                        PUSH ECX
00751ECC  8B 4D 0C                  MOV ECX,dword ptr [EBP + 0xc]
00751ECF  52                        PUSH EDX
00751ED0  8B 57 34                  MOV EDX,dword ptr [EDI + 0x34]
00751ED3  50                        PUSH EAX
00751ED4  51                        PUSH ECX
00751ED5  52                        PUSH EDX
00751ED6  E8 65 FD FF FF            CALL 0x00751c40
00751EDB  8B 75 FC                  MOV ESI,dword ptr [EBP + -0x4]
00751EDE  89 45 F4                  MOV dword ptr [EBP + -0xc],EAX
00751EE1  8B 45 B0                  MOV EAX,dword ptr [EBP + -0x50]
00751EE4  A3 F8 8D 85 00            MOV [0x00858df8],EAX
00751EE9  EB 0E                     JMP 0x00751ef9
LAB_00751eeb:
00751EEB  8B 4D B0                  MOV ECX,dword ptr [EBP + -0x50]
00751EEE  8B F0                     MOV ESI,EAX
00751EF0  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
00751EF6  89 75 FC                  MOV dword ptr [EBP + -0x4],ESI
LAB_00751ef9:
00751EF9  6A 00                     PUSH 0x0
00751EFB  57                        PUSH EDI
00751EFC  E8 9F 27 F8 FF            CALL 0x006d46a0
00751F01  85 F6                     TEST ESI,ESI
00751F03  74 1E                     JZ 0x00751f23
00751F05  8B 15 7C D7 7E 00         MOV EDX,dword ptr [0x007ed77c]
00751F0B  6A 16                     PUSH 0x16
00751F0D  68 48 2B 7F 00            PUSH 0x7f2b48
00751F12  52                        PUSH EDX
00751F13  56                        PUSH ESI
00751F14  E8 27 3F F5 FF            CALL 0x006a5e40
00751F19  33 C0                     XOR EAX,EAX
00751F1B  5F                        POP EDI
00751F1C  5E                        POP ESI
00751F1D  8B E5                     MOV ESP,EBP
00751F1F  5D                        POP EBP
00751F20  C2 14 00                  RET 0x14
LAB_00751f23:
00751F23  8B 45 F4                  MOV EAX,dword ptr [EBP + -0xc]
00751F26  5F                        POP EDI
00751F27  5E                        POP ESI
00751F28  8B E5                     MOV ESP,EBP
00751F2A  5D                        POP EBP
00751F2B  C2 14 00                  RET 0x14
