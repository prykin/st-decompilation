FUN_007097c0:
007097C0  55                        PUSH EBP
007097C1  8B EC                     MOV EBP,ESP
007097C3  83 EC 48                  SUB ESP,0x48
007097C6  A1 F8 8D 85 00            MOV EAX,[0x00858df8]
007097CB  56                        PUSH ESI
007097CC  8D 55 BC                  LEA EDX,[EBP + -0x44]
007097CF  8D 4D B8                  LEA ECX,[EBP + -0x48]
007097D2  6A 00                     PUSH 0x0
007097D4  52                        PUSH EDX
007097D5  C7 45 FC 00 00 00 00      MOV dword ptr [EBP + -0x4],0x0
007097DC  89 45 B8                  MOV dword ptr [EBP + -0x48],EAX
007097DF  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
007097E5  E8 06 40 02 00            CALL 0x0072d7f0
007097EA  8B F0                     MOV ESI,EAX
007097EC  83 C4 08                  ADD ESP,0x8
007097EF  85 F6                     TEST ESI,ESI
007097F1  75 4B                     JNZ 0x0070983e
007097F3  8B 75 08                  MOV ESI,dword ptr [EBP + 0x8]
007097F6  85 F6                     TEST ESI,ESI
007097F8  75 14                     JNZ 0x0070980e
007097FA  A1 7C D7 7E 00            MOV EAX,[0x007ed77c]
007097FF  6A 19                     PUSH 0x19
00709801  68 5C FF 7E 00            PUSH 0x7eff5c
00709806  50                        PUSH EAX
00709807  6A CC                     PUSH -0x34
00709809  E8 32 C6 F9 FF            CALL 0x006a5e40
LAB_0070980e:
0070980E  6A 08                     PUSH 0x8
00709810  E8 FB 13 FA FF            CALL 0x006aac10
00709815  6A 14                     PUSH 0x14
00709817  6A 2D                     PUSH 0x2d
00709819  6A 14                     PUSH 0x14
0070981B  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
0070981E  6A 00                     PUSH 0x0
00709820  89 30                     MOV dword ptr [EAX],ESI
00709822  E8 69 4A FA FF            CALL 0x006ae290
00709827  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
0070982A  89 41 04                  MOV dword ptr [ECX + 0x4],EAX
0070982D  8B 55 B8                  MOV EDX,dword ptr [EBP + -0x48]
00709830  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
00709833  89 15 F8 8D 85 00         MOV dword ptr [0x00858df8],EDX
00709839  5E                        POP ESI
0070983A  8B E5                     MOV ESP,EBP
0070983C  5D                        POP EBP
0070983D  C3                        RET
LAB_0070983e:
0070983E  8B 45 B8                  MOV EAX,dword ptr [EBP + -0x48]
00709841  68 4C FF 7E 00            PUSH 0x7eff4c
00709846  68 CC 4C 7A 00            PUSH 0x7a4ccc
0070984B  56                        PUSH ESI
0070984C  6A 00                     PUSH 0x0
0070984E  6A 22                     PUSH 0x22
00709850  68 5C FF 7E 00            PUSH 0x7eff5c
00709855  A3 F8 8D 85 00            MOV [0x00858df8],EAX
0070985A  E8 71 3C FA FF            CALL 0x006ad4d0
0070985F  83 C4 18                  ADD ESP,0x18
00709862  85 C0                     TEST EAX,EAX
00709864  74 01                     JZ 0x00709867
00709866  CC                        INT3
LAB_00709867:
00709867  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
0070986A  8B 41 04                  MOV EAX,dword ptr [ECX + 0x4]
0070986D  85 C0                     TEST EAX,EAX
0070986F  74 06                     JZ 0x00709877
00709871  50                        PUSH EAX
00709872  E8 99 48 FA FF            CALL 0x006ae110
LAB_00709877:
00709877  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
0070987A  85 C0                     TEST EAX,EAX
0070987C  74 09                     JZ 0x00709887
0070987E  8D 55 FC                  LEA EDX,[EBP + -0x4]
00709881  52                        PUSH EDX
00709882  E8 D9 17 FA FF            CALL 0x006ab060
LAB_00709887:
00709887  6A 27                     PUSH 0x27
00709889  68 5C FF 7E 00            PUSH 0x7eff5c
0070988E  6A 00                     PUSH 0x0
00709890  56                        PUSH ESI
00709891  E8 AA C5 F9 FF            CALL 0x006a5e40
00709896  33 C0                     XOR EAX,EAX
00709898  5E                        POP ESI
00709899  8B E5                     MOV ESP,EBP
0070989B  5D                        POP EBP
0070989C  C3                        RET
