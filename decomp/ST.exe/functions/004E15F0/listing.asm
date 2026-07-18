FUN_004e15f0:
004E15F0  55                        PUSH EBP
004E15F1  8B EC                     MOV EBP,ESP
004E15F3  56                        PUSH ESI
004E15F4  8B F1                     MOV ESI,ECX
004E15F6  57                        PUSH EDI
004E15F7  33 FF                     XOR EDI,EDI
004E15F9  8B 46 24                  MOV EAX,dword ptr [ESI + 0x24]
004E15FC  8B 8E 3D 02 00 00         MOV ECX,dword ptr [ESI + 0x23d]
004E1602  3B C1                     CMP EAX,ECX
004E1604  74 43                     JZ 0x004e1649
004E1606  53                        PUSH EBX
004E1607  51                        PUSH ECX
004E1608  8B 0D 74 A1 7F 00         MOV ECX,dword ptr [0x007fa174]
004E160E  E8 A4 33 F2 FF            CALL 0x004049b7
004E1613  8A 4E 24                  MOV CL,byte ptr [ESI + 0x24]
004E1616  8A D0                     MOV DL,AL
004E1618  8B 86 35 02 00 00         MOV EAX,dword ptr [ESI + 0x235]
004E161E  81 E2 FF 00 00 00         AND EDX,0xff
004E1624  51                        PUSH ECX
004E1625  8B 0D 74 A1 7F 00         MOV ECX,dword ptr [0x007fa174]
004E162B  8D 04 40                  LEA EAX,[EAX + EAX*0x2]
004E162E  03 C2                     ADD EAX,EDX
004E1630  8D 1C 40                  LEA EBX,[EAX + EAX*0x2]
004E1633  E8 7F 33 F2 FF            CALL 0x004049b7
004E1638  25 FF 00 00 00            AND EAX,0xff
004E163D  8A 8C 03 84 19 7E 00      MOV CL,byte ptr [EBX + EAX*0x1 + 0x7e1984]
004E1644  5B                        POP EBX
004E1645  84 C9                     TEST CL,CL
004E1647  74 1D                     JZ 0x004e1666
LAB_004e1649:
004E1649  83 BE D8 04 00 00 FF      CMP dword ptr [ESI + 0x4d8],-0x1
004E1650  75 14                     JNZ 0x004e1666
004E1652  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
004E1655  5F                        POP EDI
004E1656  89 96 D8 04 00 00         MOV dword ptr [ESI + 0x4d8],EDX
004E165C  B8 01 00 00 00            MOV EAX,0x1
004E1661  5E                        POP ESI
004E1662  5D                        POP EBP
004E1663  C2 04 00                  RET 0x4
LAB_004e1666:
004E1666  8B C7                     MOV EAX,EDI
004E1668  5F                        POP EDI
004E1669  5E                        POP ESI
004E166A  5D                        POP EBP
004E166B  C2 04 00                  RET 0x4
