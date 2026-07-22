STExplosion::sub_00604970:
00604970  55                        PUSH EBP
00604971  8B EC                     MOV EBP,ESP
00604973  83 EC 24                  SUB ESP,0x24
00604976  53                        PUSH EBX
00604977  56                        PUSH ESI
00604978  8B D9                     MOV EBX,ECX
0060497A  57                        PUSH EDI
0060497B  B9 08 00 00 00            MOV ECX,0x8
00604980  33 C0                     XOR EAX,EAX
00604982  8D 7D DC                  LEA EDI,[EBP + -0x24]
00604985  33 F6                     XOR ESI,ESI
00604987  F3 AB                     STOSD.REP ES:EDI
00604989  8B 8B 69 02 00 00         MOV ECX,dword ptr [EBX + 0x269]
0060498F  C7 45 EC 03 00 00 00      MOV dword ptr [EBP + -0x14],0x3
00604996  85 C9                     TEST ECX,ECX
00604998  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
0060499B  7E 35                     JLE 0x006049d2
0060499D  8D BB 19 02 00 00         LEA EDI,[EBX + 0x219]
LAB_006049a3:
006049A3  8B 0F                     MOV ECX,dword ptr [EDI]
006049A5  85 C9                     TEST ECX,ECX
006049A7  74 18                     JZ 0x006049c1
006049A9  8D 45 DC                  LEA EAX,[EBP + -0x24]
006049AC  50                        PUSH EAX
006049AD  E8 E8 12 E0 FF            CALL 0x00405c9a
006049B2  56                        PUSH ESI
006049B3  8B CB                     MOV ECX,EBX
006049B5  E8 7D 02 E0 FF            CALL 0x00404c37
006049BA  85 C0                     TEST EAX,EAX
006049BC  74 03                     JZ 0x006049c1
006049BE  FF 45 FC                  INC dword ptr [EBP + -0x4]
LAB_006049c1:
006049C1  8B 83 69 02 00 00         MOV EAX,dword ptr [EBX + 0x269]
006049C7  46                        INC ESI
006049C8  83 C7 04                  ADD EDI,0x4
006049CB  3B F0                     CMP ESI,EAX
006049CD  7C D4                     JL 0x006049a3
006049CF  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
LAB_006049d2:
006049D2  5F                        POP EDI
006049D3  5E                        POP ESI
006049D4  5B                        POP EBX
006049D5  8B E5                     MOV ESP,EBP
006049D7  5D                        POP EBP
006049D8  C3                        RET
