__controlfp:
0073F9B0  55                        PUSH EBP
0073F9B1  8B EC                     MOV EBP,ESP
0073F9B3  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
0073F9B6  25 FF FF F7 FF            AND EAX,0xfff7ffff
0073F9BB  50                        PUSH EAX
0073F9BC  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
0073F9BF  51                        PUSH ECX
0073F9C0  E8 9B FF FF FF            CALL 0x0073f960
0073F9C5  83 C4 08                  ADD ESP,0x8
0073F9C8  5D                        POP EBP
0073F9C9  C3                        RET
