FUN_0067e320:
0067E320  55                        PUSH EBP
0067E321  8B EC                     MOV EBP,ESP
0067E323  81 EC 84 00 00 00         SUB ESP,0x84
0067E329  A1 F8 8D 85 00            MOV EAX,[0x00858df8]
0067E32E  53                        PUSH EBX
0067E32F  56                        PUSH ESI
0067E330  57                        PUSH EDI
0067E331  8D 55 C0                  LEA EDX,[EBP + -0x40]
0067E334  8D 4D BC                  LEA ECX,[EBP + -0x44]
0067E337  6A 00                     PUSH 0x0
0067E339  52                        PUSH EDX
0067E33A  89 45 BC                  MOV dword ptr [EBP + -0x44],EAX
0067E33D  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
0067E343  E8 A8 F4 0A 00            CALL 0x0072d7f0
0067E348  8B F0                     MOV ESI,EAX
0067E34A  83 C4 08                  ADD ESP,0x8
0067E34D  85 F6                     TEST ESI,ESI
0067E34F  0F 85 B0 00 00 00         JNZ 0x0067e405
0067E355  8B 5D 08                  MOV EBX,dword ptr [EBP + 0x8]
0067E358  8B 75 0C                  MOV ESI,dword ptr [EBP + 0xc]
0067E35B  85 DB                     TEST EBX,EBX
0067E35D  74 09                     JZ 0x0067e368
0067E35F  85 F6                     TEST ESI,ESI
0067E361  7C 05                     JL 0x0067e368
0067E363  83 FE 08                  CMP ESI,0x8
0067E366  7C 17                     JL 0x0067e37f
LAB_0067e368:
0067E368  A1 7C D7 7E 00            MOV EAX,[0x007ed77c]
0067E36D  68 C3 01 00 00            PUSH 0x1c3
0067E372  68 A4 2F 7D 00            PUSH 0x7d2fa4
0067E377  50                        PUSH EAX
0067E378  6A CC                     PUSH -0x34
0067E37A  E8 C1 7A 02 00            CALL 0x006a5e40
LAB_0067e37f:
0067E37F  8B 0D 2C D7 79 00         MOV ECX,dword ptr [0x0079d72c]
0067E385  56                        PUSH ESI
0067E386  6A 01                     PUSH 0x1
0067E388  51                        PUSH ECX
0067E389  E8 72 48 07 00            CALL 0x006f2c00
0067E38E  8B F8                     MOV EDI,EAX
0067E390  83 C9 FF                  OR ECX,0xffffffff
0067E393  33 C0                     XOR EAX,EAX
0067E395  83 C4 0C                  ADD ESP,0xc
0067E398  F2 AE                     SCASB.REPNE ES:EDI
0067E39A  F7 D1                     NOT ECX
0067E39C  2B F9                     SUB EDI,ECX
0067E39E  8D 95 7C FF FF FF         LEA EDX,[EBP + 0xffffff7c]
0067E3A4  8B C1                     MOV EAX,ECX
0067E3A6  8B F7                     MOV ESI,EDI
0067E3A8  8B FA                     MOV EDI,EDX
0067E3AA  C1 E9 02                  SHR ECX,0x2
0067E3AD  F3 A5                     MOVSD.REP ES:EDI,ESI
0067E3AF  8B C8                     MOV ECX,EAX
0067E3B1  83 E1 03                  AND ECX,0x3
0067E3B4  F3 A4                     MOVSB.REP ES:EDI,ESI
0067E3B6  33 FF                     XOR EDI,EDI
LAB_0067e3b8:
0067E3B8  57                        PUSH EDI
0067E3B9  8D 8D 7C FF FF FF         LEA ECX,[EBP + 0xffffff7c]
0067E3BF  6A 03                     PUSH 0x3
0067E3C1  51                        PUSH ECX
0067E3C2  E8 39 48 07 00            CALL 0x006f2c00
0067E3C7  83 C4 0C                  ADD ESP,0xc
0067E3CA  8B F0                     MOV ESI,EAX
0067E3CC  8B CB                     MOV ECX,EBX
0067E3CE  56                        PUSH ESI
0067E3CF  6A 0C                     PUSH 0xc
0067E3D1  E8 EA 3D 07 00            CALL 0x006f21c0
0067E3D6  85 C0                     TEST EAX,EAX
0067E3D8  75 19                     JNZ 0x0067e3f3
0067E3DA  47                        INC EDI
0067E3DB  81 FF F0 FF FF 7F         CMP EDI,0x7ffffff0
0067E3E1  7C D5                     JL 0x0067e3b8
0067E3E3  8B 55 BC                  MOV EDX,dword ptr [EBP + -0x44]
0067E3E6  89 15 F8 8D 85 00         MOV dword ptr [0x00858df8],EDX
0067E3EC  5F                        POP EDI
0067E3ED  5E                        POP ESI
0067E3EE  5B                        POP EBX
0067E3EF  8B E5                     MOV ESP,EBP
0067E3F1  5D                        POP EBP
0067E3F2  C3                        RET
LAB_0067e3f3:
0067E3F3  8B 55 BC                  MOV EDX,dword ptr [EBP + -0x44]
0067E3F6  8B C6                     MOV EAX,ESI
0067E3F8  89 15 F8 8D 85 00         MOV dword ptr [0x00858df8],EDX
0067E3FE  5F                        POP EDI
0067E3FF  5E                        POP ESI
0067E400  5B                        POP EBX
0067E401  8B E5                     MOV ESP,EBP
0067E403  5D                        POP EBP
0067E404  C3                        RET
LAB_0067e405:
0067E405  8B 45 BC                  MOV EAX,dword ptr [EBP + -0x44]
0067E408  68 88 30 7D 00            PUSH 0x7d3088
0067E40D  68 CC 4C 7A 00            PUSH 0x7a4ccc
0067E412  56                        PUSH ESI
0067E413  6A 00                     PUSH 0x0
0067E415  68 C7 01 00 00            PUSH 0x1c7
0067E41A  68 A4 2F 7D 00            PUSH 0x7d2fa4
0067E41F  A3 F8 8D 85 00            MOV [0x00858df8],EAX
0067E424  E8 A7 F0 02 00            CALL 0x006ad4d0
0067E429  83 C4 18                  ADD ESP,0x18
0067E42C  85 C0                     TEST EAX,EAX
0067E42E  74 01                     JZ 0x0067e431
0067E430  CC                        INT3
LAB_0067e431:
0067E431  68 C8 01 00 00            PUSH 0x1c8
0067E436  68 A4 2F 7D 00            PUSH 0x7d2fa4
0067E43B  6A 00                     PUSH 0x0
0067E43D  56                        PUSH ESI
0067E43E  E8 FD 79 02 00            CALL 0x006a5e40
0067E443  5F                        POP EDI
0067E444  5E                        POP ESI
0067E445  33 C0                     XOR EAX,EAX
0067E447  5B                        POP EBX
0067E448  8B E5                     MOV ESP,EBP
0067E44A  5D                        POP EBP
0067E44B  C3                        RET
