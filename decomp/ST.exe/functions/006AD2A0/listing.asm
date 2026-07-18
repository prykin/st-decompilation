FUN_006ad2a0:
006AD2A0  55                        PUSH EBP
006AD2A1  8B EC                     MOV EBP,ESP
006AD2A3  81 EC 08 03 00 00         SUB ESP,0x308
006AD2A9  57                        PUSH EDI
006AD2AA  8D 85 F8 FE FF FF         LEA EAX,[EBP + 0xfffffef8]
006AD2B0  68 04 01 00 00            PUSH 0x104
006AD2B5  50                        PUSH EAX
006AD2B6  6A 00                     PUSH 0x0
006AD2B8  FF 15 94 BB 85 00         CALL dword ptr [0x0085bb94]
006AD2BE  85 C0                     TEST EAX,EAX
006AD2C0  74 2E                     JZ 0x006ad2f0
006AD2C2  8D BD F8 FE FF FF         LEA EDI,[EBP + 0xfffffef8]
006AD2C8  83 C9 FF                  OR ECX,0xffffffff
006AD2CB  33 C0                     XOR EAX,EAX
006AD2CD  F2 AE                     SCASB.REPNE ES:EDI
006AD2CF  F7 D1                     NOT ECX
006AD2D1  49                        DEC ECX
006AD2D2  83 F9 40                  CMP ECX,0x40
006AD2D5  7E 4A                     JLE 0x006ad321
006AD2D7  6A 03                     PUSH 0x3
006AD2D9  8D 8C 0D B8 FE FF FF      LEA ECX,[EBP + ECX*0x1 + 0xfffffeb8]
006AD2E0  68 74 72 7C 00            PUSH 0x7c7274
006AD2E5  51                        PUSH ECX
006AD2E6  E8 55 10 08 00            CALL 0x0072e340
006AD2EB  83 C4 0C                  ADD ESP,0xc
006AD2EE  EB 31                     JMP 0x006ad321
LAB_006ad2f0:
006AD2F0  8B 15 CC D7 7E 00         MOV EDX,dword ptr [0x007ed7cc]
006AD2F6  A1 D0 D7 7E 00            MOV EAX,[0x007ed7d0]
006AD2FB  8B 0D D4 D7 7E 00         MOV ECX,dword ptr [0x007ed7d4]
006AD301  89 95 F8 FE FF FF         MOV dword ptr [EBP + 0xfffffef8],EDX
006AD307  66 8B 15 D8 D7 7E 00      MOV DX,word ptr [0x007ed7d8]
006AD30E  89 85 FC FE FF FF         MOV dword ptr [EBP + 0xfffffefc],EAX
006AD314  89 8D 00 FF FF FF         MOV dword ptr [EBP + 0xffffff00],ECX
006AD31A  66 89 95 04 FF FF FF      MOV word ptr [EBP + 0xffffff04],DX
LAB_006ad321:
006AD321  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
006AD324  C6 85 F8 FC FF FF 00      MOV byte ptr [EBP + 0xfffffcf8],0x0
006AD32B  85 C0                     TEST EAX,EAX
006AD32D  74 51                     JZ 0x006ad380
006AD32F  8D 4D 0C                  LEA ECX,[EBP + 0xc]
006AD332  8D 95 F8 FC FF FF         LEA EDX,[EBP + 0xfffffcf8]
006AD338  51                        PUSH ECX
006AD339  50                        PUSH EAX
006AD33A  68 00 02 00 00            PUSH 0x200
006AD33F  52                        PUSH EDX
006AD340  E8 9B 2D 08 00            CALL 0x007300e0
006AD345  83 C4 10                  ADD ESP,0x10
006AD348  85 C0                     TEST EAX,EAX
006AD34A  7D 34                     JGE 0x006ad380
006AD34C  BF B4 D7 7E 00            MOV EDI,0x7ed7b4
006AD351  83 C9 FF                  OR ECX,0xffffffff
006AD354  33 C0                     XOR EAX,EAX
006AD356  53                        PUSH EBX
006AD357  F2 AE                     SCASB.REPNE ES:EDI
006AD359  F7 D1                     NOT ECX
006AD35B  2B F9                     SUB EDI,ECX
006AD35D  56                        PUSH ESI
006AD35E  8D 95 F8 FC FF FF         LEA EDX,[EBP + 0xfffffcf8]
006AD364  8B F7                     MOV ESI,EDI
006AD366  8B D9                     MOV EBX,ECX
006AD368  8B FA                     MOV EDI,EDX
006AD36A  83 C9 FF                  OR ECX,0xffffffff
006AD36D  F2 AE                     SCASB.REPNE ES:EDI
006AD36F  8B CB                     MOV ECX,EBX
006AD371  4F                        DEC EDI
006AD372  C1 E9 02                  SHR ECX,0x2
006AD375  F3 A5                     MOVSD.REP ES:EDI,ESI
006AD377  8B CB                     MOV ECX,EBX
006AD379  83 E1 03                  AND ECX,0x3
006AD37C  F3 A4                     MOVSB.REP ES:EDI,ESI
006AD37E  5E                        POP ESI
006AD37F  5B                        POP EBX
LAB_006ad380:
006AD380  8D 85 F8 FE FF FF         LEA EAX,[EBP + 0xfffffef8]
006AD386  6A 40                     PUSH 0x40
006AD388  8D 8D F8 FC FF FF         LEA ECX,[EBP + 0xfffffcf8]
006AD38E  50                        PUSH EAX
006AD38F  51                        PUSH ECX
006AD390  E8 0B 00 00 00            CALL 0x006ad3a0
006AD395  5F                        POP EDI
006AD396  8B E5                     MOV ESP,EBP
006AD398  5D                        POP EBP
006AD399  C3                        RET
