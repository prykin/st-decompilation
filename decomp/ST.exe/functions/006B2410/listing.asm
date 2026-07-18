FUN_006b2410:
006B2410  55                        PUSH EBP
006B2411  8B EC                     MOV EBP,ESP
006B2413  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
006B2416  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
006B2419  3B 81 A0 01 00 00         CMP EAX,dword ptr [ECX + 0x1a0]
006B241F  73 29                     JNC 0x006b244a
006B2421  8B 91 B0 01 00 00         MOV EDX,dword ptr [ECX + 0x1b0]
006B2427  8B 04 82                  MOV EAX,dword ptr [EDX + EAX*0x4]
006B242A  8B 10                     MOV EDX,dword ptr [EAX]
006B242C  81 E2 00 C0 00 00         AND EDX,0xc000
006B2432  81 FA 00 C0 00 00         CMP EDX,0xc000
006B2438  75 10                     JNZ 0x006b244a
006B243A  8B 55 10                  MOV EDX,dword ptr [EBP + 0x10]
006B243D  50                        PUSH EAX
006B243E  51                        PUSH ECX
006B243F  89 90 C0 00 00 00         MOV dword ptr [EAX + 0xc0],EDX
006B2445  E8 96 FF FF FF            CALL 0x006b23e0
LAB_006b244a:
006B244A  5D                        POP EBP
006B244B  C2 0C 00                  RET 0xc
