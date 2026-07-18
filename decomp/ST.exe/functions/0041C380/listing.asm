FUN_0041c380:
0041C380  55                        PUSH EBP
0041C381  8B EC                     MOV EBP,ESP
0041C383  83 EC 0C                  SUB ESP,0xc
0041C386  0F BF 51 47               MOVSX EDX,word ptr [ECX + 0x47]
0041C38A  33 C0                     XOR EAX,EAX
0041C38C  6A 00                     PUSH 0x0
0041C38E  89 45 F4                  MOV dword ptr [EBP + -0xc],EAX
0041C391  89 55 F4                  MOV dword ptr [EBP + -0xc],EDX
0041C394  89 45 F8                  MOV dword ptr [EBP + -0x8],EAX
0041C397  8D 55 F4                  LEA EDX,[EBP + -0xc]
0041C39A  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
0041C39D  52                        PUSH EDX
0041C39E  0F BF 41 49               MOVSX EAX,word ptr [ECX + 0x49]
0041C3A2  8B 49 08                  MOV ECX,dword ptr [ECX + 0x8]
0041C3A5  89 45 F8                  MOV dword ptr [EBP + -0x8],EAX
0041C3A8  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
0041C3AB  89 4D FC                  MOV dword ptr [EBP + -0x4],ECX
0041C3AE  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
0041C3B1  50                        PUSH EAX
0041C3B2  6A 00                     PUSH 0x0
0041C3B4  51                        PUSH ECX
0041C3B5  B9 58 76 80 00            MOV ECX,0x807658
0041C3BA  E8 19 88 FE FF            CALL 0x00404bd8
0041C3BF  8B E5                     MOV ESP,EBP
0041C3C1  5D                        POP EBP
0041C3C2  C2 08 00                  RET 0x8
