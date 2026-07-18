STAllPlayersC::RegisterContainer:
0044A5B0  55                        PUSH EBP
0044A5B1  8B EC                     MOV EBP,ESP
0044A5B3  83 EC 48                  SUB ESP,0x48
0044A5B6  A1 F8 8D 85 00            MOV EAX,[0x00858df8]
0044A5BB  56                        PUSH ESI
0044A5BC  8D 55 BC                  LEA EDX,[EBP + -0x44]
0044A5BF  8D 4D B8                  LEA ECX,[EBP + -0x48]
0044A5C2  6A 00                     PUSH 0x0
0044A5C4  52                        PUSH EDX
0044A5C5  89 45 B8                  MOV dword ptr [EBP + -0x48],EAX
0044A5C8  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
0044A5CE  E8 1D 32 2E 00            CALL 0x0072d7f0
0044A5D3  8B F0                     MOV ESI,EAX
0044A5D5  83 C4 08                  ADD ESP,0x8
0044A5D8  85 F6                     TEST ESI,ESI
0044A5DA  0F 85 AA 00 00 00         JNZ 0x0044a68a
0044A5E0  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
0044A5E3  85 C0                     TEST EAX,EAX
0044A5E5  75 1A                     JNZ 0x0044a601
0044A5E7  A1 7C D7 7E 00            MOV EAX,[0x007ed77c]
0044A5EC  68 67 2F 00 00            PUSH 0x2f67
0044A5F1  68 04 60 7A 00            PUSH 0x7a6004
0044A5F6  50                        PUSH EAX
0044A5F7  68 04 00 FE AF            PUSH 0xaffe0004
0044A5FC  E8 3F B8 25 00            CALL 0x006a5e40
LAB_0044a601:
0044A601  8B 75 08                  MOV ESI,dword ptr [EBP + 0x8]
0044A604  66 81 FE FF FF            CMP SI,0xffff
0044A609  74 40                     JZ 0x0044a64b
0044A60B  8D 4D FC                  LEA ECX,[EBP + -0x4]
0044A60E  8B D6                     MOV EDX,ESI
0044A610  51                        PUSH ECX
0044A611  8B 0D 60 A1 7F 00         MOV ECX,dword ptr [0x007fa160]
0044A617  81 E2 FF FF 00 00         AND EDX,0xffff
0044A61D  E8 4E 26 26 00            CALL 0x006acc70
0044A622  83 F8 FC                  CMP EAX,-0x4
0044A625  74 30                     JZ 0x0044a657
0044A627  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
0044A62A  85 C0                     TEST EAX,EAX
0044A62C  74 29                     JZ 0x0044a657
0044A62E  8B 15 7C D7 7E 00         MOV EDX,dword ptr [0x007ed77c]
0044A634  68 69 2F 00 00            PUSH 0x2f69
0044A639  68 04 60 7A 00            PUSH 0x7a6004
0044A63E  52                        PUSH EDX
0044A63F  68 06 00 FE AF            PUSH 0xaffe0006
0044A644  E8 F7 B7 25 00            CALL 0x006a5e40
0044A649  EB 0C                     JMP 0x0044a657
LAB_0044a64b:
0044A64B  A1 60 A1 7F 00            MOV EAX,[0x007fa160]
0044A650  66 8B 70 0C               MOV SI,word ptr [EAX + 0xc]
0044A654  89 75 08                  MOV dword ptr [EBP + 0x8],ESI
LAB_0044a657:
0044A657  A1 60 A1 7F 00            MOV EAX,[0x007fa160]
0044A65C  8B D6                     MOV EDX,ESI
0044A65E  8D 4D 0C                  LEA ECX,[EBP + 0xc]
0044A661  81 E2 FF FF 00 00         AND EDX,0xffff
0044A667  51                        PUSH ECX
0044A668  52                        PUSH EDX
0044A669  50                        PUSH EAX
0044A66A  E8 D1 3A 26 00            CALL 0x006ae140
0044A66F  8B 4D 0C                  MOV ECX,dword ptr [EBP + 0xc]
0044A672  56                        PUSH ESI
0044A673  E8 70 6D FB FF            CALL 0x004013e8
0044A678  8B 4D B8                  MOV ECX,dword ptr [EBP + -0x48]
0044A67B  33 C0                     XOR EAX,EAX
0044A67D  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
0044A683  5E                        POP ESI
0044A684  8B E5                     MOV ESP,EBP
0044A686  5D                        POP EBP
0044A687  C2 08 00                  RET 0x8
LAB_0044a68a:
0044A68A  8B 55 B8                  MOV EDX,dword ptr [EBP + -0x48]
0044A68D  68 F0 87 7A 00            PUSH 0x7a87f0
0044A692  68 CC 4C 7A 00            PUSH 0x7a4ccc
0044A697  56                        PUSH ESI
0044A698  6A 00                     PUSH 0x0
0044A69A  68 6F 2F 00 00            PUSH 0x2f6f
0044A69F  68 04 60 7A 00            PUSH 0x7a6004
0044A6A4  89 15 F8 8D 85 00         MOV dword ptr [0x00858df8],EDX
0044A6AA  E8 21 2E 26 00            CALL 0x006ad4d0
0044A6AF  83 C4 18                  ADD ESP,0x18
0044A6B2  85 C0                     TEST EAX,EAX
0044A6B4  74 01                     JZ 0x0044a6b7
0044A6B6  CC                        INT3
LAB_0044a6b7:
0044A6B7  68 70 2F 00 00            PUSH 0x2f70
0044A6BC  68 04 60 7A 00            PUSH 0x7a6004
0044A6C1  6A 00                     PUSH 0x0
0044A6C3  56                        PUSH ESI
0044A6C4  E8 77 B7 25 00            CALL 0x006a5e40
0044A6C9  83 C8 FF                  OR EAX,0xffffffff
0044A6CC  5E                        POP ESI
0044A6CD  8B E5                     MOV ESP,EBP
0044A6CF  5D                        POP EBP
0044A6D0  C2 08 00                  RET 0x8
