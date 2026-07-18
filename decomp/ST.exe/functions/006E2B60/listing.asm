FUN_006e2b60:
006E2B60  55                        PUSH EBP
006E2B61  8B EC                     MOV EBP,ESP
006E2B63  83 EC 08                  SUB ESP,0x8
006E2B66  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
006E2B69  53                        PUSH EBX
006E2B6A  56                        PUSH ESI
006E2B6B  57                        PUSH EDI
006E2B6C  8B 50 24                  MOV EDX,dword ptr [EAX + 0x24]
006E2B6F  8B 58 20                  MOV EBX,dword ptr [EAX + 0x20]
006E2B72  8B 70 28                  MOV ESI,dword ptr [EAX + 0x28]
006E2B75  8B F9                     MOV EDI,ECX
006E2B77  33 C9                     XOR ECX,ECX
006E2B79  85 D2                     TEST EDX,EDX
006E2B7B  89 4D FC                  MOV dword ptr [EBP + -0x4],ECX
006E2B7E  89 4D F8                  MOV dword ptr [EBP + -0x8],ECX
006E2B81  0F 8E 95 00 00 00         JLE 0x006e2c1c
LAB_006e2b87:
006E2B87  8A 16                     MOV DL,byte ptr [ESI]
006E2B89  84 97 AC 00 00 00         TEST byte ptr [EDI + 0xac],DL
006E2B8F  74 6A                     JZ 0x006e2bfb
006E2B91  33 C0                     XOR EAX,EAX
006E2B93  8A 46 01                  MOV AL,byte ptr [ESI + 0x1]
006E2B96  8D 0C 40                  LEA ECX,[EAX + EAX*0x2]
006E2B99  C1 E0 04                  SHL EAX,0x4
006E2B9C  8D 14 8B                  LEA EDX,[EBX + ECX*0x4]
006E2B9F  8B 4D 0C                  MOV ECX,dword ptr [EBP + 0xc]
006E2BA2  03 C1                     ADD EAX,ECX
006E2BA4  52                        PUSH EDX
006E2BA5  50                        PUSH EAX
006E2BA6  8B CF                     MOV ECX,EDI
006E2BA8  E8 83 00 00 00            CALL 0x006e2c30
006E2BAD  33 C0                     XOR EAX,EAX
006E2BAF  8A 46 02                  MOV AL,byte ptr [ESI + 0x2]
006E2BB2  8D 0C 40                  LEA ECX,[EAX + EAX*0x2]
006E2BB5  C1 E0 04                  SHL EAX,0x4
006E2BB8  8D 14 8B                  LEA EDX,[EBX + ECX*0x4]
006E2BBB  8B 4D 0C                  MOV ECX,dword ptr [EBP + 0xc]
006E2BBE  03 C1                     ADD EAX,ECX
006E2BC0  52                        PUSH EDX
006E2BC1  50                        PUSH EAX
006E2BC2  8B CF                     MOV ECX,EDI
006E2BC4  E8 67 00 00 00            CALL 0x006e2c30
006E2BC9  33 C0                     XOR EAX,EAX
006E2BCB  8A 46 03                  MOV AL,byte ptr [ESI + 0x3]
006E2BCE  8D 0C 40                  LEA ECX,[EAX + EAX*0x2]
006E2BD1  C1 E0 04                  SHL EAX,0x4
006E2BD4  8D 14 8B                  LEA EDX,[EBX + ECX*0x4]
006E2BD7  8B 4D 0C                  MOV ECX,dword ptr [EBP + 0xc]
006E2BDA  03 C1                     ADD EAX,ECX
006E2BDC  52                        PUSH EDX
006E2BDD  50                        PUSH EAX
006E2BDE  8B CF                     MOV ECX,EDI
006E2BE0  E8 4B 00 00 00            CALL 0x006e2c30
006E2BE5  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
006E2BE8  8B 55 10                  MOV EDX,dword ptr [EBP + 0x10]
006E2BEB  8A 4D F8                  MOV CL,byte ptr [EBP + -0x8]
006E2BEE  88 0C 10                  MOV byte ptr [EAX + EDX*0x1],CL
006E2BF1  40                        INC EAX
006E2BF2  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
006E2BF5  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
006E2BF8  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
LAB_006e2bfb:
006E2BFB  8B 55 F8                  MOV EDX,dword ptr [EBP + -0x8]
006E2BFE  83 C6 1C                  ADD ESI,0x1c
006E2C01  42                        INC EDX
006E2C02  3B 50 24                  CMP EDX,dword ptr [EAX + 0x24]
006E2C05  89 55 F8                  MOV dword ptr [EBP + -0x8],EDX
006E2C08  0F 8C 79 FF FF FF         JL 0x006e2b87
006E2C0E  8B 45 14                  MOV EAX,dword ptr [EBP + 0x14]
006E2C11  5F                        POP EDI
006E2C12  5E                        POP ESI
006E2C13  5B                        POP EBX
006E2C14  89 08                     MOV dword ptr [EAX],ECX
006E2C16  8B E5                     MOV ESP,EBP
006E2C18  5D                        POP EBP
006E2C19  C2 10 00                  RET 0x10
LAB_006e2c1c:
006E2C1C  8B 55 14                  MOV EDX,dword ptr [EBP + 0x14]
006E2C1F  5F                        POP EDI
006E2C20  5E                        POP ESI
006E2C21  5B                        POP EBX
006E2C22  89 0A                     MOV dword ptr [EDX],ECX
006E2C24  8B E5                     MOV ESP,EBP
006E2C26  5D                        POP EBP
006E2C27  C2 10 00                  RET 0x10
