FUN_006833b0:
006833B0  E8 06 03 D8 FF            CALL 0x004036bb
006833B5  83 3D 18 2D 7D 00 08      CMP dword ptr [0x007d2d18],0x8
006833BC  75 22                     JNZ 0x006833e0
LAB_006833be:
006833BE  6A 08                     PUSH 0x8
006833C0  E8 F8 1E D8 FF            CALL 0x004052bd
006833C5  E8 F1 02 D8 FF            CALL 0x004036bb
006833CA  6A 02                     PUSH 0x2
006833CC  6A 08                     PUSH 0x8
006833CE  E8 9A 28 D8 FF            CALL 0x00405c6d
006833D3  A1 18 2D 7D 00            MOV EAX,[0x007d2d18]
006833D8  83 C4 0C                  ADD ESP,0xc
006833DB  83 F8 08                  CMP EAX,0x8
006833DE  74 DE                     JZ 0x006833be
LAB_006833e0:
006833E0  C3                        RET
