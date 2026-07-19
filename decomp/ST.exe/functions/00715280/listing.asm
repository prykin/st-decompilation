mfDarGetNum:
00715280  55                        PUSH EBP
00715281  8B EC                     MOV EBP,ESP
00715283  83 EC 50                  SUB ESP,0x50
00715286  A1 F8 8D 85 00            MOV EAX,[0x00858df8]
0071528B  56                        PUSH ESI
0071528C  8D 55 B4                  LEA EDX,[EBP + -0x4c]
0071528F  8D 4D B0                  LEA ECX,[EBP + -0x50]
00715292  6A 00                     PUSH 0x0
00715294  52                        PUSH EDX
00715295  89 45 B0                  MOV dword ptr [EBP + -0x50],EAX
00715298  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
0071529E  E8 4D 85 01 00            CALL 0x0072d7f0
007152A3  8B F0                     MOV ESI,EAX
007152A5  83 C4 08                  ADD ESP,0x8
007152A8  85 F6                     TEST ESI,ESI
007152AA  75 3E                     JNZ 0x007152ea
007152AC  8B 75 08                  MOV ESI,dword ptr [EBP + 0x8]
007152AF  85 F6                     TEST ESI,ESI
007152B1  75 14                     JNZ 0x007152c7
007152B3  A1 7C D7 7E 00            MOV EAX,[0x007ed77c]
007152B8  6A 5B                     PUSH 0x5b
007152BA  68 FC 03 7F 00            PUSH 0x7f03fc
007152BF  50                        PUSH EAX
007152C0  6A CC                     PUSH -0x34
007152C2  E8 79 0B F9 FF            CALL 0x006a5e40
LAB_007152c7:
007152C7  8B 55 0C                  MOV EDX,dword ptr [EBP + 0xc]
007152CA  8D 4D F4                  LEA ECX,[EBP + -0xc]
007152CD  6A 01                     PUSH 0x1
007152CF  51                        PUSH ECX
007152D0  52                        PUSH EDX
007152D1  6A 14                     PUSH 0x14
007152D3  8B CE                     MOV ECX,ESI
007152D5  E8 36 D0 FD FF            CALL 0x006f2310
007152DA  8B 45 B0                  MOV EAX,dword ptr [EBP + -0x50]
007152DD  A3 F8 8D 85 00            MOV [0x00858df8],EAX
007152E2  8B 45 F4                  MOV EAX,dword ptr [EBP + -0xc]
007152E5  5E                        POP ESI
007152E6  8B E5                     MOV ESP,EBP
007152E8  5D                        POP EBP
007152E9  C3                        RET
LAB_007152ea:
007152EA  8B 4D B0                  MOV ECX,dword ptr [EBP + -0x50]
007152ED  68 20 04 7F 00            PUSH 0x7f0420
007152F2  68 CC 4C 7A 00            PUSH 0x7a4ccc
007152F7  56                        PUSH ESI
007152F8  6A 00                     PUSH 0x0
007152FA  6A 60                     PUSH 0x60
007152FC  68 FC 03 7F 00            PUSH 0x7f03fc
00715301  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
00715307  E8 C4 81 F9 FF            CALL 0x006ad4d0
0071530C  83 C4 18                  ADD ESP,0x18
0071530F  85 C0                     TEST EAX,EAX
00715311  74 01                     JZ 0x00715314
00715313  CC                        INT3
LAB_00715314:
00715314  83 FE FC                  CMP ESI,-0x4
00715317  75 20                     JNZ 0x00715339
00715319  8B 45 10                  MOV EAX,dword ptr [EBP + 0x10]
0071531C  85 C0                     TEST EAX,EAX
0071531E  74 0F                     JZ 0x0071532f
00715320  6A 63                     PUSH 0x63
00715322  68 FC 03 7F 00            PUSH 0x7f03fc
00715327  6A 00                     PUSH 0x0
00715329  56                        PUSH ESI
0071532A  E8 11 0B F9 FF            CALL 0x006a5e40
LAB_0071532f:
0071532F  B8 FC FF FF FF            MOV EAX,0xfffffffc
00715334  5E                        POP ESI
00715335  8B E5                     MOV ESP,EBP
00715337  5D                        POP EBP
00715338  C3                        RET
LAB_00715339:
00715339  6A 67                     PUSH 0x67
0071533B  68 FC 03 7F 00            PUSH 0x7f03fc
00715340  6A 00                     PUSH 0x0
00715342  56                        PUSH ESI
00715343  E8 F8 0A F9 FF            CALL 0x006a5e40
00715348  85 F6                     TEST ESI,ESI
0071534A  7D 07                     JGE 0x00715353
0071534C  8B C6                     MOV EAX,ESI
0071534E  5E                        POP ESI
0071534F  8B E5                     MOV ESP,EBP
00715351  5D                        POP EBP
00715352  C3                        RET
LAB_00715353:
00715353  83 C8 FF                  OR EAX,0xffffffff
00715356  5E                        POP ESI
00715357  8B E5                     MOV ESP,EBP
00715359  5D                        POP EBP
0071535A  C3                        RET
