FUN_0044cc90:
0044CC90  55                        PUSH EBP
0044CC91  8B EC                     MOV EBP,ESP
0044CC93  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
0044CC96  56                        PUSH ESI
0044CC97  57                        PUSH EDI
0044CC98  33 F6                     XOR ESI,ESI
0044CC9A  8B 78 0C                  MOV EDI,dword ptr [EAX + 0xc]
0044CC9D  85 FF                     TEST EDI,EDI
0044CC9F  76 4B                     JBE 0x0044ccec
0044CCA1  53                        PUSH EBX
0044CCA2  8B 5D 08                  MOV EBX,dword ptr [EBP + 0x8]
0044CCA5  33 D2                     XOR EDX,EDX
LAB_0044cca7:
0044CCA7  8D 4D 08                  LEA ECX,[EBP + 0x8]
0044CCAA  51                        PUSH ECX
0044CCAB  8B 4D 0C                  MOV ECX,dword ptr [EBP + 0xc]
0044CCAE  E8 BD FF 25 00            CALL 0x006acc70
0044CCB3  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
0044CCB6  66 3D FF FF               CMP AX,0xffff
0044CCBA  74 22                     JZ 0x0044ccde
0044CCBC  8B 0D 74 A1 7F 00         MOV ECX,dword ptr [0x007fa174]
0044CCC2  6A 01                     PUSH 0x1
0044CCC4  50                        PUSH EAX
0044CCC5  53                        PUSH EBX
0044CCC6  E8 EF 5B FB FF            CALL 0x004028ba
0044CCCB  85 C0                     TEST EAX,EAX
0044CCCD  74 0F                     JZ 0x0044ccde
0044CCCF  83 78 20 14               CMP dword ptr [EAX + 0x20],0x14
0044CCD3  75 09                     JNZ 0x0044ccde
0044CCD5  8B 55 10                  MOV EDX,dword ptr [EBP + 0x10]
0044CCD8  89 90 E6 07 00 00         MOV dword ptr [EAX + 0x7e6],EDX
LAB_0044ccde:
0044CCDE  46                        INC ESI
0044CCDF  8B D6                     MOV EDX,ESI
0044CCE1  81 E2 FF FF 00 00         AND EDX,0xffff
0044CCE7  3B D7                     CMP EDX,EDI
0044CCE9  72 BC                     JC 0x0044cca7
0044CCEB  5B                        POP EBX
LAB_0044ccec:
0044CCEC  5F                        POP EDI
0044CCED  5E                        POP ESI
0044CCEE  5D                        POP EBP
0044CCEF  C2 0C 00                  RET 0xc
