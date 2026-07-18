FUN_005b6350:
005B6350  55                        PUSH EBP
005B6351  8B EC                     MOV EBP,ESP
005B6353  8B 41 08                  MOV EAX,dword ptr [ECX + 0x8]
005B6356  C6 81 5A 1A 00 00 0C      MOV byte ptr [ECX + 0x1a5a],0xc
005B635D  33 D2                     XOR EDX,EDX
005B635F  89 81 8D 18 00 00         MOV dword ptr [ECX + 0x188d],EAX
005B6365  8A 91 5A 1A 00 00         MOV DL,byte ptr [ECX + 0x1a5a]
005B636B  56                        PUSH ESI
005B636C  8B 75 08                  MOV ESI,dword ptr [EBP + 0x8]
005B636F  8D 04 D5 00 00 00 00      LEA EAX,[EDX*0x8 + 0x0]
005B6376  2B C2                     SUB EAX,EDX
005B6378  8D 04 40                  LEA EAX,[EAX + EAX*0x2]
005B637B  8D 04 C2                  LEA EAX,[EDX + EAX*0x8]
005B637E  8D 14 41                  LEA EDX,[ECX + EAX*0x2]
005B6381  C7 84 10 CD 00 00 00 02 00 00 00  MOV dword ptr [EAX + EDX*0x1 + 0xcd],0x2
005B638C  33 D2                     XOR EDX,EDX
005B638E  8A 91 5A 1A 00 00         MOV DL,byte ptr [ECX + 0x1a5a]
005B6394  8D 04 D5 00 00 00 00      LEA EAX,[EDX*0x8 + 0x0]
005B639B  2B C2                     SUB EAX,EDX
005B639D  8D 04 40                  LEA EAX,[EAX + EAX*0x2]
005B63A0  8D 04 C2                  LEA EAX,[EDX + EAX*0x8]
005B63A3  8D 14 41                  LEA EDX,[ECX + EAX*0x2]
005B63A6  89 B4 10 D1 00 00 00      MOV dword ptr [EAX + EDX*0x1 + 0xd1],ESI
005B63AD  33 D2                     XOR EDX,EDX
005B63AF  8A 91 5A 1A 00 00         MOV DL,byte ptr [ECX + 0x1a5a]
005B63B5  8B 75 0C                  MOV ESI,dword ptr [EBP + 0xc]
005B63B8  8D 04 D5 00 00 00 00      LEA EAX,[EDX*0x8 + 0x0]
005B63BF  2B C2                     SUB EAX,EDX
005B63C1  8D 04 40                  LEA EAX,[EAX + EAX*0x2]
005B63C4  8D 04 C2                  LEA EAX,[EDX + EAX*0x8]
005B63C7  8D 14 41                  LEA EDX,[ECX + EAX*0x2]
005B63CA  89 B4 10 D5 00 00 00      MOV dword ptr [EAX + EDX*0x1 + 0xd5],ESI
005B63D1  33 D2                     XOR EDX,EDX
005B63D3  8A 91 5A 1A 00 00         MOV DL,byte ptr [ECX + 0x1a5a]
005B63D9  5E                        POP ESI
005B63DA  8D 04 D5 00 00 00 00      LEA EAX,[EDX*0x8 + 0x0]
005B63E1  2B C2                     SUB EAX,EDX
005B63E3  8D 04 40                  LEA EAX,[EAX + EAX*0x2]
005B63E6  8D 04 C2                  LEA EAX,[EDX + EAX*0x8]
005B63E9  8B 55 10                  MOV EDX,dword ptr [EBP + 0x10]
005B63EC  8D 0C 41                  LEA ECX,[ECX + EAX*0x2]
005B63EF  89 94 08 D9 00 00 00      MOV dword ptr [EAX + ECX*0x1 + 0xd9],EDX
005B63F6  5D                        POP EBP
005B63F7  C2 0C 00                  RET 0xc
