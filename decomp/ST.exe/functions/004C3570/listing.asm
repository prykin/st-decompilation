FUN_004c3570:
004C3570  55                        PUSH EBP
004C3571  8B EC                     MOV EBP,ESP
004C3573  83 EC 58                  SUB ESP,0x58
004C3576  A1 F8 8D 85 00            MOV EAX,[0x00858df8]
004C357B  53                        PUSH EBX
004C357C  56                        PUSH ESI
004C357D  89 4D EC                  MOV dword ptr [EBP + -0x14],ECX
004C3580  57                        PUSH EDI
004C3581  8D 55 AC                  LEA EDX,[EBP + -0x54]
004C3584  8D 4D A8                  LEA ECX,[EBP + -0x58]
004C3587  6A 00                     PUSH 0x0
004C3589  52                        PUSH EDX
004C358A  89 45 A8                  MOV dword ptr [EBP + -0x58],EAX
004C358D  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
004C3593  E8 58 A2 26 00            CALL 0x0072d7f0
004C3598  8B F0                     MOV ESI,EAX
004C359A  83 C4 08                  ADD ESP,0x8
004C359D  85 F6                     TEST ESI,ESI
004C359F  0F 85 B7 04 00 00         JNZ 0x004c3a5c
004C35A5  8B 7D EC                  MOV EDI,dword ptr [EBP + -0x14]
004C35A8  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
004C35AB  8B 87 5D 02 00 00         MOV EAX,dword ptr [EDI + 0x25d]
004C35B1  85 C0                     TEST EAX,EAX
004C35B3  0F 8E 42 04 00 00         JLE 0x004c39fb
004C35B9  8D B7 85 02 00 00         LEA ESI,[EDI + 0x285]
LAB_004c35bf:
004C35BF  8B 46 E0                  MOV EAX,dword ptr [ESI + -0x20]
004C35C2  85 C0                     TEST EAX,EAX
004C35C4  0F 84 16 04 00 00         JZ 0x004c39e0
004C35CA  8B 87 55 02 00 00         MOV EAX,dword ptr [EDI + 0x255]
004C35D0  85 C0                     TEST EAX,EAX
004C35D2  0F 84 3A 02 00 00         JZ 0x004c3812
004C35D8  8B 46 F0                  MOV EAX,dword ptr [ESI + -0x10]
004C35DB  85 C0                     TEST EAX,EAX
004C35DD  0F 84 48 01 00 00         JZ 0x004c372b
004C35E3  8B 8F 35 02 00 00         MOV ECX,dword ptr [EDI + 0x235]
004C35E9  A1 38 2A 80 00            MOV EAX,[0x00802a38]
004C35EE  8B 1E                     MOV EBX,dword ptr [ESI]
004C35F0  8B 14 8D 40 20 79 00      MOV EDX,dword ptr [ECX*0x4 + 0x792040]
004C35F7  8B 80 E4 00 00 00         MOV EAX,dword ptr [EAX + 0xe4]
004C35FD  03 D3                     ADD EDX,EBX
004C35FF  3B C2                     CMP EAX,EDX
004C3601  0F 82 24 01 00 00         JC 0x004c372b
004C3607  89 06                     MOV dword ptr [ESI],EAX
004C3609  8B 8F 35 02 00 00         MOV ECX,dword ptr [EDI + 0x235]
004C360F  A1 38 2A 80 00            MOV EAX,[0x00802a38]
004C3614  8B 5E 04                  MOV EBX,dword ptr [ESI + 0x4]
004C3617  8B 0C 8D 40 20 79 00      MOV ECX,dword ptr [ECX*0x4 + 0x792040]
004C361E  33 D2                     XOR EDX,EDX
004C3620  8B 80 E4 00 00 00         MOV EAX,dword ptr [EAX + 0xe4]
004C3626  8D 0C 89                  LEA ECX,[ECX + ECX*0x4]
004C3629  8D 0C 4B                  LEA ECX,[EBX + ECX*0x2]
004C362C  3B C1                     CMP EAX,ECX
004C362E  72 14                     JC 0x004c3644
004C3630  52                        PUSH EDX
004C3631  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
004C3634  52                        PUSH EDX
004C3635  8B CF                     MOV ECX,EDI
004C3637  89 46 04                  MOV dword ptr [ESI + 0x4],EAX
004C363A  E8 5D ED F3 FF            CALL 0x0040239c
004C363F  BA 01 00 00 00            MOV EDX,0x1
LAB_004c3644:
004C3644  8B 46 08                  MOV EAX,dword ptr [ESI + 0x8]
004C3647  85 C0                     TEST EAX,EAX
004C3649  0F 84 DC 00 00 00         JZ 0x004c372b
004C364F  A1 38 2A 80 00            MOV EAX,[0x00802a38]
004C3654  85 D2                     TEST EDX,EDX
004C3656  8B 88 E4 00 00 00         MOV ECX,dword ptr [EAX + 0xe4]
004C365C  89 4E 30                  MOV dword ptr [ESI + 0x30],ECX
004C365F  C7 46 34 64 00 00 00      MOV dword ptr [ESI + 0x34],0x64
004C3666  74 0A                     JZ 0x004c3672
004C3668  8B 46 0C                  MOV EAX,dword ptr [ESI + 0xc]
004C366B  8D 5E 0C                  LEA EBX,[ESI + 0xc]
004C366E  85 C0                     TEST EAX,EAX
004C3670  75 19                     JNZ 0x004c368b
LAB_004c3672:
004C3672  8D 5E 0C                  LEA EBX,[ESI + 0xc]
004C3675  53                        PUSH EBX
004C3676  C7 03 00 00 00 00         MOV dword ptr [EBX],0x0
004C367C  8B 56 08                  MOV EDX,dword ptr [ESI + 0x8]
004C367F  8B 0D 38 2A 80 00         MOV ECX,dword ptr [0x00802a38]
004C3685  52                        PUSH EDX
004C3686  E8 45 2C 22 00            CALL 0x006e62d0
LAB_004c368b:
004C368B  8B 03                     MOV EAX,dword ptr [EBX]
004C368D  85 C0                     TEST EAX,EAX
004C368F  0F 84 96 00 00 00         JZ 0x004c372b
004C3695  8D 4D F0                  LEA ECX,[EBP + -0x10]
004C3698  85 C9                     TEST ECX,ECX
004C369A  74 08                     JZ 0x004c36a4
004C369C  66 8B 57 41               MOV DX,word ptr [EDI + 0x41]
004C36A0  66 89 55 F0               MOV word ptr [EBP + -0x10],DX
LAB_004c36a4:
004C36A4  8D 4D F4                  LEA ECX,[EBP + -0xc]
004C36A7  85 C9                     TEST ECX,ECX
004C36A9  74 08                     JZ 0x004c36b3
004C36AB  66 8B 57 43               MOV DX,word ptr [EDI + 0x43]
004C36AF  66 89 55 F4               MOV word ptr [EBP + -0xc],DX
LAB_004c36b3:
004C36B3  8D 4D F8                  LEA ECX,[EBP + -0x8]
004C36B6  85 C9                     TEST ECX,ECX
004C36B8  74 08                     JZ 0x004c36c2
004C36BA  66 8B 57 45               MOV DX,word ptr [EDI + 0x45]
004C36BE  66 89 55 F8               MOV word ptr [EBP + -0x8],DX
LAB_004c36c2:
004C36C2  8B 4D F8                  MOV ECX,dword ptr [EBP + -0x8]
004C36C5  8B 17                     MOV EDX,dword ptr [EDI]
004C36C7  51                        PUSH ECX
004C36C8  8B 4D F4                  MOV ECX,dword ptr [EBP + -0xc]
004C36CB  51                        PUSH ECX
004C36CC  8B 4D F0                  MOV ECX,dword ptr [EBP + -0x10]
004C36CF  51                        PUSH ECX
004C36D0  66 8B 48 45               MOV CX,word ptr [EAX + 0x45]
004C36D4  51                        PUSH ECX
004C36D5  66 8B 48 43               MOV CX,word ptr [EAX + 0x43]
004C36D9  66 8B 40 41               MOV AX,word ptr [EAX + 0x41]
004C36DD  51                        PUSH ECX
004C36DE  50                        PUSH EAX
004C36DF  8B CF                     MOV ECX,EDI
004C36E1  FF 52 10                  CALL dword ptr [EDX + 0x10]
004C36E4  0F BF C0                  MOVSX EAX,AX
004C36E7  05 B4 00 00 00            ADD EAX,0xb4
004C36EC  B9 68 01 00 00            MOV ECX,0x168
004C36F1  99                        CDQ
004C36F2  F7 F9                     IDIV ECX
004C36F4  83 7E F8 08               CMP dword ptr [ESI + -0x8],0x8
004C36F8  8B CA                     MOV ECX,EDX
004C36FA  75 27                     JNZ 0x004c3723
004C36FC  B8 89 88 88 88            MOV EAX,0x88888889
004C3701  F7 E9                     IMUL ECX
004C3703  03 D1                     ADD EDX,ECX
004C3705  C1 FA 03                  SAR EDX,0x3
004C3708  8B C2                     MOV EAX,EDX
004C370A  C1 E8 1F                  SHR EAX,0x1f
004C370D  03 D0                     ADD EDX,EAX
004C370F  B8 56 55 55 55            MOV EAX,0x55555556
004C3714  F7 EA                     IMUL EDX
004C3716  8B CA                     MOV ECX,EDX
004C3718  C1 E9 1F                  SHR ECX,0x1f
004C371B  03 D1                     ADD EDX,ECX
004C371D  8D 04 92                  LEA EAX,[EDX + EDX*0x4]
004C3720  8D 0C C0                  LEA ECX,[EAX + EAX*0x8]
LAB_004c3723:
004C3723  51                        PUSH ECX
004C3724  8B CF                     MOV ECX,EDI
004C3726  E8 78 FE F3 FF            CALL 0x004035a3
LAB_004c372b:
004C372B  8B 87 55 02 00 00         MOV EAX,dword ptr [EDI + 0x255]
004C3731  85 C0                     TEST EAX,EAX
004C3733  0F 84 D9 00 00 00         JZ 0x004c3812
004C3739  8B 46 F0                  MOV EAX,dword ptr [ESI + -0x10]
004C373C  85 C0                     TEST EAX,EAX
004C373E  0F 84 CE 00 00 00         JZ 0x004c3812
004C3744  8B 46 08                  MOV EAX,dword ptr [ESI + 0x8]
004C3747  85 C0                     TEST EAX,EAX
004C3749  0F 85 C3 00 00 00         JNZ 0x004c3812
004C374F  8B 46 2C                  MOV EAX,dword ptr [ESI + 0x2c]
004C3752  85 C0                     TEST EAX,EAX
004C3754  74 4A                     JZ 0x004c37a0
004C3756  8B 56 38                  MOV EDX,dword ptr [ESI + 0x38]
004C3759  8B CF                     MOV ECX,EDI
004C375B  52                        PUSH EDX
004C375C  E8 42 FE F3 FF            CALL 0x004035a3
004C3761  85 C0                     TEST EAX,EAX
004C3763  89 46 2C                  MOV dword ptr [ESI + 0x2c],EAX
004C3766  0F 85 A6 00 00 00         JNZ 0x004c3812
004C376C  A1 38 2A 80 00            MOV EAX,[0x00802a38]
004C3771  8B 88 E4 00 00 00         MOV ECX,dword ptr [EAX + 0xe4]
004C3777  89 4E 30                  MOV dword ptr [ESI + 0x30],ECX
004C377A  8B 57 1C                  MOV EDX,dword ptr [EDI + 0x1c]
004C377D  69 D2 6D 4E C6 41         IMUL EDX,EDX,0x41c64e6d
004C3783  B9 4C 00 00 00            MOV ECX,0x4c
004C3788  8D 82 39 30 00 00         LEA EAX,[EDX + 0x3039]
004C378E  33 D2                     XOR EDX,EDX
004C3790  89 47 1C                  MOV dword ptr [EDI + 0x1c],EAX
004C3793  C1 E8 10                  SHR EAX,0x10
004C3796  F7 F1                     DIV ECX
004C3798  83 C2 19                  ADD EDX,0x19
004C379B  89 56 34                  MOV dword ptr [ESI + 0x34],EDX
004C379E  EB 72                     JMP 0x004c3812
LAB_004c37a0:
004C37A0  8B 15 38 2A 80 00         MOV EDX,dword ptr [0x00802a38]
004C37A6  8B 4E 34                  MOV ECX,dword ptr [ESI + 0x34]
004C37A9  8B 5E 30                  MOV EBX,dword ptr [ESI + 0x30]
004C37AC  8B 82 E4 00 00 00         MOV EAX,dword ptr [EDX + 0xe4]
004C37B2  03 CB                     ADD ECX,EBX
004C37B4  3B C1                     CMP EAX,ECX
004C37B6  72 5A                     JC 0x004c3812
004C37B8  89 46 30                  MOV dword ptr [ESI + 0x30],EAX
004C37BB  C7 46 2C 01 00 00 00      MOV dword ptr [ESI + 0x2c],0x1
LAB_004c37c2:
004C37C2  8B 57 1C                  MOV EDX,dword ptr [EDI + 0x1c]
004C37C5  B9 18 00 00 00            MOV ECX,0x18
004C37CA  69 D2 6D 4E C6 41         IMUL EDX,EDX,0x41c64e6d
004C37D0  8D 82 39 30 00 00         LEA EAX,[EDX + 0x3039]
004C37D6  33 D2                     XOR EDX,EDX
004C37D8  89 47 1C                  MOV dword ptr [EDI + 0x1c],EAX
004C37DB  C1 E8 10                  SHR EAX,0x10
004C37DE  F7 F1                     DIV ECX
004C37E0  8B C2                     MOV EAX,EDX
004C37E2  C1 E0 04                  SHL EAX,0x4
004C37E5  2B C2                     SUB EAX,EDX
004C37E7  89 46 38                  MOV dword ptr [ESI + 0x38],EAX
004C37EA  8B 8F 59 02 00 00         MOV ECX,dword ptr [EDI + 0x259]
004C37F0  3B C1                     CMP EAX,ECX
004C37F2  74 CE                     JZ 0x004c37c2
004C37F4  8B 97 35 02 00 00         MOV EDX,dword ptr [EDI + 0x235]
004C37FA  8B 04 95 FC 5A 79 00      MOV EAX,dword ptr [EDX*0x4 + 0x795afc]
004C3801  85 C0                     TEST EAX,EAX
004C3803  74 0D                     JZ 0x004c3812
004C3805  8B 17                     MOV EDX,dword ptr [EDI]
004C3807  50                        PUSH EAX
004C3808  6A 03                     PUSH 0x3
004C380A  8B CF                     MOV ECX,EDI
004C380C  FF 92 90 00 00 00         CALL dword ptr [EDX + 0x90]
LAB_004c3812:
004C3812  A1 38 2A 80 00            MOV EAX,[0x00802a38]
004C3817  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
004C381A  8B 97 35 02 00 00         MOV EDX,dword ptr [EDI + 0x235]
004C3820  51                        PUSH ECX
004C3821  8B 98 E4 00 00 00         MOV EBX,dword ptr [EAX + 0xe4]
004C3827  8B 47 24                  MOV EAX,dword ptr [EDI + 0x24]
004C382A  52                        PUSH EDX
004C382B  50                        PUSH EAX
004C382C  E8 D8 0A F4 FF            CALL 0x00404309
004C3831  8B 56 EC                  MOV EDX,dword ptr [ESI + -0x14]
004C3834  83 C4 0C                  ADD ESP,0xc
004C3837  03 C2                     ADD EAX,EDX
004C3839  3B D8                     CMP EBX,EAX
004C383B  0F 82 41 01 00 00         JC 0x004c3982
004C3841  89 5E EC                  MOV dword ptr [ESI + -0x14],EBX
004C3844  8B 8F 35 02 00 00         MOV ECX,dword ptr [EDI + 0x235]
004C384A  8B 5D FC                  MOV EBX,dword ptr [EBP + -0x4]
004C384D  8D 04 4B                  LEA EAX,[EBX + ECX*0x2]
004C3850  8B 0C 85 28 3E 79 00      MOV ECX,dword ptr [EAX*0x4 + 0x793e28]
004C3857  85 C9                     TEST ECX,ECX
004C3859  74 22                     JZ 0x004c387d
004C385B  8B 4E 40                  MOV ECX,dword ptr [ESI + 0x40]
004C385E  8D 14 80                  LEA EDX,[EAX + EAX*0x4]
004C3861  8D 04 50                  LEA EAX,[EAX + EDX*0x2]
004C3864  3B 0C 45 D0 32 79 00      CMP ECX,dword ptr [EAX*0x2 + 0x7932d0]
004C386B  7D 10                     JGE 0x004c387d
004C386D  85 C9                     TEST ECX,ECX
004C386F  0F 84 C4 00 00 00         JZ 0x004c3939
004C3875  85 DB                     TEST EBX,EBX
004C3877  0F 8E BC 00 00 00         JLE 0x004c3939
LAB_004c387d:
004C387D  6A 01                     PUSH 0x1
004C387F  53                        PUSH EBX
004C3880  8B CF                     MOV ECX,EDI
004C3882  E8 15 EB F3 FF            CALL 0x0040239c
004C3887  8B 8F 35 02 00 00         MOV ECX,dword ptr [EDI + 0x235]
004C388D  8D 14 4B                  LEA EDX,[EBX + ECX*0x2]
004C3890  8B 04 95 90 2A 79 00      MOV EAX,dword ptr [EDX*0x4 + 0x792a90]
004C3897  83 F8 02                  CMP EAX,0x2
004C389A  74 1C                     JZ 0x004c38b8
004C389C  83 F8 03                  CMP EAX,0x3
004C389F  75 0C                     JNZ 0x004c38ad
004C38A1  53                        PUSH EBX
004C38A2  8B CF                     MOV ECX,EDI
004C38A4  E8 DE D7 F3 FF            CALL 0x00401087
004C38A9  85 C0                     TEST EAX,EAX
004C38AB  75 0B                     JNZ 0x004c38b8
LAB_004c38ad:
004C38AD  8B 46 08                  MOV EAX,dword ptr [ESI + 0x8]
004C38B0  85 C0                     TEST EAX,EAX
004C38B2  0F 84 81 00 00 00         JZ 0x004c3939
LAB_004c38b8:
004C38B8  A1 38 2A 80 00            MOV EAX,[0x00802a38]
004C38BD  8B 88 E4 00 00 00         MOV ECX,dword ptr [EAX + 0xe4]
004C38C3  89 4E 30                  MOV dword ptr [ESI + 0x30],ECX
004C38C6  C7 46 34 64 00 00 00      MOV dword ptr [ESI + 0x34],0x64
004C38CD  8B 4E 08                  MOV ECX,dword ptr [ESI + 0x8]
004C38D0  85 C9                     TEST ECX,ECX
004C38D2  74 35                     JZ 0x004c3909
004C38D4  8B 56 0C                  MOV EDX,dword ptr [ESI + 0xc]
004C38D7  8D 46 0C                  LEA EAX,[ESI + 0xc]
004C38DA  85 D2                     TEST EDX,EDX
004C38DC  75 0D                     JNZ 0x004c38eb
004C38DE  50                        PUSH EAX
004C38DF  51                        PUSH ECX
004C38E0  8B 0D 38 2A 80 00         MOV ECX,dword ptr [0x00802a38]
004C38E6  E8 E5 29 22 00            CALL 0x006e62d0
LAB_004c38eb:
004C38EB  8B 56 0C                  MOV EDX,dword ptr [ESI + 0xc]
004C38EE  0F BF 42 41               MOVSX EAX,word ptr [EDX + 0x41]
004C38F2  89 46 20                  MOV dword ptr [ESI + 0x20],EAX
004C38F5  8B 4E 0C                  MOV ECX,dword ptr [ESI + 0xc]
004C38F8  0F BF 51 43               MOVSX EDX,word ptr [ECX + 0x43]
004C38FC  89 56 24                  MOV dword ptr [ESI + 0x24],EDX
004C38FF  8B 46 0C                  MOV EAX,dword ptr [ESI + 0xc]
004C3902  0F BF 48 45               MOVSX ECX,word ptr [EAX + 0x45]
004C3906  89 4E 28                  MOV dword ptr [ESI + 0x28],ECX
LAB_004c3909:
004C3909  C7 46 18 00 00 00 00      MOV dword ptr [ESI + 0x18],0x0
004C3910  8B 97 35 02 00 00         MOV EDX,dword ptr [EDI + 0x235]
004C3916  8D 04 53                  LEA EAX,[EBX + EDX*0x2]
004C3919  8B 0C 85 F0 15 79 00      MOV ECX,dword ptr [EAX*0x4 + 0x7915f0]
004C3920  85 C9                     TEST ECX,ECX
004C3922  74 0D                     JZ 0x004c3931
004C3924  6A 01                     PUSH 0x1
004C3926  6A 05                     PUSH 0x5
004C3928  8B CF                     MOV ECX,EDI
004C392A  E8 7B D7 F3 FF            CALL 0x004010aa
004C392F  EB 08                     JMP 0x004c3939
LAB_004c3931:
004C3931  53                        PUSH EBX
004C3932  8B CF                     MOV ECX,EDI
004C3934  E8 C5 05 F4 FF            CALL 0x00403efe
LAB_004c3939:
004C3939  8B 97 35 02 00 00         MOV EDX,dword ptr [EDI + 0x235]
004C393F  8D 04 53                  LEA EAX,[EBX + EDX*0x2]
004C3942  83 3C 85 28 3E 79 00 01   CMP dword ptr [EAX*0x4 + 0x793e28],0x1
004C394A  0F 85 C0 00 00 00         JNZ 0x004c3a10
004C3950  8B 5E 40                  MOV EBX,dword ptr [ESI + 0x40]
004C3953  8B 0C 85 38 40 79 00      MOV ECX,dword ptr [EAX*0x4 + 0x794038]
004C395A  3B D9                     CMP EBX,ECX
004C395C  0F 8D AB 00 00 00         JGE 0x004c3a0d
004C3962  2B CB                     SUB ECX,EBX
004C3964  51                        PUSH ECX
004C3965  8D 0C 40                  LEA ECX,[EAX + EAX*0x2]
004C3968  8B 47 24                  MOV EAX,dword ptr [EDI + 0x24]
004C396B  8B 14 8D A0 2C 79 00      MOV EDX,dword ptr [ECX*0x4 + 0x792ca0]
004C3972  8B 0D 74 A1 7F 00         MOV ECX,dword ptr [0x007fa174]
004C3978  52                        PUSH EDX
004C3979  50                        PUSH EAX
004C397A  E8 0D 09 F4 FF            CALL 0x0040428c
004C397F  01 46 40                  ADD dword ptr [ESI + 0x40],EAX
LAB_004c3982:
004C3982  8B 5D FC                  MOV EBX,dword ptr [EBP + -0x4]
LAB_004c3985:
004C3985  8B 8F 35 02 00 00         MOV ECX,dword ptr [EDI + 0x235]
004C398B  8D 04 4B                  LEA EAX,[EBX + ECX*0x2]
004C398E  C1 E0 02                  SHL EAX,0x2
004C3991  83 B8 28 3E 79 00 02      CMP dword ptr [EAX + 0x793e28],0x2
004C3998  75 46                     JNZ 0x004c39e0
004C399A  8B 56 40                  MOV EDX,dword ptr [ESI + 0x40]
004C399D  3B 90 38 40 79 00         CMP EDX,dword ptr [EAX + 0x794038]
004C39A3  7D 3B                     JGE 0x004c39e0
004C39A5  8B 47 24                  MOV EAX,dword ptr [EDI + 0x24]
004C39A8  53                        PUSH EBX
004C39A9  51                        PUSH ECX
004C39AA  50                        PUSH EAX
004C39AB  E8 59 09 F4 FF            CALL 0x00404309
004C39B0  8B 56 44                  MOV EDX,dword ptr [ESI + 0x44]
004C39B3  8D 0C 80                  LEA ECX,[EAX + EAX*0x4]
004C39B6  83 C4 0C                  ADD ESP,0xc
004C39B9  8D 04 4A                  LEA EAX,[EDX + ECX*0x2]
004C39BC  8B 0D 38 2A 80 00         MOV ECX,dword ptr [0x00802a38]
004C39C2  39 81 E4 00 00 00         CMP dword ptr [ECX + 0xe4],EAX
004C39C8  72 16                     JC 0x004c39e0
004C39CA  8B 46 40                  MOV EAX,dword ptr [ESI + 0x40]
004C39CD  40                        INC EAX
004C39CE  89 46 40                  MOV dword ptr [ESI + 0x40],EAX
004C39D1  8B 15 38 2A 80 00         MOV EDX,dword ptr [0x00802a38]
004C39D7  8B 82 E4 00 00 00         MOV EAX,dword ptr [EDX + 0xe4]
004C39DD  89 46 44                  MOV dword ptr [ESI + 0x44],EAX
LAB_004c39e0:
004C39E0  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
004C39E3  8B 8F 5D 02 00 00         MOV ECX,dword ptr [EDI + 0x25d]
004C39E9  40                        INC EAX
004C39EA  81 C6 80 00 00 00         ADD ESI,0x80
004C39F0  3B C1                     CMP EAX,ECX
004C39F2  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
004C39F5  0F 8C C4 FB FF FF         JL 0x004c35bf
LAB_004c39fb:
004C39FB  8B 4D A8                  MOV ECX,dword ptr [EBP + -0x58]
004C39FE  33 C0                     XOR EAX,EAX
004C3A00  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
004C3A06  5F                        POP EDI
004C3A07  5E                        POP ESI
004C3A08  5B                        POP EBX
004C3A09  8B E5                     MOV ESP,EBP
004C3A0B  5D                        POP EBP
004C3A0C  C3                        RET
LAB_004c3a0d:
004C3A0D  8B 5D FC                  MOV EBX,dword ptr [EBP + -0x4]
LAB_004c3a10:
004C3A10  83 3C 85 28 3E 79 00 02   CMP dword ptr [EAX*0x4 + 0x793e28],0x2
004C3A18  0F 85 67 FF FF FF         JNZ 0x004c3985
004C3A1E  8B 4E 40                  MOV ECX,dword ptr [ESI + 0x40]
004C3A21  8B 04 85 38 40 79 00      MOV EAX,dword ptr [EAX*0x4 + 0x794038]
004C3A28  3B C8                     CMP ECX,EAX
004C3A2A  0F 8D 55 FF FF FF         JGE 0x004c3985
004C3A30  8D 14 52                  LEA EDX,[EDX + EDX*0x2]
004C3A33  2B C1                     SUB EAX,ECX
004C3A35  8B 0D 74 A1 7F 00         MOV ECX,dword ptr [0x007fa174]
004C3A3B  8B 14 D5 A0 2C 79 00      MOV EDX,dword ptr [EDX*0x8 + 0x792ca0]
004C3A42  8B 14 95 F0 3F 79 00      MOV EDX,dword ptr [EDX*0x4 + 0x793ff0]
004C3A49  52                        PUSH EDX
004C3A4A  50                        PUSH EAX
004C3A4B  8B 47 24                  MOV EAX,dword ptr [EDI + 0x24]
004C3A4E  50                        PUSH EAX
004C3A4F  E8 08 E8 F3 FF            CALL 0x0040225c
004C3A54  01 46 40                  ADD dword ptr [ESI + 0x40],EAX
004C3A57  E9 29 FF FF FF            JMP 0x004c3985
LAB_004c3a5c:
004C3A5C  8B 55 A8                  MOV EDX,dword ptr [EBP + -0x58]
004C3A5F  68 38 C9 7A 00            PUSH 0x7ac938
004C3A64  68 CC 4C 7A 00            PUSH 0x7a4ccc
004C3A69  56                        PUSH ESI
004C3A6A  6A 00                     PUSH 0x0
004C3A6C  68 B2 00 00 00            PUSH 0xb2
004C3A71  68 10 C9 7A 00            PUSH 0x7ac910
004C3A76  89 15 F8 8D 85 00         MOV dword ptr [0x00858df8],EDX
004C3A7C  E8 4F 9A 1E 00            CALL 0x006ad4d0
004C3A81  83 C4 18                  ADD ESP,0x18
004C3A84  85 C0                     TEST EAX,EAX
004C3A86  74 01                     JZ 0x004c3a89
004C3A88  CC                        INT3
LAB_004c3a89:
004C3A89  68 B3 00 00 00            PUSH 0xb3
004C3A8E  68 10 C9 7A 00            PUSH 0x7ac910
004C3A93  6A 00                     PUSH 0x0
004C3A95  56                        PUSH ESI
004C3A96  E8 A5 23 1E 00            CALL 0x006a5e40
004C3A9B  8B C6                     MOV EAX,ESI
004C3A9D  5F                        POP EDI
004C3A9E  5E                        POP ESI
004C3A9F  5B                        POP EBX
004C3AA0  8B E5                     MOV ESP,EBP
004C3AA2  5D                        POP EBP
004C3AA3  C3                        RET
