FUN_00430960:
00430960  55                        PUSH EBP
00430961  8B EC                     MOV EBP,ESP
00430963  83 EC 48                  SUB ESP,0x48
00430966  A1 F8 8D 85 00            MOV EAX,[0x00858df8]
0043096B  56                        PUSH ESI
0043096C  8D 55 BC                  LEA EDX,[EBP + -0x44]
0043096F  8D 4D B8                  LEA ECX,[EBP + -0x48]
00430972  6A 00                     PUSH 0x0
00430974  52                        PUSH EDX
00430975  89 45 B8                  MOV dword ptr [EBP + -0x48],EAX
00430978  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
0043097E  E8 6D CE 2F 00            CALL 0x0072d7f0
00430983  8B F0                     MOV ESI,EAX
00430985  83 C4 08                  ADD ESP,0x8
00430988  85 F6                     TEST ESI,ESI
0043098A  75 6E                     JNZ 0x004309fa
0043098C  8B 0D 30 A1 7F 00         MOV ECX,dword ptr [0x007fa130]
00430992  85 C9                     TEST ECX,ECX
00430994  74 52                     JZ 0x004309e8
00430996  0F BF 75 08               MOVSX ESI,word ptr [EBP + 0x8]
0043099A  8D 45 FC                  LEA EAX,[EBP + -0x4]
0043099D  8B D6                     MOV EDX,ESI
0043099F  50                        PUSH EAX
004309A0  E8 CB C2 27 00            CALL 0x006acc70
004309A5  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
004309A8  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
004309AB  3B C8                     CMP ECX,EAX
004309AD  74 1B                     JZ 0x004309ca
004309AF  8B 15 7C D7 7E 00         MOV EDX,dword ptr [0x007ed77c]
004309B5  68 83 08 00 00            PUSH 0x883
004309BA  68 04 60 7A 00            PUSH 0x7a6004
004309BF  52                        PUSH EDX
004309C0  68 02 00 FE AF            PUSH 0xaffe0002
004309C5  E8 76 54 27 00            CALL 0x006a5e40
LAB_004309ca:
004309CA  8B 0D 30 A1 7F 00         MOV ECX,dword ptr [0x007fa130]
004309D0  8D 45 FC                  LEA EAX,[EBP + -0x4]
004309D3  50                        PUSH EAX
004309D4  56                        PUSH ESI
004309D5  51                        PUSH ECX
004309D6  C7 45 FC 00 00 00 00      MOV dword ptr [EBP + -0x4],0x0
004309DD  E8 5E D7 27 00            CALL 0x006ae140
004309E2  FF 0D 34 A1 7F 00         DEC dword ptr [0x007fa134]
LAB_004309e8:
004309E8  8B 55 B8                  MOV EDX,dword ptr [EBP + -0x48]
004309EB  33 C0                     XOR EAX,EAX
004309ED  89 15 F8 8D 85 00         MOV dword ptr [0x00858df8],EDX
004309F3  5E                        POP ESI
004309F4  8B E5                     MOV ESP,EBP
004309F6  5D                        POP EBP
004309F7  C2 08 00                  RET 0x8
LAB_004309fa:
004309FA  8B 45 B8                  MOV EAX,dword ptr [EBP + -0x48]
004309FD  68 90 67 7A 00            PUSH 0x7a6790
00430A02  68 CC 4C 7A 00            PUSH 0x7a4ccc
00430A07  56                        PUSH ESI
00430A08  6A 00                     PUSH 0x0
00430A0A  68 88 08 00 00            PUSH 0x888
00430A0F  68 04 60 7A 00            PUSH 0x7a6004
00430A14  A3 F8 8D 85 00            MOV [0x00858df8],EAX
00430A19  E8 B2 CA 27 00            CALL 0x006ad4d0
00430A1E  83 C4 18                  ADD ESP,0x18
00430A21  85 C0                     TEST EAX,EAX
00430A23  74 01                     JZ 0x00430a26
00430A25  CC                        INT3
LAB_00430a26:
00430A26  68 89 08 00 00            PUSH 0x889
00430A2B  68 04 60 7A 00            PUSH 0x7a6004
00430A30  6A 00                     PUSH 0x0
00430A32  56                        PUSH ESI
00430A33  E8 08 54 27 00            CALL 0x006a5e40
00430A38  83 C8 FF                  OR EAX,0xffffffff
00430A3B  5E                        POP ESI
00430A3C  8B E5                     MOV ESP,EBP
00430A3E  5D                        POP EBP
00430A3F  C2 08 00                  RET 0x8
