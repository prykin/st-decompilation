FUN_0061f8b0:
0061F8B0  55                        PUSH EBP
0061F8B1  8B EC                     MOV EBP,ESP
0061F8B3  83 EC 10                  SUB ESP,0x10
0061F8B6  A1 38 2A 80 00            MOV EAX,[0x00802a38]
0061F8BB  8B 55 10                  MOV EDX,dword ptr [EBP + 0x10]
0061F8BE  53                        PUSH EBX
0061F8BF  8B D9                     MOV EBX,ECX
0061F8C1  8B 80 E4 00 00 00         MOV EAX,dword ptr [EAX + 0xe4]
0061F8C7  33 C9                     XOR ECX,ECX
0061F8C9  8A 0D 4D 87 80 00         MOV CL,byte ptr [0x0080874d]
0061F8CF  56                        PUSH ESI
0061F8D0  3B CA                     CMP ECX,EDX
0061F8D2  57                        PUSH EDI
0061F8D3  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
0061F8D6  0F 85 08 01 00 00         JNZ 0x0061f9e4
0061F8DC  3B 83 B5 00 00 00         CMP EAX,dword ptr [EBX + 0xb5]
0061F8E2  0F 82 FC 00 00 00         JC 0x0061f9e4
0061F8E8  8B 0D 98 75 80 00         MOV ECX,dword ptr [0x00807598]
0061F8EE  8B 75 08                  MOV ESI,dword ptr [EBP + 0x8]
0061F8F1  8B 79 48                  MOV EDI,dword ptr [ECX + 0x48]
0061F8F4  8D 56 01                  LEA EDX,[ESI + 0x1]
0061F8F7  3B D7                     CMP EDX,EDI
0061F8F9  8B 7D 0C                  MOV EDI,dword ptr [EBP + 0xc]
0061F8FC  7C 2C                     JL 0x0061f92a
0061F8FE  8D 56 FF                  LEA EDX,[ESI + -0x1]
0061F901  3B 51 58                  CMP EDX,dword ptr [ECX + 0x58]
0061F904  7F 24                     JG 0x0061f92a
0061F906  8D 57 01                  LEA EDX,[EDI + 0x1]
0061F909  3B 51 44                  CMP EDX,dword ptr [ECX + 0x44]
0061F90C  7C 1C                     JL 0x0061f92a
0061F90E  8D 57 FF                  LEA EDX,[EDI + -0x1]
0061F911  3B 51 54                  CMP EDX,dword ptr [ECX + 0x54]
0061F914  7F 14                     JG 0x0061f92a
0061F916  6A 01                     PUSH 0x1
0061F918  57                        PUSH EDI
0061F919  56                        PUSH ESI
0061F91A  E8 B1 E2 0B 00            CALL 0x006ddbd0
0061F91F  85 C0                     TEST EAX,EAX
0061F921  0F 85 BD 00 00 00         JNZ 0x0061f9e4
0061F927  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
LAB_0061f92a:
0061F92A  8B 4D 10                  MOV ECX,dword ptr [EBP + 0x10]
0061F92D  51                        PUSH ECX
0061F92E  57                        PUSH EDI
0061F92F  56                        PUSH ESI
0061F930  50                        PUSH EAX
0061F931  8B CB                     MOV ECX,EBX
0061F933  E8 57 32 DE FF            CALL 0x00402b8f
0061F938  85 C0                     TEST EAX,EAX
0061F93A  7D 15                     JGE 0x0061f951
0061F93C  8B 55 10                  MOV EDX,dword ptr [EBP + 0x10]
0061F93F  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
0061F942  52                        PUSH EDX
0061F943  57                        PUSH EDI
0061F944  56                        PUSH ESI
0061F945  50                        PUSH EAX
0061F946  8B CB                     MOV ECX,EBX
0061F948  E8 B1 63 DE FF            CALL 0x00405cfe
0061F94D  85 C0                     TEST EAX,EAX
0061F94F  7D 09                     JGE 0x0061f95a
LAB_0061f951:
0061F951  83 F8 02                  CMP EAX,0x2
0061F954  0F 85 8A 00 00 00         JNZ 0x0061f9e4
LAB_0061f95a:
0061F95A  33 C0                     XOR EAX,EAX
0061F95C  A0 4E 87 80 00            MOV AL,[0x0080874e]
0061F961  48                        DEC EAX
0061F962  74 14                     JZ 0x0061f978
0061F964  48                        DEC EAX
0061F965  74 0A                     JZ 0x0061f971
0061F967  48                        DEC EAX
0061F968  75 7A                     JNZ 0x0061f9e4
0061F96A  B8 3D 00 00 00            MOV EAX,0x3d
0061F96F  EB 0C                     JMP 0x0061f97d
LAB_0061f971:
0061F971  B8 3C 00 00 00            MOV EAX,0x3c
0061F976  EB 05                     JMP 0x0061f97d
LAB_0061f978:
0061F978  B8 3B 00 00 00            MOV EAX,0x3b
LAB_0061f97d:
0061F97D  33 C9                     XOR ECX,ECX
0061F97F  8D 55 F0                  LEA EDX,[EBP + -0x10]
0061F982  89 4D F0                  MOV dword ptr [EBP + -0x10],ECX
0061F985  6A 00                     PUSH 0x0
0061F987  89 4D F4                  MOV dword ptr [EBP + -0xc],ECX
0061F98A  52                        PUSH EDX
0061F98B  89 4D F8                  MOV dword ptr [EBP + -0x8],ECX
0061F98E  83 C9 FF                  OR ECX,0xffffffff
0061F991  50                        PUSH EAX
0061F992  89 4D F0                  MOV dword ptr [EBP + -0x10],ECX
0061F995  89 4D F4                  MOV dword ptr [EBP + -0xc],ECX
0061F998  6A 00                     PUSH 0x0
0061F99A  6A 06                     PUSH 0x6
0061F99C  B9 58 76 80 00            MOV ECX,0x807658
0061F9A1  E8 32 52 DE FF            CALL 0x00404bd8
0061F9A6  DB 45 0C                  FILD dword ptr [EBP + 0xc]
0061F9A9  51                        PUSH ECX
0061F9AA  D8 0D F8 04 79 00         FMUL float ptr [0x007904f8]
0061F9B0  D8 05 F4 04 79 00         FADD float ptr [0x007904f4]
0061F9B6  D9 1C 24                  FSTP float ptr [ESP]
0061F9B9  DB 45 08                  FILD dword ptr [EBP + 0x8]
0061F9BC  51                        PUSH ECX
0061F9BD  D8 0D F8 04 79 00         FMUL float ptr [0x007904f8]
0061F9C3  D8 05 F4 04 79 00         FADD float ptr [0x007904f4]
0061F9C9  D9 1C 24                  FSTP float ptr [ESP]
0061F9CC  6A 01                     PUSH 0x1
0061F9CE  E8 88 33 DE FF            CALL 0x00402d5b
0061F9D3  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
0061F9D6  83 C4 0C                  ADD ESP,0xc
0061F9D9  05 FA 00 00 00            ADD EAX,0xfa
0061F9DE  89 83 B5 00 00 00         MOV dword ptr [EBX + 0xb5],EAX
LAB_0061f9e4:
0061F9E4  5F                        POP EDI
0061F9E5  5E                        POP ESI
0061F9E6  5B                        POP EBX
0061F9E7  8B E5                     MOV ESP,EBP
0061F9E9  5D                        POP EBP
0061F9EA  C2 10 00                  RET 0x10
