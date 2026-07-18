FUN_006c3aa0:
006C3AA0  55                        PUSH EBP
006C3AA1  8B EC                     MOV EBP,ESP
006C3AA3  56                        PUSH ESI
006C3AA4  8B 75 08                  MOV ESI,dword ptr [EBP + 0x8]
006C3AA7  56                        PUSH ESI
006C3AA8  E8 C3 FA FF FF            CALL 0x006c3570
006C3AAD  8D 86 08 05 00 00         LEA EAX,[ESI + 0x508]
006C3AB3  50                        PUSH EAX
006C3AB4  FF 15 84 BB 85 00         CALL dword ptr [0x0085bb84]
006C3ABA  56                        PUSH ESI
006C3ABB  68 D0 68 85 00            PUSH 0x8568d0
006C3AC0  E8 FB 5D FF FF            CALL 0x006b98c0
006C3AC5  8B 4E 78                  MOV ECX,dword ptr [ESI + 0x78]
006C3AC8  8B 15 D0 68 85 00         MOV EDX,dword ptr [0x008568d0]
006C3ACE  51                        PUSH ECX
006C3ACF  52                        PUSH EDX
006C3AD0  E8 FB FD FF FF            CALL 0x006c38d0
006C3AD5  85 C0                     TEST EAX,EAX
006C3AD7  75 13                     JNZ 0x006c3aec
006C3AD9  8B 86 88 00 00 00         MOV EAX,dword ptr [ESI + 0x88]
006C3ADF  8B 4E 78                  MOV ECX,dword ptr [ESI + 0x78]
006C3AE2  50                        PUSH EAX
006C3AE3  6A FC                     PUSH -0x4
006C3AE5  51                        PUSH ECX
006C3AE6  FF 15 60 BE 85 00         CALL dword ptr [0x0085be60]
LAB_006c3aec:
006C3AEC  56                        PUSH ESI
006C3AED  E8 9E 23 FE FF            CALL 0x006a5e90
006C3AF2  FF 15 E0 C0 85 00         CALL dword ptr [0x0085c0e0]
006C3AF8  5E                        POP ESI
006C3AF9  5D                        POP EBP
006C3AFA  C2 04 00                  RET 0x4
