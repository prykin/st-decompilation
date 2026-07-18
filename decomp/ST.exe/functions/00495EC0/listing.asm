DumpClassC::WritePtr:
00495EC0  55                        PUSH EBP
00495EC1  8B EC                     MOV EBP,ESP
00495EC3  66 8B 15 40 B2 7F 00      MOV DX,word ptr [0x007fb240]
00495ECA  53                        PUSH EBX
00495ECB  56                        PUSH ESI
00495ECC  66 8B 75 0C               MOV SI,word ptr [EBP + 0xc]
00495ED0  0F BF C2                  MOVSX EAX,DX
00495ED3  0F BF CE                  MOVSX ECX,SI
00495ED6  57                        PUSH EDI
00495ED7  66 8B 7D 10               MOV DI,word ptr [EBP + 0x10]
00495EDB  0F AF C1                  IMUL EAX,ECX
00495EDE  0F BF 0D 46 B2 7F 00      MOVSX ECX,word ptr [0x007fb246]
00495EE5  0F BF DF                  MOVSX EBX,DI
00495EE8  0F AF CB                  IMUL ECX,EBX
00495EEB  03 C1                     ADD EAX,ECX
00495EED  66 8B 4D 08               MOV CX,word ptr [EBP + 0x8]
00495EF1  0F BF D9                  MOVSX EBX,CX
00495EF4  03 C3                     ADD EAX,EBX
00495EF6  66 85 C9                  TEST CX,CX
00495EF9  0F 8C 84 00 00 00         JL 0x00495f83
00495EFF  66 3B CA                  CMP CX,DX
00495F02  7D 7F                     JGE 0x00495f83
00495F04  66 85 F6                  TEST SI,SI
00495F07  7C 7A                     JL 0x00495f83
00495F09  66 3B 35 42 B2 7F 00      CMP SI,word ptr [0x007fb242]
00495F10  7D 71                     JGE 0x00495f83
00495F12  66 85 FF                  TEST DI,DI
00495F15  7C 6C                     JL 0x00495f83
00495F17  66 3B 3D 44 B2 7F 00      CMP DI,word ptr [0x007fb244]
00495F1E  7D 63                     JGE 0x00495f83
00495F20  8B 55 14                  MOV EDX,dword ptr [EBP + 0x14]
00495F23  81 E2 FF 00 00 00         AND EDX,0xff
00495F29  8D 04 42                  LEA EAX,[EDX + EAX*0x2]
00495F2C  8B 15 48 B2 7F 00         MOV EDX,dword ptr [0x007fb248]
00495F32  8D 14 82                  LEA EDX,[EDX + EAX*0x4]
00495F35  83 3A 00                  CMP dword ptr [EDX],0x0
00495F38  74 2F                     JZ 0x00495f69
00495F3A  68 14 BE 7A 00            PUSH 0x7abe14
00495F3F  68 CC 4C 7A 00            PUSH 0x7a4ccc
00495F44  6A 00                     PUSH 0x0
00495F46  6A 00                     PUSH 0x0
00495F48  68 84 00 00 00            PUSH 0x84
00495F4D  68 D4 BD 7A 00            PUSH 0x7abdd4
00495F52  E8 79 75 21 00            CALL 0x006ad4d0
00495F57  83 C4 18                  ADD ESP,0x18
00495F5A  85 C0                     TEST EAX,EAX
00495F5C  74 01                     JZ 0x00495f5f
00495F5E  CC                        INT3
LAB_00495f5f:
00495F5F  5F                        POP EDI
00495F60  5E                        POP ESI
00495F61  83 C8 FF                  OR EAX,0xffffffff
00495F64  5B                        POP EBX
00495F65  5D                        POP EBP
00495F66  C2 18 00                  RET 0x18
LAB_00495f69:
00495F69  8B 45 18                  MOV EAX,dword ptr [EBP + 0x18]
00495F6C  89 02                     MOV dword ptr [EDX],EAX
00495F6E  66 89 78 5F               MOV word ptr [EAX + 0x5f],DI
00495F72  66 89 70 5D               MOV word ptr [EAX + 0x5d],SI
00495F76  5F                        POP EDI
00495F77  66 89 48 5B               MOV word ptr [EAX + 0x5b],CX
00495F7B  5E                        POP ESI
00495F7C  33 C0                     XOR EAX,EAX
00495F7E  5B                        POP EBX
00495F7F  5D                        POP EBP
00495F80  C2 18 00                  RET 0x18
LAB_00495f83:
00495F83  68 F8 BD 7A 00            PUSH 0x7abdf8
00495F88  68 CC 4C 7A 00            PUSH 0x7a4ccc
00495F8D  6A 00                     PUSH 0x0
00495F8F  6A 00                     PUSH 0x0
00495F91  6A 7F                     PUSH 0x7f
00495F93  68 D4 BD 7A 00            PUSH 0x7abdd4
00495F98  E8 33 75 21 00            CALL 0x006ad4d0
00495F9D  83 C4 18                  ADD ESP,0x18
00495FA0  85 C0                     TEST EAX,EAX
00495FA2  74 01                     JZ 0x00495fa5
00495FA4  CC                        INT3
LAB_00495fa5:
00495FA5  5F                        POP EDI
00495FA6  5E                        POP ESI
00495FA7  33 C0                     XOR EAX,EAX
00495FA9  5B                        POP EBX
00495FAA  5D                        POP EBP
00495FAB  C2 18 00                  RET 0x18
