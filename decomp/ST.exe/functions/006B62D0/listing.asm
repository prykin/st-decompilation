FUN_006b62d0:
006B62D0  55                        PUSH EBP
006B62D1  8B EC                     MOV EBP,ESP
006B62D3  56                        PUSH ESI
006B62D4  8B 75 08                  MOV ESI,dword ptr [EBP + 0x8]
006B62D7  68 D0 00 00 00            PUSH 0xd0
006B62DC  C7 06 00 00 00 00         MOV dword ptr [ESI],0x0
006B62E2  E8 29 49 FF FF            CALL 0x006aac10
006B62E7  85 C0                     TEST EAX,EAX
006B62E9  89 06                     MOV dword ptr [ESI],EAX
006B62EB  75 0A                     JNZ 0x006b62f7
006B62ED  B8 FE FF FF FF            MOV EAX,0xfffffffe
006B62F2  5E                        POP ESI
006B62F3  5D                        POP EBP
006B62F4  C2 04 00                  RET 0x4
LAB_006b62f7:
006B62F7  56                        PUSH ESI
006B62F8  68 30 62 6B 00            PUSH 0x6b6230
006B62FD  C7 00 0A 00 00 00         MOV dword ptr [EAX],0xa
006B6303  E8 AA 73 07 00            CALL 0x0072d6b2
006B6308  8B F0                     MOV ESI,EAX
006B630A  81 FE 5A 00 77 88         CMP ESI,0x8877005a
006B6310  75 07                     JNZ 0x006b6319
006B6312  BE FE FF FF FF            MOV ESI,0xfffffffe
006B6317  EB 04                     JMP 0x006b631d
LAB_006b6319:
006B6319  85 F6                     TEST ESI,ESI
006B631B  74 1D                     JZ 0x006b633a
LAB_006b631d:
006B631D  A1 7C D7 7E 00            MOV EAX,[0x007ed77c]
006B6322  68 03 01 00 00            PUSH 0x103
006B6327  68 C4 DB 7E 00            PUSH 0x7edbc4
006B632C  50                        PUSH EAX
006B632D  56                        PUSH ESI
006B632E  E8 0D FB FE FF            CALL 0x006a5e40
006B6333  8B C6                     MOV EAX,ESI
006B6335  5E                        POP ESI
006B6336  5D                        POP EBP
006B6337  C2 04 00                  RET 0x4
LAB_006b633a:
006B633A  33 C0                     XOR EAX,EAX
006B633C  5E                        POP ESI
006B633D  5D                        POP EBP
006B633E  C2 04 00                  RET 0x4
