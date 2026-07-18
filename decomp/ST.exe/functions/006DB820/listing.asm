FUN_006db820:
006DB820  55                        PUSH EBP
006DB821  8B EC                     MOV EBP,ESP
006DB823  51                        PUSH ECX
006DB824  53                        PUSH EBX
006DB825  56                        PUSH ESI
006DB826  8B 75 08                  MOV ESI,dword ptr [EBP + 0x8]
006DB829  33 DB                     XOR EBX,EBX
006DB82B  3B F3                     CMP ESI,EBX
006DB82D  57                        PUSH EDI
006DB82E  89 5D FC                  MOV dword ptr [EBP + -0x4],EBX
006DB831  7D 09                     JGE 0x006db83c
006DB833  C7 45 FC 01 00 00 00      MOV dword ptr [EBP + -0x4],0x1
006DB83A  F7 DE                     NEG ESI
LAB_006db83c:
006DB83C  BF 5A 00 00 00            MOV EDI,0x5a
LAB_006db841:
006DB841  8D 04 1F                  LEA EAX,[EDI + EBX*0x1]
006DB844  99                        CDQ
006DB845  2B C2                     SUB EAX,EDX
006DB847  D1 F8                     SAR EAX,0x1
006DB849  8B 0C 85 84 E5 7E 00      MOV ECX,dword ptr [EAX*0x4 + 0x7ee584]
006DB850  3B F1                     CMP ESI,ECX
006DB852  74 2B                     JZ 0x006db87f
006DB854  7E 04                     JLE 0x006db85a
006DB856  8B D8                     MOV EBX,EAX
006DB858  EB 02                     JMP 0x006db85c
LAB_006db85a:
006DB85A  8B F8                     MOV EDI,EAX
LAB_006db85c:
006DB85C  8D 47 FF                  LEA EAX,[EDI + -0x1]
006DB85F  3B D8                     CMP EBX,EAX
006DB861  7C DE                     JL 0x006db841
006DB863  8B 14 9D 84 E5 7E 00      MOV EDX,dword ptr [EBX*0x4 + 0x7ee584]
006DB86A  8B CE                     MOV ECX,ESI
006DB86C  2B CA                     SUB ECX,EDX
006DB86E  8B 14 BD 84 E5 7E 00      MOV EDX,dword ptr [EDI*0x4 + 0x7ee584]
006DB875  2B D6                     SUB EDX,ESI
006DB877  8B C7                     MOV EAX,EDI
006DB879  3B CA                     CMP ECX,EDX
006DB87B  7F 02                     JG 0x006db87f
006DB87D  8B C3                     MOV EAX,EBX
LAB_006db87f:
006DB87F  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
006DB882  5F                        POP EDI
006DB883  5E                        POP ESI
006DB884  83 F9 01                  CMP ECX,0x1
006DB887  5B                        POP EBX
006DB888  75 09                     JNZ 0x006db893
006DB88A  B9 B4 00 00 00            MOV ECX,0xb4
006DB88F  2B C8                     SUB ECX,EAX
006DB891  8B C1                     MOV EAX,ECX
LAB_006db893:
006DB893  8B E5                     MOV ESP,EBP
006DB895  5D                        POP EBP
006DB896  C2 04 00                  RET 0x4
