FUN_006b03d0:
006B03D0  55                        PUSH EBP
006B03D1  8B EC                     MOV EBP,ESP
006B03D3  6A FF                     PUSH -0x1
006B03D5  68 A0 D8 79 00            PUSH 0x79d8a0
006B03DA  68 64 D9 72 00            PUSH 0x72d964
006B03DF  64 A1 00 00 00 00         MOV EAX,FS:[0x0]
006B03E5  50                        PUSH EAX
006B03E6  64 89 25 00 00 00 00      MOV dword ptr FS:[0x0],ESP
006B03ED  83 EC 08                  SUB ESP,0x8
006B03F0  53                        PUSH EBX
006B03F1  56                        PUSH ESI
006B03F2  57                        PUSH EDI
006B03F3  89 65 E8                  MOV dword ptr [EBP + -0x18],ESP
006B03F6  C7 45 FC 00 00 00 00      MOV dword ptr [EBP + -0x4],0x0
006B03FD  8B 45 18                  MOV EAX,dword ptr [EBP + 0x18]
006B0400  50                        PUSH EAX
006B0401  8B 4D 14                  MOV ECX,dword ptr [EBP + 0x14]
006B0404  51                        PUSH ECX
006B0405  8B 45 10                  MOV EAX,dword ptr [EBP + 0x10]
006B0408  50                        PUSH EAX
006B0409  50                        PUSH EAX
006B040A  8B 55 0C                  MOV EDX,dword ptr [EBP + 0xc]
006B040D  52                        PUSH EDX
006B040E  50                        PUSH EAX
006B040F  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
006B0412  50                        PUSH EAX
006B0413  E8 C8 E7 01 00            CALL 0x006cebe0
006B0418  EB 1E                     JMP 0x006b0438
LAB_006b0438:
006B0438  C7 45 FC FF FF FF FF      MOV dword ptr [EBP + -0x4],0xffffffff
006B043F  8B 4D F0                  MOV ECX,dword ptr [EBP + -0x10]
006B0442  64 89 0D 00 00 00 00      MOV dword ptr FS:[0x0],ECX
006B0449  5F                        POP EDI
006B044A  5E                        POP ESI
006B044B  5B                        POP EBX
006B044C  8B E5                     MOV ESP,EBP
006B044E  5D                        POP EBP
006B044F  C2 14 00                  RET 0x14
