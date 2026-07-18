FUN_006f0e30:
006F0E30  55                        PUSH EBP
006F0E31  8B EC                     MOV EBP,ESP
006F0E33  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
006F0E36  53                        PUSH EBX
006F0E37  8B 5D 0C                  MOV EBX,dword ptr [EBP + 0xc]
006F0E3A  56                        PUSH ESI
006F0E3B  8A 02                     MOV AL,byte ptr [EDX]
006F0E3D  57                        PUSH EDI
006F0E3E  8A 0B                     MOV CL,byte ptr [EBX]
006F0E40  3A C1                     CMP AL,CL
006F0E42  74 12                     JZ 0x006f0e56
006F0E44  81 E1 FF 00 00 00         AND ECX,0xff
006F0E4A  25 FF 00 00 00            AND EAX,0xff
006F0E4F  5F                        POP EDI
006F0E50  5E                        POP ESI
006F0E51  2B C1                     SUB EAX,ECX
006F0E53  5B                        POP EBX
006F0E54  5D                        POP EBP
006F0E55  C3                        RET
LAB_006f0e56:
006F0E56  66 8B 42 16               MOV AX,word ptr [EDX + 0x16]
006F0E5A  66 8B 4B 16               MOV CX,word ptr [EBX + 0x16]
006F0E5E  66 3B C1                  CMP AX,CX
006F0E61  74 0D                     JZ 0x006f0e70
006F0E63  0F BF C9                  MOVSX ECX,CX
006F0E66  0F BF C0                  MOVSX EAX,AX
006F0E69  5F                        POP EDI
006F0E6A  5E                        POP ESI
006F0E6B  2B C1                     SUB EAX,ECX
006F0E6D  5B                        POP EBX
006F0E6E  5D                        POP EBP
006F0E6F  C3                        RET
LAB_006f0e70:
006F0E70  0F BF C8                  MOVSX ECX,AX
006F0E73  8D 7B 18                  LEA EDI,[EBX + 0x18]
006F0E76  8D 72 18                  LEA ESI,[EDX + 0x18]
006F0E79  33 C0                     XOR EAX,EAX
006F0E7B  F3 A6                     CMPSB.REPE ES:EDI,ESI
006F0E7D  74 05                     JZ 0x006f0e84
006F0E7F  1B C0                     SBB EAX,EAX
006F0E81  83 D8 FF                  SBB EAX,-0x1
LAB_006f0e84:
006F0E84  85 C0                     TEST EAX,EAX
006F0E86  75 0B                     JNZ 0x006f0e93
006F0E88  B9 06 00 00 00            MOV ECX,0x6
006F0E8D  8B F3                     MOV ESI,EBX
006F0E8F  8B FA                     MOV EDI,EDX
006F0E91  F3 A5                     MOVSD.REP ES:EDI,ESI
LAB_006f0e93:
006F0E93  5F                        POP EDI
006F0E94  5E                        POP ESI
006F0E95  5B                        POP EBX
006F0E96  5D                        POP EBP
006F0E97  C3                        RET
