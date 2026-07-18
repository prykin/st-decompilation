HelpPanelTy::MObjProc:
00516300  55                        PUSH EBP
00516301  8B EC                     MOV EBP,ESP
00516303  83 EC 48                  SUB ESP,0x48
00516306  A1 F8 8D 85 00            MOV EAX,[0x00858df8]
0051630B  53                        PUSH EBX
0051630C  89 4D FC                  MOV dword ptr [EBP + -0x4],ECX
0051630F  33 DB                     XOR EBX,EBX
00516311  56                        PUSH ESI
00516312  8D 55 BC                  LEA EDX,[EBP + -0x44]
00516315  8D 4D B8                  LEA ECX,[EBP + -0x48]
00516318  53                        PUSH EBX
00516319  52                        PUSH EDX
0051631A  89 45 B8                  MOV dword ptr [EBP + -0x48],EAX
0051631D  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
00516323  E8 C8 74 21 00            CALL 0x0072d7f0
00516328  8B F0                     MOV ESI,EAX
0051632A  83 C4 08                  ADD ESP,0x8
0051632D  3B F3                     CMP ESI,EBX
0051632F  0F 85 B6 00 00 00         JNZ 0x005163eb
00516335  8B 75 FC                  MOV ESI,dword ptr [EBP + -0x4]
00516338  8A 86 A1 01 00 00         MOV AL,byte ptr [ESI + 0x1a1]
0051633E  3A C3                     CMP AL,BL
00516340  74 16                     JZ 0x00516358
00516342  3C 06                     CMP AL,0x6
00516344  74 12                     JZ 0x00516358
00516346  3C 0A                     CMP AL,0xa
00516348  74 0E                     JZ 0x00516358
0051634A  88 9E A2 01 00 00         MOV byte ptr [ESI + 0x1a2],BL
00516350  89 9E AB 01 00 00         MOV dword ptr [ESI + 0x1ab],EBX
00516356  EB 12                     JMP 0x0051636a
LAB_00516358:
00516358  88 86 A2 01 00 00         MOV byte ptr [ESI + 0x1a2],AL
0051635E  8B 86 A3 01 00 00         MOV EAX,dword ptr [ESI + 0x1a3]
00516364  89 86 AB 01 00 00         MOV dword ptr [ESI + 0x1ab],EAX
LAB_0051636a:
0051636A  8B 86 78 01 00 00         MOV EAX,dword ptr [ESI + 0x178]
00516370  C6 86 A1 01 00 00 07      MOV byte ptr [ESI + 0x1a1],0x7
00516377  3B C3                     CMP EAX,EBX
00516379  89 9E A7 01 00 00         MOV dword ptr [ESI + 0x1a7],EBX
0051637F  89 9E A3 01 00 00         MOV dword ptr [ESI + 0x1a3],EBX
00516385  66 89 9E AF 01 00 00      MOV word ptr [ESI + 0x1af],BX
0051638C  66 89 9E B1 01 00 00      MOV word ptr [ESI + 0x1b1],BX
00516393  74 26                     JZ 0x005163bb
00516395  C7 46 28 02 42 00 00      MOV dword ptr [ESI + 0x28],0x4202
0051639C  66 89 5E 2C               MOV word ptr [ESI + 0x2c],BX
005163A0  66 C7 46 2E 02 00         MOV word ptr [ESI + 0x2e],0x2
005163A6  89 46 30                  MOV dword ptr [ESI + 0x30],EAX
005163A9  8B 0D 30 2A 80 00         MOV ECX,dword ptr [0x00802a30]
005163AF  3B CB                     CMP ECX,EBX
005163B1  74 08                     JZ 0x005163bb
005163B3  8B 11                     MOV EDX,dword ptr [ECX]
005163B5  8D 46 18                  LEA EAX,[ESI + 0x18]
005163B8  50                        PUSH EAX
005163B9  FF 12                     CALL dword ptr [EDX]
LAB_005163bb:
005163BB  8B 86 9C 01 00 00         MOV EAX,dword ptr [ESI + 0x19c]
005163C1  3B C3                     CMP EAX,EBX
005163C3  74 09                     JZ 0x005163ce
005163C5  8B 4E 0C                  MOV ECX,dword ptr [ESI + 0xc]
005163C8  50                        PUSH EAX
005163C9  E8 E2 F2 1C 00            CALL 0x006e56b0
LAB_005163ce:
005163CE  8B 8E D3 01 00 00         MOV ECX,dword ptr [ESI + 0x1d3]
005163D4  51                        PUSH ECX
005163D5  8B CE                     MOV ECX,ESI
005163D7  E8 B8 BD EE FF            CALL 0x00402194
005163DC  8B 55 B8                  MOV EDX,dword ptr [EBP + -0x48]
005163DF  89 15 F8 8D 85 00         MOV dword ptr [0x00858df8],EDX
005163E5  5E                        POP ESI
005163E6  5B                        POP EBX
005163E7  8B E5                     MOV ESP,EBP
005163E9  5D                        POP EBP
005163EA  C3                        RET
LAB_005163eb:
005163EB  8B 45 B8                  MOV EAX,dword ptr [EBP + -0x48]
005163EE  68 0C 3C 7C 00            PUSH 0x7c3c0c
005163F3  68 CC 4C 7A 00            PUSH 0x7a4ccc
005163F8  56                        PUSH ESI
005163F9  53                        PUSH EBX
005163FA  68 6E 04 00 00            PUSH 0x46e
005163FF  68 3C 38 7C 00            PUSH 0x7c383c
00516404  A3 F8 8D 85 00            MOV [0x00858df8],EAX
00516409  E8 C2 70 19 00            CALL 0x006ad4d0
0051640E  83 C4 18                  ADD ESP,0x18
00516411  85 C0                     TEST EAX,EAX
00516413  74 01                     JZ 0x00516416
00516415  CC                        INT3
LAB_00516416:
00516416  68 6E 04 00 00            PUSH 0x46e
0051641B  68 3C 38 7C 00            PUSH 0x7c383c
00516420  53                        PUSH EBX
00516421  56                        PUSH ESI
00516422  E8 19 FA 18 00            CALL 0x006a5e40
00516427  5E                        POP ESI
00516428  5B                        POP EBX
00516429  8B E5                     MOV ESP,EBP
0051642B  5D                        POP EBP
0051642C  C3                        RET
