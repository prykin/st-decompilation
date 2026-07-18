FUN_006b6160:
006B6160  55                        PUSH EBP
006B6161  8B EC                     MOV EBP,ESP
006B6163  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
006B6166  56                        PUSH ESI
006B6167  8B 75 0C                  MOV ESI,dword ptr [EBP + 0xc]
006B616A  33 C0                     XOR EAX,EAX
LAB_006b616c:
006B616C  33 D2                     XOR EDX,EDX
006B616E  83 C1 02                  ADD ECX,0x2
006B6171  8A 14 30                  MOV DL,byte ptr [EAX + ESI*0x1]
006B6174  C1 EA 04                  SHR EDX,0x4
006B6177  8A 92 B0 DB 7E 00         MOV DL,byte ptr [EDX + 0x7edbb0]
006B617D  88 51 FE                  MOV byte ptr [ECX + -0x2],DL
006B6180  8A 14 30                  MOV DL,byte ptr [EAX + ESI*0x1]
006B6183  83 E2 0F                  AND EDX,0xf
006B6186  40                        INC EAX
006B6187  83 F8 10                  CMP EAX,0x10
006B618A  8A 92 B0 DB 7E 00         MOV DL,byte ptr [EDX + 0x7edbb0]
006B6190  88 51 FF                  MOV byte ptr [ECX + -0x1],DL
006B6193  7C D7                     JL 0x006b616c
006B6195  5E                        POP ESI
006B6196  5D                        POP EBP
006B6197  C2 08 00                  RET 0x8
