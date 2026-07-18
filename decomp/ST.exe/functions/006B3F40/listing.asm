FUN_006b3f40:
006B3F40  55                        PUSH EBP
006B3F41  8B EC                     MOV EBP,ESP
006B3F43  8B 4D 10                  MOV ECX,dword ptr [EBP + 0x10]
006B3F46  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
006B3F49  56                        PUSH ESI
006B3F4A  8B 75 08                  MOV ESI,dword ptr [EBP + 0x8]
006B3F4D  85 C9                     TEST ECX,ECX
006B3F4F  89 86 08 02 00 00         MOV dword ptr [ESI + 0x208],EAX
006B3F55  74 0B                     JZ 0x006b3f62
006B3F57  89 8E 0C 02 00 00         MOV dword ptr [ESI + 0x20c],ECX
006B3F5D  5E                        POP ESI
006B3F5E  5D                        POP EBP
006B3F5F  C2 0C 00                  RET 0xc
LAB_006b3f62:
006B3F62  50                        PUSH EAX
006B3F63  E8 38 10 00 00            CALL 0x006b4fa0
006B3F68  89 86 0C 02 00 00         MOV dword ptr [ESI + 0x20c],EAX
006B3F6E  5E                        POP ESI
006B3F6F  5D                        POP EBP
006B3F70  C2 0C 00                  RET 0xc
