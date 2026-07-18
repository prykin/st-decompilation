FUN_006a36e0:
006A36E0  55                        PUSH EBP
006A36E1  8B EC                     MOV EBP,ESP
006A36E3  83 EC 08                  SUB ESP,0x8
006A36E6  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
006A36E9  53                        PUSH EBX
006A36EA  56                        PUSH ESI
006A36EB  57                        PUSH EDI
006A36EC  85 C0                     TEST EAX,EAX
006A36EE  7C 78                     JL 0x006a3768
006A36F0  8B 5D 08                  MOV EBX,dword ptr [EBP + 0x8]
006A36F3  3B 03                     CMP EAX,dword ptr [EBX]
006A36F5  7D 71                     JGE 0x006a3768
006A36F7  8B 7D 10                  MOV EDI,dword ptr [EBP + 0x10]
006A36FA  85 FF                     TEST EDI,EDI
006A36FC  7C 6A                     JL 0x006a3768
006A36FE  3B 7B 04                  CMP EDI,dword ptr [EBX + 0x4]
006A3701  7D 65                     JGE 0x006a3768
006A3703  8B 75 14                  MOV ESI,dword ptr [EBP + 0x14]
006A3706  85 F6                     TEST ESI,ESI
006A3708  7C 5E                     JL 0x006a3768
006A370A  83 FE 06                  CMP ESI,0x6
006A370D  7D 59                     JGE 0x006a3768
006A370F  68 FF 00 00 00            PUSH 0xff
006A3714  56                        PUSH ESI
006A3715  57                        PUSH EDI
006A3716  50                        PUSH EAX
006A3717  53                        PUSH EBX
006A3718  E8 93 E2 D5 FF            CALL 0x004019b0
006A371D  83 C4 14                  ADD ESP,0x14
006A3720  85 C0                     TEST EAX,EAX
006A3722  74 44                     JZ 0x006a3768
006A3724  8B 4D 0C                  MOV ECX,dword ptr [EBP + 0xc]
006A3727  8D 45 F8                  LEA EAX,[EBP + -0x8]
006A372A  50                        PUSH EAX
006A372B  56                        PUSH ESI
006A372C  57                        PUSH EDI
006A372D  51                        PUSH ECX
006A372E  53                        PUSH EBX
006A372F  E8 18 0A D6 FF            CALL 0x0040414c
006A3734  8B 55 1C                  MOV EDX,dword ptr [EBP + 0x1c]
006A3737  8B 45 18                  MOV EAX,dword ptr [EBP + 0x18]
006A373A  8B 4D 0C                  MOV ECX,dword ptr [EBP + 0xc]
006A373D  52                        PUSH EDX
006A373E  50                        PUSH EAX
006A373F  68 FF 00 00 00            PUSH 0xff
006A3744  56                        PUSH ESI
006A3745  57                        PUSH EDI
006A3746  51                        PUSH ECX
006A3747  53                        PUSH EBX
006A3748  E8 DC FF D5 FF            CALL 0x00403729
006A374D  8B 55 1C                  MOV EDX,dword ptr [EBP + 0x1c]
006A3750  8B 45 18                  MOV EAX,dword ptr [EBP + 0x18]
006A3753  52                        PUSH EDX
006A3754  8B 55 0C                  MOV EDX,dword ptr [EBP + 0xc]
006A3757  8D 4D F8                  LEA ECX,[EBP + -0x8]
006A375A  50                        PUSH EAX
006A375B  51                        PUSH ECX
006A375C  56                        PUSH ESI
006A375D  57                        PUSH EDI
006A375E  52                        PUSH EDX
006A375F  53                        PUSH EBX
006A3760  E8 01 09 D6 FF            CALL 0x00404066
006A3765  83 C4 4C                  ADD ESP,0x4c
LAB_006a3768:
006A3768  5F                        POP EDI
006A3769  5E                        POP ESI
006A376A  B8 01 00 00 00            MOV EAX,0x1
006A376F  5B                        POP EBX
006A3770  8B E5                     MOV ESP,EBP
006A3772  5D                        POP EBP
006A3773  C3                        RET
