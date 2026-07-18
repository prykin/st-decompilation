__rt_probe_read4@4:
0073E230  55                        PUSH EBP
0073E231  8B EC                     MOV EBP,ESP
0073E233  6A FF                     PUSH -0x1
0073E235  68 C0 0D 7A 00            PUSH 0x7a0dc0
0073E23A  68 64 D9 72 00            PUSH 0x72d964
0073E23F  64 A1 00 00 00 00         MOV EAX,FS:[0x0]
0073E245  50                        PUSH EAX
0073E246  64 89 25 00 00 00 00      MOV dword ptr FS:[0x0],ESP
0073E24D  83 C4 EC                  ADD ESP,-0x14
0073E250  53                        PUSH EBX
0073E251  56                        PUSH ESI
0073E252  57                        PUSH EDI
0073E253  89 65 E8                  MOV dword ptr [EBP + -0x18],ESP
0073E256  C7 45 FC 00 00 00 00      MOV dword ptr [EBP + -0x4],0x0
0073E25D  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
0073E260  8B 08                     MOV ECX,dword ptr [EAX]
0073E262  89 4D DC                  MOV dword ptr [EBP + -0x24],ECX
0073E265  C7 45 E4 01 00 00 00      MOV dword ptr [EBP + -0x1c],0x1
0073E26C  C7 45 FC FF FF FF FF      MOV dword ptr [EBP + -0x4],0xffffffff
0073E273  EB 2A                     JMP 0x0073e29f
LAB_0073e29f:
0073E29F  8B 45 E4                  MOV EAX,dword ptr [EBP + -0x1c]
0073E2A2  8B 4D F0                  MOV ECX,dword ptr [EBP + -0x10]
0073E2A5  64 89 0D 00 00 00 00      MOV dword ptr FS:[0x0],ECX
0073E2AC  5F                        POP EDI
0073E2AD  5E                        POP ESI
0073E2AE  5B                        POP EBX
0073E2AF  8B E5                     MOV ESP,EBP
0073E2B1  5D                        POP EBP
0073E2B2  C2 04 00                  RET 0x4
