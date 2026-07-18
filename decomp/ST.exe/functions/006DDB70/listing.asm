FUN_006ddb70:
006DDB70  56                        PUSH ESI
006DDB71  8B F1                     MOV ESI,ECX
006DDB73  8B 86 74 01 00 00         MOV EAX,dword ptr [ESI + 0x174]
006DDB79  85 C0                     TEST EAX,EAX
006DDB7B  7E 24                     JLE 0x006ddba1
006DDB7D  B9 01 00 00 00            MOV ECX,0x1
006DDB82  8B 56 1C                  MOV EDX,dword ptr [ESI + 0x1c]
006DDB85  89 8E 44 01 00 00         MOV dword ptr [ESI + 0x144],ECX
006DDB8B  89 8E D8 02 00 00         MOV dword ptr [ESI + 0x2d8],ECX
006DDB91  8B 4E 28                  MOV ECX,dword ptr [ESI + 0x28]
006DDB94  0F AF C8                  IMUL ECX,EAX
006DDB97  51                        PUSH ECX
006DDB98  52                        PUSH EDX
006DDB99  E8 B2 F3 FC FF            CALL 0x006acf50
006DDB9E  89 46 1C                  MOV dword ptr [ESI + 0x1c],EAX
LAB_006ddba1:
006DDBA1  5E                        POP ESI
006DDBA2  C3                        RET
