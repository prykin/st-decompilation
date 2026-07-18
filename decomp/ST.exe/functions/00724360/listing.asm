FUN_00724360:
00724360  55                        PUSH EBP
00724361  8B EC                     MOV EBP,ESP
00724363  83 EC 20                  SUB ESP,0x20
00724366  56                        PUSH ESI
00724367  8B F1                     MOV ESI,ECX
00724369  57                        PUSH EDI
0072436A  8B 46 48                  MOV EAX,dword ptr [ESI + 0x48]
0072436D  85 C0                     TEST EAX,EAX
0072436F  75 5C                     JNZ 0x007243cd
00724371  8B 46 24                  MOV EAX,dword ptr [ESI + 0x24]
00724374  C7 45 EC 02 00 00 80      MOV dword ptr [EBP + -0x14],0x80000002
0072437B  85 C0                     TEST EAX,EAX
0072437D  C7 45 F0 20 00 00 00      MOV dword ptr [EBP + -0x10],0x20
00724384  C7 45 F4 00 00 00 00      MOV dword ptr [EBP + -0xc],0x0
0072438B  74 0C                     JZ 0x00724399
0072438D  89 45 E8                  MOV dword ptr [EBP + -0x18],EAX
00724390  8D 45 E0                  LEA EAX,[EBP + -0x20]
00724393  50                        PUSH EAX
00724394  E8 C7 1C FC FF            CALL 0x006e6060
LAB_00724399:
00724399  8B 46 1C                  MOV EAX,dword ptr [ESI + 0x1c]
0072439C  85 C0                     TEST EAX,EAX
0072439E  74 0E                     JZ 0x007243ae
007243A0  8D 4D E0                  LEA ECX,[EBP + -0x20]
007243A3  89 45 E8                  MOV dword ptr [EBP + -0x18],EAX
007243A6  51                        PUSH ECX
007243A7  8B CE                     MOV ECX,ESI
007243A9  E8 B2 1C FC FF            CALL 0x006e6060
LAB_007243ae:
007243AE  8B 46 20                  MOV EAX,dword ptr [ESI + 0x20]
007243B1  85 C0                     TEST EAX,EAX
007243B3  0F 84 E3 00 00 00         JZ 0x0072449c
007243B9  8D 55 E0                  LEA EDX,[EBP + -0x20]
007243BC  8B CE                     MOV ECX,ESI
007243BE  52                        PUSH EDX
007243BF  89 45 E8                  MOV dword ptr [EBP + -0x18],EAX
007243C2  E8 99 1C FC FF            CALL 0x006e6060
007243C7  5F                        POP EDI
007243C8  5E                        POP ESI
007243C9  8B E5                     MOV ESP,EBP
007243CB  5D                        POP EBP
007243CC  C3                        RET
LAB_007243cd:
007243CD  8B 46 24                  MOV EAX,dword ptr [ESI + 0x24]
007243D0  BF 02 00 00 80            MOV EDI,0x80000002
007243D5  85 C0                     TEST EAX,EAX
007243D7  74 1F                     JZ 0x007243f8
007243D9  89 45 E8                  MOV dword ptr [EBP + -0x18],EAX
007243DC  8D 45 E0                  LEA EAX,[EBP + -0x20]
007243DF  50                        PUSH EAX
007243E0  8B CE                     MOV ECX,ESI
007243E2  89 7D EC                  MOV dword ptr [EBP + -0x14],EDI
007243E5  C7 45 F0 20 00 00 00      MOV dword ptr [EBP + -0x10],0x20
007243EC  C7 45 F4 01 00 00 00      MOV dword ptr [EBP + -0xc],0x1
007243F3  E8 68 1C FC FF            CALL 0x006e6060
LAB_007243f8:
007243F8  8B 46 1C                  MOV EAX,dword ptr [ESI + 0x1c]
007243FB  85 C0                     TEST EAX,EAX
007243FD  74 47                     JZ 0x00724446
007243FF  8D 4D E0                  LEA ECX,[EBP + -0x20]
00724402  89 45 E8                  MOV dword ptr [EBP + -0x18],EAX
00724405  51                        PUSH ECX
00724406  8B CE                     MOV ECX,ESI
00724408  89 7D EC                  MOV dword ptr [EBP + -0x14],EDI
0072440B  C7 45 F0 21 00 00 00      MOV dword ptr [EBP + -0x10],0x21
00724412  E8 49 1C FC FF            CALL 0x006e6060
00724417  83 7D F4 02               CMP dword ptr [EBP + -0xc],0x2
0072441B  75 07                     JNZ 0x00724424
0072441D  8B 46 4C                  MOV EAX,dword ptr [ESI + 0x4c]
00724420  85 C0                     TEST EAX,EAX
00724422  75 22                     JNZ 0x00724446
LAB_00724424:
00724424  8B 46 4C                  MOV EAX,dword ptr [ESI + 0x4c]
00724427  33 D2                     XOR EDX,EDX
00724429  85 C0                     TEST EAX,EAX
0072442B  8D 45 E0                  LEA EAX,[EBP + -0x20]
0072442E  8B CE                     MOV ECX,ESI
00724430  0F 95 C2                  SETNZ DL
00724433  50                        PUSH EAX
00724434  C7 45 F0 20 00 00 00      MOV dword ptr [EBP + -0x10],0x20
0072443B  89 7D EC                  MOV dword ptr [EBP + -0x14],EDI
0072443E  89 55 F4                  MOV dword ptr [EBP + -0xc],EDX
00724441  E8 1A 1C FC FF            CALL 0x006e6060
LAB_00724446:
00724446  8B 46 20                  MOV EAX,dword ptr [ESI + 0x20]
00724449  85 C0                     TEST EAX,EAX
0072444B  74 4F                     JZ 0x0072449c
0072444D  8D 4D E0                  LEA ECX,[EBP + -0x20]
00724450  89 45 E8                  MOV dword ptr [EBP + -0x18],EAX
00724453  51                        PUSH ECX
00724454  8B CE                     MOV ECX,ESI
00724456  89 7D EC                  MOV dword ptr [EBP + -0x14],EDI
00724459  C7 45 F0 21 00 00 00      MOV dword ptr [EBP + -0x10],0x21
00724460  E8 FB 1B FC FF            CALL 0x006e6060
00724465  83 7D F4 02               CMP dword ptr [EBP + -0xc],0x2
00724469  75 0B                     JNZ 0x00724476
0072446B  8B 56 48                  MOV EDX,dword ptr [ESI + 0x48]
0072446E  8B 46 4C                  MOV EAX,dword ptr [ESI + 0x4c]
00724471  4A                        DEC EDX
00724472  3B C2                     CMP EAX,EDX
00724474  7C 26                     JL 0x0072449c
LAB_00724476:
00724476  8B 46 48                  MOV EAX,dword ptr [ESI + 0x48]
00724479  8B 56 4C                  MOV EDX,dword ptr [ESI + 0x4c]
0072447C  48                        DEC EAX
0072447D  33 C9                     XOR ECX,ECX
0072447F  3B D0                     CMP EDX,EAX
00724481  8D 55 E0                  LEA EDX,[EBP + -0x20]
00724484  0F 9C C1                  SETL CL
00724487  89 4D F4                  MOV dword ptr [EBP + -0xc],ECX
0072448A  52                        PUSH EDX
0072448B  8B CE                     MOV ECX,ESI
0072448D  C7 45 F0 20 00 00 00      MOV dword ptr [EBP + -0x10],0x20
00724494  89 7D EC                  MOV dword ptr [EBP + -0x14],EDI
00724497  E8 C4 1B FC FF            CALL 0x006e6060
LAB_0072449c:
0072449C  5F                        POP EDI
0072449D  5E                        POP ESI
0072449E  8B E5                     MOV ESP,EBP
007244A0  5D                        POP EBP
007244A1  C3                        RET
