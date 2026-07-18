FUN_006ace70:
006ACE70  0B D2                     OR EDX,EDX
006ACE72  B9 20 00 00 00            MOV ECX,0x20
006ACE77  8B DA                     MOV EBX,EDX
006ACE79  75 04                     JNZ 0x006ace7f
006ACE7B  33 C9                     XOR ECX,ECX
006ACE7D  8B D8                     MOV EBX,EAX
LAB_006ace7f:
006ACE7F  F7 C3 00 00 FF FF         TEST EBX,0xffff0000
006ACE85  74 05                     JZ 0x006ace8c
006ACE87  0F BD F3                  BSR ESI,EBX
006ACE8A  EB 08                     JMP 0x006ace94
LAB_006ace8c:
006ACE8C  33 F6                     XOR ESI,ESI
006ACE8E  66 0F BD F3               BSR SI,BX
006ACE92  74 43                     JZ 0x006aced7
LAB_006ace94:
006ACE94  03 CE                     ADD ECX,ESI
006ACE96  41                        INC ECX
006ACE97  80 F9 3E                  CMP CL,0x3e
006ACE9A  77 36                     JA 0x006aced2
006ACE9C  D1 E9                     SHR ECX,0x1
006ACE9E  8B D8                     MOV EBX,EAX
006ACEA0  8B F2                     MOV ESI,EDX
006ACEA2  0F AD F3                  SHRD EBX,ESI,CL
006ACEA5  8B FA                     MOV EDI,EDX
006ACEA7  8B F0                     MOV ESI,EAX
LAB_006acea9:
006ACEA9  3B DF                     CMP EBX,EDI
006ACEAB  73 06                     JNC 0x006aceb3
006ACEAD  8B DF                     MOV EBX,EDI
006ACEAF  D1 EB                     SHR EBX,0x1
006ACEB1  03 DF                     ADD EBX,EDI
LAB_006aceb3:
006ACEB3  8B C6                     MOV EAX,ESI
006ACEB5  8B D7                     MOV EDX,EDI
006ACEB7  8B CB                     MOV ECX,EBX
006ACEB9  F7 F3                     DIV EBX
006ACEBB  03 D8                     ADD EBX,EAX
006ACEBD  D1 DB                     RCR EBX,0x1
006ACEBF  D1 D8                     RCR EAX,0x1
006ACEC1  0B D2                     OR EDX,EDX
006ACEC3  74 05                     JZ 0x006aceca
006ACEC5  D1 D0                     RCL EAX,0x1
006ACEC7  83 D3 00                  ADC EBX,0x0
LAB_006aceca:
006ACECA  3B D9                     CMP EBX,ECX
006ACECC  75 DB                     JNZ 0x006acea9
006ACECE  8B C3                     MOV EAX,EBX
006ACED0  EB 05                     JMP 0x006aced7
LAB_006aced2:
006ACED2  B8 FF FF FF 7F            MOV EAX,0x7fffffff
LAB_006aced7:
006ACED7  C3                        RET
