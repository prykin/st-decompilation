FUN_006214c0:
006214C0  55                        PUSH EBP
006214C1  8B EC                     MOV EBP,ESP
006214C3  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
006214C6  53                        PUSH EBX
006214C7  56                        PUSH ESI
006214C8  57                        PUSH EDI
006214C9  C7 02 FF FF FF FF         MOV dword ptr [EDX],0xffffffff
006214CF  8B 55 0C                  MOV EDX,dword ptr [EBP + 0xc]
006214D2  33 C0                     XOR EAX,EAX
006214D4  33 DB                     XOR EBX,EBX
006214D6  C7 02 FF FF FF FF         MOV dword ptr [EDX],0xffffffff
006214DC  8B B1 01 01 00 00         MOV ESI,dword ptr [ECX + 0x101]
006214E2  83 CF FF                  OR EDI,0xffffffff
006214E5  85 F6                     TEST ESI,ESI
006214E7  74 60                     JZ 0x00621549
006214E9  8B 4E 0C                  MOV ECX,dword ptr [ESI + 0xc]
006214EC  85 C9                     TEST ECX,ECX
006214EE  7C 59                     JL 0x00621549
006214F0  33 D2                     XOR EDX,EDX
006214F2  85 C9                     TEST ECX,ECX
006214F4  7E 53                     JLE 0x00621549
006214F6  3B D1                     CMP EDX,ECX
LAB_006214f8:
006214F8  73 0B                     JNC 0x00621505
006214FA  8B 4E 08                  MOV ECX,dword ptr [ESI + 0x8]
006214FD  0F AF CA                  IMUL ECX,EDX
00621500  03 4E 1C                  ADD ECX,dword ptr [ESI + 0x1c]
00621503  EB 02                     JMP 0x00621507
LAB_00621505:
00621505  33 C9                     XOR ECX,ECX
LAB_00621507:
00621507  8B 09                     MOV ECX,dword ptr [ECX]
00621509  85 C9                     TEST ECX,ECX
0062150B  76 0D                     JBE 0x0062151a
0062150D  3B CB                     CMP ECX,EBX
0062150F  76 09                     JBE 0x0062151a
00621511  8B FA                     MOV EDI,EDX
00621513  8B D9                     MOV EBX,ECX
00621515  B8 01 00 00 00            MOV EAX,0x1
LAB_0062151a:
0062151A  8B 4E 0C                  MOV ECX,dword ptr [ESI + 0xc]
0062151D  42                        INC EDX
0062151E  3B D1                     CMP EDX,ECX
00621520  7C D6                     JL 0x006214f8
00621522  85 FF                     TEST EDI,EDI
00621524  7C 23                     JL 0x00621549
00621526  3B F9                     CMP EDI,ECX
00621528  73 0D                     JNC 0x00621537
0062152A  8B 4E 08                  MOV ECX,dword ptr [ESI + 0x8]
0062152D  8B 56 1C                  MOV EDX,dword ptr [ESI + 0x1c]
00621530  0F AF CF                  IMUL ECX,EDI
00621533  03 CA                     ADD ECX,EDX
00621535  EB 02                     JMP 0x00621539
LAB_00621537:
00621537  33 C9                     XOR ECX,ECX
LAB_00621539:
00621539  8B 75 08                  MOV ESI,dword ptr [EBP + 0x8]
0062153C  8B 51 08                  MOV EDX,dword ptr [ECX + 0x8]
0062153F  89 16                     MOV dword ptr [ESI],EDX
00621541  8B 55 0C                  MOV EDX,dword ptr [EBP + 0xc]
00621544  8B 49 0C                  MOV ECX,dword ptr [ECX + 0xc]
00621547  89 0A                     MOV dword ptr [EDX],ECX
LAB_00621549:
00621549  5F                        POP EDI
0062154A  5E                        POP ESI
0062154B  5B                        POP EBX
0062154C  5D                        POP EBP
0062154D  C2 08 00                  RET 0x8
