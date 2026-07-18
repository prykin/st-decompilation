FUN_0063d280:
0063D280  55                        PUSH EBP
0063D281  8B EC                     MOV EBP,ESP
0063D283  81 EC 88 00 00 00         SUB ESP,0x88
0063D289  A1 F8 8D 85 00            MOV EAX,[0x00858df8]
0063D28E  53                        PUSH EBX
0063D28F  56                        PUSH ESI
0063D290  89 4D F8                  MOV dword ptr [EBP + -0x8],ECX
0063D293  57                        PUSH EDI
0063D294  8D 55 B8                  LEA EDX,[EBP + -0x48]
0063D297  8D 4D B4                  LEA ECX,[EBP + -0x4c]
0063D29A  6A 00                     PUSH 0x0
0063D29C  52                        PUSH EDX
0063D29D  C7 45 FC FF FF FF FF      MOV dword ptr [EBP + -0x4],0xffffffff
0063D2A4  89 45 B4                  MOV dword ptr [EBP + -0x4c],EAX
0063D2A7  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
0063D2AD  E8 3E 05 0F 00            CALL 0x0072d7f0
0063D2B2  8B F0                     MOV ESI,EAX
0063D2B4  83 C4 08                  ADD ESP,0x8
0063D2B7  85 F6                     TEST ESI,ESI
0063D2B9  0F 85 B3 00 00 00         JNZ 0x0063d372
0063D2BF  8B 5D F8                  MOV EBX,dword ptr [EBP + -0x8]
0063D2C2  8B 83 36 03 00 00         MOV EAX,dword ptr [EBX + 0x336]
0063D2C8  85 C0                     TEST EAX,EAX
0063D2CA  75 18                     JNZ 0x0063d2e4
0063D2CC  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
0063D2CF  6A 0A                     PUSH 0xa
0063D2D1  6A 3C                     PUSH 0x3c
0063D2D3  50                        PUSH EAX
0063D2D4  56                        PUSH ESI
0063D2D5  E8 B6 0F 07 00            CALL 0x006ae290
0063D2DA  85 C0                     TEST EAX,EAX
0063D2DC  89 83 36 03 00 00         MOV dword ptr [EBX + 0x336],EAX
0063D2E2  74 79                     JZ 0x0063d35d
LAB_0063d2e4:
0063D2E4  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
0063D2E7  85 C0                     TEST EAX,EAX
0063D2E9  74 72                     JZ 0x0063d35d
0063D2EB  B9 0F 00 00 00            MOV ECX,0xf
0063D2F0  33 C0                     XOR EAX,EAX
0063D2F2  8D BD 78 FF FF FF         LEA EDI,[EBP + 0xffffff78]
0063D2F8  33 F6                     XOR ESI,ESI
0063D2FA  F3 AB                     STOSD.REP ES:EDI
0063D2FC  8B 7D 08                  MOV EDI,dword ptr [EBP + 0x8]
0063D2FF  85 FF                     TEST EDI,EDI
0063D301  7E 40                     JLE 0x0063d343
LAB_0063d303:
0063D303  8B 93 36 03 00 00         MOV EDX,dword ptr [EBX + 0x336]
0063D309  8D 8D 78 FF FF FF         LEA ECX,[EBP + 0xffffff78]
0063D30F  51                        PUSH ECX
0063D310  52                        PUSH EDX
0063D311  E8 AA 0E 07 00            CALL 0x006ae1c0
0063D316  8B 93 36 03 00 00         MOV EDX,dword ptr [EBX + 0x336]
0063D31C  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
0063D31F  3B 72 0C                  CMP ESI,dword ptr [EDX + 0xc]
0063D322  73 0B                     JNC 0x0063d32f
0063D324  8B 4A 08                  MOV ECX,dword ptr [EDX + 0x8]
0063D327  0F AF CE                  IMUL ECX,ESI
0063D32A  03 4A 1C                  ADD ECX,dword ptr [EDX + 0x1c]
0063D32D  EB 02                     JMP 0x0063d331
LAB_0063d32f:
0063D32F  33 C9                     XOR ECX,ECX
LAB_0063d331:
0063D331  85 C9                     TEST ECX,ECX
0063D333  74 07                     JZ 0x0063d33c
0063D335  C7 41 38 FF FF FF FF      MOV dword ptr [ECX + 0x38],0xffffffff
LAB_0063d33c:
0063D33C  46                        INC ESI
0063D33D  3B F7                     CMP ESI,EDI
0063D33F  7C C2                     JL 0x0063d303
0063D341  EB 03                     JMP 0x0063d346
LAB_0063d343:
0063D343  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
LAB_0063d346:
0063D346  85 C0                     TEST EAX,EAX
0063D348  7C 16                     JL 0x0063d360
0063D34A  8B 4D B4                  MOV ECX,dword ptr [EBP + -0x4c]
0063D34D  40                        INC EAX
0063D34E  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
0063D354  5F                        POP EDI
0063D355  5E                        POP ESI
0063D356  5B                        POP EBX
0063D357  8B E5                     MOV ESP,EBP
0063D359  5D                        POP EBP
0063D35A  C2 04 00                  RET 0x4
LAB_0063d35d:
0063D35D  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
LAB_0063d360:
0063D360  8B 4D B4                  MOV ECX,dword ptr [EBP + -0x4c]
0063D363  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
0063D369  5F                        POP EDI
0063D36A  5E                        POP ESI
0063D36B  5B                        POP EBX
0063D36C  8B E5                     MOV ESP,EBP
0063D36E  5D                        POP EBP
0063D36F  C2 04 00                  RET 0x4
LAB_0063d372:
0063D372  8B 55 B4                  MOV EDX,dword ptr [EBP + -0x4c]
0063D375  68 C0 20 7D 00            PUSH 0x7d20c0
0063D37A  68 CC 4C 7A 00            PUSH 0x7a4ccc
0063D37F  56                        PUSH ESI
0063D380  6A 00                     PUSH 0x0
0063D382  68 A6 04 00 00            PUSH 0x4a6
0063D387  68 9C 20 7D 00            PUSH 0x7d209c
0063D38C  89 15 F8 8D 85 00         MOV dword ptr [0x00858df8],EDX
0063D392  E8 39 01 07 00            CALL 0x006ad4d0
0063D397  83 C4 18                  ADD ESP,0x18
0063D39A  85 C0                     TEST EAX,EAX
0063D39C  74 01                     JZ 0x0063d39f
0063D39E  CC                        INT3
LAB_0063d39f:
0063D39F  68 A8 04 00 00            PUSH 0x4a8
0063D3A4  68 9C 20 7D 00            PUSH 0x7d209c
0063D3A9  6A 00                     PUSH 0x0
0063D3AB  56                        PUSH ESI
0063D3AC  E8 8F 8A 06 00            CALL 0x006a5e40
0063D3B1  5F                        POP EDI
0063D3B2  5E                        POP ESI
0063D3B3  B8 FF FF 00 00            MOV EAX,0xffff
0063D3B8  5B                        POP EBX
0063D3B9  8B E5                     MOV ESP,EBP
0063D3BB  5D                        POP EBP
0063D3BC  C2 04 00                  RET 0x4
