SystemClassTy::CreateObject:
006E5580  55                        PUSH EBP
006E5581  8B EC                     MOV EBP,ESP
006E5583  83 EC 68                  SUB ESP,0x68
006E5586  A1 F8 8D 85 00            MOV EAX,[0x00858df8]
006E558B  56                        PUSH ESI
006E558C  89 4D FC                  MOV dword ptr [EBP + -0x4],ECX
006E558F  57                        PUSH EDI
006E5590  8D 55 9C                  LEA EDX,[EBP + -0x64]
006E5593  8D 4D 98                  LEA ECX,[EBP + -0x68]
006E5596  6A 00                     PUSH 0x0
006E5598  52                        PUSH EDX
006E5599  89 45 98                  MOV dword ptr [EBP + -0x68],EAX
006E559C  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
006E55A2  E8 49 82 04 00            CALL 0x0072d7f0
006E55A7  8B F0                     MOV ESI,EAX
006E55A9  83 C4 08                  ADD ESP,0x8
006E55AC  85 F6                     TEST ESI,ESI
006E55AE  75 6D                     JNZ 0x006e561d
006E55B0  8B 45 18                  MOV EAX,dword ptr [EBP + 0x18]
006E55B3  8B 4D 10                  MOV ECX,dword ptr [EBP + 0x10]
006E55B6  8B 55 0C                  MOV EDX,dword ptr [EBP + 0xc]
006E55B9  50                        PUSH EAX
006E55BA  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
006E55BD  51                        PUSH ECX
006E55BE  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
006E55C1  52                        PUSH EDX
006E55C2  50                        PUSH EAX
006E55C3  E8 E8 FE FF FF            CALL 0x006e54b0
006E55C8  8B D0                     MOV EDX,EAX
006E55CA  B9 08 00 00 00            MOV ECX,0x8
006E55CF  33 C0                     XOR EAX,EAX
006E55D1  8D 7D DC                  LEA EDI,[EBP + -0x24]
006E55D4  F3 AB                     STOSD.REP ES:EDI
006E55D6  8B 4D 14                  MOV ECX,dword ptr [EBP + 0x14]
006E55D9  C7 45 EC 02 00 00 00      MOV dword ptr [EBP + -0x14],0x2
006E55E0  89 4D F0                  MOV dword ptr [EBP + -0x10],ECX
006E55E3  8B 02                     MOV EAX,dword ptr [EDX]
006E55E5  8D 4D DC                  LEA ECX,[EBP + -0x24]
006E55E8  51                        PUSH ECX
006E55E9  8B CA                     MOV ECX,EDX
006E55EB  FF 10                     CALL dword ptr [EAX]
006E55ED  3D FF FF 00 00            CMP EAX,0xffff
006E55F2  75 17                     JNZ 0x006e560b
006E55F4  8B 15 7C D7 7E 00         MOV EDX,dword ptr [0x007ed77c]
006E55FA  68 C1 03 00 00            PUSH 0x3c1
006E55FF  68 8C E7 7E 00            PUSH 0x7ee78c
006E5604  52                        PUSH EDX
006E5605  50                        PUSH EAX
006E5606  E8 35 08 FC FF            CALL 0x006a5e40
LAB_006e560b:
006E560B  8B 45 98                  MOV EAX,dword ptr [EBP + -0x68]
006E560E  A3 F8 8D 85 00            MOV [0x00858df8],EAX
006E5613  33 C0                     XOR EAX,EAX
006E5615  5F                        POP EDI
006E5616  5E                        POP ESI
006E5617  8B E5                     MOV ESP,EBP
006E5619  5D                        POP EBP
006E561A  C2 14 00                  RET 0x14
LAB_006e561d:
006E561D  8B 4D 98                  MOV ECX,dword ptr [EBP + -0x68]
006E5620  68 04 EB 7E 00            PUSH 0x7eeb04
006E5625  68 CC 4C 7A 00            PUSH 0x7a4ccc
006E562A  56                        PUSH ESI
006E562B  6A 00                     PUSH 0x0
006E562D  68 C3 03 00 00            PUSH 0x3c3
006E5632  68 8C E7 7E 00            PUSH 0x7ee78c
006E5637  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
006E563D  E8 8E 7E FC FF            CALL 0x006ad4d0
006E5642  83 C4 18                  ADD ESP,0x18
006E5645  85 C0                     TEST EAX,EAX
006E5647  74 01                     JZ 0x006e564a
006E5649  CC                        INT3
LAB_006e564a:
006E564A  68 C4 03 00 00            PUSH 0x3c4
006E564F  68 8C E7 7E 00            PUSH 0x7ee78c
006E5654  6A 00                     PUSH 0x0
006E5656  56                        PUSH ESI
006E5657  E8 E4 07 FC FF            CALL 0x006a5e40
006E565C  8B C6                     MOV EAX,ESI
006E565E  5F                        POP EDI
006E565F  5E                        POP ESI
006E5660  8B E5                     MOV ESP,EBP
006E5662  5D                        POP EBP
006E5663  C2 14 00                  RET 0x14
