FUN_0073f960:
0073F960  55                        PUSH EBP
0073F961  8B EC                     MOV EBP,ESP
0073F963  83 EC 10                  SUB ESP,0x10
0073F966  53                        PUSH EBX
0073F967  56                        PUSH ESI
0073F968  57                        PUSH EDI
0073F969  9B D9 7D F0               FSTCW word ptr [EBP + -0x10]
0073F96D  66 8B 45 F0               MOV AX,word ptr [EBP + -0x10]
0073F971  50                        PUSH EAX
0073F972  E8 B9 00 00 00            CALL 0x0073fa30
0073F977  83 C4 04                  ADD ESP,0x4
0073F97A  89 45 F8                  MOV dword ptr [EBP + -0x8],EAX
0073F97D  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
0073F980  23 4D 0C                  AND ECX,dword ptr [EBP + 0xc]
0073F983  8B 55 0C                  MOV EDX,dword ptr [EBP + 0xc]
0073F986  F7 D2                     NOT EDX
0073F988  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
0073F98B  23 C2                     AND EAX,EDX
0073F98D  0B C8                     OR ECX,EAX
0073F98F  89 4D F4                  MOV dword ptr [EBP + -0xc],ECX
0073F992  8B 4D F4                  MOV ECX,dword ptr [EBP + -0xc]
0073F995  51                        PUSH ECX
0073F996  E8 15 02 00 00            CALL 0x0073fbb0
0073F99B  83 C4 04                  ADD ESP,0x4
0073F99E  66 89 45 FC               MOV word ptr [EBP + -0x4],AX
0073F9A2  D9 6D FC                  FLDCW word ptr [EBP + -0x4]
0073F9A5  8B 45 F4                  MOV EAX,dword ptr [EBP + -0xc]
0073F9A8  5F                        POP EDI
0073F9A9  5E                        POP ESI
0073F9AA  5B                        POP EBX
0073F9AB  8B E5                     MOV ESP,EBP
0073F9AD  5D                        POP EBP
0073F9AE  C3                        RET
