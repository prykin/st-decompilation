FUN_006bc580:
006BC580  55                        PUSH EBP
006BC581  8B EC                     MOV EBP,ESP
006BC583  83 EC 10                  SUB ESP,0x10
006BC586  53                        PUSH EBX
006BC587  56                        PUSH ESI
006BC588  8B 75 0C                  MOV ESI,dword ptr [EBP + 0xc]
006BC58B  57                        PUSH EDI
006BC58C  8B 7D 08                  MOV EDI,dword ptr [EBP + 0x8]
006BC58F  8B 06                     MOV EAX,dword ptr [ESI]
006BC591  89 45 F0                  MOV dword ptr [EBP + -0x10],EAX
006BC594  8B 4E 04                  MOV ECX,dword ptr [ESI + 0x4]
006BC597  89 4D F4                  MOV dword ptr [EBP + -0xc],ECX
006BC59A  8B 56 08                  MOV EDX,dword ptr [ESI + 0x8]
006BC59D  03 D0                     ADD EDX,EAX
006BC59F  8B 76 0C                  MOV ESI,dword ptr [ESI + 0xc]
006BC5A2  89 55 F8                  MOV dword ptr [EBP + -0x8],EDX
006BC5A5  03 F1                     ADD ESI,ECX
006BC5A7  33 DB                     XOR EBX,EBX
006BC5A9  89 75 FC                  MOV dword ptr [EBP + -0x4],ESI
LAB_006bc5ac:
006BC5AC  8B 47 44                  MOV EAX,dword ptr [EDI + 0x44]
006BC5AF  6A 00                     PUSH 0x0
006BC5B1  8D 55 F0                  LEA EDX,[EBP + -0x10]
006BC5B4  68 00 00 00 01            PUSH 0x1000000
006BC5B9  8B 08                     MOV ECX,dword ptr [EAX]
006BC5BB  52                        PUSH EDX
006BC5BC  8B 57 40                  MOV EDX,dword ptr [EDI + 0x40]
006BC5BF  52                        PUSH EDX
006BC5C0  8D 55 F0                  LEA EDX,[EBP + -0x10]
006BC5C3  52                        PUSH EDX
006BC5C4  50                        PUSH EAX
006BC5C5  FF 51 14                  CALL dword ptr [ECX + 0x14]
006BC5C8  8B F0                     MOV ESI,EAX
006BC5CA  85 F6                     TEST ESI,ESI
006BC5CC  74 32                     JZ 0x006bc600
006BC5CE  81 FE C2 01 76 88         CMP ESI,0x887601c2
006BC5D4  75 08                     JNZ 0x006bc5de
006BC5D6  57                        PUSH EDI
006BC5D7  E8 64 26 01 00            CALL 0x006cec40
006BC5DC  EB 1C                     JMP 0x006bc5fa
LAB_006bc5de:
006BC5DE  81 FE A0 00 76 88         CMP ESI,0x887600a0
006BC5E4  74 08                     JZ 0x006bc5ee
006BC5E6  81 FE AE 01 76 88         CMP ESI,0x887601ae
006BC5EC  75 12                     JNZ 0x006bc600
LAB_006bc5ee:
006BC5EE  85 DB                     TEST EBX,EBX
006BC5F0  75 0E                     JNZ 0x006bc600
006BC5F2  6A 02                     PUSH 0x2
006BC5F4  FF 15 6C BC 85 00         CALL dword ptr [0x0085bc6c]
LAB_006bc5fa:
006BC5FA  43                        INC EBX
006BC5FB  83 FB 02                  CMP EBX,0x2
006BC5FE  7C AC                     JL 0x006bc5ac
LAB_006bc600:
006BC600  81 FE A0 00 76 88         CMP ESI,0x887600a0
006BC606  74 08                     JZ 0x006bc610
006BC608  81 FE AE 01 76 88         CMP ESI,0x887601ae
006BC60E  75 0B                     JNZ 0x006bc61b
LAB_006bc610:
006BC610  5F                        POP EDI
006BC611  5E                        POP ESI
006BC612  33 C0                     XOR EAX,EAX
006BC614  5B                        POP EBX
006BC615  8B E5                     MOV ESP,EBP
006BC617  5D                        POP EBP
006BC618  C2 08 00                  RET 0x8
LAB_006bc61b:
006BC61B  8B C6                     MOV EAX,ESI
006BC61D  5F                        POP EDI
006BC61E  5E                        POP ESI
006BC61F  5B                        POP EBX
006BC620  8B E5                     MOV ESP,EBP
006BC622  5D                        POP EBP
006BC623  C2 08 00                  RET 0x8
