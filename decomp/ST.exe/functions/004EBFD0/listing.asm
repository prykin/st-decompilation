FUN_004ebfd0:
004EBFD0  55                        PUSH EBP
004EBFD1  8B EC                     MOV EBP,ESP
004EBFD3  8B 81 B0 05 00 00         MOV EAX,dword ptr [ECX + 0x5b0]
004EBFD9  8D 14 80                  LEA EDX,[EAX + EAX*0x4]
004EBFDC  8D 14 92                  LEA EDX,[EDX + EDX*0x4]
004EBFDF  8D 84 D0 DC 00 00 00      LEA EAX,[EAX + EDX*0x8 + 0xdc]
004EBFE6  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
004EBFE9  89 02                     MOV dword ptr [EDX],EAX
004EBFEB  8B 81 B4 05 00 00         MOV EAX,dword ptr [ECX + 0x5b4]
004EBFF1  8D 14 80                  LEA EDX,[EAX + EAX*0x4]
004EBFF4  8D 14 92                  LEA EDX,[EDX + EDX*0x4]
004EBFF7  8D 44 D0 64               LEA EAX,[EAX + EDX*0x8 + 0x64]
004EBFFB  8B 55 0C                  MOV EDX,dword ptr [EBP + 0xc]
004EBFFE  89 02                     MOV dword ptr [EDX],EAX
004EC000  8B 89 B8 05 00 00         MOV ECX,dword ptr [ECX + 0x5b8]
004EC006  8B 55 10                  MOV EDX,dword ptr [EBP + 0x10]
004EC009  8D 04 89                  LEA EAX,[ECX + ECX*0x4]
004EC00C  8D 04 80                  LEA EAX,[EAX + EAX*0x4]
004EC00F  8D 4C C1 3C               LEA ECX,[ECX + EAX*0x8 + 0x3c]
004EC013  8B 45 14                  MOV EAX,dword ptr [EBP + 0x14]
004EC016  89 0A                     MOV dword ptr [EDX],ECX
004EC018  C7 00 5A 00 00 00         MOV dword ptr [EAX],0x5a
004EC01E  5D                        POP EBP
004EC01F  C2 10 00                  RET 0x10
