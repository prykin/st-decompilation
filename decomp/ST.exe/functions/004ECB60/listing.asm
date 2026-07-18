FUN_004ecb60:
004ECB60  55                        PUSH EBP
004ECB61  8B EC                     MOV EBP,ESP
004ECB63  51                        PUSH ECX
004ECB64  56                        PUSH ESI
004ECB65  8B F1                     MOV ESI,ECX
004ECB67  8B 46 24                  MOV EAX,dword ptr [ESI + 0x24]
004ECB6A  8D 0C 80                  LEA ECX,[EAX + EAX*0x4]
004ECB6D  8D 14 C8                  LEA EDX,[EAX + ECX*0x8]
004ECB70  8D 0C 50                  LEA ECX,[EAX + EDX*0x2]
004ECB73  C1 E1 04                  SHL ECX,0x4
004ECB76  03 C8                     ADD ECX,EAX
004ECB78  8B 0C 4D 12 58 7F 00      MOV ECX,dword ptr [ECX*0x2 + 0x7f5812]
004ECB7F  85 C9                     TEST ECX,ECX
004ECB81  0F 84 9B 00 00 00         JZ 0x004ecc22
004ECB87  8B 41 0C                  MOV EAX,dword ptr [ECX + 0xc]
004ECB8A  57                        PUSH EDI
004ECB8B  33 FF                     XOR EDI,EDI
004ECB8D  85 C0                     TEST EAX,EAX
004ECB8F  7E 4F                     JLE 0x004ecbe0
LAB_004ecb91:
004ECB91  8D 55 FC                  LEA EDX,[EBP + -0x4]
004ECB94  52                        PUSH EDX
004ECB95  8B D7                     MOV EDX,EDI
004ECB97  E8 D4 00 1C 00            CALL 0x006acc70
004ECB9C  39 75 FC                  CMP dword ptr [EBP + -0x4],ESI
004ECB9F  74 20                     JZ 0x004ecbc1
004ECBA1  8B 46 24                  MOV EAX,dword ptr [ESI + 0x24]
004ECBA4  47                        INC EDI
004ECBA5  8D 0C 80                  LEA ECX,[EAX + EAX*0x4]
004ECBA8  8D 14 C8                  LEA EDX,[EAX + ECX*0x8]
004ECBAB  8D 0C 50                  LEA ECX,[EAX + EDX*0x2]
004ECBAE  C1 E1 04                  SHL ECX,0x4
004ECBB1  03 C8                     ADD ECX,EAX
004ECBB3  8B 0C 4D 12 58 7F 00      MOV ECX,dword ptr [ECX*0x2 + 0x7f5812]
004ECBBA  3B 79 0C                  CMP EDI,dword ptr [ECX + 0xc]
004ECBBD  7C D2                     JL 0x004ecb91
004ECBBF  EB 1F                     JMP 0x004ecbe0
LAB_004ecbc1:
004ECBC1  8B 46 24                  MOV EAX,dword ptr [ESI + 0x24]
004ECBC4  57                        PUSH EDI
004ECBC5  8D 14 80                  LEA EDX,[EAX + EAX*0x4]
004ECBC8  8D 0C D0                  LEA ECX,[EAX + EDX*0x8]
004ECBCB  8D 14 48                  LEA EDX,[EAX + ECX*0x2]
004ECBCE  C1 E2 04                  SHL EDX,0x4
004ECBD1  03 D0                     ADD EDX,EAX
004ECBD3  8B 04 55 12 58 7F 00      MOV EAX,dword ptr [EDX*0x2 + 0x7f5812]
004ECBDA  50                        PUSH EAX
004ECBDB  E8 90 40 1C 00            CALL 0x006b0c70
LAB_004ecbe0:
004ECBE0  8B 46 24                  MOV EAX,dword ptr [ESI + 0x24]
004ECBE3  5F                        POP EDI
004ECBE4  8D 0C 80                  LEA ECX,[EAX + EAX*0x4]
004ECBE7  8D 14 C8                  LEA EDX,[EAX + ECX*0x8]
004ECBEA  8D 0C 50                  LEA ECX,[EAX + EDX*0x2]
004ECBED  C1 E1 04                  SHL ECX,0x4
004ECBF0  03 C8                     ADD ECX,EAX
004ECBF2  8B 04 4D 12 58 7F 00      MOV EAX,dword ptr [ECX*0x2 + 0x7f5812]
004ECBF9  8B 48 0C                  MOV ECX,dword ptr [EAX + 0xc]
004ECBFC  85 C9                     TEST ECX,ECX
004ECBFE  75 22                     JNZ 0x004ecc22
004ECC00  50                        PUSH EAX
004ECC01  E8 0A 15 1C 00            CALL 0x006ae110
004ECC06  8B 76 24                  MOV ESI,dword ptr [ESI + 0x24]
004ECC09  8D 14 B6                  LEA EDX,[ESI + ESI*0x4]
004ECC0C  8D 04 D6                  LEA EAX,[ESI + EDX*0x8]
004ECC0F  8D 0C 46                  LEA ECX,[ESI + EAX*0x2]
004ECC12  C1 E1 04                  SHL ECX,0x4
004ECC15  03 CE                     ADD ECX,ESI
004ECC17  C7 04 4D 12 58 7F 00 00 00 00 00  MOV dword ptr [ECX*0x2 + 0x7f5812],0x0
LAB_004ecc22:
004ECC22  33 C0                     XOR EAX,EAX
004ECC24  5E                        POP ESI
004ECC25  8B E5                     MOV ESP,EBP
004ECC27  5D                        POP EBP
004ECC28  C3                        RET
