FUN_00515180:
00515180  55                        PUSH EBP
00515181  8B EC                     MOV EBP,ESP
00515183  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
00515186  8A 91 A1 01 00 00         MOV DL,byte ptr [ECX + 0x1a1]
0051518C  3A D0                     CMP DL,AL
0051518E  74 08                     JZ 0x00515198
00515190  3C 07                     CMP AL,0x7
00515192  0F 85 E7 00 00 00         JNZ 0x0051527f
LAB_00515198:
00515198  25 FF 00 00 00            AND EAX,0xff
0051519D  48                        DEC EAX
0051519E  83 F8 0B                  CMP EAX,0xb
005151A1  0F 87 D8 00 00 00         JA 0x0051527f
switchD_005151a7::switchD:
005151A7  FF 24 85 84 52 51 00      JMP dword ptr [EAX*0x4 + 0x515284]
switchD_005151a7::caseD_6:
005151AE  8B 81 A3 01 00 00         MOV EAX,dword ptr [ECX + 0x1a3]
005151B4  6A 01                     PUSH 0x1
005151B6  50                        PUSH EAX
005151B7  E8 A5 0C EF FF            CALL 0x00405e61
005151BC  5D                        POP EBP
005151BD  C2 04 00                  RET 0x4
switchD_005151a7::caseD_5:
005151C0  8A 91 A7 01 00 00         MOV DL,byte ptr [ECX + 0x1a7]
005151C6  8B 81 A3 01 00 00         MOV EAX,dword ptr [ECX + 0x1a3]
005151CC  6A 01                     PUSH 0x1
005151CE  52                        PUSH EDX
005151CF  50                        PUSH EAX
005151D0  E8 5E D6 EE FF            CALL 0x00402833
005151D5  5D                        POP EBP
005151D6  C2 04 00                  RET 0x4
switchD_005151a7::caseD_1:
005151D9  8B 91 A7 01 00 00         MOV EDX,dword ptr [ECX + 0x1a7]
005151DF  8B 81 A3 01 00 00         MOV EAX,dword ptr [ECX + 0x1a3]
005151E5  6A 01                     PUSH 0x1
005151E7  52                        PUSH EDX
005151E8  50                        PUSH EAX
005151E9  E8 97 FC EE FF            CALL 0x00404e85
005151EE  5D                        POP EBP
005151EF  C2 04 00                  RET 0x4
switchD_005151a7::caseD_7:
005151F2  E8 B5 D5 EE FF            CALL 0x004027ac
005151F7  5D                        POP EBP
005151F8  C2 04 00                  RET 0x4
switchD_005151a7::caseD_3:
005151FB  8B 91 A3 01 00 00         MOV EDX,dword ptr [ECX + 0x1a3]
00515201  6A 01                     PUSH 0x1
00515203  52                        PUSH EDX
00515204  E8 6F E6 EE FF            CALL 0x00403878
00515209  5D                        POP EBP
0051520A  C2 04 00                  RET 0x4
switchD_005151a7::caseD_2:
0051520D  8B 81 A7 01 00 00         MOV EAX,dword ptr [ECX + 0x1a7]
00515213  8B 91 A3 01 00 00         MOV EDX,dword ptr [ECX + 0x1a3]
00515219  6A 01                     PUSH 0x1
0051521B  50                        PUSH EAX
0051521C  52                        PUSH EDX
0051521D  E8 25 E5 EE FF            CALL 0x00403747
00515222  5D                        POP EBP
00515223  C2 04 00                  RET 0x4
switchD_005151a7::caseD_4:
00515226  8B 81 A7 01 00 00         MOV EAX,dword ptr [ECX + 0x1a7]
0051522C  8B 91 A3 01 00 00         MOV EDX,dword ptr [ECX + 0x1a3]
00515232  6A 01                     PUSH 0x1
00515234  50                        PUSH EAX
00515235  52                        PUSH EDX
00515236  E8 A5 05 EF FF            CALL 0x004057e0
0051523B  5D                        POP EBP
0051523C  C2 04 00                  RET 0x4
switchD_005151a7::caseD_b:
0051523F  8B 81 A7 01 00 00         MOV EAX,dword ptr [ECX + 0x1a7]
00515245  8B 91 A3 01 00 00         MOV EDX,dword ptr [ECX + 0x1a3]
0051524B  6A 01                     PUSH 0x1
0051524D  50                        PUSH EAX
0051524E  52                        PUSH EDX
0051524F  E8 58 DA EE FF            CALL 0x00402cac
00515254  5D                        POP EBP
00515255  C2 04 00                  RET 0x4
switchD_005151a7::caseD_c:
00515258  8B 81 A3 01 00 00         MOV EAX,dword ptr [ECX + 0x1a3]
0051525E  6A 01                     PUSH 0x1
00515260  50                        PUSH EAX
00515261  E8 5A E9 EE FF            CALL 0x00403bc0
00515266  5D                        POP EBP
00515267  C2 04 00                  RET 0x4
switchD_005151a7::caseD_8:
0051526A  8B 91 A7 01 00 00         MOV EDX,dword ptr [ECX + 0x1a7]
00515270  8B 81 A3 01 00 00         MOV EAX,dword ptr [ECX + 0x1a3]
00515276  6A 01                     PUSH 0x1
00515278  52                        PUSH EDX
00515279  50                        PUSH EAX
0051527A  E8 39 CE EE FF            CALL 0x004020b8
switchD_005151a7::caseD_9:
0051527F  5D                        POP EBP
00515280  C2 04 00                  RET 0x4
