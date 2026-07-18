FUN_004e13a0:
004E13A0  56                        PUSH ESI
004E13A1  8B F1                     MOV ESI,ECX
004E13A3  57                        PUSH EDI
004E13A4  33 FF                     XOR EDI,EDI
004E13A6  8B 46 24                  MOV EAX,dword ptr [ESI + 0x24]
004E13A9  8B 8E 3D 02 00 00         MOV ECX,dword ptr [ESI + 0x23d]
004E13AF  3B C1                     CMP EAX,ECX
004E13B1  74 43                     JZ 0x004e13f6
004E13B3  53                        PUSH EBX
004E13B4  51                        PUSH ECX
004E13B5  8B 0D 74 A1 7F 00         MOV ECX,dword ptr [0x007fa174]
004E13BB  E8 F7 35 F2 FF            CALL 0x004049b7
004E13C0  8A 4E 24                  MOV CL,byte ptr [ESI + 0x24]
004E13C3  8A D0                     MOV DL,AL
004E13C5  8B 86 35 02 00 00         MOV EAX,dword ptr [ESI + 0x235]
004E13CB  81 E2 FF 00 00 00         AND EDX,0xff
004E13D1  51                        PUSH ECX
004E13D2  8B 0D 74 A1 7F 00         MOV ECX,dword ptr [0x007fa174]
004E13D8  8D 04 40                  LEA EAX,[EAX + EAX*0x2]
004E13DB  03 C2                     ADD EAX,EDX
004E13DD  8D 1C 40                  LEA EBX,[EAX + EAX*0x2]
004E13E0  E8 D2 35 F2 FF            CALL 0x004049b7
004E13E5  25 FF 00 00 00            AND EAX,0xff
004E13EA  8A 8C 03 84 19 7E 00      MOV CL,byte ptr [EBX + EAX*0x1 + 0x7e1984]
004E13F1  5B                        POP EBX
004E13F2  84 C9                     TEST CL,CL
004E13F4  74 22                     JZ 0x004e1418
LAB_004e13f6:
004E13F6  8B B6 AC 05 00 00         MOV ESI,dword ptr [ESI + 0x5ac]
004E13FC  8D 46 C8                  LEA EAX,[ESI + -0x38]
004E13FF  83 F8 28                  CMP EAX,0x28
004E1402  77 14                     JA 0x004e1418
004E1404  33 D2                     XOR EDX,EDX
004E1406  8A 90 28 14 4E 00         MOV DL,byte ptr [EAX + 0x4e1428]
switchD_004e140c::switchD:
004E140C  FF 24 95 20 14 4E 00      JMP dword ptr [EDX*0x4 + 0x4e1420]
switchD_004e140c::caseD_38:
004E1413  BF 01 00 00 00            MOV EDI,0x1
switchD_004e140c::caseD_3a:
004E1418  8B C7                     MOV EAX,EDI
004E141A  5F                        POP EDI
004E141B  5E                        POP ESI
004E141C  C3                        RET
