FUN_0040cdb0:
0040CDB0  55                        PUSH EBP
0040CDB1  8B EC                     MOV EBP,ESP
0040CDB3  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
0040CDB6  56                        PUSH ESI
0040CDB7  50                        PUSH EAX
0040CDB8  E8 B2 5A FF FF            CALL 0x0040286f
0040CDBD  8B F0                     MOV ESI,EAX
0040CDBF  85 F6                     TEST ESI,ESI
0040CDC1  74 2A                     JZ 0x0040cded
0040CDC3  8D 8E 9F 00 00 00         LEA ECX,[ESI + 0x9f]
0040CDC9  51                        PUSH ECX
0040CDCA  E8 91 E2 29 00            CALL 0x006ab060
0040CDCF  C7 86 A3 00 00 00 00 00 00 00  MOV dword ptr [ESI + 0xa3],0x0
0040CDD9  C7 86 A7 00 00 00 00 00 00 00  MOV dword ptr [ESI + 0xa7],0x0
0040CDE3  C7 86 AB 00 00 00 00 00 00 00  MOV dword ptr [ESI + 0xab],0x0
LAB_0040cded:
0040CDED  5E                        POP ESI
0040CDEE  5D                        POP EBP
0040CDEF  C2 04 00                  RET 0x4
