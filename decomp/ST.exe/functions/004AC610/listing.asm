FUN_004ac610:
004AC610  55                        PUSH EBP
004AC611  8B EC                     MOV EBP,ESP
004AC613  83 79 18 FF               CMP dword ptr [ECX + 0x18],-0x1
004AC617  74 27                     JZ 0x004ac640
004AC619  8A 45 08                  MOV AL,byte ptr [EBP + 0x8]
004AC61C  84 C0                     TEST AL,AL
004AC61E  7C 20                     JL 0x004ac640
004AC620  8B 51 14                  MOV EDX,dword ptr [ECX + 0x14]
004AC623  0F BE C0                  MOVSX EAX,AL
004AC626  4A                        DEC EDX
004AC627  3B C2                     CMP EAX,EDX
004AC629  7F 15                     JG 0x004ac640
004AC62B  8B 49 20                  MOV ECX,dword ptr [ECX + 0x20]
004AC62E  8D 04 C0                  LEA EAX,[EAX + EAX*0x8]
004AC631  80 4C 81 0E 01            OR byte ptr [ECX + EAX*0x4 + 0xe],0x1
004AC636  8D 44 81 0E               LEA EAX,[ECX + EAX*0x4 + 0xe]
004AC63A  33 C0                     XOR EAX,EAX
004AC63C  5D                        POP EBP
004AC63D  C2 04 00                  RET 0x4
LAB_004ac640:
004AC640  83 C8 FF                  OR EAX,0xffffffff
004AC643  5D                        POP EBP
004AC644  C2 04 00                  RET 0x4
