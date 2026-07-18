FUN_00568010:
00568010  55                        PUSH EBP
00568011  8B EC                     MOV EBP,ESP
00568013  83 EC 4C                  SUB ESP,0x4c
00568016  8B 81 8B 0F 00 00         MOV EAX,dword ptr [ECX + 0xf8b]
0056801C  53                        PUSH EBX
0056801D  56                        PUSH ESI
0056801E  57                        PUSH EDI
0056801F  85 C0                     TEST EAX,EAX
00568021  89 4D F8                  MOV dword ptr [EBP + -0x8],ECX
00568024  0F 84 DA 01 00 00         JZ 0x00568204
0056802A  A1 F8 8D 85 00            MOV EAX,[0x00858df8]
0056802F  8D 55 B8                  LEA EDX,[EBP + -0x48]
00568032  8D 4D B4                  LEA ECX,[EBP + -0x4c]
00568035  6A 00                     PUSH 0x0
00568037  52                        PUSH EDX
00568038  89 45 B4                  MOV dword ptr [EBP + -0x4c],EAX
0056803B  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
00568041  E8 AA 57 1C 00            CALL 0x0072d7f0
00568046  83 C4 08                  ADD ESP,0x8
00568049  85 C0                     TEST EAX,EAX
0056804B  0F 85 AB 01 00 00         JNZ 0x005681fc
00568051  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
00568054  25 FF 00 00 00            AND EAX,0xff
00568059  48                        DEC EAX
0056805A  83 F8 07                  CMP EAX,0x7
0056805D  0F 87 87 01 00 00         JA 0x005681ea
switchD_00568063::switchD:
00568063  FF 24 85 10 82 56 00      JMP dword ptr [EAX*0x4 + 0x568210]
switchD_00568063::caseD_1:
0056806A  8B 4D F8                  MOV ECX,dword ptr [EBP + -0x8]
0056806D  BE 02 00 00 00            MOV ESI,0x2
00568072  BB 01 00 00 00            MOV EBX,0x1
00568077  8D B9 23 0E 00 00         LEA EDI,[ECX + 0xe23]
LAB_0056807d:
0056807D  83 FE 1B                  CMP ESI,0x1b
00568080  7C 05                     JL 0x00568087
00568082  83 FE 1D                  CMP ESI,0x1d
00568085  7E 0A                     JLE 0x00568091
LAB_00568087:
00568087  83 FE 12                  CMP ESI,0x12
0056808A  7C 28                     JL 0x005680b4
0056808C  83 FE 14                  CMP ESI,0x14
0056808F  7F 23                     JG 0x005680b4
LAB_00568091:
00568091  8D 55 FC                  LEA EDX,[EBP + -0x4]
00568094  6A 00                     PUSH 0x0
00568096  52                        PUSH EDX
00568097  56                        PUSH ESI
00568098  E8 63 9E 15 00            CALL 0x006c1f00
0056809D  39 5D FC                  CMP dword ptr [EBP + -0x4],EBX
005680A0  75 12                     JNZ 0x005680b4
005680A2  8B CF                     MOV ECX,EDI
005680A4  33 C0                     XOR EAX,EAX
005680A6  56                        PUSH ESI
005680A7  89 01                     MOV dword ptr [ECX],EAX
005680A9  89 41 04                  MOV dword ptr [ECX + 0x4],EAX
005680AC  89 41 08                  MOV dword ptr [ECX + 0x8],EAX
005680AF  E8 EC 9A 15 00            CALL 0x006c1ba0
LAB_005680b4:
005680B4  46                        INC ESI
005680B5  83 C7 0C                  ADD EDI,0xc
005680B8  83 FE 20                  CMP ESI,0x20
005680BB  7C C0                     JL 0x0056807d
005680BD  8B 55 B4                  MOV EDX,dword ptr [EBP + -0x4c]
005680C0  89 15 F8 8D 85 00         MOV dword ptr [0x00858df8],EDX
005680C6  5F                        POP EDI
005680C7  5E                        POP ESI
005680C8  5B                        POP EBX
005680C9  8B E5                     MOV ESP,EBP
005680CB  5D                        POP EBP
005680CC  C2 04 00                  RET 0x4
switchD_00568063::caseD_2:
005680CF  8B 55 F8                  MOV EDX,dword ptr [EBP + -0x8]
005680D2  BE 04 00 00 00            MOV ESI,0x4
005680D7  BB 01 00 00 00            MOV EBX,0x1
005680DC  8D BA 3B 0E 00 00         LEA EDI,[EDX + 0xe3b]
LAB_005680e2:
005680E2  8D 45 FC                  LEA EAX,[EBP + -0x4]
005680E5  6A 00                     PUSH 0x0
005680E7  50                        PUSH EAX
005680E8  56                        PUSH ESI
005680E9  E8 12 9E 15 00            CALL 0x006c1f00
005680EE  39 5D FC                  CMP dword ptr [EBP + -0x4],EBX
005680F1  75 12                     JNZ 0x00568105
005680F3  8B D7                     MOV EDX,EDI
005680F5  33 C9                     XOR ECX,ECX
005680F7  56                        PUSH ESI
005680F8  89 0A                     MOV dword ptr [EDX],ECX
005680FA  89 4A 04                  MOV dword ptr [EDX + 0x4],ECX
005680FD  89 4A 08                  MOV dword ptr [EDX + 0x8],ECX
00568100  E8 9B 9A 15 00            CALL 0x006c1ba0
LAB_00568105:
00568105  46                        INC ESI
00568106  83 C7 0C                  ADD EDI,0xc
00568109  83 FE 0A                  CMP ESI,0xa
0056810C  7E D4                     JLE 0x005680e2
0056810E  8B 55 B4                  MOV EDX,dword ptr [EBP + -0x4c]
00568111  89 15 F8 8D 85 00         MOV dword ptr [0x00858df8],EDX
00568117  5F                        POP EDI
00568118  5E                        POP ESI
00568119  5B                        POP EBX
0056811A  8B E5                     MOV ESP,EBP
0056811C  5D                        POP EBP
0056811D  C2 04 00                  RET 0x4
switchD_00568063::caseD_4:
00568120  8B 7D F8                  MOV EDI,dword ptr [EBP + -0x8]
00568123  BE 02 00 00 00            MOV ESI,0x2
00568128  BB 01 00 00 00            MOV EBX,0x1
LAB_0056812d:
0056812D  83 FE 02                  CMP ESI,0x2
00568130  7C 05                     JL 0x00568137
00568132  83 FE 03                  CMP ESI,0x3
00568135  7E 14                     JLE 0x0056814b
LAB_00568137:
00568137  83 FE 1E                  CMP ESI,0x1e
0056813A  7C 05                     JL 0x00568141
0056813C  83 FE 1F                  CMP ESI,0x1f
0056813F  7E 0A                     JLE 0x0056814b
LAB_00568141:
00568141  83 FE 0B                  CMP ESI,0xb
00568144  7C 4D                     JL 0x00568193
00568146  83 FE 11                  CMP ESI,0x11
00568149  7F 48                     JG 0x00568193
LAB_0056814b:
0056814B  8D 45 FC                  LEA EAX,[EBP + -0x4]
0056814E  6A 00                     PUSH 0x0
00568150  50                        PUSH EAX
00568151  56                        PUSH ESI
00568152  E8 A9 9D 15 00            CALL 0x006c1f00
00568157  39 5D FC                  CMP dword ptr [EBP + -0x4],EBX
0056815A  75 37                     JNZ 0x00568193
0056815C  8D 14 76                  LEA EDX,[ESI + ESI*0x2]
0056815F  33 C9                     XOR ECX,ECX
00568161  56                        PUSH ESI
00568162  8D 84 97 0B 0E 00 00      LEA EAX,[EDI + EDX*0x4 + 0xe0b]
00568169  89 8C 97 0B 0E 00 00      MOV dword ptr [EDI + EDX*0x4 + 0xe0b],ECX
00568170  89 48 04                  MOV dword ptr [EAX + 0x4],ECX
00568173  89 48 08                  MOV dword ptr [EAX + 0x8],ECX
00568176  E8 25 9A 15 00            CALL 0x006c1ba0
0056817B  83 FE 02                  CMP ESI,0x2
0056817E  75 13                     JNZ 0x00568193
00568180  6A 00                     PUSH 0x0
00568182  6A 00                     PUSH 0x0
00568184  68 B7 04 00 00            PUSH 0x4b7
00568189  6A 00                     PUSH 0x0
0056818B  53                        PUSH EBX
0056818C  8B CF                     MOV ECX,EDI
0056818E  E8 45 CA E9 FF            CALL 0x00404bd8
LAB_00568193:
00568193  46                        INC ESI
00568194  83 FE 20                  CMP ESI,0x20
00568197  7C 94                     JL 0x0056812d
00568199  8B 55 B4                  MOV EDX,dword ptr [EBP + -0x4c]
0056819C  89 15 F8 8D 85 00         MOV dword ptr [0x00858df8],EDX
005681A2  5F                        POP EDI
005681A3  5E                        POP ESI
005681A4  5B                        POP EBX
005681A5  8B E5                     MOV ESP,EBP
005681A7  5D                        POP EBP
005681A8  C2 04 00                  RET 0x4
switchD_00568063::caseD_8:
005681AB  8B 4D F8                  MOV ECX,dword ptr [EBP + -0x8]
005681AE  BE 15 00 00 00            MOV ESI,0x15
005681B3  BB 01 00 00 00            MOV EBX,0x1
005681B8  8D B9 07 0F 00 00         LEA EDI,[ECX + 0xf07]
LAB_005681be:
005681BE  8D 55 FC                  LEA EDX,[EBP + -0x4]
005681C1  6A 00                     PUSH 0x0
005681C3  52                        PUSH EDX
005681C4  56                        PUSH ESI
005681C5  E8 36 9D 15 00            CALL 0x006c1f00
005681CA  39 5D FC                  CMP dword ptr [EBP + -0x4],EBX
005681CD  75 12                     JNZ 0x005681e1
005681CF  8B CF                     MOV ECX,EDI
005681D1  33 C0                     XOR EAX,EAX
005681D3  56                        PUSH ESI
005681D4  89 01                     MOV dword ptr [ECX],EAX
005681D6  89 41 04                  MOV dword ptr [ECX + 0x4],EAX
005681D9  89 41 08                  MOV dword ptr [ECX + 0x8],EAX
005681DC  E8 BF 99 15 00            CALL 0x006c1ba0
LAB_005681e1:
005681E1  46                        INC ESI
005681E2  83 C7 0C                  ADD EDI,0xc
005681E5  83 FE 19                  CMP ESI,0x19
005681E8  7E D4                     JLE 0x005681be
switchD_00568063::caseD_3:
005681EA  8B 55 B4                  MOV EDX,dword ptr [EBP + -0x4c]
005681ED  89 15 F8 8D 85 00         MOV dword ptr [0x00858df8],EDX
005681F3  5F                        POP EDI
005681F4  5E                        POP ESI
005681F5  5B                        POP EBX
005681F6  8B E5                     MOV ESP,EBP
005681F8  5D                        POP EBP
005681F9  C2 04 00                  RET 0x4
LAB_005681fc:
005681FC  8B 45 B4                  MOV EAX,dword ptr [EBP + -0x4c]
005681FF  A3 F8 8D 85 00            MOV [0x00858df8],EAX
LAB_00568204:
00568204  5F                        POP EDI
00568205  5E                        POP ESI
00568206  5B                        POP EBX
00568207  8B E5                     MOV ESP,EBP
00568209  5D                        POP EBP
0056820A  C2 04 00                  RET 0x4
