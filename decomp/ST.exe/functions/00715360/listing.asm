FUN_00715360:
00715360  55                        PUSH EBP
00715361  8B EC                     MOV EBP,ESP
00715363  83 EC 68                  SUB ESP,0x68
00715366  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
00715369  53                        PUSH EBX
0071536A  56                        PUSH ESI
0071536B  57                        PUSH EDI
0071536C  85 C0                     TEST EAX,EAX
0071536E  C7 45 FC 00 00 00 00      MOV dword ptr [EBP + -0x4],0x0
00715375  75 09                     JNZ 0x00715380
00715377  33 C0                     XOR EAX,EAX
00715379  5F                        POP EDI
0071537A  5E                        POP ESI
0071537B  5B                        POP EBX
0071537C  8B E5                     MOV ESP,EBP
0071537E  5D                        POP EBP
0071537F  C3                        RET
LAB_00715380:
00715380  A1 F8 8D 85 00            MOV EAX,[0x00858df8]
00715385  8D 55 9C                  LEA EDX,[EBP + -0x64]
00715388  8D 4D 98                  LEA ECX,[EBP + -0x68]
0071538B  6A 00                     PUSH 0x0
0071538D  52                        PUSH EDX
0071538E  89 45 98                  MOV dword ptr [EBP + -0x68],EAX
00715391  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
00715397  E8 54 84 01 00            CALL 0x0072d7f0
0071539C  8B F0                     MOV ESI,EAX
0071539E  83 C4 08                  ADD ESP,0x8
007153A1  85 F6                     TEST ESI,ESI
007153A3  0F 85 0D 01 00 00         JNZ 0x007154b6
007153A9  8B 5D 18                  MOV EBX,dword ptr [EBP + 0x18]
007153AC  8B 75 14                  MOV ESI,dword ptr [EBP + 0x14]
007153AF  83 FB 16                  CMP EBX,0x16
007153B2  0F 8C B1 00 00 00         JL 0x00715469
007153B8  85 F6                     TEST ESI,ESI
007153BA  0F 84 A9 00 00 00         JZ 0x00715469
007153C0  8B 45 1C                  MOV EAX,dword ptr [EBP + 0x1c]
007153C3  85 C0                     TEST EAX,EAX
007153C5  74 36                     JZ 0x007153fd
007153C7  8D 3C 1B                  LEA EDI,[EBX + EBX*0x1]
007153CA  8D 47 09                  LEA EAX,[EDI + 0x9]
007153CD  50                        PUSH EAX
007153CE  E8 3D 58 F9 FF            CALL 0x006aac10
007153D3  8A 4D 10                  MOV CL,byte ptr [EBP + 0x10]
007153D6  8B 55 20                  MOV EDX,dword ptr [EBP + 0x20]
007153D9  8B F0                     MOV ESI,EAX
007153DB  80 C1 80                  ADD CL,0x80
007153DE  89 75 FC                  MOV dword ptr [EBP + -0x4],ESI
007153E1  83 C0 09                  ADD EAX,0x9
007153E4  88 0E                     MOV byte ptr [ESI],CL
007153E6  89 50 F8                  MOV dword ptr [EAX + -0x8],EDX
007153E9  89 58 FC                  MOV dword ptr [EAX + -0x4],EBX
007153EC  57                        PUSH EDI
007153ED  50                        PUSH EAX
007153EE  8B 45 14                  MOV EAX,dword ptr [EBP + 0x14]
007153F1  53                        PUSH EBX
007153F2  50                        PUSH EAX
007153F3  E8 48 BD 03 00            CALL 0x00751140
007153F8  8D 70 09                  LEA ESI,[EAX + 0x9]
007153FB  EB 39                     JMP 0x00715436
LAB_007153fd:
007153FD  8D 73 05                  LEA ESI,[EBX + 0x5]
00715400  56                        PUSH ESI
00715401  89 75 F8                  MOV dword ptr [EBP + -0x8],ESI
00715404  E8 07 58 F9 FF            CALL 0x006aac10
00715409  8A 4D 10                  MOV CL,byte ptr [EBP + 0x10]
0071540C  8B 55 20                  MOV EDX,dword ptr [EBP + 0x20]
0071540F  8B F8                     MOV EDI,EAX
00715411  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
00715414  88 08                     MOV byte ptr [EAX],CL
00715416  85 DB                     TEST EBX,EBX
00715418  89 57 01                  MOV dword ptr [EDI + 0x1],EDX
0071541B  7E 19                     JLE 0x00715436
0071541D  8B 75 14                  MOV ESI,dword ptr [EBP + 0x14]
00715420  8B CB                     MOV ECX,EBX
00715422  8B C1                     MOV EAX,ECX
00715424  83 C7 05                  ADD EDI,0x5
00715427  C1 E9 02                  SHR ECX,0x2
0071542A  F3 A5                     MOVSD.REP ES:EDI,ESI
0071542C  8B C8                     MOV ECX,EAX
0071542E  83 E1 03                  AND ECX,0x3
00715431  F3 A4                     MOVSB.REP ES:EDI,ESI
00715433  8B 75 F8                  MOV ESI,dword ptr [EBP + -0x8]
LAB_00715436:
00715436  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
00715439  8B 55 0C                  MOV EDX,dword ptr [EBP + 0xc]
0071543C  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
0071543F  56                        PUSH ESI
00715440  51                        PUSH ECX
00715441  52                        PUSH EDX
00715442  50                        PUSH EAX
00715443  E8 08 22 FA FF            CALL 0x006b7650
00715448  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
0071544B  85 C0                     TEST EAX,EAX
0071544D  74 56                     JZ 0x007154a5
0071544F  8D 4D FC                  LEA ECX,[EBP + -0x4]
00715452  51                        PUSH ECX
00715453  E8 08 5C F9 FF            CALL 0x006ab060
00715458  8B 45 98                  MOV EAX,dword ptr [EBP + -0x68]
0071545B  A3 F8 8D 85 00            MOV [0x00858df8],EAX
00715460  33 C0                     XOR EAX,EAX
00715462  5F                        POP EDI
00715463  5E                        POP ESI
00715464  5B                        POP EBX
00715465  8B E5                     MOV ESP,EBP
00715467  5D                        POP EBP
00715468  C3                        RET
LAB_00715469:
00715469  8A 55 10                  MOV DL,byte ptr [EBP + 0x10]
0071546C  8B 45 20                  MOV EAX,dword ptr [EBP + 0x20]
0071546F  85 DB                     TEST EBX,EBX
00715471  88 55 DC                  MOV byte ptr [EBP + -0x24],DL
00715474  89 45 DD                  MOV dword ptr [EBP + -0x23],EAX
00715477  7E 17                     JLE 0x00715490
00715479  85 F6                     TEST ESI,ESI
0071547B  74 13                     JZ 0x00715490
0071547D  8B CB                     MOV ECX,EBX
0071547F  8D 7D E1                  LEA EDI,[EBP + -0x1f]
00715482  8B D1                     MOV EDX,ECX
00715484  C1 E9 02                  SHR ECX,0x2
00715487  F3 A5                     MOVSD.REP ES:EDI,ESI
00715489  8B CA                     MOV ECX,EDX
0071548B  83 E1 03                  AND ECX,0x3
0071548E  F3 A4                     MOVSB.REP ES:EDI,ESI
LAB_00715490:
00715490  8B 4D 0C                  MOV ECX,dword ptr [EBP + 0xc]
00715493  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
00715496  8D 43 05                  LEA EAX,[EBX + 0x5]
00715499  50                        PUSH EAX
0071549A  8D 45 DC                  LEA EAX,[EBP + -0x24]
0071549D  50                        PUSH EAX
0071549E  51                        PUSH ECX
0071549F  52                        PUSH EDX
007154A0  E8 AB 21 FA FF            CALL 0x006b7650
LAB_007154a5:
007154A5  8B 45 98                  MOV EAX,dword ptr [EBP + -0x68]
007154A8  A3 F8 8D 85 00            MOV [0x00858df8],EAX
007154AD  33 C0                     XOR EAX,EAX
007154AF  5F                        POP EDI
007154B0  5E                        POP ESI
007154B1  5B                        POP EBX
007154B2  8B E5                     MOV ESP,EBP
007154B4  5D                        POP EBP
007154B5  C3                        RET
LAB_007154b6:
007154B6  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
007154B9  8B 4D 98                  MOV ECX,dword ptr [EBP + -0x68]
007154BC  85 C0                     TEST EAX,EAX
007154BE  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
007154C4  74 09                     JZ 0x007154cf
007154C6  8D 55 FC                  LEA EDX,[EBP + -0x4]
007154C9  52                        PUSH EDX
007154CA  E8 91 5B F9 FF            CALL 0x006ab060
LAB_007154cf:
007154CF  8B C6                     MOV EAX,ESI
007154D1  5F                        POP EDI
007154D2  5E                        POP ESI
007154D3  5B                        POP EBX
007154D4  8B E5                     MOV ESP,EBP
007154D6  5D                        POP EBP
007154D7  C3                        RET
