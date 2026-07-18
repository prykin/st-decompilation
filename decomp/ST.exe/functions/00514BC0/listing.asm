FUN_00514bc0:
00514BC0  55                        PUSH EBP
00514BC1  8B EC                     MOV EBP,ESP
00514BC3  83 EC 0C                  SUB ESP,0xc
00514BC6  A1 18 C1 85 00            MOV EAX,[0x0085c118]
00514BCB  53                        PUSH EBX
00514BCC  56                        PUSH ESI
00514BCD  8B F1                     MOV ESI,ECX
00514BCF  8B 08                     MOV ECX,dword ptr [EAX]
00514BD1  33 DB                     XOR EBX,EBX
00514BD3  3B CB                     CMP ECX,EBX
00514BD5  89 5D FC                  MOV dword ptr [EBP + -0x4],EBX
00514BD8  89 5D F8                  MOV dword ptr [EBP + -0x8],EBX
00514BDB  0F 86 06 02 00 00         JBE 0x00514de7
00514BE1  57                        PUSH EDI
LAB_00514be2:
00514BE2  8B 8E C7 01 00 00         MOV ECX,dword ptr [ESI + 0x1c7]
00514BE8  8B C3                     MOV EAX,EBX
00514BEA  C1 E0 04                  SHL EAX,0x4
00514BED  03 C3                     ADD EAX,EBX
00514BEF  89 45 F4                  MOV dword ptr [EBP + -0xc],EAX
00514BF2  03 C1                     ADD EAX,ECX
00514BF4  8A 50 08                  MOV DL,byte ptr [EAX + 0x8]
00514BF7  8B FA                     MOV EDI,EDX
00514BF9  81 E7 FF 00 00 00         AND EDI,0xff
00514BFF  8D 4F FF                  LEA ECX,[EDI + -0x1]
00514C02  83 F9 0B                  CMP ECX,0xb
00514C05  0F 87 EE 00 00 00         JA 0x00514cf9
00514C0B  33 DB                     XOR EBX,EBX
00514C0D  8A 99 FC 4D 51 00         MOV BL,byte ptr [ECX + 0x514dfc]
switchD_00514c13::switchD:
00514C13  FF 24 9D F0 4D 51 00      JMP dword ptr [EBX*0x4 + 0x514df0]
switchD_00514c13::caseD_1:
00514C1A  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
00514C1D  8B 58 09                  MOV EBX,dword ptr [EAX + 0x9]
00514C20  3B D9                     CMP EBX,ECX
00514C22  0F 85 CE 00 00 00         JNZ 0x00514cf6
00514C28  80 FA 03                  CMP DL,0x3
00514C2B  74 0E                     JZ 0x00514c3b
00514C2D  8B 55 0C                  MOV EDX,dword ptr [EBP + 0xc]
00514C30  8B 48 0D                  MOV ECX,dword ptr [EAX + 0xd]
00514C33  3B CA                     CMP ECX,EDX
00514C35  0F 85 BB 00 00 00         JNZ 0x00514cf6
LAB_00514c3b:
00514C3B  C7 45 FC 01 00 00 00      MOV dword ptr [EBP + -0x4],0x1
00514C42  E9 BD 00 00 00            JMP 0x00514d04
switchD_00514c13::caseD_c:
00514C47  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
00514C4A  8D 8A 0E FF FF FF         LEA ECX,[EDX + 0xffffff0e]
00514C50  83 F9 09                  CMP ECX,0x9
00514C53  0F 87 8F 00 00 00         JA 0x00514ce8
00514C59  33 DB                     XOR EBX,EBX
00514C5B  8A 99 18 4E 51 00         MOV BL,byte ptr [ECX + 0x514e18]
switchD_00514c61::switchD:
00514C61  FF 24 9D 08 4E 51 00      JMP dword ptr [EBX*0x4 + 0x514e08]
switchD_00514c61::caseD_f2:
00514C68  8B 48 09                  MOV ECX,dword ptr [EAX + 0x9]
00514C6B  81 F9 F2 00 00 00         CMP ECX,0xf2
00514C71  74 18                     JZ 0x00514c8b
00514C73  81 F9 F3 00 00 00         CMP ECX,0xf3
00514C79  74 10                     JZ 0x00514c8b
00514C7B  81 F9 F4 00 00 00         CMP ECX,0xf4
00514C81  74 08                     JZ 0x00514c8b
00514C83  81 F9 F5 00 00 00         CMP ECX,0xf5
00514C89  75 6B                     JNZ 0x00514cf6
LAB_00514c8b:
00514C8B  C7 45 FC 01 00 00 00      MOV dword ptr [EBP + -0x4],0x1
00514C92  EB 70                     JMP 0x00514d04
switchD_00514c61::caseD_f8:
00514C94  8B 48 09                  MOV ECX,dword ptr [EAX + 0x9]
00514C97  81 F9 F8 00 00 00         CMP ECX,0xf8
00514C9D  74 08                     JZ 0x00514ca7
00514C9F  81 F9 F9 00 00 00         CMP ECX,0xf9
00514CA5  75 4F                     JNZ 0x00514cf6
LAB_00514ca7:
00514CA7  C7 45 FC 01 00 00 00      MOV dword ptr [EBP + -0x4],0x1
00514CAE  EB 54                     JMP 0x00514d04
switchD_00514c61::caseD_f6:
00514CB0  8B 48 09                  MOV ECX,dword ptr [EAX + 0x9]
00514CB3  81 F9 F6 00 00 00         CMP ECX,0xf6
00514CB9  74 08                     JZ 0x00514cc3
00514CBB  81 F9 F7 00 00 00         CMP ECX,0xf7
00514CC1  75 33                     JNZ 0x00514cf6
LAB_00514cc3:
00514CC3  C7 45 FC 01 00 00 00      MOV dword ptr [EBP + -0x4],0x1
00514CCA  EB 38                     JMP 0x00514d04
switchD_00514c61::caseD_fa:
00514CCC  8B 48 09                  MOV ECX,dword ptr [EAX + 0x9]
00514CCF  81 F9 FA 00 00 00         CMP ECX,0xfa
00514CD5  74 08                     JZ 0x00514cdf
00514CD7  81 F9 FB 00 00 00         CMP ECX,0xfb
00514CDD  75 17                     JNZ 0x00514cf6
LAB_00514cdf:
00514CDF  C7 45 FC 01 00 00 00      MOV dword ptr [EBP + -0x4],0x1
00514CE6  EB 1C                     JMP 0x00514d04
switchD_00514c61::default:
00514CE8  39 50 09                  CMP dword ptr [EAX + 0x9],EDX
00514CEB  75 09                     JNZ 0x00514cf6
00514CED  C7 45 FC 01 00 00 00      MOV dword ptr [EBP + -0x4],0x1
00514CF4  EB 0E                     JMP 0x00514d04
switchD_00514c13::caseD_5:
00514CF6  8B 5D F8                  MOV EBX,dword ptr [EBP + -0x8]
switchD_00514c13::default:
00514CF9  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
00514CFC  85 C9                     TEST ECX,ECX
00514CFE  0F 84 D0 00 00 00         JZ 0x00514dd4
LAB_00514d04:
00514D04  8B 48 0D                  MOV ECX,dword ptr [EAX + 0xd]
00514D07  8B 40 09                  MOV EAX,dword ptr [EAX + 0x9]
00514D0A  83 FF 0C                  CMP EDI,0xc
00514D0D  0F 87 89 00 00 00         JA 0x00514d9c
switchD_00514d13::switchD:
00514D13  FF 24 BD 24 4E 51 00      JMP dword ptr [EDI*0x4 + 0x514e24]
switchD_00514d13::caseD_a:
00514D1A  8B CE                     MOV ECX,ESI
00514D1C  E8 E2 0A EF FF            CALL 0x00405803
00514D21  EB 79                     JMP 0x00514d9c
switchD_00514d13::caseD_7:
00514D23  8B CE                     MOV ECX,ESI
00514D25  E8 D4 C4 EE FF            CALL 0x004011fe
00514D2A  EB 70                     JMP 0x00514d9c
switchD_00514d13::caseD_1:
00514D2C  6A 00                     PUSH 0x0
00514D2E  51                        PUSH ECX
00514D2F  50                        PUSH EAX
00514D30  8B CE                     MOV ECX,ESI
00514D32  E8 4E 01 EF FF            CALL 0x00404e85
00514D37  EB 63                     JMP 0x00514d9c
switchD_00514d13::caseD_6:
00514D39  6A 00                     PUSH 0x0
00514D3B  50                        PUSH EAX
00514D3C  8B CE                     MOV ECX,ESI
00514D3E  E8 1E 11 EF FF            CALL 0x00405e61
00514D43  EB 57                     JMP 0x00514d9c
switchD_00514d13::caseD_5:
00514D45  6A 00                     PUSH 0x0
00514D47  51                        PUSH ECX
00514D48  50                        PUSH EAX
00514D49  8B CE                     MOV ECX,ESI
00514D4B  E8 E3 DA EE FF            CALL 0x00402833
00514D50  EB 4A                     JMP 0x00514d9c
switchD_00514d13::caseD_3:
00514D52  6A 00                     PUSH 0x0
00514D54  50                        PUSH EAX
00514D55  8B CE                     MOV ECX,ESI
00514D57  E8 1C EB EE FF            CALL 0x00403878
00514D5C  EB 3E                     JMP 0x00514d9c
switchD_00514d13::caseD_2:
00514D5E  6A 00                     PUSH 0x0
00514D60  51                        PUSH ECX
00514D61  50                        PUSH EAX
00514D62  8B CE                     MOV ECX,ESI
00514D64  E8 DE E9 EE FF            CALL 0x00403747
00514D69  EB 31                     JMP 0x00514d9c
switchD_00514d13::caseD_4:
00514D6B  6A 00                     PUSH 0x0
00514D6D  51                        PUSH ECX
00514D6E  50                        PUSH EAX
00514D6F  8B CE                     MOV ECX,ESI
00514D71  E8 6A 0A EF FF            CALL 0x004057e0
00514D76  EB 24                     JMP 0x00514d9c
switchD_00514d13::caseD_b:
00514D78  6A 00                     PUSH 0x0
00514D7A  51                        PUSH ECX
00514D7B  50                        PUSH EAX
00514D7C  8B CE                     MOV ECX,ESI
00514D7E  E8 29 DF EE FF            CALL 0x00402cac
00514D83  EB 17                     JMP 0x00514d9c
switchD_00514d13::caseD_c:
00514D85  6A 00                     PUSH 0x0
00514D87  50                        PUSH EAX
00514D88  8B CE                     MOV ECX,ESI
00514D8A  E8 31 EE EE FF            CALL 0x00403bc0
00514D8F  EB 0B                     JMP 0x00514d9c
switchD_00514d13::caseD_8:
00514D91  6A 00                     PUSH 0x0
00514D93  51                        PUSH ECX
00514D94  50                        PUSH EAX
00514D95  8B CE                     MOV ECX,ESI
00514D97  E8 1C D3 EE FF            CALL 0x004020b8
switchD_00514d13::caseD_0:
00514D9C  8B 86 C7 01 00 00         MOV EAX,dword ptr [ESI + 0x1c7]
00514DA2  8B 4D F4                  MOV ECX,dword ptr [EBP + -0xc]
00514DA5  03 C1                     ADD EAX,ECX
00514DA7  8B CE                     MOV ECX,ESI
00514DA9  8B 50 0D                  MOV EDX,dword ptr [EAX + 0xd]
00514DAC  8B 40 09                  MOV EAX,dword ptr [EAX + 0x9]
00514DAF  52                        PUSH EDX
00514DB0  50                        PUSH EAX
00514DB1  E8 0F 07 EF FF            CALL 0x004054c5
00514DB6  8B CE                     MOV ECX,ESI
00514DB8  E8 43 03 EF FF            CALL 0x00405100
00514DBD  8B 0D 18 C1 85 00         MOV ECX,dword ptr [0x0085c118]
00514DC3  8B 06                     MOV EAX,dword ptr [ESI]
00514DC5  6A 01                     PUSH 0x1
00514DC7  8B 11                     MOV EDX,dword ptr [ECX]
00514DC9  8B CE                     MOV ECX,ESI
00514DCB  89 55 F8                  MOV dword ptr [EBP + -0x8],EDX
00514DCE  FF 50 18                  CALL dword ptr [EAX + 0x18]
00514DD1  8B 5D F8                  MOV EBX,dword ptr [EBP + -0x8]
LAB_00514dd4:
00514DD4  8B 0D 18 C1 85 00         MOV ECX,dword ptr [0x0085c118]
00514DDA  43                        INC EBX
00514DDB  89 5D F8                  MOV dword ptr [EBP + -0x8],EBX
00514DDE  3B 19                     CMP EBX,dword ptr [ECX]
00514DE0  0F 82 FC FD FF FF         JC 0x00514be2
00514DE6  5F                        POP EDI
LAB_00514de7:
00514DE7  5E                        POP ESI
00514DE8  5B                        POP EBX
00514DE9  8B E5                     MOV ESP,EBP
00514DEB  5D                        POP EBP
00514DEC  C2 08 00                  RET 0x8
