FUN_006b2660:
006B2660  55                        PUSH EBP
006B2661  8B EC                     MOV EBP,ESP
006B2663  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
006B2666  8B 4D 0C                  MOV ECX,dword ptr [EBP + 0xc]
006B2669  53                        PUSH EBX
006B266A  56                        PUSH ESI
006B266B  8B B2 A0 01 00 00         MOV ESI,dword ptr [EDX + 0x1a0]
006B2671  33 C0                     XOR EAX,EAX
006B2673  3B CE                     CMP ECX,ESI
006B2675  57                        PUSH EDI
006B2676  0F 83 87 00 00 00         JNC 0x006b2703
006B267C  8B B2 B0 01 00 00         MOV ESI,dword ptr [EDX + 0x1b0]
006B2682  8B 34 8E                  MOV ESI,dword ptr [ESI + ECX*0x4]
006B2685  8B 0E                     MOV ECX,dword ptr [ESI]
006B2687  8B F9                     MOV EDI,ECX
006B2689  81 E7 00 C0 00 00         AND EDI,0xc000
006B268F  81 FF 00 80 00 00         CMP EDI,0x8000
006B2695  75 6C                     JNZ 0x006b2703
006B2697  8B 45 10                  MOV EAX,dword ptr [EBP + 0x10]
006B269A  8B D9                     MOV EBX,ECX
006B269C  C1 EB 12                  SHR EBX,0x12
006B269F  83 E3 01                  AND EBX,0x1
006B26A2  85 C0                     TEST EAX,EAX
006B26A4  74 08                     JZ 0x006b26ae
006B26A6  81 C9 00 00 04 00         OR ECX,0x40000
006B26AC  EB 06                     JMP 0x006b26b4
LAB_006b26ae:
006B26AE  81 E1 FF FF FB FF         AND ECX,0xfffbffff
LAB_006b26b4:
006B26B4  56                        PUSH ESI
006B26B5  52                        PUSH EDX
006B26B6  89 0E                     MOV dword ptr [ESI],ECX
006B26B8  E8 23 FD FF FF            CALL 0x006b23e0
006B26BD  F7 06 00 00 00 04         TEST dword ptr [ESI],0x4000000
006B26C3  74 3C                     JZ 0x006b2701
006B26C5  8B 86 D0 00 00 00         MOV EAX,dword ptr [ESI + 0xd0]
006B26CB  85 C0                     TEST EAX,EAX
006B26CD  74 32                     JZ 0x006b2701
006B26CF  8B 86 C0 00 00 00         MOV EAX,dword ptr [ESI + 0xc0]
006B26D5  33 FF                     XOR EDI,EDI
006B26D7  85 C0                     TEST EAX,EAX
006B26D9  7E 26                     JLE 0x006b2701
LAB_006b26db:
006B26DB  8B 86 D0 00 00 00         MOV EAX,dword ptr [ESI + 0xd0]
006B26E1  8B 04 B8                  MOV EAX,dword ptr [EAX + EDI*0x4]
006B26E4  85 C0                     TEST EAX,EAX
006B26E6  7C 0E                     JL 0x006b26f6
006B26E8  8B 4D 10                  MOV ECX,dword ptr [EBP + 0x10]
006B26EB  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
006B26EE  51                        PUSH ECX
006B26EF  50                        PUSH EAX
006B26F0  52                        PUSH EDX
006B26F1  E8 6A FF FF FF            CALL 0x006b2660
LAB_006b26f6:
006B26F6  8B 86 C0 00 00 00         MOV EAX,dword ptr [ESI + 0xc0]
006B26FC  47                        INC EDI
006B26FD  3B F8                     CMP EDI,EAX
006B26FF  7C DA                     JL 0x006b26db
LAB_006b2701:
006B2701  8B C3                     MOV EAX,EBX
LAB_006b2703:
006B2703  5F                        POP EDI
006B2704  5E                        POP ESI
006B2705  5B                        POP EBX
006B2706  5D                        POP EBP
006B2707  C2 0C 00                  RET 0xc
