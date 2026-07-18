FUN_004a3430:
004A3430  55                        PUSH EBP
004A3431  8B EC                     MOV EBP,ESP
004A3433  81 EC AC 00 00 00         SUB ESP,0xac
004A3439  A1 F8 8D 85 00            MOV EAX,[0x00858df8]
004A343E  53                        PUSH EBX
004A343F  56                        PUSH ESI
004A3440  57                        PUSH EDI
004A3441  89 4D 98                  MOV dword ptr [EBP + -0x68],ECX
004A3444  33 FF                     XOR EDI,EDI
004A3446  8D 95 58 FF FF FF         LEA EDX,[EBP + 0xffffff58]
004A344C  8D 8D 54 FF FF FF         LEA ECX,[EBP + 0xffffff54]
004A3452  57                        PUSH EDI
004A3453  52                        PUSH EDX
004A3454  89 7D C4                  MOV dword ptr [EBP + -0x3c],EDI
004A3457  89 7D D8                  MOV dword ptr [EBP + -0x28],EDI
004A345A  89 7D DC                  MOV dword ptr [EBP + -0x24],EDI
004A345D  89 7D E8                  MOV dword ptr [EBP + -0x18],EDI
004A3460  89 7D E0                  MOV dword ptr [EBP + -0x20],EDI
004A3463  89 85 54 FF FF FF         MOV dword ptr [EBP + 0xffffff54],EAX
004A3469  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
004A346F  E8 7C A3 28 00            CALL 0x0072d7f0
004A3474  8B F0                     MOV ESI,EAX
004A3476  83 C4 08                  ADD ESP,0x8
004A3479  3B F7                     CMP ESI,EDI
004A347B  0F 85 EC 05 00 00         JNZ 0x004a3a6d
004A3481  8B 75 14                  MOV ESI,dword ptr [EBP + 0x14]
004A3484  3B F7                     CMP ESI,EDI
004A3486  74 0A                     JZ 0x004a3492
004A3488  8B 5E 0C                  MOV EBX,dword ptr [ESI + 0xc]
004A348B  3B DF                     CMP EBX,EDI
004A348D  89 5D 9C                  MOV dword ptr [EBP + -0x64],EBX
004A3490  75 1D                     JNZ 0x004a34af
LAB_004a3492:
004A3492  A1 7C D7 7E 00            MOV EAX,[0x007ed77c]
004A3497  68 F5 10 00 00            PUSH 0x10f5
004A349C  68 3C BE 7A 00            PUSH 0x7abe3c
004A34A1  50                        PUSH EAX
004A34A2  68 09 00 FE AF            PUSH 0xaffe0009
004A34A7  E8 94 29 20 00            CALL 0x006a5e40
004A34AC  8B 5D 9C                  MOV EBX,dword ptr [EBP + -0x64]
LAB_004a34af:
004A34AF  6A 01                     PUSH 0x1
004A34B1  6A 02                     PUSH 0x2
004A34B3  57                        PUSH EDI
004A34B4  57                        PUSH EDI
004A34B5  E8 D6 AD 20 00            CALL 0x006ae290
004A34BA  3B DF                     CMP EBX,EDI
004A34BC  8B 5D 98                  MOV EBX,dword ptr [EBP + -0x68]
004A34BF  89 45 E8                  MOV dword ptr [EBP + -0x18],EAX
004A34C2  0F 8E FA 00 00 00         JLE 0x004a35c2
004A34C8  EB 03                     JMP 0x004a34cd
LAB_004a34ca:
004A34CA  8B 75 14                  MOV ESI,dword ptr [EBP + 0x14]
LAB_004a34cd:
004A34CD  8D 4D FC                  LEA ECX,[EBP + -0x4]
004A34D0  8B D7                     MOV EDX,EDI
004A34D2  51                        PUSH ECX
004A34D3  8B CE                     MOV ECX,ESI
004A34D5  E8 96 97 20 00            CALL 0x006acc70
004A34DA  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
004A34DD  66 3D FF FF               CMP AX,0xffff
004A34E1  0F 84 CF 00 00 00         JZ 0x004a35b6
004A34E7  8A 53 24                  MOV DL,byte ptr [EBX + 0x24]
004A34EA  8B 0D 74 A1 7F 00         MOV ECX,dword ptr [0x007fa174]
004A34F0  6A 01                     PUSH 0x1
004A34F2  50                        PUSH EAX
004A34F3  52                        PUSH EDX
004A34F4  E8 C1 F3 F5 FF            CALL 0x004028ba
004A34F9  8B F0                     MOV ESI,EAX
004A34FB  85 F6                     TEST ESI,ESI
004A34FD  75 3D                     JNZ 0x004a353c
004A34FF  68 90 C2 7A 00            PUSH 0x7ac290
004A3504  68 CC 4C 7A 00            PUSH 0x7a4ccc
004A3509  50                        PUSH EAX
004A350A  50                        PUSH EAX
004A350B  68 FC 10 00 00            PUSH 0x10fc
004A3510  68 3C BE 7A 00            PUSH 0x7abe3c
004A3515  E8 B6 9F 20 00            CALL 0x006ad4d0
004A351A  83 C4 18                  ADD ESP,0x18
004A351D  85 C0                     TEST EAX,EAX
004A351F  74 01                     JZ 0x004a3522
004A3521  CC                        INT3
LAB_004a3522:
004A3522  A1 7C D7 7E 00            MOV EAX,[0x007ed77c]
004A3527  68 FD 10 00 00            PUSH 0x10fd
004A352C  68 3C BE 7A 00            PUSH 0x7abe3c
004A3531  50                        PUSH EAX
004A3532  68 04 00 FE AF            PUSH 0xaffe0004
004A3537  E8 04 29 20 00            CALL 0x006a5e40
LAB_004a353c:
004A353C  8B 16                     MOV EDX,dword ptr [ESI]
004A353E  8B CE                     MOV ECX,ESI
004A3540  FF 52 2C                  CALL dword ptr [EDX + 0x2c]
004A3543  83 F8 08                  CMP EAX,0x8
004A3546  74 61                     JZ 0x004a35a9
004A3548  8B 06                     MOV EAX,dword ptr [ESI]
004A354A  8B CE                     MOV ECX,ESI
004A354C  FF 50 2C                  CALL dword ptr [EAX + 0x2c]
004A354F  83 F8 14                  CMP EAX,0x14
004A3552  74 55                     JZ 0x004a35a9
004A3554  8B 16                     MOV EDX,dword ptr [ESI]
004A3556  8B CE                     MOV ECX,ESI
004A3558  FF 52 2C                  CALL dword ptr [EDX + 0x2c]
004A355B  83 F8 1A                  CMP EAX,0x1a
004A355E  74 49                     JZ 0x004a35a9
004A3560  8B CE                     MOV ECX,ESI
004A3562  E8 F1 18 F6 FF            CALL 0x00404e58
004A3567  85 C0                     TEST EAX,EAX
004A3569  75 1D                     JNZ 0x004a3588
004A356B  A1 38 2A 80 00            MOV EAX,[0x00802a38]
004A3570  8D 55 EC                  LEA EDX,[EBP + -0x14]
004A3573  52                        PUSH EDX
004A3574  6A 03                     PUSH 0x3
004A3576  8B 88 E4 00 00 00         MOV ECX,dword ptr [EAX + 0xe4]
004A357C  89 4D EC                  MOV dword ptr [EBP + -0x14],ECX
004A357F  8B CE                     MOV ECX,ESI
004A3581  E8 A0 EB F5 FF            CALL 0x00402126
004A3586  EB 2E                     JMP 0x004a35b6
LAB_004a3588:
004A3588  8B 45 E0                  MOV EAX,dword ptr [EBP + -0x20]
004A358B  85 C0                     TEST EAX,EAX
004A358D  75 10                     JNZ 0x004a359f
004A358F  6A 01                     PUSH 0x1
004A3591  6A 02                     PUSH 0x2
004A3593  6A 01                     PUSH 0x1
004A3595  6A 00                     PUSH 0x0
004A3597  E8 F4 AC 20 00            CALL 0x006ae290
004A359C  89 45 E0                  MOV dword ptr [EBP + -0x20],EAX
LAB_004a359f:
004A359F  8B 4D E0                  MOV ECX,dword ptr [EBP + -0x20]
004A35A2  8D 45 FC                  LEA EAX,[EBP + -0x4]
004A35A5  50                        PUSH EAX
004A35A6  51                        PUSH ECX
004A35A7  EB 08                     JMP 0x004a35b1
LAB_004a35a9:
004A35A9  8B 45 E8                  MOV EAX,dword ptr [EBP + -0x18]
004A35AC  8D 55 FC                  LEA EDX,[EBP + -0x4]
004A35AF  52                        PUSH EDX
004A35B0  50                        PUSH EAX
LAB_004a35b1:
004A35B1  E8 0A AC 20 00            CALL 0x006ae1c0
LAB_004a35b6:
004A35B6  8B 45 9C                  MOV EAX,dword ptr [EBP + -0x64]
004A35B9  47                        INC EDI
004A35BA  3B F8                     CMP EDI,EAX
004A35BC  0F 8C 08 FF FF FF         JL 0x004a34ca
LAB_004a35c2:
004A35C2  8B 4D E8                  MOV ECX,dword ptr [EBP + -0x18]
004A35C5  8B 41 0C                  MOV EAX,dword ptr [ECX + 0xc]
004A35C8  85 C0                     TEST EAX,EAX
004A35CA  89 45 E4                  MOV dword ptr [EBP + -0x1c],EAX
004A35CD  75 1B                     JNZ 0x004a35ea
004A35CF  8B 15 7C D7 7E 00         MOV EDX,dword ptr [0x007ed77c]
004A35D5  68 0F 11 00 00            PUSH 0x110f
004A35DA  68 3C BE 7A 00            PUSH 0x7abe3c
004A35DF  52                        PUSH EDX
004A35E0  68 09 00 FE AF            PUSH 0xaffe0009
004A35E5  E8 56 28 20 00            CALL 0x006a5e40
LAB_004a35ea:
004A35EA  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
004A35ED  85 C0                     TEST EAX,EAX
004A35EF  74 5C                     JZ 0x004a364d
004A35F1  8B 78 0C                  MOV EDI,dword ptr [EAX + 0xc]
004A35F4  85 FF                     TEST EDI,EDI
004A35F6  76 55                     JBE 0x004a364d
004A35F8  6A 01                     PUSH 0x1
004A35FA  6A 02                     PUSH 0x2
004A35FC  6A 00                     PUSH 0x0
004A35FE  6A 00                     PUSH 0x0
004A3600  E8 8B AC 20 00            CALL 0x006ae290
004A3605  33 F6                     XOR ESI,ESI
004A3607  89 45 D8                  MOV dword ptr [EBP + -0x28],EAX
004A360A  85 FF                     TEST EDI,EDI
004A360C  7E 3F                     JLE 0x004a364d
LAB_004a360e:
004A360E  8B 4D 0C                  MOV ECX,dword ptr [EBP + 0xc]
004A3611  8D 45 FC                  LEA EAX,[EBP + -0x4]
004A3614  50                        PUSH EAX
004A3615  8B D6                     MOV EDX,ESI
004A3617  E8 54 96 20 00            CALL 0x006acc70
004A361C  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
004A361F  66 3D FF FF               CMP AX,0xffff
004A3623  74 23                     JZ 0x004a3648
004A3625  8A 4B 24                  MOV CL,byte ptr [EBX + 0x24]
004A3628  6A 01                     PUSH 0x1
004A362A  50                        PUSH EAX
004A362B  51                        PUSH ECX
004A362C  8B 0D 74 A1 7F 00         MOV ECX,dword ptr [0x007fa174]
004A3632  E8 83 F2 F5 FF            CALL 0x004028ba
004A3637  85 C0                     TEST EAX,EAX
004A3639  74 0D                     JZ 0x004a3648
004A363B  8B 45 D8                  MOV EAX,dword ptr [EBP + -0x28]
004A363E  8D 55 FC                  LEA EDX,[EBP + -0x4]
004A3641  52                        PUSH EDX
004A3642  50                        PUSH EAX
004A3643  E8 78 AB 20 00            CALL 0x006ae1c0
LAB_004a3648:
004A3648  46                        INC ESI
004A3649  3B F7                     CMP ESI,EDI
004A364B  7C C1                     JL 0x004a360e
LAB_004a364d:
004A364D  8B 45 D8                  MOV EAX,dword ptr [EBP + -0x28]
004A3650  85 C0                     TEST EAX,EAX
004A3652  74 0B                     JZ 0x004a365f
004A3654  8B 48 0C                  MOV ECX,dword ptr [EAX + 0xc]
004A3657  85 C9                     TEST ECX,ECX
004A3659  0F 85 8C 00 00 00         JNZ 0x004a36eb
LAB_004a365f:
004A365F  8B 7D E4                  MOV EDI,dword ptr [EBP + -0x1c]
004A3662  33 F6                     XOR ESI,ESI
004A3664  85 FF                     TEST EDI,EDI
004A3666  7E 68                     JLE 0x004a36d0
LAB_004a3668:
004A3668  8D 4D FC                  LEA ECX,[EBP + -0x4]
004A366B  8B D6                     MOV EDX,ESI
004A366D  51                        PUSH ECX
004A366E  8B 4D E8                  MOV ECX,dword ptr [EBP + -0x18]
004A3671  E8 FA 95 20 00            CALL 0x006acc70
004A3676  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
004A3679  8A 43 24                  MOV AL,byte ptr [EBX + 0x24]
004A367C  8B 0D 74 A1 7F 00         MOV ECX,dword ptr [0x007fa174]
004A3682  6A 01                     PUSH 0x1
004A3684  52                        PUSH EDX
004A3685  50                        PUSH EAX
004A3686  E8 2F F2 F5 FF            CALL 0x004028ba
004A368B  83 7D 08 01               CMP dword ptr [EBP + 0x8],0x1
004A368F  75 27                     JNZ 0x004a36b8
004A3691  8B 0D 38 2A 80 00         MOV ECX,dword ptr [0x00802a38]
004A3697  8B 91 E4 00 00 00         MOV EDX,dword ptr [ECX + 0xe4]
004A369D  83 C9 FF                  OR ECX,0xffffffff
004A36A0  89 4D B8                  MOV dword ptr [EBP + -0x48],ECX
004A36A3  89 4D AE                  MOV dword ptr [EBP + -0x52],ECX
004A36A6  8D 4D A4                  LEA ECX,[EBP + -0x5c]
004A36A9  89 55 A4                  MOV dword ptr [EBP + -0x5c],EDX
004A36AC  51                        PUSH ECX
004A36AD  6A 0C                     PUSH 0xc
004A36AF  8B C8                     MOV ECX,EAX
004A36B1  E8 70 EA F5 FF            CALL 0x00402126
004A36B6  EB 13                     JMP 0x004a36cb
LAB_004a36b8:
004A36B8  6A FF                     PUSH -0x1
004A36BA  6A FF                     PUSH -0x1
004A36BC  6A FF                     PUSH -0x1
004A36BE  6A FF                     PUSH -0x1
004A36C0  6A FF                     PUSH -0x1
004A36C2  6A 01                     PUSH 0x1
004A36C4  8B C8                     MOV ECX,EAX
004A36C6  E8 3D E0 F5 FF            CALL 0x00401708
LAB_004a36cb:
004A36CB  46                        INC ESI
004A36CC  3B F7                     CMP ESI,EDI
004A36CE  7C 98                     JL 0x004a3668
LAB_004a36d0:
004A36D0  8B 15 7C D7 7E 00         MOV EDX,dword ptr [0x007ed77c]
004A36D6  68 24 11 00 00            PUSH 0x1124
004A36DB  68 3C BE 7A 00            PUSH 0x7abe3c
004A36E0  52                        PUSH EDX
004A36E1  68 09 00 FE AF            PUSH 0xaffe0009
004A36E6  E8 55 27 20 00            CALL 0x006a5e40
LAB_004a36eb:
004A36EB  8B 45 10                  MOV EAX,dword ptr [EBP + 0x10]
004A36EE  85 C0                     TEST EAX,EAX
004A36F0  74 5C                     JZ 0x004a374e
004A36F2  8B 78 0C                  MOV EDI,dword ptr [EAX + 0xc]
004A36F5  85 FF                     TEST EDI,EDI
004A36F7  76 55                     JBE 0x004a374e
004A36F9  6A 01                     PUSH 0x1
004A36FB  6A 02                     PUSH 0x2
004A36FD  6A 00                     PUSH 0x0
004A36FF  6A 00                     PUSH 0x0
004A3701  E8 8A AB 20 00            CALL 0x006ae290
004A3706  33 F6                     XOR ESI,ESI
004A3708  89 45 DC                  MOV dword ptr [EBP + -0x24],EAX
004A370B  85 FF                     TEST EDI,EDI
004A370D  7E 3F                     JLE 0x004a374e
LAB_004a370f:
004A370F  8B 4D 10                  MOV ECX,dword ptr [EBP + 0x10]
004A3712  8D 45 FC                  LEA EAX,[EBP + -0x4]
004A3715  50                        PUSH EAX
004A3716  8B D6                     MOV EDX,ESI
004A3718  E8 53 95 20 00            CALL 0x006acc70
004A371D  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
004A3720  66 3D FF FF               CMP AX,0xffff
004A3724  74 23                     JZ 0x004a3749
004A3726  8A 4B 24                  MOV CL,byte ptr [EBX + 0x24]
004A3729  6A 01                     PUSH 0x1
004A372B  50                        PUSH EAX
004A372C  51                        PUSH ECX
004A372D  8B 0D 74 A1 7F 00         MOV ECX,dword ptr [0x007fa174]
004A3733  E8 82 F1 F5 FF            CALL 0x004028ba
004A3738  85 C0                     TEST EAX,EAX
004A373A  74 0D                     JZ 0x004a3749
004A373C  8B 45 DC                  MOV EAX,dword ptr [EBP + -0x24]
004A373F  8D 55 FC                  LEA EDX,[EBP + -0x4]
004A3742  52                        PUSH EDX
004A3743  50                        PUSH EAX
004A3744  E8 77 AA 20 00            CALL 0x006ae1c0
LAB_004a3749:
004A3749  46                        INC ESI
004A374A  3B F7                     CMP ESI,EDI
004A374C  7C C1                     JL 0x004a370f
LAB_004a374e:
004A374E  8B 45 DC                  MOV EAX,dword ptr [EBP + -0x24]
004A3751  85 C0                     TEST EAX,EAX
004A3753  74 0B                     JZ 0x004a3760
004A3755  8B 48 0C                  MOV ECX,dword ptr [EAX + 0xc]
004A3758  85 C9                     TEST ECX,ECX
004A375A  0F 85 8C 00 00 00         JNZ 0x004a37ec
LAB_004a3760:
004A3760  8B 7D E4                  MOV EDI,dword ptr [EBP + -0x1c]
004A3763  33 F6                     XOR ESI,ESI
004A3765  85 FF                     TEST EDI,EDI
004A3767  7E 68                     JLE 0x004a37d1
LAB_004a3769:
004A3769  8D 4D FC                  LEA ECX,[EBP + -0x4]
004A376C  8B D6                     MOV EDX,ESI
004A376E  51                        PUSH ECX
004A376F  8B 4D E8                  MOV ECX,dword ptr [EBP + -0x18]
004A3772  E8 F9 94 20 00            CALL 0x006acc70
004A3777  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
004A377A  8A 43 24                  MOV AL,byte ptr [EBX + 0x24]
004A377D  8B 0D 74 A1 7F 00         MOV ECX,dword ptr [0x007fa174]
004A3783  6A 01                     PUSH 0x1
004A3785  52                        PUSH EDX
004A3786  50                        PUSH EAX
004A3787  E8 2E F1 F5 FF            CALL 0x004028ba
004A378C  83 7D 08 01               CMP dword ptr [EBP + 0x8],0x1
004A3790  75 27                     JNZ 0x004a37b9
004A3792  8B 0D 38 2A 80 00         MOV ECX,dword ptr [0x00802a38]
004A3798  8B 91 E4 00 00 00         MOV EDX,dword ptr [ECX + 0xe4]
004A379E  83 C9 FF                  OR ECX,0xffffffff
004A37A1  89 4D B8                  MOV dword ptr [EBP + -0x48],ECX
004A37A4  89 4D AE                  MOV dword ptr [EBP + -0x52],ECX
004A37A7  8D 4D A4                  LEA ECX,[EBP + -0x5c]
004A37AA  89 55 A4                  MOV dword ptr [EBP + -0x5c],EDX
004A37AD  51                        PUSH ECX
004A37AE  6A 0C                     PUSH 0xc
004A37B0  8B C8                     MOV ECX,EAX
004A37B2  E8 6F E9 F5 FF            CALL 0x00402126
004A37B7  EB 13                     JMP 0x004a37cc
LAB_004a37b9:
004A37B9  6A FF                     PUSH -0x1
004A37BB  6A FF                     PUSH -0x1
004A37BD  6A FF                     PUSH -0x1
004A37BF  6A FF                     PUSH -0x1
004A37C1  6A FF                     PUSH -0x1
004A37C3  6A 00                     PUSH 0x0
004A37C5  8B C8                     MOV ECX,EAX
004A37C7  E8 3C DF F5 FF            CALL 0x00401708
LAB_004a37cc:
004A37CC  46                        INC ESI
004A37CD  3B F7                     CMP ESI,EDI
004A37CF  7C 98                     JL 0x004a3769
LAB_004a37d1:
004A37D1  8B 15 7C D7 7E 00         MOV EDX,dword ptr [0x007ed77c]
004A37D7  68 3A 11 00 00            PUSH 0x113a
004A37DC  68 3C BE 7A 00            PUSH 0x7abe3c
004A37E1  52                        PUSH EDX
004A37E2  68 09 00 FE AF            PUSH 0xaffe0009
004A37E7  E8 54 26 20 00            CALL 0x006a5e40
LAB_004a37ec:
004A37EC  8B 45 E8                  MOV EAX,dword ptr [EBP + -0x18]
004A37EF  8B 4D DC                  MOV ECX,dword ptr [EBP + -0x24]
004A37F2  8B 55 D8                  MOV EDX,dword ptr [EBP + -0x28]
004A37F5  50                        PUSH EAX
004A37F6  8B 83 5E 02 00 00         MOV EAX,dword ptr [EBX + 0x25e]
004A37FC  51                        PUSH ECX
004A37FD  8A 4B 24                  MOV CL,byte ptr [EBX + 0x24]
004A3800  52                        PUSH EDX
004A3801  50                        PUSH EAX
004A3802  51                        PUSH ECX
004A3803  8B 0D 74 A1 7F 00         MOV ECX,dword ptr [0x007fa174]
004A3809  E8 27 02 F6 FF            CALL 0x00403a35
004A380E  8B F0                     MOV ESI,EAX
004A3810  85 F6                     TEST ESI,ESI
004A3812  89 75 C4                  MOV dword ptr [EBP + -0x3c],ESI
004A3815  75 3E                     JNZ 0x004a3855
004A3817  68 5C C2 7A 00            PUSH 0x7ac25c
004A381C  68 CC 4C 7A 00            PUSH 0x7a4ccc
004A3821  50                        PUSH EAX
004A3822  50                        PUSH EAX
004A3823  68 3F 11 00 00            PUSH 0x113f
004A3828  68 3C BE 7A 00            PUSH 0x7abe3c
004A382D  E8 9E 9C 20 00            CALL 0x006ad4d0
004A3832  83 C4 18                  ADD ESP,0x18
004A3835  85 C0                     TEST EAX,EAX
004A3837  74 01                     JZ 0x004a383a
004A3839  CC                        INT3
LAB_004a383a:
004A383A  8B 15 7C D7 7E 00         MOV EDX,dword ptr [0x007ed77c]
004A3840  68 40 11 00 00            PUSH 0x1140
004A3845  68 3C BE 7A 00            PUSH 0x7abe3c
004A384A  52                        PUSH EDX
004A384B  68 08 00 FE AF            PUSH 0xaffe0008
004A3850  E8 EB 25 20 00            CALL 0x006a5e40
LAB_004a3855:
004A3855  8B 46 0C                  MOV EAX,dword ptr [ESI + 0xc]
004A3858  8B 4D E4                  MOV ECX,dword ptr [EBP + -0x1c]
004A385B  3B C1                     CMP EAX,ECX
004A385D  89 45 A0                  MOV dword ptr [EBP + -0x60],EAX
004A3860  74 3F                     JZ 0x004a38a1
004A3862  68 28 C2 7A 00            PUSH 0x7ac228
004A3867  68 CC 4C 7A 00            PUSH 0x7a4ccc
004A386C  6A 00                     PUSH 0x0
004A386E  6A 00                     PUSH 0x0
004A3870  68 44 11 00 00            PUSH 0x1144
004A3875  68 3C BE 7A 00            PUSH 0x7abe3c
004A387A  E8 51 9C 20 00            CALL 0x006ad4d0
004A387F  83 C4 18                  ADD ESP,0x18
004A3882  85 C0                     TEST EAX,EAX
004A3884  74 01                     JZ 0x004a3887
004A3886  CC                        INT3
LAB_004a3887:
004A3887  A1 7C D7 7E 00            MOV EAX,[0x007ed77c]
004A388C  68 45 11 00 00            PUSH 0x1145
004A3891  68 3C BE 7A 00            PUSH 0x7abe3c
004A3896  50                        PUSH EAX
004A3897  68 07 00 FE AF            PUSH 0xaffe0007
004A389C  E8 9F 25 20 00            CALL 0x006a5e40
LAB_004a38a1:
004A38A1  8B 45 A0                  MOV EAX,dword ptr [EBP + -0x60]
004A38A4  33 FF                     XOR EDI,EDI
004A38A6  85 C0                     TEST EAX,EAX
004A38A8  89 7D E4                  MOV dword ptr [EBP + -0x1c],EDI
004A38AB  0F 8E 75 01 00 00         JLE 0x004a3a26
004A38B1  EB 03                     JMP 0x004a38b6
LAB_004a38b3:
004A38B3  8B 75 C4                  MOV ESI,dword ptr [EBP + -0x3c]
LAB_004a38b6:
004A38B6  8D 4D C8                  LEA ECX,[EBP + -0x38]
004A38B9  8B D7                     MOV EDX,EDI
004A38BB  51                        PUSH ECX
004A38BC  8B CE                     MOV ECX,ESI
004A38BE  E8 AD 93 20 00            CALL 0x006acc70
004A38C3  83 7D 08 01               CMP dword ptr [EBP + 0x8],0x1
004A38C7  0F 85 A2 00 00 00         JNZ 0x004a396f
004A38CD  8B 15 38 2A 80 00         MOV EDX,dword ptr [0x00802a38]
004A38D3  8B 4D C8                  MOV ECX,dword ptr [EBP + -0x38]
004A38D6  6A 01                     PUSH 0x1
004A38D8  51                        PUSH ECX
004A38D9  8B 82 E4 00 00 00         MOV EAX,dword ptr [EDX + 0xe4]
004A38DF  8A 53 24                  MOV DL,byte ptr [EBX + 0x24]
004A38E2  8B 0D 74 A1 7F 00         MOV ECX,dword ptr [0x007fa174]
004A38E8  52                        PUSH EDX
004A38E9  89 45 A4                  MOV dword ptr [EBP + -0x5c],EAX
004A38EC  E8 C9 EF F5 FF            CALL 0x004028ba
004A38F1  8B F0                     MOV ESI,EAX
004A38F3  8D 45 AC                  LEA EAX,[EBP + -0x54]
004A38F6  8D 4D AA                  LEA ECX,[EBP + -0x56]
004A38F9  50                        PUSH EAX
004A38FA  8D 55 A8                  LEA EDX,[EBP + -0x58]
004A38FD  51                        PUSH ECX
004A38FE  52                        PUSH EDX
004A38FF  8B CE                     MOV ECX,ESI
004A3901  E8 BF DF F5 FF            CALL 0x004018c5
004A3906  8B 4D CA                  MOV ECX,dword ptr [EBP + -0x36]
004A3909  8A 53 24                  MOV DL,byte ptr [EBX + 0x24]
004A390C  8B 46 18                  MOV EAX,dword ptr [ESI + 0x18]
004A390F  6A 01                     PUSH 0x1
004A3911  51                        PUSH ECX
004A3912  8B 0D 74 A1 7F 00         MOV ECX,dword ptr [0x007fa174]
004A3918  52                        PUSH EDX
004A3919  89 45 AE                  MOV dword ptr [EBP + -0x52],EAX
004A391C  E8 99 EF F5 FF            CALL 0x004028ba
004A3921  8B F0                     MOV ESI,EAX
004A3923  8D 45 B6                  LEA EAX,[EBP + -0x4a]
004A3926  8D 4D B4                  LEA ECX,[EBP + -0x4c]
004A3929  50                        PUSH EAX
004A392A  8D 55 B2                  LEA EDX,[EBP + -0x4e]
004A392D  51                        PUSH ECX
004A392E  52                        PUSH EDX
004A392F  8B CE                     MOV ECX,ESI
004A3931  E8 8F DF F5 FF            CALL 0x004018c5
004A3936  8B 46 18                  MOV EAX,dword ptr [ESI + 0x18]
004A3939  8B 4D CE                  MOV ECX,dword ptr [EBP + -0x32]
004A393C  8B 55 D2                  MOV EDX,dword ptr [EBP + -0x2e]
004A393F  89 45 B8                  MOV dword ptr [EBP + -0x48],EAX
004A3942  8B 45 CC                  MOV EAX,dword ptr [EBP + -0x34]
004A3945  89 4D BC                  MOV dword ptr [EBP + -0x44],ECX
004A3948  8A 4B 24                  MOV CL,byte ptr [EBX + 0x24]
004A394B  6A 01                     PUSH 0x1
004A394D  50                        PUSH EAX
004A394E  51                        PUSH ECX
004A394F  8B 0D 74 A1 7F 00         MOV ECX,dword ptr [0x007fa174]
004A3955  89 55 C0                  MOV dword ptr [EBP + -0x40],EDX
004A3958  E8 5D EF F5 FF            CALL 0x004028ba
004A395D  8D 55 A4                  LEA EDX,[EBP + -0x5c]
004A3960  8B C8                     MOV ECX,EAX
004A3962  52                        PUSH EDX
004A3963  6A 0C                     PUSH 0xc
004A3965  E8 BC E7 F5 FF            CALL 0x00402126
004A396A  E9 A8 00 00 00            JMP 0x004a3a17
LAB_004a396f:
004A396F  8B 45 CC                  MOV EAX,dword ptr [EBP + -0x34]
004A3972  8A 4B 24                  MOV CL,byte ptr [EBX + 0x24]
004A3975  6A 01                     PUSH 0x1
004A3977  50                        PUSH EAX
004A3978  51                        PUSH ECX
004A3979  8B 0D 74 A1 7F 00         MOV ECX,dword ptr [0x007fa174]
004A397F  E8 36 EF F5 FF            CALL 0x004028ba
004A3984  8B 55 C8                  MOV EDX,dword ptr [EBP + -0x38]
004A3987  8B 0D 74 A1 7F 00         MOV ECX,dword ptr [0x007fa174]
004A398D  8B F0                     MOV ESI,EAX
004A398F  8A 43 24                  MOV AL,byte ptr [EBX + 0x24]
004A3992  6A 01                     PUSH 0x1
004A3994  52                        PUSH EDX
004A3995  50                        PUSH EAX
004A3996  E8 1F EF F5 FF            CALL 0x004028ba
004A399B  8D 4D F4                  LEA ECX,[EBP + -0xc]
004A399E  8B F8                     MOV EDI,EAX
004A39A0  8D 55 F0                  LEA EDX,[EBP + -0x10]
004A39A3  51                        PUSH ECX
004A39A4  8D 45 F8                  LEA EAX,[EBP + -0x8]
004A39A7  52                        PUSH EDX
004A39A8  50                        PUSH EAX
004A39A9  8B CF                     MOV ECX,EDI
004A39AB  E8 15 DF F5 FF            CALL 0x004018c5
004A39B0  8B 4D CE                  MOV ECX,dword ptr [EBP + -0x32]
004A39B3  8B 57 18                  MOV EDX,dword ptr [EDI + 0x18]
004A39B6  8B 45 F4                  MOV EAX,dword ptr [EBP + -0xc]
004A39B9  51                        PUSH ECX
004A39BA  8B 4D F0                  MOV ECX,dword ptr [EBP + -0x10]
004A39BD  52                        PUSH EDX
004A39BE  8B 55 F8                  MOV EDX,dword ptr [EBP + -0x8]
004A39C1  50                        PUSH EAX
004A39C2  51                        PUSH ECX
004A39C3  52                        PUSH EDX
004A39C4  6A 01                     PUSH 0x1
004A39C6  8B CE                     MOV ECX,ESI
004A39C8  E8 3B DD F5 FF            CALL 0x00401708
004A39CD  8B 45 CA                  MOV EAX,dword ptr [EBP + -0x36]
004A39D0  8A 4B 24                  MOV CL,byte ptr [EBX + 0x24]
004A39D3  6A 01                     PUSH 0x1
004A39D5  50                        PUSH EAX
004A39D6  51                        PUSH ECX
004A39D7  8B 0D 74 A1 7F 00         MOV ECX,dword ptr [0x007fa174]
004A39DD  E8 D8 EE F5 FF            CALL 0x004028ba
004A39E2  8B F8                     MOV EDI,EAX
004A39E4  8D 55 F4                  LEA EDX,[EBP + -0xc]
004A39E7  8D 45 F0                  LEA EAX,[EBP + -0x10]
004A39EA  52                        PUSH EDX
004A39EB  8D 4D F8                  LEA ECX,[EBP + -0x8]
004A39EE  50                        PUSH EAX
004A39EF  51                        PUSH ECX
004A39F0  8B CF                     MOV ECX,EDI
004A39F2  E8 CE DE F5 FF            CALL 0x004018c5
004A39F7  8B 55 D2                  MOV EDX,dword ptr [EBP + -0x2e]
004A39FA  8B 47 18                  MOV EAX,dword ptr [EDI + 0x18]
004A39FD  8B 4D F4                  MOV ECX,dword ptr [EBP + -0xc]
004A3A00  52                        PUSH EDX
004A3A01  8B 55 F0                  MOV EDX,dword ptr [EBP + -0x10]
004A3A04  50                        PUSH EAX
004A3A05  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
004A3A08  51                        PUSH ECX
004A3A09  52                        PUSH EDX
004A3A0A  50                        PUSH EAX
004A3A0B  6A 00                     PUSH 0x0
004A3A0D  8B CE                     MOV ECX,ESI
004A3A0F  E8 F4 DC F5 FF            CALL 0x00401708
004A3A14  8B 7D E4                  MOV EDI,dword ptr [EBP + -0x1c]
LAB_004a3a17:
004A3A17  8B 45 A0                  MOV EAX,dword ptr [EBP + -0x60]
004A3A1A  47                        INC EDI
004A3A1B  3B F8                     CMP EDI,EAX
004A3A1D  89 7D E4                  MOV dword ptr [EBP + -0x1c],EDI
004A3A20  0F 8C 8D FE FF FF         JL 0x004a38b3
LAB_004a3a26:
004A3A26  8B 4D E0                  MOV ECX,dword ptr [EBP + -0x20]
004A3A29  8B 55 E8                  MOV EDX,dword ptr [EBP + -0x18]
004A3A2C  8A 43 24                  MOV AL,byte ptr [EBX + 0x24]
004A3A2F  51                        PUSH ECX
004A3A30  8B 0D 74 A1 7F 00         MOV ECX,dword ptr [0x007fa174]
004A3A36  52                        PUSH EDX
004A3A37  50                        PUSH EAX
004A3A38  E8 5E 03 F6 FF            CALL 0x00403d9b
004A3A3D  8B 0D 7C D7 7E 00         MOV ECX,dword ptr [0x007ed77c]
004A3A43  68 65 11 00 00            PUSH 0x1165
004A3A48  68 3C BE 7A 00            PUSH 0x7abe3c
004A3A4D  51                        PUSH ECX
004A3A4E  68 09 00 FE AF            PUSH 0xaffe0009
004A3A53  E8 E8 23 20 00            CALL 0x006a5e40
004A3A58  8B 95 54 FF FF FF         MOV EDX,dword ptr [EBP + 0xffffff54]
004A3A5E  89 15 F8 8D 85 00         MOV dword ptr [0x00858df8],EDX
004A3A64  5F                        POP EDI
004A3A65  5E                        POP ESI
004A3A66  5B                        POP EBX
004A3A67  8B E5                     MOV ESP,EBP
004A3A69  5D                        POP EBP
004A3A6A  C2 10 00                  RET 0x10
LAB_004a3a6d:
004A3A6D  8B 85 54 FF FF FF         MOV EAX,dword ptr [EBP + 0xffffff54]
004A3A73  81 FE 09 00 FE AF         CMP ESI,0xaffe0009
004A3A79  A3 F8 8D 85 00            MOV [0x00858df8],EAX
004A3A7E  75 4A                     JNZ 0x004a3aca
004A3A80  8B 45 D8                  MOV EAX,dword ptr [EBP + -0x28]
004A3A83  3B C7                     CMP EAX,EDI
004A3A85  74 06                     JZ 0x004a3a8d
004A3A87  50                        PUSH EAX
004A3A88  E8 83 A6 20 00            CALL 0x006ae110
LAB_004a3a8d:
004A3A8D  8B 45 DC                  MOV EAX,dword ptr [EBP + -0x24]
004A3A90  3B C7                     CMP EAX,EDI
004A3A92  74 06                     JZ 0x004a3a9a
004A3A94  50                        PUSH EAX
004A3A95  E8 76 A6 20 00            CALL 0x006ae110
LAB_004a3a9a:
004A3A9A  8B 45 E8                  MOV EAX,dword ptr [EBP + -0x18]
004A3A9D  3B C7                     CMP EAX,EDI
004A3A9F  74 06                     JZ 0x004a3aa7
004A3AA1  50                        PUSH EAX
004A3AA2  E8 69 A6 20 00            CALL 0x006ae110
LAB_004a3aa7:
004A3AA7  8B 45 C4                  MOV EAX,dword ptr [EBP + -0x3c]
004A3AAA  3B C7                     CMP EAX,EDI
004A3AAC  74 06                     JZ 0x004a3ab4
004A3AAE  50                        PUSH EAX
004A3AAF  E8 5C A6 20 00            CALL 0x006ae110
LAB_004a3ab4:
004A3AB4  8B 45 E0                  MOV EAX,dword ptr [EBP + -0x20]
004A3AB7  3B C7                     CMP EAX,EDI
004A3AB9  74 43                     JZ 0x004a3afe
004A3ABB  50                        PUSH EAX
004A3ABC  E8 4F A6 20 00            CALL 0x006ae110
004A3AC1  5F                        POP EDI
004A3AC2  5E                        POP ESI
004A3AC3  5B                        POP EBX
004A3AC4  8B E5                     MOV ESP,EBP
004A3AC6  5D                        POP EBP
004A3AC7  C2 10 00                  RET 0x10
LAB_004a3aca:
004A3ACA  68 08 C2 7A 00            PUSH 0x7ac208
004A3ACF  68 CC 4C 7A 00            PUSH 0x7a4ccc
004A3AD4  56                        PUSH ESI
004A3AD5  57                        PUSH EDI
004A3AD6  68 6F 11 00 00            PUSH 0x116f
004A3ADB  68 3C BE 7A 00            PUSH 0x7abe3c
004A3AE0  E8 EB 99 20 00            CALL 0x006ad4d0
004A3AE5  83 C4 18                  ADD ESP,0x18
004A3AE8  85 C0                     TEST EAX,EAX
004A3AEA  74 01                     JZ 0x004a3aed
004A3AEC  CC                        INT3
LAB_004a3aed:
004A3AED  68 70 11 00 00            PUSH 0x1170
004A3AF2  68 3C BE 7A 00            PUSH 0x7abe3c
004A3AF7  57                        PUSH EDI
004A3AF8  56                        PUSH ESI
004A3AF9  E8 42 23 20 00            CALL 0x006a5e40
LAB_004a3afe:
004A3AFE  5F                        POP EDI
004A3AFF  5E                        POP ESI
004A3B00  5B                        POP EBX
004A3B01  8B E5                     MOV ESP,EBP
004A3B03  5D                        POP EBP
004A3B04  C2 10 00                  RET 0x10
