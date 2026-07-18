FUN_004eb150:
004EB150  55                        PUSH EBP
004EB151  8B EC                     MOV EBP,ESP
004EB153  83 EC 08                  SUB ESP,0x8
004EB156  8B 41 1C                  MOV EAX,dword ptr [ECX + 0x1c]
004EB159  53                        PUSH EBX
004EB15A  69 C0 6D 4E C6 41         IMUL EAX,EAX,0x41c64e6d
004EB160  05 39 30 00 00            ADD EAX,0x3039
004EB165  56                        PUSH ESI
004EB166  89 41 1C                  MOV dword ptr [ECX + 0x1c],EAX
004EB169  8B 15 38 2A 80 00         MOV EDX,dword ptr [0x00802a38]
004EB16F  57                        PUSH EDI
004EB170  BF 85 03 00 00            MOV EDI,0x385
004EB175  8B B2 E4 00 00 00         MOV ESI,dword ptr [EDX + 0xe4]
004EB17B  33 D2                     XOR EDX,EDX
004EB17D  C1 E8 10                  SHR EAX,0x10
004EB180  F7 F7                     DIV EDI
004EB182  8B 5D 08                  MOV EBX,dword ptr [EBP + 0x8]
004EB185  89 4D F8                  MOV dword ptr [EBP + -0x8],ECX
004EB188  69 DB 62 0A 00 00         IMUL EBX,EBX,0xa62
004EB18E  89 5D FC                  MOV dword ptr [EBP + -0x4],EBX
004EB191  8B 83 E2 57 7F 00         MOV EAX,dword ptr [EBX + 0x7f57e2]
004EB197  8D 94 02 34 08 00 00      LEA EDX,[EDX + EAX*0x1 + 0x834]
004EB19E  3B F2                     CMP ESI,EDX
004EB1A0  0F 82 E2 00 00 00         JC 0x004eb288
004EB1A6  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
004EB1A9  89 B3 E2 57 7F 00         MOV dword ptr [EBX + 0x7f57e2],ESI
004EB1AF  50                        PUSH EAX
004EB1B0  E8 02 98 F1 FF            CALL 0x004049b7
004EB1B5  3C 03                     CMP AL,0x3
004EB1B7  0F 84 CB 00 00 00         JZ 0x004eb288
004EB1BD  8B 0D 38 2A 80 00         MOV ECX,dword ptr [0x00802a38]
004EB1C3  8B 81 E4 00 00 00         MOV EAX,dword ptr [ECX + 0xe4]
004EB1C9  3D 30 75 00 00            CMP EAX,0x7530
004EB1CE  72 26                     JC 0x004eb1f6
004EB1D0  8B 93 E6 57 7F 00         MOV EDX,dword ptr [EBX + 0x7f57e6]
004EB1D6  B9 01 00 00 00            MOV ECX,0x1
004EB1DB  3B D1                     CMP EDX,ECX
004EB1DD  7D 17                     JGE 0x004eb1f6
004EB1DF  89 8B E6 57 7F 00         MOV dword ptr [EBX + 0x7f57e6],ECX
004EB1E5  C7 45 08 00 00 00 00      MOV dword ptr [EBP + 0x8],0x0
004EB1EC  8D B3 C2 57 7F 00         LEA ESI,[EBX + 0x7f57c2]
004EB1F2  33 FF                     XOR EDI,EDI
004EB1F4  EB 37                     JMP 0x004eb22d
LAB_004eb1f6:
004EB1F6  3D 60 EA 00 00            CMP EAX,0xea60
004EB1FB  72 15                     JC 0x004eb212
004EB1FD  8B 8B E6 57 7F 00         MOV ECX,dword ptr [EBX + 0x7f57e6]
004EB203  B8 02 00 00 00            MOV EAX,0x2
004EB208  3B C8                     CMP ECX,EAX
004EB20A  7D 06                     JGE 0x004eb212
004EB20C  89 83 E6 57 7F 00         MOV dword ptr [EBX + 0x7f57e6],EAX
LAB_004eb212:
004EB212  C7 45 08 00 00 00 00      MOV dword ptr [EBP + 0x8],0x0
004EB219  8D B3 C2 57 7F 00         LEA ESI,[EBX + 0x7f57c2]
004EB21F  33 FF                     XOR EDI,EDI
004EB221  EB 0A                     JMP 0x004eb22d
LAB_004eb223:
004EB223  8B 5D FC                  MOV EBX,dword ptr [EBP + -0x4]
004EB226  33 FF                     XOR EDI,EDI
004EB228  EB 03                     JMP 0x004eb22d
LAB_004eb22a:
004EB22A  8B 5D FC                  MOV EBX,dword ptr [EBP + -0x4]
LAB_004eb22d:
004EB22D  8B 16                     MOV EDX,dword ptr [ESI]
004EB22F  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
004EB232  89 56 04                  MOV dword ptr [ESI + 0x4],EDX
004EB235  8B 83 E6 57 7F 00         MOV EAX,dword ptr [EBX + 0x7f57e6]
004EB23B  83 C6 08                  ADD ESI,0x8
004EB23E  8D 14 41                  LEA EDX,[ECX + EAX*0x2]
004EB241  8D 04 57                  LEA EAX,[EDI + EDX*0x2]
004EB244  8B 55 F8                  MOV EDX,dword ptr [EBP + -0x8]
004EB247  C1 E0 03                  SHL EAX,0x3
004EB24A  8B 88 C4 15 7C 00         MOV ECX,dword ptr [EAX + 0x7c15c4]
004EB250  8B 98 C0 15 7C 00         MOV EBX,dword ptr [EAX + 0x7c15c0]
004EB256  8B 42 1C                  MOV EAX,dword ptr [EDX + 0x1c]
004EB259  2B CB                     SUB ECX,EBX
004EB25B  69 C0 6D 4E C6 41         IMUL EAX,EAX,0x41c64e6d
004EB261  05 39 30 00 00            ADD EAX,0x3039
004EB266  41                        INC ECX
004EB267  89 42 1C                  MOV dword ptr [EDX + 0x1c],EAX
004EB26A  33 D2                     XOR EDX,EDX
004EB26C  C1 E8 10                  SHR EAX,0x10
004EB26F  F7 F1                     DIV ECX
004EB271  03 D3                     ADD EDX,EBX
004EB273  47                        INC EDI
004EB274  89 56 F8                  MOV dword ptr [ESI + -0x8],EDX
004EB277  83 FF 02                  CMP EDI,0x2
004EB27A  7C AE                     JL 0x004eb22a
004EB27C  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
004EB27F  40                        INC EAX
004EB280  83 F8 02                  CMP EAX,0x2
004EB283  89 45 08                  MOV dword ptr [EBP + 0x8],EAX
004EB286  7C 9B                     JL 0x004eb223
LAB_004eb288:
004EB288  5F                        POP EDI
004EB289  5E                        POP ESI
004EB28A  33 C0                     XOR EAX,EAX
004EB28C  5B                        POP EBX
004EB28D  8B E5                     MOV ESP,EBP
004EB28F  5D                        POP EBP
004EB290  C2 04 00                  RET 0x4
