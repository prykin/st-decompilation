__ioterm:
0073DF70  55                        PUSH EBP
0073DF71  8B EC                     MOV EBP,ESP
0073DF73  51                        PUSH ECX
0073DF74  C7 45 FC 00 00 00 00      MOV dword ptr [EBP + -0x4],0x0
0073DF7B  EB 09                     JMP 0x0073df86
LAB_0073df7d:
0073DF7D  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
0073DF80  83 C0 01                  ADD EAX,0x1
0073DF83  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
LAB_0073df86:
0073DF86  83 7D FC 40               CMP dword ptr [EBP + -0x4],0x40
0073DF8A  7D 32                     JGE 0x0073dfbe
0073DF8C  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
0073DF8F  83 3C 8D A0 A1 85 00 00   CMP dword ptr [ECX*0x4 + 0x85a1a0],0x0
0073DF97  74 23                     JZ 0x0073dfbc
0073DF99  6A 02                     PUSH 0x2
0073DF9B  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
0073DF9E  8B 04 95 A0 A1 85 00      MOV EAX,dword ptr [EDX*0x4 + 0x85a1a0]
0073DFA5  50                        PUSH EAX
0073DFA6  E8 61 65 CC FF            CALL 0x0040450c
0073DFAB  83 C4 08                  ADD ESP,0x8
0073DFAE  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
0073DFB1  C7 04 8D A0 A1 85 00 00 00 00 00  MOV dword ptr [ECX*0x4 + 0x85a1a0],0x0
LAB_0073dfbc:
0073DFBC  EB BF                     JMP 0x0073df7d
LAB_0073dfbe:
0073DFBE  8B E5                     MOV ESP,EBP
0073DFC0  5D                        POP EBP
0073DFC1  C3                        RET
