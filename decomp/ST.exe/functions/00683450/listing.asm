FUN_00683450:
00683450  E8 0F E1 D7 FF            CALL 0x00401564
00683455  83 3D 18 2D 7D 00 0A      CMP dword ptr [0x007d2d18],0xa
0068345C  75 22                     JNZ 0x00683480
LAB_0068345e:
0068345E  6A 0A                     PUSH 0xa
00683460  E8 58 1E D8 FF            CALL 0x004052bd
00683465  E8 FA E0 D7 FF            CALL 0x00401564
0068346A  6A 02                     PUSH 0x2
0068346C  6A 0A                     PUSH 0xa
0068346E  E8 FA 27 D8 FF            CALL 0x00405c6d
00683473  A1 18 2D 7D 00            MOV EAX,[0x007d2d18]
00683478  83 C4 0C                  ADD ESP,0xc
0068347B  83 F8 0A                  CMP EAX,0xa
0068347E  74 DE                     JZ 0x0068345e
LAB_00683480:
00683480  C3                        RET
