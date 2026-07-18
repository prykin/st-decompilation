FUN_004ea830:
004EA830  8B 81 D0 04 00 00         MOV EAX,dword ptr [ECX + 0x4d0]
004EA836  85 C0                     TEST EAX,EAX
004EA838  74 05                     JZ 0x004ea83f
004EA83A  83 F8 02                  CMP EAX,0x2
004EA83D  75 0F                     JNZ 0x004ea84e
LAB_004ea83f:
004EA83F  C7 81 D0 04 00 00 01 00 00 00  MOV dword ptr [ECX + 0x4d0],0x1
004EA849  E8 C1 71 F1 FF            CALL 0x00401a0f
LAB_004ea84e:
004EA84E  B8 01 00 00 00            MOV EAX,0x1
004EA853  C3                        RET
