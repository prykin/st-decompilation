STPlaySystemC::SendMail:
00550250  55                        PUSH EBP
00550251  8B EC                     MOV EBP,ESP
00550253  83 EC 4C                  SUB ESP,0x4c
00550256  8B 41 3D                  MOV EAX,dword ptr [ECX + 0x3d]
00550259  53                        PUSH EBX
0055025A  56                        PUSH ESI
0055025B  57                        PUSH EDI
0055025C  85 C0                     TEST EAX,EAX
0055025E  89 4D F8                  MOV dword ptr [EBP + -0x8],ECX
00550261  0F 84 C7 00 00 00         JZ 0x0055032e
00550267  66 83 78 05 00            CMP word ptr [EAX + 0x5],0x0
0055026C  0F 84 BC 00 00 00         JZ 0x0055032e
00550272  A1 F8 8D 85 00            MOV EAX,[0x00858df8]
00550277  8D 55 B8                  LEA EDX,[EBP + -0x48]
0055027A  8D 4D B4                  LEA ECX,[EBP + -0x4c]
0055027D  6A 00                     PUSH 0x0
0055027F  52                        PUSH EDX
00550280  89 45 B4                  MOV dword ptr [EBP + -0x4c],EAX
00550283  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
00550289  E8 62 D5 1D 00            CALL 0x0072d7f0
0055028E  8B F0                     MOV ESI,EAX
00550290  83 C4 08                  ADD ESP,0x8
00550293  85 F6                     TEST ESI,ESI
00550295  75 58                     JNZ 0x005502ef
00550297  8B 5D F8                  MOV EBX,dword ptr [EBP + -0x8]
0055029A  C7 45 FC 00 00 00 00      MOV dword ptr [EBP + -0x4],0x0
005502A1  8B 43 3D                  MOV EAX,dword ptr [EBX + 0x3d]
005502A4  66 83 78 05 00            CMP word ptr [EAX + 0x5],0x0
005502A9  8D 70 07                  LEA ESI,[EAX + 0x7]
005502AC  76 28                     JBE 0x005502d6
LAB_005502ae:
005502AE  8B 7E 13                  MOV EDI,dword ptr [ESI + 0x13]
005502B1  8B 4E 0F                  MOV ECX,dword ptr [ESI + 0xf]
005502B4  03 F9                     ADD EDI,ECX
005502B6  56                        PUSH ESI
005502B7  8B CB                     MOV ECX,EBX
005502B9  E8 1D 41 EB FF            CALL 0x004043db
005502BE  8B 4B 3D                  MOV ECX,dword ptr [EBX + 0x3d]
005502C1  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
005502C4  33 D2                     XOR EDX,EDX
005502C6  40                        INC EAX
005502C7  66 8B 51 05               MOV DX,word ptr [ECX + 0x5]
005502CB  8D 74 3E 1B               LEA ESI,[ESI + EDI*0x1 + 0x1b]
005502CF  3B C2                     CMP EAX,EDX
005502D1  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
005502D4  72 D8                     JC 0x005502ae
LAB_005502d6:
005502D6  8B 43 3D                  MOV EAX,dword ptr [EBX + 0x3d]
005502D9  66 C7 40 05 00 00         MOV word ptr [EAX + 0x5],0x0
005502DF  8B 4D B4                  MOV ECX,dword ptr [EBP + -0x4c]
005502E2  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
005502E8  5F                        POP EDI
005502E9  5E                        POP ESI
005502EA  5B                        POP EBX
005502EB  8B E5                     MOV ESP,EBP
005502ED  5D                        POP EBP
005502EE  C3                        RET
LAB_005502ef:
005502EF  8B 55 B4                  MOV EDX,dword ptr [EBP + -0x4c]
005502F2  68 08 86 7C 00            PUSH 0x7c8608
005502F7  68 CC 4C 7A 00            PUSH 0x7a4ccc
005502FC  56                        PUSH ESI
005502FD  6A 00                     PUSH 0x0
005502FF  68 19 08 00 00            PUSH 0x819
00550304  68 30 84 7C 00            PUSH 0x7c8430
00550309  89 15 F8 8D 85 00         MOV dword ptr [0x00858df8],EDX
0055030F  E8 BC D1 15 00            CALL 0x006ad4d0
00550314  83 C4 18                  ADD ESP,0x18
00550317  85 C0                     TEST EAX,EAX
00550319  74 01                     JZ 0x0055031c
0055031B  CC                        INT3
LAB_0055031c:
0055031C  68 1A 08 00 00            PUSH 0x81a
00550321  68 30 84 7C 00            PUSH 0x7c8430
00550326  6A 00                     PUSH 0x0
00550328  56                        PUSH ESI
00550329  E8 12 5B 15 00            CALL 0x006a5e40
LAB_0055032e:
0055032E  5F                        POP EDI
0055032F  5E                        POP ESI
00550330  5B                        POP EBX
00550331  8B E5                     MOV ESP,EBP
00550333  5D                        POP EBP
00550334  C3                        RET
