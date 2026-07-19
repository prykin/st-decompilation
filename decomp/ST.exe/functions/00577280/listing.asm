CreateGameSystem:
00577280  55                        PUSH EBP
00577281  8B EC                     MOV EBP,ESP
00577283  83 EC 44                  SUB ESP,0x44
00577286  A1 F8 8D 85 00            MOV EAX,[0x00858df8]
0057728B  56                        PUSH ESI
0057728C  8D 55 C0                  LEA EDX,[EBP + -0x40]
0057728F  8D 4D BC                  LEA ECX,[EBP + -0x44]
00577292  6A 00                     PUSH 0x0
00577294  52                        PUSH EDX
00577295  89 45 BC                  MOV dword ptr [EBP + -0x44],EAX
00577298  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
0057729E  E8 4D 65 1B 00            CALL 0x0072d7f0
005772A3  8B F0                     MOV ESI,EAX
005772A5  83 C4 08                  ADD ESP,0x8
005772A8  85 F6                     TEST ESI,ESI
005772AA  0F 85 E1 00 00 00         JNZ 0x00577391
005772B0  68 35 04 00 00            PUSH 0x435
005772B5  E8 76 72 1B 00            CALL 0x0072e530
005772BA  83 C4 04                  ADD ESP,0x4
005772BD  85 C0                     TEST EAX,EAX
005772BF  74 10                     JZ 0x005772d1
005772C1  8B 0D 28 67 80 00         MOV ECX,dword ptr [0x00806728]
005772C7  51                        PUSH ECX
005772C8  8B C8                     MOV ECX,EAX
005772CA  E8 1D A2 E8 FF            CALL 0x004014ec
005772CF  EB 02                     JMP 0x005772d3
LAB_005772d1:
005772D1  33 C0                     XOR EAX,EAX
LAB_005772d3:
005772D3  85 C0                     TEST EAX,EAX
005772D5  A3 3C 16 81 00            MOV [0x0081163c],EAX
005772DA  75 1D                     JNZ 0x005772f9
005772DC  8B 15 7C D7 7E 00         MOV EDX,dword ptr [0x007ed77c]
005772E2  68 B1 00 00 00            PUSH 0xb1
005772E7  68 5C AB 7C 00            PUSH 0x7cab5c
005772EC  52                        PUSH EDX
005772ED  6A FF                     PUSH -0x1
005772EF  E8 4C EB 12 00            CALL 0x006a5e40
005772F4  A1 3C 16 81 00            MOV EAX,[0x0081163c]
LAB_005772f9:
005772F9  C7 80 28 04 00 00 00 00 00 00  MOV dword ptr [EAX + 0x428],0x0
00577303  8B 0D 3C 16 81 00         MOV ECX,dword ptr [0x0081163c]
00577309  8B 01                     MOV EAX,dword ptr [ECX]
0057730B  FF 10                     CALL dword ptr [EAX]
0057730D  8B 0D 3C 16 81 00         MOV ECX,dword ptr [0x0081163c]
00577313  6A 00                     PUSH 0x0
00577315  51                        PUSH ECX
00577316  B9 20 76 80 00            MOV ECX,0x807620
0057731B  E8 30 D3 16 00            CALL 0x006e4650
00577320  8B 15 3C 16 81 00         MOV EDX,dword ptr [0x0081163c]
00577326  C7 82 28 04 00 00 01 00 00 00  MOV dword ptr [EDX + 0x428],0x1
00577330  8B 35 30 2A 80 00         MOV ESI,dword ptr [0x00802a30]
00577336  8B 86 C9 00 00 00         MOV EAX,dword ptr [ESI + 0xc9]
0057733C  8B 8E C5 00 00 00         MOV ECX,dword ptr [ESI + 0xc5]
00577342  50                        PUSH EAX
00577343  51                        PUSH ECX
00577344  6A 00                     PUSH 0x0
00577346  8B CE                     MOV ECX,ESI
00577348  C6 86 93 04 00 00 02      MOV byte ptr [ESI + 0x493],0x2
0057734F  66 C7 86 94 04 00 00 FF FF  MOV word ptr [ESI + 0x494],0xffff
00577358  E8 21 DD E8 FF            CALL 0x0040507e
0057735D  8B 96 C9 00 00 00         MOV EDX,dword ptr [ESI + 0xc9]
00577363  8B 86 C5 00 00 00         MOV EAX,dword ptr [ESI + 0xc5]
00577369  52                        PUSH EDX
0057736A  50                        PUSH EAX
0057736B  8B CE                     MOV ECX,ESI
0057736D  E8 AC B0 E8 FF            CALL 0x0040241e
00577372  C6 86 D2 00 00 00 00      MOV byte ptr [ESI + 0xd2],0x0
00577379  C7 86 DF 04 00 00 FF FF FF FF  MOV dword ptr [ESI + 0x4df],0xffffffff
00577383  8B 4D BC                  MOV ECX,dword ptr [EBP + -0x44]
00577386  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
0057738C  5E                        POP ESI
0057738D  8B E5                     MOV ESP,EBP
0057738F  5D                        POP EBP
00577390  C3                        RET
LAB_00577391:
00577391  8B 55 BC                  MOV EDX,dword ptr [EBP + -0x44]
00577394  68 34 AC 7C 00            PUSH 0x7cac34
00577399  68 CC 4C 7A 00            PUSH 0x7a4ccc
0057739E  56                        PUSH ESI
0057739F  6A 00                     PUSH 0x0
005773A1  68 BB 00 00 00            PUSH 0xbb
005773A6  68 5C AB 7C 00            PUSH 0x7cab5c
005773AB  89 15 F8 8D 85 00         MOV dword ptr [0x00858df8],EDX
005773B1  E8 1A 61 13 00            CALL 0x006ad4d0
005773B6  83 C4 18                  ADD ESP,0x18
005773B9  85 C0                     TEST EAX,EAX
005773BB  74 01                     JZ 0x005773be
005773BD  CC                        INT3
LAB_005773be:
005773BE  68 BB 00 00 00            PUSH 0xbb
005773C3  68 5C AB 7C 00            PUSH 0x7cab5c
005773C8  6A 00                     PUSH 0x0
005773CA  56                        PUSH ESI
005773CB  E8 70 EA 12 00            CALL 0x006a5e40
005773D0  5E                        POP ESI
005773D1  8B E5                     MOV ESP,EBP
005773D3  5D                        POP EBP
005773D4  C3                        RET
