FUN_0062a860:
0062A860  55                        PUSH EBP
0062A861  8B EC                     MOV EBP,ESP
0062A863  83 EC 20                  SUB ESP,0x20
0062A866  8B D1                     MOV EDX,ECX
0062A868  57                        PUSH EDI
0062A869  B9 08 00 00 00            MOV ECX,0x8
0062A86E  33 C0                     XOR EAX,EAX
0062A870  8D 7D E0                  LEA EDI,[EBP + -0x20]
0062A873  F3 AB                     STOSD.REP ES:EDI
0062A875  8B 82 D2 00 00 00         MOV EAX,dword ptr [EDX + 0xd2]
0062A87B  8D 4D E0                  LEA ECX,[EBP + -0x20]
0062A87E  51                        PUSH ECX
0062A87F  8B 8A CE 00 00 00         MOV ECX,dword ptr [EDX + 0xce]
0062A885  C7 45 F0 0A 00 00 00      MOV dword ptr [EBP + -0x10],0xa
0062A88C  89 45 F4                  MOV dword ptr [EBP + -0xc],EAX
0062A88F  E8 87 79 DD FF            CALL 0x0040221b
0062A894  5F                        POP EDI
0062A895  8B E5                     MOV ESP,EBP
0062A897  5D                        POP EBP
0062A898  C3                        RET
