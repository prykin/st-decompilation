FUN_0044cdb0:
0044CDB0  55                        PUSH EBP
0044CDB1  8B EC                     MOV EBP,ESP
0044CDB3  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
0044CDB6  56                        PUSH ESI
0044CDB7  57                        PUSH EDI
0044CDB8  8B 78 0C                  MOV EDI,dword ptr [EAX + 0xc]
0044CDBB  8B 45 10                  MOV EAX,dword ptr [EBP + 0x10]
0044CDBE  85 C0                     TEST EAX,EAX
0044CDC0  7C 56                     JL 0x0044ce18
0044CDC2  83 F8 03                  CMP EAX,0x3
0044CDC5  7F 51                     JG 0x0044ce18
0044CDC7  33 F6                     XOR ESI,ESI
0044CDC9  85 FF                     TEST EDI,EDI
0044CDCB  76 4B                     JBE 0x0044ce18
0044CDCD  53                        PUSH EBX
0044CDCE  8B 5D 08                  MOV EBX,dword ptr [EBP + 0x8]
0044CDD1  33 D2                     XOR EDX,EDX
LAB_0044cdd3:
0044CDD3  8D 4D 08                  LEA ECX,[EBP + 0x8]
0044CDD6  51                        PUSH ECX
0044CDD7  8B 4D 0C                  MOV ECX,dword ptr [EBP + 0xc]
0044CDDA  E8 91 FE 25 00            CALL 0x006acc70
0044CDDF  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
0044CDE2  66 3D FF FF               CMP AX,0xffff
0044CDE6  74 22                     JZ 0x0044ce0a
0044CDE8  8B 0D 74 A1 7F 00         MOV ECX,dword ptr [0x007fa174]
0044CDEE  6A 01                     PUSH 0x1
0044CDF0  50                        PUSH EAX
0044CDF1  53                        PUSH EBX
0044CDF2  E8 C3 5A FB FF            CALL 0x004028ba
0044CDF7  85 C0                     TEST EAX,EAX
0044CDF9  74 0F                     JZ 0x0044ce0a
0044CDFB  83 78 20 14               CMP dword ptr [EAX + 0x20],0x14
0044CDFF  75 09                     JNZ 0x0044ce0a
0044CE01  8B 55 10                  MOV EDX,dword ptr [EBP + 0x10]
0044CE04  89 90 EE 07 00 00         MOV dword ptr [EAX + 0x7ee],EDX
LAB_0044ce0a:
0044CE0A  46                        INC ESI
0044CE0B  8B D6                     MOV EDX,ESI
0044CE0D  81 E2 FF FF 00 00         AND EDX,0xffff
0044CE13  3B D7                     CMP EDX,EDI
0044CE15  72 BC                     JC 0x0044cdd3
0044CE17  5B                        POP EBX
LAB_0044ce18:
0044CE18  5F                        POP EDI
0044CE19  5E                        POP ESI
0044CE1A  5D                        POP EBP
0044CE1B  C2 0C 00                  RET 0xc
