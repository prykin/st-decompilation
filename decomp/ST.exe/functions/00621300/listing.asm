FUN_00621300:
00621300  55                        PUSH EBP
00621301  8B EC                     MOV EBP,ESP
00621303  83 EC 0C                  SUB ESP,0xc
00621306  8B 81 01 01 00 00         MOV EAX,dword ptr [ECX + 0x101]
0062130C  53                        PUSH EBX
0062130D  83 CB FF                  OR EBX,0xffffffff
00621310  89 4D F4                  MOV dword ptr [EBP + -0xc],ECX
00621313  85 C0                     TEST EAX,EAX
00621315  89 5D FC                  MOV dword ptr [EBP + -0x4],EBX
00621318  0F 84 BB 00 00 00         JZ 0x006213d9
0062131E  8B 40 0C                  MOV EAX,dword ptr [EAX + 0xc]
00621321  48                        DEC EAX
00621322  0F 88 B1 00 00 00         JS 0x006213d9
00621328  8B D0                     MOV EDX,EAX
0062132A  56                        PUSH ESI
0062132B  8B 75 08                  MOV ESI,dword ptr [EBP + 0x8]
0062132E  57                        PUSH EDI
0062132F  89 55 F8                  MOV dword ptr [EBP + -0x8],EDX
00621332  EB 03                     JMP 0x00621337
LAB_00621334:
00621334  8B 4D F4                  MOV ECX,dword ptr [EBP + -0xc]
LAB_00621337:
00621337  8B 89 01 01 00 00         MOV ECX,dword ptr [ECX + 0x101]
0062133D  3B 51 0C                  CMP EDX,dword ptr [ECX + 0xc]
00621340  73 7F                     JNC 0x006213c1
00621342  8B 41 08                  MOV EAX,dword ptr [ECX + 0x8]
00621345  8B 79 1C                  MOV EDI,dword ptr [ECX + 0x1c]
00621348  0F AF C2                  IMUL EAX,EDX
0062134B  03 C7                     ADD EAX,EDI
0062134D  85 C0                     TEST EAX,EAX
0062134F  74 70                     JZ 0x006213c1
00621351  8B 50 08                  MOV EDX,dword ptr [EAX + 0x8]
00621354  8D 7A FD                  LEA EDI,[EDX + -0x3]
00621357  39 7D 0C                  CMP dword ptr [EBP + 0xc],EDI
0062135A  7C 4D                     JL 0x006213a9
0062135C  8B 7D 0C                  MOV EDI,dword ptr [EBP + 0xc]
0062135F  83 C2 03                  ADD EDX,0x3
00621362  3B FA                     CMP EDI,EDX
00621364  7F 43                     JG 0x006213a9
00621366  8B 50 0C                  MOV EDX,dword ptr [EAX + 0xc]
00621369  8D 5A FD                  LEA EBX,[EDX + -0x3]
0062136C  39 5D 10                  CMP dword ptr [EBP + 0x10],EBX
0062136F  7C 35                     JL 0x006213a6
00621371  8D 5A 03                  LEA EBX,[EDX + 0x3]
00621374  8B 55 10                  MOV EDX,dword ptr [EBP + 0x10]
00621377  3B D3                     CMP EDX,EBX
00621379  7F 2B                     JG 0x006213a6
0062137B  89 78 08                  MOV dword ptr [EAX + 0x8],EDI
0062137E  8B 38                     MOV EDI,dword ptr [EAX]
00621380  8B CE                     MOV ECX,ESI
00621382  BB 01 00 00 00            MOV EBX,0x1
00621387  2B CF                     SUB ECX,EDI
00621389  89 5D FC                  MOV dword ptr [EBP + -0x4],EBX
0062138C  81 F9 94 11 00 00         CMP ECX,0x1194
00621392  89 50 0C                  MOV dword ptr [EAX + 0xc],EDX
00621395  89 70 04                  MOV dword ptr [EAX + 0x4],ESI
00621398  76 27                     JBE 0x006213c1
0062139A  BB 02 00 00 00            MOV EBX,0x2
0062139F  89 30                     MOV dword ptr [EAX],ESI
006213A1  89 5D FC                  MOV dword ptr [EBP + -0x4],EBX
006213A4  EB 1B                     JMP 0x006213c1
LAB_006213a6:
006213A6  8B 5D FC                  MOV EBX,dword ptr [EBP + -0x4]
LAB_006213a9:
006213A9  8B 38                     MOV EDI,dword ptr [EAX]
006213AB  8B D6                     MOV EDX,ESI
006213AD  2B D7                     SUB EDX,EDI
006213AF  81 FA 94 11 00 00         CMP EDX,0x1194
006213B5  76 0A                     JBE 0x006213c1
006213B7  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
006213BA  50                        PUSH EAX
006213BB  51                        PUSH ECX
006213BC  E8 AF F8 08 00            CALL 0x006b0c70
LAB_006213c1:
006213C1  8B 55 F8                  MOV EDX,dword ptr [EBP + -0x8]
006213C4  4A                        DEC EDX
006213C5  89 55 F8                  MOV dword ptr [EBP + -0x8],EDX
006213C8  0F 89 66 FF FF FF         JNS 0x00621334
006213CE  5F                        POP EDI
006213CF  8B C3                     MOV EAX,EBX
006213D1  5E                        POP ESI
006213D2  5B                        POP EBX
006213D3  8B E5                     MOV ESP,EBP
006213D5  5D                        POP EBP
006213D6  C2 10 00                  RET 0x10
LAB_006213d9:
006213D9  8B C3                     MOV EAX,EBX
006213DB  5B                        POP EBX
006213DC  8B E5                     MOV ESP,EBP
006213DE  5D                        POP EBP
006213DF  C2 10 00                  RET 0x10
