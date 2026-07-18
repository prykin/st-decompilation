FUN_006a4160:
006A4160  55                        PUSH EBP
006A4161  8B EC                     MOV EBP,ESP
006A4163  8B 45 18                  MOV EAX,dword ptr [EBP + 0x18]
006A4166  8B 4D 14                  MOV ECX,dword ptr [EBP + 0x14]
006A4169  8B 55 10                  MOV EDX,dword ptr [EBP + 0x10]
006A416C  56                        PUSH ESI
006A416D  6A 01                     PUSH 0x1
006A416F  50                        PUSH EAX
006A4170  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
006A4173  51                        PUSH ECX
006A4174  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
006A4177  52                        PUSH EDX
006A4178  50                        PUSH EAX
006A4179  51                        PUSH ECX
006A417A  C7 05 4C 4A 85 00 00 00 00 00  MOV dword ptr [0x00854a4c],0x0
006A4184  E8 57 00 00 00            CALL 0x006a41e0
006A4189  8B F0                     MOV ESI,EAX
006A418B  A1 4C 4A 85 00            MOV EAX,[0x00854a4c]
006A4190  83 C4 18                  ADD ESP,0x18
006A4193  C7 05 4C 4A 85 00 00 00 00 00  MOV dword ptr [0x00854a4c],0x0
006A419D  85 C0                     TEST EAX,EAX
006A419F  74 18                     JZ 0x006a41b9
006A41A1  8B 15 7C D7 7E 00         MOV EDX,dword ptr [0x007ed77c]
006A41A7  68 80 03 00 00            PUSH 0x380
006A41AC  68 D0 C1 7E 00            PUSH 0x7ec1d0
006A41B1  52                        PUSH EDX
006A41B2  6A FB                     PUSH -0x5
006A41B4  E8 87 1C 00 00            CALL 0x006a5e40
LAB_006a41b9:
006A41B9  8B C6                     MOV EAX,ESI
006A41BB  5E                        POP ESI
006A41BC  5D                        POP EBP
006A41BD  C3                        RET
