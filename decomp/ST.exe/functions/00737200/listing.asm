FUN_00737200:
00737200  55                        PUSH EBP
00737201  8B EC                     MOV EBP,ESP
00737203  53                        PUSH EBX
00737204  56                        PUSH ESI
00737205  57                        PUSH EDI
LAB_00737206:
00737206  83 7D 08 00               CMP dword ptr [EBP + 0x8],0x0
0073720A  75 1E                     JNZ 0x0073722a
0073720C  68 5C FE 79 00            PUSH 0x79fe5c
00737211  6A 00                     PUSH 0x0
00737213  6A 30                     PUSH 0x30
00737215  68 8C 02 7A 00            PUSH 0x7a028c
0073721A  6A 02                     PUSH 0x2
0073721C  E8 7F 9D FF FF            CALL 0x00730fa0
00737221  83 C4 14                  ADD ESP,0x14
00737224  83 F8 01                  CMP EAX,0x1
00737227  75 01                     JNZ 0x0073722a
00737229  CC                        INT3
LAB_0073722a:
0073722A  33 C0                     XOR EAX,EAX
0073722C  85 C0                     TEST EAX,EAX
0073722E  75 D6                     JNZ 0x00737206
00737230  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
00737233  8B 51 0C                  MOV EDX,dword ptr [ECX + 0xc]
00737236  81 E2 83 00 00 00         AND EDX,0x83
0073723C  85 D2                     TEST EDX,EDX
0073723E  74 4D                     JZ 0x0073728d
00737240  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
00737243  8B 48 0C                  MOV ECX,dword ptr [EAX + 0xc]
00737246  83 E1 08                  AND ECX,0x8
00737249  85 C9                     TEST ECX,ECX
0073724B  74 40                     JZ 0x0073728d
0073724D  6A 02                     PUSH 0x2
0073724F  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
00737252  8B 42 08                  MOV EAX,dword ptr [EDX + 0x8]
00737255  50                        PUSH EAX
00737256  E8 B1 D2 CC FF            CALL 0x0040450c
0073725B  83 C4 08                  ADD ESP,0x8
0073725E  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
00737261  8B 51 0C                  MOV EDX,dword ptr [ECX + 0xc]
00737264  81 E2 F7 FB FF FF         AND EDX,0xfffffbf7
0073726A  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
0073726D  89 50 0C                  MOV dword ptr [EAX + 0xc],EDX
00737270  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
00737273  C7 01 00 00 00 00         MOV dword ptr [ECX],0x0
00737279  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
0073727C  C7 42 08 00 00 00 00      MOV dword ptr [EDX + 0x8],0x0
00737283  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
00737286  C7 40 04 00 00 00 00      MOV dword ptr [EAX + 0x4],0x0
LAB_0073728d:
0073728D  5F                        POP EDI
0073728E  5E                        POP ESI
0073728F  5B                        POP EBX
00737290  5D                        POP EBP
00737291  C3                        RET
