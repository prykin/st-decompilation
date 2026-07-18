FUN_007115e0:
007115E0  55                        PUSH EBP
007115E1  8B EC                     MOV EBP,ESP
007115E3  83 EC 08                  SUB ESP,0x8
007115E6  89 4D F8                  MOV dword ptr [EBP + -0x8],ECX
007115E9  53                        PUSH EBX
007115EA  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
007115ED  56                        PUSH ESI
007115EE  85 C9                     TEST ECX,ECX
007115F0  C7 45 FC 00 00 00 00      MOV dword ptr [EBP + -0x4],0x0
007115F7  74 6D                     JZ 0x00711666
007115F9  8B 5D 10                  MOV EBX,dword ptr [EBP + 0x10]
007115FC  8B 41 08                  MOV EAX,dword ptr [ECX + 0x8]
007115FF  83 FB FF                  CMP EBX,-0x1
00711602  75 02                     JNZ 0x00711606
00711604  8B D8                     MOV EBX,EAX
LAB_00711606:
00711606  8B 75 0C                  MOV ESI,dword ptr [EBP + 0xc]
00711609  3B F0                     CMP ESI,EAX
0071160B  7D 59                     JGE 0x00711666
0071160D  85 DB                     TEST EBX,EBX
0071160F  74 55                     JZ 0x00711666
00711611  8D 14 1E                  LEA EDX,[ESI + EBX*0x1]
00711614  3B D0                     CMP EDX,EAX
00711616  7E 04                     JLE 0x0071161c
00711618  2B C6                     SUB EAX,ESI
0071161A  8B D8                     MOV EBX,EAX
LAB_0071161c:
0071161C  57                        PUSH EDI
0071161D  8D 3C 1E                  LEA EDI,[ESI + EBX*0x1]
00711620  3B F7                     CMP ESI,EDI
00711622  7D 2A                     JGE 0x0071164e
00711624  EB 03                     JMP 0x00711629
LAB_00711626:
00711626  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
LAB_00711629:
00711629  3B 71 08                  CMP ESI,dword ptr [ECX + 0x8]
0071162C  7D 08                     JGE 0x00711636
0071162E  8B 41 14                  MOV EAX,dword ptr [ECX + 0x14]
00711631  8B 04 B0                  MOV EAX,dword ptr [EAX + ESI*0x4]
00711634  EB 02                     JMP 0x00711638
LAB_00711636:
00711636  33 C0                     XOR EAX,EAX
LAB_00711638:
00711638  8B 4D F8                  MOV ECX,dword ptr [EBP + -0x8]
0071163B  50                        PUSH EAX
0071163C  E8 7F FB FF FF            CALL 0x007111c0
00711641  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
00711644  03 D0                     ADD EDX,EAX
00711646  46                        INC ESI
00711647  3B F7                     CMP ESI,EDI
00711649  89 55 FC                  MOV dword ptr [EBP + -0x4],EDX
0071164C  7C D8                     JL 0x00711626
LAB_0071164e:
0071164E  8B 4D F8                  MOV ECX,dword ptr [EBP + -0x8]
00711651  4B                        DEC EBX
00711652  5F                        POP EDI
00711653  5E                        POP ESI
00711654  8B 41 5C                  MOV EAX,dword ptr [ECX + 0x5c]
00711657  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
0071165A  0F AF C3                  IMUL EAX,EBX
0071165D  03 C1                     ADD EAX,ECX
0071165F  5B                        POP EBX
00711660  8B E5                     MOV ESP,EBP
00711662  5D                        POP EBP
00711663  C2 0C 00                  RET 0xc
LAB_00711666:
00711666  5E                        POP ESI
00711667  33 C0                     XOR EAX,EAX
00711669  5B                        POP EBX
0071166A  8B E5                     MOV ESP,EBP
0071166C  5D                        POP EBP
0071166D  C2 0C 00                  RET 0xc
