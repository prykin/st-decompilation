FUN_007483c3:
007483C3  55                        PUSH EBP
007483C4  8B EC                     MOV EBP,ESP
007483C6  83 EC 10                  SUB ESP,0x10
007483C9  53                        PUSH EBX
007483CA  56                        PUSH ESI
007483CB  57                        PUSH EDI
007483CC  33 C0                     XOR EAX,EAX
007483CE  8D 7D F0                  LEA EDI,[EBP + -0x10]
007483D1  8B 75 0C                  MOV ESI,dword ptr [EBP + 0xc]
007483D4  AB                        STOSD ES:EDI
007483D5  AB                        STOSD ES:EDI
007483D6  83 26 00                  AND dword ptr [ESI],0x0
007483D9  8B D9                     MOV EBX,ECX
007483DB  AB                        STOSD ES:EDI
007483DC  AB                        STOSD ES:EDI
007483DD  8B 7D 08                  MOV EDI,dword ptr [EBP + 0x8]
007483E0  8D 4D F0                  LEA ECX,[EBP + -0x10]
007483E3  51                        PUSH ECX
007483E4  57                        PUSH EDI
007483E5  8B 07                     MOV EAX,dword ptr [EDI]
007483E7  FF 50 14                  CALL dword ptr [EAX + 0x14]
007483EA  83 7D F8 00               CMP dword ptr [EBP + -0x8],0x0
007483EE  75 07                     JNZ 0x007483f7
007483F0  C7 45 F8 01 00 00 00      MOV dword ptr [EBP + -0x8],0x1
LAB_007483f7:
007483F7  8B 07                     MOV EAX,dword ptr [EDI]
007483F9  56                        PUSH ESI
007483FA  57                        PUSH EDI
007483FB  FF 50 0C                  CALL dword ptr [EAX + 0xc]
007483FE  85 C0                     TEST EAX,EAX
00748400  7C 1F                     JL 0x00748421
00748402  8B 03                     MOV EAX,dword ptr [EBX]
00748404  8D 4D F0                  LEA ECX,[EBP + -0x10]
00748407  51                        PUSH ECX
00748408  8B CB                     MOV ECX,EBX
0074840A  FF 36                     PUSH dword ptr [ESI]
0074840C  FF 50 3C                  CALL dword ptr [EAX + 0x3c]
0074840F  85 C0                     TEST EAX,EAX
00748411  7C 0E                     JL 0x00748421
00748413  8B 07                     MOV EAX,dword ptr [EDI]
00748415  6A 00                     PUSH 0x0
00748417  FF 36                     PUSH dword ptr [ESI]
00748419  57                        PUSH EDI
0074841A  FF 50 10                  CALL dword ptr [EAX + 0x10]
0074841D  85 C0                     TEST EAX,EAX
0074841F  7D 43                     JGE 0x00748464
LAB_00748421:
00748421  8B 06                     MOV EAX,dword ptr [ESI]
00748423  85 C0                     TEST EAX,EAX
00748425  74 09                     JZ 0x00748430
00748427  8B 08                     MOV ECX,dword ptr [EAX]
00748429  50                        PUSH EAX
0074842A  FF 51 08                  CALL dword ptr [ECX + 0x8]
0074842D  83 26 00                  AND dword ptr [ESI],0x0
LAB_00748430:
00748430  8B 03                     MOV EAX,dword ptr [EBX]
00748432  56                        PUSH ESI
00748433  8B CB                     MOV ECX,EBX
00748435  FF 50 48                  CALL dword ptr [EAX + 0x48]
00748438  85 C0                     TEST EAX,EAX
0074843A  89 45 0C                  MOV dword ptr [EBP + 0xc],EAX
0074843D  7C 29                     JL 0x00748468
0074843F  8B 03                     MOV EAX,dword ptr [EBX]
00748441  8D 4D F0                  LEA ECX,[EBP + -0x10]
00748444  51                        PUSH ECX
00748445  8B CB                     MOV ECX,EBX
00748447  FF 36                     PUSH dword ptr [ESI]
00748449  FF 50 3C                  CALL dword ptr [EAX + 0x3c]
0074844C  85 C0                     TEST EAX,EAX
0074844E  89 45 0C                  MOV dword ptr [EBP + 0xc],EAX
00748451  7C 15                     JL 0x00748468
00748453  8B 07                     MOV EAX,dword ptr [EDI]
00748455  6A 00                     PUSH 0x0
00748457  FF 36                     PUSH dword ptr [ESI]
00748459  57                        PUSH EDI
0074845A  FF 50 10                  CALL dword ptr [EAX + 0x10]
0074845D  85 C0                     TEST EAX,EAX
0074845F  89 45 0C                  MOV dword ptr [EBP + 0xc],EAX
00748462  7C 04                     JL 0x00748468
LAB_00748464:
00748464  33 C0                     XOR EAX,EAX
00748466  EB 12                     JMP 0x0074847a
LAB_00748468:
00748468  8B 06                     MOV EAX,dword ptr [ESI]
0074846A  85 C0                     TEST EAX,EAX
0074846C  74 09                     JZ 0x00748477
0074846E  8B 08                     MOV ECX,dword ptr [EAX]
00748470  50                        PUSH EAX
00748471  FF 51 08                  CALL dword ptr [ECX + 0x8]
00748474  83 26 00                  AND dword ptr [ESI],0x0
LAB_00748477:
00748477  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
LAB_0074847a:
0074847A  5F                        POP EDI
0074847B  5E                        POP ESI
0074847C  5B                        POP EBX
0074847D  C9                        LEAVE
0074847E  C2 08 00                  RET 0x8
