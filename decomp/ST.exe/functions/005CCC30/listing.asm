FUN_005ccc30:
005CCC30  56                        PUSH ESI
005CCC31  8B F1                     MOV ESI,ECX
005CCC33  8B 86 FC 21 00 00         MOV EAX,dword ptr [ESI + 0x21fc]
005CCC39  C7 46 2D 20 00 00 00      MOV dword ptr [ESI + 0x2d],0x20
005CCC40  85 C0                     TEST EAX,EAX
005CCC42  74 15                     JZ 0x005ccc59
005CCC44  8D 4E 1D                  LEA ECX,[ESI + 0x1d]
005CCC47  C7 46 31 01 00 00 00      MOV dword ptr [ESI + 0x31],0x1
005CCC4E  51                        PUSH ECX
005CCC4F  50                        PUSH EAX
005CCC50  6A 02                     PUSH 0x2
005CCC52  8B CE                     MOV ECX,ESI
005CCC54  E8 27 94 11 00            CALL 0x006e6080
LAB_005ccc59:
005CCC59  8B 15 6C 17 81 00         MOV EDX,dword ptr [0x0081176c]
005CCC5F  8B 82 50 05 00 00         MOV EAX,dword ptr [EDX + 0x550]
005CCC65  85 C0                     TEST EAX,EAX
005CCC67  74 21                     JZ 0x005ccc8a
005CCC69  C7 46 31 01 00 00 00      MOV dword ptr [ESI + 0x31],0x1
005CCC70  8B 0D 6C 17 81 00         MOV ECX,dword ptr [0x0081176c]
005CCC76  8D 46 1D                  LEA EAX,[ESI + 0x1d]
005CCC79  8B 91 50 05 00 00         MOV EDX,dword ptr [ECX + 0x550]
005CCC7F  50                        PUSH EAX
005CCC80  52                        PUSH EDX
005CCC81  6A 02                     PUSH 0x2
005CCC83  8B CE                     MOV ECX,ESI
005CCC85  E8 F6 93 11 00            CALL 0x006e6080
LAB_005ccc8a:
005CCC8A  A1 6C 17 81 00            MOV EAX,[0x0081176c]
005CCC8F  8B 88 4C 05 00 00         MOV ECX,dword ptr [EAX + 0x54c]
005CCC95  85 C9                     TEST ECX,ECX
005CCC97  74 28                     JZ 0x005cccc1
005CCC99  C7 46 2D 29 00 00 00      MOV dword ptr [ESI + 0x2d],0x29
005CCCA0  C7 46 31 09 00 00 00      MOV dword ptr [ESI + 0x31],0x9
005CCCA7  8B 15 6C 17 81 00         MOV EDX,dword ptr [0x0081176c]
005CCCAD  8D 4E 1D                  LEA ECX,[ESI + 0x1d]
005CCCB0  51                        PUSH ECX
005CCCB1  8B CE                     MOV ECX,ESI
005CCCB3  8B 82 4C 05 00 00         MOV EAX,dword ptr [EDX + 0x54c]
005CCCB9  50                        PUSH EAX
005CCCBA  6A 02                     PUSH 0x2
005CCCBC  E8 BF 93 11 00            CALL 0x006e6080
LAB_005cccc1:
005CCCC1  8B CE                     MOV ECX,ESI
005CCCC3  E8 0D 91 E3 FF            CALL 0x00405dd5
005CCCC8  5E                        POP ESI
005CCCC9  C3                        RET
