FUN_0070aa50:
0070AA50  55                        PUSH EBP
0070AA51  8B EC                     MOV EBP,ESP
0070AA53  8B 45 14                  MOV EAX,dword ptr [EBP + 0x14]
0070AA56  8B 4D 10                  MOV ECX,dword ptr [EBP + 0x10]
0070AA59  8B 55 0C                  MOV EDX,dword ptr [EBP + 0xc]
0070AA5C  50                        PUSH EAX
0070AA5D  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
0070AA60  51                        PUSH ECX
0070AA61  52                        PUSH EDX
0070AA62  6A 06                     PUSH 0x6
0070AA64  50                        PUSH EAX
0070AA65  E8 36 FB FF FF            CALL 0x0070a5a0
0070AA6A  83 C4 14                  ADD ESP,0x14
0070AA6D  5D                        POP EBP
0070AA6E  C3                        RET
