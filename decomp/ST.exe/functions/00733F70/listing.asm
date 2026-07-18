FUN_00733f70:
00733F70  55                        PUSH EBP
00733F71  8B EC                     MOV EBP,ESP
00733F73  83 EC 10                  SUB ESP,0x10
00733F76  53                        PUSH EBX
00733F77  56                        PUSH ESI
00733F78  57                        PUSH EDI
00733F79  8D 45 10                  LEA EAX,[EBP + 0x10]
00733F7C  89 45 F0                  MOV dword ptr [EBP + -0x10],EAX
LAB_00733f7f:
00733F7F  83 7D 08 00               CMP dword ptr [EBP + 0x8],0x0
00733F83  75 1E                     JNZ 0x00733fa3
00733F85  68 50 FE 79 00            PUSH 0x79fe50
00733F8A  6A 00                     PUSH 0x0
00733F8C  6A 38                     PUSH 0x38
00733F8E  68 6C 01 7A 00            PUSH 0x7a016c
00733F93  6A 02                     PUSH 0x2
00733F95  E8 06 D0 FF FF            CALL 0x00730fa0
00733F9A  83 C4 14                  ADD ESP,0x14
00733F9D  83 F8 01                  CMP EAX,0x1
00733FA0  75 01                     JNZ 0x00733fa3
00733FA2  CC                        INT3
LAB_00733fa3:
00733FA3  33 C9                     XOR ECX,ECX
00733FA5  85 C9                     TEST ECX,ECX
00733FA7  75 D6                     JNZ 0x00733f7f
LAB_00733fa9:
00733FA9  83 7D 0C 00               CMP dword ptr [EBP + 0xc],0x0
00733FAD  75 1E                     JNZ 0x00733fcd
00733FAF  68 90 FE 79 00            PUSH 0x79fe90
00733FB4  6A 00                     PUSH 0x0
00733FB6  6A 39                     PUSH 0x39
00733FB8  68 6C 01 7A 00            PUSH 0x7a016c
00733FBD  6A 02                     PUSH 0x2
00733FBF  E8 DC CF FF FF            CALL 0x00730fa0
00733FC4  83 C4 14                  ADD ESP,0x14
00733FC7  83 F8 01                  CMP EAX,0x1
00733FCA  75 01                     JNZ 0x00733fcd
00733FCC  CC                        INT3
LAB_00733fcd:
00733FCD  33 D2                     XOR EDX,EDX
00733FCF  85 D2                     TEST EDX,EDX
00733FD1  75 D6                     JNZ 0x00733fa9
00733FD3  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
00733FD6  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
00733FD9  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
00733FDC  51                        PUSH ECX
00733FDD  E8 BE 32 00 00            CALL 0x007372a0
00733FE2  83 C4 04                  ADD ESP,0x4
00733FE5  89 45 F8                  MOV dword ptr [EBP + -0x8],EAX
00733FE8  8B 55 F0                  MOV EDX,dword ptr [EBP + -0x10]
00733FEB  52                        PUSH EDX
00733FEC  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
00733FEF  50                        PUSH EAX
00733FF0  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
00733FF3  51                        PUSH ECX
00733FF4  E8 F7 76 00 00            CALL 0x0073b6f0
00733FF9  83 C4 0C                  ADD ESP,0xc
00733FFC  89 45 F4                  MOV dword ptr [EBP + -0xc],EAX
00733FFF  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
00734002  52                        PUSH EDX
00734003  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
00734006  50                        PUSH EAX
00734007  E8 F4 33 00 00            CALL 0x00737400
0073400C  83 C4 08                  ADD ESP,0x8
0073400F  8B 45 F4                  MOV EAX,dword ptr [EBP + -0xc]
00734012  5F                        POP EDI
00734013  5E                        POP ESI
00734014  5B                        POP EBX
00734015  8B E5                     MOV ESP,EBP
00734017  5D                        POP EBP
00734018  C3                        RET
