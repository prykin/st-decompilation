FUN_006b66a0:
006B66A0  55                        PUSH EBP
006B66A1  8B EC                     MOV EBP,ESP
006B66A3  53                        PUSH EBX
006B66A4  56                        PUSH ESI
006B66A5  8B 75 08                  MOV ESI,dword ptr [EBP + 0x8]
006B66A8  8D 55 08                  LEA EDX,[EBP + 0x8]
006B66AB  57                        PUSH EDI
006B66AC  52                        PUSH EDX
006B66AD  8B 06                     MOV EAX,dword ptr [ESI]
006B66AF  6A 00                     PUSH 0x0
006B66B1  50                        PUSH EAX
006B66B2  8B 08                     MOV ECX,dword ptr [EAX]
006B66B4  FF 51 58                  CALL dword ptr [ECX + 0x58]
006B66B7  3D 1E 00 77 88            CMP EAX,0x8877001e
006B66BC  74 13                     JZ 0x006b66d1
006B66BE  85 C0                     TEST EAX,EAX
006B66C0  75 7D                     JNZ 0x006b673f
006B66C2  B8 03 FF FF FF            MOV EAX,0xffffff03
006B66C7  8D 65 F4                  LEA ESP,[EBP + -0xc]
006B66CA  5F                        POP EDI
006B66CB  5E                        POP ESI
006B66CC  5B                        POP EBX
006B66CD  5D                        POP EBP
006B66CE  C2 04 00                  RET 0x4
LAB_006b66d1:
006B66D1  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
006B66D4  83 C0 03                  ADD EAX,0x3
006B66D7  24 FC                     AND AL,0xfc
006B66D9  E8 62 73 07 00            CALL 0x0072da40
006B66DE  8B FC                     MOV EDI,ESP
006B66E0  85 FF                     TEST EDI,EDI
006B66E2  75 0F                     JNZ 0x006b66f3
006B66E4  B8 FE FF FF FF            MOV EAX,0xfffffffe
006B66E9  8D 65 F4                  LEA ESP,[EBP + -0xc]
006B66EC  5F                        POP EDI
006B66ED  5E                        POP ESI
006B66EE  5B                        POP EBX
006B66EF  5D                        POP EBP
006B66F0  C2 04 00                  RET 0x4
LAB_006b66f3:
006B66F3  8B 06                     MOV EAX,dword ptr [ESI]
006B66F5  8D 55 08                  LEA EDX,[EBP + 0x8]
006B66F8  52                        PUSH EDX
006B66F9  57                        PUSH EDI
006B66FA  8B 08                     MOV ECX,dword ptr [EAX]
006B66FC  50                        PUSH EAX
006B66FD  FF 51 58                  CALL dword ptr [ECX + 0x58]
006B6700  8B D8                     MOV EBX,EAX
006B6702  85 DB                     TEST EBX,EBX
006B6704  75 37                     JNZ 0x006b673d
006B6706  8B 47 28                  MOV EAX,dword ptr [EDI + 0x28]
006B6709  8D 4F 08                  LEA ECX,[EDI + 0x8]
006B670C  89 46 3C                  MOV dword ptr [ESI + 0x3c],EAX
006B670F  8D 56 18                  LEA EDX,[ESI + 0x18]
006B6712  8B 01                     MOV EAX,dword ptr [ECX]
006B6714  89 02                     MOV dword ptr [EDX],EAX
006B6716  8B 41 04                  MOV EAX,dword ptr [ECX + 0x4]
006B6719  89 42 04                  MOV dword ptr [EDX + 0x4],EAX
006B671C  8B 41 08                  MOV EAX,dword ptr [ECX + 0x8]
006B671F  89 42 08                  MOV dword ptr [EDX + 0x8],EAX
006B6722  8B 49 0C                  MOV ECX,dword ptr [ECX + 0xc]
006B6725  89 4A 0C                  MOV dword ptr [EDX + 0xc],ECX
006B6728  8B 56 30                  MOV EDX,dword ptr [ESI + 0x30]
006B672B  52                        PUSH EDX
006B672C  E8 5F F7 FE FF            CALL 0x006a5e90
006B6731  8B 47 30                  MOV EAX,dword ptr [EDI + 0x30]
006B6734  50                        PUSH EAX
006B6735  E8 76 E2 00 00            CALL 0x006c49b0
006B673A  89 46 30                  MOV dword ptr [ESI + 0x30],EAX
LAB_006b673d:
006B673D  8B C3                     MOV EAX,EBX
LAB_006b673f:
006B673F  8D 65 F4                  LEA ESP,[EBP + -0xc]
006B6742  5F                        POP EDI
006B6743  5E                        POP ESI
006B6744  5B                        POP EBX
006B6745  5D                        POP EBP
006B6746  C2 04 00                  RET 0x4
