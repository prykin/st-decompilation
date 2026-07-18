FUN_007498ec:
007498EC  55                        PUSH EBP
007498ED  8B EC                     MOV EBP,ESP
007498EF  83 EC 10                  SUB ESP,0x10
007498F2  8B 4D 0C                  MOV ECX,dword ptr [EBP + 0xc]
007498F5  56                        PUSH ESI
007498F6  57                        PUSH EDI
007498F7  8B 41 10                  MOV EAX,dword ptr [ECX + 0x10]
007498FA  85 C0                     TEST EAX,EAX
007498FC  74 26                     JZ 0x00749924
007498FE  83 F8 03                  CMP EAX,0x3
00749901  74 21                     JZ 0x00749924
00749903  66 83 65 F4 00            AND word ptr [EBP + -0xc],0x0
00749908  66 C7 45 F6 10 00         MOV word ptr [EBP + -0xa],0x10
0074990E  C7 45 F8 80 00 00 AA      MOV dword ptr [EBP + -0x8],0xaa000080
00749915  C7 45 FC 00 38 9B 71      MOV dword ptr [EBP + -0x4],0x719b3800
0074991C  89 45 F0                  MOV dword ptr [EBP + -0x10],EAX
0074991F  8D 75 F0                  LEA ESI,[EBP + -0x10]
00749922  EB 56                     JMP 0x0074997a
LAB_00749924:
00749924  0F B7 41 0E               MOVZX EAX,word ptr [ECX + 0xe]
00749928  48                        DEC EAX
00749929  74 4A                     JZ 0x00749975
0074992B  83 E8 03                  SUB EAX,0x3
0074992E  74 3E                     JZ 0x0074996e
00749930  83 E8 04                  SUB EAX,0x4
00749933  74 32                     JZ 0x00749967
00749935  83 E8 08                  SUB EAX,0x8
00749938  74 1F                     JZ 0x00749959
0074993A  83 E8 08                  SUB EAX,0x8
0074993D  74 13                     JZ 0x00749952
0074993F  83 E8 08                  SUB EAX,0x8
00749942  74 07                     JZ 0x0074994b
00749944  BE 68 E3 79 00            MOV ESI,0x79e368
00749949  EB 2F                     JMP 0x0074997a
LAB_0074994b:
0074994B  BE C0 16 7A 00            MOV ESI,0x7a16c0
00749950  EB 28                     JMP 0x0074997a
LAB_00749952:
00749952  BE D0 16 7A 00            MOV ESI,0x7a16d0
00749957  EB 21                     JMP 0x0074997a
LAB_00749959:
00749959  8D 45 F0                  LEA EAX,[EBP + -0x10]
0074995C  51                        PUSH ECX
0074995D  50                        PUSH EAX
0074995E  E8 19 FF FF FF            CALL 0x0074987c
00749963  8B F0                     MOV ESI,EAX
00749965  EB 13                     JMP 0x0074997a
LAB_00749967:
00749967  BE E0 16 7A 00            MOV ESI,0x7a16e0
0074996C  EB 0C                     JMP 0x0074997a
LAB_0074996e:
0074996E  BE A0 1B 7A 00            MOV ESI,0x7a1ba0
00749973  EB 05                     JMP 0x0074997a
LAB_00749975:
00749975  BE B0 1B 7A 00            MOV ESI,0x7a1bb0
LAB_0074997a:
0074997A  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
0074997D  8B F8                     MOV EDI,EAX
0074997F  A5                        MOVSD ES:EDI,ESI
00749980  A5                        MOVSD ES:EDI,ESI
00749981  A5                        MOVSD ES:EDI,ESI
00749982  A5                        MOVSD ES:EDI,ESI
00749983  5F                        POP EDI
00749984  5E                        POP ESI
00749985  C9                        LEAVE
00749986  C2 08 00                  RET 0x8
