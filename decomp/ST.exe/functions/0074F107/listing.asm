FUN_0074f107:
0074F107  55                        PUSH EBP
0074F108  8B EC                     MOV EBP,ESP
0074F10A  51                        PUSH ECX
0074F10B  51                        PUSH ECX
0074F10C  53                        PUSH EBX
0074F10D  56                        PUSH ESI
0074F10E  8B F1                     MOV ESI,ECX
0074F110  57                        PUSH EDI
0074F111  83 7E 48 01               CMP dword ptr [ESI + 0x48],0x1
0074F115  75 07                     JNZ 0x0074f11e
0074F117  BB 05 40 00 80            MOV EBX,0x80004005
0074F11C  EB 33                     JMP 0x0074f151
LAB_0074f11e:
0074F11E  8B 06                     MOV EAX,dword ptr [ESI]
0074F120  8D 4D F8                  LEA ECX,[EBP + -0x8]
0074F123  51                        PUSH ECX
0074F124  56                        PUSH ESI
0074F125  FF 50 2C                  CALL dword ptr [EAX + 0x2c]
0074F128  8B D8                     MOV EBX,EAX
0074F12A  85 DB                     TEST EBX,EBX
0074F12C  7C 23                     JL 0x0074f151
0074F12E  8D 7E 1C                  LEA EDI,[ESI + 0x1c]
0074F131  57                        PUSH EDI
0074F132  FF 15 8C BB 85 00         CALL dword ptr [0x0085bb8c]
0074F138  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
0074F13B  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
0074F13E  89 46 40                  MOV dword ptr [ESI + 0x40],EAX
0074F141  89 46 38                  MOV dword ptr [ESI + 0x38],EAX
0074F144  57                        PUSH EDI
0074F145  89 4E 44                  MOV dword ptr [ESI + 0x44],ECX
0074F148  89 4E 3C                  MOV dword ptr [ESI + 0x3c],ECX
0074F14B  FF 15 90 BB 85 00         CALL dword ptr [0x0085bb90]
LAB_0074f151:
0074F151  5F                        POP EDI
0074F152  8B C3                     MOV EAX,EBX
0074F154  5E                        POP ESI
0074F155  5B                        POP EBX
0074F156  C9                        LEAVE
0074F157  C3                        RET
