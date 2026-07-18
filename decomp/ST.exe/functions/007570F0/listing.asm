FUN_007570f0:
007570F0  55                        PUSH EBP
007570F1  8B EC                     MOV EBP,ESP
007570F3  56                        PUSH ESI
007570F4  8B 75 08                  MOV ESI,dword ptr [EBP + 0x8]
007570F7  57                        PUSH EDI
007570F8  8B BE 92 01 00 00         MOV EDI,dword ptr [ESI + 0x192]
007570FE  8B 47 08                  MOV EAX,dword ptr [EDI + 0x8]
00757101  85 C0                     TEST EAX,EAX
00757103  74 2A                     JZ 0x0075712f
00757105  C7 47 08 00 00 00 00      MOV dword ptr [EDI + 0x8],0x0
0075710C  8B 86 BA 01 00 00         MOV EAX,dword ptr [ESI + 0x1ba]
00757112  6A 00                     PUSH 0x0
00757114  56                        PUSH ESI
00757115  FF 10                     CALL dword ptr [EAX]
00757117  8B 8E 9E 01 00 00         MOV ECX,dword ptr [ESI + 0x19e]
0075711D  6A 02                     PUSH 0x2
0075711F  56                        PUSH ESI
00757120  FF 11                     CALL dword ptr [ECX]
00757122  8B 96 96 01 00 00         MOV EDX,dword ptr [ESI + 0x196]
00757128  6A 02                     PUSH 0x2
0075712A  E9 BE 00 00 00            JMP 0x007571ed
LAB_0075712f:
0075712F  8B 46 4C                  MOV EAX,dword ptr [ESI + 0x4c]
00757132  85 C0                     TEST EAX,EAX
00757134  74 54                     JZ 0x0075718a
00757136  8B 86 80 00 00 00         MOV EAX,dword ptr [ESI + 0x80]
0075713C  85 C0                     TEST EAX,EAX
0075713E  75 4A                     JNZ 0x0075718a
00757140  8B 46 54                  MOV EAX,dword ptr [ESI + 0x54]
00757143  85 C0                     TEST EAX,EAX
00757145  74 19                     JZ 0x00757160
00757147  8B 46 64                  MOV EAX,dword ptr [ESI + 0x64]
0075714A  85 C0                     TEST EAX,EAX
0075714C  74 12                     JZ 0x00757160
0075714E  8B 47 18                  MOV EAX,dword ptr [EDI + 0x18]
00757151  89 86 BA 01 00 00         MOV dword ptr [ESI + 0x1ba],EAX
00757157  C7 47 08 01 00 00 00      MOV dword ptr [EDI + 0x8],0x1
0075715E  EB 2A                     JMP 0x0075718a
LAB_00757160:
00757160  8B 46 5C                  MOV EAX,dword ptr [ESI + 0x5c]
00757163  85 C0                     TEST EAX,EAX
00757165  74 0B                     JZ 0x00757172
00757167  8B 4F 14                  MOV ECX,dword ptr [EDI + 0x14]
0075716A  89 8E BA 01 00 00         MOV dword ptr [ESI + 0x1ba],ECX
00757170  EB 18                     JMP 0x0075718a
LAB_00757172:
00757172  8B 15 7C D7 7E 00         MOV EDX,dword ptr [0x007ed77c]
00757178  68 CD 01 00 00            PUSH 0x1cd
0075717D  68 68 2D 7F 00            PUSH 0x7f2d68
00757182  52                        PUSH EDX
00757183  6A 2D                     PUSH 0x2d
00757185  E8 B6 EC F4 FF            CALL 0x006a5e40
LAB_0075718a:
0075718A  8B 86 AE 01 00 00         MOV EAX,dword ptr [ESI + 0x1ae]
00757190  56                        PUSH ESI
00757191  FF 10                     CALL dword ptr [EAX]
00757193  8B 8E 9A 01 00 00         MOV ECX,dword ptr [ESI + 0x19a]
00757199  56                        PUSH ESI
0075719A  FF 51 08                  CALL dword ptr [ECX + 0x8]
0075719D  8B 46 3C                  MOV EAX,dword ptr [ESI + 0x3c]
007571A0  85 C0                     TEST EAX,EAX
007571A2  75 4C                     JNZ 0x007571f0
007571A4  8B 47 10                  MOV EAX,dword ptr [EDI + 0x10]
007571A7  85 C0                     TEST EAX,EAX
007571A9  75 09                     JNZ 0x007571b4
007571AB  8B 96 B6 01 00 00         MOV EDX,dword ptr [ESI + 0x1b6]
007571B1  56                        PUSH ESI
007571B2  FF 12                     CALL dword ptr [EDX]
LAB_007571b4:
007571B4  8B 86 B2 01 00 00         MOV EAX,dword ptr [ESI + 0x1b2]
007571BA  56                        PUSH ESI
007571BB  FF 10                     CALL dword ptr [EAX]
007571BD  8B 46 4C                  MOV EAX,dword ptr [ESI + 0x4c]
007571C0  85 C0                     TEST EAX,EAX
007571C2  74 0D                     JZ 0x007571d1
007571C4  8B 57 08                  MOV EDX,dword ptr [EDI + 0x8]
007571C7  8B 8E BA 01 00 00         MOV ECX,dword ptr [ESI + 0x1ba]
007571CD  52                        PUSH EDX
007571CE  56                        PUSH ESI
007571CF  FF 11                     CALL dword ptr [ECX]
LAB_007571d1:
007571D1  8B 4F 08                  MOV ECX,dword ptr [EDI + 0x8]
007571D4  8B 86 9E 01 00 00         MOV EAX,dword ptr [ESI + 0x19e]
007571DA  F7 D9                     NEG ECX
007571DC  1B C9                     SBB ECX,ECX
007571DE  83 E1 03                  AND ECX,0x3
007571E1  51                        PUSH ECX
007571E2  56                        PUSH ESI
007571E3  FF 10                     CALL dword ptr [EAX]
007571E5  8B 96 96 01 00 00         MOV EDX,dword ptr [ESI + 0x196]
007571EB  6A 00                     PUSH 0x0
LAB_007571ed:
007571ED  56                        PUSH ESI
007571EE  FF 12                     CALL dword ptr [EDX]
LAB_007571f0:
007571F0  8B 46 04                  MOV EAX,dword ptr [ESI + 0x4]
007571F3  85 C0                     TEST EAX,EAX
007571F5  74 46                     JZ 0x0075723d
007571F7  8B 4F 0C                  MOV ECX,dword ptr [EDI + 0xc]
007571FA  33 D2                     XOR EDX,EDX
007571FC  89 48 0C                  MOV dword ptr [EAX + 0xc],ECX
007571FF  8B 4F 08                  MOV ECX,dword ptr [EDI + 0x8]
00757202  8B 46 04                  MOV EAX,dword ptr [ESI + 0x4]
00757205  85 C9                     TEST ECX,ECX
00757207  8B 4F 0C                  MOV ECX,dword ptr [EDI + 0xc]
0075720A  0F 95 C2                  SETNZ DL
0075720D  42                        INC EDX
0075720E  03 D1                     ADD EDX,ECX
00757210  89 50 10                  MOV dword ptr [EAX + 0x10],EDX
00757213  8B 46 38                  MOV EAX,dword ptr [ESI + 0x38]
00757216  85 C0                     TEST EAX,EAX
00757218  74 23                     JZ 0x0075723d
0075721A  8B 8E A2 01 00 00         MOV ECX,dword ptr [ESI + 0x1a2]
00757220  8B 41 14                  MOV EAX,dword ptr [ECX + 0x14]
00757223  85 C0                     TEST EAX,EAX
00757225  75 16                     JNZ 0x0075723d
00757227  8B 7E 64                  MOV EDI,dword ptr [ESI + 0x64]
0075722A  8B 46 04                  MOV EAX,dword ptr [ESI + 0x4]
0075722D  33 D2                     XOR EDX,EDX
0075722F  8B 48 10                  MOV ECX,dword ptr [EAX + 0x10]
00757232  85 FF                     TEST EDI,EDI
00757234  0F 95 C2                  SETNZ DL
00757237  42                        INC EDX
00757238  03 CA                     ADD ECX,EDX
0075723A  89 48 10                  MOV dword ptr [EAX + 0x10],ECX
LAB_0075723d:
0075723D  5F                        POP EDI
0075723E  5E                        POP ESI
0075723F  5D                        POP EBP
00757240  C2 04 00                  RET 0x4
