__cintrindisp2:
0073E770  55                        PUSH EBP
0073E771  8B EC                     MOV EBP,ESP
0073E773  81 C4 60 FD FF FF         ADD ESP,0xfffffd60
0073E779  53                        PUSH EBX
0073E77A  9B D9 BD 5C FF FF FF      FSTCW word ptr [EBP + 0xffffff5c]
0073E781  9B                        WAIT
0073E782  83 3D D0 24 7F 00 00      CMP dword ptr [0x007f24d0],0x0
0073E789  74 14                     JZ 0x0073e79f
LAB_0073e78b:
0073E78B  E8 97 02 00 00            CALL 0x0073ea27
0073E790  C6 05 18 74 85 00 01      MOV byte ptr [0x00857418],0x1
0073E797  E8 89 00 00 00            CALL 0x0073e825
0073E79C  5B                        POP EBX
0073E79D  C9                        LEAVE
0073E79E  C3                        RET
LAB_0073e79f:
0073E79F  D9 C9                     FXCH
0073E7A1  DD 95 7A FF FF FF         FST double ptr [EBP + 0xffffff7a]
0073E7A7  D9 C9                     FXCH
0073E7A9  DD 55 82                  FST double ptr [EBP + -0x7e]
0073E7AC  EB DD                     JMP 0x0073e78b
