FUN_006db760:
006DB760  55                        PUSH EBP
006DB761  8B EC                     MOV EBP,ESP
006DB763  51                        PUSH ECX
006DB764  53                        PUSH EBX
006DB765  56                        PUSH ESI
006DB766  8B 75 08                  MOV ESI,dword ptr [EBP + 0x8]
006DB769  33 DB                     XOR EBX,EBX
006DB76B  3B F3                     CMP ESI,EBX
006DB76D  57                        PUSH EDI
006DB76E  89 5D FC                  MOV dword ptr [EBP + -0x4],EBX
006DB771  7D 09                     JGE 0x006db77c
006DB773  C7 45 FC 01 00 00 00      MOV dword ptr [EBP + -0x4],0x1
006DB77A  F7 DE                     NEG ESI
LAB_006db77c:
006DB77C  81 FE 00 00 01 00         CMP ESI,0x10000
006DB782  7E 07                     JLE 0x006db78b
006DB784  B8 5A 00 00 00            MOV EAX,0x5a
006DB789  EB 43                     JMP 0x006db7ce
LAB_006db78b:
006DB78B  BF 5A 00 00 00            MOV EDI,0x5a
LAB_006db790:
006DB790  8D 04 1F                  LEA EAX,[EDI + EBX*0x1]
006DB793  99                        CDQ
006DB794  2B C2                     SUB EAX,EDX
006DB796  D1 F8                     SAR EAX,0x1
006DB798  8B 0C 85 18 E4 7E 00      MOV ECX,dword ptr [EAX*0x4 + 0x7ee418]
006DB79F  3B F1                     CMP ESI,ECX
006DB7A1  74 2B                     JZ 0x006db7ce
006DB7A3  7E 04                     JLE 0x006db7a9
006DB7A5  8B D8                     MOV EBX,EAX
006DB7A7  EB 02                     JMP 0x006db7ab
LAB_006db7a9:
006DB7A9  8B F8                     MOV EDI,EAX
LAB_006db7ab:
006DB7AB  8D 47 FF                  LEA EAX,[EDI + -0x1]
006DB7AE  3B D8                     CMP EBX,EAX
006DB7B0  7C DE                     JL 0x006db790
006DB7B2  8B 14 9D 18 E4 7E 00      MOV EDX,dword ptr [EBX*0x4 + 0x7ee418]
006DB7B9  8B CE                     MOV ECX,ESI
006DB7BB  2B CA                     SUB ECX,EDX
006DB7BD  8B 14 BD 18 E4 7E 00      MOV EDX,dword ptr [EDI*0x4 + 0x7ee418]
006DB7C4  2B D6                     SUB EDX,ESI
006DB7C6  8B C7                     MOV EAX,EDI
006DB7C8  3B CA                     CMP ECX,EDX
006DB7CA  7F 02                     JG 0x006db7ce
006DB7CC  8B C3                     MOV EAX,EBX
LAB_006db7ce:
006DB7CE  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
006DB7D1  5F                        POP EDI
006DB7D2  5E                        POP ESI
006DB7D3  83 F9 01                  CMP ECX,0x1
006DB7D6  5B                        POP EBX
006DB7D7  75 09                     JNZ 0x006db7e2
006DB7D9  B9 68 01 00 00            MOV ECX,0x168
006DB7DE  2B C8                     SUB ECX,EAX
006DB7E0  8B C1                     MOV EAX,ECX
LAB_006db7e2:
006DB7E2  8B E5                     MOV ESP,EBP
006DB7E4  5D                        POP EBP
006DB7E5  C2 04 00                  RET 0x4
