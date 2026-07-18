FUN_006aff93:
006AFF93  8B D8                     MOV EBX,EAX
006AFF95  83 FB 5A                  CMP EBX,0x5a
006AFF98  76 08                     JBE 0x006affa2
006AFF9A  81 EB B4 00 00 00         SUB EBX,0xb4
006AFFA0  F7 DB                     NEG EBX
LAB_006affa2:
006AFFA2  D1 E3                     SHL EBX,0x1
006AFFA4  0F B7 83 A0 E9 6C 00      MOVZX EAX,word ptr [EBX + 0x6ce9a0]
006AFFAB  8B 1D 8C DA 7E 00         MOV EBX,dword ptr [0x007eda8c]
006AFFB1  83 FB 64                  CMP EBX,0x64
006AFFB4  75 03                     JNZ 0x006affb9
006AFFB6  99                        CDQ
006AFFB7  F7 F3                     DIV EBX
LAB_006affb9:
006AFFB9  C3                        RET
