CGenerate::_saveObj:
006A0960  55                        PUSH EBP
006A0961  8B EC                     MOV EBP,ESP
006A0963  83 EC 48                  SUB ESP,0x48
006A0966  A1 F8 8D 85 00            MOV EAX,[0x00858df8]
006A096B  8D 4D BC                  LEA ECX,[EBP + -0x44]
006A096E  6A 00                     PUSH 0x0
006A0970  51                        PUSH ECX
006A0971  C7 45 FC 01 00 00 00      MOV dword ptr [EBP + -0x4],0x1
006A0978  89 45 B8                  MOV dword ptr [EBP + -0x48],EAX
006A097B  E8 70 CE 08 00            CALL 0x0072d7f0
006A0980  83 C4 08                  ADD ESP,0x8
006A0983  85 C0                     TEST EAX,EAX
006A0985  75 12                     JNZ 0x006a0999
006A0987  8B 55 B8                  MOV EDX,dword ptr [EBP + -0x48]
006A098A  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
006A098D  89 15 F8 8D 85 00         MOV dword ptr [0x00858df8],EDX
006A0993  8B E5                     MOV ESP,EBP
006A0995  5D                        POP EBP
006A0996  C2 04 00                  RET 0x4
LAB_006a0999:
006A0999  8B 4D B8                  MOV ECX,dword ptr [EBP + -0x48]
006A099C  68 A4 86 7D 00            PUSH 0x7d86a4
006A09A1  68 CC 4C 7A 00            PUSH 0x7a4ccc
006A09A6  50                        PUSH EAX
006A09A7  6A 00                     PUSH 0x0
006A09A9  68 E0 00 00 00            PUSH 0xe0
006A09AE  68 4C 86 7D 00            PUSH 0x7d864c
006A09B3  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
006A09B9  E8 12 CB 00 00            CALL 0x006ad4d0
006A09BE  83 C4 18                  ADD ESP,0x18
006A09C1  85 C0                     TEST EAX,EAX
006A09C3  74 01                     JZ 0x006a09c6
006A09C5  CC                        INT3
LAB_006a09c6:
006A09C6  33 C0                     XOR EAX,EAX
006A09C8  8B E5                     MOV ESP,EBP
006A09CA  5D                        POP EBP
006A09CB  C2 04 00                  RET 0x4
