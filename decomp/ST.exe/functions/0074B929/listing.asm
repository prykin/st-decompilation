FUN_0074b929:
0074B929  53                        PUSH EBX
0074B92A  56                        PUSH ESI
0074B92B  57                        PUSH EDI
0074B92C  8B D9                     MOV EBX,ECX
0074B92E  E8 50 02 00 00            CALL 0x0074bb83
0074B933  8B 74 24 10               MOV ESI,dword ptr [ESP + 0x10]
0074B937  8B FB                     MOV EDI,EBX
0074B939  A5                        MOVSD ES:EDI,ESI
0074B93A  A5                        MOVSD ES:EDI,ESI
0074B93B  A5                        MOVSD ES:EDI,ESI
0074B93C  A5                        MOVSD ES:EDI,ESI
0074B93D  5F                        POP EDI
0074B93E  8B C3                     MOV EAX,EBX
0074B940  5E                        POP ESI
0074B941  5B                        POP EBX
0074B942  C2 04 00                  RET 0x4
