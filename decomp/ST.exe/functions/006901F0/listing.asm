FUN_006901f0:
006901F0  55                        PUSH EBP
006901F1  8B EC                     MOV EBP,ESP
006901F3  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
006901F6  50                        PUSH EAX
006901F7  E8 DF 2D D7 FF            CALL 0x00402fdb
006901FC  85 C0                     TEST EAX,EAX
006901FE  74 0F                     JZ 0x0069020f
00690200  8B 4D 0C                  MOV ECX,dword ptr [EBP + 0xc]
00690203  51                        PUSH ECX
00690204  8B C8                     MOV ECX,EAX
00690206  E8 4A 13 D7 FF            CALL 0x00401555
0069020B  5D                        POP EBP
0069020C  C2 08 00                  RET 0x8
LAB_0069020f:
0069020F  B8 FC FF FF FF            MOV EAX,0xfffffffc
00690214  5D                        POP EBP
00690215  C2 08 00                  RET 0x8
