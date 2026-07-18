FUN_005c00d0:
005C00D0  55                        PUSH EBP
005C00D1  8B EC                     MOV EBP,ESP
005C00D3  51                        PUSH ECX
005C00D4  53                        PUSH EBX
005C00D5  56                        PUSH ESI
005C00D6  8B F1                     MOV ESI,ECX
005C00D8  32 DB                     XOR BL,BL
005C00DA  88 5D FC                  MOV byte ptr [EBP + -0x4],BL
005C00DD  C7 46 29 02 00 00 00      MOV dword ptr [ESI + 0x29],0x2
005C00E4  C7 46 2D 20 00 00 00      MOV dword ptr [ESI + 0x2d],0x20
LAB_005c00eb:
005C00EB  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
005C00EE  25 FF 00 00 00            AND EAX,0xff
005C00F3  8B 84 86 8F 00 00 00      MOV EAX,dword ptr [ESI + EAX*0x4 + 0x8f]
005C00FA  85 C0                     TEST EAX,EAX
005C00FC  74 29                     JZ 0x005c0127
005C00FE  84 DB                     TEST BL,BL
005C0100  89 46 25                  MOV dword ptr [ESI + 0x25],EAX
005C0103  75 0F                     JNZ 0x005c0114
005C0105  8A 46 67                  MOV AL,byte ptr [ESI + 0x67]
005C0108  33 C9                     XOR ECX,ECX
005C010A  84 C0                     TEST AL,AL
005C010C  0F 95 C1                  SETNZ CL
005C010F  89 4E 31                  MOV dword ptr [ESI + 0x31],ECX
005C0112  EB 07                     JMP 0x005c011b
LAB_005c0114:
005C0114  C7 46 31 01 00 00 00      MOV dword ptr [ESI + 0x31],0x1
LAB_005c011b:
005C011B  8B 4E 0C                  MOV ECX,dword ptr [ESI + 0xc]
005C011E  8D 46 1D                  LEA EAX,[ESI + 0x1d]
005C0121  50                        PUSH EAX
005C0122  8B 11                     MOV EDX,dword ptr [ECX]
005C0124  FF 52 18                  CALL dword ptr [EDX + 0x18]
LAB_005c0127:
005C0127  FE C3                     INC BL
005C0129  80 FB 04                  CMP BL,0x4
005C012C  88 5D FC                  MOV byte ptr [EBP + -0x4],BL
005C012F  72 BA                     JC 0x005c00eb
005C0131  8B 86 9F 00 00 00         MOV EAX,dword ptr [ESI + 0x9f]
005C0137  85 C0                     TEST EAX,EAX
005C0139  74 1D                     JZ 0x005c0158
005C013B  8A 4E 67                  MOV CL,byte ptr [ESI + 0x67]
005C013E  84 C9                     TEST CL,CL
005C0140  74 16                     JZ 0x005c0158
005C0142  8B 4E 0C                  MOV ECX,dword ptr [ESI + 0xc]
005C0145  89 46 25                  MOV dword ptr [ESI + 0x25],EAX
005C0148  C7 46 31 01 00 00 00      MOV dword ptr [ESI + 0x31],0x1
005C014F  83 C6 1D                  ADD ESI,0x1d
005C0152  8B 11                     MOV EDX,dword ptr [ECX]
005C0154  56                        PUSH ESI
005C0155  FF 52 18                  CALL dword ptr [EDX + 0x18]
LAB_005c0158:
005C0158  5E                        POP ESI
005C0159  5B                        POP EBX
005C015A  8B E5                     MOV ESP,EBP
005C015C  5D                        POP EBP
005C015D  C3                        RET
