FUN_00751050:
00751050  55                        PUSH EBP
00751051  8B EC                     MOV EBP,ESP
00751053  83 EC 48                  SUB ESP,0x48
00751056  8B 45 14                  MOV EAX,dword ptr [EBP + 0x14]
00751059  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
0075105C  8B 4D 10                  MOV ECX,dword ptr [EBP + 0x10]
0075105F  56                        PUSH ESI
00751060  50                        PUSH EAX
00751061  8B 42 04                  MOV EAX,dword ptr [EDX + 0x4]
00751064  51                        PUSH ECX
00751065  6A 01                     PUSH 0x1
00751067  50                        PUSH EAX
00751068  E8 83 2D 00 00            CALL 0x00753df0
0075106D  8B F0                     MOV ESI,EAX
0075106F  83 FE FF                  CMP ESI,-0x1
00751072  89 75 FC                  MOV dword ptr [EBP + -0x4],ESI
00751075  74 49                     JZ 0x007510c0
00751077  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
0075107A  85 C0                     TEST EAX,EAX
0075107C  74 42                     JZ 0x007510c0
0075107E  8B 0D F8 8D 85 00         MOV ECX,dword ptr [0x00858df8]
00751084  8D 45 BC                  LEA EAX,[EBP + -0x44]
00751087  8D 55 B8                  LEA EDX,[EBP + -0x48]
0075108A  6A 00                     PUSH 0x0
0075108C  50                        PUSH EAX
0075108D  89 4D B8                  MOV dword ptr [EBP + -0x48],ECX
00751090  89 15 F8 8D 85 00         MOV dword ptr [0x00858df8],EDX
00751096  E8 55 C7 FD FF            CALL 0x0072d7f0
0075109B  8B F0                     MOV ESI,EAX
0075109D  83 C4 08                  ADD ESP,0x8
007510A0  85 F6                     TEST ESI,ESI
007510A2  75 25                     JNZ 0x007510c9
007510A4  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
007510A7  8B 75 FC                  MOV ESI,dword ptr [EBP + -0x4]
007510AA  8B 4D 0C                  MOV ECX,dword ptr [EBP + 0xc]
007510AD  56                        PUSH ESI
007510AE  8B 02                     MOV EAX,dword ptr [EDX]
007510B0  51                        PUSH ECX
007510B1  50                        PUSH EAX
007510B2  E8 D9 2C 00 00            CALL 0x00753d90
007510B7  8B 4D B8                  MOV ECX,dword ptr [EBP + -0x48]
007510BA  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
LAB_007510c0:
007510C0  8B C6                     MOV EAX,ESI
007510C2  5E                        POP ESI
007510C3  8B E5                     MOV ESP,EBP
007510C5  5D                        POP EBP
007510C6  C2 10 00                  RET 0x10
LAB_007510c9:
007510C9  8B 55 B8                  MOV EDX,dword ptr [EBP + -0x48]
007510CC  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
007510CF  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
007510D2  89 15 F8 8D 85 00         MOV dword ptr [0x00858df8],EDX
007510D8  8B 51 04                  MOV EDX,dword ptr [ECX + 0x4]
007510DB  50                        PUSH EAX
007510DC  52                        PUSH EDX
007510DD  E8 FE 2B 00 00            CALL 0x00753ce0
007510E2  6A 14                     PUSH 0x14
007510E4  68 E8 2A 7F 00            PUSH 0x7f2ae8
007510E9  6A 00                     PUSH 0x0
007510EB  56                        PUSH ESI
007510EC  E8 4F 4D F5 FF            CALL 0x006a5e40
007510F1  83 C8 FF                  OR EAX,0xffffffff
007510F4  5E                        POP ESI
007510F5  8B E5                     MOV ESP,EBP
007510F7  5D                        POP EBP
007510F8  C2 10 00                  RET 0x10
