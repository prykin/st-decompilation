FUN_006c5210:
006C5210  55                        PUSH EBP
006C5211  8B EC                     MOV EBP,ESP
006C5213  83 EC 74                  SUB ESP,0x74
006C5216  8B 45 18                  MOV EAX,dword ptr [EBP + 0x18]
006C5219  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
006C521C  89 45 DC                  MOV dword ptr [EBP + -0x24],EAX
006C521F  33 C9                     XOR ECX,ECX
006C5221  8B 82 98 04 00 00         MOV EAX,dword ptr [EDX + 0x498]
006C5227  C7 45 8C 64 00 00 00      MOV dword ptr [EBP + -0x74],0x64
006C522E  83 F8 07                  CMP EAX,0x7
006C5231  75 0C                     JNZ 0x006c523f
006C5233  B9 00 00 02 00            MOV ECX,0x20000
006C5238  C7 45 94 49 00 5A 00      MOV dword ptr [EBP + -0x6c],0x5a0049
LAB_006c523f:
006C523F  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
006C5242  8B 55 14                  MOV EDX,dword ptr [EBP + 0x14]
006C5245  89 45 F0                  MOV dword ptr [EBP + -0x10],EAX
006C5248  8B 45 10                  MOV EAX,dword ptr [EBP + 0x10]
006C524B  53                        PUSH EBX
006C524C  56                        PUSH ESI
006C524D  57                        PUSH EDI
006C524E  89 45 F4                  MOV dword ptr [EBP + -0xc],EAX
006C5251  42                        INC EDX
006C5252  40                        INC EAX
006C5253  8B F9                     MOV EDI,ECX
006C5255  33 DB                     XOR EBX,EBX
006C5257  89 55 F8                  MOV dword ptr [EBP + -0x8],EDX
006C525A  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
006C525D  81 CF 00 04 00 01         OR EDI,0x1000400
LAB_006c5263:
006C5263  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
006C5266  8D 55 8C                  LEA EDX,[EBP + -0x74]
006C5269  52                        PUSH EDX
006C526A  57                        PUSH EDI
006C526B  8B 40 40                  MOV EAX,dword ptr [EAX + 0x40]
006C526E  6A 00                     PUSH 0x0
006C5270  8D 55 F0                  LEA EDX,[EBP + -0x10]
006C5273  6A 00                     PUSH 0x0
006C5275  8B 08                     MOV ECX,dword ptr [EAX]
006C5277  52                        PUSH EDX
006C5278  50                        PUSH EAX
006C5279  FF 51 14                  CALL dword ptr [ECX + 0x14]
006C527C  8B F0                     MOV ESI,EAX
006C527E  85 F6                     TEST ESI,ESI
006C5280  74 35                     JZ 0x006c52b7
006C5282  81 FE C2 01 76 88         CMP ESI,0x887601c2
006C5288  75 0B                     JNZ 0x006c5295
006C528A  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
006C528D  50                        PUSH EAX
006C528E  E8 AD 99 00 00            CALL 0x006cec40
006C5293  EB 1C                     JMP 0x006c52b1
LAB_006c5295:
006C5295  81 FE A0 00 76 88         CMP ESI,0x887600a0
006C529B  74 08                     JZ 0x006c52a5
006C529D  81 FE AE 01 76 88         CMP ESI,0x887601ae
006C52A3  75 12                     JNZ 0x006c52b7
LAB_006c52a5:
006C52A5  85 DB                     TEST EBX,EBX
006C52A7  75 0E                     JNZ 0x006c52b7
006C52A9  6A 02                     PUSH 0x2
006C52AB  FF 15 6C BC 85 00         CALL dword ptr [0x0085bc6c]
LAB_006c52b1:
006C52B1  43                        INC EBX
006C52B2  83 FB 02                  CMP EBX,0x2
006C52B5  72 AC                     JC 0x006c5263
LAB_006c52b7:
006C52B7  81 FE A0 00 76 88         CMP ESI,0x887600a0
006C52BD  74 08                     JZ 0x006c52c7
006C52BF  81 FE AE 01 76 88         CMP ESI,0x887601ae
006C52C5  75 0B                     JNZ 0x006c52d2
LAB_006c52c7:
006C52C7  5F                        POP EDI
006C52C8  5E                        POP ESI
006C52C9  33 C0                     XOR EAX,EAX
006C52CB  5B                        POP EBX
006C52CC  8B E5                     MOV ESP,EBP
006C52CE  5D                        POP EBP
006C52CF  C2 14 00                  RET 0x14
LAB_006c52d2:
006C52D2  8B C6                     MOV EAX,ESI
006C52D4  5F                        POP EDI
006C52D5  5E                        POP ESI
006C52D6  5B                        POP EBX
006C52D7  8B E5                     MOV ESP,EBP
006C52D9  5D                        POP EBP
006C52DA  C2 14 00                  RET 0x14
