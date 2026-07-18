FUN_006dafd0:
006DAFD0  55                        PUSH EBP
006DAFD1  8B EC                     MOV EBP,ESP
006DAFD3  53                        PUSH EBX
006DAFD4  56                        PUSH ESI
006DAFD5  57                        PUSH EDI
006DAFD6  8B 75 10                  MOV ESI,dword ptr [EBP + 0x10]
006DAFD9  8B 7D 08                  MOV EDI,dword ptr [EBP + 0x8]
006DAFDC  8B 5D 0C                  MOV EBX,dword ptr [EBP + 0xc]
006DAFDF  8B 4D 18                  MOV ECX,dword ptr [EBP + 0x18]
006DAFE2  F7 C7 02 00 00 00         TEST EDI,0x2
006DAFE8  0F 84 88 00 00 00         JZ 0x006db076
LAB_006dafee:
006DAFEE  66 8B 06                  MOV AX,word ptr [ESI]
006DAFF1  8B D0                     MOV EDX,EAX
006DAFF3  83 C6 02                  ADD ESI,0x2
006DAFF6  66 89 07                  MOV word ptr [EDI],AX
006DAFF9  83 C7 02                  ADD EDI,0x2
006DAFFC  49                        DEC ECX
006DAFFD  7E 15                     JLE 0x006db014
006DAFFF  C1 E0 10                  SHL EAX,0x10
LAB_006db002:
006DB002  66 8B 16                  MOV DX,word ptr [ESI]
006DB005  0F AC D0 10               SHRD EAX,EDX,0x10
006DB009  83 C6 02                  ADD ESI,0x2
006DB00C  89 07                     MOV dword ptr [EDI],EAX
006DB00E  83 C7 04                  ADD EDI,0x4
006DB011  49                        DEC ECX
006DB012  7F EE                     JG 0x006db002
LAB_006db014:
006DB014  66 89 17                  MOV word ptr [EDI],DX
006DB017  83 C7 02                  ADD EDI,0x2
006DB01A  8B 4D 18                  MOV ECX,dword ptr [EBP + 0x18]
006DB01D  03 FB                     ADD EDI,EBX
006DB01F  F7 D9                     NEG ECX
006DB021  8D 34 4E                  LEA ESI,[ESI + ECX*0x2]
006DB024  8D 3C 8F                  LEA EDI,[EDI + ECX*0x4]
006DB027  F7 D9                     NEG ECX
006DB029  66 8B 06                  MOV AX,word ptr [ESI]
006DB02C  8B D0                     MOV EDX,EAX
006DB02E  83 C6 02                  ADD ESI,0x2
006DB031  66 89 07                  MOV word ptr [EDI],AX
006DB034  83 C7 02                  ADD EDI,0x2
006DB037  49                        DEC ECX
006DB038  7E 15                     JLE 0x006db04f
006DB03A  C1 E0 10                  SHL EAX,0x10
LAB_006db03d:
006DB03D  66 8B 16                  MOV DX,word ptr [ESI]
006DB040  0F AC D0 10               SHRD EAX,EDX,0x10
006DB044  83 C6 02                  ADD ESI,0x2
006DB047  89 07                     MOV dword ptr [EDI],EAX
006DB049  83 C7 04                  ADD EDI,0x4
006DB04C  49                        DEC ECX
006DB04D  7F EE                     JG 0x006db03d
LAB_006db04f:
006DB04F  66 89 17                  MOV word ptr [EDI],DX
006DB052  83 C7 02                  ADD EDI,0x2
006DB055  8B 4D 18                  MOV ECX,dword ptr [EBP + 0x18]
006DB058  03 75 14                  ADD ESI,dword ptr [EBP + 0x14]
006DB05B  03 FB                     ADD EDI,EBX
006DB05D  8B 45 1C                  MOV EAX,dword ptr [EBP + 0x1c]
006DB060  F7 D9                     NEG ECX
006DB062  8D 34 4E                  LEA ESI,[ESI + ECX*0x2]
006DB065  8D 3C 8F                  LEA EDI,[EDI + ECX*0x4]
006DB068  F7 D9                     NEG ECX
006DB06A  48                        DEC EAX
006DB06B  89 45 1C                  MOV dword ptr [EBP + 0x1c],EAX
006DB06E  0F 8F 7A FF FF FF         JG 0x006dafee
006DB074  EB 52                     JMP 0x006db0c8
LAB_006db076:
006DB076  66 8B 06                  MOV AX,word ptr [ESI]
006DB079  C1 E0 10                  SHL EAX,0x10
006DB07C  66 8B 06                  MOV AX,word ptr [ESI]
006DB07F  83 C6 02                  ADD ESI,0x2
006DB082  89 07                     MOV dword ptr [EDI],EAX
006DB084  83 C7 04                  ADD EDI,0x4
006DB087  49                        DEC ECX
006DB088  7F EC                     JG 0x006db076
006DB08A  8B 4D 18                  MOV ECX,dword ptr [EBP + 0x18]
006DB08D  03 FB                     ADD EDI,EBX
006DB08F  F7 D9                     NEG ECX
006DB091  8D 34 4E                  LEA ESI,[ESI + ECX*0x2]
006DB094  8D 3C 8F                  LEA EDI,[EDI + ECX*0x4]
006DB097  F7 D9                     NEG ECX
LAB_006db099:
006DB099  66 8B 06                  MOV AX,word ptr [ESI]
006DB09C  C1 E0 10                  SHL EAX,0x10
006DB09F  66 8B 06                  MOV AX,word ptr [ESI]
006DB0A2  83 C6 02                  ADD ESI,0x2
006DB0A5  89 07                     MOV dword ptr [EDI],EAX
006DB0A7  83 C7 04                  ADD EDI,0x4
006DB0AA  49                        DEC ECX
006DB0AB  7F EC                     JG 0x006db099
006DB0AD  8B 4D 18                  MOV ECX,dword ptr [EBP + 0x18]
006DB0B0  03 75 14                  ADD ESI,dword ptr [EBP + 0x14]
006DB0B3  03 FB                     ADD EDI,EBX
006DB0B5  8B 45 1C                  MOV EAX,dword ptr [EBP + 0x1c]
006DB0B8  F7 D9                     NEG ECX
006DB0BA  8D 34 4E                  LEA ESI,[ESI + ECX*0x2]
006DB0BD  8D 3C 8F                  LEA EDI,[EDI + ECX*0x4]
006DB0C0  F7 D9                     NEG ECX
006DB0C2  48                        DEC EAX
006DB0C3  89 45 1C                  MOV dword ptr [EBP + 0x1c],EAX
006DB0C6  7F AE                     JG 0x006db076
LAB_006db0c8:
006DB0C8  5F                        POP EDI
006DB0C9  5E                        POP ESI
006DB0CA  5B                        POP EBX
006DB0CB  5D                        POP EBP
006DB0CC  C2 18 00                  RET 0x18
