FUN_00711470:
00711470  55                        PUSH EBP
00711471  8B EC                     MOV EBP,ESP
00711473  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
00711476  53                        PUSH EBX
00711477  56                        PUSH ESI
00711478  32 DB                     XOR BL,BL
0071147A  33 F6                     XOR ESI,ESI
0071147C  85 C0                     TEST EAX,EAX
0071147E  75 06                     JNZ 0x00711486
00711480  5E                        POP ESI
00711481  5B                        POP EBX
00711482  5D                        POP EBP
00711483  C2 04 00                  RET 0x4
LAB_00711486:
00711486  80 38 00                  CMP byte ptr [EAX],0x0
00711489  74 26                     JZ 0x007114b1
LAB_0071148b:
0071148B  68 F4 8F 7C 00            PUSH 0x7c8ff4
00711490  50                        PUSH EAX
00711491  E8 FA F0 01 00            CALL 0x00730590
00711496  83 C4 08                  ADD ESP,0x8
00711499  85 C0                     TEST EAX,EAX
0071149B  74 05                     JZ 0x007114a2
0071149D  8A 18                     MOV BL,byte ptr [EAX]
0071149F  C6 00 00                  MOV byte ptr [EAX],0x0
LAB_007114a2:
007114A2  46                        INC ESI
007114A3  85 C0                     TEST EAX,EAX
007114A5  74 0A                     JZ 0x007114b1
007114A7  88 18                     MOV byte ptr [EAX],BL
007114A9  8A 48 01                  MOV CL,byte ptr [EAX + 0x1]
007114AC  40                        INC EAX
007114AD  84 C9                     TEST CL,CL
007114AF  75 DA                     JNZ 0x0071148b
LAB_007114b1:
007114B1  8B C6                     MOV EAX,ESI
007114B3  5E                        POP ESI
007114B4  5B                        POP EBX
007114B5  5D                        POP EBP
007114B6  C2 04 00                  RET 0x4
