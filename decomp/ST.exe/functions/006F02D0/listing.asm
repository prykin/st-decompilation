FUN_006f02d0:
006F02D0  55                        PUSH EBP
006F02D1  8B EC                     MOV EBP,ESP
006F02D3  53                        PUSH EBX
006F02D4  8B 5D 08                  MOV EBX,dword ptr [EBP + 0x8]
006F02D7  56                        PUSH ESI
006F02D8  57                        PUSH EDI
006F02D9  85 DB                     TEST EBX,EBX
006F02DB  75 07                     JNZ 0x006f02e4
LAB_006f02dd:
006F02DD  5F                        POP EDI
006F02DE  5E                        POP ESI
006F02DF  33 C0                     XOR EAX,EAX
006F02E1  5B                        POP EBX
006F02E2  5D                        POP EBP
006F02E3  C3                        RET
LAB_006f02e4:
006F02E4  8B 4D 0C                  MOV ECX,dword ptr [EBP + 0xc]
006F02E7  8B 45 18                  MOV EAX,dword ptr [EBP + 0x18]
006F02EA  8B D1                     MOV EDX,ECX
006F02EC  03 C8                     ADD ECX,EAX
006F02EE  89 4D 08                  MOV dword ptr [EBP + 0x8],ECX
006F02F1  8B 4D 10                  MOV ECX,dword ptr [EBP + 0x10]
006F02F4  2B D0                     SUB EDX,EAX
006F02F6  8D 34 01                  LEA ESI,[ECX + EAX*0x1]
006F02F9  2B C8                     SUB ECX,EAX
006F02FB  8B F9                     MOV EDI,ECX
006F02FD  89 75 0C                  MOV dword ptr [EBP + 0xc],ESI
006F0300  3B FE                     CMP EDI,ESI
006F0302  7F 43                     JG 0x006f0347
LAB_006f0304:
006F0304  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
006F0307  8B F2                     MOV ESI,EDX
006F0309  3B D0                     CMP EDX,EAX
006F030B  7F 32                     JG 0x006f033f
006F030D  8B 43 04                  MOV EAX,dword ptr [EBX + 0x4]
006F0310  0F AF 45 14               IMUL EAX,dword ptr [EBP + 0x14]
006F0314  03 C7                     ADD EAX,EDI
006F0316  0F AF 03                  IMUL EAX,dword ptr [EBX]
006F0319  8D 44 10 02               LEA EAX,[EAX + EDX*0x1 + 0x2]
006F031D  8D 0C 40                  LEA ECX,[EAX + EAX*0x2]
006F0320  8D 0C 4B                  LEA ECX,[EBX + ECX*0x2]
LAB_006f0323:
006F0323  66 8B 01                  MOV AX,word ptr [ECX]
006F0326  66 85 C0                  TEST AX,AX
006F0329  74 B2                     JZ 0x006f02dd
006F032B  F6 C4 20                  TEST AH,0x20
006F032E  74 AD                     JZ 0x006f02dd
006F0330  A8 0F                     TEST AL,0xf
006F0332  75 A9                     JNZ 0x006f02dd
006F0334  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
006F0337  46                        INC ESI
006F0338  83 C1 06                  ADD ECX,0x6
006F033B  3B F0                     CMP ESI,EAX
006F033D  7E E4                     JLE 0x006f0323
LAB_006f033f:
006F033F  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
006F0342  47                        INC EDI
006F0343  3B F8                     CMP EDI,EAX
006F0345  7E BD                     JLE 0x006f0304
LAB_006f0347:
006F0347  5F                        POP EDI
006F0348  5E                        POP ESI
006F0349  B8 01 00 00 00            MOV EAX,0x1
006F034E  5B                        POP EBX
006F034F  5D                        POP EBP
006F0350  C3                        RET
