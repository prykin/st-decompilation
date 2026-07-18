FUN_0074731f:
0074731F  57                        PUSH EDI
00747320  8B 7C 24 0C               MOV EDI,dword ptr [ESP + 0xc]
00747324  85 FF                     TEST EDI,EDI
00747326  75 07                     JNZ 0x0074732f
00747328  B8 03 40 00 80            MOV EAX,0x80004003
0074732D  EB 37                     JMP 0x00747366
LAB_0074732f:
0074732F  56                        PUSH ESI
00747330  8B 74 24 0C               MOV ESI,dword ptr [ESP + 0xc]
00747334  8B 46 30                  MOV EAX,dword ptr [ESI + 0x30]
00747337  85 C0                     TEST EAX,EAX
00747339  74 0E                     JZ 0x00747349
0074733B  68 80 00 00 00            PUSH 0x80
00747340  50                        PUSH EAX
00747341  57                        PUSH EDI
00747342  E8 57 62 00 00            CALL 0x0074d59e
00747347  EB 04                     JMP 0x0074734d
LAB_00747349:
00747349  66 83 27 00               AND word ptr [EDI],0x0
LAB_0074734d:
0074734D  8B 46 34                  MOV EAX,dword ptr [ESI + 0x34]
00747350  89 87 00 01 00 00         MOV dword ptr [EDI + 0x100],EAX
00747356  8B 76 34                  MOV ESI,dword ptr [ESI + 0x34]
00747359  85 F6                     TEST ESI,ESI
0074735B  74 06                     JZ 0x00747363
0074735D  8B 06                     MOV EAX,dword ptr [ESI]
0074735F  56                        PUSH ESI
00747360  FF 50 04                  CALL dword ptr [EAX + 0x4]
LAB_00747363:
00747363  33 C0                     XOR EAX,EAX
00747365  5E                        POP ESI
LAB_00747366:
00747366  5F                        POP EDI
00747367  C2 08 00                  RET 0x8
