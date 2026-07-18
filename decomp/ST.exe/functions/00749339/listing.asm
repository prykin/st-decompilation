FUN_00749339:
00749339  53                        PUSH EBX
0074933A  56                        PUSH ESI
0074933B  57                        PUSH EDI
0074933C  8B 7C 24 10               MOV EDI,dword ptr [ESP + 0x10]
00749340  8D 5F F4                  LEA EBX,[EDI + -0xc]
00749343  8D 47 04                  LEA EAX,[EDI + 0x4]
00749346  8B F3                     MOV ESI,EBX
00749348  F7 DE                     NEG ESI
0074934A  1B F6                     SBB ESI,ESI
0074934C  23 F0                     AND ESI,EAX
0074934E  56                        PUSH ESI
0074934F  FF 15 8C BB 85 00         CALL dword ptr [0x0085bb8c]
00749355  83 7F 44 00               CMP dword ptr [EDI + 0x44],0x0
00749359  75 35                     JNZ 0x00749390
0074935B  C7 47 44 01 00 00 00      MOV dword ptr [EDI + 0x44],0x1
00749362  83 7F 48 00               CMP dword ptr [EDI + 0x48],0x0
00749366  74 06                     JZ 0x0074936e
00749368  83 67 48 00               AND dword ptr [EDI + 0x48],0x0
0074936C  EB 22                     JMP 0x00749390
LAB_0074936e:
0074936E  8B 03                     MOV EAX,dword ptr [EBX]
00749370  8B CB                     MOV ECX,EBX
00749372  FF 50 14                  CALL dword ptr [EAX + 0x14]
00749375  8B D8                     MOV EBX,EAX
00749377  85 DB                     TEST EBX,EBX
00749379  7D 0F                     JGE 0x0074938a
0074937B  83 67 44 00               AND dword ptr [EDI + 0x44],0x0
0074937F  56                        PUSH ESI
00749380  FF 15 90 BB 85 00         CALL dword ptr [0x0085bb90]
00749386  8B C3                     MOV EAX,EBX
00749388  EB 0F                     JMP 0x00749399
LAB_0074938a:
0074938A  8B 07                     MOV EAX,dword ptr [EDI]
0074938C  57                        PUSH EDI
0074938D  FF 50 04                  CALL dword ptr [EAX + 0x4]
LAB_00749390:
00749390  56                        PUSH ESI
00749391  FF 15 90 BB 85 00         CALL dword ptr [0x0085bb90]
00749397  33 C0                     XOR EAX,EAX
LAB_00749399:
00749399  5F                        POP EDI
0074939A  5E                        POP ESI
0074939B  5B                        POP EBX
0074939C  C2 04 00                  RET 0x4
