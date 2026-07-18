FUN_0043e4e0:
0043E4E0  55                        PUSH EBP
0043E4E1  8B EC                     MOV EBP,ESP
0043E4E3  83 EC 54                  SUB ESP,0x54
0043E4E6  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
0043E4E9  53                        PUSH EBX
0043E4EA  0F BE C2                  MOVSX EAX,DL
0043E4ED  56                        PUSH ESI
0043E4EE  57                        PUSH EDI
0043E4EF  8D 34 80                  LEA ESI,[EAX + EAX*0x4]
0043E4F2  52                        PUSH EDX
0043E4F3  8D 34 F0                  LEA ESI,[EAX + ESI*0x8]
0043E4F6  8D 34 70                  LEA ESI,[EAX + ESI*0x2]
0043E4F9  C1 E6 04                  SHL ESI,0x4
0043E4FC  03 F0                     ADD ESI,EAX
0043E4FE  8B 04 75 29 4E 7F 00      MOV EAX,dword ptr [ESI*0x2 + 0x7f4e29]
0043E505  89 45 F0                  MOV dword ptr [EBP + -0x10],EAX
0043E508  8B 40 0C                  MOV EAX,dword ptr [EAX + 0xc]
0043E50B  89 45 F4                  MOV dword ptr [EBP + -0xc],EAX
0043E50E  E8 6B 39 FC FF            CALL 0x00401e7e
0043E513  8B 0D F8 8D 85 00         MOV ECX,dword ptr [0x00858df8]
0043E519  25 FF FF 00 00            AND EAX,0xffff
0043E51E  89 45 F8                  MOV dword ptr [EBP + -0x8],EAX
0043E521  8D 45 B0                  LEA EAX,[EBP + -0x50]
0043E524  8D 55 AC                  LEA EDX,[EBP + -0x54]
0043E527  6A 00                     PUSH 0x0
0043E529  50                        PUSH EAX
0043E52A  89 4D AC                  MOV dword ptr [EBP + -0x54],ECX
0043E52D  89 15 F8 8D 85 00         MOV dword ptr [0x00858df8],EDX
0043E533  E8 B8 F2 2E 00            CALL 0x0072d7f0
0043E538  8B F0                     MOV ESI,EAX
0043E53A  83 C4 08                  ADD ESP,0x8
0043E53D  85 F6                     TEST ESI,ESI
0043E53F  75 63                     JNZ 0x0043e5a4
0043E541  8B 75 F8                  MOV ESI,dword ptr [EBP + -0x8]
0043E544  6A 01                     PUSH 0x1
0043E546  6A 02                     PUSH 0x2
0043E548  56                        PUSH ESI
0043E549  50                        PUSH EAX
0043E54A  E8 41 FD 26 00            CALL 0x006ae290
0043E54F  85 F6                     TEST ESI,ESI
0043E551  8B F8                     MOV EDI,EAX
0043E553  76 3B                     JBE 0x0043e590
0043E555  8B 5D F4                  MOV EBX,dword ptr [EBP + -0xc]
0043E558  33 C0                     XOR EAX,EAX
0043E55A  85 DB                     TEST EBX,EBX
0043E55C  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
0043E55F  7E 2F                     JLE 0x0043e590
0043E561  8B 75 F0                  MOV ESI,dword ptr [EBP + -0x10]
LAB_0043e564:
0043E564  8B 4E 1C                  MOV ECX,dword ptr [ESI + 0x1c]
0043E567  8B 0C 81                  MOV ECX,dword ptr [ECX + EAX*0x4]
0043E56A  85 C9                     TEST ECX,ECX
0043E56C  74 17                     JZ 0x0043e585
0043E56E  8B 11                     MOV EDX,dword ptr [ECX]
0043E570  FF 92 F8 00 00 00         CALL dword ptr [EDX + 0xf8]
0043E576  83 F8 01                  CMP EAX,0x1
0043E579  75 0A                     JNZ 0x0043e585
0043E57B  8D 45 FC                  LEA EAX,[EBP + -0x4]
0043E57E  50                        PUSH EAX
0043E57F  57                        PUSH EDI
0043E580  E8 3B FC 26 00            CALL 0x006ae1c0
LAB_0043e585:
0043E585  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
0043E588  40                        INC EAX
0043E589  3B C3                     CMP EAX,EBX
0043E58B  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
0043E58E  7C D4                     JL 0x0043e564
LAB_0043e590:
0043E590  8B 4D AC                  MOV ECX,dword ptr [EBP + -0x54]
0043E593  8B C7                     MOV EAX,EDI
0043E595  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
0043E59B  5F                        POP EDI
0043E59C  5E                        POP ESI
0043E59D  5B                        POP EBX
0043E59E  8B E5                     MOV ESP,EBP
0043E5A0  5D                        POP EBP
0043E5A1  C2 04 00                  RET 0x4
LAB_0043e5a4:
0043E5A4  8B 55 AC                  MOV EDX,dword ptr [EBP + -0x54]
0043E5A7  68 74 7F 7A 00            PUSH 0x7a7f74
0043E5AC  68 CC 4C 7A 00            PUSH 0x7a4ccc
0043E5B1  56                        PUSH ESI
0043E5B2  6A 00                     PUSH 0x0
0043E5B4  68 8C 1F 00 00            PUSH 0x1f8c
0043E5B9  68 04 60 7A 00            PUSH 0x7a6004
0043E5BE  89 15 F8 8D 85 00         MOV dword ptr [0x00858df8],EDX
0043E5C4  E8 07 EF 26 00            CALL 0x006ad4d0
0043E5C9  83 C4 18                  ADD ESP,0x18
0043E5CC  85 C0                     TEST EAX,EAX
0043E5CE  74 01                     JZ 0x0043e5d1
0043E5D0  CC                        INT3
LAB_0043e5d1:
0043E5D1  68 8D 1F 00 00            PUSH 0x1f8d
0043E5D6  68 04 60 7A 00            PUSH 0x7a6004
0043E5DB  6A 00                     PUSH 0x0
0043E5DD  56                        PUSH ESI
0043E5DE  E8 5D 78 26 00            CALL 0x006a5e40
0043E5E3  5F                        POP EDI
0043E5E4  5E                        POP ESI
0043E5E5  33 C0                     XOR EAX,EAX
0043E5E7  5B                        POP EBX
0043E5E8  8B E5                     MOV ESP,EBP
0043E5EA  5D                        POP EBP
0043E5EB  C2 04 00                  RET 0x4
