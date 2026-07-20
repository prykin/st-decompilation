STJellyGunC::sub_005844E0:
005844E0  55                        PUSH EBP
005844E1  8B EC                     MOV EBP,ESP
005844E3  83 EC 0C                  SUB ESP,0xc
005844E6  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
005844E9  33 C0                     XOR EAX,EAX
005844EB  89 45 F4                  MOV dword ptr [EBP + -0xc],EAX
005844EE  89 45 F8                  MOV dword ptr [EBP + -0x8],EAX
005844F1  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
005844F4  B8 79 19 8C 02            MOV EAX,0x28c1979
005844F9  85 D2                     TEST EDX,EDX
005844FB  7C 10                     JL 0x0058450d
005844FD  F7 EA                     IMUL EDX
005844FF  D1 FA                     SAR EDX,0x1
00584501  8B C2                     MOV EAX,EDX
00584503  C1 E8 1F                  SHR EAX,0x1f
00584506  03 D0                     ADD EDX,EAX
00584508  0F BF D2                  MOVSX EDX,DX
0058450B  EB 0F                     JMP 0x0058451c
LAB_0058450d:
0058450D  F7 EA                     IMUL EDX
0058450F  D1 FA                     SAR EDX,0x1
00584511  8B C2                     MOV EAX,EDX
00584513  C1 E8 1F                  SHR EAX,0x1f
00584516  03 D0                     ADD EDX,EAX
00584518  0F BF D2                  MOVSX EDX,DX
0058451B  4A                        DEC EDX
LAB_0058451c:
0058451C  89 55 F4                  MOV dword ptr [EBP + -0xc],EDX
0058451F  8B 55 0C                  MOV EDX,dword ptr [EBP + 0xc]
00584522  85 D2                     TEST EDX,EDX
00584524  B8 79 19 8C 02            MOV EAX,0x28c1979
00584529  7C 10                     JL 0x0058453b
0058452B  F7 EA                     IMUL EDX
0058452D  D1 FA                     SAR EDX,0x1
0058452F  8B C2                     MOV EAX,EDX
00584531  C1 E8 1F                  SHR EAX,0x1f
00584534  03 D0                     ADD EDX,EAX
00584536  0F BF D2                  MOVSX EDX,DX
00584539  EB 0F                     JMP 0x0058454a
LAB_0058453b:
0058453B  F7 EA                     IMUL EDX
0058453D  D1 FA                     SAR EDX,0x1
0058453F  8B C2                     MOV EAX,EDX
00584541  C1 E8 1F                  SHR EAX,0x1f
00584544  03 D0                     ADD EDX,EAX
00584546  0F BF D2                  MOVSX EDX,DX
00584549  4A                        DEC EDX
LAB_0058454a:
0058454A  8B 41 18                  MOV EAX,dword ptr [ECX + 0x18]
0058454D  89 55 F8                  MOV dword ptr [EBP + -0x8],EDX
00584550  8B 55 10                  MOV EDX,dword ptr [EBP + 0x10]
00584553  8D 4D F4                  LEA ECX,[EBP + -0xc]
00584556  6A 00                     PUSH 0x0
00584558  51                        PUSH ECX
00584559  52                        PUSH EDX
0058455A  6A 00                     PUSH 0x0
0058455C  6A 02                     PUSH 0x2
0058455E  B9 58 76 80 00            MOV ECX,0x807658
00584563  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
00584566  E8 6D 06 E8 FF            CALL 0x00404bd8
0058456B  8B E5                     MOV ESP,EBP
0058456D  5D                        POP EBP
0058456E  C2 0C 00                  RET 0xc
