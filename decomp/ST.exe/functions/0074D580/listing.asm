FUN_0074d580:
0074D580  8B 4C 24 04               MOV ECX,dword ptr [ESP + 0x4]
0074D584  8B 54 24 08               MOV EDX,dword ptr [ESP + 0x8]
0074D588  56                        PUSH ESI
0074D589  8B C1                     MOV EAX,ECX
LAB_0074d58b:
0074D58B  66 8B 32                  MOV SI,word ptr [EDX]
0074D58E  66 89 31                  MOV word ptr [ECX],SI
0074D591  41                        INC ECX
0074D592  41                        INC ECX
0074D593  42                        INC EDX
0074D594  42                        INC EDX
0074D595  66 85 F6                  TEST SI,SI
0074D598  75 F1                     JNZ 0x0074d58b
0074D59A  5E                        POP ESI
0074D59B  C2 08 00                  RET 0x8
