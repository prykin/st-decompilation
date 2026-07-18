FUN_005f91e0:
005F91E0  55                        PUSH EBP
005F91E1  8B EC                     MOV EBP,ESP
005F91E3  83 EC 08                  SUB ESP,0x8
005F91E6  56                        PUSH ESI
005F91E7  57                        PUSH EDI
005F91E8  8B F9                     MOV EDI,ECX
005F91EA  8D 45 F8                  LEA EAX,[EBP + -0x8]
005F91ED  8D 4D FC                  LEA ECX,[EBP + -0x4]
005F91F0  50                        PUSH EAX
005F91F1  8D 55 FE                  LEA EDX,[EBP + -0x2]
005F91F4  51                        PUSH ECX
005F91F5  52                        PUSH EDX
005F91F6  8B CF                     MOV ECX,EDI
005F91F8  E8 C8 86 E0 FF            CALL 0x004018c5
005F91FD  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
005F9200  66 8B 4D FE               MOV CX,word ptr [EBP + -0x2]
005F9204  48                        DEC EAX
005F9205  66 85 C9                  TEST CX,CX
005F9208  0F 8C B6 00 00 00         JL 0x005f92c4
005F920E  66 8B 35 40 B2 7F 00      MOV SI,word ptr [0x007fb240]
005F9215  66 3B CE                  CMP CX,SI
005F9218  0F 8D A6 00 00 00         JGE 0x005f92c4
005F921E  66 8B 55 FC               MOV DX,word ptr [EBP + -0x4]
005F9222  66 85 D2                  TEST DX,DX
005F9225  0F 8C 99 00 00 00         JL 0x005f92c4
005F922B  66 3B 15 42 B2 7F 00      CMP DX,word ptr [0x007fb242]
005F9232  0F 8D 8C 00 00 00         JGE 0x005f92c4
005F9238  66 85 C0                  TEST AX,AX
005F923B  0F 8C 83 00 00 00         JL 0x005f92c4
005F9241  66 3B 05 44 B2 7F 00      CMP AX,word ptr [0x007fb244]
005F9248  7D 7A                     JGE 0x005f92c4
005F924A  53                        PUSH EBX
005F924B  0F BF 1D 46 B2 7F 00      MOVSX EBX,word ptr [0x007fb246]
005F9252  0F BF C0                  MOVSX EAX,AX
005F9255  0F AF D8                  IMUL EBX,EAX
005F9258  0F BF C6                  MOVSX EAX,SI
005F925B  0F BF D2                  MOVSX EDX,DX
005F925E  0F AF C2                  IMUL EAX,EDX
005F9261  03 D8                     ADD EBX,EAX
005F9263  0F BF C1                  MOVSX EAX,CX
005F9266  8B 0D 48 B2 7F 00         MOV ECX,dword ptr [0x007fb248]
005F926C  03 D8                     ADD EBX,EAX
005F926E  8B 34 D9                  MOV ESI,dword ptr [ECX + EBX*0x8]
005F9271  5B                        POP EBX
005F9272  85 F6                     TEST ESI,ESI
005F9274  74 4E                     JZ 0x005f92c4
005F9276  81 7E 20 E8 03 00 00      CMP dword ptr [ESI + 0x20],0x3e8
005F927D  75 45                     JNZ 0x005f92c4
005F927F  8B 16                     MOV EDX,dword ptr [ESI]
005F9281  8B CE                     MOV ECX,ESI
005F9283  FF 52 2C                  CALL dword ptr [EDX + 0x2c]
005F9286  83 F8 6E                  CMP EAX,0x6e
005F9289  75 39                     JNZ 0x005f92c4
005F928B  8B 46 18                  MOV EAX,dword ptr [ESI + 0x18]
005F928E  8B 8F 55 02 00 00         MOV ECX,dword ptr [EDI + 0x255]
005F9294  3B C1                     CMP EAX,ECX
005F9296  75 2C                     JNZ 0x005f92c4
005F9298  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
005F929B  8B 57 18                  MOV EDX,dword ptr [EDI + 0x18]
005F929E  51                        PUSH ECX
005F929F  52                        PUSH EDX
005F92A0  8B CE                     MOV ECX,ESI
005F92A2  E8 C2 AA E0 FF            CALL 0x00403d69
005F92A7  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
005F92AA  85 C0                     TEST EAX,EAX
005F92AC  7F 16                     JG 0x005f92c4
005F92AE  8B 47 18                  MOV EAX,dword ptr [EDI + 0x18]
005F92B1  8B CE                     MOV ECX,ESI
005F92B3  50                        PUSH EAX
005F92B4  E8 01 BE E0 FF            CALL 0x004050ba
005F92B9  8B 4F 18                  MOV ECX,dword ptr [EDI + 0x18]
005F92BC  51                        PUSH ECX
005F92BD  8B CE                     MOV ECX,ESI
005F92BF  E8 1B B2 E0 FF            CALL 0x004044df
LAB_005f92c4:
005F92C4  5F                        POP EDI
005F92C5  5E                        POP ESI
005F92C6  8B E5                     MOV ESP,EBP
005F92C8  5D                        POP EBP
005F92C9  C2 08 00                  RET 0x8
