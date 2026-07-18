FUN_004952e0:
004952E0  53                        PUSH EBX
004952E1  56                        PUSH ESI
004952E2  8B F1                     MOV ESI,ECX
004952E4  57                        PUSH EDI
004952E5  66 8B 3D 40 B2 7F 00      MOV DI,word ptr [0x007fb240]
004952EC  66 8B 86 6F 06 00 00      MOV AX,word ptr [ESI + 0x66f]
004952F3  66 8B 8E 73 06 00 00      MOV CX,word ptr [ESI + 0x673]
004952FA  66 8B 96 71 06 00 00      MOV DX,word ptr [ESI + 0x671]
00495301  66 85 C0                  TEST AX,AX
00495304  7C 61                     JL 0x00495367
00495306  66 3B C7                  CMP AX,DI
00495309  7D 5C                     JGE 0x00495367
0049530B  66 85 D2                  TEST DX,DX
0049530E  7C 57                     JL 0x00495367
00495310  66 3B 15 42 B2 7F 00      CMP DX,word ptr [0x007fb242]
00495317  7D 4E                     JGE 0x00495367
00495319  66 85 C9                  TEST CX,CX
0049531C  7C 49                     JL 0x00495367
0049531E  66 3B 0D 44 B2 7F 00      CMP CX,word ptr [0x007fb244]
00495325  7D 40                     JGE 0x00495367
00495327  0F BF 1D 46 B2 7F 00      MOVSX EBX,word ptr [0x007fb246]
0049532E  0F BF C9                  MOVSX ECX,CX
00495331  0F AF D9                  IMUL EBX,ECX
00495334  0F BF CF                  MOVSX ECX,DI
00495337  0F BF D2                  MOVSX EDX,DX
0049533A  0F AF CA                  IMUL ECX,EDX
0049533D  0F BF C0                  MOVSX EAX,AX
00495340  03 D9                     ADD EBX,ECX
00495342  8B 0D 48 B2 7F 00         MOV ECX,dword ptr [0x007fb248]
00495348  03 D8                     ADD EBX,EAX
0049534A  8B 0C D9                  MOV ECX,dword ptr [ECX + EBX*0x8]
0049534D  85 C9                     TEST ECX,ECX
0049534F  74 16                     JZ 0x00495367
00495351  81 79 20 E8 03 00 00      CMP dword ptr [ECX + 0x20],0x3e8
00495358  75 0D                     JNZ 0x00495367
0049535A  56                        PUSH ESI
0049535B  E8 E3 D3 F6 FF            CALL 0x00402743
00495360  66 8B 3D 40 B2 7F 00      MOV DI,word ptr [0x007fb240]
LAB_00495367:
00495367  66 8B 86 23 04 00 00      MOV AX,word ptr [ESI + 0x423]
0049536E  66 8B 8E 27 04 00 00      MOV CX,word ptr [ESI + 0x427]
00495375  66 8B 96 25 04 00 00      MOV DX,word ptr [ESI + 0x425]
0049537C  66 85 C0                  TEST AX,AX
0049537F  7C 5A                     JL 0x004953db
00495381  66 3B C7                  CMP AX,DI
00495384  7D 55                     JGE 0x004953db
00495386  66 85 D2                  TEST DX,DX
00495389  7C 50                     JL 0x004953db
0049538B  66 3B 15 42 B2 7F 00      CMP DX,word ptr [0x007fb242]
00495392  7D 47                     JGE 0x004953db
00495394  66 85 C9                  TEST CX,CX
00495397  7C 42                     JL 0x004953db
00495399  66 3B 0D 44 B2 7F 00      CMP CX,word ptr [0x007fb244]
004953A0  7D 39                     JGE 0x004953db
004953A2  0F BF 1D 46 B2 7F 00      MOVSX EBX,word ptr [0x007fb246]
004953A9  0F BF C9                  MOVSX ECX,CX
004953AC  0F AF D9                  IMUL EBX,ECX
004953AF  0F BF CF                  MOVSX ECX,DI
004953B2  0F BF D2                  MOVSX EDX,DX
004953B5  0F AF CA                  IMUL ECX,EDX
004953B8  0F BF C0                  MOVSX EAX,AX
004953BB  03 D9                     ADD EBX,ECX
004953BD  8B 0D 48 B2 7F 00         MOV ECX,dword ptr [0x007fb248]
004953C3  03 D8                     ADD EBX,EAX
004953C5  8B 0C D9                  MOV ECX,dword ptr [ECX + EBX*0x8]
004953C8  85 C9                     TEST ECX,ECX
004953CA  74 0F                     JZ 0x004953db
004953CC  81 79 20 E8 03 00 00      CMP dword ptr [ECX + 0x20],0x3e8
004953D3  75 06                     JNZ 0x004953db
004953D5  56                        PUSH ESI
004953D6  E8 68 D3 F6 FF            CALL 0x00402743
LAB_004953db:
004953DB  5F                        POP EDI
004953DC  5E                        POP ESI
004953DD  5B                        POP EBX
004953DE  C3                        RET
