FUN_00683590:
00683590  E8 D2 27 D8 FF            CALL 0x00405d67
00683595  A1 18 2D 7D 00            MOV EAX,[0x007d2d18]
0068359A  50                        PUSH EAX
0068359B  E8 BB FC D7 FF            CALL 0x0040325b
006835A0  83 C4 04                  ADD ESP,0x4
006835A3  85 C0                     TEST EAX,EAX
006835A5  74 2E                     JZ 0x006835d5
LAB_006835a7:
006835A7  A1 18 2D 7D 00            MOV EAX,[0x007d2d18]
006835AC  83 F8 34                  CMP EAX,0x34
006835AF  74 0C                     JZ 0x006835bd
006835B1  83 F8 43                  CMP EAX,0x43
006835B4  75 0C                     JNZ 0x006835c2
006835B6  E8 98 13 D8 FF            CALL 0x00404953
006835BB  EB 05                     JMP 0x006835c2
LAB_006835bd:
006835BD  E8 B6 E9 D7 FF            CALL 0x00401f78
LAB_006835c2:
006835C2  8B 0D 18 2D 7D 00         MOV ECX,dword ptr [0x007d2d18]
006835C8  51                        PUSH ECX
006835C9  E8 8D FC D7 FF            CALL 0x0040325b
006835CE  83 C4 04                  ADD ESP,0x4
006835D1  85 C0                     TEST EAX,EAX
006835D3  75 D2                     JNZ 0x006835a7
LAB_006835d5:
006835D5  C3                        RET
