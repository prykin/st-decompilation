FUN_0052d320:
0052D320  55                        PUSH EBP
0052D321  8B EC                     MOV EBP,ESP
0052D323  56                        PUSH ESI
0052D324  8B F1                     MOV ESI,ECX
0052D326  57                        PUSH EDI
0052D327  8B 7D 0C                  MOV EDI,dword ptr [EBP + 0xc]
0052D32A  8A 86 9C 00 00 00         MOV AL,byte ptr [ESI + 0x9c]
0052D330  84 C0                     TEST AL,AL
0052D332  75 18                     JNZ 0x0052d34c
0052D334  57                        PUSH EDI
0052D335  68 5C 3B 7C 00            PUSH 0x7c3b5c
0052D33A  E8 AB 5C ED FF            CALL 0x00402fea
0052D33F  57                        PUSH EDI
0052D340  68 5C 3B 7C 00            PUSH 0x7c3b5c
0052D345  8B CE                     MOV ECX,ESI
0052D347  E8 9E 5C ED FF            CALL 0x00402fea
LAB_0052d34c:
0052D34C  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
0052D34F  57                        PUSH EDI
0052D350  50                        PUSH EAX
0052D351  8B CE                     MOV ECX,ESI
0052D353  E8 92 5C ED FF            CALL 0x00402fea
0052D358  5F                        POP EDI
0052D359  5E                        POP ESI
0052D35A  5D                        POP EBP
0052D35B  C2 08 00                  RET 0x8
