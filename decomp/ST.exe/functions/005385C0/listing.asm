UPanelTy::OutProc:
005385C0  55                        PUSH EBP
005385C1  8B EC                     MOV EBP,ESP
005385C3  83 EC 44                  SUB ESP,0x44
005385C6  A1 F8 8D 85 00            MOV EAX,[0x00858df8]
005385CB  56                        PUSH ESI
005385CC  8D 55 C0                  LEA EDX,[EBP + -0x40]
005385CF  8D 4D BC                  LEA ECX,[EBP + -0x44]
005385D2  6A 00                     PUSH 0x0
005385D4  52                        PUSH EDX
005385D5  89 45 BC                  MOV dword ptr [EBP + -0x44],EAX
005385D8  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
005385DE  E8 0D 52 1F 00            CALL 0x0072d7f0
005385E3  8B F0                     MOV ESI,EAX
005385E5  83 C4 08                  ADD ESP,0x8
005385E8  85 F6                     TEST ESI,ESI
005385EA  75 2B                     JNZ 0x00538617
005385EC  8B 4D 18                  MOV ECX,dword ptr [EBP + 0x18]
005385EF  8B 55 14                  MOV EDX,dword ptr [EBP + 0x14]
005385F2  68 FF 00 00 00            PUSH 0xff
005385F7  50                        PUSH EAX
005385F8  8B 45 24                  MOV EAX,dword ptr [EBP + 0x24]
005385FB  50                        PUSH EAX
005385FC  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
005385FF  51                        PUSH ECX
00538600  52                        PUSH EDX
00538601  50                        PUSH EAX
00538602  E8 99 C2 17 00            CALL 0x006b48a0
00538607  8B 4D BC                  MOV ECX,dword ptr [EBP + -0x44]
0053860A  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
00538610  5E                        POP ESI
00538611  8B E5                     MOV ESP,EBP
00538613  5D                        POP EBP
00538614  C2 20 00                  RET 0x20
LAB_00538617:
00538617  8B 55 BC                  MOV EDX,dword ptr [EBP + -0x44]
0053861A  68 FC 73 7C 00            PUSH 0x7c73fc
0053861F  68 CC 4C 7A 00            PUSH 0x7a4ccc
00538624  56                        PUSH ESI
00538625  6A 00                     PUSH 0x0
00538627  6A 5C                     PUSH 0x5c
00538629  68 90 73 7C 00            PUSH 0x7c7390
0053862E  89 15 F8 8D 85 00         MOV dword ptr [0x00858df8],EDX
00538634  E8 97 4E 17 00            CALL 0x006ad4d0
00538639  83 C4 18                  ADD ESP,0x18
0053863C  85 C0                     TEST EAX,EAX
0053863E  74 01                     JZ 0x00538641
00538640  CC                        INT3
LAB_00538641:
00538641  6A 5C                     PUSH 0x5c
00538643  68 90 73 7C 00            PUSH 0x7c7390
00538648  6A 00                     PUSH 0x0
0053864A  56                        PUSH ESI
0053864B  E8 F0 D7 16 00            CALL 0x006a5e40
00538650  5E                        POP ESI
00538651  8B E5                     MOV ESP,EBP
00538653  5D                        POP EBP
00538654  C2 20 00                  RET 0x20
