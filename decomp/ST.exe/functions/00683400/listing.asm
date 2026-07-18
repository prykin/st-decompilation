FUN_00683400:
00683400  E8 F6 FE D7 FF            CALL 0x004032fb
00683405  83 3D 18 2D 7D 00 0B      CMP dword ptr [0x007d2d18],0xb
0068340C  75 22                     JNZ 0x00683430
LAB_0068340e:
0068340E  6A 0B                     PUSH 0xb
00683410  E8 A8 1E D8 FF            CALL 0x004052bd
00683415  E8 E1 FE D7 FF            CALL 0x004032fb
0068341A  6A 02                     PUSH 0x2
0068341C  6A 0B                     PUSH 0xb
0068341E  E8 4A 28 D8 FF            CALL 0x00405c6d
00683423  A1 18 2D 7D 00            MOV EAX,[0x007d2d18]
00683428  83 C4 0C                  ADD ESP,0xc
0068342B  83 F8 0B                  CMP EAX,0xb
0068342E  74 DE                     JZ 0x0068340e
LAB_00683430:
00683430  C3                        RET
