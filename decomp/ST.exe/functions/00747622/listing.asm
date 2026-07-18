FUN_00747622:
00747622  55                        PUSH EBP
00747623  8B EC                     MOV EBP,ESP
00747625  83 7D 10 00               CMP dword ptr [EBP + 0x10],0x0
00747629  56                        PUSH ESI
0074762A  57                        PUSH EDI
0074762B  75 07                     JNZ 0x00747634
0074762D  B8 03 40 00 80            MOV EAX,0x80004003
00747632  EB 34                     JMP 0x00747668
LAB_00747634:
00747634  8B 75 0C                  MOV ESI,dword ptr [EBP + 0xc]
00747637  6A 10                     PUSH 0x10
00747639  59                        POP ECX
0074763A  BF 20 1B 7A 00            MOV EDI,0x7a1b20
0074763F  33 C0                     XOR EAX,EAX
00747641  F3 A6                     CMPSB.REPE ES:EDI,ESI
00747643  74 18                     JZ 0x0074765d
00747645  8B 75 0C                  MOV ESI,dword ptr [EBP + 0xc]
00747648  6A 10                     PUSH 0x10
0074764A  59                        POP ECX
0074764B  BF B8 22 7A 00            MOV EDI,0x7a22b8
00747650  33 C0                     XOR EAX,EAX
00747652  F3 A6                     CMPSB.REPE ES:EDI,ESI
00747654  74 07                     JZ 0x0074765d
00747656  B8 02 40 00 80            MOV EAX,0x80004002
0074765B  EB 0B                     JMP 0x00747668
LAB_0074765d:
0074765D  FF 75 10                  PUSH dword ptr [EBP + 0x10]
00747660  FF 75 08                  PUSH dword ptr [EBP + 0x8]
00747663  E8 3E 42 00 00            CALL 0x0074b8a6
LAB_00747668:
00747668  5F                        POP EDI
00747669  5E                        POP ESI
0074766A  5D                        POP EBP
0074766B  C2 0C 00                  RET 0xc
