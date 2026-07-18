__cintrindisp1:
0073E7AE  55                        PUSH EBP
0073E7AF  8B EC                     MOV EBP,ESP
0073E7B1  81 C4 60 FD FF FF         ADD ESP,0xfffffd60
0073E7B7  53                        PUSH EBX
0073E7B8  9B D9 BD 5C FF FF FF      FSTCW word ptr [EBP + 0xffffff5c]
0073E7BF  83 3D D0 24 7F 00 00      CMP dword ptr [0x007f24d0],0x0
0073E7C6  74 14                     JZ 0x0073e7dc
LAB_0073e7c8:
0073E7C8  E8 F3 01 00 00            CALL 0x0073e9c0
0073E7CD  C6 05 18 74 85 00 01      MOV byte ptr [0x00857418],0x1
0073E7D4  E8 4C 00 00 00            CALL 0x0073e825
0073E7D9  5B                        POP EBX
0073E7DA  C9                        LEAVE
0073E7DB  C3                        RET
LAB_0073e7dc:
0073E7DC  DD 95 7A FF FF FF         FST double ptr [EBP + 0xffffff7a]
0073E7E2  EB E4                     JMP 0x0073e7c8
