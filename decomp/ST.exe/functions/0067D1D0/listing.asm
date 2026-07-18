FUN_0067d1d0:
0067D1D0  55                        PUSH EBP
0067D1D1  8B EC                     MOV EBP,ESP
0067D1D3  83 EC 48                  SUB ESP,0x48
0067D1D6  A1 F8 8D 85 00            MOV EAX,[0x00858df8]
0067D1DB  53                        PUSH EBX
0067D1DC  56                        PUSH ESI
0067D1DD  57                        PUSH EDI
0067D1DE  8D 55 BC                  LEA EDX,[EBP + -0x44]
0067D1E1  8D 4D B8                  LEA ECX,[EBP + -0x48]
0067D1E4  6A 00                     PUSH 0x0
0067D1E6  52                        PUSH EDX
0067D1E7  C7 45 FC 00 00 00 00      MOV dword ptr [EBP + -0x4],0x0
0067D1EE  89 45 B8                  MOV dword ptr [EBP + -0x48],EAX
0067D1F1  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
0067D1F7  E8 F4 05 0B 00            CALL 0x0072d7f0
0067D1FC  8B F0                     MOV ESI,EAX
0067D1FE  83 C4 08                  ADD ESP,0x8
0067D201  85 F6                     TEST ESI,ESI
0067D203  0F 85 0E 01 00 00         JNZ 0x0067d317
0067D209  68 2B 01 00 00            PUSH 0x12b
0067D20E  E8 FD D9 02 00            CALL 0x006aac10
0067D213  8B 5D 08                  MOV EBX,dword ptr [EBP + 0x8]
0067D216  B9 4A 00 00 00            MOV ECX,0x4a
0067D21B  8B F3                     MOV ESI,EBX
0067D21D  8B F8                     MOV EDI,EAX
0067D21F  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
0067D222  F3 A5                     MOVSD.REP ES:EDI,ESI
0067D224  66 A5                     MOVSW ES:EDI,ESI
0067D226  A4                        MOVSB ES:EDI,ESI
0067D227  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
0067D22A  C7 40 14 2B 01 00 00      MOV dword ptr [EAX + 0x14],0x12b
0067D231  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
0067D234  C6 41 18 02               MOV byte ptr [ECX + 0x18],0x2
0067D238  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
0067D23B  8B 82 FE 00 00 00         MOV EAX,dword ptr [EDX + 0xfe]
0067D241  8D 84 18 2A 01 00 00      LEA EAX,[EAX + EBX*0x1 + 0x12a]
0067D248  50                        PUSH EAX
0067D249  E8 A4 69 D8 FF            CALL 0x00403bf2
0067D24E  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
0067D251  83 C4 04                  ADD ESP,0x4
0067D254  33 F6                     XOR ESI,ESI
0067D256  89 81 06 01 00 00         MOV dword ptr [ECX + 0x106],EAX
0067D25C  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
LAB_0067d25f:
0067D25F  8B 8C 06 C2 00 00 00      MOV ECX,dword ptr [ESI + EAX*0x1 + 0xc2]
0067D266  85 C9                     TEST ECX,ECX
0067D268  74 23                     JZ 0x0067d28d
0067D26A  8B 94 06 C6 00 00 00      MOV EDX,dword ptr [ESI + EAX*0x1 + 0xc6]
0067D271  8D 84 1A 2A 01 00 00      LEA EAX,[EDX + EBX*0x1 + 0x12a]
0067D278  50                        PUSH EAX
0067D279  6A 00                     PUSH 0x0
0067D27B  E8 E0 2D 03 00            CALL 0x006b0060
0067D280  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
0067D283  89 84 0E C2 00 00 00      MOV dword ptr [ESI + ECX*0x1 + 0xc2],EAX
0067D28A  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
LAB_0067d28d:
0067D28D  83 C6 0C                  ADD ESI,0xc
0067D290  83 FE 3C                  CMP ESI,0x3c
0067D293  7C CA                     JL 0x0067d25f
0067D295  8B 88 C2 00 00 00         MOV ECX,dword ptr [EAX + 0xc2]
0067D29B  85 C9                     TEST ECX,ECX
0067D29D  75 19                     JNZ 0x0067d2b8
0067D29F  6A 05                     PUSH 0x5
0067D2A1  6A 10                     PUSH 0x10
0067D2A3  6A 0A                     PUSH 0xa
0067D2A5  6A 00                     PUSH 0x0
0067D2A7  E8 E4 0F 03 00            CALL 0x006ae290
0067D2AC  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
0067D2AF  89 82 C2 00 00 00         MOV dword ptr [EDX + 0xc2],EAX
0067D2B5  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
LAB_0067d2b8:
0067D2B8  8B 88 C2 00 00 00         MOV ECX,dword ptr [EAX + 0xc2]
0067D2BE  33 FF                     XOR EDI,EDI
0067D2C0  8B 51 0C                  MOV EDX,dword ptr [ECX + 0xc]
0067D2C3  85 D2                     TEST EDX,EDX
0067D2C5  7E 40                     JLE 0x0067d307
0067D2C7  3B FA                     CMP EDI,EDX
LAB_0067d2c9:
0067D2C9  73 0D                     JNC 0x0067d2d8
0067D2CB  8B 71 08                  MOV ESI,dword ptr [ECX + 0x8]
0067D2CE  8B 51 1C                  MOV EDX,dword ptr [ECX + 0x1c]
0067D2D1  0F AF F7                  IMUL ESI,EDI
0067D2D4  03 F2                     ADD ESI,EDX
0067D2D6  EB 02                     JMP 0x0067d2da
LAB_0067d2d8:
0067D2D8  33 F6                     XOR ESI,ESI
LAB_0067d2da:
0067D2DA  8B 4E 04                  MOV ECX,dword ptr [ESI + 0x4]
0067D2DD  85 C9                     TEST ECX,ECX
0067D2DF  75 18                     JNZ 0x0067d2f9
0067D2E1  8B 46 08                  MOV EAX,dword ptr [ESI + 0x8]
0067D2E4  8D 84 18 2A 01 00 00      LEA EAX,[EAX + EBX*0x1 + 0x12a]
0067D2EB  50                        PUSH EAX
0067D2EC  E8 BD 7F D8 FF            CALL 0x004052ae
0067D2F1  89 06                     MOV dword ptr [ESI],EAX
0067D2F3  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
0067D2F6  83 C4 04                  ADD ESP,0x4
LAB_0067d2f9:
0067D2F9  8B 88 C2 00 00 00         MOV ECX,dword ptr [EAX + 0xc2]
0067D2FF  47                        INC EDI
0067D300  8B 51 0C                  MOV EDX,dword ptr [ECX + 0xc]
0067D303  3B FA                     CMP EDI,EDX
0067D305  7C C2                     JL 0x0067d2c9
LAB_0067d307:
0067D307  8B 4D B8                  MOV ECX,dword ptr [EBP + -0x48]
0067D30A  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
0067D310  5F                        POP EDI
0067D311  5E                        POP ESI
0067D312  5B                        POP EBX
0067D313  8B E5                     MOV ESP,EBP
0067D315  5D                        POP EBP
0067D316  C3                        RET
LAB_0067d317:
0067D317  8B 55 B8                  MOV EDX,dword ptr [EBP + -0x48]
0067D31A  8D 45 FC                  LEA EAX,[EBP + -0x4]
0067D31D  50                        PUSH EAX
0067D31E  89 15 F8 8D 85 00         MOV dword ptr [0x00858df8],EDX
0067D324  E8 DC 5A D8 FF            CALL 0x00402e05
0067D329  83 C4 04                  ADD ESP,0x4
0067D32C  6A 77                     PUSH 0x77
0067D32E  68 A4 2F 7D 00            PUSH 0x7d2fa4
0067D333  6A 00                     PUSH 0x0
0067D335  56                        PUSH ESI
0067D336  E8 05 8B 02 00            CALL 0x006a5e40
0067D33B  5F                        POP EDI
0067D33C  5E                        POP ESI
0067D33D  33 C0                     XOR EAX,EAX
0067D33F  5B                        POP EBX
0067D340  8B E5                     MOV ESP,EBP
0067D342  5D                        POP EBP
0067D343  C3                        RET
