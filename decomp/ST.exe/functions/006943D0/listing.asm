FUN_006943d0:
006943D0  55                        PUSH EBP
006943D1  8B EC                     MOV EBP,ESP
006943D3  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
006943D6  50                        PUSH EAX
006943D7  E8 37 F5 D6 FF            CALL 0x00403913
006943DC  85 C0                     TEST EAX,EAX
006943DE  74 42                     JZ 0x00694422
006943E0  53                        PUSH EBX
006943E1  56                        PUSH ESI
006943E2  8B 75 0C                  MOV ESI,dword ptr [EBP + 0xc]
006943E5  40                        INC EAX
LAB_006943e6:
006943E6  8A 10                     MOV DL,byte ptr [EAX]
006943E8  8A 1E                     MOV BL,byte ptr [ESI]
006943EA  8A CA                     MOV CL,DL
006943EC  3A D3                     CMP DL,BL
006943EE  75 1E                     JNZ 0x0069440e
006943F0  84 C9                     TEST CL,CL
006943F2  74 16                     JZ 0x0069440a
006943F4  8A 50 01                  MOV DL,byte ptr [EAX + 0x1]
006943F7  8A 5E 01                  MOV BL,byte ptr [ESI + 0x1]
006943FA  8A CA                     MOV CL,DL
006943FC  3A D3                     CMP DL,BL
006943FE  75 0E                     JNZ 0x0069440e
00694400  83 C0 02                  ADD EAX,0x2
00694403  83 C6 02                  ADD ESI,0x2
00694406  84 C9                     TEST CL,CL
00694408  75 DC                     JNZ 0x006943e6
LAB_0069440a:
0069440A  33 C0                     XOR EAX,EAX
0069440C  EB 05                     JMP 0x00694413
LAB_0069440e:
0069440E  1B C0                     SBB EAX,EAX
00694410  83 D8 FF                  SBB EAX,-0x1
LAB_00694413:
00694413  5E                        POP ESI
00694414  5B                        POP EBX
00694415  85 C0                     TEST EAX,EAX
00694417  75 09                     JNZ 0x00694422
00694419  B8 01 00 00 00            MOV EAX,0x1
0069441E  5D                        POP EBP
0069441F  C2 08 00                  RET 0x8
LAB_00694422:
00694422  33 C0                     XOR EAX,EAX
00694424  5D                        POP EBP
00694425  C2 08 00                  RET 0x8
