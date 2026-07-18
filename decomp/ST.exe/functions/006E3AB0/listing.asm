FUN_006e3ab0:
006E3AB0  55                        PUSH EBP
006E3AB1  8B EC                     MOV EBP,ESP
006E3AB3  83 EC 48                  SUB ESP,0x48
006E3AB6  A1 F8 8D 85 00            MOV EAX,[0x00858df8]
006E3ABB  89 4D FC                  MOV dword ptr [EBP + -0x4],ECX
006E3ABE  56                        PUSH ESI
006E3ABF  8D 55 BC                  LEA EDX,[EBP + -0x44]
006E3AC2  8D 4D B8                  LEA ECX,[EBP + -0x48]
006E3AC5  6A 00                     PUSH 0x0
006E3AC7  52                        PUSH EDX
006E3AC8  89 45 B8                  MOV dword ptr [EBP + -0x48],EAX
006E3ACB  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
006E3AD1  E8 1A 9D 04 00            CALL 0x0072d7f0
006E3AD6  8B F0                     MOV ESI,EAX
006E3AD8  83 C4 08                  ADD ESP,0x8
006E3ADB  85 F6                     TEST ESI,ESI
006E3ADD  75 26                     JNZ 0x006e3b05
006E3ADF  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
006E3AE2  8B 40 28                  MOV EAX,dword ptr [EAX + 0x28]
006E3AE5  85 C0                     TEST EAX,EAX
006E3AE7  74 0A                     JZ 0x006e3af3
006E3AE9  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
006E3AEC  51                        PUSH ECX
006E3AED  50                        PUSH EAX
006E3AEE  E8 CD A6 FC FF            CALL 0x006ae1c0
LAB_006e3af3:
006E3AF3  8B 55 B8                  MOV EDX,dword ptr [EBP + -0x48]
006E3AF6  33 C0                     XOR EAX,EAX
006E3AF8  89 15 F8 8D 85 00         MOV dword ptr [0x00858df8],EDX
006E3AFE  5E                        POP ESI
006E3AFF  8B E5                     MOV ESP,EBP
006E3B01  5D                        POP EBP
006E3B02  C2 04 00                  RET 0x4
LAB_006e3b05:
006E3B05  8B 45 B8                  MOV EAX,dword ptr [EBP + -0x48]
006E3B08  68 60 E8 7E 00            PUSH 0x7ee860
006E3B0D  68 CC 4C 7A 00            PUSH 0x7a4ccc
006E3B12  56                        PUSH ESI
006E3B13  6A 00                     PUSH 0x0
006E3B15  68 AF 00 00 00            PUSH 0xaf
006E3B1A  68 8C E7 7E 00            PUSH 0x7ee78c
006E3B1F  A3 F8 8D 85 00            MOV [0x00858df8],EAX
006E3B24  E8 A7 99 FC FF            CALL 0x006ad4d0
006E3B29  83 C4 18                  ADD ESP,0x18
006E3B2C  85 C0                     TEST EAX,EAX
006E3B2E  74 01                     JZ 0x006e3b31
006E3B30  CC                        INT3
LAB_006e3b31:
006E3B31  68 B0 00 00 00            PUSH 0xb0
006E3B36  68 8C E7 7E 00            PUSH 0x7ee78c
006E3B3B  6A 00                     PUSH 0x0
006E3B3D  56                        PUSH ESI
006E3B3E  E8 FD 22 FC FF            CALL 0x006a5e40
006E3B43  8B C6                     MOV EAX,ESI
006E3B45  5E                        POP ESI
006E3B46  8B E5                     MOV ESP,EBP
006E3B48  5D                        POP EBP
006E3B49  C2 04 00                  RET 0x4
