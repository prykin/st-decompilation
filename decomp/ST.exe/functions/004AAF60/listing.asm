FUN_004aaf60:
004AAF60  55                        PUSH EBP
004AAF61  8B EC                     MOV EBP,ESP
004AAF63  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
004AAF66  56                        PUSH ESI
004AAF67  83 E8 00                  SUB EAX,0x0
004AAF6A  8B F1                     MOV ESI,ECX
004AAF6C  74 0B                     JZ 0x004aaf79
004AAF6E  48                        DEC EAX
004AAF6F  74 2F                     JZ 0x004aafa0
004AAF71  48                        DEC EAX
004AAF72  74 4E                     JZ 0x004aafc2
004AAF74  5E                        POP ESI
004AAF75  5D                        POP EBP
004AAF76  C2 04 00                  RET 0x4
LAB_004aaf79:
004AAF79  A1 3C 74 80 00            MOV EAX,[0x0080743c]
004AAF7E  25 FF 00 00 00            AND EAX,0xff
004AAF83  83 E8 00                  SUB EAX,0x0
004AAF86  74 6C                     JZ 0x004aaff4
004AAF88  48                        DEC EAX
004AAF89  74 0C                     JZ 0x004aaf97
004AAF8B  48                        DEC EAX
004AAF8C  75 12                     JNZ 0x004aafa0
004AAF8E  6A 00                     PUSH 0x0
004AAF90  8B CE                     MOV ECX,ESI
004AAF92  E8 B0 8C F5 FF            CALL 0x00403c47
LAB_004aaf97:
004AAF97  6A 00                     PUSH 0x0
004AAF99  8B CE                     MOV ECX,ESI
004AAF9B  E8 A7 8C F5 FF            CALL 0x00403c47
LAB_004aafa0:
004AAFA0  A1 3C 74 80 00            MOV EAX,[0x0080743c]
004AAFA5  25 FF 00 00 00            AND EAX,0xff
004AAFAA  83 E8 00                  SUB EAX,0x0
004AAFAD  74 0A                     JZ 0x004aafb9
004AAFAF  48                        DEC EAX
004AAFB0  74 42                     JZ 0x004aaff4
004AAFB2  48                        DEC EAX
004AAFB3  75 0D                     JNZ 0x004aafc2
004AAFB5  6A 00                     PUSH 0x0
004AAFB7  EB 02                     JMP 0x004aafbb
LAB_004aafb9:
004AAFB9  6A 01                     PUSH 0x1
LAB_004aafbb:
004AAFBB  8B CE                     MOV ECX,ESI
004AAFBD  E8 85 8C F5 FF            CALL 0x00403c47
FUN_004aaf60::cf_common_exit_004AAFC2:
004AAFC2  A1 3C 74 80 00            MOV EAX,[0x0080743c]
004AAFC7  25 FF 00 00 00            AND EAX,0xff
004AAFCC  83 E8 00                  SUB EAX,0x0
004AAFCF  74 11                     JZ 0x004aafe2
004AAFD1  48                        DEC EAX
004AAFD2  75 20                     JNZ 0x004aaff4
004AAFD4  6A 01                     PUSH 0x1
004AAFD6  8B CE                     MOV ECX,ESI
004AAFD8  E8 6A 8C F5 FF            CALL 0x00403c47
004AAFDD  5E                        POP ESI
004AAFDE  5D                        POP EBP
004AAFDF  C2 04 00                  RET 0x4
LAB_004aafe2:
004AAFE2  6A 01                     PUSH 0x1
004AAFE4  8B CE                     MOV ECX,ESI
004AAFE6  E8 5C 8C F5 FF            CALL 0x00403c47
004AAFEB  6A 01                     PUSH 0x1
004AAFED  8B CE                     MOV ECX,ESI
004AAFEF  E8 53 8C F5 FF            CALL 0x00403c47
LAB_004aaff4:
004AAFF4  5E                        POP ESI
004AAFF5  5D                        POP EBP
004AAFF6  C2 04 00                  RET 0x4
