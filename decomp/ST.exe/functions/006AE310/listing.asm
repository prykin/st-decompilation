FUN_006ae310:
006AE310  55                        PUSH EBP
006AE311  8B EC                     MOV EBP,ESP
006AE313  57                        PUSH EDI
006AE314  8B 7D 08                  MOV EDI,dword ptr [EBP + 0x8]
006AE317  85 FF                     TEST EDI,EDI
006AE319  75 13                     JNZ 0x006ae32e
006AE31B  6A 20                     PUSH 0x20
006AE31D  E8 EE C8 FF FF            CALL 0x006aac10
006AE322  85 C0                     TEST EAX,EAX
006AE324  89 45 08                  MOV dword ptr [EBP + 0x8],EAX
006AE327  74 11                     JZ 0x006ae33a
006AE329  83 08 08                  OR dword ptr [EAX],0x8
006AE32C  EB 09                     JMP 0x006ae337
LAB_006ae32e:
006AE32E  B9 08 00 00 00            MOV ECX,0x8
006AE333  33 C0                     XOR EAX,EAX
006AE335  F3 AB                     STOSD.REP ES:EDI
LAB_006ae337:
006AE337  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
LAB_006ae33a:
006AE33A  8B 10                     MOV EDX,dword ptr [EAX]
006AE33C  8B 4D 18                  MOV ECX,dword ptr [EBP + 0x18]
006AE33F  80 CE 01                  OR DH,0x1
006AE342  5F                        POP EDI
006AE343  89 10                     MOV dword ptr [EAX],EDX
006AE345  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
006AE348  89 48 18                  MOV dword ptr [EAX + 0x18],ECX
006AE34B  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
006AE34E  85 C0                     TEST EAX,EAX
006AE350  74 4C                     JZ 0x006ae39e
006AE352  8B 55 10                  MOV EDX,dword ptr [EBP + 0x10]
006AE355  8B 4D 0C                  MOV ECX,dword ptr [EBP + 0xc]
006AE358  89 50 08                  MOV dword ptr [EAX + 0x8],EDX
006AE35B  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
006AE35E  89 48 14                  MOV dword ptr [EAX + 0x14],ECX
006AE361  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
006AE364  52                        PUSH EDX
006AE365  E8 C6 FE FF FF            CALL 0x006ae230
006AE36A  85 C0                     TEST EAX,EAX
006AE36C  74 24                     JZ 0x006ae392
006AE36E  8D 45 08                  LEA EAX,[EBP + 0x8]
006AE371  50                        PUSH EAX
006AE372  E8 E9 CC FF FF            CALL 0x006ab060
006AE377  8B 0D 7C D7 7E 00         MOV ECX,dword ptr [0x007ed77c]
006AE37D  6A 51                     PUSH 0x51
006AE37F  68 44 DA 7E 00            PUSH 0x7eda44
006AE384  51                        PUSH ECX
006AE385  6A FE                     PUSH -0x2
006AE387  E8 B4 7A FF FF            CALL 0x006a5e40
006AE38C  33 C0                     XOR EAX,EAX
006AE38E  5D                        POP EBP
006AE38F  C2 14 00                  RET 0x14
LAB_006ae392:
006AE392  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
006AE395  8B 55 14                  MOV EDX,dword ptr [EBP + 0x14]
006AE398  89 50 14                  MOV dword ptr [EAX + 0x14],EDX
006AE39B  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
LAB_006ae39e:
006AE39E  5D                        POP EBP
006AE39F  C2 14 00                  RET 0x14
