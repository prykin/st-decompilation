FUN_006324c0:
006324C0  55                        PUSH EBP
006324C1  8B EC                     MOV EBP,ESP
006324C3  83 EC 0C                  SUB ESP,0xc
006324C6  56                        PUSH ESI
006324C7  8B F1                     MOV ESI,ECX
006324C9  8D 45 F4                  LEA EAX,[EBP + -0xc]
006324CC  8D 4D F8                  LEA ECX,[EBP + -0x8]
006324CF  50                        PUSH EAX
006324D0  8D 55 FC                  LEA EDX,[EBP + -0x4]
006324D3  51                        PUSH ECX
006324D4  8B 4D 0C                  MOV ECX,dword ptr [EBP + 0xc]
006324D7  8D 45 0C                  LEA EAX,[EBP + 0xc]
006324DA  52                        PUSH EDX
006324DB  50                        PUSH EAX
006324DC  51                        PUSH ECX
006324DD  8B CE                     MOV ECX,ESI
006324DF  E8 32 07 DD FF            CALL 0x00402c16
006324E4  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
006324E7  83 F8 04                  CMP EAX,0x4
006324EA  0F 87 F0 00 00 00         JA 0x006325e0
switchD_006324f0::switchD:
006324F0  FF 24 85 E8 25 63 00      JMP dword ptr [EAX*0x4 + 0x6325e8]
switchD_006324f0::caseD_0:
006324F7  8B 15 40 1A 7D 00         MOV EDX,dword ptr [0x007d1a40]
006324FD  A1 3C 1A 7D 00            MOV EAX,[0x007d1a3c]
00632502  8B 0D 38 1A 7D 00         MOV ECX,dword ptr [0x007d1a38]
00632508  68 38 1A 7D 00            PUSH 0x7d1a38
0063250D  6A 00                     PUSH 0x0
0063250F  52                        PUSH EDX
00632510  50                        PUSH EAX
00632511  51                        PUSH ECX
00632512  8B CE                     MOV ECX,ESI
00632514  E8 79 17 DD FF            CALL 0x00403c92
00632519  5E                        POP ESI
0063251A  8B E5                     MOV ESP,EBP
0063251C  5D                        POP EBP
0063251D  C2 08 00                  RET 0x8
switchD_006324f0::caseD_1:
00632520  8B 15 90 1A 7D 00         MOV EDX,dword ptr [0x007d1a90]
00632526  A1 8C 1A 7D 00            MOV EAX,[0x007d1a8c]
0063252B  8B 0D 88 1A 7D 00         MOV ECX,dword ptr [0x007d1a88]
00632531  68 88 1A 7D 00            PUSH 0x7d1a88
00632536  6A 01                     PUSH 0x1
00632538  52                        PUSH EDX
00632539  50                        PUSH EAX
0063253A  51                        PUSH ECX
0063253B  8B CE                     MOV ECX,ESI
0063253D  E8 50 17 DD FF            CALL 0x00403c92
00632542  5E                        POP ESI
00632543  8B E5                     MOV ESP,EBP
00632545  5D                        POP EBP
00632546  C2 08 00                  RET 0x8
switchD_006324f0::caseD_2:
00632549  8B 55 0C                  MOV EDX,dword ptr [EBP + 0xc]
0063254C  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
0063254F  8B 4D F8                  MOV ECX,dword ptr [EBP + -0x8]
00632552  89 15 E8 1A 7D 00         MOV dword ptr [0x007d1ae8],EDX
00632558  8B 55 F4                  MOV EDX,dword ptr [EBP + -0xc]
0063255B  A3 EC 1A 7D 00            MOV [0x007d1aec],EAX
00632560  A1 E0 1A 7D 00            MOV EAX,[0x007d1ae0]
00632565  89 0D F0 1A 7D 00         MOV dword ptr [0x007d1af0],ECX
0063256B  8B 0D DC 1A 7D 00         MOV ECX,dword ptr [0x007d1adc]
00632571  68 D8 1A 7D 00            PUSH 0x7d1ad8
00632576  89 15 24 1B 7D 00         MOV dword ptr [0x007d1b24],EDX
0063257C  8B 15 D8 1A 7D 00         MOV EDX,dword ptr [0x007d1ad8]
00632582  6A 02                     PUSH 0x2
00632584  50                        PUSH EAX
00632585  51                        PUSH ECX
00632586  52                        PUSH EDX
00632587  8B CE                     MOV ECX,ESI
00632589  E8 04 17 DD FF            CALL 0x00403c92
0063258E  5E                        POP ESI
0063258F  8B E5                     MOV ESP,EBP
00632591  5D                        POP EBP
00632592  C2 08 00                  RET 0x8
switchD_006324f0::caseD_3:
00632595  A1 30 1B 7D 00            MOV EAX,[0x007d1b30]
0063259A  8B 0D 2C 1B 7D 00         MOV ECX,dword ptr [0x007d1b2c]
006325A0  8B 15 28 1B 7D 00         MOV EDX,dword ptr [0x007d1b28]
006325A6  68 28 1B 7D 00            PUSH 0x7d1b28
006325AB  6A 03                     PUSH 0x3
006325AD  50                        PUSH EAX
006325AE  51                        PUSH ECX
006325AF  52                        PUSH EDX
006325B0  8B CE                     MOV ECX,ESI
006325B2  E8 DB 16 DD FF            CALL 0x00403c92
006325B7  5E                        POP ESI
006325B8  8B E5                     MOV ESP,EBP
006325BA  5D                        POP EBP
006325BB  C2 08 00                  RET 0x8
switchD_006324f0::caseD_4:
006325BE  A1 68 1B 7D 00            MOV EAX,[0x007d1b68]
006325C3  8B 0D 64 1B 7D 00         MOV ECX,dword ptr [0x007d1b64]
006325C9  8B 15 60 1B 7D 00         MOV EDX,dword ptr [0x007d1b60]
006325CF  68 60 1B 7D 00            PUSH 0x7d1b60
006325D4  6A 04                     PUSH 0x4
006325D6  50                        PUSH EAX
006325D7  51                        PUSH ECX
006325D8  52                        PUSH EDX
006325D9  8B CE                     MOV ECX,ESI
006325DB  E8 B2 16 DD FF            CALL 0x00403c92
switchD_006324f0::default:
006325E0  5E                        POP ESI
006325E1  8B E5                     MOV ESP,EBP
006325E3  5D                        POP EBP
006325E4  C2 08 00                  RET 0x8
