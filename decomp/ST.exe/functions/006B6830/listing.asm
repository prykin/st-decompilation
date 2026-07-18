FUN_006b6830:
006B6830  55                        PUSH EBP
006B6831  8B EC                     MOV EBP,ESP
006B6833  83 EC 28                  SUB ESP,0x28
006B6836  53                        PUSH EBX
006B6837  56                        PUSH ESI
006B6838  8B 75 08                  MOV ESI,dword ptr [EBP + 0x8]
006B683B  56                        PUSH ESI
006B683C  E8 5F FE FF FF            CALL 0x006b66a0
006B6841  85 C0                     TEST EAX,EAX
006B6843  75 54                     JNZ 0x006b6899
006B6845  8B 06                     MOV EAX,dword ptr [ESI]
006B6847  68 00 01 00 00            PUSH 0x100
006B684C  6A 00                     PUSH 0x0
006B684E  6A 00                     PUSH 0x0
006B6850  8B 10                     MOV EDX,dword ptr [EAX]
006B6852  8D 4E 38                  LEA ECX,[ESI + 0x38]
006B6855  6A 00                     PUSH 0x0
006B6857  6A 00                     PUSH 0x0
006B6859  51                        PUSH ECX
006B685A  50                        PUSH EAX
006B685B  89 4D 08                  MOV dword ptr [EBP + 0x8],ECX
006B685E  FF 52 18                  CALL dword ptr [EDX + 0x18]
006B6861  8B D8                     MOV EBX,EAX
006B6863  85 DB                     TEST EBX,EBX
006B6865  75 30                     JNZ 0x006b6897
006B6867  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
006B686A  8B 36                     MOV ESI,dword ptr [ESI]
006B686C  57                        PUSH EDI
006B686D  B9 0A 00 00 00            MOV ECX,0xa
006B6872  8D 7D D8                  LEA EDI,[EBP + -0x28]
006B6875  53                        PUSH EBX
006B6876  F3 AB                     STOSD.REP ES:EDI
006B6878  8D 4D D8                  LEA ECX,[EBP + -0x28]
006B687B  C7 45 D8 28 00 00 00      MOV dword ptr [EBP + -0x28],0x28
006B6882  8B 06                     MOV EAX,dword ptr [ESI]
006B6884  51                        PUSH ECX
006B6885  8B 0A                     MOV ECX,dword ptr [EDX]
006B6887  51                        PUSH ECX
006B6888  56                        PUSH ESI
006B6889  FF 50 4C                  CALL dword ptr [EAX + 0x4c]
006B688C  5F                        POP EDI
006B688D  8B C3                     MOV EAX,EBX
006B688F  5E                        POP ESI
006B6890  5B                        POP EBX
006B6891  8B E5                     MOV ESP,EBP
006B6893  5D                        POP EBP
006B6894  C2 04 00                  RET 0x4
LAB_006b6897:
006B6897  8B C3                     MOV EAX,EBX
LAB_006b6899:
006B6899  5E                        POP ESI
006B689A  5B                        POP EBX
006B689B  8B E5                     MOV ESP,EBP
006B689D  5D                        POP EBP
006B689E  C2 04 00                  RET 0x4
