__ltoa:
0072DF80  55                        PUSH EBP
0072DF81  8B EC                     MOV EBP,ESP
0072DF83  51                        PUSH ECX
0072DF84  83 7D 10 0A               CMP dword ptr [EBP + 0x10],0xa
0072DF88  75 0F                     JNZ 0x0072df99
0072DF8A  83 7D 08 00               CMP dword ptr [EBP + 0x8],0x0
0072DF8E  7D 09                     JGE 0x0072df99
0072DF90  C7 45 FC 01 00 00 00      MOV dword ptr [EBP + -0x4],0x1
0072DF97  EB 07                     JMP 0x0072dfa0
LAB_0072df99:
0072DF99  C7 45 FC 00 00 00 00      MOV dword ptr [EBP + -0x4],0x0
LAB_0072dfa0:
0072DFA0  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
0072DFA3  50                        PUSH EAX
0072DFA4  8B 4D 10                  MOV ECX,dword ptr [EBP + 0x10]
0072DFA7  51                        PUSH ECX
0072DFA8  8B 55 0C                  MOV EDX,dword ptr [EBP + 0xc]
0072DFAB  52                        PUSH EDX
0072DFAC  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
0072DFAF  50                        PUSH EAX
0072DFB0  E8 FB FE FF FF            CALL 0x0072deb0
0072DFB5  83 C4 10                  ADD ESP,0x10
0072DFB8  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
0072DFBB  8B E5                     MOV ESP,EBP
0072DFBD  5D                        POP EBP
0072DFBE  C3                        RET
