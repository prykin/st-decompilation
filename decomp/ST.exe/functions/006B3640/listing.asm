FUN_006b3640:
006B3640  55                        PUSH EBP
006B3641  8B EC                     MOV EBP,ESP
006B3643  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
006B3646  53                        PUSH EBX
006B3647  56                        PUSH ESI
006B3648  57                        PUSH EDI
006B3649  8B 7D 08                  MOV EDI,dword ptr [EBP + 0x8]
006B364C  33 DB                     XOR EBX,EBX
006B364E  3B 87 A0 01 00 00         CMP EAX,dword ptr [EDI + 0x1a0]
006B3654  0F 83 BF 00 00 00         JNC 0x006b3719
006B365A  8B 8F B0 01 00 00         MOV ECX,dword ptr [EDI + 0x1b0]
006B3660  8B 34 81                  MOV ESI,dword ptr [ECX + EAX*0x4]
006B3663  8B 06                     MOV EAX,dword ptr [ESI]
006B3665  F6 C4 80                  TEST AH,0x80
006B3668  0F 84 AB 00 00 00         JZ 0x006b3719
006B366E  A9 00 00 08 00            TEST EAX,0x80000
006B3673  74 0F                     JZ 0x006b3684
006B3675  8B 17                     MOV EDX,dword ptr [EDI]
006B3677  81 C2 F0 04 00 00         ADD EDX,0x4f0
006B367D  52                        PUSH EDX
006B367E  FF 15 8C BB 85 00         CALL dword ptr [0x0085bb8c]
LAB_006b3684:
006B3684  8B 45 14                  MOV EAX,dword ptr [EBP + 0x14]
006B3687  8B 4D 18                  MOV ECX,dword ptr [EBP + 0x18]
006B368A  89 46 18                  MOV dword ptr [ESI + 0x18],EAX
006B368D  8B 45 10                  MOV EAX,dword ptr [EBP + 0x10]
006B3690  85 C0                     TEST EAX,EAX
006B3692  89 4E 1C                  MOV dword ptr [ESI + 0x1c],ECX
006B3695  7D 1E                     JGE 0x006b36b5
006B3697  83 F8 FF                  CMP EAX,-0x1
006B369A  8B 86 C4 00 00 00         MOV EAX,dword ptr [ESI + 0xc4]
006B36A0  75 01                     JNZ 0x006b36a3
006B36A2  40                        INC EAX
LAB_006b36a3:
006B36A3  8B 8E C8 00 00 00         MOV ECX,dword ptr [ESI + 0xc8]
006B36A9  85 C9                     TEST ECX,ECX
006B36AB  74 17                     JZ 0x006b36c4
006B36AD  3B C1                     CMP EAX,ECX
006B36AF  7C 13                     JL 0x006b36c4
006B36B1  33 C0                     XOR EAX,EAX
006B36B3  EB 0F                     JMP 0x006b36c4
LAB_006b36b5:
006B36B5  8B 8E C8 00 00 00         MOV ECX,dword ptr [ESI + 0xc8]
006B36BB  85 C9                     TEST ECX,ECX
006B36BD  74 05                     JZ 0x006b36c4
006B36BF  99                        CDQ
006B36C0  F7 F9                     IDIV ECX
006B36C2  8B C2                     MOV EAX,EDX
LAB_006b36c4:
006B36C4  89 86 C4 00 00 00         MOV dword ptr [ESI + 0xc4],EAX
006B36CA  8A 06                     MOV AL,byte ptr [ESI]
006B36CC  A8 30                     TEST AL,0x30
006B36CE  74 0F                     JZ 0x006b36df
006B36D0  56                        PUSH ESI
006B36D1  57                        PUSH EDI
006B36D2  E8 49 FA FF FF            CALL 0x006b3120
006B36D7  8B D8                     MOV EBX,EAX
006B36D9  8B 06                     MOV EAX,dword ptr [ESI]
006B36DB  24 EF                     AND AL,0xef
006B36DD  89 06                     MOV dword ptr [ESI],EAX
LAB_006b36df:
006B36DF  F7 06 00 00 08 00         TEST dword ptr [ESI],0x80000
006B36E5  74 0F                     JZ 0x006b36f6
006B36E7  8B 17                     MOV EDX,dword ptr [EDI]
006B36E9  81 C2 F0 04 00 00         ADD EDX,0x4f0
006B36EF  52                        PUSH EDX
006B36F0  FF 15 90 BB 85 00         CALL dword ptr [0x0085bb90]
LAB_006b36f6:
006B36F6  85 DB                     TEST EBX,EBX
006B36F8  74 1F                     JZ 0x006b3719
006B36FA  A1 7C D7 7E 00            MOV EAX,[0x007ed77c]
006B36FF  68 F6 06 00 00            PUSH 0x6f6
006B3704  68 C0 DA 7E 00            PUSH 0x7edac0
006B3709  50                        PUSH EAX
006B370A  53                        PUSH EBX
006B370B  E8 30 27 FF FF            CALL 0x006a5e40
006B3710  5F                        POP EDI
006B3711  8B C3                     MOV EAX,EBX
006B3713  5E                        POP ESI
006B3714  5B                        POP EBX
006B3715  5D                        POP EBP
006B3716  C2 14 00                  RET 0x14
LAB_006b3719:
006B3719  5F                        POP EDI
006B371A  5E                        POP ESI
006B371B  33 C0                     XOR EAX,EAX
006B371D  5B                        POP EBX
006B371E  5D                        POP EBP
006B371F  C2 14 00                  RET 0x14
