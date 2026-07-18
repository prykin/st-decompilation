FUN_006db0d0:
006DB0D0  55                        PUSH EBP
006DB0D1  8B EC                     MOV EBP,ESP
006DB0D3  83 EC 08                  SUB ESP,0x8
006DB0D6  53                        PUSH EBX
006DB0D7  56                        PUSH ESI
006DB0D8  8B 75 10                  MOV ESI,dword ptr [EBP + 0x10]
006DB0DB  57                        PUSH EDI
006DB0DC  8D 04 B5 00 00 00 00      LEA EAX,[ESI*0x4 + 0x0]
006DB0E3  83 C0 03                  ADD EAX,0x3
006DB0E6  24 FC                     AND AL,0xfc
006DB0E8  E8 53 29 05 00            CALL 0x0072da40
006DB0ED  8B 5D 20                  MOV EBX,dword ptr [EBP + 0x20]
006DB0F0  8B D4                     MOV EDX,ESP
006DB0F2  8B C3                     MOV EAX,EBX
006DB0F4  83 C9 FF                  OR ECX,0xffffffff
006DB0F7  D1 F8                     SAR EAX,0x1
006DB0F9  F7 D8                     NEG EAX
006DB0FB  85 F6                     TEST ESI,ESI
006DB0FD  89 55 F8                  MOV dword ptr [EBP + -0x8],EDX
006DB100  7E 17                     JLE 0x006db119
006DB102  8B FE                     MOV EDI,ESI
LAB_006db104:
006DB104  85 C0                     TEST EAX,EAX
006DB106  7F 07                     JG 0x006db10f
LAB_006db108:
006DB108  03 C6                     ADD EAX,ESI
006DB10A  41                        INC ECX
006DB10B  85 C0                     TEST EAX,EAX
006DB10D  7E F9                     JLE 0x006db108
LAB_006db10f:
006DB10F  89 0A                     MOV dword ptr [EDX],ECX
006DB111  2B C3                     SUB EAX,EBX
006DB113  83 C2 04                  ADD EDX,0x4
006DB116  4F                        DEC EDI
006DB117  75 EB                     JNZ 0x006db104
LAB_006db119:
006DB119  8B 45 14                  MOV EAX,dword ptr [EBP + 0x14]
006DB11C  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
006DB11F  8B 75 18                  MOV ESI,dword ptr [EBP + 0x18]
006DB122  8B 7D 08                  MOV EDI,dword ptr [EBP + 0x8]
006DB125  8B 45 24                  MOV EAX,dword ptr [EBP + 0x24]
006DB128  D1 E8                     SHR EAX,0x1
006DB12A  F7 D8                     NEG EAX
006DB12C  89 45 20                  MOV dword ptr [EBP + 0x20],EAX
006DB12F  2B 75 1C                  SUB ESI,dword ptr [EBP + 0x1c]
LAB_006db132:
006DB132  8B 45 20                  MOV EAX,dword ptr [EBP + 0x20]
006DB135  0B C0                     OR EAX,EAX
006DB137  7F 08                     JG 0x006db141
LAB_006db139:
006DB139  03 75 1C                  ADD ESI,dword ptr [EBP + 0x1c]
006DB13C  03 45 14                  ADD EAX,dword ptr [EBP + 0x14]
006DB13F  7E F8                     JLE 0x006db139
LAB_006db141:
006DB141  89 45 20                  MOV dword ptr [EBP + 0x20],EAX
006DB144  8B 4D 10                  MOV ECX,dword ptr [EBP + 0x10]
006DB147  8B 5D F8                  MOV EBX,dword ptr [EBP + -0x8]
006DB14A  55                        PUSH EBP
006DB14B  8B 6D 28                  MOV EBP,dword ptr [EBP + 0x28]
006DB14E  F7 C7 02 00 00 00         TEST EDI,0x2
006DB154  74 18                     JZ 0x006db16e
006DB156  8B 03                     MOV EAX,dword ptr [EBX]
006DB158  83 C3 04                  ADD EBX,0x4
006DB15B  2B C0                     SUB EAX,EAX
006DB15D  8A 04 06                  MOV AL,byte ptr [ESI + EAX*0x1]
006DB160  66 8B 44 45 00            MOV AX,word ptr [EBP + EAX*0x2]
006DB165  66 89 07                  MOV word ptr [EDI],AX
006DB168  83 C7 02                  ADD EDI,0x2
006DB16B  49                        DEC ECX
006DB16C  7E 48                     JLE 0x006db1b6
LAB_006db16e:
006DB16E  83 E9 02                  SUB ECX,0x2
006DB171  7C 29                     JL 0x006db19c
LAB_006db173:
006DB173  8B 53 04                  MOV EDX,dword ptr [EBX + 0x4]
006DB176  33 C0                     XOR EAX,EAX
006DB178  8A 04 16                  MOV AL,byte ptr [ESI + EDX*0x1]
006DB17B  66 8B 44 45 00            MOV AX,word ptr [EBP + EAX*0x2]
006DB180  C1 E0 10                  SHL EAX,0x10
006DB183  8B 13                     MOV EDX,dword ptr [EBX]
006DB185  8A 14 16                  MOV DL,byte ptr [ESI + EDX*0x1]
006DB188  2A F6                     SUB DH,DH
006DB18A  66 8B 44 55 00            MOV AX,word ptr [EBP + EDX*0x2]
006DB18F  83 C3 08                  ADD EBX,0x8
006DB192  89 07                     MOV dword ptr [EDI],EAX
006DB194  83 C7 04                  ADD EDI,0x4
006DB197  83 E9 02                  SUB ECX,0x2
006DB19A  7D D7                     JGE 0x006db173
LAB_006db19c:
006DB19C  83 C1 02                  ADD ECX,0x2
006DB19F  74 15                     JZ 0x006db1b6
006DB1A1  8B 13                     MOV EDX,dword ptr [EBX]
006DB1A3  83 C3 04                  ADD EBX,0x4
006DB1A6  2B C0                     SUB EAX,EAX
006DB1A8  8A 04 16                  MOV AL,byte ptr [ESI + EDX*0x1]
006DB1AB  66 8B 44 45 00            MOV AX,word ptr [EBP + EAX*0x2]
006DB1B0  66 89 07                  MOV word ptr [EDI],AX
006DB1B3  83 C7 02                  ADD EDI,0x2
LAB_006db1b6:
006DB1B6  5D                        POP EBP
006DB1B7  2B 7D 10                  SUB EDI,dword ptr [EBP + 0x10]
006DB1BA  2B 7D 10                  SUB EDI,dword ptr [EBP + 0x10]
006DB1BD  03 7D 0C                  ADD EDI,dword ptr [EBP + 0xc]
006DB1C0  8B 55 20                  MOV EDX,dword ptr [EBP + 0x20]
006DB1C3  2B 55 24                  SUB EDX,dword ptr [EBP + 0x24]
006DB1C6  89 55 20                  MOV dword ptr [EBP + 0x20],EDX
006DB1C9  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
006DB1CC  48                        DEC EAX
006DB1CD  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
006DB1D0  0F 8F 5C FF FF FF         JG 0x006db132
006DB1D6  8D 65 EC                  LEA ESP,[EBP + -0x14]
006DB1D9  5F                        POP EDI
006DB1DA  5E                        POP ESI
006DB1DB  5B                        POP EBX
006DB1DC  8B E5                     MOV ESP,EBP
006DB1DE  5D                        POP EBP
006DB1DF  C2 24 00                  RET 0x24
