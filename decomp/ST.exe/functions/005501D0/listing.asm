FUN_005501d0:
005501D0  55                        PUSH EBP
005501D1  8B EC                     MOV EBP,ESP
005501D3  83 EC 20                  SUB ESP,0x20
005501D6  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
005501D9  8D 50 1B                  LEA EDX,[EAX + 0x1b]
005501DC  89 50 17                  MOV dword ptr [EAX + 0x17],EDX
005501DF  8A 50 0E                  MOV DL,byte ptr [EAX + 0xe]
005501E2  80 FA 05                  CMP DL,0x5
005501E5  74 20                     JZ 0x00550207
005501E7  80 FA 32                  CMP DL,0x32
005501EA  74 12                     JZ 0x005501fe
005501EC  8B 0D 74 A1 7F 00         MOV ECX,dword ptr [0x007fa174]
005501F2  50                        PUSH EAX
005501F3  E8 C4 4C EB FF            CALL 0x00404ebc
005501F8  8B E5                     MOV ESP,EBP
005501FA  5D                        POP EBP
005501FB  C2 04 00                  RET 0x4
LAB_005501fe:
005501FE  C7 45 F0 00 44 00 00      MOV dword ptr [EBP + -0x10],0x4400
00550205  EB 07                     JMP 0x0055020e
LAB_00550207:
00550207  C7 45 F0 FF 43 00 00      MOV dword ptr [EBP + -0x10],0x43ff
LAB_0055020e:
0055020E  8B 49 1C                  MOV ECX,dword ptr [ECX + 0x1c]
00550211  89 45 F4                  MOV dword ptr [EBP + -0xc],EAX
00550214  8D 55 E0                  LEA EDX,[EBP + -0x20]
00550217  8B 01                     MOV EAX,dword ptr [ECX]
00550219  52                        PUSH EDX
0055021A  FF 50 20                  CALL dword ptr [EAX + 0x20]
0055021D  8B E5                     MOV ESP,EBP
0055021F  5D                        POP EBP
00550220  C2 04 00                  RET 0x4
