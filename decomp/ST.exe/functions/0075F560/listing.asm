FUN_0075f560:
0075F560  55                        PUSH EBP
0075F561  8B EC                     MOV EBP,ESP
0075F563  8B 55 0C                  MOV EDX,dword ptr [EBP + 0xc]
0075F566  56                        PUSH ESI
0075F567  33 F6                     XOR ESI,ESI
0075F569  33 C0                     XOR EAX,EAX
0075F56B  85 D2                     TEST EDX,EDX
0075F56D  7E 1B                     JLE 0x0075f58a
0075F56F  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
0075F572  57                        PUSH EDI
0075F573  83 C1 18                  ADD ECX,0x18
0075F576  8B FA                     MOV EDI,EDX
LAB_0075f578:
0075F578  8B 11                     MOV EDX,dword ptr [ECX]
0075F57A  3B D6                     CMP EDX,ESI
0075F57C  7E 05                     JLE 0x0075f583
0075F57E  8D 41 E8                  LEA EAX,[ECX + -0x18]
0075F581  8B F2                     MOV ESI,EDX
LAB_0075f583:
0075F583  83 C1 20                  ADD ECX,0x20
0075F586  4F                        DEC EDI
0075F587  75 EF                     JNZ 0x0075f578
0075F589  5F                        POP EDI
LAB_0075f58a:
0075F58A  5E                        POP ESI
0075F58B  5D                        POP EBP
0075F58C  C2 08 00                  RET 0x8
