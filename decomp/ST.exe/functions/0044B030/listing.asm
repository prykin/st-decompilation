FUN_0044b030:
0044B030  55                        PUSH EBP
0044B031  8B EC                     MOV EBP,ESP
0044B033  83 EC 10                  SUB ESP,0x10
0044B036  8B 55 0C                  MOV EDX,dword ptr [EBP + 0xc]
0044B039  53                        PUSH EBX
0044B03A  8B C2                     MOV EAX,EDX
0044B03C  56                        PUSH ESI
0044B03D  57                        PUSH EDI
0044B03E  83 E8 00                  SUB EAX,0x0
0044B041  8B F9                     MOV EDI,ECX
0044B043  74 52                     JZ 0x0044b097
0044B045  48                        DEC EAX
0044B046  74 32                     JZ 0x0044b07a
0044B048  68 F4 88 7A 00            PUSH 0x7a88f4
0044B04D  68 CC 4C 7A 00            PUSH 0x7a4ccc
0044B052  6A 00                     PUSH 0x0
0044B054  6A 00                     PUSH 0x0
0044B056  68 42 30 00 00            PUSH 0x3042
0044B05B  68 04 60 7A 00            PUSH 0x7a6004
0044B060  E8 6B 24 26 00            CALL 0x006ad4d0
0044B065  83 C4 18                  ADD ESP,0x18
0044B068  85 C0                     TEST EAX,EAX
0044B06A  0F 84 78 01 00 00         JZ 0x0044b1e8
0044B070  CC                        INT3
LAB_0044b07a:
0044B07A  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
0044B07D  0F BE C1                  MOVSX EAX,CL
0044B080  8D 34 80                  LEA ESI,[EAX + EAX*0x4]
0044B083  8D 34 F0                  LEA ESI,[EAX + ESI*0x8]
0044B086  8D 34 70                  LEA ESI,[EAX + ESI*0x2]
0044B089  C1 E6 04                  SHL ESI,0x4
0044B08C  03 F0                     ADD ESI,EAX
0044B08E  8D 34 75 D3 4F 7F 00      LEA ESI,[ESI*0x2 + 0x7f4fd3]
0044B095  EB 1B                     JMP 0x0044b0b2
LAB_0044b097:
0044B097  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
0044B09A  0F BE C1                  MOVSX EAX,CL
0044B09D  8D 34 80                  LEA ESI,[EAX + EAX*0x4]
0044B0A0  8D 34 F0                  LEA ESI,[EAX + ESI*0x8]
0044B0A3  8D 34 70                  LEA ESI,[EAX + ESI*0x2]
0044B0A6  C1 E6 04                  SHL ESI,0x4
0044B0A9  03 F0                     ADD ESI,EAX
0044B0AB  8D 34 75 83 4F 7F 00      LEA ESI,[ESI*0x2 + 0x7f4f83]
LAB_0044b0b2:
0044B0B2  8B 5D 10                  MOV EBX,dword ptr [EBP + 0x10]
0044B0B5  85 DB                     TEST EBX,EBX
0044B0B7  0F 8E AF 00 00 00         JLE 0x0044b16c
0044B0BD  83 3E 00                  CMP dword ptr [ESI],0x0
0044B0C0  75 56                     JNZ 0x0044b118
0044B0C2  8B C3                     MOV EAX,EBX
0044B0C4  8B CE                     MOV ECX,ESI
0044B0C6  C1 E0 04                  SHL EAX,0x4
0044B0C9  89 45 08                  MOV dword ptr [EBP + 0x8],EAX
0044B0CC  03 C6                     ADD EAX,ESI
0044B0CE  89 45 10                  MOV dword ptr [EBP + 0x10],EAX
0044B0D1  8B 10                     MOV EDX,dword ptr [EAX]
0044B0D3  89 11                     MOV dword ptr [ECX],EDX
0044B0D5  8B 50 04                  MOV EDX,dword ptr [EAX + 0x4]
0044B0D8  89 51 04                  MOV dword ptr [ECX + 0x4],EDX
0044B0DB  8B 50 08                  MOV EDX,dword ptr [EAX + 0x8]
0044B0DE  89 51 08                  MOV dword ptr [ECX + 0x8],EDX
0044B0E1  8D 53 01                  LEA EDX,[EBX + 0x1]
0044B0E4  8B 40 0C                  MOV EAX,dword ptr [EAX + 0xc]
0044B0E7  89 41 0C                  MOV dword ptr [ECX + 0xc],EAX
0044B0EA  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
0044B0ED  B9 40 00 00 00            MOV ECX,0x40
0044B0F2  C1 E2 04                  SHL EDX,0x4
0044B0F5  2B C8                     SUB ECX,EAX
0044B0F7  8B 45 10                  MOV EAX,dword ptr [EBP + 0x10]
0044B0FA  03 D6                     ADD EDX,ESI
0044B0FC  51                        PUSH ECX
0044B0FD  52                        PUSH EDX
0044B0FE  50                        PUSH EAX
0044B0FF  E8 6C 29 2E 00            CALL 0x0072da70
0044B104  83 C4 0C                  ADD ESP,0xc
0044B107  33 C0                     XOR EAX,EAX
0044B109  89 46 40                  MOV dword ptr [ESI + 0x40],EAX
0044B10C  C7 46 44 FF 00 00 00      MOV dword ptr [ESI + 0x44],0xff
0044B113  89 46 4A                  MOV dword ptr [ESI + 0x4a],EAX
0044B116  EB 54                     JMP 0x0044b16c
LAB_0044b118:
0044B118  6A 00                     PUSH 0x0
0044B11A  6A 00                     PUSH 0x0
0044B11C  52                        PUSH EDX
0044B11D  51                        PUSH ECX
0044B11E  8B CF                     MOV ECX,EDI
0044B120  E8 C2 81 FB FF            CALL 0x004032e7
0044B125  8B C3                     MOV EAX,EBX
0044B127  C1 E0 04                  SHL EAX,0x4
0044B12A  50                        PUSH EAX
0044B12B  56                        PUSH ESI
0044B12C  8D 0C 30                  LEA ECX,[EAX + ESI*0x1]
0044B12F  8B 14 30                  MOV EDX,dword ptr [EAX + ESI*0x1]
0044B132  89 55 F0                  MOV dword ptr [EBP + -0x10],EDX
0044B135  8B 51 04                  MOV EDX,dword ptr [ECX + 0x4]
0044B138  89 55 F4                  MOV dword ptr [EBP + -0xc],EDX
0044B13B  8B 51 08                  MOV EDX,dword ptr [ECX + 0x8]
0044B13E  89 55 F8                  MOV dword ptr [EBP + -0x8],EDX
0044B141  8D 56 10                  LEA EDX,[ESI + 0x10]
0044B144  8B 49 0C                  MOV ECX,dword ptr [ECX + 0xc]
0044B147  52                        PUSH EDX
0044B148  89 4D FC                  MOV dword ptr [EBP + -0x4],ECX
0044B14B  E8 20 29 2E 00            CALL 0x0072da70
0044B150  8B 4D F0                  MOV ECX,dword ptr [EBP + -0x10]
0044B153  8B 55 F4                  MOV EDX,dword ptr [EBP + -0xc]
0044B156  8B C6                     MOV EAX,ESI
0044B158  83 C4 0C                  ADD ESP,0xc
0044B15B  89 08                     MOV dword ptr [EAX],ECX
0044B15D  8B 4D F8                  MOV ECX,dword ptr [EBP + -0x8]
0044B160  89 50 04                  MOV dword ptr [EAX + 0x4],EDX
0044B163  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
0044B166  89 48 08                  MOV dword ptr [EAX + 0x8],ECX
0044B169  89 50 0C                  MOV dword ptr [EAX + 0xc],EDX
LAB_0044b16c:
0044B16C  66 8B 46 08               MOV AX,word ptr [ESI + 0x8]
0044B170  8B 4E 0A                  MOV ECX,dword ptr [ESI + 0xa]
0044B173  8B 16                     MOV EDX,dword ptr [ESI]
0044B175  50                        PUSH EAX
0044B176  8A 46 04                  MOV AL,byte ptr [ESI + 0x4]
0044B179  51                        PUSH ECX
0044B17A  52                        PUSH EDX
0044B17B  50                        PUSH EAX
0044B17C  8B CF                     MOV ECX,EDI
0044B17E  E8 8F AB FB FF            CALL 0x00405d12
0044B183  8B CF                     MOV ECX,EDI
0044B185  E8 54 76 FB FF            CALL 0x004027de
0044B18A  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
0044B18D  85 C0                     TEST EAX,EAX
0044B18F  75 2D                     JNZ 0x0044b1be
0044B191  50                        PUSH EAX
0044B192  6A 01                     PUSH 0x1
0044B194  8B CF                     MOV ECX,EDI
0044B196  E8 BA 9A FB FF            CALL 0x00404c55
0044B19B  6A 00                     PUSH 0x0
0044B19D  6A 02                     PUSH 0x2
0044B19F  8B CF                     MOV ECX,EDI
0044B1A1  E8 AF 9A FB FF            CALL 0x00404c55
0044B1A6  85 DB                     TEST EBX,EBX
0044B1A8  7E 3E                     JLE 0x0044b1e8
0044B1AA  6A 00                     PUSH 0x0
0044B1AC  6A 0E                     PUSH 0xe
0044B1AE  8B CF                     MOV ECX,EDI
0044B1B0  E8 A0 9A FB FF            CALL 0x00404c55
0044B1B5  5F                        POP EDI
0044B1B6  5E                        POP ESI
0044B1B7  5B                        POP EBX
0044B1B8  8B E5                     MOV ESP,EBP
0044B1BA  5D                        POP EBP
0044B1BB  C2 0C 00                  RET 0xc
LAB_0044b1be:
0044B1BE  83 F8 01                  CMP EAX,0x1
0044B1C1  75 25                     JNZ 0x0044b1e8
0044B1C3  6A 00                     PUSH 0x0
0044B1C5  6A 05                     PUSH 0x5
0044B1C7  8B CF                     MOV ECX,EDI
0044B1C9  E8 87 9A FB FF            CALL 0x00404c55
0044B1CE  6A 00                     PUSH 0x0
0044B1D0  6A 04                     PUSH 0x4
0044B1D2  8B CF                     MOV ECX,EDI
0044B1D4  E8 7C 9A FB FF            CALL 0x00404c55
0044B1D9  85 DB                     TEST EBX,EBX
0044B1DB  7E 0B                     JLE 0x0044b1e8
0044B1DD  6A 00                     PUSH 0x0
0044B1DF  6A 0F                     PUSH 0xf
0044B1E1  8B CF                     MOV ECX,EDI
0044B1E3  E8 6D 9A FB FF            CALL 0x00404c55
LAB_0044b1e8:
0044B1E8  5F                        POP EDI
0044B1E9  5E                        POP ESI
0044B1EA  5B                        POP EBX
0044B1EB  8B E5                     MOV ESP,EBP
0044B1ED  5D                        POP EBP
0044B1EE  C2 0C 00                  RET 0xc
