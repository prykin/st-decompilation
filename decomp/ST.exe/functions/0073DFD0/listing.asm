__FF_MSGBANNER:
0073DFD0  55                        PUSH EBP
0073DFD1  8B EC                     MOV EBP,ESP
0073DFD3  83 3D E0 71 85 00 01      CMP dword ptr [0x008571e0],0x1
0073DFDA  74 12                     JZ 0x0073dfee
0073DFDC  83 3D E0 71 85 00 00      CMP dword ptr [0x008571e0],0x0
0073DFE3  75 32                     JNZ 0x0073e017
0073DFE5  83 3D D0 14 7F 00 01      CMP dword ptr [0x007f14d0],0x1
0073DFEC  75 29                     JNZ 0x0073e017
LAB_0073dfee:
0073DFEE  68 FC 00 00 00            PUSH 0xfc
0073DFF3  E8 28 00 00 00            CALL 0x0073e020
0073DFF8  83 C4 04                  ADD ESP,0x4
0073DFFB  83 3D 00 74 85 00 00      CMP dword ptr [0x00857400],0x0
0073E002  74 06                     JZ 0x0073e00a
0073E004  FF 15 00 74 85 00         CALL dword ptr [0x00857400]
LAB_0073e00a:
0073E00A  68 FF 00 00 00            PUSH 0xff
0073E00F  E8 0C 00 00 00            CALL 0x0073e020
0073E014  83 C4 04                  ADD ESP,0x4
LAB_0073e017:
0073E017  5D                        POP EBP
0073E018  C3                        RET
