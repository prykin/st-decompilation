FUN_006c4230:
006C4230  55                        PUSH EBP
006C4231  8B EC                     MOV EBP,ESP
006C4233  83 EC 14                  SUB ESP,0x14
006C4236  8B 45 10                  MOV EAX,dword ptr [EBP + 0x10]
006C4239  56                        PUSH ESI
006C423A  8B 75 0C                  MOV ESI,dword ptr [EBP + 0xc]
006C423D  85 C0                     TEST EAX,EAX
006C423F  75 09                     JNZ 0x006c424a
006C4241  56                        PUSH ESI
006C4242  E8 59 0D FF FF            CALL 0x006b4fa0
006C4247  89 45 10                  MOV dword ptr [EBP + 0x10],EAX
LAB_006c424a:
006C424A  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
006C424D  53                        PUSH EBX
006C424E  57                        PUSH EDI
006C424F  6A 00                     PUSH 0x0
006C4251  68 80 00 00 00            PUSH 0x80
006C4256  6A 02                     PUSH 0x2
006C4258  6A 00                     PUSH 0x0
006C425A  6A 00                     PUSH 0x0
006C425C  68 00 00 00 40            PUSH 0x40000000
006C4261  50                        PUSH EAX
006C4262  FF 15 80 BC 85 00         CALL dword ptr [0x0085bc80]
006C4268  83 F8 FF                  CMP EAX,-0x1
006C426B  89 45 0C                  MOV dword ptr [EBP + 0xc],EAX
006C426E  0F 84 96 00 00 00         JZ 0x006c430a
006C4274  56                        PUSH ESI
006C4275  E8 96 0D FF FF            CALL 0x006b5010
006C427A  8B 5E 14                  MOV EBX,dword ptr [ESI + 0x14]
006C427D  8B F8                     MOV EDI,EAX
006C427F  83 C7 28                  ADD EDI,0x28
006C4282  85 DB                     TEST EBX,EBX
006C4284  75 18                     JNZ 0x006c429e
006C4286  66 8B 5E 0E               MOV BX,word ptr [ESI + 0xe]
006C428A  0F AF 5E 04               IMUL EBX,dword ptr [ESI + 0x4]
006C428E  83 C3 1F                  ADD EBX,0x1f
006C4291  C1 EB 03                  SHR EBX,0x3
006C4294  81 E3 FC FF FF 1F         AND EBX,0x1ffffffc
006C429A  0F AF 5E 08               IMUL EBX,dword ptr [ESI + 0x8]
LAB_006c429e:
006C429E  56                        PUSH ESI
006C429F  66 C7 45 EC 42 4D         MOV word ptr [EBP + -0x14],0x4d42
006C42A5  E8 A6 0D FF FF            CALL 0x006b5050
006C42AA  83 C0 0E                  ADD EAX,0xe
006C42AD  8D 4F 0E                  LEA ECX,[EDI + 0xe]
006C42B0  89 45 EE                  MOV dword ptr [EBP + -0x12],EAX
006C42B3  33 C0                     XOR EAX,EAX
006C42B5  8D 55 FC                  LEA EDX,[EBP + -0x4]
006C42B8  66 89 45 F2               MOV word ptr [EBP + -0xe],AX
006C42BC  66 89 45 F4               MOV word ptr [EBP + -0xc],AX
006C42C0  50                        PUSH EAX
006C42C1  89 4D F6                  MOV dword ptr [EBP + -0xa],ECX
006C42C4  8B 4D 0C                  MOV ECX,dword ptr [EBP + 0xc]
006C42C7  52                        PUSH EDX
006C42C8  8D 45 EC                  LEA EAX,[EBP + -0x14]
006C42CB  6A 0E                     PUSH 0xe
006C42CD  50                        PUSH EAX
006C42CE  51                        PUSH ECX
006C42CF  FF 15 90 BC 85 00         CALL dword ptr [0x0085bc90]
006C42D5  85 C0                     TEST EAX,EAX
006C42D7  74 31                     JZ 0x006c430a
006C42D9  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
006C42DC  8D 55 FC                  LEA EDX,[EBP + -0x4]
006C42DF  6A 00                     PUSH 0x0
006C42E1  52                        PUSH EDX
006C42E2  57                        PUSH EDI
006C42E3  56                        PUSH ESI
006C42E4  8B 35 90 BC 85 00         MOV ESI,dword ptr [0x0085bc90]
006C42EA  50                        PUSH EAX
006C42EB  FF D6                     CALL ESI
006C42ED  85 C0                     TEST EAX,EAX
006C42EF  74 19                     JZ 0x006c430a
006C42F1  8B 55 10                  MOV EDX,dword ptr [EBP + 0x10]
006C42F4  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
006C42F7  8D 4D FC                  LEA ECX,[EBP + -0x4]
006C42FA  6A 00                     PUSH 0x0
006C42FC  51                        PUSH ECX
006C42FD  53                        PUSH EBX
006C42FE  52                        PUSH EDX
006C42FF  50                        PUSH EAX
006C4300  FF D6                     CALL ESI
006C4302  85 C0                     TEST EAX,EAX
006C4304  74 04                     JZ 0x006c430a
006C4306  33 F6                     XOR ESI,ESI
006C4308  EB 08                     JMP 0x006c4312
LAB_006c430a:
006C430A  FF 15 CC BB 85 00         CALL dword ptr [0x0085bbcc]
006C4310  8B F0                     MOV ESI,EAX
LAB_006c4312:
006C4312  8B 4D 0C                  MOV ECX,dword ptr [EBP + 0xc]
006C4315  51                        PUSH ECX
006C4316  FF 15 C8 BB 85 00         CALL dword ptr [0x0085bbc8]
006C431C  5F                        POP EDI
006C431D  5B                        POP EBX
006C431E  85 F6                     TEST ESI,ESI
006C4320  74 1D                     JZ 0x006c433f
006C4322  8B 15 7C D7 7E 00         MOV EDX,dword ptr [0x007ed77c]
006C4328  6A 2E                     PUSH 0x2e
006C432A  68 DC DE 7E 00            PUSH 0x7ededc
006C432F  52                        PUSH EDX
006C4330  56                        PUSH ESI
006C4331  E8 0A 1B FE FF            CALL 0x006a5e40
006C4336  8B C6                     MOV EAX,ESI
006C4338  5E                        POP ESI
006C4339  8B E5                     MOV ESP,EBP
006C433B  5D                        POP EBP
006C433C  C2 0C 00                  RET 0xc
LAB_006c433f:
006C433F  33 C0                     XOR EAX,EAX
006C4341  5E                        POP ESI
006C4342  8B E5                     MOV ESP,EBP
006C4344  5D                        POP EBP
006C4345  C2 0C 00                  RET 0xc
