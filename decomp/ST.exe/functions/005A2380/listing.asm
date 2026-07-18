FSGSTy::AddPlayer:
005A2380  55                        PUSH EBP
005A2381  8B EC                     MOV EBP,ESP
005A2383  81 EC AC 00 00 00         SUB ESP,0xac
005A2389  8A 81 5F 1A 00 00         MOV AL,byte ptr [ECX + 0x1a5f]
005A238F  53                        PUSH EBX
005A2390  56                        PUSH ESI
005A2391  3C 06                     CMP AL,0x6
005A2393  57                        PUSH EDI
005A2394  89 4D F8                  MOV dword ptr [EBP + -0x8],ECX
005A2397  0F 85 60 02 00 00         JNZ 0x005a25fd
005A239D  8A 81 60 1A 00 00         MOV AL,byte ptr [ECX + 0x1a60]
005A23A3  84 C0                     TEST AL,AL
005A23A5  0F 85 52 02 00 00         JNZ 0x005a25fd
005A23AB  A1 F8 8D 85 00            MOV EAX,[0x00858df8]
005A23B0  8D 55 88                  LEA EDX,[EBP + -0x78]
005A23B3  8D 4D 84                  LEA ECX,[EBP + -0x7c]
005A23B6  6A 00                     PUSH 0x0
005A23B8  52                        PUSH EDX
005A23B9  89 45 84                  MOV dword ptr [EBP + -0x7c],EAX
005A23BC  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
005A23C2  E8 29 B4 18 00            CALL 0x0072d7f0
005A23C7  8B F0                     MOV ESI,EAX
005A23C9  83 C4 08                  ADD ESP,0x8
005A23CC  85 F6                     TEST ESI,ESI
005A23CE  0F 85 EA 01 00 00         JNZ 0x005a25be
005A23D4  8B 5D F8                  MOV EBX,dword ptr [EBP + -0x8]
005A23D7  8B CB                     MOV ECX,EBX
005A23D9  8D 43 1D                  LEA EAX,[EBX + 0x1d]
005A23DC  C7 43 2D 26 00 00 00      MOV dword ptr [EBX + 0x2d],0x26
005A23E3  50                        PUSH EAX
005A23E4  8B 83 20 1B 00 00         MOV EAX,dword ptr [EBX + 0x1b20]
005A23EA  50                        PUSH EAX
005A23EB  6A 02                     PUSH 0x2
005A23ED  E8 8E 3C 14 00            CALL 0x006e6080
005A23F2  8B 83 A6 1E 00 00         MOV EAX,dword ptr [EBX + 0x1ea6]
005A23F8  33 C9                     XOR ECX,ECX
005A23FA  66 8B 4B 31               MOV CX,word ptr [EBX + 0x31]
005A23FE  3B 48 0C                  CMP ECX,dword ptr [EAX + 0xc]
005A2401  73 0E                     JNC 0x005a2411
005A2403  8B 70 08                  MOV ESI,dword ptr [EAX + 0x8]
005A2406  0F AF F1                  IMUL ESI,ECX
005A2409  03 70 1C                  ADD ESI,dword ptr [EAX + 0x1c]
005A240C  89 75 FC                  MOV dword ptr [EBP + -0x4],ESI
005A240F  EB 0A                     JMP 0x005a241b
LAB_005a2411:
005A2411  C7 45 FC 00 00 00 00      MOV dword ptr [EBP + -0x4],0x0
005A2418  8B 75 FC                  MOV ESI,dword ptr [EBP + -0x4]
LAB_005a241b:
005A241B  85 F6                     TEST ESI,ESI
005A241D  74 0F                     JZ 0x005a242e
005A241F  B9 0B 00 00 00            MOV ECX,0xb
005A2424  8D BD 54 FF FF FF         LEA EDI,[EBP + 0xffffff54]
005A242A  F3 A5                     MOVSD.REP ES:EDI,ESI
005A242C  66 A5                     MOVSW ES:EDI,ESI
LAB_005a242e:
005A242E  8B 75 08                  MOV ESI,dword ptr [EBP + 0x8]
005A2431  B9 0B 00 00 00            MOV ECX,0xb
005A2436  8D 7D C8                  LEA EDI,[EBP + -0x38]
005A2439  F3 A5                     MOVSD.REP ES:EDI,ESI
005A243B  8D 4D C8                  LEA ECX,[EBP + -0x38]
005A243E  51                        PUSH ECX
005A243F  50                        PUSH EAX
005A2440  A4                        MOVSB ES:EDI,ESI
005A2441  C6 45 F5 00               MOV byte ptr [EBP + -0xb],0x0
005A2445  E8 76 BD 10 00            CALL 0x006ae1c0
005A244A  8B 15 A8 75 80 00         MOV EDX,dword ptr [0x008075a8]
005A2450  68 F3 00 00 00            PUSH 0xf3
005A2455  68 24 01 00 00            PUSH 0x124
005A245A  6A 5E                     PUSH 0x5e
005A245C  68 E9 01 00 00            PUSH 0x1e9
005A2461  52                        PUSH EDX
005A2462  E8 19 3B 11 00            CALL 0x006b5f80
005A2467  8B 83 9A 1E 00 00         MOV EAX,dword ptr [EBX + 0x1e9a]
005A246D  50                        PUSH EAX
005A246E  6A 01                     PUSH 0x1
005A2470  68 F3 00 00 00            PUSH 0xf3
005A2475  68 24 01 00 00            PUSH 0x124
005A247A  6A 00                     PUSH 0x0
005A247C  6A 00                     PUSH 0x0
005A247E  6A 5E                     PUSH 0x5e
005A2480  68 E9 01 00 00            PUSH 0x1e9
005A2485  E8 0E FE E5 FF            CALL 0x00402298
005A248A  8B 8B A6 1E 00 00         MOV ECX,dword ptr [EBX + 0x1ea6]
005A2490  8B 83 20 1B 00 00         MOV EAX,dword ptr [EBX + 0x1b20]
005A2496  83 C4 20                  ADD ESP,0x20
005A2499  8D 73 1D                  LEA ESI,[EBX + 0x1d]
005A249C  C7 43 2D 28 00 00 00      MOV dword ptr [EBX + 0x2d],0x28
005A24A3  8B 51 0C                  MOV EDX,dword ptr [ECX + 0xc]
005A24A6  56                        PUSH ESI
005A24A7  50                        PUSH EAX
005A24A8  6A 02                     PUSH 0x2
005A24AA  8B CB                     MOV ECX,EBX
005A24AC  89 53 31                  MOV dword ptr [EBX + 0x31],EDX
005A24AF  66 C7 43 35 01 00         MOV word ptr [EBX + 0x35],0x1
005A24B5  E8 C6 3B 14 00            CALL 0x006e6080
005A24BA  8B 8B A6 1E 00 00         MOV ECX,dword ptr [EBX + 0x1ea6]
005A24C0  C7 43 2D 20 00 00 00      MOV dword ptr [EBX + 0x2d],0x20
005A24C7  8B 41 0C                  MOV EAX,dword ptr [ECX + 0xc]
005A24CA  85 C0                     TEST EAX,EAX
005A24CC  74 11                     JZ 0x005a24df
005A24CE  8B 83 6B 1A 00 00         MOV EAX,dword ptr [EBX + 0x1a6b]
005A24D4  85 C0                     TEST EAX,EAX
005A24D6  74 07                     JZ 0x005a24df
005A24D8  B8 01 00 00 00            MOV EAX,0x1
005A24DD  EB 02                     JMP 0x005a24e1
LAB_005a24df:
005A24DF  33 C0                     XOR EAX,EAX
LAB_005a24e1:
005A24E1  8B 93 20 1B 00 00         MOV EDX,dword ptr [EBX + 0x1b20]
005A24E7  56                        PUSH ESI
005A24E8  52                        PUSH EDX
005A24E9  6A 02                     PUSH 0x2
005A24EB  8B CB                     MOV ECX,EBX
005A24ED  89 43 31                  MOV dword ptr [EBX + 0x31],EAX
005A24F0  E8 8B 3B 14 00            CALL 0x006e6080
005A24F5  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
005A24F8  85 C0                     TEST EAX,EAX
005A24FA  0F 84 AC 00 00 00         JZ 0x005a25ac
005A2500  8B 83 A6 1E 00 00         MOV EAX,dword ptr [EBX + 0x1ea6]
005A2506  33 C9                     XOR ECX,ECX
005A2508  8B 50 0C                  MOV EDX,dword ptr [EAX + 0xc]
005A250B  85 D2                     TEST EDX,EDX
005A250D  89 55 FC                  MOV dword ptr [EBP + -0x4],EDX
005A2510  0F 86 96 00 00 00         JBE 0x005a25ac
005A2516  3B CA                     CMP ECX,EDX
005A2518  73 13                     JNC 0x005a252d
LAB_005a251a:
005A251A  8B 83 A6 1E 00 00         MOV EAX,dword ptr [EBX + 0x1ea6]
005A2520  8B 70 08                  MOV ESI,dword ptr [EAX + 0x8]
005A2523  8B 78 1C                  MOV EDI,dword ptr [EAX + 0x1c]
005A2526  0F AF F1                  IMUL ESI,ECX
005A2529  03 F7                     ADD ESI,EDI
005A252B  EB 02                     JMP 0x005a252f
LAB_005a252d:
005A252D  33 F6                     XOR ESI,ESI
LAB_005a252f:
005A252F  85 F6                     TEST ESI,ESI
005A2531  74 36                     JZ 0x005a2569
005A2533  8D BD 54 FF FF FF         LEA EDI,[EBP + 0xffffff54]
LAB_005a2539:
005A2539  8A 16                     MOV DL,byte ptr [ESI]
005A253B  8A C2                     MOV AL,DL
005A253D  3A 17                     CMP DL,byte ptr [EDI]
005A253F  75 1C                     JNZ 0x005a255d
005A2541  84 C0                     TEST AL,AL
005A2543  74 14                     JZ 0x005a2559
005A2545  8A 56 01                  MOV DL,byte ptr [ESI + 0x1]
005A2548  8A C2                     MOV AL,DL
005A254A  3A 57 01                  CMP DL,byte ptr [EDI + 0x1]
005A254D  75 0E                     JNZ 0x005a255d
005A254F  83 C6 02                  ADD ESI,0x2
005A2552  83 C7 02                  ADD EDI,0x2
005A2555  84 C0                     TEST AL,AL
005A2557  75 E0                     JNZ 0x005a2539
LAB_005a2559:
005A2559  33 C0                     XOR EAX,EAX
005A255B  EB 05                     JMP 0x005a2562
LAB_005a255d:
005A255D  1B C0                     SBB EAX,EAX
005A255F  83 D8 FF                  SBB EAX,-0x1
LAB_005a2562:
005A2562  85 C0                     TEST EAX,EAX
005A2564  74 1A                     JZ 0x005a2580
005A2566  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
LAB_005a2569:
005A2569  41                        INC ECX
005A256A  3B CA                     CMP ECX,EDX
005A256C  72 AC                     JC 0x005a251a
005A256E  8B 4D 84                  MOV ECX,dword ptr [EBP + -0x7c]
005A2571  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
005A2577  5F                        POP EDI
005A2578  5E                        POP ESI
005A2579  5B                        POP EBX
005A257A  8B E5                     MOV ESP,EBP
005A257C  5D                        POP EBP
005A257D  C2 04 00                  RET 0x4
LAB_005a2580:
005A2580  B8 01 00 00 00            MOV EAX,0x1
005A2585  66 89 4B 31               MOV word ptr [EBX + 0x31],CX
005A2589  66 89 43 37               MOV word ptr [EBX + 0x37],AX
005A258D  66 89 43 35               MOV word ptr [EBX + 0x35],AX
005A2591  8D 43 1D                  LEA EAX,[EBX + 0x1d]
005A2594  8B CB                     MOV ECX,EBX
005A2596  50                        PUSH EAX
005A2597  8B 83 20 1B 00 00         MOV EAX,dword ptr [EBX + 0x1b20]
005A259D  50                        PUSH EAX
005A259E  6A 02                     PUSH 0x2
005A25A0  C7 43 2D 22 00 00 00      MOV dword ptr [EBX + 0x2d],0x22
005A25A7  E8 D4 3A 14 00            CALL 0x006e6080
LAB_005a25ac:
005A25AC  8B 4D 84                  MOV ECX,dword ptr [EBP + -0x7c]
005A25AF  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
005A25B5  5F                        POP EDI
005A25B6  5E                        POP ESI
005A25B7  5B                        POP EBX
005A25B8  8B E5                     MOV ESP,EBP
005A25BA  5D                        POP EBP
005A25BB  C2 04 00                  RET 0x4
LAB_005a25be:
005A25BE  8B 55 84                  MOV EDX,dword ptr [EBP + -0x7c]
005A25C1  68 B4 C4 7C 00            PUSH 0x7cc4b4
005A25C6  68 CC 4C 7A 00            PUSH 0x7a4ccc
005A25CB  56                        PUSH ESI
005A25CC  6A 00                     PUSH 0x0
005A25CE  68 12 0A 00 00            PUSH 0xa12
005A25D3  68 70 BF 7C 00            PUSH 0x7cbf70
005A25D8  89 15 F8 8D 85 00         MOV dword ptr [0x00858df8],EDX
005A25DE  E8 ED AE 10 00            CALL 0x006ad4d0
005A25E3  83 C4 18                  ADD ESP,0x18
005A25E6  85 C0                     TEST EAX,EAX
005A25E8  74 01                     JZ 0x005a25eb
005A25EA  CC                        INT3
LAB_005a25eb:
005A25EB  68 12 0A 00 00            PUSH 0xa12
005A25F0  68 70 BF 7C 00            PUSH 0x7cbf70
005A25F5  6A 00                     PUSH 0x0
005A25F7  56                        PUSH ESI
005A25F8  E8 43 38 10 00            CALL 0x006a5e40
LAB_005a25fd:
005A25FD  5F                        POP EDI
005A25FE  5E                        POP ESI
005A25FF  5B                        POP EBX
005A2600  8B E5                     MOV ESP,EBP
005A2602  5D                        POP EBP
005A2603  C2 04 00                  RET 0x4
