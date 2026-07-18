FUN_00682810:
00682810  55                        PUSH EBP
00682811  8B EC                     MOV EBP,ESP
00682813  A1 18 2D 7D 00            MOV EAX,[0x007d2d18]
00682818  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
0068281B  3B C1                     CMP EAX,ECX
0068281D  75 07                     JNZ 0x00682826
0068281F  E8 45 FC D7 FF            CALL 0x00402469
00682824  5D                        POP EBP
00682825  C3                        RET
LAB_00682826:
00682826  50                        PUSH EAX
00682827  E8 2D 07 D8 FF            CALL 0x00402f59
0068282C  83 C4 04                  ADD ESP,0x4
0068282F  5D                        POP EBP
00682830  C3                        RET
