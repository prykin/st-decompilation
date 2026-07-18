FUN_006c87f0:
006C87F0  55                        PUSH EBP
006C87F1  8B EC                     MOV EBP,ESP
006C87F3  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
006C87F6  8B 41 08                  MOV EAX,dword ptr [ECX + 0x8]
006C87F9  8D 50 07                  LEA EDX,[EAX + 0x7]
006C87FC  C1 EA 03                  SHR EDX,0x3
006C87FF  83 C2 18                  ADD EDX,0x18
006C8802  85 C0                     TEST EAX,EAX
006C8804  7E 2B                     JLE 0x006c8831
006C8806  53                        PUSH EBX
006C8807  56                        PUSH ESI
006C8808  8B 71 14                  MOV ESI,dword ptr [ECX + 0x14]
006C880B  57                        PUSH EDI
006C880C  8B D8                     MOV EBX,EAX
LAB_006c880e:
006C880E  8B 3E                     MOV EDI,dword ptr [ESI]
006C8810  85 FF                     TEST EDI,EDI
006C8812  74 0E                     JZ 0x006c8822
006C8814  83 C9 FF                  OR ECX,0xffffffff
006C8817  33 C0                     XOR EAX,EAX
006C8819  F2 AE                     SCASB.REPNE ES:EDI
006C881B  F7 D1                     NOT ECX
006C881D  49                        DEC ECX
006C881E  8D 54 0A 01               LEA EDX,[EDX + ECX*0x1 + 0x1]
LAB_006c8822:
006C8822  83 C6 04                  ADD ESI,0x4
006C8825  4B                        DEC EBX
006C8826  75 E6                     JNZ 0x006c880e
006C8828  5F                        POP EDI
006C8829  5E                        POP ESI
006C882A  8B C2                     MOV EAX,EDX
006C882C  5B                        POP EBX
006C882D  5D                        POP EBP
006C882E  C2 04 00                  RET 0x4
LAB_006c8831:
006C8831  8B C2                     MOV EAX,EDX
006C8833  5D                        POP EBP
006C8834  C2 04 00                  RET 0x4
