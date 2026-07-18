FUN_006b2590:
006B2590  55                        PUSH EBP
006B2591  8B EC                     MOV EBP,ESP
006B2593  53                        PUSH EBX
006B2594  8B 5D 08                  MOV EBX,dword ptr [EBP + 0x8]
006B2597  33 C9                     XOR ECX,ECX
006B2599  8B 03                     MOV EAX,dword ptr [EBX]
006B259B  83 78 20 10               CMP dword ptr [EAX + 0x20],0x10
006B259F  75 07                     JNZ 0x006b25a8
006B25A1  33 C0                     XOR EAX,EAX
006B25A3  5B                        POP EBX
006B25A4  5D                        POP EBP
006B25A5  C2 10 00                  RET 0x10
LAB_006b25a8:
006B25A8  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
006B25AB  8B 93 A0 01 00 00         MOV EDX,dword ptr [EBX + 0x1a0]
006B25B1  3B C2                     CMP EAX,EDX
006B25B3  56                        PUSH ESI
006B25B4  0F 83 8F 00 00 00         JNC 0x006b2649
006B25BA  8B 93 B0 01 00 00         MOV EDX,dword ptr [EBX + 0x1b0]
006B25C0  8B 34 82                  MOV ESI,dword ptr [EDX + EAX*0x4]
006B25C3  8B 06                     MOV EAX,dword ptr [ESI]
006B25C5  8B D0                     MOV EDX,EAX
006B25C7  81 E2 00 C0 00 00         AND EDX,0xc000
006B25CD  81 FA 00 80 00 00         CMP EDX,0x8000
006B25D3  75 74                     JNZ 0x006b2649
006B25D5  8B C8                     MOV ECX,EAX
006B25D7  C1 E9 0C                  SHR ECX,0xc
006B25DA  83 E1 01                  AND ECX,0x1
006B25DD  89 4D 08                  MOV dword ptr [EBP + 0x8],ECX
006B25E0  8B 4D 10                  MOV ECX,dword ptr [EBP + 0x10]
006B25E3  85 C9                     TEST ECX,ECX
006B25E5  74 05                     JZ 0x006b25ec
006B25E7  80 CC 10                  OR AH,0x10
006B25EA  EB 03                     JMP 0x006b25ef
LAB_006b25ec:
006B25EC  80 E4 EF                  AND AH,0xef
LAB_006b25ef:
006B25EF  57                        PUSH EDI
006B25F0  56                        PUSH ESI
006B25F1  53                        PUSH EBX
006B25F2  89 06                     MOV dword ptr [ESI],EAX
006B25F4  E8 E7 FD FF FF            CALL 0x006b23e0
006B25F9  8B 45 14                  MOV EAX,dword ptr [EBP + 0x14]
006B25FC  89 46 58                  MOV dword ptr [ESI + 0x58],EAX
006B25FF  8B 06                     MOV EAX,dword ptr [ESI]
006B2601  A9 00 00 00 04            TEST EAX,0x4000000
006B2606  74 3D                     JZ 0x006b2645
006B2608  8B 86 D0 00 00 00         MOV EAX,dword ptr [ESI + 0xd0]
006B260E  85 C0                     TEST EAX,EAX
006B2610  74 33                     JZ 0x006b2645
006B2612  8B 86 C0 00 00 00         MOV EAX,dword ptr [ESI + 0xc0]
006B2618  33 FF                     XOR EDI,EDI
006B261A  85 C0                     TEST EAX,EAX
006B261C  7E 27                     JLE 0x006b2645
LAB_006b261e:
006B261E  8B 8E D0 00 00 00         MOV ECX,dword ptr [ESI + 0xd0]
006B2624  8B 04 B9                  MOV EAX,dword ptr [ECX + EDI*0x4]
006B2627  85 C0                     TEST EAX,EAX
006B2629  7C 0F                     JL 0x006b263a
006B262B  8B 55 14                  MOV EDX,dword ptr [EBP + 0x14]
006B262E  8B 4D 10                  MOV ECX,dword ptr [EBP + 0x10]
006B2631  52                        PUSH EDX
006B2632  51                        PUSH ECX
006B2633  50                        PUSH EAX
006B2634  53                        PUSH EBX
006B2635  E8 56 FF FF FF            CALL 0x006b2590
LAB_006b263a:
006B263A  8B 86 C0 00 00 00         MOV EAX,dword ptr [ESI + 0xc0]
006B2640  47                        INC EDI
006B2641  3B F8                     CMP EDI,EAX
006B2643  7C D9                     JL 0x006b261e
LAB_006b2645:
006B2645  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
006B2648  5F                        POP EDI
LAB_006b2649:
006B2649  5E                        POP ESI
006B264A  8B C1                     MOV EAX,ECX
006B264C  5B                        POP EBX
006B264D  5D                        POP EBP
006B264E  C2 10 00                  RET 0x10
