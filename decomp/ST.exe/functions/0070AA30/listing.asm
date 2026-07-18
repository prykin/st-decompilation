FUN_0070aa30:
0070AA30  55                        PUSH EBP
0070AA31  8B EC                     MOV EBP,ESP
0070AA33  8B 45 14                  MOV EAX,dword ptr [EBP + 0x14]
0070AA36  8B 4D 10                  MOV ECX,dword ptr [EBP + 0x10]
0070AA39  8B 55 0C                  MOV EDX,dword ptr [EBP + 0xc]
0070AA3C  50                        PUSH EAX
0070AA3D  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
0070AA40  51                        PUSH ECX
0070AA41  52                        PUSH EDX
0070AA42  6A 1C                     PUSH 0x1c
0070AA44  50                        PUSH EAX
0070AA45  E8 56 FB FF FF            CALL 0x0070a5a0
0070AA4A  83 C4 14                  ADD ESP,0x14
0070AA4D  5D                        POP EBP
0070AA4E  C3                        RET
