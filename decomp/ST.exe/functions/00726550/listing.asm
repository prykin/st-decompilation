FUN_00726550:
00726550  55                        PUSH EBP
00726551  8B EC                     MOV EBP,ESP
00726553  83 EC 50                  SUB ESP,0x50
00726556  A1 F8 8D 85 00            MOV EAX,[0x00858df8]
0072655B  56                        PUSH ESI
0072655C  8D 55 B4                  LEA EDX,[EBP + -0x4c]
0072655F  8D 4D B0                  LEA ECX,[EBP + -0x50]
00726562  6A 00                     PUSH 0x0
00726564  52                        PUSH EDX
00726565  89 45 B0                  MOV dword ptr [EBP + -0x50],EAX
00726568  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
0072656E  E8 7D 72 00 00            CALL 0x0072d7f0
00726573  8B F0                     MOV ESI,EAX
00726575  83 C4 08                  ADD ESP,0x8
00726578  85 F6                     TEST ESI,ESI
0072657A  75 43                     JNZ 0x007265bf
0072657C  8B 45 10                  MOV EAX,dword ptr [EBP + 0x10]
0072657F  8B 55 0C                  MOV EDX,dword ptr [EBP + 0xc]
00726582  8D 4D F4                  LEA ECX,[EBP + -0xc]
00726585  50                        PUSH EAX
00726586  51                        PUSH ECX
00726587  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
0072658A  52                        PUSH EDX
0072658B  6A 08                     PUSH 0x8
0072658D  E8 7E BD FC FF            CALL 0x006f2310
00726592  85 C0                     TEST EAX,EAX
00726594  75 17                     JNZ 0x007265ad
00726596  A1 7C D7 7E 00            MOV EAX,[0x007ed77c]
0072659B  68 22 01 00 00            PUSH 0x122
007265A0  68 8C 0C 7F 00            PUSH 0x7f0c8c
007265A5  50                        PUSH EAX
007265A6  6A FC                     PUSH -0x4
007265A8  E8 93 F8 F7 FF            CALL 0x006a5e40
LAB_007265ad:
007265AD  8B 4D B0                  MOV ECX,dword ptr [EBP + -0x50]
007265B0  0F BF 45 FA               MOVSX EAX,word ptr [EBP + -0x6]
007265B4  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
007265BA  5E                        POP ESI
007265BB  8B E5                     MOV ESP,EBP
007265BD  5D                        POP EBP
007265BE  C3                        RET
LAB_007265bf:
007265BF  8B 45 10                  MOV EAX,dword ptr [EBP + 0x10]
007265C2  8B 55 B0                  MOV EDX,dword ptr [EBP + -0x50]
007265C5  85 C0                     TEST EAX,EAX
007265C7  89 15 F8 8D 85 00         MOV dword ptr [0x00858df8],EDX
007265CD  75 0C                     JNZ 0x007265db
007265CF  83 FE FC                  CMP ESI,-0x4
007265D2  75 07                     JNZ 0x007265db
007265D4  8B C6                     MOV EAX,ESI
007265D6  5E                        POP ESI
007265D7  8B E5                     MOV ESP,EBP
007265D9  5D                        POP EBP
007265DA  C3                        RET
LAB_007265db:
007265DB  68 F0 0C 7F 00            PUSH 0x7f0cf0
007265E0  68 CC 4C 7A 00            PUSH 0x7a4ccc
007265E5  56                        PUSH ESI
007265E6  6A 00                     PUSH 0x0
007265E8  68 26 01 00 00            PUSH 0x126
007265ED  68 8C 0C 7F 00            PUSH 0x7f0c8c
007265F2  E8 D9 6E F8 FF            CALL 0x006ad4d0
007265F7  83 C4 18                  ADD ESP,0x18
007265FA  85 C0                     TEST EAX,EAX
007265FC  74 01                     JZ 0x007265ff
007265FE  CC                        INT3
LAB_007265ff:
007265FF  68 28 01 00 00            PUSH 0x128
00726604  68 8C 0C 7F 00            PUSH 0x7f0c8c
00726609  6A 00                     PUSH 0x0
0072660B  56                        PUSH ESI
0072660C  E8 2F F8 F7 FF            CALL 0x006a5e40
00726611  85 F6                     TEST ESI,ESI
00726613  7D 07                     JGE 0x0072661c
00726615  8B C6                     MOV EAX,ESI
00726617  5E                        POP ESI
00726618  8B E5                     MOV ESP,EBP
0072661A  5D                        POP EBP
0072661B  C3                        RET
LAB_0072661c:
0072661C  83 C8 FF                  OR EAX,0xffffffff
0072661F  5E                        POP ESI
00726620  8B E5                     MOV ESP,EBP
00726622  5D                        POP EBP
00726623  C3                        RET
