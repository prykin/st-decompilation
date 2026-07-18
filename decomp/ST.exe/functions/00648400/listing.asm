FUN_00648400:
00648400  55                        PUSH EBP
00648401  8B EC                     MOV EBP,ESP
00648403  83 EC 48                  SUB ESP,0x48
00648406  A1 F8 8D 85 00            MOV EAX,[0x00858df8]
0064840B  56                        PUSH ESI
0064840C  8D 55 BC                  LEA EDX,[EBP + -0x44]
0064840F  8D 4D B8                  LEA ECX,[EBP + -0x48]
00648412  6A 00                     PUSH 0x0
00648414  52                        PUSH EDX
00648415  C7 45 FC 00 00 00 00      MOV dword ptr [EBP + -0x4],0x0
0064841C  89 45 B8                  MOV dword ptr [EBP + -0x48],EAX
0064841F  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
00648425  E8 C6 53 0E 00            CALL 0x0072d7f0
0064842A  8B F0                     MOV ESI,EAX
0064842C  83 C4 08                  ADD ESP,0x8
0064842F  85 F6                     TEST ESI,ESI
00648431  75 56                     JNZ 0x00648489
00648433  68 85 00 00 00            PUSH 0x85
00648438  E8 D3 27 06 00            CALL 0x006aac10
0064843D  8B 75 08                  MOV ESI,dword ptr [EBP + 0x8]
00648440  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
00648443  C7 40 01 85 00 00 00      MOV dword ptr [EAX + 0x1],0x85
0064844A  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
0064844D  6A 3F                     PUSH 0x3f
0064844F  56                        PUSH ESI
00648450  C6 40 05 02               MOV byte ptr [EAX + 0x5],0x2
00648454  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
00648457  83 C1 06                  ADD ECX,0x6
0064845A  51                        PUSH ECX
0064845B  E8 E0 5E 0E 00            CALL 0x0072e340
00648460  56                        PUSH ESI
00648461  E8 7B 91 DB FF            CALL 0x004015e1
00648466  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
00648469  8B 4D 0C                  MOV ECX,dword ptr [EBP + 0xc]
0064846C  83 C4 10                  ADD ESP,0x10
0064846F  89 42 4E                  MOV dword ptr [EDX + 0x4e],EAX
00648472  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
00648475  89 48 52                  MOV dword ptr [EAX + 0x52],ECX
00648478  8B 55 B8                  MOV EDX,dword ptr [EBP + -0x48]
0064847B  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
0064847E  89 15 F8 8D 85 00         MOV dword ptr [0x00858df8],EDX
00648484  5E                        POP ESI
00648485  8B E5                     MOV ESP,EBP
00648487  5D                        POP EBP
00648488  C3                        RET
LAB_00648489:
00648489  8B 45 B8                  MOV EAX,dword ptr [EBP + -0x48]
0064848C  8D 4D FC                  LEA ECX,[EBP + -0x4]
0064848F  51                        PUSH ECX
00648490  A3 F8 8D 85 00            MOV [0x00858df8],EAX
00648495  E8 0A 9C DB FF            CALL 0x004020a4
0064849A  83 C4 04                  ADD ESP,0x4
0064849D  6A 20                     PUSH 0x20
0064849F  68 F4 27 7D 00            PUSH 0x7d27f4
006484A4  6A 00                     PUSH 0x0
006484A6  56                        PUSH ESI
006484A7  E8 94 D9 05 00            CALL 0x006a5e40
006484AC  33 C0                     XOR EAX,EAX
006484AE  5E                        POP ESI
006484AF  8B E5                     MOV ESP,EBP
006484B1  5D                        POP EBP
006484B2  C3                        RET
