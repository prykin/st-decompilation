FUN_00677700:
00677700  55                        PUSH EBP
00677701  8B EC                     MOV EBP,ESP
00677703  8B 0D 74 A1 7F 00         MOV ECX,dword ptr [0x007fa174]
00677709  33 C0                     XOR EAX,EAX
0067770B  85 C9                     TEST ECX,ECX
0067770D  75 02                     JNZ 0x00677711
0067770F  5D                        POP EBP
00677710  C3                        RET
LAB_00677711:
00677711  8B 55 0C                  MOV EDX,dword ptr [EBP + 0xc]
00677714  81 C2 24 FF FF FF         ADD EDX,0xffffff24
0067771A  83 FA 07                  CMP EDX,0x7
0067771D  77 5B                     JA 0x0067777a
switchD_0067771f::switchD:
0067771F  FF 24 95 7C 77 67 00      JMP dword ptr [EDX*0x4 + 0x67777c]
switchD_0067771f::caseD_dc:
00677726  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
00677729  50                        PUSH EAX
0067772A  E8 B1 9F D8 FF            CALL 0x004016e0
0067772F  5D                        POP EBP
00677730  C3                        RET
switchD_0067771f::caseD_dd:
00677731  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
00677734  52                        PUSH EDX
00677735  E8 1A C2 D8 FF            CALL 0x00403954
0067773A  5D                        POP EBP
0067773B  C3                        RET
switchD_0067771f::caseD_de:
0067773C  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
0067773F  50                        PUSH EAX
00677740  E8 3F AB D8 FF            CALL 0x00402284
00677745  5D                        POP EBP
00677746  C3                        RET
switchD_0067771f::caseD_e2:
00677747  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
0067774A  52                        PUSH EDX
0067774B  E8 1A A7 D8 FF            CALL 0x00401e6a
00677750  5D                        POP EBP
00677751  C3                        RET
switchD_0067771f::caseD_df:
00677752  56                        PUSH ESI
00677753  8B 75 08                  MOV ESI,dword ptr [EBP + 0x8]
00677756  57                        PUSH EDI
00677757  56                        PUSH ESI
00677758  E8 82 C3 D8 FF            CALL 0x00403adf
0067775D  8B 0D 74 A1 7F 00         MOV ECX,dword ptr [0x007fa174]
00677763  56                        PUSH ESI
00677764  8B F8                     MOV EDI,EAX
00677766  E8 B3 B1 D8 FF            CALL 0x0040291e
0067776B  2B C7                     SUB EAX,EDI
0067776D  5F                        POP EDI
0067776E  5E                        POP ESI
0067776F  5D                        POP EBP
00677770  C3                        RET
switchD_0067771f::caseD_e3:
00677771  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
00677774  50                        PUSH EAX
00677775  E8 2D BF D8 FF            CALL 0x004036a7
switchD_0067771f::caseD_e0:
0067777A  5D                        POP EBP
0067777B  C3                        RET
