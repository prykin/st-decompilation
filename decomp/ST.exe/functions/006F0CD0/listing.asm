FUN_006f0cd0:
006F0CD0  55                        PUSH EBP
006F0CD1  8B EC                     MOV EBP,ESP
006F0CD3  83 EC 44                  SUB ESP,0x44
006F0CD6  A1 F8 8D 85 00            MOV EAX,[0x00858df8]
006F0CDB  56                        PUSH ESI
006F0CDC  8D 55 C0                  LEA EDX,[EBP + -0x40]
006F0CDF  8D 4D BC                  LEA ECX,[EBP + -0x44]
006F0CE2  6A 00                     PUSH 0x0
006F0CE4  52                        PUSH EDX
006F0CE5  89 45 BC                  MOV dword ptr [EBP + -0x44],EAX
006F0CE8  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
006F0CEE  E8 FD CA 03 00            CALL 0x0072d7f0
006F0CF3  8B F0                     MOV ESI,EAX
006F0CF5  83 C4 08                  ADD ESP,0x8
006F0CF8  85 F6                     TEST ESI,ESI
006F0CFA  75 21                     JNZ 0x006f0d1d
006F0CFC  8B 45 10                  MOV EAX,dword ptr [EBP + 0x10]
006F0CFF  8B 4D 0C                  MOV ECX,dword ptr [EBP + 0xc]
006F0D02  50                        PUSH EAX
006F0D03  56                        PUSH ESI
006F0D04  51                        PUSH ECX
006F0D05  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
006F0D08  6A 1B                     PUSH 0x1b
006F0D0A  E8 D1 0F 00 00            CALL 0x006f1ce0
006F0D0F  8B 55 BC                  MOV EDX,dword ptr [EBP + -0x44]
006F0D12  89 15 F8 8D 85 00         MOV dword ptr [0x00858df8],EDX
006F0D18  5E                        POP ESI
006F0D19  8B E5                     MOV ESP,EBP
006F0D1B  5D                        POP EBP
006F0D1C  C3                        RET
LAB_006f0d1d:
006F0D1D  8B 45 BC                  MOV EAX,dword ptr [EBP + -0x44]
006F0D20  68 88 F0 7E 00            PUSH 0x7ef088
006F0D25  68 CC 4C 7A 00            PUSH 0x7a4ccc
006F0D2A  56                        PUSH ESI
006F0D2B  6A 00                     PUSH 0x0
006F0D2D  68 BC 02 00 00            PUSH 0x2bc
006F0D32  68 88 EF 7E 00            PUSH 0x7eef88
006F0D37  A3 F8 8D 85 00            MOV [0x00858df8],EAX
006F0D3C  E8 8F C7 FB FF            CALL 0x006ad4d0
006F0D41  83 C4 18                  ADD ESP,0x18
006F0D44  85 C0                     TEST EAX,EAX
006F0D46  74 01                     JZ 0x006f0d49
006F0D48  CC                        INT3
LAB_006f0d49:
006F0D49  68 BE 02 00 00            PUSH 0x2be
006F0D4E  68 88 EF 7E 00            PUSH 0x7eef88
006F0D53  6A 00                     PUSH 0x0
006F0D55  56                        PUSH ESI
006F0D56  E8 E5 50 FB FF            CALL 0x006a5e40
006F0D5B  33 C0                     XOR EAX,EAX
006F0D5D  5E                        POP ESI
006F0D5E  8B E5                     MOV ESP,EBP
006F0D60  5D                        POP EBP
006F0D61  C3                        RET
