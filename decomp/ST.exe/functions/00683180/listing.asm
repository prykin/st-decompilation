FUN_00683180:
00683180  E8 1C F7 D7 FF            CALL 0x004028a1
00683185  A1 18 2D 7D 00            MOV EAX,[0x007d2d18]
0068318A  50                        PUSH EAX
0068318B  E8 47 11 D8 FF            CALL 0x004042d7
00683190  83 C4 04                  ADD ESP,0x4
00683193  85 C0                     TEST EAX,EAX
00683195  74 2C                     JZ 0x006831c3
LAB_00683197:
00683197  A1 18 2D 7D 00            MOV EAX,[0x007d2d18]
0068319C  48                        DEC EAX
0068319D  74 0C                     JZ 0x006831ab
0068319F  83 E8 3C                  SUB EAX,0x3c
006831A2  75 0C                     JNZ 0x006831b0
006831A4  E8 3F 05 D8 FF            CALL 0x004036e8
006831A9  EB 05                     JMP 0x006831b0
LAB_006831ab:
006831AB  E8 35 12 D8 FF            CALL 0x004043e5
LAB_006831b0:
006831B0  8B 0D 18 2D 7D 00         MOV ECX,dword ptr [0x007d2d18]
006831B6  51                        PUSH ECX
006831B7  E8 1B 11 D8 FF            CALL 0x004042d7
006831BC  83 C4 04                  ADD ESP,0x4
006831BF  85 C0                     TEST EAX,EAX
006831C1  75 D4                     JNZ 0x00683197
LAB_006831c3:
006831C3  C3                        RET
