FUN_004be3d0:
004BE3D0  55                        PUSH EBP
004BE3D1  8B EC                     MOV EBP,ESP
004BE3D3  56                        PUSH ESI
004BE3D4  8B F1                     MOV ESI,ECX
004BE3D6  8B 0D 74 A1 7F 00         MOV ECX,dword ptr [0x007fa174]
004BE3DC  8A 86 3D 02 00 00         MOV AL,byte ptr [ESI + 0x23d]
004BE3E2  50                        PUSH EAX
004BE3E3  E8 CF 65 F4 FF            CALL 0x004049b7
004BE3E8  25 FF 00 00 00            AND EAX,0xff
004BE3ED  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
004BE3F0  48                        DEC EAX
004BE3F1  89 96 D7 05 00 00         MOV dword ptr [ESI + 0x5d7],EDX
004BE3F7  8B C8                     MOV ECX,EAX
004BE3F9  8B 86 35 02 00 00         MOV EAX,dword ptr [ESI + 0x235]
004BE3FF  8D 0C 41                  LEA ECX,[ECX + EAX*0x2]
004BE402  03 C1                     ADD EAX,ECX
004BE404  8B 0C 85 7C 41 7E 00      MOV ECX,dword ptr [EAX*0x4 + 0x7e417c]
004BE40B  B8 1F 85 EB 51            MOV EAX,0x51eb851f
004BE410  0F AF CA                  IMUL ECX,EDX
004BE413  F7 E9                     IMUL ECX
004BE415  C1 FA 05                  SAR EDX,0x5
004BE418  8B C2                     MOV EAX,EDX
004BE41A  C1 E8 1F                  SHR EAX,0x1f
004BE41D  03 D0                     ADD EDX,EAX
004BE41F  89 96 41 02 00 00         MOV dword ptr [ESI + 0x241],EDX
004BE425  5E                        POP ESI
004BE426  5D                        POP EBP
004BE427  C2 04 00                  RET 0x4
