FUN_006904d0:
006904D0  55                        PUSH EBP
006904D1  8B EC                     MOV EBP,ESP
006904D3  53                        PUSH EBX
006904D4  56                        PUSH ESI
006904D5  57                        PUSH EDI
006904D6  8B F9                     MOV EDI,ECX
006904D8  33 F6                     XOR ESI,ESI
006904DA  8B 8F A5 00 00 00         MOV ECX,dword ptr [EDI + 0xa5]
006904E0  8B 41 0C                  MOV EAX,dword ptr [ECX + 0xc]
006904E3  85 C0                     TEST EAX,EAX
006904E5  7E 37                     JLE 0x0069051e
006904E7  8B 5D 0C                  MOV EBX,dword ptr [EBP + 0xc]
006904EA  3B F0                     CMP ESI,EAX
LAB_006904ec:
006904EC  73 22                     JNC 0x00690510
006904EE  8B 41 08                  MOV EAX,dword ptr [ECX + 0x8]
006904F1  8B 51 1C                  MOV EDX,dword ptr [ECX + 0x1c]
006904F4  0F AF C6                  IMUL EAX,ESI
006904F7  03 C2                     ADD EAX,EDX
006904F9  85 C0                     TEST EAX,EAX
006904FB  74 13                     JZ 0x00690510
006904FD  8B 40 04                  MOV EAX,dword ptr [EAX + 0x4]
00690500  85 C0                     TEST EAX,EAX
00690502  74 0C                     JZ 0x00690510
00690504  53                        PUSH EBX
00690505  50                        PUSH EAX
00690506  FF 55 08                  CALL dword ptr [EBP + 0x8]
00690509  83 C4 08                  ADD ESP,0x8
0069050C  85 C0                     TEST EAX,EAX
0069050E  75 10                     JNZ 0x00690520
LAB_00690510:
00690510  8B 8F A5 00 00 00         MOV ECX,dword ptr [EDI + 0xa5]
00690516  46                        INC ESI
00690517  8B 41 0C                  MOV EAX,dword ptr [ECX + 0xc]
0069051A  3B F0                     CMP ESI,EAX
0069051C  7C CE                     JL 0x006904ec
LAB_0069051e:
0069051E  33 C0                     XOR EAX,EAX
LAB_00690520:
00690520  5F                        POP EDI
00690521  5E                        POP ESI
00690522  5B                        POP EBX
00690523  5D                        POP EBP
00690524  C2 08 00                  RET 0x8
