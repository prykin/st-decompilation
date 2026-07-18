FUN_00627170:
00627170  56                        PUSH ESI
00627171  8B F1                     MOV ESI,ECX
00627173  83 BE 5A 03 00 00 15      CMP dword ptr [ESI + 0x35a],0x15
0062717A  75 5D                     JNZ 0x006271d9
0062717C  F6 86 55 03 00 00 01      TEST byte ptr [ESI + 0x355],0x1
00627183  74 54                     JZ 0x006271d9
00627185  66 0F B6 86 5E 03 00 00   MOVZX AX,byte ptr [ESI + 0x35e]
0062718D  66 3B 46 4B               CMP AX,word ptr [ESI + 0x4b]
00627191  74 3F                     JZ 0x006271d2
00627193  8D 04 80                  LEA EAX,[EAX + EAX*0x4]
00627196  0F BF 56 3C               MOVSX EDX,word ptr [ESI + 0x3c]
0062719A  8D 04 80                  LEA EAX,[EAX + EAX*0x4]
0062719D  8D 0C C5 64 00 00 00      LEA ECX,[EAX*0x8 + 0x64]
006271A4  0F BF C1                  MOVSX EAX,CX
006271A7  83 E8 32                  SUB EAX,0x32
006271AA  8B CE                     MOV ECX,ESI
006271AC  50                        PUSH EAX
006271AD  52                        PUSH EDX
006271AE  0F BF 46 3A               MOVSX EAX,word ptr [ESI + 0x3a]
006271B2  50                        PUSH EAX
006271B3  6A 03                     PUSH 0x3
006271B5  E8 B3 DB DD FF            CALL 0x00404d6d
006271BA  85 C0                     TEST EAX,EAX
006271BC  74 14                     JZ 0x006271d2
006271BE  C7 86 EE 02 00 00 03 00 00 00  MOV dword ptr [ESI + 0x2ee],0x3
006271C8  C7 86 AE 02 00 00 01 00 00 00  MOV dword ptr [ESI + 0x2ae],0x1
LAB_006271d2:
006271D2  C6 86 59 03 00 00 00      MOV byte ptr [ESI + 0x359],0x0
LAB_006271d9:
006271D9  5E                        POP ESI
006271DA  C3                        RET
