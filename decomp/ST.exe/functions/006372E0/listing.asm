FUN_006372e0:
006372E0  56                        PUSH ESI
006372E1  57                        PUSH EDI
006372E2  8B F1                     MOV ESI,ECX
006372E4  33 FF                     XOR EDI,EDI
006372E6  E8 0B C5 DC FF            CALL 0x004037f6
006372EB  85 C0                     TEST EAX,EAX
006372ED  74 08                     JZ 0x006372f7
006372EF  5F                        POP EDI
006372F0  B8 01 00 00 00            MOV EAX,0x1
006372F5  5E                        POP ESI
006372F6  C3                        RET
LAB_006372f7:
006372F7  8B 46 28                  MOV EAX,dword ptr [ESI + 0x28]
006372FA  85 C0                     TEST EAX,EAX
006372FC  75 1C                     JNZ 0x0063731a
006372FE  8B CE                     MOV ECX,ESI
00637300  E8 5D AE DC FF            CALL 0x00402162
00637305  85 C0                     TEST EAX,EAX
00637307  89 46 28                  MOV dword ptr [ESI + 0x28],EAX
0063730A  74 07                     JZ 0x00637313
0063730C  8B CE                     MOV ECX,ESI
0063730E  E8 76 CD DC FF            CALL 0x00404089
LAB_00637313:
00637313  8B 46 28                  MOV EAX,dword ptr [ESI + 0x28]
00637316  85 C0                     TEST EAX,EAX
00637318  74 07                     JZ 0x00637321
LAB_0063731a:
0063731A  8B CE                     MOV ECX,ESI
0063731C  E8 E4 C9 DC FF            CALL 0x00403d05
LAB_00637321:
00637321  8B C7                     MOV EAX,EDI
00637323  5F                        POP EDI
00637324  5E                        POP ESI
00637325  C3                        RET
