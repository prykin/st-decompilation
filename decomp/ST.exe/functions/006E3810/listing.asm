AppClassTy::CreateObject:
006E3810  55                        PUSH EBP
006E3811  8B EC                     MOV EBP,ESP
006E3813  83 EC 50                  SUB ESP,0x50
006E3816  A1 F8 8D 85 00            MOV EAX,[0x00858df8]
006E381B  53                        PUSH EBX
006E381C  56                        PUSH ESI
006E381D  89 4D FC                  MOV dword ptr [EBP + -0x4],ECX
006E3820  57                        PUSH EDI
006E3821  8D 55 B4                  LEA EDX,[EBP + -0x4c]
006E3824  8D 4D B0                  LEA ECX,[EBP + -0x50]
006E3827  6A 00                     PUSH 0x0
006E3829  52                        PUSH EDX
006E382A  89 45 B0                  MOV dword ptr [EBP + -0x50],EAX
006E382D  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
006E3833  E8 B8 9F 04 00            CALL 0x0072d7f0
006E3838  83 C4 08                  ADD ESP,0x8
006E383B  85 C0                     TEST EAX,EAX
006E383D  0F 85 D5 00 00 00         JNZ 0x006e3918
006E3843  8B 5D FC                  MOV EBX,dword ptr [EBP + -0x4]
006E3846  89 45 F8                  MOV dword ptr [EBP + -0x8],EAX
006E3849  8B 73 08                  MOV ESI,dword ptr [EBX + 0x8]
006E384C  85 F6                     TEST ESI,ESI
006E384E  74 25                     JZ 0x006e3875
006E3850  8B 0E                     MOV ECX,dword ptr [ESI]
006E3852  33 FF                     XOR EDI,EDI
006E3854  85 C9                     TEST ECX,ECX
006E3856  74 34                     JZ 0x006e388c
006E3858  8B D6                     MOV EDX,ESI
LAB_006e385a:
006E385A  3B 4D 08                  CMP ECX,dword ptr [EBP + 0x8]
006E385D  74 0D                     JZ 0x006e386c
006E385F  8B 4A 08                  MOV ECX,dword ptr [EDX + 0x8]
006E3862  83 C2 08                  ADD EDX,0x8
006E3865  47                        INC EDI
006E3866  85 C9                     TEST ECX,ECX
006E3868  75 F0                     JNZ 0x006e385a
006E386A  EB 20                     JMP 0x006e388c
LAB_006e386c:
006E386C  FF 54 FE 04               CALL dword ptr [ESI + EDI*0x8 + 0x4]
006E3870  89 45 F8                  MOV dword ptr [EBP + -0x8],EAX
006E3873  EB 17                     JMP 0x006e388c
LAB_006e3875:
006E3875  A1 7C D7 7E 00            MOV EAX,[0x007ed77c]
006E387A  6A 7E                     PUSH 0x7e
006E387C  68 8C E7 7E 00            PUSH 0x7ee78c
006E3881  50                        PUSH EAX
006E3882  6A FC                     PUSH -0x4
006E3884  E8 B7 25 FC FF            CALL 0x006a5e40
006E3889  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
LAB_006e388c:
006E388C  8B 75 08                  MOV ESI,dword ptr [EBP + 0x8]
006E388F  85 C0                     TEST EAX,EAX
006E3891  75 3D                     JNZ 0x006e38d0
006E3893  56                        PUSH ESI
006E3894  56                        PUSH ESI
006E3895  68 FC E7 7E 00            PUSH 0x7ee7fc
006E389A  6A 00                     PUSH 0x0
006E389C  6A 00                     PUSH 0x0
006E389E  68 80 00 00 00            PUSH 0x80
006E38A3  68 8C E7 7E 00            PUSH 0x7ee78c
006E38A8  E8 23 9C FC FF            CALL 0x006ad4d0
006E38AD  83 C4 1C                  ADD ESP,0x1c
006E38B0  85 C0                     TEST EAX,EAX
006E38B2  74 01                     JZ 0x006e38b5
006E38B4  CC                        INT3
LAB_006e38b5:
006E38B5  8B 0D 7C D7 7E 00         MOV ECX,dword ptr [0x007ed77c]
006E38BB  68 81 00 00 00            PUSH 0x81
006E38C0  68 8C E7 7E 00            PUSH 0x7ee78c
006E38C5  51                        PUSH ECX
006E38C6  6A CC                     PUSH -0x34
006E38C8  E8 73 25 FC FF            CALL 0x006a5e40
006E38CD  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
LAB_006e38d0:
006E38D0  8B 48 08                  MOV ECX,dword ptr [EAX + 0x8]
006E38D3  85 C9                     TEST ECX,ECX
006E38D5  75 1F                     JNZ 0x006e38f6
006E38D7  8B 55 0C                  MOV EDX,dword ptr [EBP + 0xc]
006E38DA  89 55 F4                  MOV dword ptr [EBP + -0xc],EDX
006E38DD  89 70 04                  MOV dword ptr [EAX + 0x4],ESI
006E38E0  8B 4D F8                  MOV ECX,dword ptr [EBP + -0x8]
006E38E3  8B 43 04                  MOV EAX,dword ptr [EBX + 0x4]
006E38E6  89 41 08                  MOV dword ptr [ECX + 0x8],EAX
006E38E9  8B 43 04                  MOV EAX,dword ptr [EBX + 0x4]
006E38EC  8B 55 F8                  MOV EDX,dword ptr [EBP + -0x8]
006E38EF  40                        INC EAX
006E38F0  89 43 04                  MOV dword ptr [EBX + 0x4],EAX
006E38F3  89 5A 10                  MOV dword ptr [EDX + 0x10],EBX
LAB_006e38f6:
006E38F6  8B 4B 0C                  MOV ECX,dword ptr [EBX + 0xc]
006E38F9  8D 45 F4                  LEA EAX,[EBP + -0xc]
006E38FC  50                        PUSH EAX
006E38FD  51                        PUSH ECX
006E38FE  E8 BD A8 FC FF            CALL 0x006ae1c0
006E3903  8B 55 B0                  MOV EDX,dword ptr [EBP + -0x50]
006E3906  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
006E3909  89 15 F8 8D 85 00         MOV dword ptr [0x00858df8],EDX
006E390F  5F                        POP EDI
006E3910  5E                        POP ESI
006E3911  5B                        POP EBX
006E3912  8B E5                     MOV ESP,EBP
006E3914  5D                        POP EBP
006E3915  C2 08 00                  RET 0x8
LAB_006e3918:
006E3918  8B 4D B0                  MOV ECX,dword ptr [EBP + -0x50]
006E391B  68 D8 E7 7E 00            PUSH 0x7ee7d8
006E3920  68 CC 4C 7A 00            PUSH 0x7a4ccc
006E3925  50                        PUSH EAX
006E3926  6A 00                     PUSH 0x0
006E3928  68 8C 00 00 00            PUSH 0x8c
006E392D  68 8C E7 7E 00            PUSH 0x7ee78c
006E3932  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
006E3938  E8 93 9B FC FF            CALL 0x006ad4d0
006E393D  83 C4 18                  ADD ESP,0x18
006E3940  85 C0                     TEST EAX,EAX
006E3942  74 01                     JZ 0x006e3945
006E3944  CC                        INT3
LAB_006e3945:
006E3945  68 8D 00 00 00            PUSH 0x8d
006E394A  68 8C E7 7E 00            PUSH 0x7ee78c
006E394F  6A 00                     PUSH 0x0
006E3951  6A FE                     PUSH -0x2
006E3953  E8 E8 24 FC FF            CALL 0x006a5e40
006E3958  5F                        POP EDI
006E3959  5E                        POP ESI
006E395A  33 C0                     XOR EAX,EAX
006E395C  5B                        POP EBX
006E395D  8B E5                     MOV ESP,EBP
006E395F  5D                        POP EBP
006E3960  C2 08 00                  RET 0x8
