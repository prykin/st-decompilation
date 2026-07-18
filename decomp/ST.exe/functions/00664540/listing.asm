FUN_00664540:
00664540  55                        PUSH EBP
00664541  8B EC                     MOV EBP,ESP
00664543  51                        PUSH ECX
00664544  53                        PUSH EBX
00664545  8B C1                     MOV EAX,ECX
00664547  56                        PUSH ESI
00664548  57                        PUSH EDI
00664549  8B B8 17 02 00 00         MOV EDI,dword ptr [EAX + 0x217]
0066454F  33 DB                     XOR EBX,EBX
00664551  33 F6                     XOR ESI,ESI
00664553  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
00664556  8B 57 0C                  MOV EDX,dword ptr [EDI + 0xc]
00664559  85 D2                     TEST EDX,EDX
0066455B  75 0C                     JNZ 0x00664569
0066455D  5F                        POP EDI
0066455E  5E                        POP ESI
0066455F  83 C8 FF                  OR EAX,0xffffffff
00664562  5B                        POP EBX
00664563  8B E5                     MOV ESP,EBP
00664565  5D                        POP EBP
00664566  C2 08 00                  RET 0x8
LAB_00664569:
00664569  33 C9                     XOR ECX,ECX
0066456B  85 D2                     TEST EDX,EDX
0066456D  7E 24                     JLE 0x00664593
0066456F  3B CA                     CMP ECX,EDX
LAB_00664571:
00664571  73 0B                     JNC 0x0066457e
00664573  8B 47 08                  MOV EAX,dword ptr [EDI + 0x8]
00664576  0F AF C1                  IMUL EAX,ECX
00664579  03 47 1C                  ADD EAX,dword ptr [EDI + 0x1c]
0066457C  EB 02                     JMP 0x00664580
LAB_0066457e:
0066457E  33 C0                     XOR EAX,EAX
LAB_00664580:
00664580  8B 40 04                  MOV EAX,dword ptr [EAX + 0x4]
00664583  3B C6                     CMP EAX,ESI
00664585  76 04                     JBE 0x0066458b
00664587  8B F0                     MOV ESI,EAX
00664589  8B D9                     MOV EBX,ECX
LAB_0066458b:
0066458B  41                        INC ECX
0066458C  3B CA                     CMP ECX,EDX
0066458E  7C E1                     JL 0x00664571
00664590  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
LAB_00664593:
00664593  8B 4D 0C                  MOV ECX,dword ptr [EBP + 0xc]
00664596  85 C9                     TEST ECX,ECX
00664598  74 02                     JZ 0x0066459c
0066459A  89 19                     MOV dword ptr [ECX],EBX
LAB_0066459c:
0066459C  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
0066459F  8B D3                     MOV EDX,EBX
006645A1  51                        PUSH ECX
006645A2  8B 88 17 02 00 00         MOV ECX,dword ptr [EAX + 0x217]
006645A8  E8 C3 86 04 00            CALL 0x006acc70
006645AD  8B 75 FC                  MOV ESI,dword ptr [EBP + -0x4]
006645B0  53                        PUSH EBX
006645B1  8B 96 17 02 00 00         MOV EDX,dword ptr [ESI + 0x217]
006645B7  52                        PUSH EDX
006645B8  E8 B3 C6 04 00            CALL 0x006b0c70
006645BD  8B 86 17 02 00 00         MOV EAX,dword ptr [ESI + 0x217]
006645C3  5F                        POP EDI
006645C4  5E                        POP ESI
006645C5  5B                        POP EBX
006645C6  8B 40 0C                  MOV EAX,dword ptr [EAX + 0xc]
006645C9  8B E5                     MOV ESP,EBP
006645CB  5D                        POP EBP
006645CC  C2 08 00                  RET 0x8
