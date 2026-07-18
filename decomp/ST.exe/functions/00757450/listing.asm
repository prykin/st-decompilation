FUN_00757450:
00757450  55                        PUSH EBP
00757451  8B EC                     MOV EBP,ESP
00757453  56                        PUSH ESI
00757454  57                        PUSH EDI
00757455  8B 7D 08                  MOV EDI,dword ptr [EBP + 0x8]
00757458  8B 75 0C                  MOV ESI,dword ptr [EBP + 0xc]
0075745B  8B 47 08                  MOV EAX,dword ptr [EDI + 0x8]
0075745E  8B 57 10                  MOV EDX,dword ptr [EDI + 0x10]
00757461  8B 40 34                  MOV EAX,dword ptr [EAX + 0x34]
00757464  03 C2                     ADD EAX,EDX
00757466  83 FE FF                  CMP ESI,-0x1
00757469  75 14                     JNZ 0x0075747f
0075746B  8B 47 0C                  MOV EAX,dword ptr [EDI + 0xc]
0075746E  33 F6                     XOR ESI,ESI
00757470  5F                        POP EDI
00757471  8B 48 1C                  MOV ECX,dword ptr [EAX + 0x1c]
00757474  89 74 C8 44               MOV dword ptr [EAX + ECX*0x8 + 0x44],ESI
00757478  8B C6                     MOV EAX,ESI
0075747A  5E                        POP ESI
0075747B  5D                        POP EBP
0075747C  C2 08 00                  RET 0x8
LAB_0075747f:
0075747F  0F BF 48 08               MOVSX ECX,word ptr [EAX + 0x8]
00757483  3B F1                     CMP ESI,ECX
00757485  7D 1D                     JGE 0x007574a4
00757487  8B 4F 0C                  MOV ECX,dword ptr [EDI + 0xc]
0075748A  66 8B 51 34               MOV DX,word ptr [ECX + 0x34]
0075748E  66 85 D2                  TEST DX,DX
00757491  74 05                     JZ 0x00757498
00757493  0F BF C2                  MOVSX EAX,DX
00757496  EB 08                     JMP 0x007574a0
LAB_00757498:
00757498  8D 54 30 18               LEA EDX,[EAX + ESI*0x1 + 0x18]
0075749C  52                        PUSH EDX
0075749D  FF 51 08                  CALL dword ptr [ECX + 0x8]
LAB_007574a0:
007574A0  8D 74 06 08               LEA ESI,[ESI + EAX*0x1 + 0x8]
LAB_007574a4:
007574A4  8B 47 0C                  MOV EAX,dword ptr [EDI + 0xc]
007574A7  5F                        POP EDI
007574A8  8B 48 1C                  MOV ECX,dword ptr [EAX + 0x1c]
007574AB  89 74 C8 44               MOV dword ptr [EAX + ECX*0x8 + 0x44],ESI
007574AF  8B C6                     MOV EAX,ESI
007574B1  5E                        POP ESI
007574B2  5D                        POP EBP
007574B3  C2 08 00                  RET 0x8
