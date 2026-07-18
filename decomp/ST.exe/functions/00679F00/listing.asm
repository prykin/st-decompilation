FUN_00679f00:
00679F00  55                        PUSH EBP
00679F01  8B EC                     MOV EBP,ESP
00679F03  8B 89 95 06 00 00         MOV ECX,dword ptr [ECX + 0x695]
00679F09  85 C9                     TEST ECX,ECX
00679F0B  74 4D                     JZ 0x00679f5a
00679F0D  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
00679F10  85 D2                     TEST EDX,EDX
00679F12  7C 46                     JL 0x00679f5a
00679F14  8B 41 0C                  MOV EAX,dword ptr [ECX + 0xc]
00679F17  3B D0                     CMP EDX,EAX
00679F19  7D 3F                     JGE 0x00679f5a
00679F1B  73 0B                     JNC 0x00679f28
00679F1D  8B 41 08                  MOV EAX,dword ptr [ECX + 0x8]
00679F20  0F AF C2                  IMUL EAX,EDX
00679F23  03 41 1C                  ADD EAX,dword ptr [ECX + 0x1c]
00679F26  EB 02                     JMP 0x00679f2a
LAB_00679f28:
00679F28  33 C0                     XOR EAX,EAX
LAB_00679f2a:
00679F2A  8B 48 04                  MOV ECX,dword ptr [EAX + 0x4]
00679F2D  85 C9                     TEST ECX,ECX
00679F2F  74 29                     JZ 0x00679f5a
00679F31  8B 08                     MOV ECX,dword ptr [EAX]
00679F33  85 C9                     TEST ECX,ECX
00679F35  74 23                     JZ 0x00679f5a
00679F37  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
00679F3A  85 C0                     TEST EAX,EAX
00679F3C  74 1C                     JZ 0x00679f5a
00679F3E  8B 55 10                  MOV EDX,dword ptr [EBP + 0x10]
00679F41  85 D2                     TEST EDX,EDX
00679F43  7D 0A                     JGE 0x00679f4f
00679F45  50                        PUSH EAX
00679F46  E8 96 71 D8 FF            CALL 0x004010e1
00679F4B  5D                        POP EBP
00679F4C  C2 0C 00                  RET 0xc
LAB_00679f4f:
00679F4F  52                        PUSH EDX
00679F50  50                        PUSH EAX
00679F51  E8 EC 9C D8 FF            CALL 0x00403c42
00679F56  5D                        POP EBP
00679F57  C2 0C 00                  RET 0xc
LAB_00679f5a:
00679F5A  B8 CC FF FF FF            MOV EAX,0xffffffcc
00679F5F  5D                        POP EBP
00679F60  C2 0C 00                  RET 0xc
