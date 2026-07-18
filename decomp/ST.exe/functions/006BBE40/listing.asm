FUN_006bbe40:
006BBE40  55                        PUSH EBP
006BBE41  8B EC                     MOV EBP,ESP
006BBE43  83 EC 7C                  SUB ESP,0x7c
006BBE46  53                        PUSH EBX
006BBE47  56                        PUSH ESI
006BBE48  8B 75 08                  MOV ESI,dword ptr [EBP + 0x8]
006BBE4B  57                        PUSH EDI
006BBE4C  8B 7D 14                  MOV EDI,dword ptr [EBP + 0x14]
006BBE4F  33 DB                     XOR EBX,EBX
006BBE51  89 5D A8                  MOV dword ptr [EBP + -0x58],EBX
006BBE54  89 5D 94                  MOV dword ptr [EBP + -0x6c],EBX
006BBE57  C7 45 84 7C 00 00 00      MOV dword ptr [EBP + -0x7c],0x7c
006BBE5E  83 CF 01                  OR EDI,0x1
LAB_006bbe61:
006BBE61  8B 06                     MOV EAX,dword ptr [ESI]
006BBE63  6A 00                     PUSH 0x0
006BBE65  8D 4D 84                  LEA ECX,[EBP + -0x7c]
006BBE68  57                        PUSH EDI
006BBE69  51                        PUSH ECX
006BBE6A  6A 00                     PUSH 0x0
006BBE6C  56                        PUSH ESI
006BBE6D  FF 50 64                  CALL dword ptr [EAX + 0x64]
006BBE70  3D A0 00 76 88            CMP EAX,0x887600a0
006BBE75  74 07                     JZ 0x006bbe7e
006BBE77  3D AE 01 76 88            CMP EAX,0x887601ae
006BBE7C  75 13                     JNZ 0x006bbe91
LAB_006bbe7e:
006BBE7E  85 DB                     TEST EBX,EBX
006BBE80  75 0F                     JNZ 0x006bbe91
006BBE82  6A 02                     PUSH 0x2
006BBE84  FF 15 6C BC 85 00         CALL dword ptr [0x0085bc6c]
006BBE8A  BB 01 00 00 00            MOV EBX,0x1
006BBE8F  EB D0                     JMP 0x006bbe61
LAB_006bbe91:
006BBE91  8B 55 0C                  MOV EDX,dword ptr [EBP + 0xc]
006BBE94  5F                        POP EDI
006BBE95  5E                        POP ESI
006BBE96  5B                        POP EBX
006BBE97  85 C0                     TEST EAX,EAX
006BBE99  75 13                     JNZ 0x006bbeae
006BBE9B  8B 4D A8                  MOV ECX,dword ptr [EBP + -0x58]
006BBE9E  89 0A                     MOV dword ptr [EDX],ECX
006BBEA0  8B 55 10                  MOV EDX,dword ptr [EBP + 0x10]
006BBEA3  8B 4D 94                  MOV ECX,dword ptr [EBP + -0x6c]
006BBEA6  89 0A                     MOV dword ptr [EDX],ECX
006BBEA8  8B E5                     MOV ESP,EBP
006BBEAA  5D                        POP EBP
006BBEAB  C2 10 00                  RET 0x10
LAB_006bbeae:
006BBEAE  8B 4D 10                  MOV ECX,dword ptr [EBP + 0x10]
006BBEB1  C7 02 00 00 00 00         MOV dword ptr [EDX],0x0
006BBEB7  C7 01 00 00 00 00         MOV dword ptr [ECX],0x0
006BBEBD  8B E5                     MOV ESP,EBP
006BBEBF  5D                        POP EBP
006BBEC0  C2 10 00                  RET 0x10
