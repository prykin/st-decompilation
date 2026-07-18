FUN_005941d0:
005941D0  55                        PUSH EBP
005941D1  8B EC                     MOV EBP,ESP
005941D3  83 EC 48                  SUB ESP,0x48
005941D6  A1 F8 8D 85 00            MOV EAX,[0x00858df8]
005941DB  53                        PUSH EBX
005941DC  56                        PUSH ESI
005941DD  89 4D FC                  MOV dword ptr [EBP + -0x4],ECX
005941E0  57                        PUSH EDI
005941E1  8D 55 BC                  LEA EDX,[EBP + -0x44]
005941E4  8D 4D B8                  LEA ECX,[EBP + -0x48]
005941E7  6A 00                     PUSH 0x0
005941E9  52                        PUSH EDX
005941EA  89 45 B8                  MOV dword ptr [EBP + -0x48],EAX
005941ED  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
005941F3  E8 F8 95 19 00            CALL 0x0072d7f0
005941F8  8B F0                     MOV ESI,EAX
005941FA  83 C4 08                  ADD ESP,0x8
005941FD  85 F6                     TEST ESI,ESI
005941FF  0F 85 35 01 00 00         JNZ 0x0059433a
00594205  8B 75 FC                  MOV ESI,dword ptr [EBP + -0x4]
00594208  8B 86 0C 01 00 00         MOV EAX,dword ptr [ESI + 0x10c]
0059420E  85 C0                     TEST EAX,EAX
00594210  74 09                     JZ 0x0059421b
00594212  8B 4E 0C                  MOV ECX,dword ptr [ESI + 0xc]
00594215  50                        PUSH EAX
00594216  E8 95 14 15 00            CALL 0x006e56b0
LAB_0059421b:
0059421B  8D 5E 18                  LEA EBX,[ESI + 0x18]
0059421E  B9 08 00 00 00            MOV ECX,0x8
00594223  33 C0                     XOR EAX,EAX
00594225  8B FB                     MOV EDI,EBX
00594227  C7 86 0C 01 00 00 00 00 00 00  MOV dword ptr [ESI + 0x10c],0x0
00594231  53                        PUSH EBX
00594232  F3 AB                     STOSD.REP ES:EDI
00594234  8D 46 38                  LEA EAX,[ESI + 0x38]
00594237  6A 01                     PUSH 0x1
00594239  6A 03                     PUSH 0x3
0059423B  8B CE                     MOV ECX,ESI
0059423D  C7 46 28 11 00 00 00      MOV dword ptr [ESI + 0x28],0x11
00594244  89 46 2C                  MOV dword ptr [ESI + 0x2c],EAX
00594247  E8 B4 1D 15 00            CALL 0x006e6000
0059424C  B9 08 00 00 00            MOV ECX,0x8
00594251  33 C0                     XOR EAX,EAX
00594253  8B FB                     MOV EDI,EBX
00594255  53                        PUSH EBX
00594256  F3 AB                     STOSD.REP ES:EDI
00594258  8B 4E 08                  MOV ECX,dword ptr [ESI + 0x8]
0059425B  6A 01                     PUSH 0x1
0059425D  89 4E 2C                  MOV dword ptr [ESI + 0x2c],ECX
00594260  6A 03                     PUSH 0x3
00594262  8B CE                     MOV ECX,ESI
00594264  C7 46 28 14 00 00 00      MOV dword ptr [ESI + 0x28],0x14
0059426B  E8 90 1D 15 00            CALL 0x006e6000
00594270  B9 08 00 00 00            MOV ECX,0x8
00594275  33 C0                     XOR EAX,EAX
00594277  8B FB                     MOV EDI,EBX
00594279  53                        PUSH EBX
0059427A  F3 AB                     STOSD.REP ES:EDI
0059427C  6A 01                     PUSH 0x1
0059427E  6A 03                     PUSH 0x3
00594280  8B CE                     MOV ECX,ESI
00594282  C7 46 28 19 00 00 00      MOV dword ptr [ESI + 0x28],0x19
00594289  E8 72 1D 15 00            CALL 0x006e6000
0059428E  B9 08 00 00 00            MOV ECX,0x8
00594293  33 C0                     XOR EAX,EAX
00594295  8B FB                     MOV EDI,EBX
00594297  53                        PUSH EBX
00594298  F3 AB                     STOSD.REP ES:EDI
0059429A  6A 01                     PUSH 0x1
0059429C  6A 03                     PUSH 0x3
0059429E  8B CE                     MOV ECX,ESI
005942A0  C7 46 28 1B 00 00 00      MOV dword ptr [ESI + 0x28],0x1b
005942A7  E8 54 1D 15 00            CALL 0x006e6000
005942AC  8B 86 08 01 00 00         MOV EAX,dword ptr [ESI + 0x108]
005942B2  83 F8 FF                  CMP EAX,-0x1
005942B5  74 0D                     JZ 0x005942c4
005942B7  8B 15 A8 75 80 00         MOV EDX,dword ptr [0x008075a8]
005942BD  50                        PUSH EAX
005942BE  52                        PUSH EDX
005942BF  E8 EC F8 11 00            CALL 0x006b3bb0
LAB_005942c4:
005942C4  8B 8E FC 00 00 00         MOV ECX,dword ptr [ESI + 0xfc]
005942CA  8D 86 FC 00 00 00         LEA EAX,[ESI + 0xfc]
005942D0  85 C9                     TEST ECX,ECX
005942D2  C7 86 08 01 00 00 FF FF FF FF  MOV dword ptr [ESI + 0x108],0xffffffff
005942DC  74 06                     JZ 0x005942e4
005942DE  50                        PUSH EAX
005942DF  E8 7C 6D 11 00            CALL 0x006ab060
LAB_005942e4:
005942E4  8B 8E 00 01 00 00         MOV ECX,dword ptr [ESI + 0x100]
005942EA  8D 86 00 01 00 00         LEA EAX,[ESI + 0x100]
005942F0  85 C9                     TEST ECX,ECX
005942F2  74 06                     JZ 0x005942fa
005942F4  50                        PUSH EAX
005942F5  E8 66 6D 11 00            CALL 0x006ab060
LAB_005942fa:
005942FA  8B 8E 04 01 00 00         MOV ECX,dword ptr [ESI + 0x104]
00594300  8D 86 04 01 00 00         LEA EAX,[ESI + 0x104]
00594306  85 C9                     TEST ECX,ECX
00594308  74 06                     JZ 0x00594310
0059430A  50                        PUSH EAX
0059430B  E8 50 6D 11 00            CALL 0x006ab060
LAB_00594310:
00594310  8B 86 98 00 00 00         MOV EAX,dword ptr [ESI + 0x98]
00594316  85 C0                     TEST EAX,EAX
00594318  74 11                     JZ 0x0059432b
0059431A  81 C6 88 00 00 00         ADD ESI,0x88
00594320  B9 20 76 80 00            MOV ECX,0x807620
00594325  56                        PUSH ESI
00594326  E8 25 F8 14 00            CALL 0x006e3b50
LAB_0059432b:
0059432B  8B 45 B8                  MOV EAX,dword ptr [EBP + -0x48]
0059432E  A3 F8 8D 85 00            MOV [0x00858df8],EAX
00594333  5F                        POP EDI
00594334  5E                        POP ESI
00594335  5B                        POP EBX
00594336  8B E5                     MOV ESP,EBP
00594338  5D                        POP EBP
00594339  C3                        RET
LAB_0059433a:
0059433A  8B 4D B8                  MOV ECX,dword ptr [EBP + -0x48]
0059433D  68 40 BF 7C 00            PUSH 0x7cbf40
00594342  68 CC 4C 7A 00            PUSH 0x7a4ccc
00594347  56                        PUSH ESI
00594348  6A 00                     PUSH 0x0
0059434A  6A 7F                     PUSH 0x7f
0059434C  68 EC BE 7C 00            PUSH 0x7cbeec
00594351  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
00594357  E8 74 91 11 00            CALL 0x006ad4d0
0059435C  83 C4 18                  ADD ESP,0x18
0059435F  85 C0                     TEST EAX,EAX
00594361  74 01                     JZ 0x00594364
00594363  CC                        INT3
LAB_00594364:
00594364  6A 7F                     PUSH 0x7f
00594366  68 EC BE 7C 00            PUSH 0x7cbeec
0059436B  6A 00                     PUSH 0x0
0059436D  56                        PUSH ESI
0059436E  E8 CD 1A 11 00            CALL 0x006a5e40
00594373  5F                        POP EDI
00594374  5E                        POP ESI
00594375  5B                        POP EBX
00594376  8B E5                     MOV ESP,EBP
00594378  5D                        POP EBP
00594379  C3                        RET
