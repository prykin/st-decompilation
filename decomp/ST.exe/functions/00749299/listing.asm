FUN_00749299:
00749299  55                        PUSH EBP
0074929A  8B EC                     MOV EBP,ESP
0074929C  53                        PUSH EBX
0074929D  8B 5D 0C                  MOV EBX,dword ptr [EBP + 0xc]
007492A0  85 DB                     TEST EBX,EBX
007492A2  75 07                     JNZ 0x007492ab
007492A4  B8 03 40 00 80            MOV EAX,0x80004003
007492A9  EB 6D                     JMP 0x00749318
LAB_007492ab:
007492AB  83 65 0C 00               AND dword ptr [EBP + 0xc],0x0
007492AF  57                        PUSH EDI
007492B0  56                        PUSH ESI
007492B1  8B 75 08                  MOV ESI,dword ptr [EBP + 0x8]
007492B4  8D 7E F4                  LEA EDI,[ESI + -0xc]
007492B7  8D 46 04                  LEA EAX,[ESI + 0x4]
007492BA  F7 DF                     NEG EDI
007492BC  1B FF                     SBB EDI,EDI
007492BE  23 F8                     AND EDI,EAX
007492C0  57                        PUSH EDI
007492C1  FF 15 8C BB 85 00         CALL dword ptr [0x0085bb8c]
007492C7  8B 46 1C                  MOV EAX,dword ptr [ESI + 0x1c]
007492CA  89 43 1C                  MOV dword ptr [EBX + 0x1c],EAX
007492CD  FF 46 20                  INC dword ptr [ESI + 0x20]
007492D0  89 5E 1C                  MOV dword ptr [ESI + 0x1c],EBX
007492D3  33 DB                     XOR EBX,EBX
007492D5  39 5E 28                  CMP dword ptr [ESI + 0x28],EBX
007492D8  74 08                     JZ 0x007492e2
007492DA  8D 4E F4                  LEA ECX,[ESI + -0xc]
007492DD  E8 3B 00 00 00            CALL 0x0074931d
LAB_007492e2:
007492E2  39 5E 48                  CMP dword ptr [ESI + 0x48],EBX
007492E5  8B 46 20                  MOV EAX,dword ptr [ESI + 0x20]
007492E8  74 18                     JZ 0x00749302
007492EA  3B 46 30                  CMP EAX,dword ptr [ESI + 0x30]
007492ED  75 13                     JNZ 0x00749302
007492EF  8B 46 F4                  MOV EAX,dword ptr [ESI + -0xc]
007492F2  8D 4E F4                  LEA ECX,[ESI + -0xc]
007492F5  FF 50 10                  CALL dword ptr [EAX + 0x10]
007492F8  89 5E 48                  MOV dword ptr [ESI + 0x48],EBX
007492FB  C7 45 0C 01 00 00 00      MOV dword ptr [EBP + 0xc],0x1
LAB_00749302:
00749302  57                        PUSH EDI
00749303  FF 15 90 BB 85 00         CALL dword ptr [0x0085bb90]
00749309  39 5D 0C                  CMP dword ptr [EBP + 0xc],EBX
0074930C  74 06                     JZ 0x00749314
0074930E  8B 06                     MOV EAX,dword ptr [ESI]
00749310  56                        PUSH ESI
00749311  FF 50 08                  CALL dword ptr [EAX + 0x8]
LAB_00749314:
00749314  5E                        POP ESI
00749315  33 C0                     XOR EAX,EAX
00749317  5F                        POP EDI
LAB_00749318:
00749318  5B                        POP EBX
00749319  5D                        POP EBP
0074931A  C2 08 00                  RET 0x8
