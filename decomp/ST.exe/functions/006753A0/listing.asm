FUN_006753a0:
006753A0  55                        PUSH EBP
006753A1  8B EC                     MOV EBP,ESP
006753A3  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
006753A6  83 C0 CE                  ADD EAX,-0x32
006753A9  83 F8 20                  CMP EAX,0x20
006753AC  77 1B                     JA 0x006753c9
006753AE  33 C9                     XOR ECX,ECX
006753B0  8A 88 E0 53 67 00         MOV CL,byte ptr [EAX + 0x6753e0]
switchD_006753b6::switchD:
006753B6  FF 24 8D D0 53 67 00      JMP dword ptr [ECX*0x4 + 0x6753d0]
switchD_006753b6::caseD_32:
006753BD  32 C0                     XOR AL,AL
006753BF  5D                        POP EBP
006753C0  C3                        RET
switchD_006753b6::caseD_35:
006753C1  B0 01                     MOV AL,0x1
006753C3  5D                        POP EBP
006753C4  C3                        RET
switchD_006753b6::caseD_36:
006753C5  B0 02                     MOV AL,0x2
006753C7  5D                        POP EBP
006753C8  C3                        RET
switchD_006753b6::caseD_3e:
006753C9  B0 7F                     MOV AL,0x7f
006753CB  5D                        POP EBP
006753CC  C3                        RET
