FUN_00677290:
00677290  55                        PUSH EBP
00677291  8B EC                     MOV EBP,ESP
00677293  83 EC 48                  SUB ESP,0x48
00677296  A1 F8 8D 85 00            MOV EAX,[0x00858df8]
0067729B  56                        PUSH ESI
0067729C  8D 55 BC                  LEA EDX,[EBP + -0x44]
0067729F  8D 4D B8                  LEA ECX,[EBP + -0x48]
006772A2  6A 00                     PUSH 0x0
006772A4  52                        PUSH EDX
006772A5  C7 45 FC 00 00 00 00      MOV dword ptr [EBP + -0x4],0x0
006772AC  89 45 B8                  MOV dword ptr [EBP + -0x48],EAX
006772AF  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
006772B5  E8 36 65 0B 00            CALL 0x0072d7f0
006772BA  8B F0                     MOV ESI,EAX
006772BC  83 C4 08                  ADD ESP,0x8
006772BF  85 F6                     TEST ESI,ESI
006772C1  75 68                     JNZ 0x0067732b
006772C3  6A 0A                     PUSH 0xa
006772C5  6A 02                     PUSH 0x2
006772C7  6A 0A                     PUSH 0xa
006772C9  50                        PUSH EAX
006772CA  E8 C1 6F 03 00            CALL 0x006ae290
006772CF  8B F0                     MOV ESI,EAX
006772D1  8B 45 2C                  MOV EAX,dword ptr [EBP + 0x2c]
006772D4  85 C0                     TEST EAX,EAX
006772D6  89 75 FC                  MOV dword ptr [EBP + -0x4],ESI
006772D9  B8 52 18 40 00            MOV EAX,0x401852
006772DE  75 05                     JNZ 0x006772e5
006772E0  B8 90 34 40 00            MOV EAX,0x403490
LAB_006772e5:
006772E5  8B 4D 24                  MOV ECX,dword ptr [EBP + 0x24]
006772E8  8B 55 20                  MOV EDX,dword ptr [EBP + 0x20]
006772EB  6A 00                     PUSH 0x0
006772ED  56                        PUSH ESI
006772EE  50                        PUSH EAX
006772EF  8B 45 28                  MOV EAX,dword ptr [EBP + 0x28]
006772F2  50                        PUSH EAX
006772F3  8B 45 1C                  MOV EAX,dword ptr [EBP + 0x1c]
006772F6  51                        PUSH ECX
006772F7  8B 4D 18                  MOV ECX,dword ptr [EBP + 0x18]
006772FA  52                        PUSH EDX
006772FB  8B 55 14                  MOV EDX,dword ptr [EBP + 0x14]
006772FE  50                        PUSH EAX
006772FF  8B 45 10                  MOV EAX,dword ptr [EBP + 0x10]
00677302  51                        PUSH ECX
00677303  8B 4D 0C                  MOV ECX,dword ptr [EBP + 0xc]
00677306  52                        PUSH EDX
00677307  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
0067730A  50                        PUSH EAX
0067730B  6A 00                     PUSH 0x0
0067730D  68 FF FF FF 3F            PUSH 0x3fffffff
00677312  51                        PUSH ECX
00677313  52                        PUSH EDX
00677314  E8 DF 9F D8 FF            CALL 0x004012f8
00677319  8B 45 B8                  MOV EAX,dword ptr [EBP + -0x48]
0067731C  83 C4 38                  ADD ESP,0x38
0067731F  A3 F8 8D 85 00            MOV [0x00858df8],EAX
00677324  8B C6                     MOV EAX,ESI
00677326  5E                        POP ESI
00677327  8B E5                     MOV ESP,EBP
00677329  5D                        POP EBP
0067732A  C3                        RET
LAB_0067732b:
0067732B  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
0067732E  8B 4D B8                  MOV ECX,dword ptr [EBP + -0x48]
00677331  85 C0                     TEST EAX,EAX
00677333  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
00677339  74 06                     JZ 0x00677341
0067733B  50                        PUSH EAX
0067733C  E8 CF 6D 03 00            CALL 0x006ae110
LAB_00677341:
00677341  68 C0 02 00 00            PUSH 0x2c0
00677346  68 58 2D 7D 00            PUSH 0x7d2d58
0067734B  6A 00                     PUSH 0x0
0067734D  56                        PUSH ESI
0067734E  C7 45 FC 00 00 00 00      MOV dword ptr [EBP + -0x4],0x0
00677355  E8 E6 EA 02 00            CALL 0x006a5e40
0067735A  33 C0                     XOR EAX,EAX
0067735C  5E                        POP ESI
0067735D  8B E5                     MOV ESP,EBP
0067735F  5D                        POP EBP
00677360  C3                        RET
