FUN_006b2480:
006B2480  55                        PUSH EBP
006B2481  8B EC                     MOV EBP,ESP
006B2483  53                        PUSH EBX
006B2484  8B 5D 08                  MOV EBX,dword ptr [EBP + 0x8]
006B2487  33 C9                     XOR ECX,ECX
006B2489  8B 03                     MOV EAX,dword ptr [EBX]
006B248B  83 78 20 10               CMP dword ptr [EAX + 0x20],0x10
006B248F  75 07                     JNZ 0x006b2498
006B2491  33 C0                     XOR EAX,EAX
006B2493  5B                        POP EBX
006B2494  5D                        POP EBP
006B2495  C2 18 00                  RET 0x18
LAB_006b2498:
006B2498  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
006B249B  8B 93 A0 01 00 00         MOV EDX,dword ptr [EBX + 0x1a0]
006B24A1  3B C2                     CMP EAX,EDX
006B24A3  56                        PUSH ESI
006B24A4  0F 83 AC 00 00 00         JNC 0x006b2556
006B24AA  8B 93 B0 01 00 00         MOV EDX,dword ptr [EBX + 0x1b0]
006B24B0  8B 34 82                  MOV ESI,dword ptr [EDX + EAX*0x4]
006B24B3  8B 06                     MOV EAX,dword ptr [ESI]
006B24B5  8B D0                     MOV EDX,EAX
006B24B7  81 E2 00 C0 00 00         AND EDX,0xc000
006B24BD  81 FA 00 80 00 00         CMP EDX,0x8000
006B24C3  0F 85 8D 00 00 00         JNZ 0x006b2556
006B24C9  8B C8                     MOV ECX,EAX
006B24CB  80 CC 20                  OR AH,0x20
006B24CE  C1 E9 08                  SHR ECX,0x8
006B24D1  83 E1 01                  AND ECX,0x1
006B24D4  89 06                     MOV dword ptr [ESI],EAX
006B24D6  89 4D 08                  MOV dword ptr [EBP + 0x8],ECX
006B24D9  8B 4D 10                  MOV ECX,dword ptr [EBP + 0x10]
006B24DC  85 C9                     TEST ECX,ECX
006B24DE  74 05                     JZ 0x006b24e5
006B24E0  80 CC 01                  OR AH,0x1
006B24E3  EB 03                     JMP 0x006b24e8
LAB_006b24e5:
006B24E5  80 E4 FE                  AND AH,0xfe
LAB_006b24e8:
006B24E8  57                        PUSH EDI
006B24E9  56                        PUSH ESI
006B24EA  53                        PUSH EBX
006B24EB  89 06                     MOV dword ptr [ESI],EAX
006B24ED  E8 EE FE FF FF            CALL 0x006b23e0
006B24F2  8B 45 18                  MOV EAX,dword ptr [EBP + 0x18]
006B24F5  8B 4D 1C                  MOV ECX,dword ptr [EBP + 0x1c]
006B24F8  8B 55 14                  MOV EDX,dword ptr [EBP + 0x14]
006B24FB  89 46 60                  MOV dword ptr [ESI + 0x60],EAX
006B24FE  8B 06                     MOV EAX,dword ptr [ESI]
006B2500  89 4E 64                  MOV dword ptr [ESI + 0x64],ECX
006B2503  A9 00 00 00 04            TEST EAX,0x4000000
006B2508  89 56 5C                  MOV dword ptr [ESI + 0x5c],EDX
006B250B  74 45                     JZ 0x006b2552
006B250D  8B 86 D0 00 00 00         MOV EAX,dword ptr [ESI + 0xd0]
006B2513  85 C0                     TEST EAX,EAX
006B2515  74 3B                     JZ 0x006b2552
006B2517  8B 86 C0 00 00 00         MOV EAX,dword ptr [ESI + 0xc0]
006B251D  33 FF                     XOR EDI,EDI
006B251F  85 C0                     TEST EAX,EAX
006B2521  7E 2F                     JLE 0x006b2552
LAB_006b2523:
006B2523  8B 86 D0 00 00 00         MOV EAX,dword ptr [ESI + 0xd0]
006B2529  8B 04 B8                  MOV EAX,dword ptr [EAX + EDI*0x4]
006B252C  85 C0                     TEST EAX,EAX
006B252E  7C 17                     JL 0x006b2547
006B2530  8B 4D 1C                  MOV ECX,dword ptr [EBP + 0x1c]
006B2533  8B 55 18                  MOV EDX,dword ptr [EBP + 0x18]
006B2536  51                        PUSH ECX
006B2537  8B 4D 14                  MOV ECX,dword ptr [EBP + 0x14]
006B253A  52                        PUSH EDX
006B253B  8B 55 10                  MOV EDX,dword ptr [EBP + 0x10]
006B253E  51                        PUSH ECX
006B253F  52                        PUSH EDX
006B2540  50                        PUSH EAX
006B2541  53                        PUSH EBX
006B2542  E8 39 FF FF FF            CALL 0x006b2480
LAB_006b2547:
006B2547  8B 86 C0 00 00 00         MOV EAX,dword ptr [ESI + 0xc0]
006B254D  47                        INC EDI
006B254E  3B F8                     CMP EDI,EAX
006B2550  7C D1                     JL 0x006b2523
LAB_006b2552:
006B2552  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
006B2555  5F                        POP EDI
LAB_006b2556:
006B2556  5E                        POP ESI
006B2557  8B C1                     MOV EAX,ECX
006B2559  5B                        POP EBX
006B255A  5D                        POP EBP
006B255B  C2 18 00                  RET 0x18
