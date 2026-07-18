FUN_00660910:
00660910  55                        PUSH EBP
00660911  8B EC                     MOV EBP,ESP
00660913  83 EC 08                  SUB ESP,0x8
00660916  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
00660919  33 C0                     XOR EAX,EAX
0066091B  56                        PUSH ESI
0066091C  57                        PUSH EDI
0066091D  89 45 F8                  MOV dword ptr [EBP + -0x8],EAX
00660920  8B F9                     MOV EDI,ECX
00660922  66 89 45 FC               MOV word ptr [EBP + -0x4],AX
00660926  66 85 D2                  TEST DX,DX
00660929  88 45 FE                  MOV byte ptr [EBP + -0x2],AL
0066092C  89 87 A7 00 00 00         MOV dword ptr [EDI + 0xa7],EAX
00660932  0F 8C B7 00 00 00         JL 0x006609ef
00660938  66 8B 0D 40 B2 7F 00      MOV CX,word ptr [0x007fb240]
0066093F  66 3B D1                  CMP DX,CX
00660942  0F 8D A7 00 00 00         JGE 0x006609ef
00660948  8B 75 0C                  MOV ESI,dword ptr [EBP + 0xc]
0066094B  66 85 F6                  TEST SI,SI
0066094E  0F 8C 9B 00 00 00         JL 0x006609ef
00660954  66 3B 35 42 B2 7F 00      CMP SI,word ptr [0x007fb242]
0066095B  0F 8D 8E 00 00 00         JGE 0x006609ef
00660961  8B 45 10                  MOV EAX,dword ptr [EBP + 0x10]
00660964  66 85 C0                  TEST AX,AX
00660967  0F 8C 82 00 00 00         JL 0x006609ef
0066096D  66 3B 05 44 B2 7F 00      CMP AX,word ptr [0x007fb244]
00660974  7D 79                     JGE 0x006609ef
00660976  53                        PUSH EBX
00660977  0F BF 1D 46 B2 7F 00      MOVSX EBX,word ptr [0x007fb246]
0066097E  0F BF C0                  MOVSX EAX,AX
00660981  0F AF D8                  IMUL EBX,EAX
00660984  0F BF C9                  MOVSX ECX,CX
00660987  0F BF C6                  MOVSX EAX,SI
0066098A  0F AF C8                  IMUL ECX,EAX
0066098D  03 D9                     ADD EBX,ECX
0066098F  0F BF CA                  MOVSX ECX,DX
00660992  8B 15 48 B2 7F 00         MOV EDX,dword ptr [0x007fb248]
00660998  03 D9                     ADD EBX,ECX
0066099A  8B 04 DA                  MOV EAX,dword ptr [EDX + EBX*0x8]
0066099D  5B                        POP EBX
0066099E  85 C0                     TEST EAX,EAX
006609A0  74 4D                     JZ 0x006609ef
006609A2  8A 48 24                  MOV CL,byte ptr [EAX + 0x24]
006609A5  88 4D F8                  MOV byte ptr [EBP + -0x8],CL
006609A8  66 8B 50 32               MOV DX,word ptr [EAX + 0x32]
006609AC  66 89 55 F9               MOV word ptr [EBP + -0x7],DX
006609B0  8B 40 18                  MOV EAX,dword ptr [EAX + 0x18]
006609B3  89 45 FB                  MOV dword ptr [EBP + -0x5],EAX
006609B6  66 8B 47 7D               MOV AX,word ptr [EDI + 0x7d]
006609BA  66 3D FE FF               CMP AX,0xfffe
006609BE  74 2F                     JZ 0x006609ef
006609C0  8B 0D 74 A1 7F 00         MOV ECX,dword ptr [0x007fa174]
006609C6  85 C9                     TEST ECX,ECX
006609C8  74 25                     JZ 0x006609ef
006609CA  8A 57 24                  MOV DL,byte ptr [EDI + 0x24]
006609CD  50                        PUSH EAX
006609CE  52                        PUSH EDX
006609CF  E8 25 53 DA FF            CALL 0x00405cf9
006609D4  85 C0                     TEST EAX,EAX
006609D6  74 17                     JZ 0x006609ef
006609D8  8B 10                     MOV EDX,dword ptr [EAX]
006609DA  8D 4D F8                  LEA ECX,[EBP + -0x8]
006609DD  51                        PUSH ECX
006609DE  6A 0F                     PUSH 0xf
006609E0  8B C8                     MOV ECX,EAX
006609E2  FF 52 08                  CALL dword ptr [EDX + 0x8]
006609E5  5F                        POP EDI
006609E6  33 C0                     XOR EAX,EAX
006609E8  5E                        POP ESI
006609E9  8B E5                     MOV ESP,EBP
006609EB  5D                        POP EBP
006609EC  C2 10 00                  RET 0x10
LAB_006609ef:
006609EF  5F                        POP EDI
006609F0  83 C8 FF                  OR EAX,0xffffffff
006609F3  5E                        POP ESI
006609F4  8B E5                     MOV ESP,EBP
006609F6  5D                        POP EBP
006609F7  C2 10 00                  RET 0x10
