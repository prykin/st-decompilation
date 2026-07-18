FUN_004db980:
004DB980  55                        PUSH EBP
004DB981  8B EC                     MOV EBP,ESP
004DB983  66 8B 55 08               MOV DX,word ptr [EBP + 0x8]
004DB987  56                        PUSH ESI
004DB988  66 85 D2                  TEST DX,DX
004DB98B  7C 68                     JL 0x004db9f5
004DB98D  66 8B 35 40 B2 7F 00      MOV SI,word ptr [0x007fb240]
004DB994  66 3B D6                  CMP DX,SI
004DB997  7D 5C                     JGE 0x004db9f5
004DB999  66 8B 4D 0C               MOV CX,word ptr [EBP + 0xc]
004DB99D  66 85 C9                  TEST CX,CX
004DB9A0  7C 53                     JL 0x004db9f5
004DB9A2  66 3B 0D 42 B2 7F 00      CMP CX,word ptr [0x007fb242]
004DB9A9  7D 4A                     JGE 0x004db9f5
004DB9AB  66 8B 45 10               MOV AX,word ptr [EBP + 0x10]
004DB9AF  66 85 C0                  TEST AX,AX
004DB9B2  7C 41                     JL 0x004db9f5
004DB9B4  66 3B 05 44 B2 7F 00      CMP AX,word ptr [0x007fb244]
004DB9BB  7D 38                     JGE 0x004db9f5
004DB9BD  57                        PUSH EDI
004DB9BE  0F BF 3D 46 B2 7F 00      MOVSX EDI,word ptr [0x007fb246]
004DB9C5  0F BF C0                  MOVSX EAX,AX
004DB9C8  0F AF F8                  IMUL EDI,EAX
004DB9CB  0F BF C6                  MOVSX EAX,SI
004DB9CE  0F BF C9                  MOVSX ECX,CX
004DB9D1  0F AF C1                  IMUL EAX,ECX
004DB9D4  0F BF D2                  MOVSX EDX,DX
004DB9D7  03 F8                     ADD EDI,EAX
004DB9D9  8B 45 14                  MOV EAX,dword ptr [EBP + 0x14]
004DB9DC  03 FA                     ADD EDI,EDX
004DB9DE  8B 15 48 B2 7F 00         MOV EDX,dword ptr [0x007fb248]
004DB9E4  25 FF 00 00 00            AND EAX,0xff
004DB9E9  8D 0C 78                  LEA ECX,[EAX + EDI*0x2]
004DB9EC  5F                        POP EDI
004DB9ED  5E                        POP ESI
004DB9EE  8B 04 8A                  MOV EAX,dword ptr [EDX + ECX*0x4]
004DB9F1  5D                        POP EBP
004DB9F2  C2 10 00                  RET 0x10
LAB_004db9f5:
004DB9F5  33 C0                     XOR EAX,EAX
004DB9F7  5E                        POP ESI
004DB9F8  5D                        POP EBP
004DB9F9  C2 10 00                  RET 0x10
