__ctrandisp1:
0073E955  55                        PUSH EBP
0073E956  8B EC                     MOV EBP,ESP
0073E958  81 C4 60 FD FF FF         ADD ESP,0xfffffd60
0073E95E  53                        PUSH EBX
0073E95F  FF 75 0C                  PUSH dword ptr [EBP + 0xc]
0073E962  FF 75 08                  PUSH dword ptr [EBP + 0x8]
0073E965  E8 17 00 00 00            CALL 0x0073e981
0073E96A  83 C4 08                  ADD ESP,0x8
0073E96D  9B D9 BD 5C FF FF FF      FSTCW word ptr [EBP + 0xffffff5c]
0073E974  E8 47 00 00 00            CALL 0x0073e9c0
0073E979  E8 A0 FE FF FF            CALL 0x0073e81e
0073E97E  5B                        POP EBX
0073E97F  C9                        LEAVE
0073E980  C3                        RET
