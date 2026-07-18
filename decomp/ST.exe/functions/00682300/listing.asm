FUN_00682300:
00682300  55                        PUSH EBP
00682301  8B EC                     MOV EBP,ESP
00682303  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
00682306  80 38 02                  CMP byte ptr [EAX],0x2
00682309  75 07                     JNZ 0x00682312
0068230B  D9 40 01                  FLD float ptr [EAX + 0x1]
0068230E  5D                        POP EBP
0068230F  C2 04 00                  RET 0x4
LAB_00682312:
00682312  0F BF 40 01               MOVSX EAX,word ptr [EAX + 0x1]
00682316  50                        PUSH EAX
00682317  E8 3F 23 D8 FF            CALL 0x0040465b
0068231C  83 C4 04                  ADD ESP,0x4
0068231F  5D                        POP EBP
00682320  C2 04 00                  RET 0x4
