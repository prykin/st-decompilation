FUN_00694450:
00694450  55                        PUSH EBP
00694451  8B EC                     MOV EBP,ESP
00694453  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
00694456  53                        PUSH EBX
00694457  56                        PUSH ESI
00694458  57                        PUSH EDI
00694459  8B F9                     MOV EDI,ECX
0069445B  50                        PUSH EAX
0069445C  E8 B2 F4 D6 FF            CALL 0x00403913
00694461  8B D8                     MOV EBX,EAX
00694463  85 DB                     TEST EBX,EBX
00694465  74 6C                     JZ 0x006944d3
00694467  8B 75 0C                  MOV ESI,dword ptr [EBP + 0xc]
0069446A  8D 43 01                  LEA EAX,[EBX + 0x1]
LAB_0069446d:
0069446D  8A 10                     MOV DL,byte ptr [EAX]
0069446F  8A CA                     MOV CL,DL
00694471  3A 16                     CMP DL,byte ptr [ESI]
00694473  75 1C                     JNZ 0x00694491
00694475  84 C9                     TEST CL,CL
00694477  74 14                     JZ 0x0069448d
00694479  8A 50 01                  MOV DL,byte ptr [EAX + 0x1]
0069447C  8A CA                     MOV CL,DL
0069447E  3A 56 01                  CMP DL,byte ptr [ESI + 0x1]
00694481  75 0E                     JNZ 0x00694491
00694483  83 C0 02                  ADD EAX,0x2
00694486  83 C6 02                  ADD ESI,0x2
00694489  84 C9                     TEST CL,CL
0069448B  75 E0                     JNZ 0x0069446d
LAB_0069448d:
0069448D  33 C0                     XOR EAX,EAX
0069448F  EB 05                     JMP 0x00694496
LAB_00694491:
00694491  1B C0                     SBB EAX,EAX
00694493  83 D8 FF                  SBB EAX,-0x1
LAB_00694496:
00694496  85 C0                     TEST EAX,EAX
00694498  75 39                     JNZ 0x006944d3
0069449A  8A 87 F9 02 00 00         MOV AL,byte ptr [EDI + 0x2f9]
006944A0  33 D2                     XOR EDX,EDX
006944A2  FE C8                     DEC AL
006944A4  B9 27 00 00 00            MOV ECX,0x27
006944A9  88 87 F9 02 00 00         MOV byte ptr [EDI + 0x2f9],AL
006944AF  8A 53 39                  MOV DL,byte ptr [EBX + 0x39]
006944B2  33 C0                     XOR EAX,EAX
006944B4  8D 34 92                  LEA ESI,[EDX + EDX*0x4]
006944B7  C1 E6 03                  SHL ESI,0x3
006944BA  2B F2                     SUB ESI,EDX
006944BC  8D BC B7 FA 02 00 00      LEA EDI,[EDI + ESI*0x4 + 0x2fa]
006944C3  F3 AB                     STOSD.REP ES:EDI
006944C5  B9 08 00 00 00            MOV ECX,0x8
006944CA  8D 7B 01                  LEA EDI,[EBX + 0x1]
006944CD  F3 AB                     STOSD.REP ES:EDI
006944CF  C6 43 39 FF               MOV byte ptr [EBX + 0x39],0xff
LAB_006944d3:
006944D3  5F                        POP EDI
006944D4  5E                        POP ESI
006944D5  5B                        POP EBX
006944D6  5D                        POP EBP
006944D7  C2 08 00                  RET 0x8
