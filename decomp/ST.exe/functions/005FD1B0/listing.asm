FUN_005fd1b0:
005FD1B0  55                        PUSH EBP
005FD1B1  8B EC                     MOV EBP,ESP
005FD1B3  81 EC 5C 01 00 00         SUB ESP,0x15c
005FD1B9  53                        PUSH EBX
005FD1BA  57                        PUSH EDI
005FD1BB  B9 55 00 00 00            MOV ECX,0x55
005FD1C0  33 C0                     XOR EAX,EAX
005FD1C2  8D BD A4 FE FF FF         LEA EDI,[EBP + 0xfffffea4]
005FD1C8  8B 55 14                  MOV EDX,dword ptr [EBP + 0x14]
005FD1CB  F3 AB                     STOSD.REP ES:EDI
005FD1CD  8B 4D 10                  MOV ECX,dword ptr [EBP + 0x10]
005FD1D0  33 DB                     XOR EBX,EBX
005FD1D2  AA                        STOSB ES:EDI
005FD1D3  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
005FD1D6  89 95 C8 FE FF FF         MOV dword ptr [EBP + 0xfffffec8],EDX
005FD1DC  66 8B 55 20               MOV DX,word ptr [EBP + 0x20]
005FD1E0  89 85 A8 FE FF FF         MOV dword ptr [EBP + 0xfffffea8],EAX
005FD1E6  B8 01 00 00 00            MOV EAX,0x1
005FD1EB  66 89 95 D0 FE FF FF      MOV word ptr [EBP + 0xfffffed0],DX
005FD1F2  8B 55 2C                  MOV EDX,dword ptr [EBP + 0x2c]
005FD1F5  89 85 AC FE FF FF         MOV dword ptr [EBP + 0xfffffeac],EAX
005FD1FB  89 85 B0 FE FF FF         MOV dword ptr [EBP + 0xfffffeb0],EAX
005FD201  89 8D C4 FE FF FF         MOV dword ptr [EBP + 0xfffffec4],ECX
005FD207  66 8B 4D 1C               MOV CX,word ptr [EBP + 0x1c]
005FD20B  89 85 C0 FE FF FF         MOV dword ptr [EBP + 0xfffffec0],EAX
005FD211  66 8B 45 18               MOV AX,word ptr [EBP + 0x18]
005FD215  89 55 F5                  MOV dword ptr [EBP + -0xb],EDX
005FD218  8B 55 34                  MOV EDX,dword ptr [EBP + 0x34]
005FD21B  66 89 85 CC FE FF FF      MOV word ptr [EBP + 0xfffffecc],AX
005FD222  8B 45 24                  MOV EAX,dword ptr [EBP + 0x24]
005FD225  66 89 8D CE FE FF FF      MOV word ptr [EBP + 0xfffffece],CX
005FD22C  8B 4D 28                  MOV ECX,dword ptr [EBP + 0x28]
005FD22F  89 95 D6 FE FF FF         MOV dword ptr [EBP + 0xfffffed6],EDX
005FD235  8B 55 30                  MOV EDX,dword ptr [EBP + 0x30]
005FD238  89 45 ED                  MOV dword ptr [EBP + -0x13],EAX
005FD23B  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
005FD23E  89 4D F1                  MOV dword ptr [EBP + -0xf],ECX
005FD241  8B 4D 38                  MOV ECX,dword ptr [EBP + 0x38]
005FD244  3B D3                     CMP EDX,EBX
005FD246  89 5D FC                  MOV dword ptr [EBP + -0x4],EBX
005FD249  C7 85 A4 FE FF FF A4 01 00 00  MOV dword ptr [EBP + 0xfffffea4],0x1a4
005FD253  89 9D B4 FE FF FF         MOV dword ptr [EBP + 0xfffffeb4],EBX
005FD259  C7 85 B8 FE FF FF FE 00 00 00  MOV dword ptr [EBP + 0xfffffeb8],0xfe
005FD263  89 85 BC FE FF FF         MOV dword ptr [EBP + 0xfffffebc],EAX
005FD269  89 8D D2 FE FF FF         MOV dword ptr [EBP + 0xfffffed2],ECX
005FD26F  74 52                     JZ 0x005fd2c3
005FD271  8B FA                     MOV EDI,EDX
005FD273  83 C9 FF                  OR ECX,0xffffffff
005FD276  33 C0                     XOR EAX,EAX
005FD278  F2 AE                     SCASB.REPNE ES:EDI
005FD27A  F7 D1                     NOT ECX
005FD27C  49                        DEC ECX
005FD27D  83 F9 0E                  CMP ECX,0xe
005FD280  77 29                     JA 0x005fd2ab
005FD282  8B FA                     MOV EDI,EDX
005FD284  83 C9 FF                  OR ECX,0xffffffff
005FD287  F2 AE                     SCASB.REPNE ES:EDI
005FD289  56                        PUSH ESI
005FD28A  8D B5 DA FE FF FF         LEA ESI,[EBP + 0xfffffeda]
005FD290  F7 D1                     NOT ECX
005FD292  2B F9                     SUB EDI,ECX
005FD294  8B D6                     MOV EDX,ESI
005FD296  8B C1                     MOV EAX,ECX
005FD298  8B F7                     MOV ESI,EDI
005FD29A  8B FA                     MOV EDI,EDX
005FD29C  C1 E9 02                  SHR ECX,0x2
005FD29F  F3 A5                     MOVSD.REP ES:EDI,ESI
005FD2A1  8B C8                     MOV ECX,EAX
005FD2A3  83 E1 03                  AND ECX,0x3
005FD2A6  F3 A4                     MOVSB.REP ES:EDI,ESI
005FD2A8  5E                        POP ESI
005FD2A9  EB 18                     JMP 0x005fd2c3
LAB_005fd2ab:
005FD2AB  6A 0E                     PUSH 0xe
005FD2AD  8D 85 DA FE FF FF         LEA EAX,[EBP + 0xfffffeda]
005FD2B3  52                        PUSH EDX
005FD2B4  50                        PUSH EAX
005FD2B5  E8 86 10 13 00            CALL 0x0072e340
005FD2BA  83 C4 0C                  ADD ESP,0xc
005FD2BD  88 9D E8 FE FF FF         MOV byte ptr [EBP + 0xfffffee8],BL
LAB_005fd2c3:
005FD2C3  8B 0D 38 2A 80 00         MOV ECX,dword ptr [0x00802a38]
005FD2C9  8D 85 A4 FE FF FF         LEA EAX,[EBP + 0xfffffea4]
005FD2CF  53                        PUSH EBX
005FD2D0  50                        PUSH EAX
005FD2D1  8B 11                     MOV EDX,dword ptr [ECX]
005FD2D3  8D 45 FC                  LEA EAX,[EBP + -0x4]
005FD2D6  50                        PUSH EAX
005FD2D7  53                        PUSH EBX
005FD2D8  68 57 01 00 00            PUSH 0x157
005FD2DD  FF 52 08                  CALL dword ptr [EDX + 0x8]
005FD2E0  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
005FD2E3  3B C3                     CMP EAX,EBX
005FD2E5  74 09                     JZ 0x005fd2f0
005FD2E7  8B 40 18                  MOV EAX,dword ptr [EAX + 0x18]
005FD2EA  5F                        POP EDI
005FD2EB  5B                        POP EBX
005FD2EC  8B E5                     MOV ESP,EBP
005FD2EE  5D                        POP EBP
005FD2EF  C3                        RET
LAB_005fd2f0:
005FD2F0  8B C3                     MOV EAX,EBX
005FD2F2  5F                        POP EDI
005FD2F3  5B                        POP EBX
005FD2F4  8B E5                     MOV ESP,EBP
005FD2F6  5D                        POP EBP
005FD2F7  C3                        RET
