FUN_006e44e0:
006E44E0  55                        PUSH EBP
006E44E1  8B EC                     MOV EBP,ESP
006E44E3  83 EC 0C                  SUB ESP,0xc
006E44E6  53                        PUSH EBX
006E44E7  56                        PUSH ESI
006E44E8  57                        PUSH EDI
006E44E9  8B F9                     MOV EDI,ECX
006E44EB  33 F6                     XOR ESI,ESI
006E44ED  8D 55 F4                  LEA EDX,[EBP + -0xc]
006E44F0  8B 47 10                  MOV EAX,dword ptr [EDI + 0x10]
006E44F3  89 70 04                  MOV dword ptr [EAX + 0x4],ESI
006E44F6  8B 4F 10                  MOV ECX,dword ptr [EDI + 0x10]
006E44F9  E8 92 CC FC FF            CALL 0x006b1190
006E44FE  85 C0                     TEST EAX,EAX
006E4500  7C 2C                     JL 0x006e452e
006E4502  8B 5D 08                  MOV EBX,dword ptr [EBP + 0x8]
LAB_006e4505:
006E4505  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
006E4508  39 58 14                  CMP dword ptr [EAX + 0x14],EBX
006E450B  74 23                     JZ 0x006e4530
006E450D  8D 4D F4                  LEA ECX,[EBP + -0xc]
006E4510  53                        PUSH EBX
006E4511  51                        PUSH ECX
006E4512  8B CF                     MOV ECX,EDI
006E4514  E8 67 FF FF FF            CALL 0x006e4480
006E4519  8B F0                     MOV ESI,EAX
006E451B  85 F6                     TEST ESI,ESI
006E451D  75 0F                     JNZ 0x006e452e
006E451F  8B 4F 10                  MOV ECX,dword ptr [EDI + 0x10]
006E4522  8D 55 F4                  LEA EDX,[EBP + -0xc]
006E4525  E8 66 CC FC FF            CALL 0x006b1190
006E452A  85 C0                     TEST EAX,EAX
006E452C  7D D7                     JGE 0x006e4505
LAB_006e452e:
006E452E  8B C6                     MOV EAX,ESI
LAB_006e4530:
006E4530  5F                        POP EDI
006E4531  5E                        POP ESI
006E4532  5B                        POP EBX
006E4533  8B E5                     MOV ESP,EBP
006E4535  5D                        POP EBP
006E4536  C2 04 00                  RET 0x4
