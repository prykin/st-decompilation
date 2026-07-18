FUN_006c7610:
006C7610  55                        PUSH EBP
006C7611  8B EC                     MOV EBP,ESP
006C7613  53                        PUSH EBX
006C7614  8B 5D 18                  MOV EBX,dword ptr [EBP + 0x18]
006C7617  57                        PUSH EDI
006C7618  8B 7D 20                  MOV EDI,dword ptr [EBP + 0x20]
006C761B  85 FF                     TEST EDI,EDI
006C761D  74 62                     JZ 0x006c7681
006C761F  8D 04 3F                  LEA EAX,[EDI + EDI*0x1]
006C7622  3B D8                     CMP EBX,EAX
006C7624  7C 5B                     JL 0x006c7681
006C7626  39 45 1C                  CMP dword ptr [EBP + 0x1c],EAX
006C7629  7C 56                     JL 0x006c7681
006C762B  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
006C762E  56                        PUSH ESI
006C762F  8B 75 08                  MOV ESI,dword ptr [EBP + 0x8]
006C7632  85 C0                     TEST EAX,EAX
006C7634  75 06                     JNZ 0x006c763c
006C7636  56                        PUSH ESI
006C7637  E8 64 D9 FE FF            CALL 0x006b4fa0
LAB_006c763c:
006C763C  33 C9                     XOR ECX,ECX
006C763E  8B 55 24                  MOV EDX,dword ptr [EBP + 0x24]
006C7641  66 8B 4E 0E               MOV CX,word ptr [ESI + 0xe]
006C7645  52                        PUSH EDX
006C7646  0F AF 4E 04               IMUL ECX,dword ptr [ESI + 0x4]
006C764A  8B 55 1C                  MOV EDX,dword ptr [EBP + 0x1c]
006C764D  83 C1 1F                  ADD ECX,0x1f
006C7650  C1 E9 03                  SHR ECX,0x3
006C7653  81 E1 FC FF FF 1F         AND ECX,0x1ffffffc
006C7659  57                        PUSH EDI
006C765A  52                        PUSH EDX
006C765B  8B D1                     MOV EDX,ECX
006C765D  F7 DA                     NEG EDX
006C765F  53                        PUSH EBX
006C7660  8B 5D 14                  MOV EBX,dword ptr [EBP + 0x14]
006C7663  52                        PUSH EDX
006C7664  8B 56 08                  MOV EDX,dword ptr [ESI + 0x8]
006C7667  2B D3                     SUB EDX,EBX
006C7669  4A                        DEC EDX
006C766A  0F AF D1                  IMUL EDX,ECX
006C766D  8B 4D 10                  MOV ECX,dword ptr [EBP + 0x10]
006C7670  03 D0                     ADD EDX,EAX
006C7672  03 D1                     ADD EDX,ECX
006C7674  52                        PUSH EDX
006C7675  E8 B6 03 01 00            CALL 0x006d7a30
006C767A  5E                        POP ESI
006C767B  5F                        POP EDI
006C767C  5B                        POP EBX
006C767D  5D                        POP EBP
006C767E  C2 20 00                  RET 0x20
LAB_006c7681:
006C7681  8B 45 24                  MOV EAX,dword ptr [EBP + 0x24]
006C7684  8B 4D 1C                  MOV ECX,dword ptr [EBP + 0x1c]
006C7687  8B 55 14                  MOV EDX,dword ptr [EBP + 0x14]
006C768A  25 FF 00 00 00            AND EAX,0xff
006C768F  50                        PUSH EAX
006C7690  8B 45 10                  MOV EAX,dword ptr [EBP + 0x10]
006C7693  51                        PUSH ECX
006C7694  8B 4D 0C                  MOV ECX,dword ptr [EBP + 0xc]
006C7697  53                        PUSH EBX
006C7698  52                        PUSH EDX
006C7699  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
006C769C  50                        PUSH EAX
006C769D  51                        PUSH ECX
006C769E  52                        PUSH EDX
006C769F  E8 CC CA FE FF            CALL 0x006b4170
006C76A4  5F                        POP EDI
006C76A5  5B                        POP EBX
006C76A6  5D                        POP EBP
006C76A7  C2 20 00                  RET 0x20
