FUN_006c38f0:
006C38F0  55                        PUSH EBP
006C38F1  8B EC                     MOV EBP,ESP
006C38F3  51                        PUSH ECX
006C38F4  A1 D0 68 85 00            MOV EAX,[0x008568d0]
006C38F9  53                        PUSH EBX
006C38FA  8B 5D 08                  MOV EBX,dword ptr [EBP + 0x8]
006C38FD  56                        PUSH ESI
006C38FE  57                        PUSH EDI
006C38FF  33 FF                     XOR EDI,EDI
006C3901  53                        PUSH EBX
006C3902  50                        PUSH EAX
006C3903  89 7D FC                  MOV dword ptr [EBP + -0x4],EDI
006C3906  E8 C5 FF FF FF            CALL 0x006c38d0
006C390B  8B F0                     MOV ESI,EAX
006C390D  3B F7                     CMP ESI,EDI
006C390F  74 06                     JZ 0x006c3917
006C3911  8B BE 88 00 00 00         MOV EDI,dword ptr [ESI + 0x88]
LAB_006c3917:
006C3917  8B 4D 0C                  MOV ECX,dword ptr [EBP + 0xc]
006C391A  8B C1                     MOV EAX,ECX
006C391C  83 E8 1C                  SUB EAX,0x1c
006C391F  0F 84 B0 00 00 00         JZ 0x006c39d5
006C3925  2D E4 00 00 00            SUB EAX,0xe4
006C392A  74 73                     JZ 0x006c399f
006C392C  48                        DEC EAX
006C392D  74 24                     JZ 0x006c3953
006C392F  85 FF                     TEST EDI,EDI
006C3931  74 15                     JZ 0x006c3948
006C3933  8B 55 14                  MOV EDX,dword ptr [EBP + 0x14]
006C3936  8B 45 10                  MOV EAX,dword ptr [EBP + 0x10]
006C3939  52                        PUSH EDX
006C393A  50                        PUSH EAX
006C393B  51                        PUSH ECX
006C393C  53                        PUSH EBX
006C393D  FF D7                     CALL EDI
006C393F  5F                        POP EDI
006C3940  5E                        POP ESI
006C3941  5B                        POP EBX
006C3942  8B E5                     MOV ESP,EBP
006C3944  5D                        POP EBP
006C3945  C2 10 00                  RET 0x10
LAB_006c3948:
006C3948  5F                        POP EDI
006C3949  5E                        POP ESI
006C394A  33 C0                     XOR EAX,EAX
006C394C  5B                        POP EBX
006C394D  8B E5                     MOV ESP,EBP
006C394F  5D                        POP EBP
006C3950  C2 10 00                  RET 0x10
LAB_006c3953:
006C3953  8B 45 10                  MOV EAX,dword ptr [EBP + 0x10]
006C3956  83 F8 1B                  CMP EAX,0x1b
006C3959  75 2A                     JNZ 0x006c3985
006C395B  F7 46 04 00 00 00 20      TEST dword ptr [ESI + 0x4],0x20000000
006C3962  74 21                     JZ 0x006c3985
006C3964  56                        PUSH ESI
006C3965  E8 A6 07 00 00            CALL 0x006c4110
006C396A  85 FF                     TEST EDI,EDI
006C396C  74 DA                     JZ 0x006c3948
006C396E  8B 8E 80 00 00 00         MOV ECX,dword ptr [ESI + 0x80]
006C3974  6A 00                     PUSH 0x0
006C3976  6A 02                     PUSH 0x2
006C3978  51                        PUSH ECX
006C3979  53                        PUSH EBX
006C397A  FF D7                     CALL EDI
006C397C  5F                        POP EDI
006C397D  5E                        POP ESI
006C397E  5B                        POP EBX
006C397F  8B E5                     MOV ESP,EBP
006C3981  5D                        POP EBP
006C3982  C2 10 00                  RET 0x10
LAB_006c3985:
006C3985  85 FF                     TEST EDI,EDI
006C3987  74 BF                     JZ 0x006c3948
006C3989  8B 55 14                  MOV EDX,dword ptr [EBP + 0x14]
006C398C  52                        PUSH EDX
006C398D  50                        PUSH EAX
006C398E  68 01 01 00 00            PUSH 0x101
006C3993  53                        PUSH EBX
006C3994  FF D7                     CALL EDI
006C3996  5F                        POP EDI
006C3997  5E                        POP ESI
006C3998  5B                        POP EBX
006C3999  8B E5                     MOV ESP,EBP
006C399B  5D                        POP EBP
006C399C  C2 10 00                  RET 0x10
LAB_006c399f:
006C399F  8B 45 10                  MOV EAX,dword ptr [EBP + 0x10]
006C39A2  83 F8 1B                  CMP EAX,0x1b
006C39A5  75 0D                     JNZ 0x006c39b4
006C39A7  F7 46 04 00 00 00 20      TEST dword ptr [ESI + 0x4],0x20000000
006C39AE  0F 85 DF 00 00 00         JNZ 0x006c3a93
LAB_006c39b4:
006C39B4  85 FF                     TEST EDI,EDI
006C39B6  0F 84 D0 00 00 00         JZ 0x006c3a8c
006C39BC  8B 4D 14                  MOV ECX,dword ptr [EBP + 0x14]
006C39BF  51                        PUSH ECX
006C39C0  50                        PUSH EAX
006C39C1  68 00 01 00 00            PUSH 0x100
006C39C6  53                        PUSH EBX
006C39C7  FF D7                     CALL EDI
006C39C9  5F                        POP EDI
006C39CA  5E                        POP ESI
006C39CB  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
006C39CE  5B                        POP EBX
006C39CF  8B E5                     MOV ESP,EBP
006C39D1  5D                        POP EBP
006C39D2  C2 10 00                  RET 0x10
LAB_006c39d5:
006C39D5  8B 5D 10                  MOV EBX,dword ptr [EBP + 0x10]
006C39D8  85 DB                     TEST EBX,EBX
006C39DA  75 1D                     JNZ 0x006c39f9
006C39DC  85 FF                     TEST EDI,EDI
006C39DE  74 12                     JZ 0x006c39f2
006C39E0  8B 55 14                  MOV EDX,dword ptr [EBP + 0x14]
006C39E3  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
006C39E6  52                        PUSH EDX
006C39E7  53                        PUSH EBX
006C39E8  6A 1C                     PUSH 0x1c
006C39EA  50                        PUSH EAX
006C39EB  FF D7                     CALL EDI
006C39ED  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
006C39F0  EB 07                     JMP 0x006c39f9
LAB_006c39f2:
006C39F2  C7 45 FC 00 00 00 00      MOV dword ptr [EBP + -0x4],0x0
LAB_006c39f9:
006C39F9  8B 35 D0 68 85 00         MOV ESI,dword ptr [0x008568d0]
006C39FF  85 F6                     TEST ESI,ESI
006C3A01  74 68                     JZ 0x006c3a6b
LAB_006c3a03:
006C3A03  8B 4E 78                  MOV ECX,dword ptr [ESI + 0x78]
006C3A06  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
006C3A09  3B C8                     CMP ECX,EAX
006C3A0B  75 58                     JNZ 0x006c3a65
006C3A0D  8B 4E 40                  MOV ECX,dword ptr [ESI + 0x40]
006C3A10  85 C9                     TEST ECX,ECX
006C3A12  74 51                     JZ 0x006c3a65
006C3A14  8B 56 48                  MOV EDX,dword ptr [ESI + 0x48]
006C3A17  52                        PUSH EDX
006C3A18  53                        PUSH EBX
006C3A19  6A 13                     PUSH 0x13
006C3A1B  E8 E6 39 08 00            CALL 0x00747406
006C3A20  8B 46 28                  MOV EAX,dword ptr [ESI + 0x28]
006C3A23  F6 40 08 01               TEST byte ptr [EAX + 0x8],0x1
006C3A27  74 3C                     JZ 0x006c3a65
006C3A29  8B 46 04                  MOV EAX,dword ptr [ESI + 0x4]
006C3A2C  85 DB                     TEST EBX,EBX
006C3A2E  74 1A                     JZ 0x006c3a4a
006C3A30  A9 00 00 00 10            TEST EAX,0x10000000
006C3A35  74 2E                     JZ 0x006c3a65
006C3A37  8B 46 5C                  MOV EAX,dword ptr [ESI + 0x5c]
006C3A3A  50                        PUSH EAX
006C3A3B  8B 08                     MOV ECX,dword ptr [EAX]
006C3A3D  FF 51 1C                  CALL dword ptr [ECX + 0x1c]
006C3A40  8B 46 04                  MOV EAX,dword ptr [ESI + 0x4]
006C3A43  25 FF FF FF EF            AND EAX,0xefffffff
006C3A48  EB 18                     JMP 0x006c3a62
LAB_006c3a4a:
006C3A4A  A9 00 00 00 20            TEST EAX,0x20000000
006C3A4F  74 14                     JZ 0x006c3a65
006C3A51  8B 46 5C                  MOV EAX,dword ptr [ESI + 0x5c]
006C3A54  50                        PUSH EAX
006C3A55  8B 10                     MOV EDX,dword ptr [EAX]
006C3A57  FF 52 20                  CALL dword ptr [EDX + 0x20]
006C3A5A  8B 46 04                  MOV EAX,dword ptr [ESI + 0x4]
006C3A5D  0D 00 00 00 10            OR EAX,0x10000000
LAB_006c3a62:
006C3A62  89 46 04                  MOV dword ptr [ESI + 0x4],EAX
LAB_006c3a65:
006C3A65  8B 36                     MOV ESI,dword ptr [ESI]
006C3A67  85 F6                     TEST ESI,ESI
006C3A69  75 98                     JNZ 0x006c3a03
LAB_006c3a6b:
006C3A6B  85 DB                     TEST EBX,EBX
006C3A6D  74 24                     JZ 0x006c3a93
006C3A6F  85 FF                     TEST EDI,EDI
006C3A71  74 19                     JZ 0x006c3a8c
006C3A73  8B 45 14                  MOV EAX,dword ptr [EBP + 0x14]
006C3A76  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
006C3A79  50                        PUSH EAX
006C3A7A  53                        PUSH EBX
006C3A7B  6A 1C                     PUSH 0x1c
006C3A7D  51                        PUSH ECX
006C3A7E  FF D7                     CALL EDI
006C3A80  5F                        POP EDI
006C3A81  5E                        POP ESI
006C3A82  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
006C3A85  5B                        POP EBX
006C3A86  8B E5                     MOV ESP,EBP
006C3A88  5D                        POP EBP
006C3A89  C2 10 00                  RET 0x10
LAB_006c3a8c:
006C3A8C  C7 45 FC 00 00 00 00      MOV dword ptr [EBP + -0x4],0x0
LAB_006c3a93:
006C3A93  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
006C3A96  5F                        POP EDI
006C3A97  5E                        POP ESI
006C3A98  5B                        POP EBX
006C3A99  8B E5                     MOV ESP,EBP
006C3A9B  5D                        POP EBP
006C3A9C  C2 10 00                  RET 0x10
