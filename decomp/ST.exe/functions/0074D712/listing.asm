FUN_0074d712:
0074D712  55                        PUSH EBP
0074D713  8B EC                     MOV EBP,ESP
0074D715  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
0074D718  56                        PUSH ESI
0074D719  39 45 08                  CMP dword ptr [EBP + 0x8],EAX
0074D71C  57                        PUSH EDI
0074D71D  76 1F                     JBE 0x0074d73e
0074D71F  8B 4D 10                  MOV ECX,dword ptr [EBP + 0x10]
0074D722  03 C8                     ADD ECX,EAX
0074D724  39 4D 08                  CMP dword ptr [EBP + 0x8],ECX
0074D727  73 15                     JNC 0x0074d73e
0074D729  8B 75 0C                  MOV ESI,dword ptr [EBP + 0xc]
0074D72C  8B 7D 08                  MOV EDI,dword ptr [EBP + 0x8]
0074D72F  8B 4D 10                  MOV ECX,dword ptr [EBP + 0x10]
0074D732  FD                        STD
0074D733  03 F1                     ADD ESI,ECX
0074D735  03 F9                     ADD EDI,ECX
0074D737  4E                        DEC ESI
0074D738  4F                        DEC EDI
0074D739  F3 A4                     MOVSB.REP ES:EDI,ESI
0074D73B  FC                        CLD
0074D73C  EB 1A                     JMP 0x0074d758
LAB_0074d73e:
0074D73E  8B 75 0C                  MOV ESI,dword ptr [EBP + 0xc]
0074D741  8B 7D 08                  MOV EDI,dword ptr [EBP + 0x8]
0074D744  8B 4D 10                  MOV ECX,dword ptr [EBP + 0x10]
0074D747  FC                        CLD
0074D748  8B D1                     MOV EDX,ECX
0074D74A  83 E2 03                  AND EDX,0x3
0074D74D  C1 E9 02                  SHR ECX,0x2
0074D750  F3 A5                     MOVSD.REP ES:EDI,ESI
0074D752  0B CA                     OR ECX,EDX
0074D754  74 02                     JZ 0x0074d758
0074D756  F3 A4                     MOVSB.REP ES:EDI,ESI
LAB_0074d758:
0074D758  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
0074D75B  5F                        POP EDI
0074D75C  5E                        POP ESI
0074D75D  5D                        POP EBP
0074D75E  C2 0C 00                  RET 0xc
