__ctrandisp2:
0073E7E4  55                        PUSH EBP
0073E7E5  8B EC                     MOV EBP,ESP
0073E7E7  81 C4 60 FD FF FF         ADD ESP,0xfffffd60
0073E7ED  53                        PUSH EBX
0073E7EE  FF 75 0C                  PUSH dword ptr [EBP + 0xc]
0073E7F1  FF 75 08                  PUSH dword ptr [EBP + 0x8]
0073E7F4  E8 88 01 00 00            CALL 0x0073e981
0073E7F9  83 C4 08                  ADD ESP,0x8
0073E7FC  FF 75 14                  PUSH dword ptr [EBP + 0x14]
0073E7FF  FF 75 10                  PUSH dword ptr [EBP + 0x10]
0073E802  E8 7A 01 00 00            CALL 0x0073e981
0073E807  83 C4 08                  ADD ESP,0x8
0073E80A  9B D9 BD 5C FF FF FF      FSTCW word ptr [EBP + 0xffffff5c]
0073E811  E8 11 02 00 00            CALL 0x0073ea27
0073E816  E8 03 00 00 00            CALL 0x0073e81e
0073E81B  5B                        POP EBX
0073E81C  C9                        LEAVE
0073E81D  C3                        RET
