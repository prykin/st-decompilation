FUN_006b34d0:
006B34D0  55                        PUSH EBP
006B34D1  8B EC                     MOV EBP,ESP
006B34D3  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
006B34D6  53                        PUSH EBX
006B34D7  8B 5D 08                  MOV EBX,dword ptr [EBP + 0x8]
006B34DA  56                        PUSH ESI
006B34DB  57                        PUSH EDI
006B34DC  33 FF                     XOR EDI,EDI
006B34DE  3B 83 A0 01 00 00         CMP EAX,dword ptr [EBX + 0x1a0]
006B34E4  0F 83 D6 00 00 00         JNC 0x006b35c0
006B34EA  8B 8B B0 01 00 00         MOV ECX,dword ptr [EBX + 0x1b0]
006B34F0  8B 34 81                  MOV ESI,dword ptr [ECX + EAX*0x4]
006B34F3  8B 06                     MOV EAX,dword ptr [ESI]
006B34F5  F6 C4 80                  TEST AH,0x80
006B34F8  0F 84 C2 00 00 00         JZ 0x006b35c0
006B34FE  A9 00 00 08 00            TEST EAX,0x80000
006B3503  74 0F                     JZ 0x006b3514
006B3505  8B 13                     MOV EDX,dword ptr [EBX]
006B3507  81 C2 F0 04 00 00         ADD EDX,0x4f0
006B350D  52                        PUSH EDX
006B350E  FF 15 8C BB 85 00         CALL dword ptr [0x0085bb8c]
LAB_006b3514:
006B3514  8A 06                     MOV AL,byte ptr [ESI]
006B3516  8B 4D 18                  MOV ECX,dword ptr [EBP + 0x18]
006B3519  8B 55 14                  MOV EDX,dword ptr [EBP + 0x14]
006B351C  A8 20                     TEST AL,0x20
006B351E  8B 45 10                  MOV EAX,dword ptr [EBP + 0x10]
006B3521  74 17                     JZ 0x006b353a
006B3523  39 56 18                  CMP dword ptr [ESI + 0x18],EDX
006B3526  75 12                     JNZ 0x006b353a
006B3528  39 4E 1C                  CMP dword ptr [ESI + 0x1c],ECX
006B352B  75 0D                     JNZ 0x006b353a
006B352D  83 F8 FE                  CMP EAX,-0x2
006B3530  74 54                     JZ 0x006b3586
006B3532  39 86 C4 00 00 00         CMP dword ptr [ESI + 0xc4],EAX
006B3538  74 4C                     JZ 0x006b3586
LAB_006b353a:
006B353A  85 C0                     TEST EAX,EAX
006B353C  89 56 18                  MOV dword ptr [ESI + 0x18],EDX
006B353F  89 4E 1C                  MOV dword ptr [ESI + 0x1c],ECX
006B3542  7D 1E                     JGE 0x006b3562
006B3544  83 F8 FF                  CMP EAX,-0x1
006B3547  8B 86 C4 00 00 00         MOV EAX,dword ptr [ESI + 0xc4]
006B354D  75 01                     JNZ 0x006b3550
006B354F  40                        INC EAX
LAB_006b3550:
006B3550  8B 8E C8 00 00 00         MOV ECX,dword ptr [ESI + 0xc8]
006B3556  85 C9                     TEST ECX,ECX
006B3558  74 17                     JZ 0x006b3571
006B355A  3B C1                     CMP EAX,ECX
006B355C  7C 13                     JL 0x006b3571
006B355E  33 C0                     XOR EAX,EAX
006B3560  EB 0F                     JMP 0x006b3571
LAB_006b3562:
006B3562  8B 8E C8 00 00 00         MOV ECX,dword ptr [ESI + 0xc8]
006B3568  85 C9                     TEST ECX,ECX
006B356A  74 05                     JZ 0x006b3571
006B356C  99                        CDQ
006B356D  F7 F9                     IDIV ECX
006B356F  8B C2                     MOV EAX,EDX
LAB_006b3571:
006B3571  56                        PUSH ESI
006B3572  53                        PUSH EBX
006B3573  89 86 C4 00 00 00         MOV dword ptr [ESI + 0xc4],EAX
006B3579  E8 A2 FB FF FF            CALL 0x006b3120
006B357E  8B F8                     MOV EDI,EAX
006B3580  8B 06                     MOV EAX,dword ptr [ESI]
006B3582  24 EF                     AND AL,0xef
006B3584  89 06                     MOV dword ptr [ESI],EAX
LAB_006b3586:
006B3586  F7 06 00 00 08 00         TEST dword ptr [ESI],0x80000
006B358C  74 0E                     JZ 0x006b359c
006B358E  8B 03                     MOV EAX,dword ptr [EBX]
006B3590  05 F0 04 00 00            ADD EAX,0x4f0
006B3595  50                        PUSH EAX
006B3596  FF 15 90 BB 85 00         CALL dword ptr [0x0085bb90]
LAB_006b359c:
006B359C  85 FF                     TEST EDI,EDI
006B359E  74 20                     JZ 0x006b35c0
006B35A0  8B 0D 7C D7 7E 00         MOV ECX,dword ptr [0x007ed77c]
006B35A6  68 AB 06 00 00            PUSH 0x6ab
006B35AB  68 C0 DA 7E 00            PUSH 0x7edac0
006B35B0  51                        PUSH ECX
006B35B1  57                        PUSH EDI
006B35B2  E8 89 28 FF FF            CALL 0x006a5e40
006B35B7  8B C7                     MOV EAX,EDI
006B35B9  5F                        POP EDI
006B35BA  5E                        POP ESI
006B35BB  5B                        POP EBX
006B35BC  5D                        POP EBP
006B35BD  C2 14 00                  RET 0x14
LAB_006b35c0:
006B35C0  5F                        POP EDI
006B35C1  5E                        POP ESI
006B35C2  33 C0                     XOR EAX,EAX
006B35C4  5B                        POP EBX
006B35C5  5D                        POP EBP
006B35C6  C2 14 00                  RET 0x14
