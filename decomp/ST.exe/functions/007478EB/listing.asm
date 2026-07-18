FUN_007478eb:
007478EB  55                        PUSH EBP
007478EC  8B EC                     MOV EBP,ESP
007478EE  83 7D 10 00               CMP dword ptr [EBP + 0x10],0x0
007478F2  56                        PUSH ESI
007478F3  57                        PUSH EDI
007478F4  75 07                     JNZ 0x007478fd
007478F6  B8 03 40 00 80            MOV EAX,0x80004003
007478FB  EB 34                     JMP 0x00747931
LAB_007478fd:
007478FD  8B 75 0C                  MOV ESI,dword ptr [EBP + 0xc]
00747900  6A 10                     PUSH 0x10
00747902  59                        POP ECX
00747903  BF 30 1B 7A 00            MOV EDI,0x7a1b30
00747908  33 C0                     XOR EAX,EAX
0074790A  F3 A6                     CMPSB.REPE ES:EDI,ESI
0074790C  74 18                     JZ 0x00747926
0074790E  8B 75 0C                  MOV ESI,dword ptr [EBP + 0xc]
00747911  6A 10                     PUSH 0x10
00747913  59                        POP ECX
00747914  BF B8 22 7A 00            MOV EDI,0x7a22b8
00747919  33 C0                     XOR EAX,EAX
0074791B  F3 A6                     CMPSB.REPE ES:EDI,ESI
0074791D  74 07                     JZ 0x00747926
0074791F  B8 02 40 00 80            MOV EAX,0x80004002
00747924  EB 0B                     JMP 0x00747931
LAB_00747926:
00747926  FF 75 10                  PUSH dword ptr [EBP + 0x10]
00747929  FF 75 08                  PUSH dword ptr [EBP + 0x8]
0074792C  E8 75 3F 00 00            CALL 0x0074b8a6
LAB_00747931:
00747931  5F                        POP EDI
00747932  5E                        POP ESI
00747933  5D                        POP EBP
00747934  C2 0C 00                  RET 0xc
