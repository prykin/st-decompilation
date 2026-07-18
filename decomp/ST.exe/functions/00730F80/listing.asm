FUN_00730f80:
00730F80  55                        PUSH EBP
00730F81  8B EC                     MOV EBP,ESP
00730F83  51                        PUSH ECX
00730F84  A1 D0 A5 85 00            MOV EAX,[0x0085a5d0]
00730F89  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
00730F8C  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
00730F8F  89 0D D0 A5 85 00         MOV dword ptr [0x0085a5d0],ECX
00730F95  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
00730F98  8B E5                     MOV ESP,EBP
00730F9A  5D                        POP EBP
00730F9B  C3                        RET
