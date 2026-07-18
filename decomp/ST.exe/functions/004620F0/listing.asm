FUN_004620f0:
004620F0  55                        PUSH EBP
004620F1  8B EC                     MOV EBP,ESP
004620F3  56                        PUSH ESI
004620F4  8B F1                     MOV ESI,ECX
004620F6  8B 86 7B 04 00 00         MOV EAX,dword ptr [ESI + 0x47b]
004620FC  85 C0                     TEST EAX,EAX
004620FE  74 10                     JZ 0x00462110
00462100  50                        PUSH EAX
00462101  E8 0A C0 24 00            CALL 0x006ae110
00462106  C7 86 7B 04 00 00 00 00 00 00  MOV dword ptr [ESI + 0x47b],0x0
LAB_00462110:
00462110  8B 86 2E 08 00 00         MOV EAX,dword ptr [ESI + 0x82e]
00462116  83 F8 FF                  CMP EAX,-0x1
00462119  74 19                     JZ 0x00462134
0046211B  85 C0                     TEST EAX,EAX
0046211D  74 15                     JZ 0x00462134
0046211F  83 F8 02                  CMP EAX,0x2
00462122  74 10                     JZ 0x00462134
00462124  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
00462127  8B CE                     MOV ECX,ESI
00462129  50                        PUSH EAX
0046212A  E8 C1 1C FA FF            CALL 0x00403df0
0046212F  5E                        POP ESI
00462130  5D                        POP EBP
00462131  C2 04 00                  RET 0x4
LAB_00462134:
00462134  8B 16                     MOV EDX,dword ptr [ESI]
00462136  8B CE                     MOV ECX,ESI
00462138  FF 92 D8 00 00 00         CALL dword ptr [EDX + 0xd8]
0046213E  85 C0                     TEST EAX,EAX
00462140  74 08                     JZ 0x0046214a
00462142  83 C8 FF                  OR EAX,0xffffffff
00462145  5E                        POP ESI
00462146  5D                        POP EBP
00462147  C2 04 00                  RET 0x4
LAB_0046214a:
0046214A  33 C0                     XOR EAX,EAX
0046214C  5E                        POP ESI
0046214D  5D                        POP EBP
0046214E  C2 04 00                  RET 0x4
