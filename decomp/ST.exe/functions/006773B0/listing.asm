FUN_006773b0:
006773B0  55                        PUSH EBP
006773B1  8B EC                     MOV EBP,ESP
006773B3  83 EC 48                  SUB ESP,0x48
006773B6  A1 F8 8D 85 00            MOV EAX,[0x00858df8]
006773BB  56                        PUSH ESI
006773BC  8D 55 BC                  LEA EDX,[EBP + -0x44]
006773BF  8D 4D B8                  LEA ECX,[EBP + -0x48]
006773C2  6A 00                     PUSH 0x0
006773C4  52                        PUSH EDX
006773C5  C7 45 FC 00 00 00 00      MOV dword ptr [EBP + -0x4],0x0
006773CC  89 45 B8                  MOV dword ptr [EBP + -0x48],EAX
006773CF  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
006773D5  E8 16 64 0B 00            CALL 0x0072d7f0
006773DA  8B F0                     MOV ESI,EAX
006773DC  83 C4 08                  ADD ESP,0x8
006773DF  85 F6                     TEST ESI,ESI
006773E1  75 65                     JNZ 0x00677448
006773E3  6A 0A                     PUSH 0xa
006773E5  6A 02                     PUSH 0x2
006773E7  6A 0A                     PUSH 0xa
006773E9  50                        PUSH EAX
006773EA  E8 A1 6E 03 00            CALL 0x006ae290
006773EF  8B F0                     MOV ESI,EAX
006773F1  8B 45 2C                  MOV EAX,dword ptr [EBP + 0x2c]
006773F4  85 C0                     TEST EAX,EAX
006773F6  89 75 FC                  MOV dword ptr [EBP + -0x4],ESI
006773F9  B8 52 18 40 00            MOV EAX,0x401852
006773FE  75 05                     JNZ 0x00677405
00677400  B8 90 34 40 00            MOV EAX,0x403490
LAB_00677405:
00677405  8B 4D 24                  MOV ECX,dword ptr [EBP + 0x24]
00677408  8B 55 20                  MOV EDX,dword ptr [EBP + 0x20]
0067740B  6A 00                     PUSH 0x0
0067740D  56                        PUSH ESI
0067740E  50                        PUSH EAX
0067740F  8B 45 28                  MOV EAX,dword ptr [EBP + 0x28]
00677412  50                        PUSH EAX
00677413  8B 45 1C                  MOV EAX,dword ptr [EBP + 0x1c]
00677416  51                        PUSH ECX
00677417  8B 4D 18                  MOV ECX,dword ptr [EBP + 0x18]
0067741A  52                        PUSH EDX
0067741B  8B 55 14                  MOV EDX,dword ptr [EBP + 0x14]
0067741E  50                        PUSH EAX
0067741F  8B 45 10                  MOV EAX,dword ptr [EBP + 0x10]
00677422  51                        PUSH ECX
00677423  8B 4D 0C                  MOV ECX,dword ptr [EBP + 0xc]
00677426  52                        PUSH EDX
00677427  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
0067742A  50                        PUSH EAX
0067742B  6A 00                     PUSH 0x0
0067742D  51                        PUSH ECX
0067742E  6A 00                     PUSH 0x0
00677430  52                        PUSH EDX
00677431  E8 C2 9E D8 FF            CALL 0x004012f8
00677436  8B 45 B8                  MOV EAX,dword ptr [EBP + -0x48]
00677439  83 C4 38                  ADD ESP,0x38
0067743C  A3 F8 8D 85 00            MOV [0x00858df8],EAX
00677441  8B C6                     MOV EAX,ESI
00677443  5E                        POP ESI
00677444  8B E5                     MOV ESP,EBP
00677446  5D                        POP EBP
00677447  C3                        RET
LAB_00677448:
00677448  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
0067744B  8B 4D B8                  MOV ECX,dword ptr [EBP + -0x48]
0067744E  85 C0                     TEST EAX,EAX
00677450  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
00677456  74 06                     JZ 0x0067745e
00677458  50                        PUSH EAX
00677459  E8 B2 6C 03 00            CALL 0x006ae110
LAB_0067745e:
0067745E  68 D7 02 00 00            PUSH 0x2d7
00677463  68 58 2D 7D 00            PUSH 0x7d2d58
00677468  6A 00                     PUSH 0x0
0067746A  56                        PUSH ESI
0067746B  C7 45 FC 00 00 00 00      MOV dword ptr [EBP + -0x4],0x0
00677472  E8 C9 E9 02 00            CALL 0x006a5e40
00677477  33 C0                     XOR EAX,EAX
00677479  5E                        POP ESI
0067747A  8B E5                     MOV ESP,EBP
0067747C  5D                        POP EBP
0067747D  C3                        RET
