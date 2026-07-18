__i64toa:
0072DFE0  55                        PUSH EBP
0072DFE1  8B EC                     MOV EBP,ESP
0072DFE3  51                        PUSH ECX
0072DFE4  83 7D 14 0A               CMP dword ptr [EBP + 0x14],0xa
0072DFE8  75 17                     JNZ 0x0072e001
0072DFEA  83 7D 0C 00               CMP dword ptr [EBP + 0xc],0x0
0072DFEE  7F 11                     JG 0x0072e001
0072DFF0  7C 06                     JL 0x0072dff8
0072DFF2  83 7D 08 00               CMP dword ptr [EBP + 0x8],0x0
0072DFF6  73 09                     JNC 0x0072e001
LAB_0072dff8:
0072DFF8  C7 45 FC 01 00 00 00      MOV dword ptr [EBP + -0x4],0x1
0072DFFF  EB 07                     JMP 0x0072e008
LAB_0072e001:
0072E001  C7 45 FC 00 00 00 00      MOV dword ptr [EBP + -0x4],0x0
LAB_0072e008:
0072E008  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
0072E00B  50                        PUSH EAX
0072E00C  8B 4D 14                  MOV ECX,dword ptr [EBP + 0x14]
0072E00F  51                        PUSH ECX
0072E010  8B 55 10                  MOV EDX,dword ptr [EBP + 0x10]
0072E013  52                        PUSH EDX
0072E014  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
0072E017  50                        PUSH EAX
0072E018  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
0072E01B  51                        PUSH ECX
0072E01C  E8 0F 00 00 00            CALL 0x0072e030
0072E021  8B 45 10                  MOV EAX,dword ptr [EBP + 0x10]
0072E024  8B E5                     MOV ESP,EBP
0072E026  5D                        POP EBP
0072E027  C3                        RET
