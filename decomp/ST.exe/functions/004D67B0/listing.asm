TLOBaseTy::SetActivity:
004D67B0  55                        PUSH EBP
004D67B1  8B EC                     MOV EBP,ESP
004D67B3  83 EC 48                  SUB ESP,0x48
004D67B6  8B 01                     MOV EAX,dword ptr [ECX]
004D67B8  56                        PUSH ESI
004D67B9  89 4D FC                  MOV dword ptr [EBP + -0x4],ECX
004D67BC  FF 90 F8 00 00 00         CALL dword ptr [EAX + 0xf8]
004D67C2  85 C0                     TEST EAX,EAX
004D67C4  0F 84 80 00 00 00         JZ 0x004d684a
004D67CA  8B 0D F8 8D 85 00         MOV ECX,dword ptr [0x00858df8]
004D67D0  8D 45 BC                  LEA EAX,[EBP + -0x44]
004D67D3  8D 55 B8                  LEA EDX,[EBP + -0x48]
004D67D6  6A 00                     PUSH 0x0
004D67D8  50                        PUSH EAX
004D67D9  89 4D B8                  MOV dword ptr [EBP + -0x48],ECX
004D67DC  89 15 F8 8D 85 00         MOV dword ptr [0x00858df8],EDX
004D67E2  E8 09 70 25 00            CALL 0x0072d7f0
004D67E7  8B F0                     MOV ESI,EAX
004D67E9  83 C4 08                  ADD ESP,0x8
004D67EC  85 F6                     TEST ESI,ESI
004D67EE  75 1C                     JNZ 0x004d680c
004D67F0  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
004D67F3  51                        PUSH ECX
004D67F4  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
004D67F7  E8 8E E6 F2 FF            CALL 0x00404e8a
004D67FC  8B 55 B8                  MOV EDX,dword ptr [EBP + -0x48]
004D67FF  89 15 F8 8D 85 00         MOV dword ptr [0x00858df8],EDX
004D6805  5E                        POP ESI
004D6806  8B E5                     MOV ESP,EBP
004D6808  5D                        POP EBP
004D6809  C2 04 00                  RET 0x4
LAB_004d680c:
004D680C  8B 45 B8                  MOV EAX,dword ptr [EBP + -0x48]
004D680F  68 D0 C8 7A 00            PUSH 0x7ac8d0
004D6814  68 CC 4C 7A 00            PUSH 0x7a4ccc
004D6819  56                        PUSH ESI
004D681A  6A 00                     PUSH 0x0
004D681C  68 2D 05 00 00            PUSH 0x52d
004D6821  68 BC F4 7B 00            PUSH 0x7bf4bc
004D6826  A3 F8 8D 85 00            MOV [0x00858df8],EAX
004D682B  E8 A0 6C 1D 00            CALL 0x006ad4d0
004D6830  83 C4 18                  ADD ESP,0x18
004D6833  85 C0                     TEST EAX,EAX
004D6835  74 01                     JZ 0x004d6838
004D6837  CC                        INT3
LAB_004d6838:
004D6838  68 2E 05 00 00            PUSH 0x52e
004D683D  68 BC F4 7B 00            PUSH 0x7bf4bc
004D6842  6A 00                     PUSH 0x0
004D6844  56                        PUSH ESI
004D6845  E8 F6 F5 1C 00            CALL 0x006a5e40
LAB_004d684a:
004D684A  5E                        POP ESI
004D684B  8B E5                     MOV ESP,EBP
004D684D  5D                        POP EBP
004D684E  C2 04 00                  RET 0x4
