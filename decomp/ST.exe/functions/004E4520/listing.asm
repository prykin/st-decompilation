FUN_004e4520:
004E4520  55                        PUSH EBP
004E4521  8B EC                     MOV EBP,ESP
004E4523  51                        PUSH ECX
004E4524  56                        PUSH ESI
004E4525  8B F1                     MOV ESI,ECX
004E4527  8B 46 24                  MOV EAX,dword ptr [ESI + 0x24]
004E452A  8D 0C 80                  LEA ECX,[EAX + EAX*0x4]
004E452D  8D 14 C8                  LEA EDX,[EAX + ECX*0x8]
004E4530  8D 0C 50                  LEA ECX,[EAX + EDX*0x2]
004E4533  C1 E1 04                  SHL ECX,0x4
004E4536  03 C8                     ADD ECX,EAX
004E4538  8B 0C 4D F6 57 7F 00      MOV ECX,dword ptr [ECX*0x2 + 0x7f57f6]
004E453F  85 C9                     TEST ECX,ECX
004E4541  0F 84 9B 00 00 00         JZ 0x004e45e2
004E4547  8B 41 0C                  MOV EAX,dword ptr [ECX + 0xc]
004E454A  57                        PUSH EDI
004E454B  33 FF                     XOR EDI,EDI
004E454D  85 C0                     TEST EAX,EAX
004E454F  7E 4F                     JLE 0x004e45a0
LAB_004e4551:
004E4551  8D 55 FC                  LEA EDX,[EBP + -0x4]
004E4554  52                        PUSH EDX
004E4555  8B D7                     MOV EDX,EDI
004E4557  E8 14 87 1C 00            CALL 0x006acc70
004E455C  39 75 FC                  CMP dword ptr [EBP + -0x4],ESI
004E455F  74 20                     JZ 0x004e4581
004E4561  8B 46 24                  MOV EAX,dword ptr [ESI + 0x24]
004E4564  47                        INC EDI
004E4565  8D 0C 80                  LEA ECX,[EAX + EAX*0x4]
004E4568  8D 14 C8                  LEA EDX,[EAX + ECX*0x8]
004E456B  8D 0C 50                  LEA ECX,[EAX + EDX*0x2]
004E456E  C1 E1 04                  SHL ECX,0x4
004E4571  03 C8                     ADD ECX,EAX
004E4573  8B 0C 4D F6 57 7F 00      MOV ECX,dword ptr [ECX*0x2 + 0x7f57f6]
004E457A  3B 79 0C                  CMP EDI,dword ptr [ECX + 0xc]
004E457D  7C D2                     JL 0x004e4551
004E457F  EB 1F                     JMP 0x004e45a0
LAB_004e4581:
004E4581  8B 46 24                  MOV EAX,dword ptr [ESI + 0x24]
004E4584  57                        PUSH EDI
004E4585  8D 14 80                  LEA EDX,[EAX + EAX*0x4]
004E4588  8D 0C D0                  LEA ECX,[EAX + EDX*0x8]
004E458B  8D 14 48                  LEA EDX,[EAX + ECX*0x2]
004E458E  C1 E2 04                  SHL EDX,0x4
004E4591  03 D0                     ADD EDX,EAX
004E4593  8B 04 55 F6 57 7F 00      MOV EAX,dword ptr [EDX*0x2 + 0x7f57f6]
004E459A  50                        PUSH EAX
004E459B  E8 D0 C6 1C 00            CALL 0x006b0c70
LAB_004e45a0:
004E45A0  8B 46 24                  MOV EAX,dword ptr [ESI + 0x24]
004E45A3  5F                        POP EDI
004E45A4  8D 0C 80                  LEA ECX,[EAX + EAX*0x4]
004E45A7  8D 14 C8                  LEA EDX,[EAX + ECX*0x8]
004E45AA  8D 0C 50                  LEA ECX,[EAX + EDX*0x2]
004E45AD  C1 E1 04                  SHL ECX,0x4
004E45B0  03 C8                     ADD ECX,EAX
004E45B2  8B 04 4D F6 57 7F 00      MOV EAX,dword ptr [ECX*0x2 + 0x7f57f6]
004E45B9  8B 48 0C                  MOV ECX,dword ptr [EAX + 0xc]
004E45BC  85 C9                     TEST ECX,ECX
004E45BE  75 22                     JNZ 0x004e45e2
004E45C0  50                        PUSH EAX
004E45C1  E8 4A 9B 1C 00            CALL 0x006ae110
004E45C6  8B 76 24                  MOV ESI,dword ptr [ESI + 0x24]
004E45C9  8D 14 B6                  LEA EDX,[ESI + ESI*0x4]
004E45CC  8D 04 D6                  LEA EAX,[ESI + EDX*0x8]
004E45CF  8D 0C 46                  LEA ECX,[ESI + EAX*0x2]
004E45D2  C1 E1 04                  SHL ECX,0x4
004E45D5  03 CE                     ADD ECX,ESI
004E45D7  C7 04 4D F6 57 7F 00 00 00 00 00  MOV dword ptr [ECX*0x2 + 0x7f57f6],0x0
LAB_004e45e2:
004E45E2  33 C0                     XOR EAX,EAX
004E45E4  5E                        POP ESI
004E45E5  8B E5                     MOV ESP,EBP
004E45E7  5D                        POP EBP
004E45E8  C3                        RET
