FUN_00748ae7:
00748AE7  55                        PUSH EBP
00748AE8  8B EC                     MOV EBP,ESP
00748AEA  56                        PUSH ESI
00748AEB  8B 75 0C                  MOV ESI,dword ptr [EBP + 0xc]
00748AEE  57                        PUSH EDI
00748AEF  6A 10                     PUSH 0x10
00748AF1  59                        POP ECX
00748AF2  BF 80 1B 7A 00            MOV EDI,0x7a1b80
00748AF7  33 C0                     XOR EAX,EAX
00748AF9  F3 A6                     CMPSB.REPE ES:EDI,ESI
00748AFB  74 29                     JZ 0x00748b26
00748AFD  8B 75 0C                  MOV ESI,dword ptr [EBP + 0xc]
00748B00  6A 10                     PUSH 0x10
00748B02  59                        POP ECX
00748B03  BF 70 1B 7A 00            MOV EDI,0x7a1b70
00748B08  33 C0                     XOR EAX,EAX
00748B0A  F3 A6                     CMPSB.REPE ES:EDI,ESI
00748B0C  74 18                     JZ 0x00748b26
00748B0E  8B 75 0C                  MOV ESI,dword ptr [EBP + 0xc]
00748B11  6A 10                     PUSH 0x10
00748B13  59                        POP ECX
00748B14  BF B8 22 7A 00            MOV EDI,0x7a22b8
00748B19  33 C0                     XOR EAX,EAX
00748B1B  F3 A6                     CMPSB.REPE ES:EDI,ESI
00748B1D  74 07                     JZ 0x00748b26
00748B1F  B8 02 40 00 80            MOV EAX,0x80004002
00748B24  EB 0B                     JMP 0x00748b31
LAB_00748b26:
00748B26  FF 75 10                  PUSH dword ptr [EBP + 0x10]
00748B29  FF 75 08                  PUSH dword ptr [EBP + 0x8]
00748B2C  E8 75 2D 00 00            CALL 0x0074b8a6
LAB_00748b31:
00748B31  5F                        POP EDI
00748B32  5E                        POP ESI
00748B33  5D                        POP EBP
00748B34  C2 0C 00                  RET 0xc
