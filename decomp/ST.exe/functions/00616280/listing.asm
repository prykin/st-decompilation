FUN_00616280:
00616280  55                        PUSH EBP
00616281  8B EC                     MOV EBP,ESP
00616283  83 EC 14                  SUB ESP,0x14
00616286  53                        PUSH EBX
00616287  56                        PUSH ESI
00616288  8B F1                     MOV ESI,ECX
0061628A  33 DB                     XOR EBX,EBX
0061628C  57                        PUSH EDI
0061628D  89 5D FC                  MOV dword ptr [EBP + -0x4],EBX
00616290  66 8B 86 C5 02 00 00      MOV AX,word ptr [ESI + 0x2c5]
00616297  66 8B 8E C9 02 00 00      MOV CX,word ptr [ESI + 0x2c9]
0061629E  66 8B 96 C7 02 00 00      MOV DX,word ptr [ESI + 0x2c7]
006162A5  66 3B C3                  CMP AX,BX
006162A8  89 5D F8                  MOV dword ptr [EBP + -0x8],EBX
006162AB  89 5D F4                  MOV dword ptr [EBP + -0xc],EBX
006162AE  7C 61                     JL 0x00616311
006162B0  66 8B 3D 40 B2 7F 00      MOV DI,word ptr [0x007fb240]
006162B7  66 3B C7                  CMP AX,DI
006162BA  7D 55                     JGE 0x00616311
006162BC  66 3B D3                  CMP DX,BX
006162BF  7C 50                     JL 0x00616311
006162C1  66 3B 15 42 B2 7F 00      CMP DX,word ptr [0x007fb242]
006162C8  7D 47                     JGE 0x00616311
006162CA  66 3B CB                  CMP CX,BX
006162CD  7C 42                     JL 0x00616311
006162CF  66 3B 0D 44 B2 7F 00      CMP CX,word ptr [0x007fb244]
006162D6  7D 39                     JGE 0x00616311
006162D8  0F BF 1D 46 B2 7F 00      MOVSX EBX,word ptr [0x007fb246]
006162DF  0F BF C9                  MOVSX ECX,CX
006162E2  0F AF D9                  IMUL EBX,ECX
006162E5  0F BF CF                  MOVSX ECX,DI
006162E8  0F BF D2                  MOVSX EDX,DX
006162EB  0F AF CA                  IMUL ECX,EDX
006162EE  0F BF C0                  MOVSX EAX,AX
006162F1  03 D9                     ADD EBX,ECX
006162F3  8B 0D 48 B2 7F 00         MOV ECX,dword ptr [0x007fb248]
006162F9  03 D8                     ADD EBX,EAX
006162FB  8B 0C D9                  MOV ECX,dword ptr [ECX + EBX*0x8]
006162FE  33 DB                     XOR EBX,EBX
00616300  3B CB                     CMP ECX,EBX
00616302  74 0D                     JZ 0x00616311
00616304  8B 51 18                  MOV EDX,dword ptr [ECX + 0x18]
00616307  8B 86 D1 02 00 00         MOV EAX,dword ptr [ESI + 0x2d1]
0061630D  3B D0                     CMP EDX,EAX
0061630F  74 1E                     JZ 0x0061632f
LAB_00616311:
00616311  8B 8E D1 02 00 00         MOV ECX,dword ptr [ESI + 0x2d1]
00616317  8D 45 F0                  LEA EAX,[EBP + -0x10]
0061631A  50                        PUSH EAX
0061631B  51                        PUSH ECX
0061631C  8B 0D 38 2A 80 00         MOV ECX,dword ptr [0x00802a38]
00616322  E8 A9 FF 0C 00            CALL 0x006e62d0
00616327  83 F8 FC                  CMP EAX,-0x4
0061632A  74 6D                     JZ 0x00616399
0061632C  8B 4D F0                  MOV ECX,dword ptr [EBP + -0x10]
LAB_0061632f:
0061632F  8D 55 F4                  LEA EDX,[EBP + -0xc]
00616332  8D 45 F8                  LEA EAX,[EBP + -0x8]
00616335  52                        PUSH EDX
00616336  8D 55 FC                  LEA EDX,[EBP + -0x4]
00616339  50                        PUSH EAX
0061633A  52                        PUSH EDX
0061633B  89 5D EC                  MOV dword ptr [EBP + -0x14],EBX
0061633E  E8 A0 CE DE FF            CALL 0x004031e3
00616343  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
00616346  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
00616349  0F BF C8                  MOVSX ECX,AX
0061634C  8B 7D 0C                  MOV EDI,dword ptr [EBP + 0xc]
0061634F  89 0A                     MOV dword ptr [EDX],ECX
00616351  8B 4D F8                  MOV ECX,dword ptr [EBP + -0x8]
00616354  8B 5D 10                  MOV EBX,dword ptr [EBP + 0x10]
00616357  0F BF D1                  MOVSX EDX,CX
0061635A  89 17                     MOV dword ptr [EDI],EDX
0061635C  8B 55 F4                  MOV EDX,dword ptr [EBP + -0xc]
0061635F  0F BF FA                  MOVSX EDI,DX
00616362  89 3B                     MOV dword ptr [EBX],EDI
00616364  66 3B 86 CB 02 00 00      CMP AX,word ptr [ESI + 0x2cb]
0061636B  75 12                     JNZ 0x0061637f
0061636D  66 3B 8E CD 02 00 00      CMP CX,word ptr [ESI + 0x2cd]
00616374  75 09                     JNZ 0x0061637f
00616376  66 3B 96 CF 02 00 00      CMP DX,word ptr [ESI + 0x2cf]
0061637D  74 0E                     JZ 0x0061638d
LAB_0061637f:
0061637F  5F                        POP EDI
00616380  5E                        POP ESI
00616381  B8 01 00 00 00            MOV EAX,0x1
00616386  5B                        POP EBX
00616387  8B E5                     MOV ESP,EBP
00616389  5D                        POP EBP
0061638A  C2 0C 00                  RET 0xc
LAB_0061638d:
0061638D  8B 45 EC                  MOV EAX,dword ptr [EBP + -0x14]
00616390  5F                        POP EDI
00616391  5E                        POP ESI
00616392  5B                        POP EBX
00616393  8B E5                     MOV ESP,EBP
00616395  5D                        POP EBP
00616396  C2 0C 00                  RET 0xc
LAB_00616399:
00616399  5F                        POP EDI
0061639A  5E                        POP ESI
0061639B  83 C8 FF                  OR EAX,0xffffffff
0061639E  5B                        POP EBX
0061639F  8B E5                     MOV ESP,EBP
006163A1  5D                        POP EBP
006163A2  C2 0C 00                  RET 0xc
