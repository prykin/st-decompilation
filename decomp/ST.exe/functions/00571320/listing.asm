FUN_00571320:
00571320  55                        PUSH EBP
00571321  8B EC                     MOV EBP,ESP
00571323  A1 00 73 80 00            MOV EAX,[0x00807300]
00571328  8B D1                     MOV EDX,ECX
0057132A  25 FF 00 00 00            AND EAX,0xff
0057132F  83 E8 02                  SUB EAX,0x2
00571332  74 46                     JZ 0x0057137a
00571334  83 E8 02                  SUB EAX,0x2
00571337  74 05                     JZ 0x0057133e
00571339  83 E8 04                  SUB EAX,0x4
0057133C  75 48                     JNZ 0x00571386
LAB_0057133e:
0057133E  8B 0D F0 33 80 00         MOV ECX,dword ptr [0x008033f0]
00571344  85 C9                     TEST ECX,ECX
00571346  74 3E                     JZ 0x00571386
00571348  33 C0                     XOR EAX,EAX
0057134A  8A 82 2E 11 00 00         MOV AL,byte ptr [EDX + 0x112e]
00571350  48                        DEC EAX
00571351  74 1C                     JZ 0x0057136f
00571353  48                        DEC EAX
00571354  74 0E                     JZ 0x00571364
00571356  48                        DEC EAX
00571357  75 2D                     JNZ 0x00571386
00571359  6A 03                     PUSH 0x3
0057135B  E8 D6 48 E9 FF            CALL 0x00405c36
00571360  5D                        POP EBP
00571361  C2 04 00                  RET 0x4
LAB_00571364:
00571364  6A 01                     PUSH 0x1
00571366  E8 CB 48 E9 FF            CALL 0x00405c36
0057136B  5D                        POP EBP
0057136C  C2 04 00                  RET 0x4
LAB_0057136f:
0057136F  6A 02                     PUSH 0x2
00571371  E8 C0 48 E9 FF            CALL 0x00405c36
00571376  5D                        POP EBP
00571377  C2 04 00                  RET 0x4
LAB_0057137a:
0057137A  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
0057137D  8D 4A 38                  LEA ECX,[EDX + 0x38]
00571380  50                        PUSH EAX
00571381  E8 43 2E E9 FF            CALL 0x004041c9
LAB_00571386:
00571386  5D                        POP EBP
00571387  C2 04 00                  RET 0x4
