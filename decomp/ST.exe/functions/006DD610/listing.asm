FUN_006dd610:
006DD610  55                        PUSH EBP
006DD611  8B EC                     MOV EBP,ESP
006DD613  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
006DD616  8B 55 10                  MOV EDX,dword ptr [EBP + 0x10]
006DD619  89 81 88 00 00 00         MOV dword ptr [ECX + 0x88],EAX
006DD61F  8B 45 14                  MOV EAX,dword ptr [EBP + 0x14]
006DD622  89 91 8C 00 00 00         MOV dword ptr [ECX + 0x8c],EDX
006DD628  8B 55 18                  MOV EDX,dword ptr [EBP + 0x18]
006DD62B  89 81 90 00 00 00         MOV dword ptr [ECX + 0x90],EAX
006DD631  8B C2                     MOV EAX,EDX
006DD633  89 91 94 00 00 00         MOV dword ptr [ECX + 0x94],EDX
006DD639  8B 55 14                  MOV EDX,dword ptr [EBP + 0x14]
006DD63C  50                        PUSH EAX
006DD63D  8B 45 10                  MOV EAX,dword ptr [EBP + 0x10]
006DD640  52                        PUSH EDX
006DD641  8B 55 0C                  MOV EDX,dword ptr [EBP + 0xc]
006DD644  50                        PUSH EAX
006DD645  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
006DD648  52                        PUSH EDX
006DD649  50                        PUSH EAX
006DD64A  E8 01 FA FF FF            CALL 0x006dd050
006DD64F  5D                        POP EBP
006DD650  C2 14 00                  RET 0x14
