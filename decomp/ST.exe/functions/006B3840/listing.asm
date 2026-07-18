FUN_006b3840:
006B3840  55                        PUSH EBP
006B3841  8B EC                     MOV EBP,ESP
006B3843  51                        PUSH ECX
006B3844  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
006B3847  53                        PUSH EBX
006B3848  57                        PUSH EDI
006B3849  8B 7D 08                  MOV EDI,dword ptr [EBP + 0x8]
006B384C  33 DB                     XOR EBX,EBX
006B384E  8B 8F A0 01 00 00         MOV ECX,dword ptr [EDI + 0x1a0]
006B3854  89 5D FC                  MOV dword ptr [EBP + -0x4],EBX
006B3857  3B C1                     CMP EAX,ECX
006B3859  0F 83 C1 00 00 00         JNC 0x006b3920
006B385F  8B 8F B0 01 00 00         MOV ECX,dword ptr [EDI + 0x1b0]
006B3865  56                        PUSH ESI
006B3866  8B 34 81                  MOV ESI,dword ptr [ECX + EAX*0x4]
006B3869  F7 06 00 00 08 00         TEST dword ptr [ESI],0x80000
006B386F  74 0F                     JZ 0x006b3880
006B3871  8B 17                     MOV EDX,dword ptr [EDI]
006B3873  81 C2 F0 04 00 00         ADD EDX,0x4f0
006B3879  52                        PUSH EDX
006B387A  FF 15 8C BB 85 00         CALL dword ptr [0x0085bb8c]
LAB_006b3880:
006B3880  8B 45 10                  MOV EAX,dword ptr [EBP + 0x10]
006B3883  83 F8 FE                  CMP EAX,-0x2
006B3886  74 5B                     JZ 0x006b38e3
006B3888  8B 8E C4 00 00 00         MOV ECX,dword ptr [ESI + 0xc4]
006B388E  3B C8                     CMP ECX,EAX
006B3890  74 51                     JZ 0x006b38e3
006B3892  8B 1E                     MOV EBX,dword ptr [ESI]
006B3894  F6 C7 80                  TEST BH,0x80
006B3897  74 47                     JZ 0x006b38e0
006B3899  85 C0                     TEST EAX,EAX
006B389B  7D 1C                     JGE 0x006b38b9
006B389D  83 F8 FF                  CMP EAX,-0x1
006B38A0  8D 41 01                  LEA EAX,[ECX + 0x1]
006B38A3  74 02                     JZ 0x006b38a7
006B38A5  8B C1                     MOV EAX,ECX
LAB_006b38a7:
006B38A7  8B 8E C8 00 00 00         MOV ECX,dword ptr [ESI + 0xc8]
006B38AD  85 C9                     TEST ECX,ECX
006B38AF  74 17                     JZ 0x006b38c8
006B38B1  3B C1                     CMP EAX,ECX
006B38B3  7C 13                     JL 0x006b38c8
006B38B5  33 C0                     XOR EAX,EAX
006B38B7  EB 0F                     JMP 0x006b38c8
LAB_006b38b9:
006B38B9  8B 8E C8 00 00 00         MOV ECX,dword ptr [ESI + 0xc8]
006B38BF  85 C9                     TEST ECX,ECX
006B38C1  74 05                     JZ 0x006b38c8
006B38C3  99                        CDQ
006B38C4  F7 F9                     IDIV ECX
006B38C6  8B C2                     MOV EAX,EDX
LAB_006b38c8:
006B38C8  83 E3 30                  AND EBX,0x30
006B38CB  89 86 C4 00 00 00         MOV dword ptr [ESI + 0xc4],EAX
006B38D1  80 FB 20                  CMP BL,0x20
006B38D4  75 0A                     JNZ 0x006b38e0
006B38D6  56                        PUSH ESI
006B38D7  57                        PUSH EDI
006B38D8  E8 43 F8 FF FF            CALL 0x006b3120
006B38DD  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
LAB_006b38e0:
006B38E0  8B 5D FC                  MOV EBX,dword ptr [EBP + -0x4]
LAB_006b38e3:
006B38E3  8B 06                     MOV EAX,dword ptr [ESI]
006B38E5  5E                        POP ESI
006B38E6  A9 00 00 08 00            TEST EAX,0x80000
006B38EB  74 0E                     JZ 0x006b38fb
006B38ED  8B 07                     MOV EAX,dword ptr [EDI]
006B38EF  05 F0 04 00 00            ADD EAX,0x4f0
006B38F4  50                        PUSH EAX
006B38F5  FF 15 90 BB 85 00         CALL dword ptr [0x0085bb90]
LAB_006b38fb:
006B38FB  85 DB                     TEST EBX,EBX
006B38FD  74 21                     JZ 0x006b3920
006B38FF  8B 0D 7C D7 7E 00         MOV ECX,dword ptr [0x007ed77c]
006B3905  68 5E 07 00 00            PUSH 0x75e
006B390A  68 C0 DA 7E 00            PUSH 0x7edac0
006B390F  51                        PUSH ECX
006B3910  53                        PUSH EBX
006B3911  E8 2A 25 FF FF            CALL 0x006a5e40
006B3916  8B C3                     MOV EAX,EBX
006B3918  5F                        POP EDI
006B3919  5B                        POP EBX
006B391A  8B E5                     MOV ESP,EBP
006B391C  5D                        POP EBP
006B391D  C2 0C 00                  RET 0xc
LAB_006b3920:
006B3920  5F                        POP EDI
006B3921  33 C0                     XOR EAX,EAX
006B3923  5B                        POP EBX
006B3924  8B E5                     MOV ESP,EBP
006B3926  5D                        POP EBP
006B3927  C2 0C 00                  RET 0xc
