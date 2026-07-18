FUN_0070a650:
0070A650  55                        PUSH EBP
0070A651  8B EC                     MOV EBP,ESP
0070A653  83 EC 44                  SUB ESP,0x44
0070A656  A1 F8 8D 85 00            MOV EAX,[0x00858df8]
0070A65B  56                        PUSH ESI
0070A65C  8D 55 C0                  LEA EDX,[EBP + -0x40]
0070A65F  8D 4D BC                  LEA ECX,[EBP + -0x44]
0070A662  6A 00                     PUSH 0x0
0070A664  52                        PUSH EDX
0070A665  89 45 BC                  MOV dword ptr [EBP + -0x44],EAX
0070A668  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
0070A66E  E8 7D 31 02 00            CALL 0x0072d7f0
0070A673  8B F0                     MOV ESI,EAX
0070A675  83 C4 08                  ADD ESP,0x8
0070A678  85 F6                     TEST ESI,ESI
0070A67A  75 23                     JNZ 0x0070a69f
0070A67C  8B 45 14                  MOV EAX,dword ptr [EBP + 0x14]
0070A67F  8B 4D 10                  MOV ECX,dword ptr [EBP + 0x10]
0070A682  8B 55 0C                  MOV EDX,dword ptr [EBP + 0xc]
0070A685  50                        PUSH EAX
0070A686  56                        PUSH ESI
0070A687  51                        PUSH ECX
0070A688  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
0070A68B  52                        PUSH EDX
0070A68C  E8 6F 7F FE FF            CALL 0x006f2600
0070A691  8B 4D BC                  MOV ECX,dword ptr [EBP + -0x44]
0070A694  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
0070A69A  5E                        POP ESI
0070A69B  8B E5                     MOV ESP,EBP
0070A69D  5D                        POP EBP
0070A69E  C3                        RET
LAB_0070a69f:
0070A69F  8B 55 BC                  MOV EDX,dword ptr [EBP + -0x44]
0070A6A2  68 00 00 7F 00            PUSH 0x7f0000
0070A6A7  68 CC 4C 7A 00            PUSH 0x7a4ccc
0070A6AC  56                        PUSH ESI
0070A6AD  6A 00                     PUSH 0x0
0070A6AF  6A 37                     PUSH 0x37
0070A6B1  68 E0 FF 7E 00            PUSH 0x7effe0
0070A6B6  89 15 F8 8D 85 00         MOV dword ptr [0x00858df8],EDX
0070A6BC  E8 0F 2E FA FF            CALL 0x006ad4d0
0070A6C1  83 C4 18                  ADD ESP,0x18
0070A6C4  85 C0                     TEST EAX,EAX
0070A6C6  74 01                     JZ 0x0070a6c9
0070A6C8  CC                        INT3
LAB_0070a6c9:
0070A6C9  6A 39                     PUSH 0x39
0070A6CB  68 E0 FF 7E 00            PUSH 0x7effe0
0070A6D0  6A 00                     PUSH 0x0
0070A6D2  56                        PUSH ESI
0070A6D3  E8 68 B7 F9 FF            CALL 0x006a5e40
0070A6D8  85 F6                     TEST ESI,ESI
0070A6DA  7D 07                     JGE 0x0070a6e3
0070A6DC  8B C6                     MOV EAX,ESI
0070A6DE  5E                        POP ESI
0070A6DF  8B E5                     MOV ESP,EBP
0070A6E1  5D                        POP EBP
0070A6E2  C3                        RET
LAB_0070a6e3:
0070A6E3  83 C8 FF                  OR EAX,0xffffffff
0070A6E6  5E                        POP ESI
0070A6E7  8B E5                     MOV ESP,EBP
0070A6E9  5D                        POP EBP
0070A6EA  C3                        RET
