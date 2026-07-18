FUN_0074df72:
0074DF72  56                        PUSH ESI
0074DF73  8B F1                     MOV ESI,ECX
0074DF75  8D 4E 0C                  LEA ECX,[ESI + 0xc]
0074DF78  E8 82 03 00 00            CALL 0x0074e2ff
0074DF7D  85 C0                     TEST EAX,EAX
0074DF7F  75 0C                     JNZ 0x0074df8d
0074DF81  6A 0C                     PUSH 0xc
0074DF83  E8 A8 05 FE FF            CALL 0x0072e530
0074DF88  85 C0                     TEST EAX,EAX
0074DF8A  59                        POP ECX
0074DF8B  74 24                     JZ 0x0074dfb1
LAB_0074df8d:
0074DF8D  8B 4C 24 08               MOV ECX,dword ptr [ESP + 0x8]
0074DF91  89 48 08                  MOV dword ptr [EAX + 0x8],ECX
0074DF94  83 60 04 00               AND dword ptr [EAX + 0x4],0x0
0074DF98  8B 4E 04                  MOV ECX,dword ptr [ESI + 0x4]
0074DF9B  89 08                     MOV dword ptr [EAX],ECX
0074DF9D  8B 4E 04                  MOV ECX,dword ptr [ESI + 0x4]
0074DFA0  85 C9                     TEST ECX,ECX
0074DFA2  75 04                     JNZ 0x0074dfa8
0074DFA4  89 06                     MOV dword ptr [ESI],EAX
0074DFA6  EB 03                     JMP 0x0074dfab
LAB_0074dfa8:
0074DFA8  89 41 04                  MOV dword ptr [ECX + 0x4],EAX
LAB_0074dfab:
0074DFAB  FF 46 08                  INC dword ptr [ESI + 0x8]
0074DFAE  89 46 04                  MOV dword ptr [ESI + 0x4],EAX
LAB_0074dfb1:
0074DFB1  5E                        POP ESI
0074DFB2  C2 04 00                  RET 0x4
