FUN_005ccd00:
005CCD00  56                        PUSH ESI
005CCD01  8B F1                     MOV ESI,ECX
005CCD03  8B 86 FC 21 00 00         MOV EAX,dword ptr [ESI + 0x21fc]
005CCD09  85 C0                     TEST EAX,EAX
005CCD0B  74 1C                     JZ 0x005ccd29
005CCD0D  8D 4E 1D                  LEA ECX,[ESI + 0x1d]
005CCD10  C7 46 2D 20 00 00 00      MOV dword ptr [ESI + 0x2d],0x20
005CCD17  51                        PUSH ECX
005CCD18  50                        PUSH EAX
005CCD19  6A 02                     PUSH 0x2
005CCD1B  8B CE                     MOV ECX,ESI
005CCD1D  C7 46 31 00 00 00 00      MOV dword ptr [ESI + 0x31],0x0
005CCD24  E8 57 93 11 00            CALL 0x006e6080
LAB_005ccd29:
005CCD29  8B 15 6C 17 81 00         MOV EDX,dword ptr [0x0081176c]
005CCD2F  8B 82 4C 05 00 00         MOV EAX,dword ptr [EDX + 0x54c]
005CCD35  85 C0                     TEST EAX,EAX
005CCD37  74 4E                     JZ 0x005ccd87
005CCD39  C7 46 2D 20 00 00 00      MOV dword ptr [ESI + 0x2d],0x20
005CCD40  C7 46 31 00 00 00 00      MOV dword ptr [ESI + 0x31],0x0
005CCD47  A1 6C 17 81 00            MOV EAX,[0x0081176c]
005CCD4C  57                        PUSH EDI
005CCD4D  8D 7E 1D                  LEA EDI,[ESI + 0x1d]
005CCD50  8B 88 4C 05 00 00         MOV ECX,dword ptr [EAX + 0x54c]
005CCD56  57                        PUSH EDI
005CCD57  51                        PUSH ECX
005CCD58  6A 02                     PUSH 0x2
005CCD5A  8B CE                     MOV ECX,ESI
005CCD5C  E8 1F 93 11 00            CALL 0x006e6080
005CCD61  C7 46 2D 29 00 00 00      MOV dword ptr [ESI + 0x2d],0x29
005CCD68  C7 46 31 19 00 00 00      MOV dword ptr [ESI + 0x31],0x19
005CCD6F  8B 15 6C 17 81 00         MOV EDX,dword ptr [0x0081176c]
005CCD75  57                        PUSH EDI
005CCD76  8B CE                     MOV ECX,ESI
005CCD78  8B 82 4C 05 00 00         MOV EAX,dword ptr [EDX + 0x54c]
005CCD7E  50                        PUSH EAX
005CCD7F  6A 02                     PUSH 0x2
005CCD81  E8 FA 92 11 00            CALL 0x006e6080
005CCD86  5F                        POP EDI
LAB_005ccd87:
005CCD87  8B 0D 6C 17 81 00         MOV ECX,dword ptr [0x0081176c]
005CCD8D  8B 81 50 05 00 00         MOV EAX,dword ptr [ECX + 0x550]
005CCD93  85 C0                     TEST EAX,EAX
005CCD95  74 27                     JZ 0x005ccdbe
005CCD97  C7 46 2D 20 00 00 00      MOV dword ptr [ESI + 0x2d],0x20
005CCD9E  C7 46 31 00 00 00 00      MOV dword ptr [ESI + 0x31],0x0
005CCDA5  A1 6C 17 81 00            MOV EAX,[0x0081176c]
005CCDAA  8D 56 1D                  LEA EDX,[ESI + 0x1d]
005CCDAD  52                        PUSH EDX
005CCDAE  8B 88 50 05 00 00         MOV ECX,dword ptr [EAX + 0x550]
005CCDB4  51                        PUSH ECX
005CCDB5  6A 02                     PUSH 0x2
005CCDB7  8B CE                     MOV ECX,ESI
005CCDB9  E8 C2 92 11 00            CALL 0x006e6080
LAB_005ccdbe:
005CCDBE  8B CE                     MOV ECX,ESI
005CCDC0  E8 B8 65 E3 FF            CALL 0x0040337d
005CCDC5  5E                        POP ESI
005CCDC6  C3                        RET
