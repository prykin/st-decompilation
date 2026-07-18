FUN_00630110:
00630110  55                        PUSH EBP
00630111  8B EC                     MOV EBP,ESP
00630113  56                        PUSH ESI
00630114  8B F1                     MOV ESI,ECX
00630116  33 C0                     XOR EAX,EAX
00630118  83 BE FA 01 00 00 02      CMP dword ptr [ESI + 0x1fa],0x2
0063011F  74 27                     JZ 0x00630148
00630121  57                        PUSH EDI
00630122  8B CE                     MOV ECX,ESI
00630124  E8 E9 38 DD FF            CALL 0x00403a12
00630129  8B 0D 74 A1 7F 00         MOV ECX,dword ptr [0x007fa174]
0063012F  8B F8                     MOV EDI,EAX
00630131  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
00630134  57                        PUSH EDI
00630135  50                        PUSH EAX
00630136  E8 AC 54 DD FF            CALL 0x004055e7
0063013B  8B C7                     MOV EAX,EDI
0063013D  C7 86 FA 01 00 00 02 00 00 00  MOV dword ptr [ESI + 0x1fa],0x2
00630147  5F                        POP EDI
LAB_00630148:
00630148  5E                        POP ESI
00630149  5D                        POP EBP
0063014A  C2 04 00                  RET 0x4
