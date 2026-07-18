FUN_006db310:
006DB310  55                        PUSH EBP
006DB311  8B EC                     MOV EBP,ESP
006DB313  83 EC 1C                  SUB ESP,0x1c
006DB316  53                        PUSH EBX
006DB317  56                        PUSH ESI
006DB318  57                        PUSH EDI
006DB319  8B 45 10                  MOV EAX,dword ptr [EBP + 0x10]
006DB31C  C1 E0 02                  SHL EAX,0x2
006DB31F  83 C0 03                  ADD EAX,0x3
006DB322  24 FC                     AND AL,0xfc
006DB324  E8 17 27 05 00            CALL 0x0072da40
006DB329  89 65 E4                  MOV dword ptr [EBP + -0x1c],ESP
006DB32C  8B 45 E4                  MOV EAX,dword ptr [EBP + -0x1c]
006DB32F  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
006DB332  8B 4D 20                  MOV ECX,dword ptr [EBP + 0x20]
006DB335  D1 F9                     SAR ECX,0x1
006DB337  F7 D9                     NEG ECX
006DB339  89 4D EC                  MOV dword ptr [EBP + -0x14],ECX
006DB33C  C7 45 F4 FF FF FF FF      MOV dword ptr [EBP + -0xc],0xffffffff
006DB343  C7 45 F0 00 00 00 00      MOV dword ptr [EBP + -0x10],0x0
006DB34A  EB 09                     JMP 0x006db355
LAB_006db34c:
006DB34C  8B 55 F0                  MOV EDX,dword ptr [EBP + -0x10]
006DB34F  83 C2 01                  ADD EDX,0x1
006DB352  89 55 F0                  MOV dword ptr [EBP + -0x10],EDX
LAB_006db355:
006DB355  8B 45 F0                  MOV EAX,dword ptr [EBP + -0x10]
006DB358  3B 45 10                  CMP EAX,dword ptr [EBP + 0x10]
006DB35B  7D 31                     JGE 0x006db38e
LAB_006db35d:
006DB35D  83 7D EC 00               CMP dword ptr [EBP + -0x14],0x0
006DB361  7F 14                     JG 0x006db377
006DB363  8B 4D F4                  MOV ECX,dword ptr [EBP + -0xc]
006DB366  83 C1 01                  ADD ECX,0x1
006DB369  89 4D F4                  MOV dword ptr [EBP + -0xc],ECX
006DB36C  8B 55 EC                  MOV EDX,dword ptr [EBP + -0x14]
006DB36F  03 55 10                  ADD EDX,dword ptr [EBP + 0x10]
006DB372  89 55 EC                  MOV dword ptr [EBP + -0x14],EDX
006DB375  EB E6                     JMP 0x006db35d
LAB_006db377:
006DB377  8B 45 EC                  MOV EAX,dword ptr [EBP + -0x14]
006DB37A  2B 45 20                  SUB EAX,dword ptr [EBP + 0x20]
006DB37D  89 45 EC                  MOV dword ptr [EBP + -0x14],EAX
006DB380  8B 4D F0                  MOV ECX,dword ptr [EBP + -0x10]
006DB383  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
006DB386  8B 45 F4                  MOV EAX,dword ptr [EBP + -0xc]
006DB389  89 04 8A                  MOV dword ptr [EDX + ECX*0x4],EAX
006DB38C  EB BE                     JMP 0x006db34c
LAB_006db38e:
006DB38E  8B 45 14                  MOV EAX,dword ptr [EBP + 0x14]
006DB391  89 45 F8                  MOV dword ptr [EBP + -0x8],EAX
006DB394  8B 75 18                  MOV ESI,dword ptr [EBP + 0x18]
006DB397  8B 7D 08                  MOV EDI,dword ptr [EBP + 0x8]
006DB39A  8B 45 24                  MOV EAX,dword ptr [EBP + 0x24]
006DB39D  D1 E8                     SHR EAX,0x1
006DB39F  F7 D8                     NEG EAX
006DB3A1  89 45 E8                  MOV dword ptr [EBP + -0x18],EAX
006DB3A4  2B 75 1C                  SUB ESI,dword ptr [EBP + 0x1c]
LAB_006db3a7:
006DB3A7  8B 45 E8                  MOV EAX,dword ptr [EBP + -0x18]
006DB3AA  0B C0                     OR EAX,EAX
006DB3AC  7F 08                     JG 0x006db3b6
LAB_006db3ae:
006DB3AE  03 75 1C                  ADD ESI,dword ptr [EBP + 0x1c]
006DB3B1  03 45 14                  ADD EAX,dword ptr [EBP + 0x14]
006DB3B4  7E F8                     JLE 0x006db3ae
LAB_006db3b6:
006DB3B6  89 45 E8                  MOV dword ptr [EBP + -0x18],EAX
006DB3B9  8B 4D 10                  MOV ECX,dword ptr [EBP + 0x10]
006DB3BC  8B 5D FC                  MOV EBX,dword ptr [EBP + -0x4]
006DB3BF  F7 C7 03 00 00 00         TEST EDI,0x3
006DB3C5  74 19                     JZ 0x006db3e0
006DB3C7  8B D7                     MOV EDX,EDI
006DB3C9  83 E2 03                  AND EDX,0x3
006DB3CC  80 F2 03                  XOR DL,0x3
LAB_006db3cf:
006DB3CF  8B 03                     MOV EAX,dword ptr [EBX]
006DB3D1  83 C3 04                  ADD EBX,0x4
006DB3D4  8A 04 06                  MOV AL,byte ptr [ESI + EAX*0x1]
006DB3D7  88 07                     MOV byte ptr [EDI],AL
006DB3D9  47                        INC EDI
006DB3DA  49                        DEC ECX
006DB3DB  7E 42                     JLE 0x006db41f
006DB3DD  4A                        DEC EDX
006DB3DE  7F EF                     JG 0x006db3cf
LAB_006db3e0:
006DB3E0  83 E9 04                  SUB ECX,0x4
006DB3E3  7C 27                     JL 0x006db40c
LAB_006db3e5:
006DB3E5  8B 53 0C                  MOV EDX,dword ptr [EBX + 0xc]
006DB3E8  8A 24 16                  MOV AH,byte ptr [ESI + EDX*0x1]
006DB3EB  8B 53 08                  MOV EDX,dword ptr [EBX + 0x8]
006DB3EE  8A 04 16                  MOV AL,byte ptr [ESI + EDX*0x1]
006DB3F1  8B 53 04                  MOV EDX,dword ptr [EBX + 0x4]
006DB3F4  C1 E0 10                  SHL EAX,0x10
006DB3F7  8A 24 16                  MOV AH,byte ptr [ESI + EDX*0x1]
006DB3FA  8B 13                     MOV EDX,dword ptr [EBX]
006DB3FC  8A 04 16                  MOV AL,byte ptr [ESI + EDX*0x1]
006DB3FF  83 C3 10                  ADD EBX,0x10
006DB402  89 07                     MOV dword ptr [EDI],EAX
006DB404  83 C7 04                  ADD EDI,0x4
006DB407  83 E9 04                  SUB ECX,0x4
006DB40A  7F D9                     JG 0x006db3e5
LAB_006db40c:
006DB40C  83 C1 04                  ADD ECX,0x4
006DB40F  74 0E                     JZ 0x006db41f
LAB_006db411:
006DB411  8B 03                     MOV EAX,dword ptr [EBX]
006DB413  83 C3 04                  ADD EBX,0x4
006DB416  8A 04 06                  MOV AL,byte ptr [ESI + EAX*0x1]
006DB419  88 07                     MOV byte ptr [EDI],AL
006DB41B  47                        INC EDI
006DB41C  49                        DEC ECX
006DB41D  7F F2                     JG 0x006db411
LAB_006db41f:
006DB41F  2B 7D 10                  SUB EDI,dword ptr [EBP + 0x10]
006DB422  03 7D 0C                  ADD EDI,dword ptr [EBP + 0xc]
006DB425  8B 55 E8                  MOV EDX,dword ptr [EBP + -0x18]
006DB428  2B 55 24                  SUB EDX,dword ptr [EBP + 0x24]
006DB42B  89 55 E8                  MOV dword ptr [EBP + -0x18],EDX
006DB42E  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
006DB431  48                        DEC EAX
006DB432  89 45 F8                  MOV dword ptr [EBP + -0x8],EAX
006DB435  0F 8F 6C FF FF FF         JG 0x006db3a7
006DB43B  8D 65 D8                  LEA ESP,[EBP + -0x28]
006DB43E  5F                        POP EDI
006DB43F  5E                        POP ESI
006DB440  5B                        POP EBX
006DB441  8B E5                     MOV ESP,EBP
006DB443  5D                        POP EBP
006DB444  C2 20 00                  RET 0x20
