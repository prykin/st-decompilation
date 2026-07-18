FUN_00714dc0:
00714DC0  55                        PUSH EBP
00714DC1  8B EC                     MOV EBP,ESP
00714DC3  53                        PUSH EBX
00714DC4  8B 5D 08                  MOV EBX,dword ptr [EBP + 0x8]
00714DC7  56                        PUSH ESI
00714DC8  57                        PUSH EDI
00714DC9  85 DB                     TEST EBX,EBX
00714DCB  8B F1                     MOV ESI,ECX
00714DCD  75 0C                     JNZ 0x00714ddb
00714DCF  5F                        POP EDI
00714DD0  5E                        POP ESI
00714DD1  B8 CC FF FF FF            MOV EAX,0xffffffcc
00714DD6  5B                        POP EBX
00714DD7  5D                        POP EBP
00714DD8  C2 04 00                  RET 0x4
LAB_00714ddb:
00714DDB  8B FB                     MOV EDI,EBX
00714DDD  83 C9 FF                  OR ECX,0xffffffff
00714DE0  33 C0                     XOR EAX,EAX
00714DE2  F2 AE                     SCASB.REPNE ES:EDI
00714DE4  F7 D1                     NOT ECX
00714DE6  51                        PUSH ECX
00714DE7  8B CE                     MOV ECX,ESI
00714DE9  E8 F2 FE FF FF            CALL 0x00714ce0
00714DEE  85 C0                     TEST EAX,EAX
00714DF0  75 25                     JNZ 0x00714e17
00714DF2  8B 16                     MOV EDX,dword ptr [ESI]
00714DF4  85 D2                     TEST EDX,EDX
00714DF6  74 1D                     JZ 0x00714e15
00714DF8  8B FB                     MOV EDI,EBX
00714DFA  83 C9 FF                  OR ECX,0xffffffff
00714DFD  F2 AE                     SCASB.REPNE ES:EDI
00714DFF  F7 D1                     NOT ECX
00714E01  2B F9                     SUB EDI,ECX
00714E03  8B C1                     MOV EAX,ECX
00714E05  8B F7                     MOV ESI,EDI
00714E07  8B FA                     MOV EDI,EDX
00714E09  C1 E9 02                  SHR ECX,0x2
00714E0C  F3 A5                     MOVSD.REP ES:EDI,ESI
00714E0E  8B C8                     MOV ECX,EAX
00714E10  83 E1 03                  AND ECX,0x3
00714E13  F3 A4                     MOVSB.REP ES:EDI,ESI
LAB_00714e15:
00714E15  33 C0                     XOR EAX,EAX
LAB_00714e17:
00714E17  5F                        POP EDI
00714E18  5E                        POP ESI
00714E19  5B                        POP EBX
00714E1A  5D                        POP EBP
00714E1B  C2 04 00                  RET 0x4
