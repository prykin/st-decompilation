FUN_00568780:
00568780  55                        PUSH EBP
00568781  8B EC                     MOV EBP,ESP
00568783  83 EC 4C                  SUB ESP,0x4c
00568786  8B 81 8B 0F 00 00         MOV EAX,dword ptr [ECX + 0xf8b]
0056878C  56                        PUSH ESI
0056878D  85 C0                     TEST EAX,EAX
0056878F  57                        PUSH EDI
00568790  C7 45 FC 00 00 00 00      MOV dword ptr [EBP + -0x4],0x0
00568797  75 0A                     JNZ 0x005687a3
00568799  33 C0                     XOR EAX,EAX
0056879B  5F                        POP EDI
0056879C  5E                        POP ESI
0056879D  8B E5                     MOV ESP,EBP
0056879F  5D                        POP EBP
005687A0  C2 08 00                  RET 0x8
LAB_005687a3:
005687A3  A1 F8 8D 85 00            MOV EAX,[0x00858df8]
005687A8  8D 55 B8                  LEA EDX,[EBP + -0x48]
005687AB  8D 4D B4                  LEA ECX,[EBP + -0x4c]
005687AE  6A 00                     PUSH 0x0
005687B0  52                        PUSH EDX
005687B1  89 45 B4                  MOV dword ptr [EBP + -0x4c],EAX
005687B4  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
005687BA  E8 31 50 1C 00            CALL 0x0072d7f0
005687BF  83 C4 08                  ADD ESP,0x8
005687C2  85 C0                     TEST EAX,EAX
005687C4  75 3D                     JNZ 0x00568803
005687C6  8B 75 08                  MOV ESI,dword ptr [EBP + 0x8]
005687C9  8B 7D 0C                  MOV EDI,dword ptr [EBP + 0xc]
005687CC  3B F7                     CMP ESI,EDI
005687CE  7F 1F                     JG 0x005687ef
LAB_005687d0:
005687D0  8D 45 F8                  LEA EAX,[EBP + -0x8]
005687D3  6A 00                     PUSH 0x0
005687D5  50                        PUSH EAX
005687D6  56                        PUSH ESI
005687D7  E8 24 97 15 00            CALL 0x006c1f00
005687DC  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
005687DF  85 C0                     TEST EAX,EAX
005687E1  75 07                     JNZ 0x005687ea
005687E3  C7 45 FC 01 00 00 00      MOV dword ptr [EBP + -0x4],0x1
LAB_005687ea:
005687EA  46                        INC ESI
005687EB  3B F7                     CMP ESI,EDI
005687ED  7E E1                     JLE 0x005687d0
LAB_005687ef:
005687EF  8B 4D B4                  MOV ECX,dword ptr [EBP + -0x4c]
005687F2  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
005687F5  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
005687FB  5F                        POP EDI
005687FC  5E                        POP ESI
005687FD  8B E5                     MOV ESP,EBP
005687FF  5D                        POP EBP
00568800  C2 08 00                  RET 0x8
LAB_00568803:
00568803  8B 55 B4                  MOV EDX,dword ptr [EBP + -0x4c]
00568806  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
00568809  5F                        POP EDI
0056880A  89 15 F8 8D 85 00         MOV dword ptr [0x00858df8],EDX
00568810  5E                        POP ESI
00568811  8B E5                     MOV ESP,EBP
00568813  5D                        POP EBP
00568814  C2 08 00                  RET 0x8
