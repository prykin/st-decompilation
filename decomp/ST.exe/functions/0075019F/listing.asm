FUN_0075019f:
0075019F  55                        PUSH EBP
007501A0  8B EC                     MOV EBP,ESP
007501A2  83 EC 0C                  SUB ESP,0xc
007501A5  53                        PUSH EBX
007501A6  56                        PUSH ESI
007501A7  57                        PUSH EDI
007501A8  8B F9                     MOV EDI,ECX
007501AA  8D 47 08                  LEA EAX,[EDI + 0x8]
007501AD  50                        PUSH EAX
007501AE  89 45 F4                  MOV dword ptr [EBP + -0xc],EAX
007501B1  FF 15 8C BB 85 00         CALL dword ptr [0x0085bb8c]
007501B7  8B 5D 08                  MOV EBX,dword ptr [EBP + 0x8]
007501BA  83 65 F8 00               AND dword ptr [EBP + -0x8],0x0
007501BE  8D 77 38                  LEA ESI,[EDI + 0x38]
007501C1  83 7B 30 00               CMP dword ptr [EBX + 0x30],0x0
007501C5  75 03                     JNZ 0x007501ca
007501C7  8D 77 20                  LEA ESI,[EDI + 0x20]
LAB_007501ca:
007501CA  8B 06                     MOV EAX,dword ptr [ESI]
007501CC  85 C0                     TEST EAX,EAX
007501CE  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
007501D1  74 1F                     JZ 0x007501f2
LAB_007501d3:
007501D3  FF 75 FC                  PUSH dword ptr [EBP + -0x4]
007501D6  8B CE                     MOV ECX,ESI
007501D8  E8 FA DC FF FF            CALL 0x0074ded7
007501DD  3B C3                     CMP EAX,EBX
007501DF  74 11                     JZ 0x007501f2
007501E1  8D 45 FC                  LEA EAX,[EBP + -0x4]
007501E4  8B CE                     MOV ECX,ESI
007501E6  50                        PUSH EAX
007501E7  E8 D6 DC FF FF            CALL 0x0074dec2
007501EC  83 7D FC 00               CMP dword ptr [EBP + -0x4],0x0
007501F0  75 E1                     JNZ 0x007501d3
LAB_007501f2:
007501F2  83 7D FC 00               CMP dword ptr [EBP + -0x4],0x0
007501F6  75 09                     JNZ 0x00750201
007501F8  C7 45 F8 16 02 04 80      MOV dword ptr [EBP + -0x8],0x80040216
007501FF  EB 1B                     JMP 0x0075021c
LAB_00750201:
00750201  FF 75 FC                  PUSH dword ptr [EBP + -0x4]
00750204  8B CE                     MOV ECX,ESI
00750206  E8 20 DD FF FF            CALL 0x0074df2b
0075020B  8B 4B 0C                  MOV ECX,dword ptr [EBX + 0xc]
0075020E  8D 43 0C                  LEA EAX,[EBX + 0xc]
00750211  50                        PUSH EAX
00750212  FF 51 08                  CALL dword ptr [ECX + 0x8]
00750215  8B CF                     MOV ECX,EDI
00750217  E8 6B 00 00 00            CALL 0x00750287
LAB_0075021c:
0075021C  FF 75 F4                  PUSH dword ptr [EBP + -0xc]
0075021F  FF 15 90 BB 85 00         CALL dword ptr [0x0085bb90]
00750225  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
00750228  5F                        POP EDI
00750229  5E                        POP ESI
0075022A  5B                        POP EBX
0075022B  C9                        LEAVE
0075022C  C2 04 00                  RET 0x4
