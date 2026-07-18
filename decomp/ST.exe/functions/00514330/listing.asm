FUN_00514330:
00514330  55                        PUSH EBP
00514331  8B EC                     MOV EBP,ESP
00514333  83 EC 48                  SUB ESP,0x48
00514336  A1 F8 8D 85 00            MOV EAX,[0x00858df8]
0051433B  56                        PUSH ESI
0051433C  89 4D FC                  MOV dword ptr [EBP + -0x4],ECX
0051433F  57                        PUSH EDI
00514340  8D 55 BC                  LEA EDX,[EBP + -0x44]
00514343  8D 4D B8                  LEA ECX,[EBP + -0x48]
00514346  6A 00                     PUSH 0x0
00514348  52                        PUSH EDX
00514349  89 45 B8                  MOV dword ptr [EBP + -0x48],EAX
0051434C  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
00514352  E8 99 94 21 00            CALL 0x0072d7f0
00514357  8B F0                     MOV ESI,EAX
00514359  83 C4 08                  ADD ESP,0x8
0051435C  85 F6                     TEST ESI,ESI
0051435E  0F 85 72 01 00 00         JNZ 0x005144d6
00514364  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
00514367  8B 81 CF 01 00 00         MOV EAX,dword ptr [ECX + 0x1cf]
0051436D  85 C0                     TEST EAX,EAX
0051436F  0F 8E 53 01 00 00         JLE 0x005144c8
00514375  8B 91 CB 01 00 00         MOV EDX,dword ptr [ECX + 0x1cb]
0051437B  48                        DEC EAX
0051437C  89 81 CF 01 00 00         MOV dword ptr [ECX + 0x1cf],EAX
00514382  3B 42 0C                  CMP EAX,dword ptr [EDX + 0xc]
00514385  73 0B                     JNC 0x00514392
00514387  8B 72 08                  MOV ESI,dword ptr [EDX + 0x8]
0051438A  0F AF F0                  IMUL ESI,EAX
0051438D  03 72 1C                  ADD ESI,dword ptr [EDX + 0x1c]
00514390  EB 02                     JMP 0x00514394
LAB_00514392:
00514392  33 F6                     XOR ESI,ESI
LAB_00514394:
00514394  85 F6                     TEST ESI,ESI
00514396  0F 84 2C 01 00 00         JZ 0x005144c8
0051439C  33 D2                     XOR EDX,EDX
0051439E  C6 81 A1 01 00 00 00      MOV byte ptr [ECX + 0x1a1],0x0
005143A5  C7 81 A7 01 00 00 00 00 00 00  MOV dword ptr [ECX + 0x1a7],0x0
005143AF  C7 81 A3 01 00 00 00 00 00 00  MOV dword ptr [ECX + 0x1a3],0x0
005143B9  8A 16                     MOV DL,byte ptr [ESI]
005143BB  8B 7E 05                  MOV EDI,dword ptr [ESI + 0x5]
005143BE  8B 46 01                  MOV EAX,dword ptr [ESI + 0x1]
005143C1  83 FA 0C                  CMP EDX,0xc
005143C4  0F 87 FE 00 00 00         JA 0x005144c8
switchD_005143ca::switchD:
005143CA  FF 24 95 1C 45 51 00      JMP dword ptr [EDX*0x4 + 0x51451c]
switchD_005143ca::caseD_0:
005143D1  E8 F2 E5 EE FF            CALL 0x004029c8
005143D6  8B 45 B8                  MOV EAX,dword ptr [EBP + -0x48]
005143D9  A3 F8 8D 85 00            MOV [0x00858df8],EAX
005143DE  5F                        POP EDI
005143DF  5E                        POP ESI
005143E0  8B E5                     MOV ESP,EBP
005143E2  5D                        POP EBP
005143E3  C3                        RET
switchD_005143ca::caseD_a:
005143E4  E8 1A 14 EF FF            CALL 0x00405803
005143E9  8B 45 B8                  MOV EAX,dword ptr [EBP + -0x48]
005143EC  A3 F8 8D 85 00            MOV [0x00858df8],EAX
005143F1  5F                        POP EDI
005143F2  5E                        POP ESI
005143F3  8B E5                     MOV ESP,EBP
005143F5  5D                        POP EBP
005143F6  C3                        RET
switchD_005143ca::caseD_7:
005143F7  E8 02 CE EE FF            CALL 0x004011fe
005143FC  8B 45 B8                  MOV EAX,dword ptr [EBP + -0x48]
005143FF  A3 F8 8D 85 00            MOV [0x00858df8],EAX
00514404  5F                        POP EDI
00514405  5E                        POP ESI
00514406  8B E5                     MOV ESP,EBP
00514408  5D                        POP EBP
00514409  C3                        RET
switchD_005143ca::caseD_1:
0051440A  6A 00                     PUSH 0x0
0051440C  57                        PUSH EDI
0051440D  50                        PUSH EAX
0051440E  E8 72 0A EF FF            CALL 0x00404e85
00514413  8B 45 B8                  MOV EAX,dword ptr [EBP + -0x48]
00514416  A3 F8 8D 85 00            MOV [0x00858df8],EAX
0051441B  5F                        POP EDI
0051441C  5E                        POP ESI
0051441D  8B E5                     MOV ESP,EBP
0051441F  5D                        POP EBP
00514420  C3                        RET
switchD_005143ca::caseD_6:
00514421  6A 00                     PUSH 0x0
00514423  50                        PUSH EAX
00514424  E8 38 1A EF FF            CALL 0x00405e61
00514429  8B 45 B8                  MOV EAX,dword ptr [EBP + -0x48]
0051442C  A3 F8 8D 85 00            MOV [0x00858df8],EAX
00514431  5F                        POP EDI
00514432  5E                        POP ESI
00514433  8B E5                     MOV ESP,EBP
00514435  5D                        POP EBP
00514436  C3                        RET
switchD_005143ca::caseD_5:
00514437  6A 00                     PUSH 0x0
00514439  57                        PUSH EDI
0051443A  50                        PUSH EAX
0051443B  E8 F3 E3 EE FF            CALL 0x00402833
00514440  8B 45 B8                  MOV EAX,dword ptr [EBP + -0x48]
00514443  A3 F8 8D 85 00            MOV [0x00858df8],EAX
00514448  5F                        POP EDI
00514449  5E                        POP ESI
0051444A  8B E5                     MOV ESP,EBP
0051444C  5D                        POP EBP
0051444D  C3                        RET
switchD_005143ca::caseD_3:
0051444E  6A 00                     PUSH 0x0
00514450  50                        PUSH EAX
00514451  E8 22 F4 EE FF            CALL 0x00403878
00514456  8B 45 B8                  MOV EAX,dword ptr [EBP + -0x48]
00514459  A3 F8 8D 85 00            MOV [0x00858df8],EAX
0051445E  5F                        POP EDI
0051445F  5E                        POP ESI
00514460  8B E5                     MOV ESP,EBP
00514462  5D                        POP EBP
00514463  C3                        RET
switchD_005143ca::caseD_2:
00514464  6A 00                     PUSH 0x0
00514466  57                        PUSH EDI
00514467  50                        PUSH EAX
00514468  E8 DA F2 EE FF            CALL 0x00403747
0051446D  8B 45 B8                  MOV EAX,dword ptr [EBP + -0x48]
00514470  A3 F8 8D 85 00            MOV [0x00858df8],EAX
00514475  5F                        POP EDI
00514476  5E                        POP ESI
00514477  8B E5                     MOV ESP,EBP
00514479  5D                        POP EBP
0051447A  C3                        RET
switchD_005143ca::caseD_4:
0051447B  6A 00                     PUSH 0x0
0051447D  57                        PUSH EDI
0051447E  50                        PUSH EAX
0051447F  E8 5C 13 EF FF            CALL 0x004057e0
00514484  8B 45 B8                  MOV EAX,dword ptr [EBP + -0x48]
00514487  A3 F8 8D 85 00            MOV [0x00858df8],EAX
0051448C  5F                        POP EDI
0051448D  5E                        POP ESI
0051448E  8B E5                     MOV ESP,EBP
00514490  5D                        POP EBP
00514491  C3                        RET
switchD_005143ca::caseD_b:
00514492  6A 00                     PUSH 0x0
00514494  57                        PUSH EDI
00514495  50                        PUSH EAX
00514496  E8 11 E8 EE FF            CALL 0x00402cac
0051449B  8B 45 B8                  MOV EAX,dword ptr [EBP + -0x48]
0051449E  A3 F8 8D 85 00            MOV [0x00858df8],EAX
005144A3  5F                        POP EDI
005144A4  5E                        POP ESI
005144A5  8B E5                     MOV ESP,EBP
005144A7  5D                        POP EBP
005144A8  C3                        RET
switchD_005143ca::caseD_c:
005144A9  6A 00                     PUSH 0x0
005144AB  50                        PUSH EAX
005144AC  E8 0F F7 EE FF            CALL 0x00403bc0
005144B1  8B 45 B8                  MOV EAX,dword ptr [EBP + -0x48]
005144B4  A3 F8 8D 85 00            MOV [0x00858df8],EAX
005144B9  5F                        POP EDI
005144BA  5E                        POP ESI
005144BB  8B E5                     MOV ESP,EBP
005144BD  5D                        POP EBP
005144BE  C3                        RET
switchD_005143ca::caseD_8:
005144BF  6A 00                     PUSH 0x0
005144C1  57                        PUSH EDI
005144C2  50                        PUSH EAX
005144C3  E8 F0 DB EE FF            CALL 0x004020b8
switchD_005143ca::caseD_9:
005144C8  8B 45 B8                  MOV EAX,dword ptr [EBP + -0x48]
005144CB  A3 F8 8D 85 00            MOV [0x00858df8],EAX
005144D0  5F                        POP EDI
005144D1  5E                        POP ESI
005144D2  8B E5                     MOV ESP,EBP
005144D4  5D                        POP EBP
005144D5  C3                        RET
LAB_005144d6:
005144D6  8B 4D B8                  MOV ECX,dword ptr [EBP + -0x48]
005144D9  68 F0 3A 7C 00            PUSH 0x7c3af0
005144DE  68 CC 4C 7A 00            PUSH 0x7a4ccc
005144E3  56                        PUSH ESI
005144E4  6A 00                     PUSH 0x0
005144E6  68 17 03 00 00            PUSH 0x317
005144EB  68 3C 38 7C 00            PUSH 0x7c383c
005144F0  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
005144F6  E8 D5 8F 19 00            CALL 0x006ad4d0
005144FB  83 C4 18                  ADD ESP,0x18
005144FE  85 C0                     TEST EAX,EAX
00514500  74 01                     JZ 0x00514503
00514502  CC                        INT3
LAB_00514503:
00514503  68 17 03 00 00            PUSH 0x317
00514508  68 3C 38 7C 00            PUSH 0x7c383c
0051450D  6A 00                     PUSH 0x0
0051450F  56                        PUSH ESI
00514510  E8 2B 19 19 00            CALL 0x006a5e40
00514515  5F                        POP EDI
00514516  5E                        POP ESI
00514517  8B E5                     MOV ESP,EBP
00514519  5D                        POP EBP
0051451A  C3                        RET
