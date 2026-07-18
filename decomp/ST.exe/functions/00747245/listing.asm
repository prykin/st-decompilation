FUN_00747245:
00747245  56                        PUSH ESI
00747246  8B 74 24 0C               MOV ESI,dword ptr [ESP + 0xc]
0074724A  85 F6                     TEST ESI,ESI
0074724C  75 07                     JNZ 0x00747255
0074724E  B8 03 40 00 80            MOV EAX,0x80004003
00747253  EB 31                     JMP 0x00747286
LAB_00747255:
00747255  6A 30                     PUSH 0x30
00747257  E8 D4 72 FE FF            CALL 0x0072e530
0074725C  85 C0                     TEST EAX,EAX
0074725E  59                        POP ECX
0074725F  74 13                     JZ 0x00747274
00747261  8B 4C 24 08               MOV ECX,dword ptr [ESP + 0x8]
00747265  6A 00                     PUSH 0x0
00747267  83 C1 F4                  ADD ECX,-0xc
0074726A  51                        PUSH ECX
0074726B  8B C8                     MOV ECX,EAX
0074726D  E8 F9 02 00 00            CALL 0x0074756b
00747272  EB 02                     JMP 0x00747276
LAB_00747274:
00747274  33 C0                     XOR EAX,EAX
LAB_00747276:
00747276  89 06                     MOV dword ptr [ESI],EAX
00747278  F7 D8                     NEG EAX
0074727A  1B C0                     SBB EAX,EAX
0074727C  25 F2 FF F8 7F            AND EAX,0x7ff8fff2
00747281  05 0E 00 07 80            ADD EAX,0x8007000e
LAB_00747286:
00747286  5E                        POP ESI
00747287  C2 08 00                  RET 0x8
