FUN_0070a5a0:
0070A5A0  55                        PUSH EBP
0070A5A1  8B EC                     MOV EBP,ESP
0070A5A3  83 EC 48                  SUB ESP,0x48
0070A5A6  A1 F8 8D 85 00            MOV EAX,[0x00858df8]
0070A5AB  56                        PUSH ESI
0070A5AC  8D 55 BC                  LEA EDX,[EBP + -0x44]
0070A5AF  8D 4D B8                  LEA ECX,[EBP + -0x48]
0070A5B2  6A 00                     PUSH 0x0
0070A5B4  52                        PUSH EDX
0070A5B5  C7 45 FC 00 00 00 00      MOV dword ptr [EBP + -0x4],0x0
0070A5BC  89 45 B8                  MOV dword ptr [EBP + -0x48],EAX
0070A5BF  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
0070A5C5  E8 26 32 02 00            CALL 0x0072d7f0
0070A5CA  8B F0                     MOV ESI,EAX
0070A5CC  83 C4 08                  ADD ESP,0x8
0070A5CF  85 F6                     TEST ESI,ESI
0070A5D1  75 34                     JNZ 0x0070a607
0070A5D3  F6 45 14 02               TEST byte ptr [EBP + 0x14],0x2
0070A5D7  74 0A                     JZ 0x0070a5e3
0070A5D9  8B 45 18                  MOV EAX,dword ptr [EBP + 0x18]
0070A5DC  8D 4D FC                  LEA ECX,[EBP + -0x4]
0070A5DF  50                        PUSH EAX
0070A5E0  51                        PUSH ECX
0070A5E1  EB 06                     JMP 0x0070a5e9
LAB_0070a5e3:
0070A5E3  8B 4D 18                  MOV ECX,dword ptr [EBP + 0x18]
0070A5E6  51                        PUSH ECX
0070A5E7  6A 00                     PUSH 0x0
LAB_0070a5e9:
0070A5E9  8B 55 10                  MOV EDX,dword ptr [EBP + 0x10]
0070A5EC  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
0070A5EF  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
0070A5F2  52                        PUSH EDX
0070A5F3  50                        PUSH EAX
0070A5F4  E8 E7 76 FE FF            CALL 0x006f1ce0
0070A5F9  8B 4D B8                  MOV ECX,dword ptr [EBP + -0x48]
0070A5FC  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
0070A602  5E                        POP ESI
0070A603  8B E5                     MOV ESP,EBP
0070A605  5D                        POP EBP
0070A606  C3                        RET
LAB_0070a607:
0070A607  8B 55 B8                  MOV EDX,dword ptr [EBP + -0x48]
0070A60A  68 F4 FF 7E 00            PUSH 0x7efff4
0070A60F  68 CC 4C 7A 00            PUSH 0x7a4ccc
0070A614  56                        PUSH ESI
0070A615  6A 00                     PUSH 0x0
0070A617  6A 1F                     PUSH 0x1f
0070A619  68 E0 FF 7E 00            PUSH 0x7effe0
0070A61E  89 15 F8 8D 85 00         MOV dword ptr [0x00858df8],EDX
0070A624  E8 A7 2E FA FF            CALL 0x006ad4d0
0070A629  83 C4 18                  ADD ESP,0x18
0070A62C  85 C0                     TEST EAX,EAX
0070A62E  74 01                     JZ 0x0070a631
0070A630  CC                        INT3
LAB_0070a631:
0070A631  6A 21                     PUSH 0x21
0070A633  68 E0 FF 7E 00            PUSH 0x7effe0
0070A638  6A 00                     PUSH 0x0
0070A63A  56                        PUSH ESI
0070A63B  E8 00 B8 F9 FF            CALL 0x006a5e40
0070A640  33 C0                     XOR EAX,EAX
0070A642  5E                        POP ESI
0070A643  8B E5                     MOV ESP,EBP
0070A645  5D                        POP EBP
0070A646  C3                        RET
