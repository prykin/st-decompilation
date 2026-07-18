FUN_00683070:
00683070  E8 10 14 D8 FF            CALL 0x00404485
00683075  A1 18 2D 7D 00            MOV EAX,[0x007d2d18]
0068307A  50                        PUSH EAX
0068307B  E8 2C E8 D7 FF            CALL 0x004018ac
00683080  83 C4 04                  ADD ESP,0x4
00683083  85 C0                     TEST EAX,EAX
00683085  74 3A                     JZ 0x006830c1
LAB_00683087:
00683087  A1 18 2D 7D 00            MOV EAX,[0x007d2d18]
0068308C  83 F8 16                  CMP EAX,0x16
0068308F  74 18                     JZ 0x006830a9
00683091  83 F8 2C                  CMP EAX,0x2c
00683094  74 0C                     JZ 0x006830a2
00683096  83 F8 30                  CMP EAX,0x30
00683099  75 13                     JNZ 0x006830ae
0068309B  E8 66 1A D8 FF            CALL 0x00404b06
006830A0  EB 0C                     JMP 0x006830ae
LAB_006830a2:
006830A2  E8 4E 17 D8 FF            CALL 0x004047f5
006830A7  EB 05                     JMP 0x006830ae
LAB_006830a9:
006830A9  E8 67 06 D8 FF            CALL 0x00403715
LAB_006830ae:
006830AE  8B 0D 18 2D 7D 00         MOV ECX,dword ptr [0x007d2d18]
006830B4  51                        PUSH ECX
006830B5  E8 F2 E7 D7 FF            CALL 0x004018ac
006830BA  83 C4 04                  ADD ESP,0x4
006830BD  85 C0                     TEST EAX,EAX
006830BF  75 C6                     JNZ 0x00683087
LAB_006830c1:
006830C1  C3                        RET
