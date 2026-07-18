FUN_006b4120:
006B4120  55                        PUSH EBP
006B4121  8B EC                     MOV EBP,ESP
006B4123  56                        PUSH ESI
006B4124  8B 75 08                  MOV ESI,dword ptr [EBP + 0x8]
006B4127  8D 86 10 02 00 00         LEA EAX,[ESI + 0x210]
006B412D  50                        PUSH EAX
006B412E  E8 2D 6F FF FF            CALL 0x006ab060
006B4133  8D 8E 20 02 00 00         LEA ECX,[ESI + 0x220]
006B4139  51                        PUSH ECX
006B413A  E8 21 6F FF FF            CALL 0x006ab060
006B413F  8B 96 E0 01 00 00         MOV EDX,dword ptr [ESI + 0x1e0]
006B4145  52                        PUSH EDX
006B4146  56                        PUSH ESI
006B4147  E8 64 FA FF FF            CALL 0x006b3bb0
006B414C  B8 FF FF FF 7F            MOV EAX,0x7fffffff
006B4151  C7 86 DC 01 00 00 00 00 00 00  MOV dword ptr [ESI + 0x1dc],0x0
006B415B  89 86 E0 01 00 00         MOV dword ptr [ESI + 0x1e0],EAX
006B4161  89 86 E8 01 00 00         MOV dword ptr [ESI + 0x1e8],EAX
006B4167  5E                        POP ESI
006B4168  5D                        POP EBP
006B4169  C2 04 00                  RET 0x4
