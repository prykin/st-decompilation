FUN_0070b2e0:
0070B2E0  55                        PUSH EBP
0070B2E1  8B EC                     MOV EBP,ESP
0070B2E3  83 EC 50                  SUB ESP,0x50
0070B2E6  A1 F8 8D 85 00            MOV EAX,[0x00858df8]
0070B2EB  56                        PUSH ESI
0070B2EC  8D 55 B4                  LEA EDX,[EBP + -0x4c]
0070B2EF  8D 4D B0                  LEA ECX,[EBP + -0x50]
0070B2F2  6A 00                     PUSH 0x0
0070B2F4  52                        PUSH EDX
0070B2F5  89 45 B0                  MOV dword ptr [EBP + -0x50],EAX
0070B2F8  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
0070B2FE  E8 ED 24 02 00            CALL 0x0072d7f0
0070B303  8B F0                     MOV ESI,EAX
0070B305  83 C4 08                  ADD ESP,0x8
0070B308  85 F6                     TEST ESI,ESI
0070B30A  75 42                     JNZ 0x0070b34e
0070B30C  8B 45 10                  MOV EAX,dword ptr [EBP + 0x10]
0070B30F  8B 55 0C                  MOV EDX,dword ptr [EBP + 0xc]
0070B312  8D 4D F4                  LEA ECX,[EBP + -0xc]
0070B315  50                        PUSH EAX
0070B316  51                        PUSH ECX
0070B317  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
0070B31A  52                        PUSH EDX
0070B31B  6A 0B                     PUSH 0xb
0070B31D  E8 EE 6F FE FF            CALL 0x006f2310
0070B322  85 C0                     TEST EAX,EAX
0070B324  75 12                     JNZ 0x0070b338
0070B326  8B 45 B0                  MOV EAX,dword ptr [EBP + -0x50]
0070B329  A3 F8 8D 85 00            MOV [0x00858df8],EAX
0070B32E  B8 FC FF FF FF            MOV EAX,0xfffffffc
0070B333  5E                        POP ESI
0070B334  8B E5                     MOV ESP,EBP
0070B336  5D                        POP EBP
0070B337  C3                        RET
LAB_0070b338:
0070B338  8B 4D B0                  MOV ECX,dword ptr [EBP + -0x50]
0070B33B  8B 45 F6                  MOV EAX,dword ptr [EBP + -0xa]
0070B33E  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
0070B344  25 FF 00 00 00            AND EAX,0xff
0070B349  5E                        POP ESI
0070B34A  8B E5                     MOV ESP,EBP
0070B34C  5D                        POP EBP
0070B34D  C3                        RET
LAB_0070b34e:
0070B34E  8B 55 B0                  MOV EDX,dword ptr [EBP + -0x50]
0070B351  68 9C 00 7F 00            PUSH 0x7f009c
0070B356  68 CC 4C 7A 00            PUSH 0x7a4ccc
0070B35B  56                        PUSH ESI
0070B35C  6A 00                     PUSH 0x0
0070B35E  68 15 02 00 00            PUSH 0x215
0070B363  68 E0 FF 7E 00            PUSH 0x7effe0
0070B368  89 15 F8 8D 85 00         MOV dword ptr [0x00858df8],EDX
0070B36E  E8 5D 21 FA FF            CALL 0x006ad4d0
0070B373  83 C4 18                  ADD ESP,0x18
0070B376  85 C0                     TEST EAX,EAX
0070B378  74 01                     JZ 0x0070b37b
0070B37A  CC                        INT3
LAB_0070b37b:
0070B37B  68 17 02 00 00            PUSH 0x217
0070B380  68 E0 FF 7E 00            PUSH 0x7effe0
0070B385  6A 00                     PUSH 0x0
0070B387  56                        PUSH ESI
0070B388  E8 B3 AA F9 FF            CALL 0x006a5e40
0070B38D  B8 FF 00 00 00            MOV EAX,0xff
0070B392  5E                        POP ESI
0070B393  8B E5                     MOV ESP,EBP
0070B395  5D                        POP EBP
0070B396  C3                        RET
