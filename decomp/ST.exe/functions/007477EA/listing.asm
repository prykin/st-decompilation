FUN_007477ea:
007477EA  56                        PUSH ESI
007477EB  8B 74 24 08               MOV ESI,dword ptr [ESP + 0x8]
007477EF  8B CE                     MOV ECX,ESI
007477F1  E8 58 06 00 00            CALL 0x00747e4e
007477F6  83 F8 01                  CMP EAX,0x1
007477F9  75 07                     JNZ 0x00747802
007477FB  B8 03 02 04 80            MOV EAX,0x80040203
00747800  EB 1C                     JMP 0x0074781e
LAB_00747802:
00747802  8B 46 04                  MOV EAX,dword ptr [ESI + 0x4]
00747805  8B 56 08                  MOV EDX,dword ptr [ESI + 0x8]
00747808  8B 4C 24 0C               MOV ECX,dword ptr [ESP + 0xc]
0074780C  2B D0                     SUB EDX,EAX
0074780E  3B CA                     CMP ECX,EDX
00747810  76 05                     JBE 0x00747817
00747812  6A 01                     PUSH 0x1
00747814  58                        POP EAX
00747815  EB 07                     JMP 0x0074781e
LAB_00747817:
00747817  03 C8                     ADD ECX,EAX
00747819  33 C0                     XOR EAX,EAX
0074781B  89 4E 04                  MOV dword ptr [ESI + 0x4],ECX
LAB_0074781e:
0074781E  5E                        POP ESI
0074781F  C2 08 00                  RET 0x8
