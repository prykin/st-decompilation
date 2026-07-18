STJumpMineC::LoadImagJMine:
006195E0  55                        PUSH EBP
006195E1  8B EC                     MOV EBP,ESP
006195E3  83 EC 48                  SUB ESP,0x48
006195E6  A1 F8 8D 85 00            MOV EAX,[0x00858df8]
006195EB  53                        PUSH EBX
006195EC  56                        PUSH ESI
006195ED  89 4D FC                  MOV dword ptr [EBP + -0x4],ECX
006195F0  57                        PUSH EDI
006195F1  8D 55 BC                  LEA EDX,[EBP + -0x44]
006195F4  8D 4D B8                  LEA ECX,[EBP + -0x48]
006195F7  6A 00                     PUSH 0x0
006195F9  52                        PUSH EDX
006195FA  89 45 B8                  MOV dword ptr [EBP + -0x48],EAX
006195FD  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
00619603  E8 E8 41 11 00            CALL 0x0072d7f0
00619608  8B F0                     MOV ESI,EAX
0061960A  83 C4 08                  ADD ESP,0x8
0061960D  85 F6                     TEST ESI,ESI
0061960F  0F 85 D8 02 00 00         JNZ 0x006198ed
00619615  83 7D 08 01               CMP dword ptr [EBP + 0x8],0x1
00619619  0F 85 AE 00 00 00         JNZ 0x006196cd
0061961F  A1 74 67 80 00            MOV EAX,[0x00806774]
00619624  56                        PUSH ESI
00619625  56                        PUSH ESI
00619626  6A 01                     PUSH 0x1
00619628  56                        PUSH ESI
00619629  6A FF                     PUSH -0x1
0061962B  68 D4 00 7D 00            PUSH 0x7d00d4
00619630  6A 1D                     PUSH 0x1d
00619632  50                        PUSH EAX
00619633  E8 B8 04 0F 00            CALL 0x00709af0
00619638  8B 7D FC                  MOV EDI,dword ptr [EBP + -0x4]
0061963B  83 C4 20                  ADD ESP,0x20
0061963E  8B D8                     MOV EBX,EAX
00619640  6A 00                     PUSH 0x0
00619642  6A 45                     PUSH 0x45
00619644  8B 4B 0D                  MOV ECX,dword ptr [EBX + 0xd]
00619647  8B 53 09                  MOV EDX,dword ptr [EBX + 0x9]
0061964A  6A 5A                     PUSH 0x5a
0061964C  51                        PUSH ECX
0061964D  8B 0D 98 75 80 00         MOV ECX,dword ptr [0x00807598]
00619653  52                        PUSH EDX
00619654  8D B7 97 00 00 00         LEA ESI,[EDI + 0x97]
0061965A  6A 00                     PUSH 0x0
0061965C  6A 01                     PUSH 0x1
0061965E  56                        PUSH ESI
0061965F  E8 FC EF 0C 00            CALL 0x006e8660
00619664  8B 43 21                  MOV EAX,dword ptr [EBX + 0x21]
00619667  8B 0B                     MOV ECX,dword ptr [EBX]
00619669  8B 16                     MOV EDX,dword ptr [ESI]
0061966B  6A 01                     PUSH 0x1
0061966D  50                        PUSH EAX
0061966E  51                        PUSH ECX
0061966F  8B 0D 98 75 80 00         MOV ECX,dword ptr [0x00807598]
00619675  6A 00                     PUSH 0x0
00619677  52                        PUSH EDX
00619678  E8 63 02 0D 00            CALL 0x006e98e0
0061967D  8B 87 AB 00 00 00         MOV EAX,dword ptr [EDI + 0xab]
00619683  8B 0E                     MOV ECX,dword ptr [ESI]
00619685  50                        PUSH EAX
00619686  6A 00                     PUSH 0x0
00619688  51                        PUSH ECX
00619689  8B 0D 98 75 80 00         MOV ECX,dword ptr [0x00807598]
0061968F  E8 DC 0B 0D 00            CALL 0x006ea270
00619694  8B 13                     MOV EDX,dword ptr [EBX]
00619696  89 9F 9B 00 00 00         MOV dword ptr [EDI + 0x9b],EBX
0061969C  89 97 AF 00 00 00         MOV dword ptr [EDI + 0xaf],EDX
006196A2  A0 26 73 80 00            MOV AL,[0x00807326]
006196A7  84 C0                     TEST AL,AL
006196A9  0F 84 BA 01 00 00         JZ 0x00619869
006196AF  8B 0E                     MOV ECX,dword ptr [ESI]
006196B1  8D 47 4D                  LEA EAX,[EDI + 0x4d]
006196B4  50                        PUSH EAX
006196B5  68 09 11 40 00            PUSH 0x401109
006196BA  6A 00                     PUSH 0x0
006196BC  51                        PUSH ECX
006196BD  8B 0D 98 75 80 00         MOV ECX,dword ptr [0x00807598]
006196C3  E8 58 FE 0C 00            CALL 0x006e9520
006196C8  E9 9C 01 00 00            JMP 0x00619869
LAB_006196cd:
006196CD  8B 7D FC                  MOV EDI,dword ptr [EBP + -0x4]
006196D0  8B 87 97 00 00 00         MOV EAX,dword ptr [EDI + 0x97]
006196D6  8D B7 97 00 00 00         LEA ESI,[EDI + 0x97]
006196DC  85 C0                     TEST EAX,EAX
006196DE  7C 1F                     JL 0x006196ff
006196E0  8B 0D 98 75 80 00         MOV ECX,dword ptr [0x00807598]
006196E6  57                        PUSH EDI
006196E7  6A 00                     PUSH 0x0
006196E9  6A 00                     PUSH 0x0
006196EB  50                        PUSH EAX
006196EC  E8 2F FE 0C 00            CALL 0x006e9520
006196F1  8B 16                     MOV EDX,dword ptr [ESI]
006196F3  8B 0D 98 75 80 00         MOV ECX,dword ptr [0x00807598]
006196F9  52                        PUSH EDX
006196FA  E8 A1 F4 0C 00            CALL 0x006e8ba0
LAB_006196ff:
006196FF  A1 74 67 80 00            MOV EAX,[0x00806774]
00619704  6A 00                     PUSH 0x0
00619706  6A 00                     PUSH 0x0
00619708  6A 01                     PUSH 0x1
0061970A  6A 00                     PUSH 0x0
0061970C  6A FF                     PUSH -0x1
0061970E  68 DC 00 7D 00            PUSH 0x7d00dc
00619713  6A 1D                     PUSH 0x1d
00619715  50                        PUSH EAX
00619716  E8 D5 03 0F 00            CALL 0x00709af0
0061971B  83 C4 20                  ADD ESP,0x20
0061971E  8B D8                     MOV EBX,EAX
00619720  8B 4B 0D                  MOV ECX,dword ptr [EBX + 0xd]
00619723  8B 53 09                  MOV EDX,dword ptr [EBX + 0x9]
00619726  6A 00                     PUSH 0x0
00619728  6A 45                     PUSH 0x45
0061972A  6A 5A                     PUSH 0x5a
0061972C  51                        PUSH ECX
0061972D  8B 0D 98 75 80 00         MOV ECX,dword ptr [0x00807598]
00619733  52                        PUSH EDX
00619734  6A 00                     PUSH 0x0
00619736  6A 03                     PUSH 0x3
00619738  56                        PUSH ESI
00619739  E8 22 EF 0C 00            CALL 0x006e8660
0061973E  8B 43 21                  MOV EAX,dword ptr [EBX + 0x21]
00619741  8B 0B                     MOV ECX,dword ptr [EBX]
00619743  8B 16                     MOV EDX,dword ptr [ESI]
00619745  6A 01                     PUSH 0x1
00619747  50                        PUSH EAX
00619748  51                        PUSH ECX
00619749  8B 0D 98 75 80 00         MOV ECX,dword ptr [0x00807598]
0061974F  6A 00                     PUSH 0x0
00619751  52                        PUSH EDX
00619752  E8 89 01 0D 00            CALL 0x006e98e0
00619757  8B 87 AB 00 00 00         MOV EAX,dword ptr [EDI + 0xab]
0061975D  8B 0E                     MOV ECX,dword ptr [ESI]
0061975F  50                        PUSH EAX
00619760  6A 00                     PUSH 0x0
00619762  51                        PUSH ECX
00619763  8B 0D 98 75 80 00         MOV ECX,dword ptr [0x00807598]
00619769  E8 02 0B 0D 00            CALL 0x006ea270
0061976E  8B 13                     MOV EDX,dword ptr [EBX]
00619770  6A 00                     PUSH 0x0
00619772  6A 00                     PUSH 0x0
00619774  6A 01                     PUSH 0x1
00619776  6A 00                     PUSH 0x0
00619778  89 97 AF 00 00 00         MOV dword ptr [EDI + 0xaf],EDX
0061977E  A1 74 67 80 00            MOV EAX,[0x00806774]
00619783  6A FF                     PUSH -0x1
00619785  68 E4 00 7D 00            PUSH 0x7d00e4
0061978A  6A 1D                     PUSH 0x1d
0061978C  50                        PUSH EAX
0061978D  E8 5E 03 0F 00            CALL 0x00709af0
00619792  8B D8                     MOV EBX,EAX
00619794  8B 06                     MOV EAX,dword ptr [ESI]
00619796  83 C4 20                  ADD ESP,0x20
00619799  8B 4B 21                  MOV ECX,dword ptr [EBX + 0x21]
0061979C  8B 13                     MOV EDX,dword ptr [EBX]
0061979E  6A 01                     PUSH 0x1
006197A0  51                        PUSH ECX
006197A1  8B 0D 98 75 80 00         MOV ECX,dword ptr [0x00807598]
006197A7  52                        PUSH EDX
006197A8  6A 01                     PUSH 0x1
006197AA  50                        PUSH EAX
006197AB  E8 30 01 0D 00            CALL 0x006e98e0
006197B0  8B 8F BC 00 00 00         MOV ECX,dword ptr [EDI + 0xbc]
006197B6  8B 16                     MOV EDX,dword ptr [ESI]
006197B8  51                        PUSH ECX
006197B9  8B 0D 98 75 80 00         MOV ECX,dword ptr [0x00807598]
006197BF  6A 01                     PUSH 0x1
006197C1  52                        PUSH EDX
006197C2  E8 A9 0A 0D 00            CALL 0x006ea270
006197C7  8B 06                     MOV EAX,dword ptr [ESI]
006197C9  8B 0D 98 75 80 00         MOV ECX,dword ptr [0x00807598]
006197CF  6A 01                     PUSH 0x1
006197D1  6A 01                     PUSH 0x1
006197D3  50                        PUSH EAX
006197D4  E8 27 10 0D 00            CALL 0x006ea800
006197D9  8B 0D B8 32 80 00         MOV ECX,dword ptr [0x008032b8]
006197DF  6A 10                     PUSH 0x10
006197E1  51                        PUSH ECX
006197E2  8B 16                     MOV EDX,dword ptr [ESI]
006197E4  8B 0D 98 75 80 00         MOV ECX,dword ptr [0x00807598]
006197EA  52                        PUSH EDX
006197EB  E8 A0 0F 0D 00            CALL 0x006ea790
006197F0  8B 03                     MOV EAX,dword ptr [EBX]
006197F2  6A 00                     PUSH 0x0
006197F4  6A 00                     PUSH 0x0
006197F6  6A 01                     PUSH 0x1
006197F8  6A 00                     PUSH 0x0
006197FA  89 87 C0 00 00 00         MOV dword ptr [EDI + 0xc0],EAX
00619800  C6 87 BB 00 00 00 01      MOV byte ptr [EDI + 0xbb],0x1
00619807  8B 0D 64 67 80 00         MOV ECX,dword ptr [0x00806764]
0061980D  6A FF                     PUSH -0x1
0061980F  68 F0 00 7D 00            PUSH 0x7d00f0
00619814  6A 1D                     PUSH 0x1d
00619816  51                        PUSH ECX
00619817  E8 D4 02 0F 00            CALL 0x00709af0
0061981C  8B 0E                     MOV ECX,dword ptr [ESI]
0061981E  8B D8                     MOV EBX,EAX
00619820  83 C4 20                  ADD ESP,0x20
00619823  8B 53 21                  MOV EDX,dword ptr [EBX + 0x21]
00619826  8B 03                     MOV EAX,dword ptr [EBX]
00619828  6A 01                     PUSH 0x1
0061982A  52                        PUSH EDX
0061982B  50                        PUSH EAX
0061982C  6A 02                     PUSH 0x2
0061982E  51                        PUSH ECX
0061982F  8B 0D 98 75 80 00         MOV ECX,dword ptr [0x00807598]
00619835  E8 A6 00 0D 00            CALL 0x006e98e0
0061983A  8B 97 B7 00 00 00         MOV EDX,dword ptr [EDI + 0xb7]
00619840  8B 06                     MOV EAX,dword ptr [ESI]
00619842  8B 0D 98 75 80 00         MOV ECX,dword ptr [0x00807598]
00619848  52                        PUSH EDX
00619849  6A 02                     PUSH 0x2
0061984B  50                        PUSH EAX
0061984C  E8 1F 0A 0D 00            CALL 0x006ea270
00619851  8B 0E                     MOV ECX,dword ptr [ESI]
00619853  6A 02                     PUSH 0x2
00619855  51                        PUSH ECX
00619856  8B 0D 98 75 80 00         MOV ECX,dword ptr [0x00807598]
0061985C  E8 DF 04 0D 00            CALL 0x006e9d40
00619861  8B 13                     MOV EDX,dword ptr [EBX]
00619863  89 97 B3 00 00 00         MOV dword ptr [EDI + 0xb3],EDX
LAB_00619869:
00619869  DB 87 A7 00 00 00         FILD dword ptr [EDI + 0xa7]
0061986F  51                        PUSH ECX
00619870  8B 06                     MOV EAX,dword ptr [ESI]
00619872  D8 0D F8 04 79 00         FMUL float ptr [0x007904f8]
00619878  D8 0D F0 04 79 00         FMUL float ptr [0x007904f0]
0061987E  D8 05 FC 04 79 00         FADD float ptr [0x007904fc]
00619884  D9 1C 24                  FSTP float ptr [ESP]
00619887  DB 87 A3 00 00 00         FILD dword ptr [EDI + 0xa3]
0061988D  51                        PUSH ECX
0061988E  D8 0D F8 04 79 00         FMUL float ptr [0x007904f8]
00619894  D8 0D F0 04 79 00         FMUL float ptr [0x007904f0]
0061989A  D9 1C 24                  FSTP float ptr [ESP]
0061989D  DB 87 9F 00 00 00         FILD dword ptr [EDI + 0x9f]
006198A3  51                        PUSH ECX
006198A4  8B 0D 98 75 80 00         MOV ECX,dword ptr [0x00807598]
006198AA  D8 0D F8 04 79 00         FMUL float ptr [0x007904f8]
006198B0  D8 0D F0 04 79 00         FMUL float ptr [0x007904f0]
006198B6  D9 1C 24                  FSTP float ptr [ESP]
006198B9  50                        PUSH EAX
006198BA  E8 A1 10 0D 00            CALL 0x006ea960
006198BF  8B 0E                     MOV ECX,dword ptr [ESI]
006198C1  6A 00                     PUSH 0x0
006198C3  51                        PUSH ECX
006198C4  8B 0D 98 75 80 00         MOV ECX,dword ptr [0x00807598]
006198CA  E8 D1 11 0D 00            CALL 0x006eaaa0
006198CF  8B 55 B8                  MOV EDX,dword ptr [EBP + -0x48]
006198D2  C6 87 C4 00 00 00 01      MOV byte ptr [EDI + 0xc4],0x1
006198D9  89 15 F8 8D 85 00         MOV dword ptr [0x00858df8],EDX
006198DF  B8 01 00 00 00            MOV EAX,0x1
006198E4  5F                        POP EDI
006198E5  5E                        POP ESI
006198E6  5B                        POP EBX
006198E7  8B E5                     MOV ESP,EBP
006198E9  5D                        POP EBP
006198EA  C2 04 00                  RET 0x4
LAB_006198ed:
006198ED  8B 45 B8                  MOV EAX,dword ptr [EBP + -0x48]
006198F0  68 44 01 7D 00            PUSH 0x7d0144
006198F5  68 CC 4C 7A 00            PUSH 0x7a4ccc
006198FA  56                        PUSH ESI
006198FB  6A 00                     PUSH 0x0
006198FD  68 51 01 00 00            PUSH 0x151
00619902  68 00 01 7D 00            PUSH 0x7d0100
00619907  A3 F8 8D 85 00            MOV [0x00858df8],EAX
0061990C  E8 BF 3B 09 00            CALL 0x006ad4d0
00619911  83 C4 18                  ADD ESP,0x18
00619914  85 C0                     TEST EAX,EAX
00619916  74 01                     JZ 0x00619919
00619918  CC                        INT3
LAB_00619919:
00619919  68 53 01 00 00            PUSH 0x153
0061991E  68 00 01 7D 00            PUSH 0x7d0100
00619923  6A 00                     PUSH 0x0
00619925  56                        PUSH ESI
00619926  E8 15 C5 08 00            CALL 0x006a5e40
0061992B  5F                        POP EDI
0061992C  5E                        POP ESI
0061992D  B8 FF FF 00 00            MOV EAX,0xffff
00619932  5B                        POP EBX
00619933  8B E5                     MOV ESP,EBP
00619935  5D                        POP EBP
00619936  C2 04 00                  RET 0x4
