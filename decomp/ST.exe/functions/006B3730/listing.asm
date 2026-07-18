FUN_006b3730:
006B3730  55                        PUSH EBP
006B3731  8B EC                     MOV EBP,ESP
006B3733  51                        PUSH ECX
006B3734  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
006B3737  53                        PUSH EBX
006B3738  8B 5D 08                  MOV EBX,dword ptr [EBP + 0x8]
006B373B  57                        PUSH EDI
006B373C  C7 45 FC 00 00 00 00      MOV dword ptr [EBP + -0x4],0x0
006B3743  3B 83 A0 01 00 00         CMP EAX,dword ptr [EBX + 0x1a0]
006B3749  0F 83 E7 00 00 00         JNC 0x006b3836
006B374F  8B 8B B0 01 00 00         MOV ECX,dword ptr [EBX + 0x1b0]
006B3755  56                        PUSH ESI
006B3756  8B 34 81                  MOV ESI,dword ptr [ECX + EAX*0x4]
006B3759  F7 06 00 00 08 00         TEST dword ptr [ESI],0x80000
006B375F  74 0F                     JZ 0x006b3770
006B3761  8B 13                     MOV EDX,dword ptr [EBX]
006B3763  81 C2 F0 04 00 00         ADD EDX,0x4f0
006B3769  52                        PUSH EDX
006B376A  FF 15 8C BB 85 00         CALL dword ptr [0x0085bb8c]
LAB_006b3770:
006B3770  8B 4D 14                  MOV ECX,dword ptr [EBP + 0x14]
006B3773  8B 46 18                  MOV EAX,dword ptr [ESI + 0x18]
006B3776  8B 7D 18                  MOV EDI,dword ptr [EBP + 0x18]
006B3779  3B C1                     CMP EAX,ECX
006B377B  8B 45 10                  MOV EAX,dword ptr [EBP + 0x10]
006B377E  75 17                     JNZ 0x006b3797
006B3780  39 7E 1C                  CMP dword ptr [ESI + 0x1c],EDI
006B3783  75 12                     JNZ 0x006b3797
006B3785  F6 06 10                  TEST byte ptr [ESI],0x10
006B3788  75 0D                     JNZ 0x006b3797
006B378A  83 F8 FE                  CMP EAX,-0x2
006B378D  74 67                     JZ 0x006b37f6
006B378F  39 86 C4 00 00 00         CMP dword ptr [ESI + 0xc4],EAX
006B3795  74 5F                     JZ 0x006b37f6
LAB_006b3797:
006B3797  8B 16                     MOV EDX,dword ptr [ESI]
006B3799  F6 C6 80                  TEST DH,0x80
006B379C  89 55 0C                  MOV dword ptr [EBP + 0xc],EDX
006B379F  74 55                     JZ 0x006b37f6
006B37A1  85 C0                     TEST EAX,EAX
006B37A3  89 4E 18                  MOV dword ptr [ESI + 0x18],ECX
006B37A6  89 7E 1C                  MOV dword ptr [ESI + 0x1c],EDI
006B37A9  7D 1E                     JGE 0x006b37c9
006B37AB  83 F8 FF                  CMP EAX,-0x1
006B37AE  8B 86 C4 00 00 00         MOV EAX,dword ptr [ESI + 0xc4]
006B37B4  75 01                     JNZ 0x006b37b7
006B37B6  40                        INC EAX
LAB_006b37b7:
006B37B7  8B 8E C8 00 00 00         MOV ECX,dword ptr [ESI + 0xc8]
006B37BD  85 C9                     TEST ECX,ECX
006B37BF  74 17                     JZ 0x006b37d8
006B37C1  3B C1                     CMP EAX,ECX
006B37C3  7C 13                     JL 0x006b37d8
006B37C5  33 C0                     XOR EAX,EAX
006B37C7  EB 0F                     JMP 0x006b37d8
LAB_006b37c9:
006B37C9  8B 8E C8 00 00 00         MOV ECX,dword ptr [ESI + 0xc8]
006B37CF  85 C9                     TEST ECX,ECX
006B37D1  74 05                     JZ 0x006b37d8
006B37D3  99                        CDQ
006B37D4  F7 F9                     IDIV ECX
006B37D6  8B C2                     MOV EAX,EDX
LAB_006b37d8:
006B37D8  89 86 C4 00 00 00         MOV dword ptr [ESI + 0xc4],EAX
006B37DE  8A 45 0C                  MOV AL,byte ptr [EBP + 0xc]
006B37E1  A8 30                     TEST AL,0x30
006B37E3  74 11                     JZ 0x006b37f6
006B37E5  56                        PUSH ESI
006B37E6  53                        PUSH EBX
006B37E7  E8 34 F9 FF FF            CALL 0x006b3120
006B37EC  8B F8                     MOV EDI,EAX
006B37EE  8B 06                     MOV EAX,dword ptr [ESI]
006B37F0  24 EF                     AND AL,0xef
006B37F2  89 06                     MOV dword ptr [ESI],EAX
006B37F4  EB 03                     JMP 0x006b37f9
LAB_006b37f6:
006B37F6  8B 7D FC                  MOV EDI,dword ptr [EBP + -0x4]
LAB_006b37f9:
006B37F9  8B 06                     MOV EAX,dword ptr [ESI]
006B37FB  5E                        POP ESI
006B37FC  A9 00 00 08 00            TEST EAX,0x80000
006B3801  74 0E                     JZ 0x006b3811
006B3803  8B 03                     MOV EAX,dword ptr [EBX]
006B3805  05 F0 04 00 00            ADD EAX,0x4f0
006B380A  50                        PUSH EAX
006B380B  FF 15 90 BB 85 00         CALL dword ptr [0x0085bb90]
LAB_006b3811:
006B3811  85 FF                     TEST EDI,EDI
006B3813  74 21                     JZ 0x006b3836
006B3815  8B 0D 7C D7 7E 00         MOV ECX,dword ptr [0x007ed77c]
006B381B  68 2C 07 00 00            PUSH 0x72c
006B3820  68 C0 DA 7E 00            PUSH 0x7edac0
006B3825  51                        PUSH ECX
006B3826  57                        PUSH EDI
006B3827  E8 14 26 FF FF            CALL 0x006a5e40
006B382C  8B C7                     MOV EAX,EDI
006B382E  5F                        POP EDI
006B382F  5B                        POP EBX
006B3830  8B E5                     MOV ESP,EBP
006B3832  5D                        POP EBP
006B3833  C2 14 00                  RET 0x14
LAB_006b3836:
006B3836  5F                        POP EDI
006B3837  33 C0                     XOR EAX,EAX
006B3839  5B                        POP EBX
006B383A  8B E5                     MOV ESP,EBP
006B383C  5D                        POP EBP
006B383D  C2 14 00                  RET 0x14
