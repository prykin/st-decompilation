__isatty:
00741080  55                        PUSH EBP
00741081  8B EC                     MOV EBP,ESP
00741083  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
00741086  3B 05 DC A2 85 00         CMP EAX,dword ptr [0x0085a2dc]
0074108C  72 04                     JC 0x00741092
0074108E  33 C0                     XOR EAX,EAX
00741090  EB 1B                     JMP 0x007410ad
LAB_00741092:
00741092  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
00741095  C1 F9 05                  SAR ECX,0x5
00741098  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
0074109B  83 E2 1F                  AND EDX,0x1f
0074109E  8B 04 8D A0 A1 85 00      MOV EAX,dword ptr [ECX*0x4 + 0x85a1a0]
007410A5  0F BE 44 D0 04            MOVSX EAX,byte ptr [EAX + EDX*0x8 + 0x4]
007410AA  83 E0 40                  AND EAX,0x40
LAB_007410ad:
007410AD  5D                        POP EBP
007410AE  C3                        RET
