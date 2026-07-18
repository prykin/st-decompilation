FUN_00495010:
00495010  55                        PUSH EBP
00495011  8B EC                     MOV EBP,ESP
00495013  51                        PUSH ECX
00495014  56                        PUSH ESI
00495015  8B F1                     MOV ESI,ECX
00495017  8B 86 3A 07 00 00         MOV EAX,dword ptr [ESI + 0x73a]
0049501D  85 C0                     TEST EAX,EAX
0049501F  75 50                     JNZ 0x00495071
00495021  8B 86 5D 04 00 00         MOV EAX,dword ptr [ESI + 0x45d]
00495027  83 F8 03                  CMP EAX,0x3
0049502A  74 35                     JZ 0x00495061
0049502C  83 F8 14                  CMP EAX,0x14
0049502F  74 20                     JZ 0x00495051
00495031  83 F8 0B                  CMP EAX,0xb
00495034  74 3B                     JZ 0x00495071
00495036  A1 38 2A 80 00            MOV EAX,[0x00802a38]
0049503B  8D 55 FC                  LEA EDX,[EBP + -0x4]
0049503E  52                        PUSH EDX
0049503F  6A 03                     PUSH 0x3
00495041  8B 88 E4 00 00 00         MOV ECX,dword ptr [EAX + 0xe4]
00495047  89 4D FC                  MOV dword ptr [EBP + -0x4],ECX
0049504A  8B CE                     MOV ECX,ESI
0049504C  E8 D5 D0 F6 FF            CALL 0x00402126
LAB_00495051:
00495051  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
00495054  89 86 3A 07 00 00         MOV dword ptr [ESI + 0x73a],EAX
0049505A  5E                        POP ESI
0049505B  8B E5                     MOV ESP,EBP
0049505D  5D                        POP EBP
0049505E  C2 04 00                  RET 0x4
LAB_00495061:
00495061  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
00495064  89 96 3A 07 00 00         MOV dword ptr [ESI + 0x73a],EDX
0049506A  5E                        POP ESI
0049506B  8B E5                     MOV ESP,EBP
0049506D  5D                        POP EBP
0049506E  C2 04 00                  RET 0x4
LAB_00495071:
00495071  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
00495074  89 8E 3A 07 00 00         MOV dword ptr [ESI + 0x73a],ECX
0049507A  5E                        POP ESI
0049507B  8B E5                     MOV ESP,EBP
0049507D  5D                        POP EBP
0049507E  C2 04 00                  RET 0x4
