FUN_00572ba0:
00572BA0  55                        PUSH EBP
00572BA1  8B EC                     MOV EBP,ESP
00572BA3  81 EC 50 01 00 00         SUB ESP,0x150
00572BA9  A1 D0 B0 79 00            MOV EAX,[0x0079b0d0]
00572BAE  56                        PUSH ESI
00572BAF  57                        PUSH EDI
00572BB0  50                        PUSH EAX
00572BB1  A1 CC B0 79 00            MOV EAX,[0x0079b0cc]
00572BB6  8D 91 85 07 00 00         LEA EDX,[ECX + 0x785]
00572BBC  89 4D F8                  MOV dword ptr [EBP + -0x8],ECX
00572BBF  52                        PUSH EDX
00572BC0  83 C1 28                  ADD ECX,0x28
00572BC3  50                        PUSH EAX
00572BC4  51                        PUSH ECX
00572BC5  8D 8D B0 FE FF FF         LEA ECX,[EBP + 0xfffffeb0]
00572BCB  68 EC A1 7C 00            PUSH 0x7ca1ec
00572BD0  51                        PUSH ECX
00572BD1  C7 45 FC 01 00 00 00      MOV dword ptr [EBP + -0x4],0x1
00572BD8  FF 15 E8 BD 85 00         CALL dword ptr [0x0085bde8]
00572BDE  8B 15 F8 8D 85 00         MOV EDX,dword ptr [0x00858df8]
00572BE4  8D 4D B8                  LEA ECX,[EBP + -0x48]
00572BE7  8D 45 B4                  LEA EAX,[EBP + -0x4c]
00572BEA  6A 00                     PUSH 0x0
00572BEC  51                        PUSH ECX
00572BED  89 55 B4                  MOV dword ptr [EBP + -0x4c],EDX
00572BF0  A3 F8 8D 85 00            MOV [0x00858df8],EAX
00572BF5  E8 F6 AB 1B 00            CALL 0x0072d7f0
00572BFA  83 C4 20                  ADD ESP,0x20
00572BFD  85 C0                     TEST EAX,EAX
00572BFF  0F 85 C0 00 00 00         JNZ 0x00572cc5
00572C05  50                        PUSH EAX
00572C06  50                        PUSH EAX
00572C07  8D 95 B0 FE FF FF         LEA EDX,[EBP + 0xfffffeb0]
00572C0D  6A 02                     PUSH 0x2
00572C0F  52                        PUSH EDX
00572C10  68 45 03 00 00            PUSH 0x345
00572C15  E8 A6 E2 17 00            CALL 0x006f0ec0
00572C1A  8B F0                     MOV ESI,EAX
00572C1C  83 C4 14                  ADD ESP,0x14
00572C1F  85 F6                     TEST ESI,ESI
00572C21  0F 84 8C 00 00 00         JZ 0x00572cb3
00572C27  8B 7D F8                  MOV EDI,dword ptr [EBP + -0x8]
00572C2A  8B 0D DC B0 79 00         MOV ECX,dword ptr [0x0079b0dc]
00572C30  6A 00                     PUSH 0x0
00572C32  6A 00                     PUSH 0x0
00572C34  6A 00                     PUSH 0x0
00572C36  8D 87 86 0D 00 00         LEA EAX,[EDI + 0xd86]
00572C3C  6A 28                     PUSH 0x28
00572C3E  50                        PUSH EAX
00572C3F  51                        PUSH ECX
00572C40  6A 0C                     PUSH 0xc
00572C42  8B CE                     MOV ECX,ESI
00572C44  E8 A7 E7 17 00            CALL 0x006f13f0
00572C49  A1 D8 B0 79 00            MOV EAX,[0x0079b0d8]
00572C4E  6A 00                     PUSH 0x0
00572C50  6A 00                     PUSH 0x0
00572C52  6A 00                     PUSH 0x0
00572C54  8D 97 0E 08 00 00         LEA EDX,[EDI + 0x80e]
00572C5A  68 90 01 00 00            PUSH 0x190
00572C5F  52                        PUSH EDX
00572C60  50                        PUSH EAX
00572C61  6A 0C                     PUSH 0xc
00572C63  8B CE                     MOV ECX,ESI
00572C65  E8 86 E7 17 00            CALL 0x006f13f0
00572C6A  8B 15 E0 B0 79 00         MOV EDX,dword ptr [0x0079b0e0]
00572C70  6A 00                     PUSH 0x0
00572C72  6A 00                     PUSH 0x0
00572C74  6A 00                     PUSH 0x0
00572C76  8D 8F 9E 09 00 00         LEA ECX,[EDI + 0x99e]
00572C7C  68 40 01 00 00            PUSH 0x140
00572C81  51                        PUSH ECX
00572C82  52                        PUSH EDX
00572C83  6A 0C                     PUSH 0xc
00572C85  8B CE                     MOV ECX,ESI
00572C87  E8 64 E7 17 00            CALL 0x006f13f0
00572C8C  A1 E4 B0 79 00            MOV EAX,[0x0079b0e4]
00572C91  6A 00                     PUSH 0x0
00572C93  6A 00                     PUSH 0x0
00572C95  6A 00                     PUSH 0x0
00572C97  81 C7 1E 0C 00 00         ADD EDI,0xc1e
00572C9D  6A 78                     PUSH 0x78
00572C9F  57                        PUSH EDI
00572CA0  50                        PUSH EAX
00572CA1  6A 0C                     PUSH 0xc
00572CA3  8B CE                     MOV ECX,ESI
00572CA5  E8 46 E7 17 00            CALL 0x006f13f0
00572CAA  56                        PUSH ESI
00572CAB  E8 C0 E4 17 00            CALL 0x006f1170
00572CB0  83 C4 04                  ADD ESP,0x4
LAB_00572cb3:
00572CB3  8B 4D B4                  MOV ECX,dword ptr [EBP + -0x4c]
00572CB6  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
00572CB9  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
00572CBF  5F                        POP EDI
00572CC0  5E                        POP ESI
00572CC1  8B E5                     MOV ESP,EBP
00572CC3  5D                        POP EBP
00572CC4  C3                        RET
LAB_00572cc5:
00572CC5  8B 55 B4                  MOV EDX,dword ptr [EBP + -0x4c]
00572CC8  5F                        POP EDI
00572CC9  89 15 F8 8D 85 00         MOV dword ptr [0x00858df8],EDX
00572CCF  33 C0                     XOR EAX,EAX
00572CD1  5E                        POP ESI
00572CD2  8B E5                     MOV ESP,EBP
00572CD4  5D                        POP EBP
00572CD5  C3                        RET
