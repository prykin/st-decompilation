FUN_004d83d0:
004D83D0  55                        PUSH EBP
004D83D1  8B EC                     MOV EBP,ESP
004D83D3  A1 68 A1 7F 00            MOV EAX,[0x007fa168]
004D83D8  85 C0                     TEST EAX,EAX
004D83DA  75 12                     JNZ 0x004d83ee
004D83DC  0F BF 05 46 B2 7F 00      MOVSX EAX,word ptr [0x007fb246]
004D83E3  50                        PUSH EAX
004D83E4  E8 87 28 1D 00            CALL 0x006aac70
004D83E9  A3 68 A1 7F 00            MOV [0x007fa168],EAX
LAB_004d83ee:
004D83EE  8B 55 0C                  MOV EDX,dword ptr [EBP + 0xc]
004D83F1  85 D2                     TEST EDX,EDX
004D83F3  7D 05                     JGE 0x004d83fa
004D83F5  33 D2                     XOR EDX,EDX
004D83F7  89 55 0C                  MOV dword ptr [EBP + 0xc],EDX
LAB_004d83fa:
004D83FA  56                        PUSH ESI
004D83FB  8B 75 10                  MOV ESI,dword ptr [EBP + 0x10]
004D83FE  85 F6                     TEST ESI,ESI
004D8400  57                        PUSH EDI
004D8401  7D 02                     JGE 0x004d8405
004D8403  33 F6                     XOR ESI,ESI
LAB_004d8405:
004D8405  0F BF 05 40 B2 7F 00      MOVSX EAX,word ptr [0x007fb240]
004D840C  8B 4D 14                  MOV ECX,dword ptr [EBP + 0x14]
004D840F  03 CA                     ADD ECX,EDX
004D8411  3B C8                     CMP ECX,EAX
004D8413  7E 05                     JLE 0x004d841a
004D8415  2B C2                     SUB EAX,EDX
004D8417  89 45 14                  MOV dword ptr [EBP + 0x14],EAX
LAB_004d841a:
004D841A  8B 4D 18                  MOV ECX,dword ptr [EBP + 0x18]
004D841D  0F BF 05 42 B2 7F 00      MOVSX EAX,word ptr [0x007fb242]
004D8424  8D 3C 0E                  LEA EDI,[ESI + ECX*0x1]
004D8427  3B F8                     CMP EDI,EAX
004D8429  7E 04                     JLE 0x004d842f
004D842B  2B C6                     SUB EAX,ESI
004D842D  8B C8                     MOV ECX,EAX
LAB_004d842f:
004D842F  8D 04 0E                  LEA EAX,[ESI + ECX*0x1]
004D8432  3B F0                     CMP ESI,EAX
004D8434  89 45 18                  MOV dword ptr [EBP + 0x18],EAX
004D8437  7D 54                     JGE 0x004d848d
004D8439  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
004D843C  53                        PUSH EBX
004D843D  25 FF 00 00 00            AND EAX,0xff
004D8442  89 45 10                  MOV dword ptr [EBP + 0x10],EAX
004D8445  EB 06                     JMP 0x004d844d
LAB_004d8447:
004D8447  8B 55 0C                  MOV EDX,dword ptr [EBP + 0xc]
004D844A  8B 45 10                  MOV EAX,dword ptr [EBP + 0x10]
LAB_004d844d:
004D844D  0F BF 3D 40 B2 7F 00      MOVSX EDI,word ptr [0x007fb240]
004D8454  0F AF FE                  IMUL EDI,ESI
004D8457  8B 1D 68 A1 7F 00         MOV EBX,dword ptr [0x007fa168]
004D845D  8B 4D 14                  MOV ECX,dword ptr [EBP + 0x14]
004D8460  03 FB                     ADD EDI,EBX
004D8462  8A D8                     MOV BL,AL
004D8464  8A FB                     MOV BH,BL
004D8466  03 FA                     ADD EDI,EDX
004D8468  8B C3                     MOV EAX,EBX
004D846A  8B D1                     MOV EDX,ECX
004D846C  C1 E0 10                  SHL EAX,0x10
004D846F  66 8B C3                  MOV AX,BX
004D8472  C1 E9 02                  SHR ECX,0x2
004D8475  F3 AB                     STOSD.REP ES:EDI
004D8477  8B CA                     MOV ECX,EDX
004D8479  83 E1 03                  AND ECX,0x3
004D847C  46                        INC ESI
004D847D  F3 AA                     STOSB.REP ES:EDI
004D847F  3B 75 18                  CMP ESI,dword ptr [EBP + 0x18]
004D8482  7C C3                     JL 0x004d8447
004D8484  5B                        POP EBX
004D8485  5F                        POP EDI
004D8486  33 C0                     XOR EAX,EAX
004D8488  5E                        POP ESI
004D8489  5D                        POP EBP
004D848A  C2 14 00                  RET 0x14
LAB_004d848d:
004D848D  5F                        POP EDI
004D848E  33 C0                     XOR EAX,EAX
004D8490  5E                        POP ESI
004D8491  5D                        POP EBP
004D8492  C2 14 00                  RET 0x14
