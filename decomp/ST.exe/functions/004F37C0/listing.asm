FUN_004f37c0:
004F37C0  55                        PUSH EBP
004F37C1  8B EC                     MOV EBP,ESP
004F37C3  83 EC 50                  SUB ESP,0x50
004F37C6  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
004F37C9  8B 15 F8 8D 85 00         MOV EDX,dword ptr [0x00858df8]
004F37CF  89 4D FC                  MOV dword ptr [EBP + -0x4],ECX
004F37D2  53                        PUSH EBX
004F37D3  8B 48 18                  MOV ECX,dword ptr [EAX + 0x18]
004F37D6  56                        PUSH ESI
004F37D7  89 4D F4                  MOV dword ptr [EBP + -0xc],ECX
004F37DA  57                        PUSH EDI
004F37DB  8D 4D B4                  LEA ECX,[EBP + -0x4c]
004F37DE  8D 45 B0                  LEA EAX,[EBP + -0x50]
004F37E1  6A 00                     PUSH 0x0
004F37E3  51                        PUSH ECX
004F37E4  C7 45 F8 00 00 00 00      MOV dword ptr [EBP + -0x8],0x0
004F37EB  89 55 B0                  MOV dword ptr [EBP + -0x50],EDX
004F37EE  A3 F8 8D 85 00            MOV [0x00858df8],EAX
004F37F3  E8 F8 9F 23 00            CALL 0x0072d7f0
004F37F8  8B F0                     MOV ESI,EAX
004F37FA  83 C4 08                  ADD ESP,0x8
004F37FD  85 F6                     TEST ESI,ESI
004F37FF  0F 85 3F 01 00 00         JNZ 0x004f3944
004F3805  8B 55 18                  MOV EDX,dword ptr [EBP + 0x18]
004F3808  6A 01                     PUSH 0x1
004F380A  81 E2 FF 00 00 00         AND EDX,0xff
004F3810  50                        PUSH EAX
004F3811  8B 45 14                  MOV EAX,dword ptr [EBP + 0x14]
004F3814  52                        PUSH EDX
004F3815  6A 01                     PUSH 0x1
004F3817  50                        PUSH EAX
004F3818  E8 E3 F3 1F 00            CALL 0x006f2c00
004F381D  8B 5D 10                  MOV EBX,dword ptr [EBP + 0x10]
004F3820  8B 0D 90 67 80 00         MOV ECX,dword ptr [0x00806790]
004F3826  83 C4 0C                  ADD ESP,0xc
004F3829  50                        PUSH EAX
004F382A  53                        PUSH EBX
004F382B  E8 B0 E4 1F 00            CALL 0x006f1ce0
004F3830  8B 75 08                  MOV ESI,dword ptr [EBP + 0x8]
004F3833  8B 4D F4                  MOV ECX,dword ptr [EBP + -0xc]
004F3836  81 E6 FF 00 00 00         AND ESI,0xff
004F383C  89 45 F8                  MOV dword ptr [EBP + -0x8],EAX
004F383F  8B 49 04                  MOV ECX,dword ptr [ECX + 0x4]
004F3842  8D 56 FF                  LEA EDX,[ESI + -0x1]
004F3845  83 FA 06                  CMP EDX,0x6
004F3848  0F 87 D9 00 00 00         JA 0x004f3927
switchD_004f384e::switchD:
004F384E  FF 24 95 8C 39 4F 00      JMP dword ptr [EDX*0x4 + 0x4f398c]
switchD_004f384e::caseD_1:
004F3855  8B 7D FC                  MOV EDI,dword ptr [EBP + -0x4]
004F3858  8B 97 34 01 00 00         MOV EDX,dword ptr [EDI + 0x134]
004F385E  85 D2                     TEST EDX,EDX
004F3860  74 4B                     JZ 0x004f38ad
004F3862  8B 94 B7 94 00 00 00      MOV EDX,dword ptr [EDI + ESI*0x4 + 0x94]
004F3869  EB 4E                     JMP 0x004f38b9
switchD_004f384e::caseD_3:
004F386B  8B 7D FC                  MOV EDI,dword ptr [EBP + -0x4]
004F386E  8B 97 34 01 00 00         MOV EDX,dword ptr [EDI + 0x134]
004F3874  85 D2                     TEST EDX,EDX
004F3876  74 3B                     JZ 0x004f38b3
004F3878  8B 94 B7 94 00 00 00      MOV EDX,dword ptr [EDI + ESI*0x4 + 0x94]
004F387F  EB 38                     JMP 0x004f38b9
switchD_004f384e::caseD_5:
004F3881  8B 7D FC                  MOV EDI,dword ptr [EBP + -0x4]
004F3884  8B 97 38 01 00 00         MOV EDX,dword ptr [EDI + 0x138]
004F388A  85 D2                     TEST EDX,EDX
004F388C  74 25                     JZ 0x004f38b3
004F388E  8B 94 B7 94 00 00 00      MOV EDX,dword ptr [EDI + ESI*0x4 + 0x94]
004F3895  EB 22                     JMP 0x004f38b9
switchD_004f384e::caseD_7:
004F3897  8B 7D FC                  MOV EDI,dword ptr [EBP + -0x4]
004F389A  8B 97 38 01 00 00         MOV EDX,dword ptr [EDI + 0x138]
004F38A0  85 D2                     TEST EDX,EDX
004F38A2  74 09                     JZ 0x004f38ad
004F38A4  8B 94 B7 94 00 00 00      MOV EDX,dword ptr [EDI + ESI*0x4 + 0x94]
004F38AB  EB 0C                     JMP 0x004f38b9
LAB_004f38ad:
004F38AD  2B 8F C0 00 00 00         SUB ECX,dword ptr [EDI + 0xc0]
LAB_004f38b3:
004F38B3  8B 15 34 67 80 00         MOV EDX,dword ptr [0x00806734]
LAB_004f38b9:
004F38B9  2B CA                     SUB ECX,EDX
004F38BB  8B 55 F4                  MOV EDX,dword ptr [EBP + -0xc]
004F38BE  50                        PUSH EAX
004F38BF  53                        PUSH EBX
004F38C0  8B 02                     MOV EAX,dword ptr [EDX]
004F38C2  8B 54 B7 3C               MOV EDX,dword ptr [EDI + ESI*0x4 + 0x3c]
004F38C6  51                        PUSH ECX
004F38C7  8B 8C B7 80 01 00 00      MOV ECX,dword ptr [EDI + ESI*0x4 + 0x180]
004F38CE  2B C2                     SUB EAX,EDX
004F38D0  50                        PUSH EAX
004F38D1  51                        PUSH ECX
004F38D2  E8 52 F9 F0 FF            CALL 0x00403229
004F38D7  8B 0D 90 67 80 00         MOV ECX,dword ptr [0x00806790]
004F38DD  83 C4 14                  ADD ESP,0x14
004F38E0  8D 55 F8                  LEA EDX,[EBP + -0x8]
004F38E3  52                        PUSH EDX
004F38E4  E8 F7 E7 1F 00            CALL 0x006f20e0
004F38E9  80 7D 08 0B               CMP byte ptr [EBP + 0x8],0xb
004F38ED  73 26                     JNC 0x004f3915
004F38EF  8B 84 B7 48 01 00 00      MOV EAX,dword ptr [EDI + ESI*0x4 + 0x148]
004F38F6  85 C0                     TEST EAX,EAX
004F38F8  7C 1B                     JL 0x004f3915
004F38FA  8B 8C B7 94 00 00 00      MOV ECX,dword ptr [EDI + ESI*0x4 + 0x94]
004F3901  8B 54 B7 3C               MOV EDX,dword ptr [EDI + ESI*0x4 + 0x3c]
004F3905  51                        PUSH ECX
004F3906  52                        PUSH EDX
004F3907  6A FF                     PUSH -0x1
004F3909  50                        PUSH EAX
004F390A  A1 A8 75 80 00            MOV EAX,[0x008075a8]
004F390F  50                        PUSH EAX
004F3910  E8 2B FD 1B 00            CALL 0x006b3640
LAB_004f3915:
004F3915  8B 4D B0                  MOV ECX,dword ptr [EBP + -0x50]
004F3918  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
004F391E  5F                        POP EDI
004F391F  5E                        POP ESI
004F3920  5B                        POP EBX
004F3921  8B E5                     MOV ESP,EBP
004F3923  5D                        POP EBP
004F3924  C2 14 00                  RET 0x14
switchD_004f384e::caseD_2:
004F3927  8B 7D FC                  MOV EDI,dword ptr [EBP + -0x4]
004F392A  8B 97 30 01 00 00         MOV EDX,dword ptr [EDI + 0x130]
004F3930  85 D2                     TEST EDX,EDX
004F3932  0F 84 7B FF FF FF         JZ 0x004f38b3
004F3938  8B 94 B7 94 00 00 00      MOV EDX,dword ptr [EDI + ESI*0x4 + 0x94]
004F393F  E9 75 FF FF FF            JMP 0x004f38b9
LAB_004f3944:
004F3944  8B 55 B0                  MOV EDX,dword ptr [EBP + -0x50]
004F3947  68 50 1B 7C 00            PUSH 0x7c1b50
004F394C  68 CC 4C 7A 00            PUSH 0x7a4ccc
004F3951  56                        PUSH ESI
004F3952  6A 00                     PUSH 0x0
004F3954  68 DE 01 00 00            PUSH 0x1de
004F3959  68 4C 1A 7C 00            PUSH 0x7c1a4c
004F395E  89 15 F8 8D 85 00         MOV dword ptr [0x00858df8],EDX
004F3964  E8 67 9B 1B 00            CALL 0x006ad4d0
004F3969  83 C4 18                  ADD ESP,0x18
004F396C  85 C0                     TEST EAX,EAX
004F396E  74 01                     JZ 0x004f3971
004F3970  CC                        INT3
LAB_004f3971:
004F3971  68 DE 01 00 00            PUSH 0x1de
004F3976  68 4C 1A 7C 00            PUSH 0x7c1a4c
004F397B  6A 00                     PUSH 0x0
004F397D  56                        PUSH ESI
004F397E  E8 BD 24 1B 00            CALL 0x006a5e40
004F3983  5F                        POP EDI
004F3984  5E                        POP ESI
004F3985  5B                        POP EBX
004F3986  8B E5                     MOV ESP,EBP
004F3988  5D                        POP EBP
004F3989  C2 14 00                  RET 0x14
