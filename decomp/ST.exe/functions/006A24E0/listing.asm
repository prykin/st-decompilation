FUN_006a24e0:
006A24E0  55                        PUSH EBP
006A24E1  8B EC                     MOV EBP,ESP
006A24E3  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
006A24E6  8B 4D 14                  MOV ECX,dword ptr [EBP + 0x14]
006A24E9  53                        PUSH EBX
006A24EA  56                        PUSH ESI
006A24EB  3B C1                     CMP EAX,ECX
006A24ED  57                        PUSH EDI
006A24EE  0F 85 F9 00 00 00         JNZ 0x006a25ed
006A24F4  8B 7D 08                  MOV EDI,dword ptr [EBP + 0x8]
006A24F7  66 8B 4F 04               MOV CX,word ptr [EDI + 0x4]
006A24FB  F6 C5 20                  TEST CH,0x20
006A24FE  74 0A                     JZ 0x006a250a
006A2500  8B D9                     MOV EBX,ECX
006A2502  81 E3 00 FF 00 00         AND EBX,0xff00
006A2508  EB 05                     JMP 0x006a250f
LAB_006a250a:
006A250A  BB FF FF 00 00            MOV EBX,0xffff
LAB_006a250f:
006A250F  8B 55 10                  MOV EDX,dword ptr [EBP + 0x10]
006A2512  66 8B 42 04               MOV AX,word ptr [EDX + 0x4]
006A2516  F6 C4 20                  TEST AH,0x20
006A2519  74 0A                     JZ 0x006a2525
006A251B  8B F0                     MOV ESI,EAX
006A251D  81 E6 00 FF 00 00         AND ESI,0xff00
006A2523  EB 05                     JMP 0x006a252a
LAB_006a2525:
006A2525  BE FF FF 00 00            MOV ESI,0xffff
LAB_006a252a:
006A252A  25 FF FF 00 00            AND EAX,0xffff
006A252F  81 E1 FF FF 00 00         AND ECX,0xffff
006A2535  23 C6                     AND EAX,ESI
006A2537  23 CB                     AND ECX,EBX
006A2539  3B C8                     CMP ECX,EAX
006A253B  0F 85 AC 00 00 00         JNZ 0x006a25ed
006A2541  8B 75 18                  MOV ESI,dword ptr [EBP + 0x18]
006A2544  83 FE 01                  CMP ESI,0x1
006A2547  74 45                     JZ 0x006a258e
006A2549  66 8B 0F                  MOV CX,word ptr [EDI]
006A254C  66 8B 02                  MOV AX,word ptr [EDX]
006A254F  8B D9                     MOV EBX,ECX
006A2551  81 E3 00 20 00 00         AND EBX,0x2000
006A2557  F7 DB                     NEG EBX
006A2559  1B DB                     SBB EBX,EBX
006A255B  81 E1 FF FF 00 00         AND ECX,0xffff
006A2561  80 E3 01                  AND BL,0x1
006A2564  81 C3 FF FF 00 00         ADD EBX,0xffff
006A256A  23 D9                     AND EBX,ECX
006A256C  8B C8                     MOV ECX,EAX
006A256E  81 E1 00 20 00 00         AND ECX,0x2000
006A2574  F7 D9                     NEG ECX
006A2576  1B C9                     SBB ECX,ECX
006A2578  25 FF FF 00 00            AND EAX,0xffff
006A257D  80 E1 01                  AND CL,0x1
006A2580  81 C1 FF FF 00 00         ADD ECX,0xffff
006A2586  23 C8                     AND ECX,EAX
006A2588  33 C0                     XOR EAX,EAX
006A258A  3B D9                     CMP EBX,ECX
006A258C  EB 45                     JMP 0x006a25d3
LAB_006a258e:
006A258E  66 8B 4A 02               MOV CX,word ptr [EDX + 0x2]
006A2592  66 8B 47 02               MOV AX,word ptr [EDI + 0x2]
006A2596  8B D9                     MOV EBX,ECX
006A2598  81 E3 00 20 00 00         AND EBX,0x2000
006A259E  F7 DB                     NEG EBX
006A25A0  1B DB                     SBB EBX,EBX
006A25A2  81 E1 FF FF 00 00         AND ECX,0xffff
006A25A8  80 E3 01                  AND BL,0x1
006A25AB  81 C3 FF FF 00 00         ADD EBX,0xffff
006A25B1  23 D9                     AND EBX,ECX
006A25B3  8B C8                     MOV ECX,EAX
006A25B5  81 E1 00 20 00 00         AND ECX,0x2000
006A25BB  F7 D9                     NEG ECX
006A25BD  1B C9                     SBB ECX,ECX
006A25BF  25 FF FF 00 00            AND EAX,0xffff
006A25C4  80 E1 01                  AND CL,0x1
006A25C7  81 C1 FF FF 00 00         ADD ECX,0xffff
006A25CD  23 C8                     AND ECX,EAX
006A25CF  33 C0                     XOR EAX,EAX
006A25D1  3B CB                     CMP ECX,EBX
LAB_006a25d3:
006A25D3  0F 95 C0                  SETNZ AL
006A25D6  85 C0                     TEST EAX,EAX
006A25D8  75 13                     JNZ 0x006a25ed
006A25DA  83 FE 01                  CMP ESI,0x1
006A25DD  74 15                     JZ 0x006a25f4
006A25DF  66 8B 3F                  MOV DI,word ptr [EDI]
006A25E2  66 3B 3A                  CMP DI,word ptr [EDX]
006A25E5  75 23                     JNZ 0x006a260a
006A25E7  66 83 FF 01               CMP DI,0x1
006A25EB  75 1D                     JNZ 0x006a260a
LAB_006a25ed:
006A25ED  5F                        POP EDI
006A25EE  5E                        POP ESI
006A25EF  33 C0                     XOR EAX,EAX
006A25F1  5B                        POP EBX
006A25F2  5D                        POP EBP
006A25F3  C3                        RET
LAB_006a25f4:
006A25F4  66 8B 7F 02               MOV DI,word ptr [EDI + 0x2]
006A25F8  66 3B 7A 02               CMP DI,word ptr [EDX + 0x2]
006A25FC  75 1B                     JNZ 0x006a2619
006A25FE  66 85 FF                  TEST DI,DI
006A2601  75 16                     JNZ 0x006a2619
006A2603  5F                        POP EDI
006A2604  5E                        POP ESI
006A2605  33 C0                     XOR EAX,EAX
006A2607  5B                        POP EBX
006A2608  5D                        POP EBP
006A2609  C3                        RET
LAB_006a260a:
006A260A  F7 C7 00 20 00 00         TEST EDI,0x2000
006A2610  75 0F                     JNZ 0x006a2621
006A2612  5F                        POP EDI
006A2613  5E                        POP ESI
006A2614  33 C0                     XOR EAX,EAX
006A2616  5B                        POP EBX
006A2617  5D                        POP EBP
006A2618  C3                        RET
LAB_006a2619:
006A2619  F7 C7 00 20 00 00         TEST EDI,0x2000
006A261F  74 CC                     JZ 0x006a25ed
LAB_006a2621:
006A2621  5F                        POP EDI
006A2622  5E                        POP ESI
006A2623  B8 01 00 00 00            MOV EAX,0x1
006A2628  5B                        POP EBX
006A2629  5D                        POP EBP
006A262A  C3                        RET
