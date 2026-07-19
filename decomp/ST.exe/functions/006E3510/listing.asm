AppClassTy::InitApp:
006E3510  55                        PUSH EBP
006E3511  8B EC                     MOV EBP,ESP
006E3513  83 EC 4C                  SUB ESP,0x4c
006E3516  A1 F8 8D 85 00            MOV EAX,[0x00858df8]
006E351B  53                        PUSH EBX
006E351C  56                        PUSH ESI
006E351D  89 4D F8                  MOV dword ptr [EBP + -0x8],ECX
006E3520  57                        PUSH EDI
006E3521  8D 55 B8                  LEA EDX,[EBP + -0x48]
006E3524  8D 4D B4                  LEA ECX,[EBP + -0x4c]
006E3527  6A 00                     PUSH 0x0
006E3529  52                        PUSH EDX
006E352A  89 45 B4                  MOV dword ptr [EBP + -0x4c],EAX
006E352D  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
006E3533  E8 B8 A2 04 00            CALL 0x0072d7f0
006E3538  8B F0                     MOV ESI,EAX
006E353A  83 C4 08                  ADD ESP,0x8
006E353D  85 F6                     TEST ESI,ESI
006E353F  0F 85 ED 00 00 00         JNZ 0x006e3632
006E3545  8B 7D F8                  MOV EDI,dword ptr [EBP + -0x8]
006E3548  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
006E354B  8B 47 08                  MOV EAX,dword ptr [EDI + 0x8]
006E354E  83 38 00                  CMP dword ptr [EAX],0x0
006E3551  74 63                     JZ 0x006e35b6
LAB_006e3553:
006E3553  33 DB                     XOR EBX,EBX
006E3555  85 F6                     TEST ESI,ESI
006E3557  7E 4A                     JLE 0x006e35a3
LAB_006e3559:
006E3559  8B 47 08                  MOV EAX,dword ptr [EDI + 0x8]
006E355C  8B 0C D8                  MOV ECX,dword ptr [EAX + EBX*0x8]
006E355F  8B 14 06                  MOV EDX,dword ptr [ESI + EAX*0x1]
006E3562  3B CA                     CMP ECX,EDX
006E3564  75 35                     JNZ 0x006e359b
006E3566  52                        PUSH EDX
006E3567  68 A0 E7 7E 00            PUSH 0x7ee7a0
006E356C  6A 00                     PUSH 0x0
006E356E  6A 00                     PUSH 0x0
006E3570  6A 32                     PUSH 0x32
006E3572  68 8C E7 7E 00            PUSH 0x7ee78c
006E3577  E8 54 9F FC FF            CALL 0x006ad4d0
006E357C  83 C4 18                  ADD ESP,0x18
006E357F  85 C0                     TEST EAX,EAX
006E3581  74 01                     JZ 0x006e3584
006E3583  CC                        INT3
LAB_006e3584:
006E3584  A1 7C D7 7E 00            MOV EAX,[0x007ed77c]
006E3589  6A 33                     PUSH 0x33
006E358B  68 8C E7 7E 00            PUSH 0x7ee78c
006E3590  50                        PUSH EAX
006E3591  68 6A FF FF FF            PUSH 0xffffff6a
006E3596  E8 A5 28 FC FF            CALL 0x006a5e40
LAB_006e359b:
006E359B  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
006E359E  43                        INC EBX
006E359F  3B D8                     CMP EBX,EAX
006E35A1  7C B6                     JL 0x006e3559
LAB_006e35a3:
006E35A3  8B 4F 08                  MOV ECX,dword ptr [EDI + 0x8]
006E35A6  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
006E35A9  83 C6 08                  ADD ESI,0x8
006E35AC  42                        INC EDX
006E35AD  89 55 FC                  MOV dword ptr [EBP + -0x4],EDX
006E35B0  83 3C 31 00               CMP dword ptr [ECX + ESI*0x1],0x0
006E35B4  75 9D                     JNZ 0x006e3553
LAB_006e35b6:
006E35B6  FF 15 DC BE 85 00         CALL dword ptr [0x0085bedc]
006E35BC  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
006E35BF  89 47 18                  MOV dword ptr [EDI + 0x18],EAX
006E35C2  A1 6C 6D 85 00            MOV EAX,[0x00856d6c]
006E35C7  8B CF                     MOV ECX,EDI
006E35C9  50                        PUSH EAX
006E35CA  6A 01                     PUSH 0x1
006E35CC  6A 04                     PUSH 0x4
006E35CE  6A 1C                     PUSH 0x1c
006E35D0  89 15 70 6D 85 00         MOV dword ptr [0x00856d70],EDX
006E35D6  E8 B5 0C 00 00            CALL 0x006e4290
006E35DB  6A 05                     PUSH 0x5
006E35DD  6A 0C                     PUSH 0xc
006E35DF  6A 05                     PUSH 0x5
006E35E1  6A 00                     PUSH 0x0
006E35E3  E8 A8 AC FC FF            CALL 0x006ae290
006E35E8  6A 0A                     PUSH 0xa
006E35EA  6A 08                     PUSH 0x8
006E35EC  6A 14                     PUSH 0x14
006E35EE  6A 00                     PUSH 0x0
006E35F0  89 47 10                  MOV dword ptr [EDI + 0x10],EAX
006E35F3  E8 98 AC FC FF            CALL 0x006ae290
006E35F8  6A 0A                     PUSH 0xa
006E35FA  6A 20                     PUSH 0x20
006E35FC  6A 14                     PUSH 0x14
006E35FE  6A 00                     PUSH 0x0
006E3600  89 47 0C                  MOV dword ptr [EDI + 0xc],EAX
006E3603  E8 88 AC FC FF            CALL 0x006ae290
006E3608  6A 0A                     PUSH 0xa
006E360A  6A 20                     PUSH 0x20
006E360C  6A 14                     PUSH 0x14
006E360E  6A 00                     PUSH 0x0
006E3610  89 47 28                  MOV dword ptr [EDI + 0x28],EAX
006E3613  E8 78 AC FC FF            CALL 0x006ae290
006E3618  8B 4D B4                  MOV ECX,dword ptr [EBP + -0x4c]
006E361B  89 47 2C                  MOV dword ptr [EDI + 0x2c],EAX
006E361E  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
006E3624  B8 01 00 00 00            MOV EAX,0x1
006E3629  5F                        POP EDI
006E362A  5E                        POP ESI
006E362B  5B                        POP EBX
006E362C  8B E5                     MOV ESP,EBP
006E362E  5D                        POP EBP
006E362F  C2 10 00                  RET 0x10
LAB_006e3632:
006E3632  8B 55 B4                  MOV EDX,dword ptr [EBP + -0x4c]
006E3635  68 70 E7 7E 00            PUSH 0x7ee770
006E363A  68 CC 4C 7A 00            PUSH 0x7a4ccc
006E363F  56                        PUSH ESI
006E3640  6A 00                     PUSH 0x0
006E3642  6A 44                     PUSH 0x44
006E3644  68 8C E7 7E 00            PUSH 0x7ee78c
006E3649  89 15 F8 8D 85 00         MOV dword ptr [0x00858df8],EDX
006E364F  E8 7C 9E FC FF            CALL 0x006ad4d0
006E3654  83 C4 18                  ADD ESP,0x18
006E3657  85 C0                     TEST EAX,EAX
006E3659  74 01                     JZ 0x006e365c
006E365B  CC                        INT3
LAB_006e365c:
006E365C  6A 45                     PUSH 0x45
006E365E  68 8C E7 7E 00            PUSH 0x7ee78c
006E3663  6A 00                     PUSH 0x0
006E3665  56                        PUSH ESI
006E3666  E8 D5 27 FC FF            CALL 0x006a5e40
006E366B  5F                        POP EDI
006E366C  5E                        POP ESI
006E366D  33 C0                     XOR EAX,EAX
006E366F  5B                        POP EBX
006E3670  8B E5                     MOV ESP,EBP
006E3672  5D                        POP EBP
006E3673  C2 10 00                  RET 0x10
