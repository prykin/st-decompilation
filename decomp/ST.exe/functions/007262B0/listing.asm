FUN_007262b0:
007262B0  55                        PUSH EBP
007262B1  8B EC                     MOV EBP,ESP
007262B3  83 EC 50                  SUB ESP,0x50
007262B6  A1 F8 8D 85 00            MOV EAX,[0x00858df8]
007262BB  56                        PUSH ESI
007262BC  8D 55 B4                  LEA EDX,[EBP + -0x4c]
007262BF  8D 4D B0                  LEA ECX,[EBP + -0x50]
007262C2  6A 00                     PUSH 0x0
007262C4  52                        PUSH EDX
007262C5  89 45 B0                  MOV dword ptr [EBP + -0x50],EAX
007262C8  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
007262CE  E8 1D 75 00 00            CALL 0x0072d7f0
007262D3  8B F0                     MOV ESI,EAX
007262D5  83 C4 08                  ADD ESP,0x8
007262D8  85 F6                     TEST ESI,ESI
007262DA  75 43                     JNZ 0x0072631f
007262DC  8B 45 10                  MOV EAX,dword ptr [EBP + 0x10]
007262DF  8B 55 0C                  MOV EDX,dword ptr [EBP + 0xc]
007262E2  8D 4D F4                  LEA ECX,[EBP + -0xc]
007262E5  50                        PUSH EAX
007262E6  51                        PUSH ECX
007262E7  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
007262EA  52                        PUSH EDX
007262EB  6A 08                     PUSH 0x8
007262ED  E8 1E C0 FC FF            CALL 0x006f2310
007262F2  85 C0                     TEST EAX,EAX
007262F4  75 17                     JNZ 0x0072630d
007262F6  A1 7C D7 7E 00            MOV EAX,[0x007ed77c]
007262FB  68 D7 00 00 00            PUSH 0xd7
00726300  68 8C 0C 7F 00            PUSH 0x7f0c8c
00726305  50                        PUSH EAX
00726306  6A FC                     PUSH -0x4
00726308  E8 33 FB F7 FF            CALL 0x006a5e40
LAB_0072630d:
0072630D  8B 4D B0                  MOV ECX,dword ptr [EBP + -0x50]
00726310  0F BF 45 F6               MOVSX EAX,word ptr [EBP + -0xa]
00726314  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
0072631A  5E                        POP ESI
0072631B  8B E5                     MOV ESP,EBP
0072631D  5D                        POP EBP
0072631E  C3                        RET
LAB_0072631f:
0072631F  8B 45 10                  MOV EAX,dword ptr [EBP + 0x10]
00726322  8B 55 B0                  MOV EDX,dword ptr [EBP + -0x50]
00726325  85 C0                     TEST EAX,EAX
00726327  89 15 F8 8D 85 00         MOV dword ptr [0x00858df8],EDX
0072632D  75 0C                     JNZ 0x0072633b
0072632F  83 FE FC                  CMP ESI,-0x4
00726332  75 07                     JNZ 0x0072633b
00726334  8B C6                     MOV EAX,ESI
00726336  5E                        POP ESI
00726337  8B E5                     MOV ESP,EBP
00726339  5D                        POP EBP
0072633A  C3                        RET
LAB_0072633b:
0072633B  68 BC 0C 7F 00            PUSH 0x7f0cbc
00726340  68 CC 4C 7A 00            PUSH 0x7a4ccc
00726345  56                        PUSH ESI
00726346  6A 00                     PUSH 0x0
00726348  68 DB 00 00 00            PUSH 0xdb
0072634D  68 8C 0C 7F 00            PUSH 0x7f0c8c
00726352  E8 79 71 F8 FF            CALL 0x006ad4d0
00726357  83 C4 18                  ADD ESP,0x18
0072635A  85 C0                     TEST EAX,EAX
0072635C  74 01                     JZ 0x0072635f
0072635E  CC                        INT3
LAB_0072635f:
0072635F  68 DD 00 00 00            PUSH 0xdd
00726364  68 8C 0C 7F 00            PUSH 0x7f0c8c
00726369  6A 00                     PUSH 0x0
0072636B  56                        PUSH ESI
0072636C  E8 CF FA F7 FF            CALL 0x006a5e40
00726371  85 F6                     TEST ESI,ESI
00726373  7D 07                     JGE 0x0072637c
00726375  8B C6                     MOV EAX,ESI
00726377  5E                        POP ESI
00726378  8B E5                     MOV ESP,EBP
0072637A  5D                        POP EBP
0072637B  C3                        RET
LAB_0072637c:
0072637C  83 C8 FF                  OR EAX,0xffffffff
0072637F  5E                        POP ESI
00726380  8B E5                     MOV ESP,EBP
00726382  5D                        POP EBP
00726383  C3                        RET
