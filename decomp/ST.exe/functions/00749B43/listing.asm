FUN_00749b43:
00749B43  56                        PUSH ESI
00749B44  8B F1                     MOV ESI,ECX
00749B46  E8 14 00 00 00            CALL 0x00749b5f
00749B4B  F6 44 24 08 01            TEST byte ptr [ESP + 0x8],0x1
00749B50  74 07                     JZ 0x00749b59
00749B52  56                        PUSH ESI
00749B53  E8 58 47 FE FF            CALL 0x0072e2b0
00749B58  59                        POP ECX
LAB_00749b59:
00749B59  8B C6                     MOV EAX,ESI
00749B5B  5E                        POP ESI
00749B5C  C2 04 00                  RET 0x4
