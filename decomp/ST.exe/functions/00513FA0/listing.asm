FUN_00513fa0:
00513FA0  55                        PUSH EBP
00513FA1  8B EC                     MOV EBP,ESP
00513FA3  83 EC 48                  SUB ESP,0x48
00513FA6  A1 F8 8D 85 00            MOV EAX,[0x00858df8]
00513FAB  56                        PUSH ESI
00513FAC  89 4D FC                  MOV dword ptr [EBP + -0x4],ECX
00513FAF  57                        PUSH EDI
00513FB0  8D 55 BC                  LEA EDX,[EBP + -0x44]
00513FB3  8D 4D B8                  LEA ECX,[EBP + -0x48]
00513FB6  6A 00                     PUSH 0x0
00513FB8  52                        PUSH EDX
00513FB9  89 45 B8                  MOV dword ptr [EBP + -0x48],EAX
00513FBC  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
00513FC2  E8 29 98 21 00            CALL 0x0072d7f0
00513FC7  8B F0                     MOV ESI,EAX
00513FC9  83 C4 08                  ADD ESP,0x8
00513FCC  85 F6                     TEST ESI,ESI
00513FCE  0F 85 22 02 00 00         JNZ 0x005141f6
00513FD4  8B 75 FC                  MOV ESI,dword ptr [EBP + -0x4]
00513FD7  8B 8E B3 01 00 00         MOV ECX,dword ptr [ESI + 0x1b3]
00513FDD  8B 96 B7 01 00 00         MOV EDX,dword ptr [ESI + 0x1b7]
00513FE3  8B 41 0C                  MOV EAX,dword ptr [ECX + 0xc]
00513FE6  8D 78 FF                  LEA EDI,[EAX + -0x1]
00513FE9  3B D7                     CMP EDX,EDI
00513FEB  0F 83 C6 01 00 00         JNC 0x005141b7
00513FF1  42                        INC EDX
00513FF2  3B D0                     CMP EDX,EAX
00513FF4  73 0D                     JNC 0x00514003
00513FF6  8B 41 08                  MOV EAX,dword ptr [ECX + 0x8]
00513FF9  8B 79 1C                  MOV EDI,dword ptr [ECX + 0x1c]
00513FFC  0F AF C2                  IMUL EAX,EDX
00513FFF  03 C7                     ADD EAX,EDI
00514001  EB 02                     JMP 0x00514005
LAB_00514003:
00514003  33 C0                     XOR EAX,EAX
LAB_00514005:
00514005  85 C0                     TEST EAX,EAX
00514007  0F 84 DB 01 00 00         JZ 0x005141e8
0051400D  89 96 B7 01 00 00         MOV dword ptr [ESI + 0x1b7],EDX
00514013  8A 48 08                  MOV CL,byte ptr [EAX + 0x8]
00514016  84 C9                     TEST CL,CL
00514018  75 10                     JNZ 0x0051402a
0051401A  8A 48 12                  MOV CL,byte ptr [EAX + 0x12]
0051401D  84 C9                     TEST CL,CL
0051401F  0F 85 BC 01 00 00         JNZ 0x005141e1
00514025  E9 AE 01 00 00            JMP 0x005141d8
LAB_0051402a:
0051402A  33 D2                     XOR EDX,EDX
0051402C  C6 86 A1 01 00 00 00      MOV byte ptr [ESI + 0x1a1],0x0
00514033  C7 86 A7 01 00 00 00 00 00 00  MOV dword ptr [ESI + 0x1a7],0x0
0051403D  C7 86 A3 01 00 00 00 00 00 00  MOV dword ptr [ESI + 0x1a3],0x0
00514047  8A 50 08                  MOV DL,byte ptr [EAX + 0x8]
0051404A  8B 78 0D                  MOV EDI,dword ptr [EAX + 0xd]
0051404D  8B 48 09                  MOV ECX,dword ptr [EAX + 0x9]
00514050  8B C2                     MOV EAX,EDX
00514052  83 F8 0C                  CMP EAX,0xc
00514055  0F 87 47 01 00 00         JA 0x005141a2
switchD_0051405b::switchD:
0051405B  FF 24 85 3C 42 51 00      JMP dword ptr [EAX*0x4 + 0x51423c]
switchD_0051405b::caseD_a:
00514062  8B CE                     MOV ECX,ESI
00514064  E8 9A 17 EF FF            CALL 0x00405803
00514069  8B CE                     MOV ECX,ESI
0051406B  E8 90 10 EF FF            CALL 0x00405100
00514070  8B 45 B8                  MOV EAX,dword ptr [EBP + -0x48]
00514073  A3 F8 8D 85 00            MOV [0x00858df8],EAX
00514078  5F                        POP EDI
00514079  5E                        POP ESI
0051407A  8B E5                     MOV ESP,EBP
0051407C  5D                        POP EBP
0051407D  C3                        RET
switchD_0051405b::caseD_7:
0051407E  8B CE                     MOV ECX,ESI
00514080  E8 79 D1 EE FF            CALL 0x004011fe
00514085  8B CE                     MOV ECX,ESI
00514087  E8 74 10 EF FF            CALL 0x00405100
0051408C  8B 45 B8                  MOV EAX,dword ptr [EBP + -0x48]
0051408F  A3 F8 8D 85 00            MOV [0x00858df8],EAX
00514094  5F                        POP EDI
00514095  5E                        POP ESI
00514096  8B E5                     MOV ESP,EBP
00514098  5D                        POP EBP
00514099  C3                        RET
switchD_0051405b::caseD_1:
0051409A  6A 00                     PUSH 0x0
0051409C  57                        PUSH EDI
0051409D  51                        PUSH ECX
0051409E  8B CE                     MOV ECX,ESI
005140A0  E8 E0 0D EF FF            CALL 0x00404e85
005140A5  8B CE                     MOV ECX,ESI
005140A7  E8 54 10 EF FF            CALL 0x00405100
005140AC  8B 45 B8                  MOV EAX,dword ptr [EBP + -0x48]
005140AF  A3 F8 8D 85 00            MOV [0x00858df8],EAX
005140B4  5F                        POP EDI
005140B5  5E                        POP ESI
005140B6  8B E5                     MOV ESP,EBP
005140B8  5D                        POP EBP
005140B9  C3                        RET
switchD_0051405b::caseD_6:
005140BA  6A 00                     PUSH 0x0
005140BC  51                        PUSH ECX
005140BD  8B CE                     MOV ECX,ESI
005140BF  E8 9D 1D EF FF            CALL 0x00405e61
005140C4  8B CE                     MOV ECX,ESI
005140C6  E8 35 10 EF FF            CALL 0x00405100
005140CB  8B 45 B8                  MOV EAX,dword ptr [EBP + -0x48]
005140CE  A3 F8 8D 85 00            MOV [0x00858df8],EAX
005140D3  5F                        POP EDI
005140D4  5E                        POP ESI
005140D5  8B E5                     MOV ESP,EBP
005140D7  5D                        POP EBP
005140D8  C3                        RET
switchD_0051405b::caseD_5:
005140D9  6A 00                     PUSH 0x0
005140DB  57                        PUSH EDI
005140DC  51                        PUSH ECX
005140DD  8B CE                     MOV ECX,ESI
005140DF  E8 4F E7 EE FF            CALL 0x00402833
005140E4  8B CE                     MOV ECX,ESI
005140E6  E8 15 10 EF FF            CALL 0x00405100
005140EB  8B 45 B8                  MOV EAX,dword ptr [EBP + -0x48]
005140EE  A3 F8 8D 85 00            MOV [0x00858df8],EAX
005140F3  5F                        POP EDI
005140F4  5E                        POP ESI
005140F5  8B E5                     MOV ESP,EBP
005140F7  5D                        POP EBP
005140F8  C3                        RET
switchD_0051405b::caseD_3:
005140F9  6A 00                     PUSH 0x0
005140FB  51                        PUSH ECX
005140FC  8B CE                     MOV ECX,ESI
005140FE  E8 75 F7 EE FF            CALL 0x00403878
00514103  8B CE                     MOV ECX,ESI
00514105  E8 F6 0F EF FF            CALL 0x00405100
0051410A  8B 45 B8                  MOV EAX,dword ptr [EBP + -0x48]
0051410D  A3 F8 8D 85 00            MOV [0x00858df8],EAX
00514112  5F                        POP EDI
00514113  5E                        POP ESI
00514114  8B E5                     MOV ESP,EBP
00514116  5D                        POP EBP
00514117  C3                        RET
switchD_0051405b::caseD_2:
00514118  6A 00                     PUSH 0x0
0051411A  57                        PUSH EDI
0051411B  51                        PUSH ECX
0051411C  8B CE                     MOV ECX,ESI
0051411E  E8 24 F6 EE FF            CALL 0x00403747
00514123  8B CE                     MOV ECX,ESI
00514125  E8 D6 0F EF FF            CALL 0x00405100
0051412A  8B 45 B8                  MOV EAX,dword ptr [EBP + -0x48]
0051412D  A3 F8 8D 85 00            MOV [0x00858df8],EAX
00514132  5F                        POP EDI
00514133  5E                        POP ESI
00514134  8B E5                     MOV ESP,EBP
00514136  5D                        POP EBP
00514137  C3                        RET
switchD_0051405b::caseD_4:
00514138  6A 00                     PUSH 0x0
0051413A  57                        PUSH EDI
0051413B  51                        PUSH ECX
0051413C  8B CE                     MOV ECX,ESI
0051413E  E8 9D 16 EF FF            CALL 0x004057e0
00514143  8B CE                     MOV ECX,ESI
00514145  E8 B6 0F EF FF            CALL 0x00405100
0051414A  8B 45 B8                  MOV EAX,dword ptr [EBP + -0x48]
0051414D  A3 F8 8D 85 00            MOV [0x00858df8],EAX
00514152  5F                        POP EDI
00514153  5E                        POP ESI
00514154  8B E5                     MOV ESP,EBP
00514156  5D                        POP EBP
00514157  C3                        RET
switchD_0051405b::caseD_b:
00514158  6A 00                     PUSH 0x0
0051415A  57                        PUSH EDI
0051415B  51                        PUSH ECX
0051415C  8B CE                     MOV ECX,ESI
0051415E  E8 49 EB EE FF            CALL 0x00402cac
00514163  8B CE                     MOV ECX,ESI
00514165  E8 96 0F EF FF            CALL 0x00405100
0051416A  8B 45 B8                  MOV EAX,dword ptr [EBP + -0x48]
0051416D  A3 F8 8D 85 00            MOV [0x00858df8],EAX
00514172  5F                        POP EDI
00514173  5E                        POP ESI
00514174  8B E5                     MOV ESP,EBP
00514176  5D                        POP EBP
00514177  C3                        RET
switchD_0051405b::caseD_c:
00514178  6A 00                     PUSH 0x0
0051417A  51                        PUSH ECX
0051417B  8B CE                     MOV ECX,ESI
0051417D  E8 3E FA EE FF            CALL 0x00403bc0
00514182  8B CE                     MOV ECX,ESI
00514184  E8 77 0F EF FF            CALL 0x00405100
00514189  8B 45 B8                  MOV EAX,dword ptr [EBP + -0x48]
0051418C  A3 F8 8D 85 00            MOV [0x00858df8],EAX
00514191  5F                        POP EDI
00514192  5E                        POP ESI
00514193  8B E5                     MOV ESP,EBP
00514195  5D                        POP EBP
00514196  C3                        RET
switchD_0051405b::caseD_8:
00514197  6A 00                     PUSH 0x0
00514199  57                        PUSH EDI
0051419A  51                        PUSH ECX
0051419B  8B CE                     MOV ECX,ESI
0051419D  E8 16 DF EE FF            CALL 0x004020b8
switchD_0051405b::caseD_9:
005141A2  8B CE                     MOV ECX,ESI
005141A4  E8 57 0F EF FF            CALL 0x00405100
005141A9  8B 45 B8                  MOV EAX,dword ptr [EBP + -0x48]
005141AC  A3 F8 8D 85 00            MOV [0x00858df8],EAX
005141B1  5F                        POP EDI
005141B2  5E                        POP ESI
005141B3  8B E5                     MOV ESP,EBP
005141B5  5D                        POP EBP
005141B6  C3                        RET
LAB_005141b7:
005141B7  3B D0                     CMP EDX,EAX
005141B9  73 0D                     JNC 0x005141c8
005141BB  8B 41 08                  MOV EAX,dword ptr [ECX + 0x8]
005141BE  8B 79 1C                  MOV EDI,dword ptr [ECX + 0x1c]
005141C1  0F AF C2                  IMUL EAX,EDX
005141C4  03 C7                     ADD EAX,EDI
005141C6  EB 02                     JMP 0x005141ca
LAB_005141c8:
005141C8  33 C0                     XOR EAX,EAX
LAB_005141ca:
005141CA  8A 48 08                  MOV CL,byte ptr [EAX + 0x8]
005141CD  84 C9                     TEST CL,CL
005141CF  75 17                     JNZ 0x005141e8
005141D1  8A 48 12                  MOV CL,byte ptr [EAX + 0x12]
005141D4  84 C9                     TEST CL,CL
005141D6  75 10                     JNZ 0x005141e8
LAB_005141d8:
005141D8  52                        PUSH EDX
005141D9  50                        PUSH EAX
005141DA  8B CE                     MOV ECX,ESI
005141DC  E8 81 11 EF FF            CALL 0x00405362
LAB_005141e1:
005141E1  8B CE                     MOV ECX,ESI
005141E3  E8 36 D8 EE FF            CALL 0x00401a1e
LAB_005141e8:
005141E8  8B 45 B8                  MOV EAX,dword ptr [EBP + -0x48]
005141EB  A3 F8 8D 85 00            MOV [0x00858df8],EAX
005141F0  5F                        POP EDI
005141F1  5E                        POP ESI
005141F2  8B E5                     MOV ESP,EBP
005141F4  5D                        POP EBP
005141F5  C3                        RET
LAB_005141f6:
005141F6  8B 4D B8                  MOV ECX,dword ptr [EBP + -0x48]
005141F9  68 D4 3A 7C 00            PUSH 0x7c3ad4
005141FE  68 CC 4C 7A 00            PUSH 0x7a4ccc
00514203  56                        PUSH ESI
00514204  6A 00                     PUSH 0x0
00514206  68 07 03 00 00            PUSH 0x307
0051420B  68 3C 38 7C 00            PUSH 0x7c383c
00514210  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
00514216  E8 B5 92 19 00            CALL 0x006ad4d0
0051421B  83 C4 18                  ADD ESP,0x18
0051421E  85 C0                     TEST EAX,EAX
00514220  74 01                     JZ 0x00514223
00514222  CC                        INT3
LAB_00514223:
00514223  68 07 03 00 00            PUSH 0x307
00514228  68 3C 38 7C 00            PUSH 0x7c383c
0051422D  6A 00                     PUSH 0x0
0051422F  56                        PUSH ESI
00514230  E8 0B 1C 19 00            CALL 0x006a5e40
00514235  5F                        POP EDI
00514236  5E                        POP ESI
00514237  8B E5                     MOV ESP,EBP
00514239  5D                        POP EBP
0051423A  C3                        RET
