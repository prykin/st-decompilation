FUN_006b5050:
006B5050  55                        PUSH EBP
006B5051  8B EC                     MOV EBP,ESP
006B5053  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
006B5056  56                        PUSH ESI
006B5057  8B 70 14                  MOV ESI,dword ptr [EAX + 0x14]
006B505A  85 F6                     TEST ESI,ESI
006B505C  75 18                     JNZ 0x006b5076
006B505E  66 8B 70 0E               MOV SI,word ptr [EAX + 0xe]
006B5062  0F AF 70 04               IMUL ESI,dword ptr [EAX + 0x4]
006B5066  83 C6 1F                  ADD ESI,0x1f
006B5069  C1 EE 03                  SHR ESI,0x3
006B506C  81 E6 FC FF FF 1F         AND ESI,0x1ffffffc
006B5072  0F AF 70 08               IMUL ESI,dword ptr [EAX + 0x8]
LAB_006b5076:
006B5076  50                        PUSH EAX
006B5077  E8 94 FF FF FF            CALL 0x006b5010
006B507C  8D 44 30 28               LEA EAX,[EAX + ESI*0x1 + 0x28]
006B5080  5E                        POP ESI
006B5081  5D                        POP EBP
006B5082  C2 04 00                  RET 0x4
