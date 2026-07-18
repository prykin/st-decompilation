FUN_006205b0:
006205B0  55                        PUSH EBP
006205B1  8B EC                     MOV EBP,ESP
006205B3  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
006205B6  53                        PUSH EBX
006205B7  56                        PUSH ESI
006205B8  57                        PUSH EDI
006205B9  C7 02 FF FF FF FF         MOV dword ptr [EDX],0xffffffff
006205BF  8B 55 0C                  MOV EDX,dword ptr [EBP + 0xc]
006205C2  33 C0                     XOR EAX,EAX
006205C4  33 DB                     XOR EBX,EBX
006205C6  C7 02 FF FF FF FF         MOV dword ptr [EDX],0xffffffff
006205CC  8B B1 D1 00 00 00         MOV ESI,dword ptr [ECX + 0xd1]
006205D2  83 CF FF                  OR EDI,0xffffffff
006205D5  85 F6                     TEST ESI,ESI
006205D7  74 60                     JZ 0x00620639
006205D9  8B 4E 0C                  MOV ECX,dword ptr [ESI + 0xc]
006205DC  85 C9                     TEST ECX,ECX
006205DE  7C 59                     JL 0x00620639
006205E0  33 D2                     XOR EDX,EDX
006205E2  85 C9                     TEST ECX,ECX
006205E4  7E 53                     JLE 0x00620639
006205E6  3B D1                     CMP EDX,ECX
LAB_006205e8:
006205E8  73 0B                     JNC 0x006205f5
006205EA  8B 4E 08                  MOV ECX,dword ptr [ESI + 0x8]
006205ED  0F AF CA                  IMUL ECX,EDX
006205F0  03 4E 1C                  ADD ECX,dword ptr [ESI + 0x1c]
006205F3  EB 02                     JMP 0x006205f7
LAB_006205f5:
006205F5  33 C9                     XOR ECX,ECX
LAB_006205f7:
006205F7  8B 09                     MOV ECX,dword ptr [ECX]
006205F9  85 C9                     TEST ECX,ECX
006205FB  76 0D                     JBE 0x0062060a
006205FD  3B CB                     CMP ECX,EBX
006205FF  76 09                     JBE 0x0062060a
00620601  8B FA                     MOV EDI,EDX
00620603  8B D9                     MOV EBX,ECX
00620605  B8 01 00 00 00            MOV EAX,0x1
LAB_0062060a:
0062060A  8B 4E 0C                  MOV ECX,dword ptr [ESI + 0xc]
0062060D  42                        INC EDX
0062060E  3B D1                     CMP EDX,ECX
00620610  7C D6                     JL 0x006205e8
00620612  85 FF                     TEST EDI,EDI
00620614  7C 23                     JL 0x00620639
00620616  3B F9                     CMP EDI,ECX
00620618  73 0D                     JNC 0x00620627
0062061A  8B 4E 08                  MOV ECX,dword ptr [ESI + 0x8]
0062061D  8B 56 1C                  MOV EDX,dword ptr [ESI + 0x1c]
00620620  0F AF CF                  IMUL ECX,EDI
00620623  03 CA                     ADD ECX,EDX
00620625  EB 02                     JMP 0x00620629
LAB_00620627:
00620627  33 C9                     XOR ECX,ECX
LAB_00620629:
00620629  8B 75 08                  MOV ESI,dword ptr [EBP + 0x8]
0062062C  8B 51 08                  MOV EDX,dword ptr [ECX + 0x8]
0062062F  89 16                     MOV dword ptr [ESI],EDX
00620631  8B 55 0C                  MOV EDX,dword ptr [EBP + 0xc]
00620634  8B 49 0C                  MOV ECX,dword ptr [ECX + 0xc]
00620637  89 0A                     MOV dword ptr [EDX],ECX
LAB_00620639:
00620639  5F                        POP EDI
0062063A  5E                        POP ESI
0062063B  5B                        POP EBX
0062063C  5D                        POP EBP
0062063D  C2 08 00                  RET 0x8
