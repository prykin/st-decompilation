FUN_006756d0:
006756D0  55                        PUSH EBP
006756D1  8B EC                     MOV EBP,ESP
006756D3  51                        PUSH ECX
006756D4  0F BF 05 42 B2 7F 00      MOVSX EAX,word ptr [0x007fb242]
006756DB  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
006756DE  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
006756E1  0F BF 15 40 B2 7F 00      MOVSX EDX,word ptr [0x007fb240]
006756E8  66 83 39 00               CMP word ptr [ECX],0x0
006756EC  7D 05                     JGE 0x006756f3
006756EE  66 C7 01 00 00            MOV word ptr [ECX],0x0
LAB_006756f3:
006756F3  57                        PUSH EDI
006756F4  8B 7D 0C                  MOV EDI,dword ptr [EBP + 0xc]
006756F7  66 83 3F 00               CMP word ptr [EDI],0x0
006756FB  7D 05                     JGE 0x00675702
006756FD  66 C7 07 00 00            MOV word ptr [EDI],0x0
LAB_00675702:
00675702  0F BF 01                  MOVSX EAX,word ptr [ECX]
00675705  53                        PUSH EBX
00675706  56                        PUSH ESI
00675707  8B 75 10                  MOV ESI,dword ptr [EBP + 0x10]
0067570A  0F BF 1E                  MOVSX EBX,word ptr [ESI]
0067570D  03 C3                     ADD EAX,EBX
0067570F  3B C2                     CMP EAX,EDX
00675711  7E 18                     JLE 0x0067572b
LAB_00675713:
00675713  66 8B 01                  MOV AX,word ptr [ECX]
00675716  66 85 C0                  TEST AX,AX
00675719  7E 10                     JLE 0x0067572b
0067571B  48                        DEC EAX
0067571C  66 89 01                  MOV word ptr [ECX],AX
0067571F  0F BF 1E                  MOVSX EBX,word ptr [ESI]
00675722  0F BF C0                  MOVSX EAX,AX
00675725  03 D8                     ADD EBX,EAX
00675727  3B DA                     CMP EBX,EDX
00675729  7F E8                     JG 0x00675713
LAB_0067572b:
0067572B  66 8B 09                  MOV CX,word ptr [ECX]
0067572E  0F BF 06                  MOVSX EAX,word ptr [ESI]
00675731  0F BF D9                  MOVSX EBX,CX
00675734  03 C3                     ADD EAX,EBX
00675736  3B C2                     CMP EAX,EDX
00675738  7E 05                     JLE 0x0067573f
0067573A  2B D1                     SUB EDX,ECX
0067573C  66 89 16                  MOV word ptr [ESI],DX
LAB_0067573f:
0067573F  8B 4D 14                  MOV ECX,dword ptr [EBP + 0x14]
00675742  0F BF 07                  MOVSX EAX,word ptr [EDI]
00675745  0F BF 11                  MOVSX EDX,word ptr [ECX]
00675748  03 C2                     ADD EAX,EDX
0067574A  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
0067574D  3B C2                     CMP EAX,EDX
0067574F  7E 18                     JLE 0x00675769
LAB_00675751:
00675751  66 8B 07                  MOV AX,word ptr [EDI]
00675754  66 85 C0                  TEST AX,AX
00675757  7E 10                     JLE 0x00675769
00675759  48                        DEC EAX
0067575A  66 89 07                  MOV word ptr [EDI],AX
0067575D  0F BF 31                  MOVSX ESI,word ptr [ECX]
00675760  0F BF C0                  MOVSX EAX,AX
00675763  03 C6                     ADD EAX,ESI
00675765  3B C2                     CMP EAX,EDX
00675767  7F E8                     JG 0x00675751
LAB_00675769:
00675769  66 8B 3F                  MOV DI,word ptr [EDI]
0067576C  0F BF 31                  MOVSX ESI,word ptr [ECX]
0067576F  0F BF C7                  MOVSX EAX,DI
00675772  03 C6                     ADD EAX,ESI
00675774  5E                        POP ESI
00675775  3B C2                     CMP EAX,EDX
00675777  5B                        POP EBX
00675778  7E 05                     JLE 0x0067577f
0067577A  2B D7                     SUB EDX,EDI
0067577C  66 89 11                  MOV word ptr [ECX],DX
LAB_0067577f:
0067577F  5F                        POP EDI
00675780  8B E5                     MOV ESP,EBP
00675782  5D                        POP EBP
00675783  C3                        RET
