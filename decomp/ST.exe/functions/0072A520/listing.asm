FUN_0072a520:
0072A520  55                        PUSH EBP
0072A521  8B EC                     MOV EBP,ESP
0072A523  51                        PUSH ECX
0072A524  53                        PUSH EBX
0072A525  56                        PUSH ESI
0072A526  57                        PUSH EDI
0072A527  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
0072A52A  B9 20 00 00 00            MOV ECX,0x20
LAB_0072a52f:
0072A52F  D1 CA                     ROR EDX,0x1
0072A531  D1 D0                     RCL EAX,0x1
0072A533  49                        DEC ECX
0072A534  75 F9                     JNZ 0x0072a52f
0072A536  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
0072A539  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
0072A53C  5F                        POP EDI
0072A53D  5E                        POP ESI
0072A53E  5B                        POP EBX
0072A53F  8B E5                     MOV ESP,EBP
0072A541  5D                        POP EBP
0072A542  C3                        RET
