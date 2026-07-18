FUN_006c52e0:
006C52E0  55                        PUSH EBP
006C52E1  8B EC                     MOV EBP,ESP
006C52E3  83 EC 74                  SUB ESP,0x74
006C52E6  8B 45 18                  MOV EAX,dword ptr [EBP + 0x18]
006C52E9  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
006C52EC  89 45 DC                  MOV dword ptr [EBP + -0x24],EAX
006C52EF  33 C9                     XOR ECX,ECX
006C52F1  8B 82 98 04 00 00         MOV EAX,dword ptr [EDX + 0x498]
006C52F7  C7 45 8C 64 00 00 00      MOV dword ptr [EBP + -0x74],0x64
006C52FE  83 F8 07                  CMP EAX,0x7
006C5301  75 0C                     JNZ 0x006c530f
006C5303  B9 00 00 02 00            MOV ECX,0x20000
006C5308  C7 45 94 49 00 5A 00      MOV dword ptr [EBP + -0x6c],0x5a0049
LAB_006c530f:
006C530F  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
006C5312  8B 55 10                  MOV EDX,dword ptr [EBP + 0x10]
006C5315  89 45 F0                  MOV dword ptr [EBP + -0x10],EAX
006C5318  40                        INC EAX
006C5319  53                        PUSH EBX
006C531A  89 45 F8                  MOV dword ptr [EBP + -0x8],EAX
006C531D  8B 45 14                  MOV EAX,dword ptr [EBP + 0x14]
006C5320  56                        PUSH ESI
006C5321  57                        PUSH EDI
006C5322  40                        INC EAX
006C5323  8B F9                     MOV EDI,ECX
006C5325  33 DB                     XOR EBX,EBX
006C5327  89 55 F4                  MOV dword ptr [EBP + -0xc],EDX
006C532A  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
006C532D  81 CF 00 04 00 01         OR EDI,0x1000400
LAB_006c5333:
006C5333  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
006C5336  8B 41 40                  MOV EAX,dword ptr [ECX + 0x40]
006C5339  8D 4D 8C                  LEA ECX,[EBP + -0x74]
006C533C  51                        PUSH ECX
006C533D  57                        PUSH EDI
006C533E  8B 10                     MOV EDX,dword ptr [EAX]
006C5340  6A 00                     PUSH 0x0
006C5342  8D 4D F0                  LEA ECX,[EBP + -0x10]
006C5345  6A 00                     PUSH 0x0
006C5347  51                        PUSH ECX
006C5348  50                        PUSH EAX
006C5349  FF 52 14                  CALL dword ptr [EDX + 0x14]
006C534C  8B F0                     MOV ESI,EAX
006C534E  85 F6                     TEST ESI,ESI
006C5350  74 35                     JZ 0x006c5387
006C5352  81 FE C2 01 76 88         CMP ESI,0x887601c2
006C5358  75 0B                     JNZ 0x006c5365
006C535A  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
006C535D  52                        PUSH EDX
006C535E  E8 DD 98 00 00            CALL 0x006cec40
006C5363  EB 1C                     JMP 0x006c5381
LAB_006c5365:
006C5365  81 FE A0 00 76 88         CMP ESI,0x887600a0
006C536B  74 08                     JZ 0x006c5375
006C536D  81 FE AE 01 76 88         CMP ESI,0x887601ae
006C5373  75 12                     JNZ 0x006c5387
LAB_006c5375:
006C5375  85 DB                     TEST EBX,EBX
006C5377  75 0E                     JNZ 0x006c5387
006C5379  6A 02                     PUSH 0x2
006C537B  FF 15 6C BC 85 00         CALL dword ptr [0x0085bc6c]
LAB_006c5381:
006C5381  43                        INC EBX
006C5382  83 FB 02                  CMP EBX,0x2
006C5385  72 AC                     JC 0x006c5333
LAB_006c5387:
006C5387  81 FE A0 00 76 88         CMP ESI,0x887600a0
006C538D  74 08                     JZ 0x006c5397
006C538F  81 FE AE 01 76 88         CMP ESI,0x887601ae
006C5395  75 0B                     JNZ 0x006c53a2
LAB_006c5397:
006C5397  5F                        POP EDI
006C5398  5E                        POP ESI
006C5399  33 C0                     XOR EAX,EAX
006C539B  5B                        POP EBX
006C539C  8B E5                     MOV ESP,EBP
006C539E  5D                        POP EBP
006C539F  C2 14 00                  RET 0x14
LAB_006c53a2:
006C53A2  8B C6                     MOV EAX,ESI
006C53A4  5F                        POP EDI
006C53A5  5E                        POP ESI
006C53A6  5B                        POP EBX
006C53A7  8B E5                     MOV ESP,EBP
006C53A9  5D                        POP EBP
006C53AA  C2 14 00                  RET 0x14
