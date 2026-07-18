FUN_00740f30:
00740F30  55                        PUSH EBP
00740F31  8B EC                     MOV EBP,ESP
00740F33  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
00740F36  3B 05 DC A2 85 00         CMP EAX,dword ptr [0x0085a2dc]
00740F3C  73 37                     JNC 0x00740f75
00740F3E  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
00740F41  C1 F9 05                  SAR ECX,0x5
00740F44  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
00740F47  83 E2 1F                  AND EDX,0x1f
00740F4A  8B 04 8D A0 A1 85 00      MOV EAX,dword ptr [ECX*0x4 + 0x85a1a0]
00740F51  0F BE 4C D0 04            MOVSX ECX,byte ptr [EAX + EDX*0x8 + 0x4]
00740F56  83 E1 01                  AND ECX,0x1
00740F59  85 C9                     TEST ECX,ECX
00740F5B  74 18                     JZ 0x00740f75
00740F5D  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
00740F60  C1 FA 05                  SAR EDX,0x5
00740F63  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
00740F66  83 E0 1F                  AND EAX,0x1f
00740F69  8B 0C 95 A0 A1 85 00      MOV ECX,dword ptr [EDX*0x4 + 0x85a1a0]
00740F70  8B 04 C1                  MOV EAX,dword ptr [ECX + EAX*0x8]
00740F73  EB 17                     JMP 0x00740f8c
LAB_00740f75:
00740F75  C7 05 48 71 85 00 09 00 00 00  MOV dword ptr [0x00857148],0x9
00740F7F  C7 05 4C 71 85 00 00 00 00 00  MOV dword ptr [0x0085714c],0x0
00740F89  83 C8 FF                  OR EAX,0xffffffff
LAB_00740f8c:
00740F8C  5D                        POP EBP
00740F8D  C3                        RET
