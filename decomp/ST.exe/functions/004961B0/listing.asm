FUN_004961b0:
004961B0  55                        PUSH EBP
004961B1  8B EC                     MOV EBP,ESP
004961B3  66 8B 55 08               MOV DX,word ptr [EBP + 0x8]
004961B7  66 85 D2                  TEST DX,DX
004961BA  7C 63                     JL 0x0049621f
004961BC  66 3B 15 40 B2 7F 00      CMP DX,word ptr [0x007fb240]
004961C3  7D 5A                     JGE 0x0049621f
004961C5  66 8B 4D 0C               MOV CX,word ptr [EBP + 0xc]
004961C9  66 85 C9                  TEST CX,CX
004961CC  7C 51                     JL 0x0049621f
004961CE  66 3B 0D 42 B2 7F 00      CMP CX,word ptr [0x007fb242]
004961D5  7D 48                     JGE 0x0049621f
004961D7  66 8B 45 10               MOV AX,word ptr [EBP + 0x10]
004961DB  66 85 C0                  TEST AX,AX
004961DE  7C 3F                     JL 0x0049621f
004961E0  66 3B 05 44 B2 7F 00      CMP AX,word ptr [0x007fb244]
004961E7  7D 36                     JGE 0x0049621f
004961E9  56                        PUSH ESI
004961EA  0F BF 35 78 B2 7F 00      MOVSX ESI,word ptr [0x007fb278]
004961F1  0F BF C9                  MOVSX ECX,CX
004961F4  0F AF F1                  IMUL ESI,ECX
004961F7  0F BF 0D 7E B2 7F 00      MOVSX ECX,word ptr [0x007fb27e]
004961FE  0F BF C0                  MOVSX EAX,AX
00496201  0F AF C8                  IMUL ECX,EAX
00496204  03 F1                     ADD ESI,ECX
00496206  33 C0                     XOR EAX,EAX
00496208  0F BF CA                  MOVSX ECX,DX
0049620B  8B 15 80 B2 7F 00         MOV EDX,dword ptr [0x007fb280]
00496211  03 F1                     ADD ESI,ECX
00496213  66 39 04 72               CMP word ptr [EDX + ESI*0x2],AX
00496217  5E                        POP ESI
00496218  0F 94 C0                  SETZ AL
0049621B  5D                        POP EBP
0049621C  C2 0C 00                  RET 0xc
LAB_0049621f:
0049621F  33 C0                     XOR EAX,EAX
00496221  5D                        POP EBP
00496222  C2 0C 00                  RET 0xc
