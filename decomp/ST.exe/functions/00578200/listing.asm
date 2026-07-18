DebugSystemC::CreateSystemObjects:
00578200  55                        PUSH EBP
00578201  8B EC                     MOV EBP,ESP
00578203  83 EC 48                  SUB ESP,0x48
00578206  A1 F8 8D 85 00            MOV EAX,[0x00858df8]
0057820B  89 4D FC                  MOV dword ptr [EBP + -0x4],ECX
0057820E  56                        PUSH ESI
0057820F  8D 55 BC                  LEA EDX,[EBP + -0x44]
00578212  8D 4D B8                  LEA ECX,[EBP + -0x48]
00578215  6A 00                     PUSH 0x0
00578217  52                        PUSH EDX
00578218  89 45 B8                  MOV dword ptr [EBP + -0x48],EAX
0057821B  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
00578221  E8 CA 55 1B 00            CALL 0x0072d7f0
00578226  8B F0                     MOV ESI,EAX
00578228  83 C4 08                  ADD ESP,0x8
0057822B  85 F6                     TEST ESI,ESI
0057822D  75 24                     JNZ 0x00578253
0057822F  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
00578232  56                        PUSH ESI
00578233  56                        PUSH ESI
00578234  68 28 B2 7F 00            PUSH 0x7fb228
00578239  8B 01                     MOV EAX,dword ptr [ECX]
0057823B  68 00 81 00 00            PUSH 0x8100
00578240  FF 50 0C                  CALL dword ptr [EAX + 0xc]
00578243  8B 4D B8                  MOV ECX,dword ptr [EBP + -0x48]
00578246  33 C0                     XOR EAX,EAX
00578248  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
0057824E  5E                        POP ESI
0057824F  8B E5                     MOV ESP,EBP
00578251  5D                        POP EBP
00578252  C3                        RET
LAB_00578253:
00578253  8B 55 B8                  MOV EDX,dword ptr [EBP + -0x48]
00578256  68 88 AC 7C 00            PUSH 0x7cac88
0057825B  68 CC 4C 7A 00            PUSH 0x7a4ccc
00578260  56                        PUSH ESI
00578261  6A 00                     PUSH 0x0
00578263  68 DF 01 00 00            PUSH 0x1df
00578268  68 5C AB 7C 00            PUSH 0x7cab5c
0057826D  89 15 F8 8D 85 00         MOV dword ptr [0x00858df8],EDX
00578273  E8 58 52 13 00            CALL 0x006ad4d0
00578278  83 C4 18                  ADD ESP,0x18
0057827B  85 C0                     TEST EAX,EAX
0057827D  74 01                     JZ 0x00578280
0057827F  CC                        INT3
LAB_00578280:
00578280  68 E0 01 00 00            PUSH 0x1e0
00578285  68 5C AB 7C 00            PUSH 0x7cab5c
0057828A  6A 00                     PUSH 0x0
0057828C  56                        PUSH ESI
0057828D  E8 AE DB 12 00            CALL 0x006a5e40
00578292  83 C8 FF                  OR EAX,0xffffffff
00578295  5E                        POP ESI
00578296  8B E5                     MOV ESP,EBP
00578298  5D                        POP EBP
00578299  C3                        RET
