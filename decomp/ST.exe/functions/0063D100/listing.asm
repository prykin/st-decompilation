FUN_0063d100:
0063D100  55                        PUSH EBP
0063D101  8B EC                     MOV EBP,ESP
0063D103  83 EC 1C                  SUB ESP,0x1c
0063D106  53                        PUSH EBX
0063D107  8B D9                     MOV EBX,ECX
0063D109  56                        PUSH ESI
0063D10A  57                        PUSH EDI
0063D10B  85 DB                     TEST EBX,EBX
0063D10D  74 08                     JZ 0x0063d117
0063D10F  8D BB 31 02 00 00         LEA EDI,[EBX + 0x231]
0063D115  EB 02                     JMP 0x0063d119
LAB_0063d117:
0063D117  33 FF                     XOR EDI,EDI
LAB_0063d119:
0063D119  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
0063D11C  B9 54 00 00 00            MOV ECX,0x54
0063D121  8B F0                     MOV ESI,EAX
0063D123  F3 A5                     MOVSD.REP ES:EDI,ESI
0063D125  66 A5                     MOVSW ES:EDI,ESI
0063D127  8B 8B 36 03 00 00         MOV ECX,dword ptr [EBX + 0x336]
0063D12D  C7 83 47 03 00 00 00 00 00 00  MOV dword ptr [EBX + 0x347],0x0
0063D137  85 C9                     TEST ECX,ECX
0063D139  8D B0 52 01 00 00         LEA ESI,[EAX + 0x152]
0063D13F  74 17                     JZ 0x0063d158
0063D141  8B FE                     MOV EDI,ESI
0063D143  83 C6 04                  ADD ESI,0x4
0063D146  56                        PUSH ESI
0063D147  6A 00                     PUSH 0x0
0063D149  E8 12 2F 07 00            CALL 0x006b0060
0063D14E  89 83 36 03 00 00         MOV dword ptr [EBX + 0x336],EAX
0063D154  8B 07                     MOV EAX,dword ptr [EDI]
0063D156  03 F0                     ADD ESI,EAX
LAB_0063d158:
0063D158  6A 44                     PUSH 0x44
0063D15A  E8 11 DB 06 00            CALL 0x006aac70
0063D15F  89 45 E4                  MOV dword ptr [EBP + -0x1c],EAX
0063D162  33 FF                     XOR EDI,EDI
0063D164  33 C0                     XOR EAX,EAX
LAB_0063d166:
0063D166  8B 55 E4                  MOV EDX,dword ptr [EBP + -0x1c]
0063D169  8B 0D 74 67 80 00         MOV ECX,dword ptr [0x00806774]
0063D16F  89 0C 10                  MOV dword ptr [EAX + EDX*0x1],ECX
0063D172  83 C0 04                  ADD EAX,0x4
0063D175  83 F8 44                  CMP EAX,0x44
0063D178  7C EC                     JL 0x0063d166
0063D17A  8D 45 E4                  LEA EAX,[EBP + -0x1c]
0063D17D  56                        PUSH ESI
0063D17E  50                        PUSH EAX
0063D17F  8D 8B D5 01 00 00         LEA ECX,[EBX + 0x1d5]
0063D185  89 7D E8                  MOV dword ptr [EBP + -0x18],EDI
0063D188  89 7D EC                  MOV dword ptr [EBP + -0x14],EDI
0063D18B  89 7D F0                  MOV dword ptr [EBP + -0x10],EDI
0063D18E  89 7D F4                  MOV dword ptr [EBP + -0xc],EDI
0063D191  C7 45 F8 10 00 00 00      MOV dword ptr [EBP + -0x8],0x10
0063D198  89 7D FC                  MOV dword ptr [EBP + -0x4],EDI
0063D19B  E8 05 7B DC FF            CALL 0x00404ca5
0063D1A0  66 8B 8B 6E 02 00 00      MOV CX,word ptr [EBX + 0x26e]
0063D1A7  66 8B 93 6A 02 00 00      MOV DX,word ptr [EBX + 0x26a]
0063D1AE  66 8B 83 66 02 00 00      MOV AX,word ptr [EBX + 0x266]
0063D1B5  51                        PUSH ECX
0063D1B6  52                        PUSH EDX
0063D1B7  50                        PUSH EAX
0063D1B8  8B CB                     MOV ECX,EBX
0063D1BA  E8 48 5F DC FF            CALL 0x00403107
0063D1BF  8D 4D E4                  LEA ECX,[EBP + -0x1c]
0063D1C2  51                        PUSH ECX
0063D1C3  E8 98 DE 06 00            CALL 0x006ab060
0063D1C8  39 BB 3A 03 00 00         CMP dword ptr [EBX + 0x33a],EDI
0063D1CE  7C 4B                     JL 0x0063d21b
0063D1D0  8B B3 4B 03 00 00         MOV ESI,dword ptr [EBX + 0x34b]
0063D1D6  83 C8 FF                  OR EAX,0xffffffff
0063D1D9  89 83 3A 03 00 00         MOV dword ptr [EBX + 0x33a],EAX
0063D1DF  89 83 53 03 00 00         MOV dword ptr [EBX + 0x353],EAX
0063D1E5  33 C0                     XOR EAX,EAX
0063D1E7  3B F7                     CMP ESI,EDI
0063D1E9  0F 95 C0                  SETNZ AL
0063D1EC  50                        PUSH EAX
0063D1ED  8B CB                     MOV ECX,EBX
0063D1EF  E8 84 5C DC FF            CALL 0x00402e78
0063D1F4  85 C0                     TEST EAX,EAX
0063D1F6  75 23                     JNZ 0x0063d21b
0063D1F8  8B CB                     MOV ECX,EBX
0063D1FA  E8 1A 4D DC FF            CALL 0x00401f19
0063D1FF  6A 01                     PUSH 0x1
0063D201  8B CB                     MOV ECX,EBX
0063D203  E8 D0 4C DC FF            CALL 0x00401ed8
0063D208  8B 93 3A 03 00 00         MOV EDX,dword ptr [EBX + 0x33a]
0063D20E  8B 8B 11 02 00 00         MOV ECX,dword ptr [EBX + 0x211]
0063D214  57                        PUSH EDI
0063D215  52                        PUSH EDX
0063D216  E8 85 D8 0A 00            CALL 0x006eaaa0
LAB_0063d21b:
0063D21B  5F                        POP EDI
0063D21C  5E                        POP ESI
0063D21D  5B                        POP EBX
0063D21E  8B E5                     MOV ESP,EBP
0063D220  5D                        POP EBP
0063D221  C2 04 00                  RET 0x4
