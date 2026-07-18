FUN_0075f520:
0075F520  55                        PUSH EBP
0075F521  8B EC                     MOV EBP,ESP
0075F523  8B 55 0C                  MOV EDX,dword ptr [EBP + 0xc]
0075F526  56                        PUSH ESI
0075F527  33 F6                     XOR ESI,ESI
0075F529  33 C0                     XOR EAX,EAX
0075F52B  85 D2                     TEST EDX,EDX
0075F52D  7E 24                     JLE 0x0075f553
0075F52F  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
0075F532  53                        PUSH EBX
0075F533  57                        PUSH EDI
0075F534  83 C1 1C                  ADD ECX,0x1c
0075F537  8B FA                     MOV EDI,EDX
LAB_0075f539:
0075F539  8B 11                     MOV EDX,dword ptr [ECX]
0075F53B  3B D6                     CMP EDX,ESI
0075F53D  7E 0C                     JLE 0x0075f54b
0075F53F  8B 59 FC                  MOV EBX,dword ptr [ECX + -0x4]
0075F542  85 DB                     TEST EBX,EBX
0075F544  7E 05                     JLE 0x0075f54b
0075F546  8D 41 E4                  LEA EAX,[ECX + -0x1c]
0075F549  8B F2                     MOV ESI,EDX
LAB_0075f54b:
0075F54B  83 C1 20                  ADD ECX,0x20
0075F54E  4F                        DEC EDI
0075F54F  75 E8                     JNZ 0x0075f539
0075F551  5F                        POP EDI
0075F552  5B                        POP EBX
LAB_0075f553:
0075F553  5E                        POP ESI
0075F554  5D                        POP EBP
0075F555  C2 08 00                  RET 0x8
