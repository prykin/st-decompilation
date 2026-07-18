FUN_0073f940:
0073F940  55                        PUSH EBP
0073F941  8B EC                     MOV EBP,ESP
0073F943  51                        PUSH ECX
0073F944  53                        PUSH EBX
0073F945  56                        PUSH ESI
0073F946  57                        PUSH EDI
0073F947  DD 7D FC                  FNSTSW word ptr [EBP + -0x4]
0073F94A  DB E2                     FNCLEX
0073F94C  66 8B 45 FC               MOV AX,word ptr [EBP + -0x4]
0073F950  50                        PUSH EAX
0073F951  E8 BA 03 00 00            CALL 0x0073fd10
0073F956  83 C4 04                  ADD ESP,0x4
0073F959  5F                        POP EDI
0073F95A  5E                        POP ESI
0073F95B  5B                        POP EBX
0073F95C  8B E5                     MOV ESP,EBP
0073F95E  5D                        POP EBP
0073F95F  C3                        RET
