FUN_004b33d0:
004B33D0  55                        PUSH EBP
004B33D1  8B EC                     MOV EBP,ESP
004B33D3  6A FF                     PUSH -0x1
004B33D5  68 90 0A 79 00            PUSH 0x790a90
004B33DA  68 64 D9 72 00            PUSH 0x72d964
004B33DF  64 A1 00 00 00 00         MOV EAX,FS:[0x0]
004B33E5  50                        PUSH EAX
004B33E6  64 89 25 00 00 00 00      MOV dword ptr FS:[0x0],ESP
004B33ED  81 EC 4C 03 00 00         SUB ESP,0x34c
004B33F3  53                        PUSH EBX
004B33F4  56                        PUSH ESI
004B33F5  57                        PUSH EDI
004B33F6  89 65 E8                  MOV dword ptr [EBP + -0x18],ESP
004B33F9  A1 F8 8D 85 00            MOV EAX,[0x00858df8]
004B33FE  89 85 44 FD FF FF         MOV dword ptr [EBP + 0xfffffd44],EAX
004B3404  8D 8D 44 FD FF FF         LEA ECX,[EBP + 0xfffffd44]
004B340A  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
004B3410  8D 95 48 FD FF FF         LEA EDX,[EBP + 0xfffffd48]
004B3416  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
004B3419  50                        PUSH EAX
004B341A  68 21 DA 72 00            PUSH 0x72da21
004B341F  6A 02                     PUSH 0x2
004B3421  52                        PUSH EDX
004B3422  E8 C9 A3 27 00            CALL 0x0072d7f0
004B3427  83 C4 10                  ADD ESP,0x10
004B342A  89 65 E8                  MOV dword ptr [EBP + -0x18],ESP
004B342D  8B F0                     MOV ESI,EAX
004B342F  85 F6                     TEST ESI,ESI
004B3431  0F 85 D0 2C 00 00         JNZ 0x004b6107
004B3437  8B 75 0C                  MOV ESI,dword ptr [EBP + 0xc]
004B343A  85 F6                     TEST ESI,ESI
004B343C  75 15                     JNZ 0x004b3453
004B343E  6A 5D                     PUSH 0x5d
004B3440  68 C8 C7 7A 00            PUSH 0x7ac7c8
004B3445  8B 0D 7C D7 7E 00         MOV ECX,dword ptr [0x007ed77c]
004B344B  51                        PUSH ECX
004B344C  6A FB                     PUSH -0x5
004B344E  E8 ED 29 1F 00            CALL 0x006a5e40
LAB_004b3453:
004B3453  8B 46 0C                  MOV EAX,dword ptr [ESI + 0xc]
004B3456  85 C0                     TEST EAX,EAX
004B3458  75 10                     JNZ 0x004b346a
004B345A  6A 0A                     PUSH 0xa
004B345C  6A 14                     PUSH 0x14
004B345E  6A 0A                     PUSH 0xa
004B3460  6A 00                     PUSH 0x0
004B3462  E8 29 AE 1F 00            CALL 0x006ae290
004B3467  89 46 0C                  MOV dword ptr [ESI + 0xc],EAX
LAB_004b346a:
004B346A  8B 46 14                  MOV EAX,dword ptr [ESI + 0x14]
004B346D  85 C0                     TEST EAX,EAX
004B346F  75 10                     JNZ 0x004b3481
004B3471  6A 0A                     PUSH 0xa
004B3473  6A 14                     PUSH 0x14
004B3475  6A 0A                     PUSH 0xa
004B3477  6A 00                     PUSH 0x0
004B3479  E8 12 AE 1F 00            CALL 0x006ae290
004B347E  89 46 14                  MOV dword ptr [ESI + 0x14],EAX
LAB_004b3481:
004B3481  B9 42 00 00 00            MOV ECX,0x42
004B3486  33 C0                     XOR EAX,EAX
004B3488  8D BD B8 FD FF FF         LEA EDI,[EBP + 0xfffffdb8]
004B348E  F3 AB                     STOSD.REP ES:EDI
004B3490  B9 0B 00 00 00            MOV ECX,0xb
004B3495  8D 7D B8                  LEA EDI,[EBP + -0x48]
004B3498  F3 AB                     STOSD.REP ES:EDI
004B349A  33 FF                     XOR EDI,EDI
004B349C  89 BD F8 FE FF FF         MOV dword ptr [EBP + 0xfffffef8],EDI
004B34A2  8B 56 0C                  MOV EDX,dword ptr [ESI + 0xc]
004B34A5  89 7A 04                  MOV dword ptr [EDX + 0x4],EDI
004B34A8  8D 95 FC FE FF FF         LEA EDX,[EBP + 0xfffffefc]
004B34AE  8B 4E 0C                  MOV ECX,dword ptr [ESI + 0xc]
004B34B1  E8 DA DC 1F 00            CALL 0x006b1190
004B34B6  85 C0                     TEST EAX,EAX
004B34B8  7C 3A                     JL 0x004b34f4
004B34BA  BB 01 00 00 00            MOV EBX,0x1
LAB_004b34bf:
004B34BF  8B 8D FC FE FF FF         MOV ECX,dword ptr [EBP + 0xfffffefc]
004B34C5  8B 04 8D 88 08 79 00      MOV EAX,dword ptr [ECX*0x4 + 0x790888]
004B34CC  8D 44 85 B8               LEA EAX,[EBP + EAX*0x4 + -0x48]
004B34D0  FF 00                     INC dword ptr [EAX]
004B34D2  39 1C 8D 68 1D 79 00      CMP dword ptr [ECX*0x4 + 0x791d68],EBX
004B34D9  75 01                     JNZ 0x004b34dc
004B34DB  47                        INC EDI
LAB_004b34dc:
004B34DC  8D 95 FC FE FF FF         LEA EDX,[EBP + 0xfffffefc]
004B34E2  8B 4E 0C                  MOV ECX,dword ptr [ESI + 0xc]
004B34E5  E8 A6 DC 1F 00            CALL 0x006b1190
004B34EA  85 C0                     TEST EAX,EAX
004B34EC  7D D1                     JGE 0x004b34bf
004B34EE  89 BD F8 FE FF FF         MOV dword ptr [EBP + 0xfffffef8],EDI
LAB_004b34f4:
004B34F4  33 DB                     XOR EBX,EBX
004B34F6  8B 4E 14                  MOV ECX,dword ptr [ESI + 0x14]
004B34F9  8B 41 0C                  MOV EAX,dword ptr [ECX + 0xc]
004B34FC  85 C0                     TEST EAX,EAX
004B34FE  0F 8E 3D 01 00 00         JLE 0x004b3641
LAB_004b3504:
004B3504  8D 95 64 FF FF FF         LEA EDX,[EBP + 0xffffff64]
004B350A  52                        PUSH EDX
004B350B  8B D3                     MOV EDX,EBX
004B350D  E8 5E 97 1F 00            CALL 0x006acc70
004B3512  6A 00                     PUSH 0x0
004B3514  6A 00                     PUSH 0x0
004B3516  6A 00                     PUSH 0x0
004B3518  6A 00                     PUSH 0x0
004B351A  6A 00                     PUSH 0x0
004B351C  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
004B351F  50                        PUSH EAX
004B3520  8B 8D 64 FF FF FF         MOV ECX,dword ptr [EBP + 0xffffff64]
004B3526  51                        PUSH ECX
004B3527  8B 95 70 FF FF FF         MOV EDX,dword ptr [EBP + 0xffffff70]
004B352D  52                        PUSH EDX
004B352E  8B 85 6C FF FF FF         MOV EAX,dword ptr [EBP + 0xffffff6c]
004B3534  50                        PUSH EAX
004B3535  8B 8D 68 FF FF FF         MOV ECX,dword ptr [EBP + 0xffffff68]
004B353B  51                        PUSH ECX
004B353C  E8 E8 F2 F4 FF            CALL 0x00402829
004B3541  83 C4 28                  ADD ESP,0x28
004B3544  85 C0                     TEST EAX,EAX
004B3546  75 4E                     JNZ 0x004b3596
004B3548  8B 95 64 FF FF FF         MOV EDX,dword ptr [EBP + 0xffffff64]
004B354E  89 95 00 FD FF FF         MOV dword ptr [EBP + 0xfffffd00],EDX
004B3554  8B 85 74 FF FF FF         MOV EAX,dword ptr [EBP + 0xffffff74]
004B355A  89 85 10 FD FF FF         MOV dword ptr [EBP + 0xfffffd10],EAX
004B3560  8B 46 0C                  MOV EAX,dword ptr [ESI + 0xc]
004B3563  85 C0                     TEST EAX,EAX
004B3565  75 10                     JNZ 0x004b3577
004B3567  6A 0A                     PUSH 0xa
004B3569  6A 14                     PUSH 0x14
004B356B  6A 0A                     PUSH 0xa
004B356D  6A 00                     PUSH 0x0
004B356F  E8 1C AD 1F 00            CALL 0x006ae290
004B3574  89 46 0C                  MOV dword ptr [ESI + 0xc],EAX
LAB_004b3577:
004B3577  8D 8D 00 FD FF FF         LEA ECX,[EBP + 0xfffffd00]
004B357D  51                        PUSH ECX
004B357E  8B 56 0C                  MOV EDX,dword ptr [ESI + 0xc]
004B3581  52                        PUSH EDX
004B3582  E8 39 AC 1F 00            CALL 0x006ae1c0
004B3587  53                        PUSH EBX
004B3588  8B 46 14                  MOV EAX,dword ptr [ESI + 0x14]
004B358B  50                        PUSH EAX
004B358C  E8 DF D6 1F 00            CALL 0x006b0c70
004B3591  E9 9F 00 00 00            JMP 0x004b3635
LAB_004b3596:
004B3596  BF 01 00 00 00            MOV EDI,0x1
004B359B  8B 4E 10                  MOV ECX,dword ptr [ESI + 0x10]
004B359E  C7 41 04 00 00 00 00      MOV dword ptr [ECX + 0x4],0x0
004B35A5  8D 55 94                  LEA EDX,[EBP + -0x6c]
004B35A8  8B 4E 10                  MOV ECX,dword ptr [ESI + 0x10]
004B35AB  E8 E0 DB 1F 00            CALL 0x006b1190
004B35B0  85 C0                     TEST EAX,EAX
004B35B2  7C 32                     JL 0x004b35e6
LAB_004b35b4:
004B35B4  8B 55 94                  MOV EDX,dword ptr [EBP + -0x6c]
004B35B7  3B 95 68 FF FF FF         CMP EDX,dword ptr [EBP + 0xffffff68]
004B35BD  75 18                     JNZ 0x004b35d7
004B35BF  8B 45 98                  MOV EAX,dword ptr [EBP + -0x68]
004B35C2  3B 85 6C FF FF FF         CMP EAX,dword ptr [EBP + 0xffffff6c]
004B35C8  75 0D                     JNZ 0x004b35d7
004B35CA  8B 4D 9C                  MOV ECX,dword ptr [EBP + -0x64]
004B35CD  3B 8D 70 FF FF FF         CMP ECX,dword ptr [EBP + 0xffffff70]
004B35D3  75 02                     JNZ 0x004b35d7
004B35D5  33 FF                     XOR EDI,EDI
LAB_004b35d7:
004B35D7  8D 55 94                  LEA EDX,[EBP + -0x6c]
004B35DA  8B 4E 10                  MOV ECX,dword ptr [ESI + 0x10]
004B35DD  E8 AE DB 1F 00            CALL 0x006b1190
004B35E2  85 C0                     TEST EAX,EAX
004B35E4  7D CE                     JGE 0x004b35b4
LAB_004b35e6:
004B35E6  85 FF                     TEST EDI,EDI
004B35E8  75 4A                     JNZ 0x004b3634
004B35EA  8B 95 64 FF FF FF         MOV EDX,dword ptr [EBP + 0xffffff64]
004B35F0  89 95 E4 FC FF FF         MOV dword ptr [EBP + 0xfffffce4],EDX
004B35F6  8B 85 74 FF FF FF         MOV EAX,dword ptr [EBP + 0xffffff74]
004B35FC  89 85 F4 FC FF FF         MOV dword ptr [EBP + 0xfffffcf4],EAX
004B3602  8B 46 0C                  MOV EAX,dword ptr [ESI + 0xc]
004B3605  85 C0                     TEST EAX,EAX
004B3607  75 0F                     JNZ 0x004b3618
004B3609  6A 0A                     PUSH 0xa
004B360B  6A 14                     PUSH 0x14
004B360D  6A 0A                     PUSH 0xa
004B360F  57                        PUSH EDI
004B3610  E8 7B AC 1F 00            CALL 0x006ae290
004B3615  89 46 0C                  MOV dword ptr [ESI + 0xc],EAX
LAB_004b3618:
004B3618  8D 8D E4 FC FF FF         LEA ECX,[EBP + 0xfffffce4]
004B361E  51                        PUSH ECX
004B361F  8B 56 0C                  MOV EDX,dword ptr [ESI + 0xc]
004B3622  52                        PUSH EDX
004B3623  E8 98 AB 1F 00            CALL 0x006ae1c0
004B3628  53                        PUSH EBX
004B3629  8B 46 14                  MOV EAX,dword ptr [ESI + 0x14]
004B362C  50                        PUSH EAX
004B362D  E8 3E D6 1F 00            CALL 0x006b0c70
004B3632  EB 01                     JMP 0x004b3635
LAB_004b3634:
004B3634  43                        INC EBX
LAB_004b3635:
004B3635  8B 4E 14                  MOV ECX,dword ptr [ESI + 0x14]
004B3638  3B 59 0C                  CMP EBX,dword ptr [ECX + 0xc]
004B363B  0F 8C C3 FE FF FF         JL 0x004b3504
LAB_004b3641:
004B3641  8B 45 B8                  MOV EAX,dword ptr [EBP + -0x48]
004B3644  85 C0                     TEST EAX,EAX
004B3646  75 0B                     JNZ 0x004b3653
004B3648  8B 45 BC                  MOV EAX,dword ptr [EBP + -0x44]
004B364B  85 C0                     TEST EAX,EAX
004B364D  0F 84 43 07 00 00         JZ 0x004b3d96
LAB_004b3653:
004B3653  A1 50 A1 7F 00            MOV EAX,[0x007fa150]
004B3658  85 C0                     TEST EAX,EAX
004B365A  0F 84 36 07 00 00         JZ 0x004b3d96
004B3660  6A 0A                     PUSH 0xa
004B3662  6A 1D                     PUSH 0x1d
004B3664  6A 0A                     PUSH 0xa
004B3666  6A 00                     PUSH 0x0
004B3668  E8 23 AC 1F 00            CALL 0x006ae290
004B366D  8B D8                     MOV EBX,EAX
004B366F  89 9D 60 FF FF FF         MOV dword ptr [EBP + 0xffffff60],EBX
004B3675  8B 0D 50 A1 7F 00         MOV ECX,dword ptr [0x007fa150]
004B367B  C7 41 04 00 00 00 00      MOV dword ptr [ECX + 0x4],0x0
004B3682  8D 55 AC                  LEA EDX,[EBP + -0x54]
004B3685  8B 0D 50 A1 7F 00         MOV ECX,dword ptr [0x007fa150]
004B368B  E8 00 DB 1F 00            CALL 0x006b1190
004B3690  85 C0                     TEST EAX,EAX
004B3692  0F 8C 13 02 00 00         JL 0x004b38ab
LAB_004b3698:
004B3698  8B 4D AC                  MOV ECX,dword ptr [EBP + -0x54]
004B369B  85 C9                     TEST ECX,ECX
004B369D  0F 84 F2 01 00 00         JZ 0x004b3895
004B36A3  8D 95 5C FF FF FF         LEA EDX,[EBP + 0xffffff5c]
004B36A9  52                        PUSH EDX
004B36AA  8D 85 78 FF FF FF         LEA EAX,[EBP + 0xffffff78]
004B36B0  50                        PUSH EAX
004B36B1  8D 55 88                  LEA EDX,[EBP + -0x78]
004B36B4  52                        PUSH EDX
004B36B5  E8 0B E2 F4 FF            CALL 0x004018c5
004B36BA  0F BF 85 78 FF FF FF      MOVSX EAX,word ptr [EBP + 0xffffff78]
004B36C1  0F BF 0D 40 B2 7F 00      MOVSX ECX,word ptr [0x007fb240]
004B36C8  0F AF C1                  IMUL EAX,ECX
004B36CB  0F BF 15 46 B2 7F 00      MOVSX EDX,word ptr [0x007fb246]
004B36D2  0F BF 8D 5C FF FF FF      MOVSX ECX,word ptr [EBP + 0xffffff5c]
004B36D9  0F AF D1                  IMUL EDX,ECX
004B36DC  03 C2                     ADD EAX,EDX
004B36DE  0F BF 55 88               MOVSX EDX,word ptr [EBP + -0x78]
004B36E2  03 C2                     ADD EAX,EDX
004B36E4  8B 0D 48 B2 7F 00         MOV ECX,dword ptr [0x007fb248]
004B36EA  8B 04 C1                  MOV EAX,dword ptr [ECX + EAX*0x8]
004B36ED  89 85 F4 FE FF FF         MOV dword ptr [EBP + 0xfffffef4],EAX
004B36F3  85 C0                     TEST EAX,EAX
004B36F5  0F 84 CD 00 00 00         JZ 0x004b37c8
004B36FB  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
004B36FE  39 50 24                  CMP dword ptr [EAX + 0x24],EDX
004B3701  0F 85 8E 01 00 00         JNZ 0x004b3895
004B3707  8B F8                     MOV EDI,EAX
004B3709  81 7F 20 E8 03 00 00      CMP dword ptr [EDI + 0x20],0x3e8
004B3710  75 12                     JNZ 0x004b3724
004B3712  8B 07                     MOV EAX,dword ptr [EDI]
004B3714  8B CF                     MOV ECX,EDI
004B3716  FF 50 2C                  CALL dword ptr [EAX + 0x2c]
004B3719  8B 0C 85 88 08 79 00      MOV ECX,dword ptr [EAX*0x4 + 0x790888]
004B3720  85 C9                     TEST ECX,ECX
004B3722  74 28                     JZ 0x004b374c
LAB_004b3724:
004B3724  81 7F 20 E9 03 00 00      CMP dword ptr [EDI + 0x20],0x3e9
004B372B  0F 85 64 01 00 00         JNZ 0x004b3895
004B3731  8B 8D F4 FE FF FF         MOV ECX,dword ptr [EBP + 0xfffffef4]
004B3737  8B 81 59 02 00 00         MOV EAX,dword ptr [ECX + 0x259]
004B373D  8B 0C 85 88 08 79 00      MOV ECX,dword ptr [EAX*0x4 + 0x790888]
004B3744  85 C9                     TEST ECX,ECX
004B3746  0F 85 49 01 00 00         JNZ 0x004b3895
LAB_004b374c:
004B374C  B9 07 00 00 00            MOV ECX,0x7
004B3751  33 C0                     XOR EAX,EAX
004B3753  8D BD 18 FD FF FF         LEA EDI,[EBP + 0xfffffd18]
004B3759  F3 AB                     STOSD.REP ES:EDI
004B375B  AA                        STOSB ES:EDI
004B375C  C6 85 18 FD FF FF 02      MOV byte ptr [EBP + 0xfffffd18],0x2
004B3763  8B 8D F4 FE FF FF         MOV ECX,dword ptr [EBP + 0xfffffef4]
004B3769  8B 11                     MOV EDX,dword ptr [ECX]
004B376B  FF 52 2C                  CALL dword ptr [EDX + 0x2c]
004B376E  89 85 19 FD FF FF         MOV dword ptr [EBP + 0xfffffd19],EAX
004B3774  83 F8 61                  CMP EAX,0x61
004B3777  75 07                     JNZ 0x004b3780
004B3779  80 8D 18 FD FF FF 08      OR byte ptr [EBP + 0xfffffd18],0x8
LAB_004b3780:
004B3780  8B 4D AC                  MOV ECX,dword ptr [EBP + -0x54]
004B3783  8B 01                     MOV EAX,dword ptr [ECX]
004B3785  FF 50 2C                  CALL dword ptr [EAX + 0x2c]
004B3788  89 85 1D FD FF FF         MOV dword ptr [EBP + 0xfffffd1d],EAX
004B378E  0F BF 4D 88               MOVSX ECX,word ptr [EBP + -0x78]
004B3792  89 8D 21 FD FF FF         MOV dword ptr [EBP + 0xfffffd21],ECX
004B3798  0F BF 95 78 FF FF FF      MOVSX EDX,word ptr [EBP + 0xffffff78]
004B379F  89 95 25 FD FF FF         MOV dword ptr [EBP + 0xfffffd25],EDX
004B37A5  0F BF 85 5C FF FF FF      MOVSX EAX,word ptr [EBP + 0xffffff5c]
004B37AC  89 85 29 FD FF FF         MOV dword ptr [EBP + 0xfffffd29],EAX
004B37B2  C7 85 31 FD FF FF FF FF FF FF  MOV dword ptr [EBP + 0xfffffd31],0xffffffff
004B37BC  8D 8D 18 FD FF FF         LEA ECX,[EBP + 0xfffffd18]
004B37C2  51                        PUSH ECX
004B37C3  E9 C7 00 00 00            JMP 0x004b388f
LAB_004b37c8:
004B37C8  B9 07 00 00 00            MOV ECX,0x7
004B37CD  33 C0                     XOR EAX,EAX
004B37CF  8D BD 18 FD FF FF         LEA EDI,[EBP + 0xfffffd18]
004B37D5  F3 AB                     STOSD.REP ES:EDI
004B37D7  AA                        STOSB ES:EDI
004B37D8  C6 85 18 FD FF FF 01      MOV byte ptr [EBP + 0xfffffd18],0x1
004B37DF  8B 4D AC                  MOV ECX,dword ptr [EBP + -0x54]
004B37E2  8B 11                     MOV EDX,dword ptr [ECX]
004B37E4  FF 52 2C                  CALL dword ptr [EDX + 0x2c]
004B37E7  89 85 1D FD FF FF         MOV dword ptr [EBP + 0xfffffd1d],EAX
004B37ED  0F BF 45 88               MOVSX EAX,word ptr [EBP + -0x78]
004B37F1  89 85 21 FD FF FF         MOV dword ptr [EBP + 0xfffffd21],EAX
004B37F7  0F BF 8D 78 FF FF FF      MOVSX ECX,word ptr [EBP + 0xffffff78]
004B37FE  89 8D 25 FD FF FF         MOV dword ptr [EBP + 0xfffffd25],ECX
004B3804  0F BF 95 5C FF FF FF      MOVSX EDX,word ptr [EBP + 0xffffff5c]
004B380B  89 95 29 FD FF FF         MOV dword ptr [EBP + 0xfffffd29],EDX
004B3811  51                        PUSH ECX
004B3812  50                        PUSH EAX
004B3813  8B 46 04                  MOV EAX,dword ptr [ESI + 0x4]
004B3816  50                        PUSH EAX
004B3817  8B 0E                     MOV ECX,dword ptr [ESI]
004B3819  51                        PUSH ECX
004B381A  E8 B9 96 1F 00            CALL 0x006aced8
004B381F  83 C4 10                  ADD ESP,0x10
004B3822  89 85 2D FD FF FF         MOV dword ptr [EBP + 0xfffffd2d],EAX
004B3828  C7 85 31 FD FF FF FF FF FF FF  MOV dword ptr [EBP + 0xfffffd31],0xffffffff
004B3832  8B 46 10                  MOV EAX,dword ptr [ESI + 0x10]
004B3835  85 C0                     TEST EAX,EAX
004B3837  74 4F                     JZ 0x004b3888
004B3839  C7 40 04 00 00 00 00      MOV dword ptr [EAX + 0x4],0x0
004B3840  8D 55 94                  LEA EDX,[EBP + -0x6c]
004B3843  8B 4E 10                  MOV ECX,dword ptr [ESI + 0x10]
004B3846  E8 45 D9 1F 00            CALL 0x006b1190
004B384B  85 C0                     TEST EAX,EAX
004B384D  7C 39                     JL 0x004b3888
LAB_004b384f:
004B384F  8B 55 94                  MOV EDX,dword ptr [EBP + -0x6c]
004B3852  3B 95 21 FD FF FF         CMP EDX,dword ptr [EBP + 0xfffffd21]
004B3858  75 16                     JNZ 0x004b3870
004B385A  8B 45 98                  MOV EAX,dword ptr [EBP + -0x68]
004B385D  3B 85 25 FD FF FF         CMP EAX,dword ptr [EBP + 0xfffffd25]
004B3863  75 0B                     JNZ 0x004b3870
004B3865  8B 4D 9C                  MOV ECX,dword ptr [EBP + -0x64]
004B3868  3B 8D 29 FD FF FF         CMP ECX,dword ptr [EBP + 0xfffffd29]
004B386E  74 11                     JZ 0x004b3881
LAB_004b3870:
004B3870  8D 55 94                  LEA EDX,[EBP + -0x6c]
004B3873  8B 4E 10                  MOV ECX,dword ptr [ESI + 0x10]
004B3876  E8 15 D9 1F 00            CALL 0x006b1190
004B387B  85 C0                     TEST EAX,EAX
004B387D  7D D0                     JGE 0x004b384f
004B387F  EB 07                     JMP 0x004b3888
LAB_004b3881:
004B3881  80 8D 18 FD FF FF 20      OR byte ptr [EBP + 0xfffffd18],0x20
LAB_004b3888:
004B3888  8D 95 18 FD FF FF         LEA EDX,[EBP + 0xfffffd18]
004B388E  52                        PUSH EDX
LAB_004b388f:
004B388F  53                        PUSH EBX
004B3890  E8 2B A9 1F 00            CALL 0x006ae1c0
LAB_004b3895:
004B3895  8D 55 AC                  LEA EDX,[EBP + -0x54]
004B3898  8B 0D 50 A1 7F 00         MOV ECX,dword ptr [0x007fa150]
004B389E  E8 ED D8 1F 00            CALL 0x006b1190
004B38A3  85 C0                     TEST EAX,EAX
004B38A5  0F 8D ED FD FF FF         JGE 0x004b3698
LAB_004b38ab:
004B38AB  8B 45 B8                  MOV EAX,dword ptr [EBP + -0x48]
004B38AE  85 C0                     TEST EAX,EAX
004B38B0  0F 84 60 01 00 00         JZ 0x004b3a16
004B38B6  8B 46 0C                  MOV EAX,dword ptr [ESI + 0xc]
004B38B9  C7 40 04 00 00 00 00      MOV dword ptr [EAX + 0x4],0x0
004B38C0  8D 95 FC FE FF FF         LEA EDX,[EBP + 0xfffffefc]
004B38C6  8B 4E 0C                  MOV ECX,dword ptr [ESI + 0xc]
004B38C9  E8 C2 D8 1F 00            CALL 0x006b1190
004B38CE  85 C0                     TEST EAX,EAX
004B38D0  0F 8C 40 01 00 00         JL 0x004b3a16
LAB_004b38d6:
004B38D6  8B 8D FC FE FF FF         MOV ECX,dword ptr [EBP + 0xfffffefc]
004B38DC  8D 41 C7                  LEA EAX,[ECX + -0x39]
004B38DF  83 F8 28                  CMP EAX,0x28
004B38E2  0F 87 18 01 00 00         JA 0x004b3a00
004B38E8  33 D2                     XOR EDX,EDX
004B38EA  8A 90 70 61 4B 00         MOV DL,byte ptr [EAX + 0x4b6170]
switchD_004b38f0::switchD:
004B38F0  FF 24 95 64 61 4B 00      JMP dword ptr [EDX*0x4 + 0x4b6164]
switchD_004b38f0::caseD_39:
004B38F7  BF DD 00 00 00            MOV EDI,0xdd
004B38FC  33 F6                     XOR ESI,ESI
004B38FE  89 73 04                  MOV dword ptr [EBX + 0x4],ESI
004B3901  EB 14                     JMP 0x004b3917
switchD_004b38f0::caseD_4f:
004B3903  BF DE 00 00 00            MOV EDI,0xde
004B3908  33 F6                     XOR ESI,ESI
004B390A  89 73 04                  MOV dword ptr [EBX + 0x4],ESI
004B390D  EB 08                     JMP 0x004b3917
LAB_004b390f:
004B390F  8B F0                     MOV ESI,EAX
LAB_004b3911:
004B3911  8B 9D 60 FF FF FF         MOV EBX,dword ptr [EBP + 0xffffff60]
LAB_004b3917:
004B3917  8B 4B 04                  MOV ECX,dword ptr [EBX + 0x4]
004B391A  3B 4B 0C                  CMP ECX,dword ptr [EBX + 0xc]
004B391D  73 0F                     JNC 0x004b392e
004B391F  8B 43 08                  MOV EAX,dword ptr [EBX + 0x8]
004B3922  0F AF C1                  IMUL EAX,ECX
004B3925  03 43 1C                  ADD EAX,dword ptr [EBX + 0x1c]
004B3928  41                        INC ECX
004B3929  89 4B 04                  MOV dword ptr [EBX + 0x4],ECX
004B392C  EB 02                     JMP 0x004b3930
LAB_004b392e:
004B392E  33 C0                     XOR EAX,EAX
LAB_004b3930:
004B3930  85 C0                     TEST EAX,EAX
004B3932  74 38                     JZ 0x004b396c
004B3934  8A 10                     MOV DL,byte ptr [EAX]
004B3936  F6 C2 01                  TEST DL,0x1
004B3939  74 DC                     JZ 0x004b3917
004B393B  F6 C2 04                  TEST DL,0x4
004B393E  75 D7                     JNZ 0x004b3917
004B3940  39 78 05                  CMP dword ptr [EAX + 0x5],EDI
004B3943  75 D2                     JNZ 0x004b3917
004B3945  85 F6                     TEST ESI,ESI
004B3947  75 04                     JNZ 0x004b394d
004B3949  8B F0                     MOV ESI,EAX
004B394B  EB CA                     JMP 0x004b3917
LAB_004b394d:
004B394D  8A 0E                     MOV CL,byte ptr [ESI]
004B394F  8A D9                     MOV BL,CL
004B3951  80 E3 20                  AND BL,0x20
004B3954  80 E2 20                  AND DL,0x20
004B3957  3A DA                     CMP BL,DL
004B3959  77 B4                     JA 0x004b390f
004B395B  32 08                     XOR CL,byte ptr [EAX]
004B395D  F6 C1 20                  TEST CL,0x20
004B3960  75 AF                     JNZ 0x004b3911
004B3962  8B 4E 15                  MOV ECX,dword ptr [ESI + 0x15]
004B3965  3B 48 15                  CMP ECX,dword ptr [EAX + 0x15]
004B3968  7E A7                     JLE 0x004b3911
004B396A  EB A3                     JMP 0x004b390f
LAB_004b396c:
004B396C  85 F6                     TEST ESI,ESI
004B396E  0F 84 82 00 00 00         JZ 0x004b39f6
004B3974  80 0E 04                  OR byte ptr [ESI],0x4
004B3977  33 D2                     XOR EDX,EDX
004B3979  89 95 64 FF FF FF         MOV dword ptr [EBP + 0xffffff64],EDX
004B397F  89 95 68 FF FF FF         MOV dword ptr [EBP + 0xffffff68],EDX
004B3985  89 95 6C FF FF FF         MOV dword ptr [EBP + 0xffffff6c],EDX
004B398B  89 95 70 FF FF FF         MOV dword ptr [EBP + 0xffffff70],EDX
004B3991  89 95 74 FF FF FF         MOV dword ptr [EBP + 0xffffff74],EDX
004B3997  8B 85 FC FE FF FF         MOV EAX,dword ptr [EBP + 0xfffffefc]
004B399D  89 85 64 FF FF FF         MOV dword ptr [EBP + 0xffffff64],EAX
004B39A3  83 F8 61                  CMP EAX,0x61
004B39A6  75 03                     JNZ 0x004b39ab
004B39A8  80 0E 08                  OR byte ptr [ESI],0x8
LAB_004b39ab:
004B39AB  8B 85 0C FF FF FF         MOV EAX,dword ptr [EBP + 0xffffff0c]
004B39B1  89 85 74 FF FF FF         MOV dword ptr [EBP + 0xffffff74],EAX
004B39B7  8B 4E 09                  MOV ECX,dword ptr [ESI + 0x9]
004B39BA  89 8D 68 FF FF FF         MOV dword ptr [EBP + 0xffffff68],ECX
004B39C0  8B 56 0D                  MOV EDX,dword ptr [ESI + 0xd]
004B39C3  89 95 6C FF FF FF         MOV dword ptr [EBP + 0xffffff6c],EDX
004B39C9  8B 46 11                  MOV EAX,dword ptr [ESI + 0x11]
004B39CC  89 85 70 FF FF FF         MOV dword ptr [EBP + 0xffffff70],EAX
004B39D2  8D 8D 64 FF FF FF         LEA ECX,[EBP + 0xffffff64]
004B39D8  51                        PUSH ECX
004B39D9  8B 75 0C                  MOV ESI,dword ptr [EBP + 0xc]
004B39DC  8B 56 14                  MOV EDX,dword ptr [ESI + 0x14]
004B39DF  52                        PUSH EDX
004B39E0  E8 DB A7 1F 00            CALL 0x006ae1c0
004B39E5  FF 4D B8                  DEC dword ptr [EBP + -0x48]
004B39E8  8B 46 0C                  MOV EAX,dword ptr [ESI + 0xc]
004B39EB  8B 48 04                  MOV ECX,dword ptr [EAX + 0x4]
004B39EE  49                        DEC ECX
004B39EF  51                        PUSH ECX
004B39F0  50                        PUSH EAX
004B39F1  E8 7A D2 1F 00            CALL 0x006b0c70
LAB_004b39f6:
004B39F6  8B 45 B8                  MOV EAX,dword ptr [EBP + -0x48]
004B39F9  85 C0                     TEST EAX,EAX
004B39FB  8B 75 0C                  MOV ESI,dword ptr [EBP + 0xc]
004B39FE  74 16                     JZ 0x004b3a16
switchD_004b38f0::caseD_3a:
004B3A00  8D 95 FC FE FF FF         LEA EDX,[EBP + 0xfffffefc]
004B3A06  8B 4E 0C                  MOV ECX,dword ptr [ESI + 0xc]
004B3A09  E8 82 D7 1F 00            CALL 0x006b1190
004B3A0E  85 C0                     TEST EAX,EAX
004B3A10  0F 8D C0 FE FF FF         JGE 0x004b38d6
LAB_004b3a16:
004B3A16  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
004B3A19  8D 14 80                  LEA EDX,[EAX + EAX*0x4]
004B3A1C  8D 0C D0                  LEA ECX,[EAX + EDX*0x8]
004B3A1F  8D 14 48                  LEA EDX,[EAX + ECX*0x2]
004B3A22  C1 E2 04                  SHL EDX,0x4
004B3A25  03 D0                     ADD EDX,EAX
004B3A27  8D 04 55 0A 58 7F 00      LEA EAX,[EDX*0x2 + 0x7f580a]
004B3A2E  89 85 C0 FC FF FF         MOV dword ptr [EBP + 0xfffffcc0],EAX
004B3A34  8B 08                     MOV ECX,dword ptr [EAX]
004B3A36  85 C9                     TEST ECX,ECX
004B3A38  0F 84 D9 00 00 00         JZ 0x004b3b17
004B3A3E  C7 41 04 00 00 00 00      MOV dword ptr [ECX + 0x4],0x0
004B3A45  8D 55 AC                  LEA EDX,[EBP + -0x54]
004B3A48  8B 08                     MOV ECX,dword ptr [EAX]
004B3A4A  E8 41 D7 1F 00            CALL 0x006b1190
004B3A4F  85 C0                     TEST EAX,EAX
004B3A51  0F 84 C0 00 00 00         JZ 0x004b3b17
LAB_004b3a57:
004B3A57  8D 85 5C FF FF FF         LEA EAX,[EBP + 0xffffff5c]
004B3A5D  50                        PUSH EAX
004B3A5E  8D 8D 78 FF FF FF         LEA ECX,[EBP + 0xffffff78]
004B3A64  51                        PUSH ECX
004B3A65  8D 55 88                  LEA EDX,[EBP + -0x78]
004B3A68  52                        PUSH EDX
004B3A69  8B 4D AC                  MOV ECX,dword ptr [EBP + -0x54]
004B3A6C  E8 54 DE F4 FF            CALL 0x004018c5
004B3A71  C7 85 7C FF FF FF FF FF FF FF  MOV dword ptr [EBP + 0xffffff7c],0xffffffff
004B3A7B  33 FF                     XOR EDI,EDI
004B3A7D  89 7B 04                  MOV dword ptr [EBX + 0x4],EDI
LAB_004b3a80:
004B3A80  8B 43 04                  MOV EAX,dword ptr [EBX + 0x4]
004B3A83  3B 43 0C                  CMP EAX,dword ptr [EBX + 0xc]
004B3A86  73 0F                     JNC 0x004b3a97
004B3A88  8B 73 08                  MOV ESI,dword ptr [EBX + 0x8]
004B3A8B  0F AF F0                  IMUL ESI,EAX
004B3A8E  03 73 1C                  ADD ESI,dword ptr [EBX + 0x1c]
004B3A91  40                        INC EAX
004B3A92  89 43 04                  MOV dword ptr [EBX + 0x4],EAX
004B3A95  EB 02                     JMP 0x004b3a99
LAB_004b3a97:
004B3A97  33 F6                     XOR ESI,ESI
LAB_004b3a99:
004B3A99  85 F6                     TEST ESI,ESI
004B3A9B  74 3D                     JZ 0x004b3ada
004B3A9D  8A 06                     MOV AL,byte ptr [ESI]
004B3A9F  A8 06                     TEST AL,0x6
004B3AA1  74 DD                     JZ 0x004b3a80
004B3AA3  A8 18                     TEST AL,0x18
004B3AA5  75 D9                     JNZ 0x004b3a80
004B3AA7  8B 46 0D                  MOV EAX,dword ptr [ESI + 0xd]
004B3AAA  50                        PUSH EAX
004B3AAB  8B 4E 09                  MOV ECX,dword ptr [ESI + 0x9]
004B3AAE  51                        PUSH ECX
004B3AAF  0F BF 95 78 FF FF FF      MOVSX EDX,word ptr [EBP + 0xffffff78]
004B3AB6  52                        PUSH EDX
004B3AB7  0F BF 45 88               MOVSX EAX,word ptr [EBP + -0x78]
004B3ABB  50                        PUSH EAX
004B3ABC  E8 17 94 1F 00            CALL 0x006aced8
004B3AC1  83 C4 10                  ADD ESP,0x10
004B3AC4  85 FF                     TEST EDI,EDI
004B3AC6  74 08                     JZ 0x004b3ad0
004B3AC8  3B 85 7C FF FF FF         CMP EAX,dword ptr [EBP + 0xffffff7c]
004B3ACE  7D B0                     JGE 0x004b3a80
LAB_004b3ad0:
004B3AD0  8B FE                     MOV EDI,ESI
004B3AD2  89 85 7C FF FF FF         MOV dword ptr [EBP + 0xffffff7c],EAX
004B3AD8  EB A6                     JMP 0x004b3a80
LAB_004b3ada:
004B3ADA  85 FF                     TEST EDI,EDI
004B3ADC  74 1E                     JZ 0x004b3afc
004B3ADE  8B 8D 7C FF FF FF         MOV ECX,dword ptr [EBP + 0xffffff7c]
004B3AE4  83 F9 0F                  CMP ECX,0xf
004B3AE7  7D 05                     JGE 0x004b3aee
004B3AE9  80 0F 10                  OR byte ptr [EDI],0x10
004B3AEC  EB 0E                     JMP 0x004b3afc
LAB_004b3aee:
004B3AEE  8B 47 19                  MOV EAX,dword ptr [EDI + 0x19]
004B3AF1  85 C0                     TEST EAX,EAX
004B3AF3  7C 04                     JL 0x004b3af9
004B3AF5  3B C8                     CMP ECX,EAX
004B3AF7  7D 03                     JGE 0x004b3afc
LAB_004b3af9:
004B3AF9  89 4F 19                  MOV dword ptr [EDI + 0x19],ECX
LAB_004b3afc:
004B3AFC  8D 55 AC                  LEA EDX,[EBP + -0x54]
004B3AFF  8B 8D C0 FC FF FF         MOV ECX,dword ptr [EBP + 0xfffffcc0]
004B3B05  8B 09                     MOV ECX,dword ptr [ECX]
004B3B07  E8 84 D6 1F 00            CALL 0x006b1190
004B3B0C  85 C0                     TEST EAX,EAX
004B3B0E  0F 85 43 FF FF FF         JNZ 0x004b3a57
004B3B14  8B 75 0C                  MOV ESI,dword ptr [EBP + 0xc]
LAB_004b3b17:
004B3B17  8B 45 BC                  MOV EAX,dword ptr [EBP + -0x44]
004B3B1A  85 C0                     TEST EAX,EAX
004B3B1C  0F 84 6B 02 00 00         JZ 0x004b3d8d
004B3B22  33 FF                     XOR EDI,EDI
004B3B24  8B 43 0C                  MOV EAX,dword ptr [EBX + 0xc]
004B3B27  85 C0                     TEST EAX,EAX
004B3B29  7E 31                     JLE 0x004b3b5c
LAB_004b3b2b:
004B3B2B  8D 95 18 FD FF FF         LEA EDX,[EBP + 0xfffffd18]
004B3B31  52                        PUSH EDX
004B3B32  8B D7                     MOV EDX,EDI
004B3B34  8B CB                     MOV ECX,EBX
004B3B36  E8 35 91 1F 00            CALL 0x006acc70
004B3B3B  8A 85 18 FD FF FF         MOV AL,byte ptr [EBP + 0xfffffd18]
004B3B41  A8 18                     TEST AL,0x18
004B3B43  75 0B                     JNZ 0x004b3b50
004B3B45  A8 01                     TEST AL,0x1
004B3B47  74 04                     JZ 0x004b3b4d
004B3B49  A8 04                     TEST AL,0x4
004B3B4B  74 03                     JZ 0x004b3b50
LAB_004b3b4d:
004B3B4D  47                        INC EDI
004B3B4E  EB 07                     JMP 0x004b3b57
LAB_004b3b50:
004B3B50  57                        PUSH EDI
004B3B51  53                        PUSH EBX
004B3B52  E8 19 D1 1F 00            CALL 0x006b0c70
LAB_004b3b57:
004B3B57  3B 7B 0C                  CMP EDI,dword ptr [EBX + 0xc]
004B3B5A  7C CF                     JL 0x004b3b2b
LAB_004b3b5c:
004B3B5C  8B 43 0C                  MOV EAX,dword ptr [EBX + 0xc]
004B3B5F  39 45 BC                  CMP dword ptr [EBP + -0x44],EAX
004B3B62  0F 8D 97 00 00 00         JGE 0x004b3bff
LAB_004b3b68:
004B3B68  33 FF                     XOR EDI,EDI
004B3B6A  89 7D B4                  MOV dword ptr [EBP + -0x4c],EDI
004B3B6D  8D 48 FF                  LEA ECX,[EAX + -0x1]
004B3B70  85 C9                     TEST ECX,ECX
004B3B72  7E 7D                     JLE 0x004b3bf1
LAB_004b3b74:
004B3B74  3B F8                     CMP EDI,EAX
004B3B76  73 0B                     JNC 0x004b3b83
004B3B78  8B 73 08                  MOV ESI,dword ptr [EBX + 0x8]
004B3B7B  0F AF F7                  IMUL ESI,EDI
004B3B7E  03 73 1C                  ADD ESI,dword ptr [EBX + 0x1c]
004B3B81  EB 02                     JMP 0x004b3b85
LAB_004b3b83:
004B3B83  33 F6                     XOR ESI,ESI
LAB_004b3b85:
004B3B85  8D 4F 01                  LEA ECX,[EDI + 0x1]
004B3B88  89 8D BC FC FF FF         MOV dword ptr [EBP + 0xfffffcbc],ECX
004B3B8E  3B C8                     CMP ECX,EAX
004B3B90  73 0B                     JNC 0x004b3b9d
004B3B92  8B 43 08                  MOV EAX,dword ptr [EBX + 0x8]
004B3B95  0F AF C1                  IMUL EAX,ECX
004B3B98  03 43 1C                  ADD EAX,dword ptr [EBX + 0x1c]
004B3B9B  EB 02                     JMP 0x004b3b9f
LAB_004b3b9d:
004B3B9D  33 C0                     XOR EAX,EAX
LAB_004b3b9f:
004B3B9F  8A 10                     MOV DL,byte ptr [EAX]
004B3BA1  8A 0E                     MOV CL,byte ptr [ESI]
004B3BA3  8A D9                     MOV BL,CL
004B3BA5  80 E3 20                  AND BL,0x20
004B3BA8  80 E2 20                  AND DL,0x20
004B3BAB  3A DA                     CMP BL,DL
004B3BAD  77 0F                     JA 0x004b3bbe
004B3BAF  32 08                     XOR CL,byte ptr [EAX]
004B3BB1  F6 C1 20                  TEST CL,0x20
004B3BB4  75 25                     JNZ 0x004b3bdb
004B3BB6  8B 56 15                  MOV EDX,dword ptr [ESI + 0x15]
004B3BB9  3B 50 15                  CMP EDX,dword ptr [EAX + 0x15]
004B3BBC  7E 1D                     JLE 0x004b3bdb
LAB_004b3bbe:
004B3BBE  8B 85 BC FC FF FF         MOV EAX,dword ptr [EBP + 0xfffffcbc]
004B3BC4  50                        PUSH EAX
004B3BC5  57                        PUSH EDI
004B3BC6  8B 9D 60 FF FF FF         MOV EBX,dword ptr [EBP + 0xffffff60]
004B3BCC  53                        PUSH EBX
004B3BCD  E8 FE D0 1F 00            CALL 0x006b0cd0
004B3BD2  C7 45 B4 01 00 00 00      MOV dword ptr [EBP + -0x4c],0x1
004B3BD9  EB 06                     JMP 0x004b3be1
LAB_004b3bdb:
004B3BDB  8B 9D 60 FF FF FF         MOV EBX,dword ptr [EBP + 0xffffff60]
LAB_004b3be1:
004B3BE1  8B BD BC FC FF FF         MOV EDI,dword ptr [EBP + 0xfffffcbc]
004B3BE7  8B 43 0C                  MOV EAX,dword ptr [EBX + 0xc]
004B3BEA  8D 48 FF                  LEA ECX,[EAX + -0x1]
004B3BED  3B F9                     CMP EDI,ECX
004B3BEF  7C 83                     JL 0x004b3b74
LAB_004b3bf1:
004B3BF1  8B 4D B4                  MOV ECX,dword ptr [EBP + -0x4c]
004B3BF4  85 C9                     TEST ECX,ECX
004B3BF6  0F 85 6C FF FF FF         JNZ 0x004b3b68
004B3BFC  8B 75 0C                  MOV ESI,dword ptr [EBP + 0xc]
LAB_004b3bff:
004B3BFF  33 FF                     XOR EDI,EDI
004B3C01  89 7B 04                  MOV dword ptr [EBX + 0x4],EDI
004B3C04  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
004B3C07  52                        PUSH EDX
004B3C08  8B 0D 74 A1 7F 00         MOV ECX,dword ptr [0x007fa174]
004B3C0E  E8 A4 0D F5 FF            CALL 0x004049b7
004B3C13  2C 03                     SUB AL,0x3
004B3C15  F6 D8                     NEG AL
004B3C17  1B C0                     SBB EAX,EAX
004B3C19  24 DB                     AND AL,0xdb
004B3C1B  83 C0 60                  ADD EAX,0x60
004B3C1E  89 85 D0 FE FF FF         MOV dword ptr [EBP + 0xfffffed0],EAX
004B3C24  8B 46 0C                  MOV EAX,dword ptr [ESI + 0xc]
004B3C27  89 78 04                  MOV dword ptr [EAX + 0x4],EDI
004B3C2A  8D 95 FC FE FF FF         LEA EDX,[EBP + 0xfffffefc]
004B3C30  8B 4E 0C                  MOV ECX,dword ptr [ESI + 0xc]
004B3C33  E8 58 D5 1F 00            CALL 0x006b1190
004B3C38  85 C0                     TEST EAX,EAX
004B3C3A  0F 8C 4D 01 00 00         JL 0x004b3d8d
LAB_004b3c40:
004B3C40  8B 8D D0 FE FF FF         MOV ECX,dword ptr [EBP + 0xfffffed0]
004B3C46  39 8D FC FE FF FF         CMP dword ptr [EBP + 0xfffffefc],ECX
004B3C4C  0F 85 25 01 00 00         JNZ 0x004b3d77
004B3C52  8B 43 04                  MOV EAX,dword ptr [EBX + 0x4]
004B3C55  3B 43 0C                  CMP EAX,dword ptr [EBX + 0xc]
004B3C58  73 0F                     JNC 0x004b3c69
004B3C5A  8B 73 08                  MOV ESI,dword ptr [EBX + 0x8]
004B3C5D  0F AF F0                  IMUL ESI,EAX
004B3C60  03 73 1C                  ADD ESI,dword ptr [EBX + 0x1c]
004B3C63  40                        INC EAX
004B3C64  89 43 04                  MOV dword ptr [EBX + 0x4],EAX
004B3C67  EB 02                     JMP 0x004b3c6b
LAB_004b3c69:
004B3C69  33 F6                     XOR ESI,ESI
LAB_004b3c6b:
004B3C6B  85 F6                     TEST ESI,ESI
004B3C6D  0F 84 1A 01 00 00         JZ 0x004b3d8d
004B3C73  8B 56 09                  MOV EDX,dword ptr [ESI + 0x9]
004B3C76  89 95 E8 FE FF FF         MOV dword ptr [EBP + 0xfffffee8],EDX
004B3C7C  8B 46 0D                  MOV EAX,dword ptr [ESI + 0xd]
004B3C7F  89 85 CC FE FF FF         MOV dword ptr [EBP + 0xfffffecc],EAX
004B3C85  8B 56 11                  MOV EDX,dword ptr [ESI + 0x11]
004B3C88  89 95 B0 FD FF FF         MOV dword ptr [EBP + 0xfffffdb0],EDX
004B3C8E  6A 01                     PUSH 0x1
004B3C90  6A 00                     PUSH 0x0
004B3C92  8D 85 B0 FD FF FF         LEA EAX,[EBP + 0xfffffdb0]
004B3C98  50                        PUSH EAX
004B3C99  8D 95 CC FE FF FF         LEA EDX,[EBP + 0xfffffecc]
004B3C9F  52                        PUSH EDX
004B3CA0  8D 85 E8 FE FF FF         LEA EAX,[EBP + 0xfffffee8]
004B3CA6  50                        PUSH EAX
004B3CA7  51                        PUSH ECX
004B3CA8  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
004B3CAB  51                        PUSH ECX
004B3CAC  E8 3B DD F4 FF            CALL 0x004019ec
004B3CB1  83 C4 1C                  ADD ESP,0x1c
004B3CB4  85 C0                     TEST EAX,EAX
004B3CB6  0F 84 B1 00 00 00         JZ 0x004b3d6d
004B3CBC  8B 46 19                  MOV EAX,dword ptr [ESI + 0x19]
004B3CBF  85 C0                     TEST EAX,EAX
004B3CC1  7C 27                     JL 0x004b3cea
004B3CC3  8B 56 0D                  MOV EDX,dword ptr [ESI + 0xd]
004B3CC6  52                        PUSH EDX
004B3CC7  8B 46 09                  MOV EAX,dword ptr [ESI + 0x9]
004B3CCA  50                        PUSH EAX
004B3CCB  8B 8D CC FE FF FF         MOV ECX,dword ptr [EBP + 0xfffffecc]
004B3CD1  51                        PUSH ECX
004B3CD2  8B 95 E8 FE FF FF         MOV EDX,dword ptr [EBP + 0xfffffee8]
004B3CD8  52                        PUSH EDX
004B3CD9  E8 FA 91 1F 00            CALL 0x006aced8
004B3CDE  83 C4 10                  ADD ESP,0x10
004B3CE1  39 46 19                  CMP dword ptr [ESI + 0x19],EAX
004B3CE4  0F 8E 83 00 00 00         JLE 0x004b3d6d
LAB_004b3cea:
004B3CEA  80 0E 10                  OR byte ptr [ESI],0x10
004B3CED  33 C0                     XOR EAX,EAX
004B3CEF  89 85 64 FF FF FF         MOV dword ptr [EBP + 0xffffff64],EAX
004B3CF5  89 85 68 FF FF FF         MOV dword ptr [EBP + 0xffffff68],EAX
004B3CFB  89 85 6C FF FF FF         MOV dword ptr [EBP + 0xffffff6c],EAX
004B3D01  89 85 70 FF FF FF         MOV dword ptr [EBP + 0xffffff70],EAX
004B3D07  89 85 74 FF FF FF         MOV dword ptr [EBP + 0xffffff74],EAX
004B3D0D  8B 8D FC FE FF FF         MOV ECX,dword ptr [EBP + 0xfffffefc]
004B3D13  89 8D 64 FF FF FF         MOV dword ptr [EBP + 0xffffff64],ECX
004B3D19  8B 95 0C FF FF FF         MOV EDX,dword ptr [EBP + 0xffffff0c]
004B3D1F  89 95 74 FF FF FF         MOV dword ptr [EBP + 0xffffff74],EDX
004B3D25  8B 85 E8 FE FF FF         MOV EAX,dword ptr [EBP + 0xfffffee8]
004B3D2B  89 85 68 FF FF FF         MOV dword ptr [EBP + 0xffffff68],EAX
004B3D31  8B 8D CC FE FF FF         MOV ECX,dword ptr [EBP + 0xfffffecc]
004B3D37  89 8D 6C FF FF FF         MOV dword ptr [EBP + 0xffffff6c],ECX
004B3D3D  8B 95 B0 FD FF FF         MOV EDX,dword ptr [EBP + 0xfffffdb0]
004B3D43  89 95 70 FF FF FF         MOV dword ptr [EBP + 0xffffff70],EDX
004B3D49  8D 85 64 FF FF FF         LEA EAX,[EBP + 0xffffff64]
004B3D4F  50                        PUSH EAX
004B3D50  8B 75 0C                  MOV ESI,dword ptr [EBP + 0xc]
004B3D53  8B 4E 14                  MOV ECX,dword ptr [ESI + 0x14]
004B3D56  51                        PUSH ECX
004B3D57  E8 64 A4 1F 00            CALL 0x006ae1c0
004B3D5C  FF 4D BC                  DEC dword ptr [EBP + -0x44]
004B3D5F  8B 46 0C                  MOV EAX,dword ptr [ESI + 0xc]
004B3D62  8B 50 04                  MOV EDX,dword ptr [EAX + 0x4]
004B3D65  4A                        DEC EDX
004B3D66  52                        PUSH EDX
004B3D67  50                        PUSH EAX
004B3D68  E8 03 CF 1F 00            CALL 0x006b0c70
LAB_004b3d6d:
004B3D6D  8B 45 BC                  MOV EAX,dword ptr [EBP + -0x44]
004B3D70  85 C0                     TEST EAX,EAX
004B3D72  74 19                     JZ 0x004b3d8d
004B3D74  8B 75 0C                  MOV ESI,dword ptr [EBP + 0xc]
LAB_004b3d77:
004B3D77  8D 95 FC FE FF FF         LEA EDX,[EBP + 0xfffffefc]
004B3D7D  8B 4E 0C                  MOV ECX,dword ptr [ESI + 0xc]
004B3D80  E8 0B D4 1F 00            CALL 0x006b1190
004B3D85  85 C0                     TEST EAX,EAX
004B3D87  0F 8D B3 FE FF FF         JGE 0x004b3c40
LAB_004b3d8d:
004B3D8D  53                        PUSH EBX
004B3D8E  E8 7D A3 1F 00            CALL 0x006ae110
004B3D93  8B 75 0C                  MOV ESI,dword ptr [EBP + 0xc]
LAB_004b3d96:
004B3D96  33 C9                     XOR ECX,ECX
004B3D98  33 C0                     XOR EAX,EAX
LAB_004b3d9a:
004B3D9A  83 F8 0B                  CMP EAX,0xb
004B3D9D  0F 8D 2A 23 00 00         JGE 0x004b60cd
004B3DA3  39 4C 85 B8               CMP dword ptr [EBP + EAX*0x4 + -0x48],ECX
004B3DA7  0F 84 1A 23 00 00         JZ 0x004b60c7
004B3DAD  89 4D FC                  MOV dword ptr [EBP + -0x4],ECX
004B3DB0  0F BF 05 44 B2 7F 00      MOVSX EAX,word ptr [0x007fb244]
004B3DB7  0F BF 0D 46 B2 7F 00      MOVSX ECX,word ptr [0x007fb246]
004B3DBE  0F AF C1                  IMUL EAX,ECX
004B3DC1  D1 E0                     SHL EAX,0x1
004B3DC3  83 C0 03                  ADD EAX,0x3
004B3DC6  24 FC                     AND AL,0xfc
004B3DC8  E8 73 9C 27 00            CALL 0x0072da40
004B3DCD  89 65 E8                  MOV dword ptr [EBP + -0x18],ESP
004B3DD0  8B C4                     MOV EAX,ESP
004B3DD2  89 85 88 FD FF FF         MOV dword ptr [EBP + 0xfffffd88],EAX
004B3DD8  83 C8 FF                  OR EAX,0xffffffff
004B3DDB  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
004B3DDE  EB 2A                     JMP 0x004b3e0a
LAB_004b3e0a:
004B3E0A  0F BF 0D 44 B2 7F 00      MOVSX ECX,word ptr [0x007fb244]
004B3E11  0F BF 15 46 B2 7F 00      MOVSX EDX,word ptr [0x007fb246]
004B3E18  0F AF CA                  IMUL ECX,EDX
004B3E1B  D1 E1                     SHL ECX,0x1
004B3E1D  8B BD 88 FD FF FF         MOV EDI,dword ptr [EBP + 0xfffffd88]
004B3E23  8B D1                     MOV EDX,ECX
004B3E25  C1 E9 02                  SHR ECX,0x2
004B3E28  F3 AB                     STOSD.REP ES:EDI
004B3E2A  8B CA                     MOV ECX,EDX
004B3E2C  83 E1 03                  AND ECX,0x3
004B3E2F  F3 AA                     STOSB.REP ES:EDI
004B3E31  8B 45 C0                  MOV EAX,dword ptr [EBP + -0x40]
004B3E34  85 C0                     TEST EAX,EAX
004B3E36  0F 84 2D 01 00 00         JZ 0x004b3f69
004B3E3C  6A 0A                     PUSH 0xa
004B3E3E  6A 0C                     PUSH 0xc
004B3E40  6A 0A                     PUSH 0xa
004B3E42  6A 00                     PUSH 0x0
004B3E44  E8 47 A4 1F 00            CALL 0x006ae290
004B3E49  8B D8                     MOV EBX,EAX
004B3E4B  89 9D D8 FD FF FF         MOV dword ptr [EBP + 0xfffffdd8],EBX
004B3E51  8B 0D 6C A1 7F 00         MOV ECX,dword ptr [0x007fa16c]
004B3E57  85 C9                     TEST ECX,ECX
004B3E59  74 7F                     JZ 0x004b3eda
004B3E5B  33 FF                     XOR EDI,EDI
004B3E5D  8B 41 0C                  MOV EAX,dword ptr [ECX + 0xc]
004B3E60  85 C0                     TEST EAX,EAX
004B3E62  7E 76                     JLE 0x004b3eda
LAB_004b3e64:
004B3E64  8D 45 AC                  LEA EAX,[EBP + -0x54]
004B3E67  50                        PUSH EAX
004B3E68  8B D7                     MOV EDX,EDI
004B3E6A  E8 01 8E 1F 00            CALL 0x006acc70
004B3E6F  8D 8D 5C FF FF FF         LEA ECX,[EBP + 0xffffff5c]
004B3E75  51                        PUSH ECX
004B3E76  8D 95 78 FF FF FF         LEA EDX,[EBP + 0xffffff78]
004B3E7C  52                        PUSH EDX
004B3E7D  8D 45 88                  LEA EAX,[EBP + -0x78]
004B3E80  50                        PUSH EAX
004B3E81  8B 4D AC                  MOV ECX,dword ptr [EBP + -0x54]
004B3E84  E8 3C DA F4 FF            CALL 0x004018c5
004B3E89  33 C9                     XOR ECX,ECX
004B3E8B  89 8D C0 FE FF FF         MOV dword ptr [EBP + 0xfffffec0],ECX
004B3E91  89 8D C4 FE FF FF         MOV dword ptr [EBP + 0xfffffec4],ECX
004B3E97  89 8D C8 FE FF FF         MOV dword ptr [EBP + 0xfffffec8],ECX
004B3E9D  0F BF 55 88               MOVSX EDX,word ptr [EBP + -0x78]
004B3EA1  89 95 C0 FE FF FF         MOV dword ptr [EBP + 0xfffffec0],EDX
004B3EA7  0F BF 85 78 FF FF FF      MOVSX EAX,word ptr [EBP + 0xffffff78]
004B3EAE  89 85 C4 FE FF FF         MOV dword ptr [EBP + 0xfffffec4],EAX
004B3EB4  0F BF 8D 5C FF FF FF      MOVSX ECX,word ptr [EBP + 0xffffff5c]
004B3EBB  89 8D C8 FE FF FF         MOV dword ptr [EBP + 0xfffffec8],ECX
004B3EC1  8D 95 C0 FE FF FF         LEA EDX,[EBP + 0xfffffec0]
004B3EC7  52                        PUSH EDX
004B3EC8  53                        PUSH EBX
004B3EC9  E8 F2 A2 1F 00            CALL 0x006ae1c0
004B3ECE  47                        INC EDI
004B3ECF  8B 0D 6C A1 7F 00         MOV ECX,dword ptr [0x007fa16c]
004B3ED5  3B 79 0C                  CMP EDI,dword ptr [ECX + 0xc]
004B3ED8  7C 8A                     JL 0x004b3e64
LAB_004b3eda:
004B3EDA  8B 46 14                  MOV EAX,dword ptr [ESI + 0x14]
004B3EDD  85 C0                     TEST EAX,EAX
004B3EDF  0F 84 84 00 00 00         JZ 0x004b3f69
004B3EE5  8B 48 0C                  MOV ECX,dword ptr [EAX + 0xc]
004B3EE8  85 C9                     TEST ECX,ECX
004B3EEA  74 7D                     JZ 0x004b3f69
004B3EEC  C7 40 04 00 00 00 00      MOV dword ptr [EAX + 0x4],0x0
004B3EF3  8D 95 64 FF FF FF         LEA EDX,[EBP + 0xffffff64]
004B3EF9  8B 4E 14                  MOV ECX,dword ptr [ESI + 0x14]
004B3EFC  E8 8F D2 1F 00            CALL 0x006b1190
004B3F01  85 C0                     TEST EAX,EAX
004B3F03  7C 64                     JL 0x004b3f69
004B3F05  BF 3A 00 00 00            MOV EDI,0x3a
LAB_004b3f0a:
004B3F0A  39 BD 64 FF FF FF         CMP dword ptr [EBP + 0xffffff64],EDI
004B3F10  75 45                     JNZ 0x004b3f57
004B3F12  33 C0                     XOR EAX,EAX
004B3F14  89 85 C0 FE FF FF         MOV dword ptr [EBP + 0xfffffec0],EAX
004B3F1A  89 85 C4 FE FF FF         MOV dword ptr [EBP + 0xfffffec4],EAX
004B3F20  89 85 C8 FE FF FF         MOV dword ptr [EBP + 0xfffffec8],EAX
004B3F26  8B 8D 68 FF FF FF         MOV ECX,dword ptr [EBP + 0xffffff68]
004B3F2C  89 8D C0 FE FF FF         MOV dword ptr [EBP + 0xfffffec0],ECX
004B3F32  8B 95 6C FF FF FF         MOV EDX,dword ptr [EBP + 0xffffff6c]
004B3F38  89 95 C4 FE FF FF         MOV dword ptr [EBP + 0xfffffec4],EDX
004B3F3E  8B 85 70 FF FF FF         MOV EAX,dword ptr [EBP + 0xffffff70]
004B3F44  89 85 C8 FE FF FF         MOV dword ptr [EBP + 0xfffffec8],EAX
004B3F4A  8D 8D C0 FE FF FF         LEA ECX,[EBP + 0xfffffec0]
004B3F50  51                        PUSH ECX
004B3F51  53                        PUSH EBX
004B3F52  E8 69 A2 1F 00            CALL 0x006ae1c0
LAB_004b3f57:
004B3F57  8D 95 64 FF FF FF         LEA EDX,[EBP + 0xffffff64]
004B3F5D  8B 4E 14                  MOV ECX,dword ptr [ESI + 0x14]
004B3F60  E8 2B D2 1F 00            CALL 0x006b1190
004B3F65  85 C0                     TEST EAX,EAX
004B3F67  7D A1                     JGE 0x004b3f0a
LAB_004b3f69:
004B3F69  8B 45 C4                  MOV EAX,dword ptr [EBP + -0x3c]
004B3F6C  85 C0                     TEST EAX,EAX
004B3F6E  0F 84 4F 01 00 00         JZ 0x004b40c3
004B3F74  6A 0A                     PUSH 0xa
004B3F76  6A 0C                     PUSH 0xc
004B3F78  6A 0A                     PUSH 0xa
004B3F7A  6A 00                     PUSH 0x0
004B3F7C  E8 0F A3 1F 00            CALL 0x006ae290
004B3F81  89 85 80 FE FF FF         MOV dword ptr [EBP + 0xfffffe80],EAX
004B3F87  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
004B3F8A  8D 14 80                  LEA EDX,[EAX + EAX*0x4]
004B3F8D  8D 0C D0                  LEA ECX,[EAX + EDX*0x8]
004B3F90  8D 14 48                  LEA EDX,[EAX + ECX*0x2]
004B3F93  C1 E2 04                  SHL EDX,0x4
004B3F96  03 D0                     ADD EDX,EAX
004B3F98  8D 1C 55 F6 57 7F 00      LEA EBX,[EDX*0x2 + 0x7f57f6]
004B3F9F  8B 0B                     MOV ECX,dword ptr [EBX]
004B3FA1  85 C9                     TEST ECX,ECX
004B3FA3  0F 84 81 00 00 00         JZ 0x004b402a
004B3FA9  33 FF                     XOR EDI,EDI
004B3FAB  8B 41 0C                  MOV EAX,dword ptr [ECX + 0xc]
004B3FAE  85 C0                     TEST EAX,EAX
004B3FB0  7E 78                     JLE 0x004b402a
LAB_004b3fb2:
004B3FB2  8D 45 AC                  LEA EAX,[EBP + -0x54]
004B3FB5  50                        PUSH EAX
004B3FB6  8B D7                     MOV EDX,EDI
004B3FB8  E8 B3 8C 1F 00            CALL 0x006acc70
004B3FBD  8D 8D 5C FF FF FF         LEA ECX,[EBP + 0xffffff5c]
004B3FC3  51                        PUSH ECX
004B3FC4  8D 95 78 FF FF FF         LEA EDX,[EBP + 0xffffff78]
004B3FCA  52                        PUSH EDX
004B3FCB  8D 45 88                  LEA EAX,[EBP + -0x78]
004B3FCE  50                        PUSH EAX
004B3FCF  8B 4D AC                  MOV ECX,dword ptr [EBP + -0x54]
004B3FD2  E8 EE D8 F4 FF            CALL 0x004018c5
004B3FD7  33 C9                     XOR ECX,ECX
004B3FD9  89 8D C0 FE FF FF         MOV dword ptr [EBP + 0xfffffec0],ECX
004B3FDF  89 8D C4 FE FF FF         MOV dword ptr [EBP + 0xfffffec4],ECX
004B3FE5  89 8D C8 FE FF FF         MOV dword ptr [EBP + 0xfffffec8],ECX
004B3FEB  0F BF 55 88               MOVSX EDX,word ptr [EBP + -0x78]
004B3FEF  89 95 C0 FE FF FF         MOV dword ptr [EBP + 0xfffffec0],EDX
004B3FF5  0F BF 85 78 FF FF FF      MOVSX EAX,word ptr [EBP + 0xffffff78]
004B3FFC  89 85 C4 FE FF FF         MOV dword ptr [EBP + 0xfffffec4],EAX
004B4002  0F BF 8D 5C FF FF FF      MOVSX ECX,word ptr [EBP + 0xffffff5c]
004B4009  89 8D C8 FE FF FF         MOV dword ptr [EBP + 0xfffffec8],ECX
004B400F  8D 95 C0 FE FF FF         LEA EDX,[EBP + 0xfffffec0]
004B4015  52                        PUSH EDX
004B4016  8B 85 80 FE FF FF         MOV EAX,dword ptr [EBP + 0xfffffe80]
004B401C  50                        PUSH EAX
004B401D  E8 9E A1 1F 00            CALL 0x006ae1c0
004B4022  47                        INC EDI
004B4023  8B 0B                     MOV ECX,dword ptr [EBX]
004B4025  3B 79 0C                  CMP EDI,dword ptr [ECX + 0xc]
004B4028  7C 88                     JL 0x004b3fb2
LAB_004b402a:
004B402A  8B 46 14                  MOV EAX,dword ptr [ESI + 0x14]
004B402D  85 C0                     TEST EAX,EAX
004B402F  0F 84 8E 00 00 00         JZ 0x004b40c3
004B4035  8B 48 0C                  MOV ECX,dword ptr [EAX + 0xc]
004B4038  85 C9                     TEST ECX,ECX
004B403A  0F 84 83 00 00 00         JZ 0x004b40c3
004B4040  C7 40 04 00 00 00 00      MOV dword ptr [EAX + 0x4],0x0
004B4047  8D 95 64 FF FF FF         LEA EDX,[EBP + 0xffffff64]
004B404D  8B 4E 14                  MOV ECX,dword ptr [ESI + 0x14]
004B4050  E8 3B D1 1F 00            CALL 0x006b1190
004B4055  85 C0                     TEST EAX,EAX
004B4057  7C 6A                     JL 0x004b40c3
004B4059  BF 64 00 00 00            MOV EDI,0x64
LAB_004b405e:
004B405E  39 BD 64 FF FF FF         CMP dword ptr [EBP + 0xffffff64],EDI
004B4064  75 4B                     JNZ 0x004b40b1
004B4066  33 C9                     XOR ECX,ECX
004B4068  89 8D C0 FE FF FF         MOV dword ptr [EBP + 0xfffffec0],ECX
004B406E  89 8D C4 FE FF FF         MOV dword ptr [EBP + 0xfffffec4],ECX
004B4074  89 8D C8 FE FF FF         MOV dword ptr [EBP + 0xfffffec8],ECX
004B407A  8B 95 68 FF FF FF         MOV EDX,dword ptr [EBP + 0xffffff68]
004B4080  89 95 C0 FE FF FF         MOV dword ptr [EBP + 0xfffffec0],EDX
004B4086  8B 85 6C FF FF FF         MOV EAX,dword ptr [EBP + 0xffffff6c]
004B408C  89 85 C4 FE FF FF         MOV dword ptr [EBP + 0xfffffec4],EAX
004B4092  8B 8D 70 FF FF FF         MOV ECX,dword ptr [EBP + 0xffffff70]
004B4098  89 8D C8 FE FF FF         MOV dword ptr [EBP + 0xfffffec8],ECX
004B409E  8D 95 C0 FE FF FF         LEA EDX,[EBP + 0xfffffec0]
004B40A4  52                        PUSH EDX
004B40A5  8B 85 80 FE FF FF         MOV EAX,dword ptr [EBP + 0xfffffe80]
004B40AB  50                        PUSH EAX
004B40AC  E8 0F A1 1F 00            CALL 0x006ae1c0
LAB_004b40b1:
004B40B1  8D 95 64 FF FF FF         LEA EDX,[EBP + 0xffffff64]
004B40B7  8B 4E 14                  MOV ECX,dword ptr [ESI + 0x14]
004B40BA  E8 D1 D0 1F 00            CALL 0x006b1190
004B40BF  85 C0                     TEST EAX,EAX
004B40C1  7D 9B                     JGE 0x004b405e
LAB_004b40c3:
004B40C3  8B 4D E0                  MOV ECX,dword ptr [EBP + -0x20]
004B40C6  8B 55 D8                  MOV EDX,dword ptr [EBP + -0x28]
004B40C9  03 CA                     ADD ECX,EDX
004B40CB  03 4D DC                  ADD ECX,dword ptr [EBP + -0x24]
004B40CE  03 4D D4                  ADD ECX,dword ptr [EBP + -0x2c]
004B40D1  03 4D C8                  ADD ECX,dword ptr [EBP + -0x38]
004B40D4  8B 45 D0                  MOV EAX,dword ptr [EBP + -0x30]
004B40D7  8D 4C 01 05               LEA ECX,[ECX + EAX*0x1 + 0x5]
004B40DB  89 4D B0                  MOV dword ptr [EBP + -0x50],ECX
004B40DE  6A 0A                     PUSH 0xa
004B40E0  6A 30                     PUSH 0x30
004B40E2  6A 0A                     PUSH 0xa
004B40E4  6A 00                     PUSH 0x0
004B40E6  E8 A5 A1 1F 00            CALL 0x006ae290
004B40EB  89 45 E4                  MOV dword ptr [EBP + -0x1c],EAX
004B40EE  33 C0                     XOR EAX,EAX
004B40F0  89 45 A0                  MOV dword ptr [EBP + -0x60],EAX
004B40F3  89 85 F0 FE FF FF         MOV dword ptr [EBP + 0xfffffef0],EAX
LAB_004b40f9:
004B40F9  8B 0D 40 B2 7F 00         MOV ECX,dword ptr [0x007fb240]
004B40FF  66 8B 15 42 B2 7F 00      MOV DX,word ptr [0x007fb242]
004B4106  66 3B CA                  CMP CX,DX
004B4109  7F 03                     JG 0x004b410e
004B410B  66 8B CA                  MOV CX,DX
LAB_004b410e:
004B410E  0F BF D1                  MOVSX EDX,CX
004B4111  3B C2                     CMP EAX,EDX
004B4113  0F 8D 70 05 00 00         JGE 0x004b4689
004B4119  C7 45 90 00 00 00 00      MOV dword ptr [EBP + -0x70],0x0
004B4120  C1 E0 03                  SHL EAX,0x3
004B4123  85 C0                     TEST EAX,EAX
004B4125  0F 8E 44 05 00 00         JLE 0x004b466f
LAB_004b412b:
004B412B  8B 75 0C                  MOV ESI,dword ptr [EBP + 0xc]
004B412E  8B 45 A0                  MOV EAX,dword ptr [EBP + -0x60]
004B4131  8D 14 00                  LEA EDX,[EAX + EAX*0x1]
004B4134  8B 4D 90                  MOV ECX,dword ptr [EBP + -0x70]
004B4137  3B CA                     CMP ECX,EDX
004B4139  7D 19                     JGE 0x004b4154
004B413B  8B 16                     MOV EDX,dword ptr [ESI]
004B413D  2B D0                     SUB EDX,EAX
004B413F  03 D1                     ADD EDX,ECX
004B4141  89 95 E8 FE FF FF         MOV dword ptr [EBP + 0xfffffee8],EDX
004B4147  8B 76 04                  MOV ESI,dword ptr [ESI + 0x4]
004B414A  2B F0                     SUB ESI,EAX
004B414C  89 B5 CC FE FF FF         MOV dword ptr [EBP + 0xfffffecc],ESI
004B4152  EB 67                     JMP 0x004b41bb
LAB_004b4154:
004B4154  8D 3C 85 00 00 00 00      LEA EDI,[EAX*0x4 + 0x0]
004B415B  3B CF                     CMP ECX,EDI
004B415D  7D 1B                     JGE 0x004b417a
004B415F  8B F8                     MOV EDI,EAX
004B4161  03 3E                     ADD EDI,dword ptr [ESI]
004B4163  89 BD E8 FE FF FF         MOV dword ptr [EBP + 0xfffffee8],EDI
004B4169  8B 76 04                  MOV ESI,dword ptr [ESI + 0x4]
004B416C  2B F2                     SUB ESI,EDX
004B416E  2B F0                     SUB ESI,EAX
004B4170  03 F1                     ADD ESI,ECX
004B4172  89 B5 CC FE FF FF         MOV dword ptr [EBP + 0xfffffecc],ESI
004B4178  EB 41                     JMP 0x004b41bb
LAB_004b417a:
004B417A  8D 14 40                  LEA EDX,[EAX + EAX*0x2]
004B417D  D1 E2                     SHL EDX,0x1
004B417F  3B CA                     CMP ECX,EDX
004B4181  7D 1A                     JGE 0x004b419d
004B4183  8D 14 80                  LEA EDX,[EAX + EAX*0x4]
004B4186  2B D1                     SUB EDX,ECX
004B4188  03 16                     ADD EDX,dword ptr [ESI]
004B418A  89 95 E8 FE FF FF         MOV dword ptr [EBP + 0xfffffee8],EDX
004B4190  8B 76 04                  MOV ESI,dword ptr [ESI + 0x4]
004B4193  03 F0                     ADD ESI,EAX
004B4195  89 B5 CC FE FF FF         MOV dword ptr [EBP + 0xfffffecc],ESI
004B419B  EB 2A                     JMP 0x004b41c7
LAB_004b419d:
004B419D  8B 16                     MOV EDX,dword ptr [ESI]
004B419F  2B D0                     SUB EDX,EAX
004B41A1  89 95 E8 FE FF FF         MOV dword ptr [EBP + 0xfffffee8],EDX
004B41A7  8D 14 C5 00 00 00 00      LEA EDX,[EAX*0x8 + 0x0]
004B41AE  2B D0                     SUB EDX,EAX
004B41B0  03 56 04                  ADD EDX,dword ptr [ESI + 0x4]
004B41B3  2B D1                     SUB EDX,ECX
004B41B5  89 95 CC FE FF FF         MOV dword ptr [EBP + 0xfffffecc],EDX
LAB_004b41bb:
004B41BB  8B B5 CC FE FF FF         MOV ESI,dword ptr [EBP + 0xfffffecc]
004B41C1  8B 95 E8 FE FF FF         MOV EDX,dword ptr [EBP + 0xfffffee8]
LAB_004b41c7:
004B41C7  85 D2                     TEST EDX,EDX
004B41C9  0F 8C 87 04 00 00         JL 0x004b4656
004B41CF  0F BF 05 40 B2 7F 00      MOVSX EAX,word ptr [0x007fb240]
004B41D6  3B D0                     CMP EDX,EAX
004B41D8  0F 8D 78 04 00 00         JGE 0x004b4656
004B41DE  85 F6                     TEST ESI,ESI
004B41E0  0F 8C 70 04 00 00         JL 0x004b4656
004B41E6  0F BF 0D 42 B2 7F 00      MOVSX ECX,word ptr [0x007fb242]
004B41ED  3B F1                     CMP ESI,ECX
004B41EF  0F 8D 61 04 00 00         JGE 0x004b4656
004B41F5  33 D2                     XOR EDX,EDX
004B41F7  89 95 B0 FD FF FF         MOV dword ptr [EBP + 0xfffffdb0],EDX
004B41FD  66 39 15 44 B2 7F 00      CMP word ptr [0x007fb244],DX
004B4204  0F 8E 4C 04 00 00         JLE 0x004b4656
004B420A  8B BD 88 FD FF FF         MOV EDI,dword ptr [EBP + 0xfffffd88]
004B4210  EB 06                     JMP 0x004b4218
LAB_004b4212:
004B4212  8B 95 B0 FD FF FF         MOV EDX,dword ptr [EBP + 0xfffffdb0]
LAB_004b4218:
004B4218  0F BF 0D 46 B2 7F 00      MOVSX ECX,word ptr [0x007fb246]
004B421F  0F AF CA                  IMUL ECX,EDX
004B4222  0F BF 35 40 B2 7F 00      MOVSX ESI,word ptr [0x007fb240]
004B4229  8B 85 CC FE FF FF         MOV EAX,dword ptr [EBP + 0xfffffecc]
004B422F  0F AF F0                  IMUL ESI,EAX
004B4232  8B 9D E8 FE FF FF         MOV EBX,dword ptr [EBP + 0xfffffee8]
004B4238  03 D9                     ADD EBX,ECX
004B423A  03 F3                     ADD ESI,EBX
004B423C  8B 0D 48 B2 7F 00         MOV ECX,dword ptr [0x007fb248]
004B4242  8B 0C F1                  MOV ECX,dword ptr [ECX + ESI*0x8]
004B4245  89 4D AC                  MOV dword ptr [EBP + -0x54],ECX
004B4248  85 C9                     TEST ECX,ECX
004B424A  0F 85 CC 00 00 00         JNZ 0x004b431c
004B4250  8B 8D E8 FE FF FF         MOV ECX,dword ptr [EBP + 0xfffffee8]
004B4256  66 85 C9                  TEST CX,CX
004B4259  7C 52                     JL 0x004b42ad
004B425B  66 3B 0D 40 B2 7F 00      CMP CX,word ptr [0x007fb240]
004B4262  7D 49                     JGE 0x004b42ad
004B4264  66 85 C0                  TEST AX,AX
004B4267  7C 44                     JL 0x004b42ad
004B4269  66 3B 05 42 B2 7F 00      CMP AX,word ptr [0x007fb242]
004B4270  7D 3B                     JGE 0x004b42ad
004B4272  66 85 D2                  TEST DX,DX
004B4275  7C 36                     JL 0x004b42ad
004B4277  66 3B 15 44 B2 7F 00      CMP DX,word ptr [0x007fb244]
004B427E  7D 2D                     JGE 0x004b42ad
004B4280  0F BF C0                  MOVSX EAX,AX
004B4283  0F BF 1D 78 B2 7F 00      MOVSX EBX,word ptr [0x007fb278]
004B428A  0F AF C3                  IMUL EAX,EBX
004B428D  0F BF D2                  MOVSX EDX,DX
004B4290  0F BF 1D 7E B2 7F 00      MOVSX EBX,word ptr [0x007fb27e]
004B4297  0F AF D3                  IMUL EDX,EBX
004B429A  03 C2                     ADD EAX,EDX
004B429C  0F BF C9                  MOVSX ECX,CX
004B429F  03 C1                     ADD EAX,ECX
004B42A1  8B 15 80 B2 7F 00         MOV EDX,dword ptr [0x007fb280]
004B42A7  0F BF 04 42               MOVSX EAX,word ptr [EDX + EAX*0x2]
004B42AB  EB 03                     JMP 0x004b42b0
LAB_004b42ad:
004B42AD  83 C8 FF                  OR EAX,0xffffffff
LAB_004b42b0:
004B42B0  85 C0                     TEST EAX,EAX
004B42B2  75 54                     JNZ 0x004b4308
004B42B4  A1 48 B2 7F 00            MOV EAX,[0x007fb248]
004B42B9  8B 4C F0 04               MOV ECX,dword ptr [EAX + ESI*0x8 + 0x4]
004B42BD  89 4D AC                  MOV dword ptr [EBP + -0x54],ECX
004B42C0  85 C9                     TEST ECX,ECX
004B42C2  74 69                     JZ 0x004b432d
004B42C4  8B 11                     MOV EDX,dword ptr [ECX]
004B42C6  FF 52 2C                  CALL dword ptr [EDX + 0x2c]
004B42C9  3D A6 00 00 00            CMP EAX,0xa6
004B42CE  74 2D                     JZ 0x004b42fd
004B42D0  8B 4D AC                  MOV ECX,dword ptr [EBP + -0x54]
004B42D3  8B 01                     MOV EAX,dword ptr [ECX]
004B42D5  FF 50 2C                  CALL dword ptr [EAX + 0x2c]
004B42D8  3D BD 00 00 00            CMP EAX,0xbd
004B42DD  74 1E                     JZ 0x004b42fd
004B42DF  8B 4D AC                  MOV ECX,dword ptr [EBP + -0x54]
004B42E2  8B 11                     MOV EDX,dword ptr [ECX]
004B42E4  FF 52 2C                  CALL dword ptr [EDX + 0x2c]
004B42E7  3D A7 00 00 00            CMP EAX,0xa7
004B42EC  74 0F                     JZ 0x004b42fd
004B42EE  8B 4D AC                  MOV ECX,dword ptr [EBP + -0x54]
004B42F1  8B 01                     MOV EAX,dword ptr [ECX]
004B42F3  FF 50 2C                  CALL dword ptr [EAX + 0x2c]
004B42F6  3D AF 00 00 00            CMP EAX,0xaf
004B42FB  75 30                     JNZ 0x004b432d
LAB_004b42fd:
004B42FD  66 C7 04 77 40 00         MOV word ptr [EDI + ESI*0x2],0x40
004B4303  E9 32 03 00 00            JMP 0x004b463a
LAB_004b4308:
004B4308  83 F8 FF                  CMP EAX,-0x1
004B430B  0F 85 23 03 00 00         JNZ 0x004b4634
004B4311  66 C7 04 77 20 00         MOV word ptr [EDI + ESI*0x2],0x20
004B4317  E9 1E 03 00 00            JMP 0x004b463a
LAB_004b431c:
004B431C  8B 41 20                  MOV EAX,dword ptr [ECX + 0x20]
004B431F  3D E8 03 00 00            CMP EAX,0x3e8
004B4324  74 12                     JZ 0x004b4338
004B4326  3D E9 03 00 00            CMP EAX,0x3e9
004B432B  74 12                     JZ 0x004b433f
LAB_004b432d:
004B432D  66 C7 04 77 00 00         MOV word ptr [EDI + ESI*0x2],0x0
004B4333  E9 02 03 00 00            JMP 0x004b463a
LAB_004b4338:
004B4338  3D E9 03 00 00            CMP EAX,0x3e9
004B433D  75 0E                     JNZ 0x004b434d
LAB_004b433f:
004B433F  8B 91 59 02 00 00         MOV EDX,dword ptr [ECX + 0x259]
004B4345  89 95 B8 FC FF FF         MOV dword ptr [EBP + 0xfffffcb8],EDX
004B434B  EB 0E                     JMP 0x004b435b
LAB_004b434d:
004B434D  8B 01                     MOV EAX,dword ptr [ECX]
004B434F  FF 50 2C                  CALL dword ptr [EAX + 0x2c]
004B4352  89 85 B8 FC FF FF         MOV dword ptr [EBP + 0xfffffcb8],EAX
004B4358  8B 4D AC                  MOV ECX,dword ptr [EBP + -0x54]
LAB_004b435b:
004B435B  8B 41 24                  MOV EAX,dword ptr [ECX + 0x24]
004B435E  8B 5D 08                  MOV EBX,dword ptr [EBP + 0x8]
004B4361  3B C3                     CMP EAX,EBX
004B4363  0F 85 99 01 00 00         JNZ 0x004b4502
004B4369  8B 8D B8 FC FF FF         MOV ECX,dword ptr [EBP + 0xfffffcb8]
004B436F  8D 04 8D 88 08 79 00      LEA EAX,[ECX*0x4 + 0x790888]
004B4376  66 8B 10                  MOV DX,word ptr [EAX]
004B4379  80 CE 02                  OR DH,0x2
004B437C  66 89 14 77               MOV word ptr [EDI + ESI*0x2],DX
004B4380  8B 4D A0                  MOV ECX,dword ptr [EBP + -0x60]
004B4383  89 8D F0 FE FF FF         MOV dword ptr [EBP + 0xfffffef0],ECX
004B4389  8B 00                     MOV EAX,dword ptr [EAX]
004B438B  83 F8 07                  CMP EAX,0x7
004B438E  0F 84 B1 00 00 00         JZ 0x004b4445
004B4394  83 F8 08                  CMP EAX,0x8
004B4397  0F 84 A8 00 00 00         JZ 0x004b4445
004B439D  83 F8 09                  CMP EAX,0x9
004B43A0  0F 84 9F 00 00 00         JZ 0x004b4445
004B43A6  83 F8 04                  CMP EAX,0x4
004B43A9  0F 85 8B 02 00 00         JNZ 0x004b463a
004B43AF  8D 95 5C FF FF FF         LEA EDX,[EBP + 0xffffff5c]
004B43B5  52                        PUSH EDX
004B43B6  8D 85 78 FF FF FF         LEA EAX,[EBP + 0xffffff78]
004B43BC  50                        PUSH EAX
004B43BD  8D 4D 88                  LEA ECX,[EBP + -0x78]
004B43C0  51                        PUSH ECX
004B43C1  8B 4D AC                  MOV ECX,dword ptr [EBP + -0x54]
004B43C4  E8 FC D4 F4 FF            CALL 0x004018c5
004B43C9  0F BF 5D 88               MOVSX EBX,word ptr [EBP + -0x78]
004B43CD  3B 9D E8 FE FF FF         CMP EBX,dword ptr [EBP + 0xfffffee8]
004B43D3  0F 85 61 02 00 00         JNZ 0x004b463a
004B43D9  0F BF B5 78 FF FF FF      MOVSX ESI,word ptr [EBP + 0xffffff78]
004B43E0  3B B5 CC FE FF FF         CMP ESI,dword ptr [EBP + 0xfffffecc]
004B43E6  0F 85 4E 02 00 00         JNZ 0x004b463a
004B43EC  0F BF 95 5C FF FF FF      MOVSX EDX,word ptr [EBP + 0xffffff5c]
004B43F3  3B 95 B0 FD FF FF         CMP EDX,dword ptr [EBP + 0xfffffdb0]
004B43F9  0F 85 3B 02 00 00         JNZ 0x004b463a
004B43FF  B9 0C 00 00 00            MOV ECX,0xc
004B4404  33 C0                     XOR EAX,EAX
004B4406  8D BD 10 FF FF FF         LEA EDI,[EBP + 0xffffff10]
004B440C  F3 AB                     STOSD.REP ES:EDI
004B440E  C7 85 10 FF FF FF 01 00 00 00  MOV dword ptr [EBP + 0xffffff10],0x1
004B4418  89 9D 14 FF FF FF         MOV dword ptr [EBP + 0xffffff14],EBX
004B441E  89 B5 18 FF FF FF         MOV dword ptr [EBP + 0xffffff18],ESI
004B4424  89 95 1C FF FF FF         MOV dword ptr [EBP + 0xffffff1c],EDX
004B442A  8D 95 10 FF FF FF         LEA EDX,[EBP + 0xffffff10]
004B4430  52                        PUSH EDX
004B4431  8B 45 E4                  MOV EAX,dword ptr [EBP + -0x1c]
004B4434  50                        PUSH EAX
004B4435  E8 86 9D 1F 00            CALL 0x006ae1c0
004B443A  8B BD 88 FD FF FF         MOV EDI,dword ptr [EBP + 0xfffffd88]
004B4440  E9 F5 01 00 00            JMP 0x004b463a
LAB_004b4445:
004B4445  8D 8D 5C FF FF FF         LEA ECX,[EBP + 0xffffff5c]
004B444B  51                        PUSH ECX
004B444C  8D 95 78 FF FF FF         LEA EDX,[EBP + 0xffffff78]
004B4452  52                        PUSH EDX
004B4453  8D 45 88                  LEA EAX,[EBP + -0x78]
004B4456  50                        PUSH EAX
004B4457  8B 4D AC                  MOV ECX,dword ptr [EBP + -0x54]
004B445A  E8 66 D4 F4 FF            CALL 0x004018c5
004B445F  0F BF 4D 88               MOVSX ECX,word ptr [EBP + -0x78]
004B4463  3B 8D E8 FE FF FF         CMP ECX,dword ptr [EBP + 0xfffffee8]
004B4469  0F 85 CB 01 00 00         JNZ 0x004b463a
004B446F  0F BF 95 78 FF FF FF      MOVSX EDX,word ptr [EBP + 0xffffff78]
004B4476  3B 95 CC FE FF FF         CMP EDX,dword ptr [EBP + 0xfffffecc]
004B447C  0F 85 B8 01 00 00         JNZ 0x004b463a
004B4482  0F BF 85 5C FF FF FF      MOVSX EAX,word ptr [EBP + 0xffffff5c]
004B4489  3B 85 B0 FD FF FF         CMP EAX,dword ptr [EBP + 0xfffffdb0]
004B448F  0F 85 A5 01 00 00         JNZ 0x004b463a
004B4495  8B 8D B8 FC FF FF         MOV ECX,dword ptr [EBP + 0xfffffcb8]
004B449B  8D B4 8D F0 FC FF FF      LEA ESI,[EBP + ECX*0x4 + 0xfffffcf0]
004B44A2  83 3E 00                  CMP dword ptr [ESI],0x0
004B44A5  75 0F                     JNZ 0x004b44b6
004B44A7  6A 0A                     PUSH 0xa
004B44A9  6A 0C                     PUSH 0xc
004B44AB  6A 0A                     PUSH 0xa
004B44AD  6A 00                     PUSH 0x0
004B44AF  E8 DC 9D 1F 00            CALL 0x006ae290
004B44B4  89 06                     MOV dword ptr [ESI],EAX
LAB_004b44b6:
004B44B6  33 D2                     XOR EDX,EDX
004B44B8  89 95 C0 FE FF FF         MOV dword ptr [EBP + 0xfffffec0],EDX
004B44BE  89 95 C4 FE FF FF         MOV dword ptr [EBP + 0xfffffec4],EDX
004B44C4  89 95 C8 FE FF FF         MOV dword ptr [EBP + 0xfffffec8],EDX
004B44CA  0F BF 45 88               MOVSX EAX,word ptr [EBP + -0x78]
004B44CE  89 85 C0 FE FF FF         MOV dword ptr [EBP + 0xfffffec0],EAX
004B44D4  0F BF 8D 78 FF FF FF      MOVSX ECX,word ptr [EBP + 0xffffff78]
004B44DB  89 8D C4 FE FF FF         MOV dword ptr [EBP + 0xfffffec4],ECX
004B44E1  0F BF 95 5C FF FF FF      MOVSX EDX,word ptr [EBP + 0xffffff5c]
004B44E8  89 95 C8 FE FF FF         MOV dword ptr [EBP + 0xfffffec8],EDX
004B44EE  8D 85 C0 FE FF FF         LEA EAX,[EBP + 0xfffffec0]
004B44F4  50                        PUSH EAX
004B44F5  8B 0E                     MOV ECX,dword ptr [ESI]
004B44F7  51                        PUSH ECX
004B44F8  E8 C3 9C 1F 00            CALL 0x006ae1c0
004B44FD  E9 38 01 00 00            JMP 0x004b463a
LAB_004b4502:
004B4502  83 F8 08                  CMP EAX,0x8
004B4505  0F 83 29 01 00 00         JNC 0x004b4634
004B450B  8B 15 38 2A 80 00         MOV EDX,dword ptr [0x00802a38]
004B4511  85 D2                     TEST EDX,EDX
004B4513  74 11                     JZ 0x004b4526
004B4515  8D 04 C0                  LEA EAX,[EAX + EAX*0x8]
004B4518  80 BC C0 E9 87 80 00 08   CMP byte ptr [EAX + EAX*0x8 + 0x8087e9],0x8
004B4520  0F 83 0E 01 00 00         JNC 0x004b4634
LAB_004b4526:
004B4526  8A 41 24                  MOV AL,byte ptr [ECX + 0x24]
004B4529  88 85 CC FC FF FF         MOV byte ptr [EBP + 0xfffffccc],AL
004B452F  8B 0D 28 67 80 00         MOV ECX,dword ptr [0x00806728]
004B4535  8A 91 6F 14 00 00         MOV DL,byte ptr [ECX + 0x146f]
004B453B  84 D2                     TEST DL,DL
004B453D  74 42                     JZ 0x004b4581
004B453F  8B 85 CC FC FF FF         MOV EAX,dword ptr [EBP + 0xfffffccc]
004B4545  25 FF 00 00 00            AND EAX,0xff
004B454A  8D 14 C0                  LEA EDX,[EAX + EAX*0x8]
004B454D  8D 04 D1                  LEA EAX,[ECX + EDX*0x8]
004B4550  89 85 B4 FC FF FF         MOV dword ptr [EBP + 0xfffffcb4],EAX
004B4556  8B C3                     MOV EAX,EBX
004B4558  25 FF 00 00 00            AND EAX,0xff
004B455D  8D 04 C0                  LEA EAX,[EAX + EAX*0x8]
004B4560  8D 0C C1                  LEA ECX,[ECX + EAX*0x8]
004B4563  8A 84 08 CA 11 00 00      MOV AL,byte ptr [EAX + ECX*0x1 + 0x11ca]
004B456A  33 C9                     XOR ECX,ECX
004B456C  8B 9D B4 FC FF FF         MOV EBX,dword ptr [EBP + 0xfffffcb4]
004B4572  3A 84 1A CA 11 00 00      CMP AL,byte ptr [EDX + EBX*0x1 + 0x11ca]
004B4579  0F 95 C1                  SETNZ CL
004B457C  E9 96 00 00 00            JMP 0x004b4617
LAB_004b4581:
004B4581  3A C3                     CMP AL,BL
004B4583  75 07                     JNZ 0x004b458c
004B4585  33 C0                     XOR EAX,EAX
004B4587  E9 84 00 00 00            JMP 0x004b4610
LAB_004b458c:
004B458C  8B 85 CC FC FF FF         MOV EAX,dword ptr [EBP + 0xfffffccc]
004B4592  25 FF 00 00 00            AND EAX,0xff
004B4597  8B FB                     MOV EDI,EBX
004B4599  81 E7 FF 00 00 00         AND EDI,0xff
004B459F  8D 14 C7                  LEA EDX,[EDI + EAX*0x8]
004B45A2  8A 94 0A 2F 14 00 00      MOV DL,byte ptr [EDX + ECX*0x1 + 0x142f]
004B45A9  84 D2                     TEST DL,DL
004B45AB  75 13                     JNZ 0x004b45c0
004B45AD  8D 1C F8                  LEA EBX,[EAX + EDI*0x8]
004B45B0  38 94 0B 2F 14 00 00      CMP byte ptr [EBX + ECX*0x1 + 0x142f],DL
004B45B7  75 07                     JNZ 0x004b45c0
004B45B9  B8 FE FF FF FF            MOV EAX,0xfffffffe
004B45BE  EB 4A                     JMP 0x004b460a
LAB_004b45c0:
004B45C0  80 FA 01                  CMP DL,0x1
004B45C3  75 12                     JNZ 0x004b45d7
004B45C5  8D 1C F8                  LEA EBX,[EAX + EDI*0x8]
004B45C8  80 BC 0B 2F 14 00 00 00   CMP byte ptr [EBX + ECX*0x1 + 0x142f],0x0
004B45D0  75 05                     JNZ 0x004b45d7
004B45D2  83 C8 FF                  OR EAX,0xffffffff
004B45D5  EB 33                     JMP 0x004b460a
LAB_004b45d7:
004B45D7  84 D2                     TEST DL,DL
004B45D9  75 14                     JNZ 0x004b45ef
004B45DB  8D 1C F8                  LEA EBX,[EAX + EDI*0x8]
004B45DE  80 BC 0B 2F 14 00 00 01   CMP byte ptr [EBX + ECX*0x1 + 0x142f],0x1
004B45E6  75 07                     JNZ 0x004b45ef
004B45E8  B8 01 00 00 00            MOV EAX,0x1
004B45ED  EB 1B                     JMP 0x004b460a
LAB_004b45ef:
004B45EF  80 FA 01                  CMP DL,0x1
004B45F2  75 14                     JNZ 0x004b4608
004B45F4  8D 04 F8                  LEA EAX,[EAX + EDI*0x8]
004B45F7  80 BC 08 2F 14 00 00 01   CMP byte ptr [EAX + ECX*0x1 + 0x142f],0x1
004B45FF  75 07                     JNZ 0x004b4608
004B4601  B8 02 00 00 00            MOV EAX,0x2
004B4606  EB 02                     JMP 0x004b460a
LAB_004b4608:
004B4608  33 C0                     XOR EAX,EAX
LAB_004b460a:
004B460A  8B BD 88 FD FF FF         MOV EDI,dword ptr [EBP + 0xfffffd88]
LAB_004b4610:
004B4610  33 C9                     XOR ECX,ECX
004B4612  85 C0                     TEST EAX,EAX
004B4614  0F 9C C1                  SETL CL
LAB_004b4617:
004B4617  8B C1                     MOV EAX,ECX
004B4619  85 C0                     TEST EAX,EAX
004B461B  74 17                     JZ 0x004b4634
004B461D  8B 95 B8 FC FF FF         MOV EDX,dword ptr [EBP + 0xfffffcb8]
004B4623  66 8B 04 95 88 08 79 00   MOV AX,word ptr [EDX*0x4 + 0x790888]
004B462B  80 CC 01                  OR AH,0x1
004B462E  66 89 04 77               MOV word ptr [EDI + ESI*0x2],AX
004B4632  EB 06                     JMP 0x004b463a
LAB_004b4634:
004B4634  66 C7 04 77 10 00         MOV word ptr [EDI + ESI*0x2],0x10
LAB_004b463a:
004B463A  8B 85 B0 FD FF FF         MOV EAX,dword ptr [EBP + 0xfffffdb0]
004B4640  40                        INC EAX
004B4641  89 85 B0 FD FF FF         MOV dword ptr [EBP + 0xfffffdb0],EAX
004B4647  0F BF 0D 44 B2 7F 00      MOVSX ECX,word ptr [0x007fb244]
004B464E  3B C1                     CMP EAX,ECX
004B4650  0F 8C BC FB FF FF         JL 0x004b4212
LAB_004b4656:
004B4656  8B 4D 90                  MOV ECX,dword ptr [EBP + -0x70]
004B4659  41                        INC ECX
004B465A  89 4D 90                  MOV dword ptr [EBP + -0x70],ECX
004B465D  8B 55 A0                  MOV EDX,dword ptr [EBP + -0x60]
004B4660  8D 04 D5 00 00 00 00      LEA EAX,[EDX*0x8 + 0x0]
004B4667  3B C8                     CMP ECX,EAX
004B4669  0F 8C BC FA FF FF         JL 0x004b412b
LAB_004b466f:
004B466F  8B 45 A0                  MOV EAX,dword ptr [EBP + -0x60]
004B4672  2B 85 F0 FE FF FF         SUB EAX,dword ptr [EBP + 0xfffffef0]
004B4678  3B 45 B0                  CMP EAX,dword ptr [EBP + -0x50]
004B467B  7F 0C                     JG 0x004b4689
004B467D  8B 45 A0                  MOV EAX,dword ptr [EBP + -0x60]
004B4680  40                        INC EAX
004B4681  89 45 A0                  MOV dword ptr [EBP + -0x60],EAX
004B4684  E9 70 FA FF FF            JMP 0x004b40f9
LAB_004b4689:
004B4689  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
004B468C  8B 48 14                  MOV ECX,dword ptr [EAX + 0x14]
004B468F  C7 41 04 00 00 00 00      MOV dword ptr [ECX + 0x4],0x0
004B4696  8D 95 64 FF FF FF         LEA EDX,[EBP + 0xffffff64]
004B469C  8B 48 14                  MOV ECX,dword ptr [EAX + 0x14]
004B469F  E8 EC CA 1F 00            CALL 0x006b1190
004B46A4  85 C0                     TEST EAX,EAX
004B46A6  0F 8C ED 00 00 00         JL 0x004b4799
LAB_004b46ac:
004B46AC  8B 95 70 FF FF FF         MOV EDX,dword ptr [EBP + 0xffffff70]
004B46B2  89 95 B0 FD FF FF         MOV dword ptr [EBP + 0xfffffdb0],EDX
004B46B8  8B BD 64 FF FF FF         MOV EDI,dword ptr [EBP + 0xffffff64]
004B46BE  83 3C BD 68 1D 79 00 01   CMP dword ptr [EDI*0x4 + 0x791d68],0x1
004B46C6  75 71                     JNZ 0x004b4739
004B46C8  33 F6                     XOR ESI,ESI
004B46CA  EB 06                     JMP 0x004b46d2
LAB_004b46cc:
004B46CC  8B BD 64 FF FF FF         MOV EDI,dword ptr [EBP + 0xffffff64]
LAB_004b46d2:
004B46D2  8B CE                     MOV ECX,ESI
004B46D4  81 E1 01 00 00 80         AND ECX,0x80000001
004B46DA  79 05                     JNS 0x004b46e1
004B46DC  49                        DEC ECX
004B46DD  83 C9 FE                  OR ECX,0xfffffffe
004B46E0  41                        INC ECX
LAB_004b46e1:
004B46E1  03 8D 68 FF FF FF         ADD ECX,dword ptr [EBP + 0xffffff68]
004B46E7  89 8D E8 FE FF FF         MOV dword ptr [EBP + 0xfffffee8],ECX
004B46ED  8B C6                     MOV EAX,ESI
004B46EF  99                        CDQ
004B46F0  2B C2                     SUB EAX,EDX
004B46F2  D1 F8                     SAR EAX,0x1
004B46F4  03 85 6C FF FF FF         ADD EAX,dword ptr [EBP + 0xffffff6c]
004B46FA  89 85 CC FE FF FF         MOV dword ptr [EBP + 0xfffffecc],EAX
004B4700  66 8B 14 BD 88 08 79 00   MOV DX,word ptr [EDI*0x4 + 0x790888]
004B4708  80 CE 02                  OR DH,0x2
004B470B  0F BF 3D 46 B2 7F 00      MOVSX EDI,word ptr [0x007fb246]
004B4712  0F AF BD B0 FD FF FF      IMUL EDI,dword ptr [EBP + 0xfffffdb0]
004B4719  0F BF 1D 40 B2 7F 00      MOVSX EBX,word ptr [0x007fb240]
004B4720  0F AF D8                  IMUL EBX,EAX
004B4723  03 CF                     ADD ECX,EDI
004B4725  03 D9                     ADD EBX,ECX
004B4727  8B 85 88 FD FF FF         MOV EAX,dword ptr [EBP + 0xfffffd88]
004B472D  66 89 14 58               MOV word ptr [EAX + EBX*0x2],DX
004B4731  46                        INC ESI
004B4732  83 FE 04                  CMP ESI,0x4
004B4735  7C 95                     JL 0x004b46cc
004B4737  EB 47                     JMP 0x004b4780
LAB_004b4739:
004B4739  8B 85 68 FF FF FF         MOV EAX,dword ptr [EBP + 0xffffff68]
004B473F  89 85 E8 FE FF FF         MOV dword ptr [EBP + 0xfffffee8],EAX
004B4745  8B 8D 6C FF FF FF         MOV ECX,dword ptr [EBP + 0xffffff6c]
004B474B  89 8D CC FE FF FF         MOV dword ptr [EBP + 0xfffffecc],ECX
004B4751  66 8B 34 BD 88 08 79 00   MOV SI,word ptr [EDI*0x4 + 0x790888]
004B4759  66 81 CE 00 02            OR SI,0x200
004B475E  0F BF 3D 40 B2 7F 00      MOVSX EDI,word ptr [0x007fb240]
004B4765  0F AF F9                  IMUL EDI,ECX
004B4768  0F BF 0D 46 B2 7F 00      MOVSX ECX,word ptr [0x007fb246]
004B476F  0F AF CA                  IMUL ECX,EDX
004B4772  03 C7                     ADD EAX,EDI
004B4774  03 C8                     ADD ECX,EAX
004B4776  8B 95 88 FD FF FF         MOV EDX,dword ptr [EBP + 0xfffffd88]
004B477C  66 89 34 4A               MOV word ptr [EDX + ECX*0x2],SI
LAB_004b4780:
004B4780  8D 95 64 FF FF FF         LEA EDX,[EBP + 0xffffff64]
004B4786  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
004B4789  8B 48 14                  MOV ECX,dword ptr [EAX + 0x14]
004B478C  E8 FF C9 1F 00            CALL 0x006b1190
004B4791  85 C0                     TEST EAX,EAX
004B4793  0F 8D 13 FF FF FF         JGE 0x004b46ac
LAB_004b4799:
004B4799  8B 0D 50 A1 7F 00         MOV ECX,dword ptr [0x007fa150]
004B479F  33 DB                     XOR EBX,EBX
004B47A1  89 59 04                  MOV dword ptr [ECX + 0x4],EBX
004B47A4  8D 55 AC                  LEA EDX,[EBP + -0x54]
004B47A7  8B 0D 50 A1 7F 00         MOV ECX,dword ptr [0x007fa150]
004B47AD  E8 DE C9 1F 00            CALL 0x006b1190
004B47B2  85 C0                     TEST EAX,EAX
004B47B4  7C 76                     JL 0x004b482c
004B47B6  8B B5 88 FD FF FF         MOV ESI,dword ptr [EBP + 0xfffffd88]
LAB_004b47bc:
004B47BC  8B 4D AC                  MOV ECX,dword ptr [EBP + -0x54]
004B47BF  3B CB                     CMP ECX,EBX
004B47C1  74 57                     JZ 0x004b481a
004B47C3  8D 95 5C FF FF FF         LEA EDX,[EBP + 0xffffff5c]
004B47C9  52                        PUSH EDX
004B47CA  8D 85 78 FF FF FF         LEA EAX,[EBP + 0xffffff78]
004B47D0  50                        PUSH EAX
004B47D1  8D 55 88                  LEA EDX,[EBP + -0x78]
004B47D4  52                        PUSH EDX
004B47D5  E8 EB D0 F4 FF            CALL 0x004018c5
004B47DA  0F BF 85 78 FF FF FF      MOVSX EAX,word ptr [EBP + 0xffffff78]
004B47E1  0F BF 0D 40 B2 7F 00      MOVSX ECX,word ptr [0x007fb240]
004B47E8  0F AF C1                  IMUL EAX,ECX
004B47EB  0F BF 15 46 B2 7F 00      MOVSX EDX,word ptr [0x007fb246]
004B47F2  0F BF 8D 5C FF FF FF      MOVSX ECX,word ptr [EBP + 0xffffff5c]
004B47F9  0F AF D1                  IMUL EDX,ECX
004B47FC  03 C2                     ADD EAX,EDX
004B47FE  0F BF 55 88               MOVSX EDX,word ptr [EBP + -0x78]
004B4802  03 C2                     ADD EAX,EDX
004B4804  66 8B 0C 46               MOV CX,word ptr [ESI + EAX*0x2]
004B4808  66 3B CB                  CMP CX,BX
004B480B  74 07                     JZ 0x004b4814
004B480D  66 81 F9 FF FF            CMP CX,0xffff
004B4812  75 06                     JNZ 0x004b481a
LAB_004b4814:
004B4814  66 C7 04 46 80 00         MOV word ptr [ESI + EAX*0x2],0x80
LAB_004b481a:
004B481A  8D 55 AC                  LEA EDX,[EBP + -0x54]
004B481D  8B 0D 50 A1 7F 00         MOV ECX,dword ptr [0x007fa150]
004B4823  E8 68 C9 1F 00            CALL 0x006b1190
004B4828  85 C0                     TEST EAX,EAX
004B482A  7D 90                     JGE 0x004b47bc
LAB_004b482c:
004B482C  39 5D C8                  CMP dword ptr [EBP + -0x38],EBX
004B482F  75 05                     JNZ 0x004b4836
004B4831  39 5D CC                  CMP dword ptr [EBP + -0x34],EBX
004B4834  74 62                     JZ 0x004b4898
LAB_004b4836:
004B4836  8B 75 0C                  MOV ESI,dword ptr [EBP + 0xc]
004B4839  8B 46 0C                  MOV EAX,dword ptr [ESI + 0xc]
004B483C  89 58 04                  MOV dword ptr [EAX + 0x4],EBX
004B483F  8D 95 FC FE FF FF         LEA EDX,[EBP + 0xfffffefc]
004B4845  8B 4E 0C                  MOV ECX,dword ptr [ESI + 0xc]
004B4848  E8 43 C9 1F 00            CALL 0x006b1190
004B484D  85 C0                     TEST EAX,EAX
004B484F  7C 47                     JL 0x004b4898
LAB_004b4851:
004B4851  8B 8D FC FE FF FF         MOV ECX,dword ptr [EBP + 0xfffffefc]
004B4857  83 3C 8D 88 08 79 00 04   CMP dword ptr [ECX*0x4 + 0x790888],0x4
004B485F  75 25                     JNZ 0x004b4886
004B4861  B9 0C 00 00 00            MOV ECX,0xc
004B4866  33 C0                     XOR EAX,EAX
004B4868  8D BD 10 FF FF FF         LEA EDI,[EBP + 0xffffff10]
004B486E  F3 AB                     STOSD.REP ES:EDI
004B4870  89 9D 10 FF FF FF         MOV dword ptr [EBP + 0xffffff10],EBX
004B4876  8D 95 10 FF FF FF         LEA EDX,[EBP + 0xffffff10]
004B487C  52                        PUSH EDX
004B487D  8B 45 E4                  MOV EAX,dword ptr [EBP + -0x1c]
004B4880  50                        PUSH EAX
004B4881  E8 3A 99 1F 00            CALL 0x006ae1c0
LAB_004b4886:
004B4886  8D 95 FC FE FF FF         LEA EDX,[EBP + 0xfffffefc]
004B488C  8B 4E 0C                  MOV ECX,dword ptr [ESI + 0xc]
004B488F  E8 FC C8 1F 00            CALL 0x006b1190
004B4894  85 C0                     TEST EAX,EAX
004B4896  7D B9                     JGE 0x004b4851
LAB_004b4898:
004B4898  89 5D A8                  MOV dword ptr [EBP + -0x58],EBX
004B489B  89 9D 98 FD FF FF         MOV dword ptr [EBP + 0xfffffd98],EBX
004B48A1  89 9D 90 FD FF FF         MOV dword ptr [EBP + 0xfffffd90],EBX
004B48A7  89 5D A4                  MOV dword ptr [EBP + -0x5c],EBX
LAB_004b48aa:
004B48AA  89 5D A0                  MOV dword ptr [EBP + -0x60],EBX
004B48AD  A1 40 B2 7F 00            MOV EAX,[0x007fb240]
004B48B2  66 8B 0D 42 B2 7F 00      MOV CX,word ptr [0x007fb242]
004B48B9  66 3B C1                  CMP AX,CX
004B48BC  7F 03                     JG 0x004b48c1
004B48BE  66 8B C1                  MOV AX,CX
LAB_004b48c1:
004B48C1  0F BF C8                  MOVSX ECX,AX
004B48C4  3B D9                     CMP EBX,ECX
004B48C6  0F 8D 01 18 00 00         JGE 0x004b60cd
LAB_004b48cc:
004B48CC  33 F6                     XOR ESI,ESI
004B48CE  89 75 90                  MOV dword ptr [EBP + -0x70],ESI
004B48D1  8B 4D 0C                  MOV ECX,dword ptr [EBP + 0xc]
LAB_004b48d4:
004B48D4  8D 04 DD 00 00 00 00      LEA EAX,[EBX*0x8 + 0x0]
004B48DB  3B F0                     CMP ESI,EAX
004B48DD  0F 8D C7 17 00 00         JGE 0x004b60aa
004B48E3  8D 04 1B                  LEA EAX,[EBX + EBX*0x1]
004B48E6  3B F0                     CMP ESI,EAX
004B48E8  7D 13                     JGE 0x004b48fd
004B48EA  8B 11                     MOV EDX,dword ptr [ECX]
004B48EC  2B D3                     SUB EDX,EBX
004B48EE  03 D6                     ADD EDX,ESI
004B48F0  89 95 E8 FE FF FF         MOV dword ptr [EBP + 0xfffffee8],EDX
004B48F6  8B 41 04                  MOV EAX,dword ptr [ECX + 0x4]
004B48F9  2B C3                     SUB EAX,EBX
004B48FB  EB 5B                     JMP 0x004b4958
LAB_004b48fd:
004B48FD  8D 14 9D 00 00 00 00      LEA EDX,[EBX*0x4 + 0x0]
004B4904  3B F2                     CMP ESI,EDX
004B4906  7D 1B                     JGE 0x004b4923
004B4908  8B D3                     MOV EDX,EBX
004B490A  03 11                     ADD EDX,dword ptr [ECX]
004B490C  89 95 E8 FE FF FF         MOV dword ptr [EBP + 0xfffffee8],EDX
004B4912  8B 79 04                  MOV EDI,dword ptr [ECX + 0x4]
004B4915  2B F8                     SUB EDI,EAX
004B4917  2B FB                     SUB EDI,EBX
004B4919  03 FE                     ADD EDI,ESI
004B491B  89 BD CC FE FF FF         MOV dword ptr [EBP + 0xfffffecc],EDI
004B4921  EB 3B                     JMP 0x004b495e
LAB_004b4923:
004B4923  8D 04 5B                  LEA EAX,[EBX + EBX*0x2]
004B4926  D1 E0                     SHL EAX,0x1
004B4928  3B F0                     CMP ESI,EAX
004B492A  7D 14                     JGE 0x004b4940
004B492C  8D 14 9B                  LEA EDX,[EBX + EBX*0x4]
004B492F  2B D6                     SUB EDX,ESI
004B4931  03 11                     ADD EDX,dword ptr [ECX]
004B4933  89 95 E8 FE FF FF         MOV dword ptr [EBP + 0xfffffee8],EDX
004B4939  8B 41 04                  MOV EAX,dword ptr [ECX + 0x4]
004B493C  03 C3                     ADD EAX,EBX
004B493E  EB 18                     JMP 0x004b4958
LAB_004b4940:
004B4940  8B 11                     MOV EDX,dword ptr [ECX]
004B4942  2B D3                     SUB EDX,EBX
004B4944  89 95 E8 FE FF FF         MOV dword ptr [EBP + 0xfffffee8],EDX
004B494A  8D 04 DD 00 00 00 00      LEA EAX,[EBX*0x8 + 0x0]
004B4951  2B C3                     SUB EAX,EBX
004B4953  03 41 04                  ADD EAX,dword ptr [ECX + 0x4]
004B4956  2B C6                     SUB EAX,ESI
LAB_004b4958:
004B4958  89 85 CC FE FF FF         MOV dword ptr [EBP + 0xfffffecc],EAX
LAB_004b495e:
004B495E  85 D2                     TEST EDX,EDX
004B4960  0F 8C AF 16 00 00         JL 0x004b6015
004B4966  0F BF 15 40 B2 7F 00      MOVSX EDX,word ptr [0x007fb240]
004B496D  39 95 E8 FE FF FF         CMP dword ptr [EBP + 0xfffffee8],EDX
004B4973  0F 8D 9C 16 00 00         JGE 0x004b6015
004B4979  8B 85 CC FE FF FF         MOV EAX,dword ptr [EBP + 0xfffffecc]
004B497F  85 C0                     TEST EAX,EAX
004B4981  0F 8C 8E 16 00 00         JL 0x004b6015
004B4987  0F BF 05 42 B2 7F 00      MOVSX EAX,word ptr [0x007fb242]
004B498E  39 85 CC FE FF FF         CMP dword ptr [EBP + 0xfffffecc],EAX
004B4994  0F 8D 7B 16 00 00         JGE 0x004b6015
004B499A  C7 85 B0 FD FF FF 00 00 00 00  MOV dword ptr [EBP + 0xfffffdb0],0x0
004B49A4  0F BF 15 44 B2 7F 00      MOVSX EDX,word ptr [0x007fb244]
004B49AB  4A                        DEC EDX
004B49AC  85 D2                     TEST EDX,EDX
004B49AE  0F 8E 22 16 00 00         JLE 0x004b5fd6
LAB_004b49b4:
004B49B4  0F BF 15 46 B2 7F 00      MOVSX EDX,word ptr [0x007fb246]
004B49BB  8B FA                     MOV EDI,EDX
004B49BD  8B 9D B0 FD FF FF         MOV EBX,dword ptr [EBP + 0xfffffdb0]
004B49C3  0F AF FB                  IMUL EDI,EBX
004B49C6  0F BF 05 40 B2 7F 00      MOVSX EAX,word ptr [0x007fb240]
004B49CD  0F AF 85 CC FE FF FF      IMUL EAX,dword ptr [EBP + 0xfffffecc]
004B49D4  8D 0C 38                  LEA ECX,[EAX + EDI*0x1]
004B49D7  03 8D E8 FE FF FF         ADD ECX,dword ptr [EBP + 0xfffffee8]
004B49DD  8B B5 88 FD FF FF         MOV ESI,dword ptr [EBP + 0xfffffd88]
004B49E3  66 8B 34 4E               MOV SI,word ptr [ESI + ECX*0x2]
004B49E7  66 81 FE FF FF            CMP SI,0xffff
004B49EC  0F 84 BE 16 00 00         JZ 0x004b60b0
004B49F2  66 85 F6                  TEST SI,SI
004B49F5  0F 85 BB 15 00 00         JNZ 0x004b5fb6
004B49FB  43                        INC EBX
004B49FC  0F AF DA                  IMUL EBX,EDX
004B49FF  03 D8                     ADD EBX,EAX
004B4A01  03 9D E8 FE FF FF         ADD EBX,dword ptr [EBP + 0xfffffee8]
004B4A07  8B B5 88 FD FF FF         MOV ESI,dword ptr [EBP + 0xfffffd88]
004B4A0D  66 83 3C 5E 00            CMP word ptr [ESI + EBX*0x2],0x0
004B4A12  0F 85 9E 15 00 00         JNZ 0x004b5fb6
004B4A18  C7 85 E0 FE FF FF 00 00 00 00  MOV dword ptr [EBP + 0xfffffee0],0x0
004B4A22  8B B5 F8 FE FF FF         MOV ESI,dword ptr [EBP + 0xfffffef8]
004B4A28  85 F6                     TEST ESI,ESI
004B4A2A  74 58                     JZ 0x004b4a84
004B4A2C  8D 59 01                  LEA EBX,[ECX + 0x1]
004B4A2F  89 9D EC FE FF FF         MOV dword ptr [EBP + 0xfffffeec],EBX
004B4A35  8B B5 88 FD FF FF         MOV ESI,dword ptr [EBP + 0xfffffd88]
004B4A3B  66 83 3C 5E 00            CMP word ptr [ESI + EBX*0x2],0x0
004B4A40  75 48                     JNZ 0x004b4a8a
004B4A42  8B 8D CC FE FF FF         MOV ECX,dword ptr [EBP + 0xfffffecc]
004B4A48  8D 59 01                  LEA EBX,[ECX + 0x1]
004B4A4B  0F BF 0D 40 B2 7F 00      MOVSX ECX,word ptr [0x007fb240]
004B4A52  0F AF D9                  IMUL EBX,ECX
004B4A55  03 DF                     ADD EBX,EDI
004B4A57  03 9D E8 FE FF FF         ADD EBX,dword ptr [EBP + 0xfffffee8]
004B4A5D  89 9D EC FE FF FF         MOV dword ptr [EBP + 0xfffffeec],EBX
004B4A63  66 83 3C 5E 00            CMP word ptr [ESI + EBX*0x2],0x0
004B4A68  75 20                     JNZ 0x004b4a8a
004B4A6A  43                        INC EBX
004B4A6B  89 9D EC FE FF FF         MOV dword ptr [EBP + 0xfffffeec],EBX
004B4A71  66 83 3C 5E 00            CMP word ptr [ESI + EBX*0x2],0x0
004B4A76  75 12                     JNZ 0x004b4a8a
004B4A78  C7 85 E0 FE FF FF 01 00 00 00  MOV dword ptr [EBP + 0xfffffee0],0x1
004B4A82  EB 06                     JMP 0x004b4a8a
LAB_004b4a84:
004B4A84  8B 9D EC FE FF FF         MOV EBX,dword ptr [EBP + 0xfffffeec]
LAB_004b4a8a:
004B4A8A  8B 8D B0 FD FF FF         MOV ECX,dword ptr [EBP + 0xfffffdb0]
004B4A90  85 C9                     TEST ECX,ECX
004B4A92  0F 8E 99 00 00 00         JLE 0x004b4b31
004B4A98  49                        DEC ECX
004B4A99  0F AF CA                  IMUL ECX,EDX
004B4A9C  8D 1C 01                  LEA EBX,[ECX + EAX*0x1]
004B4A9F  03 9D E8 FE FF FF         ADD EBX,dword ptr [EBP + 0xfffffee8]
004B4AA5  89 9D EC FE FF FF         MOV dword ptr [EBP + 0xfffffeec],EBX
004B4AAB  33 D2                     XOR EDX,EDX
004B4AAD  8B B5 88 FD FF FF         MOV ESI,dword ptr [EBP + 0xfffffd88]
004B4AB3  66 83 3C 5E 20            CMP word ptr [ESI + EBX*0x2],0x20
004B4AB8  0F 94 C2                  SETZ DL
004B4ABB  85 D2                     TEST EDX,EDX
004B4ABD  0F 84 F3 14 00 00         JZ 0x004b5fb6
004B4AC3  8B 85 F8 FE FF FF         MOV EAX,dword ptr [EBP + 0xfffffef8]
004B4AC9  85 C0                     TEST EAX,EAX
004B4ACB  74 69                     JZ 0x004b4b36
004B4ACD  8B 85 E0 FE FF FF         MOV EAX,dword ptr [EBP + 0xfffffee0]
004B4AD3  85 C0                     TEST EAX,EAX
004B4AD5  74 5F                     JZ 0x004b4b36
004B4AD7  C7 85 E0 FE FF FF 00 00 00 00  MOV dword ptr [EBP + 0xfffffee0],0x0
004B4AE1  43                        INC EBX
004B4AE2  89 9D EC FE FF FF         MOV dword ptr [EBP + 0xfffffeec],EBX
004B4AE8  66 83 3C 5E 20            CMP word ptr [ESI + EBX*0x2],0x20
004B4AED  75 47                     JNZ 0x004b4b36
004B4AEF  8B 85 CC FE FF FF         MOV EAX,dword ptr [EBP + 0xfffffecc]
004B4AF5  8D 58 01                  LEA EBX,[EAX + 0x1]
004B4AF8  0F BF 05 40 B2 7F 00      MOVSX EAX,word ptr [0x007fb240]
004B4AFF  0F AF D8                  IMUL EBX,EAX
004B4B02  03 D9                     ADD EBX,ECX
004B4B04  03 9D E8 FE FF FF         ADD EBX,dword ptr [EBP + 0xfffffee8]
004B4B0A  89 9D EC FE FF FF         MOV dword ptr [EBP + 0xfffffeec],EBX
004B4B10  66 83 3C 5E 20            CMP word ptr [ESI + EBX*0x2],0x20
004B4B15  75 1F                     JNZ 0x004b4b36
004B4B17  43                        INC EBX
004B4B18  89 9D EC FE FF FF         MOV dword ptr [EBP + 0xfffffeec],EBX
004B4B1E  66 83 3C 5E 20            CMP word ptr [ESI + EBX*0x2],0x20
004B4B23  75 11                     JNZ 0x004b4b36
004B4B25  C7 85 E0 FE FF FF 01 00 00 00  MOV dword ptr [EBP + 0xfffffee0],0x1
004B4B2F  EB 05                     JMP 0x004b4b36
LAB_004b4b31:
004B4B31  BA 01 00 00 00            MOV EDX,0x1
LAB_004b4b36:
004B4B36  85 D2                     TEST EDX,EDX
004B4B38  0F 84 78 14 00 00         JZ 0x004b5fb6
004B4B3E  C7 45 84 01 00 00 00      MOV dword ptr [EBP + -0x7c],0x1
004B4B45  33 F6                     XOR ESI,ESI
LAB_004b4b47:
004B4B47  83 FE 04                  CMP ESI,0x4
004B4B4A  74 72                     JZ 0x004b4bbe
004B4B4C  B8 56 55 55 55            MOV EAX,0x55555556
004B4B51  F7 EE                     IMUL ESI
004B4B53  8B CA                     MOV ECX,EDX
004B4B55  C1 E9 1F                  SHR ECX,0x1f
004B4B58  03 D1                     ADD EDX,ECX
004B4B5A  8B 85 CC FE FF FF         MOV EAX,dword ptr [EBP + 0xfffffecc]
004B4B60  8D 4C 02 FF               LEA ECX,[EDX + EAX*0x1 + -0x1]
004B4B64  8B C6                     MOV EAX,ESI
004B4B66  99                        CDQ
004B4B67  BB 03 00 00 00            MOV EBX,0x3
004B4B6C  F7 FB                     IDIV EBX
004B4B6E  8B 85 E8 FE FF FF         MOV EAX,dword ptr [EBP + 0xfffffee8]
004B4B74  8D 44 02 FF               LEA EAX,[EDX + EAX*0x1 + -0x1]
004B4B78  85 C9                     TEST ECX,ECX
004B4B7A  7C 3C                     JL 0x004b4bb8
004B4B7C  0F BF 15 42 B2 7F 00      MOVSX EDX,word ptr [0x007fb242]
004B4B83  3B CA                     CMP ECX,EDX
004B4B85  7D 31                     JGE 0x004b4bb8
004B4B87  85 C0                     TEST EAX,EAX
004B4B89  7C 2D                     JL 0x004b4bb8
004B4B8B  0F BF 15 40 B2 7F 00      MOVSX EDX,word ptr [0x007fb240]
004B4B92  3B C2                     CMP EAX,EDX
004B4B94  7D 22                     JGE 0x004b4bb8
004B4B96  0F AF CA                  IMUL ECX,EDX
004B4B99  03 C8                     ADD ECX,EAX
004B4B9B  03 CF                     ADD ECX,EDI
004B4B9D  8B 85 88 FD FF FF         MOV EAX,dword ptr [EBP + 0xfffffd88]
004B4BA3  66 8B 04 48               MOV AX,word ptr [EAX + ECX*0x2]
004B4BA7  66 85 C0                  TEST AX,AX
004B4BAA  74 0C                     JZ 0x004b4bb8
004B4BAC  66 3D 10 00               CMP AX,0x10
004B4BB0  74 06                     JZ 0x004b4bb8
004B4BB2  66 3D 20 00               CMP AX,0x20
004B4BB6  75 11                     JNZ 0x004b4bc9
LAB_004b4bb8:
004B4BB8  8B 9D EC FE FF FF         MOV EBX,dword ptr [EBP + 0xfffffeec]
LAB_004b4bbe:
004B4BBE  46                        INC ESI
004B4BBF  83 FE 09                  CMP ESI,0x9
004B4BC2  7C 83                     JL 0x004b4b47
004B4BC4  8B 45 84                  MOV EAX,dword ptr [EBP + -0x7c]
004B4BC7  EB 08                     JMP 0x004b4bd1
LAB_004b4bc9:
004B4BC9  33 C0                     XOR EAX,EAX
004B4BCB  8B 9D EC FE FF FF         MOV EBX,dword ptr [EBP + 0xfffffeec]
LAB_004b4bd1:
004B4BD1  85 C0                     TEST EAX,EAX
004B4BD3  0F 84 DD 13 00 00         JZ 0x004b5fb6
004B4BD9  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
004B4BDC  51                        PUSH ECX
004B4BDD  8B 0D 74 A1 7F 00         MOV ECX,dword ptr [0x007fa174]
004B4BE3  E8 CF FD F4 FF            CALL 0x004049b7
004B4BE8  3C 03                     CMP AL,0x3
004B4BEA  C7 85 94 FD FF FF 00 00 00 00  MOV dword ptr [EBP + 0xfffffd94],0x0
004B4BF4  0F 84 70 01 00 00         JZ 0x004b4d6a
004B4BFA  8B 45 C0                  MOV EAX,dword ptr [EBP + -0x40]
004B4BFD  85 C0                     TEST EAX,EAX
004B4BFF  74 77                     JZ 0x004b4c78
004B4C01  8B 9D D8 FD FF FF         MOV EBX,dword ptr [EBP + 0xfffffdd8]
004B4C07  85 DB                     TEST EBX,EBX
004B4C09  74 5D                     JZ 0x004b4c68
004B4C0B  8B 43 0C                  MOV EAX,dword ptr [EBX + 0xc]
004B4C0E  85 C0                     TEST EAX,EAX
004B4C10  74 56                     JZ 0x004b4c68
004B4C12  83 CE FF                  OR ESI,0xffffffff
004B4C15  33 FF                     XOR EDI,EDI
004B4C17  85 C0                     TEST EAX,EAX
004B4C19  7E 44                     JLE 0x004b4c5f
LAB_004b4c1b:
004B4C1B  8D 95 C0 FE FF FF         LEA EDX,[EBP + 0xfffffec0]
004B4C21  52                        PUSH EDX
004B4C22  8B D7                     MOV EDX,EDI
004B4C24  8B CB                     MOV ECX,EBX
004B4C26  E8 45 80 1F 00            CALL 0x006acc70
004B4C2B  8B 85 C4 FE FF FF         MOV EAX,dword ptr [EBP + 0xfffffec4]
004B4C31  50                        PUSH EAX
004B4C32  8B 8D C0 FE FF FF         MOV ECX,dword ptr [EBP + 0xfffffec0]
004B4C38  51                        PUSH ECX
004B4C39  8B 95 CC FE FF FF         MOV EDX,dword ptr [EBP + 0xfffffecc]
004B4C3F  52                        PUSH EDX
004B4C40  8B 85 E8 FE FF FF         MOV EAX,dword ptr [EBP + 0xfffffee8]
004B4C46  50                        PUSH EAX
004B4C47  E8 8C 82 1F 00            CALL 0x006aced8
004B4C4C  83 C4 10                  ADD ESP,0x10
004B4C4F  85 F6                     TEST ESI,ESI
004B4C51  7C 04                     JL 0x004b4c57
004B4C53  3B C6                     CMP EAX,ESI
004B4C55  7D 02                     JGE 0x004b4c59
LAB_004b4c57:
004B4C57  8B F0                     MOV ESI,EAX
LAB_004b4c59:
004B4C59  47                        INC EDI
004B4C5A  3B 7B 0C                  CMP EDI,dword ptr [EBX + 0xc]
004B4C5D  7C BC                     JL 0x004b4c1b
LAB_004b4c5f:
004B4C5F  85 F6                     TEST ESI,ESI
004B4C61  7C 05                     JL 0x004b4c68
004B4C63  83 FE 0D                  CMP ESI,0xd
004B4C66  7E 0A                     JLE 0x004b4c72
LAB_004b4c68:
004B4C68  C7 85 94 FD FF FF 01 00 00 00  MOV dword ptr [EBP + 0xfffffd94],0x1
LAB_004b4c72:
004B4C72  8B 9D EC FE FF FF         MOV EBX,dword ptr [EBP + 0xfffffeec]
LAB_004b4c78:
004B4C78  8B 85 94 FD FF FF         MOV EAX,dword ptr [EBP + 0xfffffd94]
004B4C7E  85 C0                     TEST EAX,EAX
004B4C80  74 17                     JZ 0x004b4c99
004B4C82  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
004B4C85  52                        PUSH EDX
004B4C86  8B 0D 74 A1 7F 00         MOV ECX,dword ptr [0x007fa174]
004B4C8C  E8 26 FD F4 FF            CALL 0x004049b7
004B4C91  3C 03                     CMP AL,0x3
004B4C93  0F 85 70 01 00 00         JNZ 0x004b4e09
LAB_004b4c99:
004B4C99  8B 85 F8 FE FF FF         MOV EAX,dword ptr [EBP + 0xfffffef8]
004B4C9F  85 C0                     TEST EAX,EAX
004B4CA1  0F 84 62 01 00 00         JZ 0x004b4e09
004B4CA7  8B 85 E0 FE FF FF         MOV EAX,dword ptr [EBP + 0xfffffee0]
004B4CAD  85 C0                     TEST EAX,EAX
004B4CAF  0F 84 A0 02 00 00         JZ 0x004b4f55
004B4CB5  33 F6                     XOR ESI,ESI
LAB_004b4cb7:
004B4CB7  83 FE 04                  CMP ESI,0x4
004B4CBA  0F 84 9B 00 00 00         JZ 0x004b4d5b
004B4CC0  83 FE 05                  CMP ESI,0x5
004B4CC3  0F 84 92 00 00 00         JZ 0x004b4d5b
004B4CC9  83 FE 08                  CMP ESI,0x8
004B4CCC  0F 84 89 00 00 00         JZ 0x004b4d5b
004B4CD2  83 FE 09                  CMP ESI,0x9
004B4CD5  0F 84 80 00 00 00         JZ 0x004b4d5b
004B4CDB  8B C6                     MOV EAX,ESI
004B4CDD  99                        CDQ
004B4CDE  83 E2 03                  AND EDX,0x3
004B4CE1  03 C2                     ADD EAX,EDX
004B4CE3  C1 F8 02                  SAR EAX,0x2
004B4CE6  8B 8D CC FE FF FF         MOV ECX,dword ptr [EBP + 0xfffffecc]
004B4CEC  8D 44 08 FF               LEA EAX,[EAX + ECX*0x1 + -0x1]
004B4CF0  8B D6                     MOV EDX,ESI
004B4CF2  81 E2 03 00 00 80         AND EDX,0x80000003
004B4CF8  79 05                     JNS 0x004b4cff
004B4CFA  4A                        DEC EDX
004B4CFB  83 CA FC                  OR EDX,0xfffffffc
004B4CFE  42                        INC EDX
LAB_004b4cff:
004B4CFF  8B 8D E8 FE FF FF         MOV ECX,dword ptr [EBP + 0xfffffee8]
004B4D05  8D 4C 0A FF               LEA ECX,[EDX + ECX*0x1 + -0x1]
004B4D09  85 C0                     TEST EAX,EAX
004B4D0B  7C 4E                     JL 0x004b4d5b
004B4D0D  0F BF 15 42 B2 7F 00      MOVSX EDX,word ptr [0x007fb242]
004B4D14  3B C2                     CMP EAX,EDX
004B4D16  7D 43                     JGE 0x004b4d5b
004B4D18  85 C9                     TEST ECX,ECX
004B4D1A  7C 3F                     JL 0x004b4d5b
004B4D1C  0F BF 15 40 B2 7F 00      MOVSX EDX,word ptr [0x007fb240]
004B4D23  3B CA                     CMP ECX,EDX
004B4D25  7D 34                     JGE 0x004b4d5b
004B4D27  0F BF 3D 46 B2 7F 00      MOVSX EDI,word ptr [0x007fb246]
004B4D2E  0F AF BD B0 FD FF FF      IMUL EDI,dword ptr [EBP + 0xfffffdb0]
004B4D35  0F AF C2                  IMUL EAX,EDX
004B4D38  03 CF                     ADD ECX,EDI
004B4D3A  03 C1                     ADD EAX,ECX
004B4D3C  8B 8D 88 FD FF FF         MOV ECX,dword ptr [EBP + 0xfffffd88]
004B4D42  66 8B 04 41               MOV AX,word ptr [ECX + EAX*0x2]
004B4D46  66 85 C0                  TEST AX,AX
004B4D49  74 10                     JZ 0x004b4d5b
004B4D4B  66 3D 10 00               CMP AX,0x10
004B4D4F  74 0A                     JZ 0x004b4d5b
004B4D51  66 3D 20 00               CMP AX,0x20
004B4D55  0F 85 A4 00 00 00         JNZ 0x004b4dff
LAB_004b4d5b:
004B4D5B  46                        INC ESI
004B4D5C  83 FE 10                  CMP ESI,0x10
004B4D5F  0F 8C 52 FF FF FF         JL 0x004b4cb7
004B4D65  E9 9F 00 00 00            JMP 0x004b4e09
LAB_004b4d6a:
004B4D6A  8B 45 C4                  MOV EAX,dword ptr [EBP + -0x3c]
004B4D6D  85 C0                     TEST EAX,EAX
004B4D6F  0F 84 03 FF FF FF         JZ 0x004b4c78
004B4D75  8B BD 80 FE FF FF         MOV EDI,dword ptr [EBP + 0xfffffe80]
004B4D7B  85 FF                     TEST EDI,EDI
004B4D7D  74 71                     JZ 0x004b4df0
004B4D7F  8B 47 0C                  MOV EAX,dword ptr [EDI + 0xc]
004B4D82  85 C0                     TEST EAX,EAX
004B4D84  74 6A                     JZ 0x004b4df0
004B4D86  C7 85 94 FD FF FF 01 00 00 00  MOV dword ptr [EBP + 0xfffffd94],0x1
004B4D90  33 F6                     XOR ESI,ESI
004B4D92  85 C0                     TEST EAX,EAX
004B4D94  0F 8E DE FE FF FF         JLE 0x004b4c78
LAB_004b4d9a:
004B4D9A  8D 8D C0 FE FF FF         LEA ECX,[EBP + 0xfffffec0]
004B4DA0  51                        PUSH ECX
004B4DA1  8B D6                     MOV EDX,ESI
004B4DA3  8B CF                     MOV ECX,EDI
004B4DA5  E8 C6 7E 1F 00            CALL 0x006acc70
004B4DAA  8B 85 C0 FE FF FF         MOV EAX,dword ptr [EBP + 0xfffffec0]
004B4DB0  2B 85 E8 FE FF FF         SUB EAX,dword ptr [EBP + 0xfffffee8]
004B4DB6  99                        CDQ
004B4DB7  33 C2                     XOR EAX,EDX
004B4DB9  2B C2                     SUB EAX,EDX
004B4DBB  83 F8 0F                  CMP EAX,0xf
004B4DBE  7E 21                     JLE 0x004b4de1
004B4DC0  8B 85 C4 FE FF FF         MOV EAX,dword ptr [EBP + 0xfffffec4]
004B4DC6  2B 85 CC FE FF FF         SUB EAX,dword ptr [EBP + 0xfffffecc]
004B4DCC  99                        CDQ
004B4DCD  33 C2                     XOR EAX,EDX
004B4DCF  2B C2                     SUB EAX,EDX
004B4DD1  83 F8 0F                  CMP EAX,0xf
004B4DD4  7E 0B                     JLE 0x004b4de1
004B4DD6  46                        INC ESI
004B4DD7  3B 77 0C                  CMP ESI,dword ptr [EDI + 0xc]
004B4DDA  7C BE                     JL 0x004b4d9a
004B4DDC  E9 97 FE FF FF            JMP 0x004b4c78
LAB_004b4de1:
004B4DE1  C7 85 94 FD FF FF 00 00 00 00  MOV dword ptr [EBP + 0xfffffd94],0x0
004B4DEB  E9 88 FE FF FF            JMP 0x004b4c78
LAB_004b4df0:
004B4DF0  C7 85 94 FD FF FF 01 00 00 00  MOV dword ptr [EBP + 0xfffffd94],0x1
004B4DFA  E9 79 FE FF FF            JMP 0x004b4c78
LAB_004b4dff:
004B4DFF  C7 85 E0 FE FF FF 00 00 00 00  MOV dword ptr [EBP + 0xfffffee0],0x0
LAB_004b4e09:
004B4E09  8B 85 E0 FE FF FF         MOV EAX,dword ptr [EBP + 0xfffffee0]
004B4E0F  85 C0                     TEST EAX,EAX
004B4E11  0F 84 3E 01 00 00         JZ 0x004b4f55
004B4E17  8B 45 C8                  MOV EAX,dword ptr [EBP + -0x38]
004B4E1A  85 C0                     TEST EAX,EAX
004B4E1C  0F 84 33 01 00 00         JZ 0x004b4f55
004B4E22  33 FF                     XOR EDI,EDI
004B4E24  89 BD D8 FE FF FF         MOV dword ptr [EBP + 0xfffffed8],EDI
LAB_004b4e2a:
004B4E2A  B8 AB AA AA 2A            MOV EAX,0x2aaaaaab
004B4E2F  F7 EF                     IMUL EDI
004B4E31  8B C2                     MOV EAX,EDX
004B4E33  C1 E8 1F                  SHR EAX,0x1f
004B4E36  03 D0                     ADD EDX,EAX
004B4E38  8B CA                     MOV ECX,EDX
004B4E3A  74 1C                     JZ 0x004b4e58
004B4E3C  83 F9 05                  CMP ECX,0x5
004B4E3F  74 17                     JZ 0x004b4e58
004B4E41  8B C7                     MOV EAX,EDI
004B4E43  99                        CDQ
004B4E44  BE 06 00 00 00            MOV ESI,0x6
004B4E49  F7 FE                     IDIV ESI
004B4E4B  85 D2                     TEST EDX,EDX
004B4E4D  74 09                     JZ 0x004b4e58
004B4E4F  83 FA 05                  CMP EDX,0x5
004B4E52  0F 85 E3 00 00 00         JNZ 0x004b4f3b
LAB_004b4e58:
004B4E58  8B 95 CC FE FF FF         MOV EDX,dword ptr [EBP + 0xfffffecc]
004B4E5E  8D 4C 11 FE               LEA ECX,[ECX + EDX*0x1 + -0x2]
004B4E62  8B C7                     MOV EAX,EDI
004B4E64  99                        CDQ
004B4E65  BE 06 00 00 00            MOV ESI,0x6
004B4E6A  F7 FE                     IDIV ESI
004B4E6C  8B 85 E8 FE FF FF         MOV EAX,dword ptr [EBP + 0xfffffee8]
004B4E72  8D 54 02 FE               LEA EDX,[EDX + EAX*0x1 + -0x2]
004B4E76  85 C9                     TEST ECX,ECX
004B4E78  0F 8C BD 00 00 00         JL 0x004b4f3b
004B4E7E  0F BF 05 42 B2 7F 00      MOVSX EAX,word ptr [0x007fb242]
004B4E85  3B C8                     CMP ECX,EAX
004B4E87  0F 8D AE 00 00 00         JGE 0x004b4f3b
004B4E8D  85 D2                     TEST EDX,EDX
004B4E8F  0F 8C A6 00 00 00         JL 0x004b4f3b
004B4E95  0F BF 05 40 B2 7F 00      MOVSX EAX,word ptr [0x007fb240]
004B4E9C  3B D0                     CMP EDX,EAX
004B4E9E  0F 8D 97 00 00 00         JGE 0x004b4f3b
004B4EA4  0F AF C8                  IMUL ECX,EAX
004B4EA7  0F BF 35 46 B2 7F 00      MOVSX ESI,word ptr [0x007fb246]
004B4EAE  8B C6                     MOV EAX,ESI
004B4EB0  0F AF 85 B0 FD FF FF      IMUL EAX,dword ptr [EBP + 0xfffffdb0]
004B4EB7  03 C1                     ADD EAX,ECX
004B4EB9  03 C2                     ADD EAX,EDX
004B4EBB  83 BD B0 FD FF FF 00      CMP dword ptr [EBP + 0xfffffdb0],0x0
004B4EC2  7E 14                     JLE 0x004b4ed8
004B4EC4  8B 9D B0 FD FF FF         MOV EBX,dword ptr [EBP + 0xfffffdb0]
004B4ECA  4B                        DEC EBX
004B4ECB  0F AF DE                  IMUL EBX,ESI
004B4ECE  03 D9                     ADD EBX,ECX
004B4ED0  03 DA                     ADD EBX,EDX
004B4ED2  89 9D EC FE FF FF         MOV dword ptr [EBP + 0xfffffeec],EBX
LAB_004b4ed8:
004B4ED8  8B 95 88 FD FF FF         MOV EDX,dword ptr [EBP + 0xfffffd88]
004B4EDE  66 8B 0C 42               MOV CX,word ptr [EDX + EAX*0x2]
004B4EE2  66 85 C9                  TEST CX,CX
004B4EE5  75 11                     JNZ 0x004b4ef8
004B4EE7  8B B5 B0 FD FF FF         MOV ESI,dword ptr [EBP + 0xfffffdb0]
004B4EED  85 F6                     TEST ESI,ESI
004B4EEF  74 44                     JZ 0x004b4f35
004B4EF1  66 83 3C 5A 20            CMP word ptr [EDX + EBX*0x2],0x20
004B4EF6  74 3D                     JZ 0x004b4f35
LAB_004b4ef8:
004B4EF8  66 81 F9 05 02            CMP CX,0x205
004B4EFD  75 3C                     JNZ 0x004b4f3b
004B4EFF  8B 0D 48 B2 7F 00         MOV ECX,dword ptr [0x007fb248]
004B4F05  8B 04 C1                  MOV EAX,dword ptr [ECX + EAX*0x8]
004B4F08  89 45 AC                  MOV dword ptr [EBP + -0x54],EAX
004B4F0B  85 C0                     TEST EAX,EAX
004B4F0D  74 2C                     JZ 0x004b4f3b
004B4F0F  8B 10                     MOV EDX,dword ptr [EAX]
004B4F11  8B C8                     MOV ECX,EAX
004B4F13  FF 52 2C                  CALL dword ptr [EDX + 0x2c]
004B4F16  83 F8 54                  CMP EAX,0x54
004B4F19  7C 20                     JL 0x004b4f3b
004B4F1B  8B 4D AC                  MOV ECX,dword ptr [EBP + -0x54]
004B4F1E  8B 01                     MOV EAX,dword ptr [ECX]
004B4F20  FF 50 2C                  CALL dword ptr [EAX + 0x2c]
004B4F23  83 F8 5A                  CMP EAX,0x5a
004B4F26  7F 13                     JG 0x004b4f3b
004B4F28  8B 4D AC                  MOV ECX,dword ptr [EBP + -0x54]
004B4F2B  8B 81 D3 05 00 00         MOV EAX,dword ptr [ECX + 0x5d3]
004B4F31  85 C0                     TEST EAX,EAX
004B4F33  75 06                     JNZ 0x004b4f3b
LAB_004b4f35:
004B4F35  FF 85 D8 FE FF FF         INC dword ptr [EBP + 0xfffffed8]
LAB_004b4f3b:
004B4F3B  47                        INC EDI
004B4F3C  83 FF 24                  CMP EDI,0x24
004B4F3F  0F 8C E5 FE FF FF         JL 0x004b4e2a
004B4F45  33 D2                     XOR EDX,EDX
004B4F47  83 BD D8 FE FF FF 07      CMP dword ptr [EBP + 0xfffffed8],0x7
004B4F4E  0F 9D C2                  SETGE DL
004B4F51  8B FA                     MOV EDI,EDX
004B4F53  EB 02                     JMP 0x004b4f57
LAB_004b4f55:
004B4F55  33 FF                     XOR EDI,EDI
LAB_004b4f57:
004B4F57  89 BD 9C FD FF FF         MOV dword ptr [EBP + 0xfffffd9c],EDI
004B4F5D  8B 45 C8                  MOV EAX,dword ptr [EBP + -0x38]
004B4F60  85 C0                     TEST EAX,EAX
004B4F62  74 08                     JZ 0x004b4f6c
004B4F64  85 FF                     TEST EDI,EDI
004B4F66  0F 84 4A 10 00 00         JZ 0x004b5fb6
LAB_004b4f6c:
004B4F6C  8B 85 E0 FE FF FF         MOV EAX,dword ptr [EBP + 0xfffffee0]
004B4F72  85 C0                     TEST EAX,EAX
004B4F74  74 11                     JZ 0x004b4f87
004B4F76  8B 85 F8 FE FF FF         MOV EAX,dword ptr [EBP + 0xfffffef8]
004B4F7C  85 C0                     TEST EAX,EAX
004B4F7E  74 07                     JZ 0x004b4f87
004B4F80  BB 01 00 00 00            MOV EBX,0x1
004B4F85  EB 02                     JMP 0x004b4f89
LAB_004b4f87:
004B4F87  33 DB                     XOR EBX,EBX
LAB_004b4f89:
004B4F89  89 9D 58 FF FF FF         MOV dword ptr [EBP + 0xffffff58],EBX
004B4F8F  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
004B4F92  8B 48 0C                  MOV ECX,dword ptr [EAX + 0xc]
004B4F95  C7 41 04 00 00 00 00      MOV dword ptr [ECX + 0x4],0x0
004B4F9C  8D 95 FC FE FF FF         LEA EDX,[EBP + 0xfffffefc]
004B4FA2  8B 48 0C                  MOV ECX,dword ptr [EAX + 0xc]
004B4FA5  E8 E6 C1 1F 00            CALL 0x006b1190
004B4FAA  85 C0                     TEST EAX,EAX
004B4FAC  0F 8C 04 10 00 00         JL 0x004b5fb6
004B4FB2  EB 0C                     JMP 0x004b4fc0
LAB_004b4fb4:
004B4FB4  8B 9D 58 FF FF FF         MOV EBX,dword ptr [EBP + 0xffffff58]
004B4FBA  8B BD 9C FD FF FF         MOV EDI,dword ptr [EBP + 0xfffffd9c]
LAB_004b4fc0:
004B4FC0  8B 75 E4                  MOV ESI,dword ptr [EBP + -0x1c]
004B4FC3  8B 8D FC FE FF FF         MOV ECX,dword ptr [EBP + 0xfffffefc]
004B4FC9  8B 04 8D 88 08 79 00      MOV EAX,dword ptr [ECX*0x4 + 0x790888]
004B4FD0  83 F8 04                  CMP EAX,0x4
004B4FD3  75 1A                     JNZ 0x004b4fef
004B4FD5  85 FF                     TEST EDI,EDI
004B4FD7  0F 84 6B 06 00 00         JZ 0x004b5648
004B4FDD  39 1C 8D 68 1D 79 00      CMP dword ptr [ECX*0x4 + 0x791d68],EBX
004B4FE4  0F 84 7C 06 00 00         JZ 0x004b5666
004B4FEA  E9 59 06 00 00            JMP 0x004b5648
LAB_004b4fef:
004B4FEF  8B 55 C8                  MOV EDX,dword ptr [EBP + -0x38]
004B4FF2  85 D2                     TEST EDX,EDX
004B4FF4  0F 85 4E 06 00 00         JNZ 0x004b5648
004B4FFA  83 F8 01                  CMP EAX,0x1
004B4FFD  0F 84 D3 05 00 00         JZ 0x004b55d6
004B5003  83 F8 06                  CMP EAX,0x6
004B5006  0F 84 CA 05 00 00         JZ 0x004b55d6
004B500C  83 F8 02                  CMP EAX,0x2
004B500F  0F 84 C1 05 00 00         JZ 0x004b55d6
004B5015  83 F8 03                  CMP EAX,0x3
004B5018  0F 84 B8 05 00 00         JZ 0x004b55d6
004B501E  8B 55 D0                  MOV EDX,dword ptr [EBP + -0x30]
004B5021  85 D2                     TEST EDX,EDX
004B5023  0F 85 1F 06 00 00         JNZ 0x004b5648
004B5029  8B 55 BC                  MOV EDX,dword ptr [EBP + -0x44]
004B502C  85 D2                     TEST EDX,EDX
004B502E  0F 85 14 06 00 00         JNZ 0x004b5648
004B5034  8B 55 A4                  MOV EDX,dword ptr [EBP + -0x5c]
004B5037  85 D2                     TEST EDX,EDX
004B5039  0F 84 F6 0F 00 00         JZ 0x004b6035
004B503F  83 F8 07                  CMP EAX,0x7
004B5042  0F 85 B9 00 00 00         JNZ 0x004b5101
004B5048  39 1C 8D 68 1D 79 00      CMP dword ptr [ECX*0x4 + 0x791d68],EBX
004B504F  0F 85 F3 05 00 00         JNZ 0x004b5648
004B5055  8B 84 8D F0 FC FF FF      MOV EAX,dword ptr [EBP + ECX*0x4 + 0xfffffcf0]
004B505C  85 C0                     TEST EAX,EAX
004B505E  0F 84 90 00 00 00         JZ 0x004b50f4
004B5064  8B 50 0C                  MOV EDX,dword ptr [EAX + 0xc]
004B5067  85 D2                     TEST EDX,EDX
004B5069  0F 84 85 00 00 00         JZ 0x004b50f4
004B506F  33 DB                     XOR EBX,EBX
004B5071  83 CE FF                  OR ESI,0xffffffff
004B5074  33 FF                     XOR EDI,EDI
004B5076  85 D2                     TEST EDX,EDX
004B5078  7E 51                     JLE 0x004b50cb
LAB_004b507a:
004B507A  8D 95 C0 FE FF FF         LEA EDX,[EBP + 0xfffffec0]
004B5080  52                        PUSH EDX
004B5081  8B D7                     MOV EDX,EDI
004B5083  8B C8                     MOV ECX,EAX
004B5085  E8 E6 7B 1F 00            CALL 0x006acc70
004B508A  8B 85 C4 FE FF FF         MOV EAX,dword ptr [EBP + 0xfffffec4]
004B5090  50                        PUSH EAX
004B5091  8B 8D C0 FE FF FF         MOV ECX,dword ptr [EBP + 0xfffffec0]
004B5097  51                        PUSH ECX
004B5098  8B 95 CC FE FF FF         MOV EDX,dword ptr [EBP + 0xfffffecc]
004B509E  52                        PUSH EDX
004B509F  8B 85 E8 FE FF FF         MOV EAX,dword ptr [EBP + 0xfffffee8]
004B50A5  50                        PUSH EAX
004B50A6  E8 2D 7E 1F 00            CALL 0x006aced8
004B50AB  83 C4 10                  ADD ESP,0x10
004B50AE  85 F6                     TEST ESI,ESI
004B50B0  7C 04                     JL 0x004b50b6
004B50B2  3B C6                     CMP EAX,ESI
004B50B4  7D 02                     JGE 0x004b50b8
LAB_004b50b6:
004B50B6  8B F0                     MOV ESI,EAX
LAB_004b50b8:
004B50B8  47                        INC EDI
004B50B9  8B 8D FC FE FF FF         MOV ECX,dword ptr [EBP + 0xfffffefc]
004B50BF  8B 84 8D F0 FC FF FF      MOV EAX,dword ptr [EBP + ECX*0x4 + 0xfffffcf0]
004B50C6  3B 78 0C                  CMP EDI,dword ptr [EAX + 0xc]
004B50C9  7C AF                     JL 0x004b507a
LAB_004b50cb:
004B50CB  85 F6                     TEST ESI,ESI
004B50CD  7C 25                     JL 0x004b50f4
004B50CF  8B 04 8D E4 4F 79 00      MOV EAX,dword ptr [ECX*0x4 + 0x794fe4]
004B50D6  8D 14 40                  LEA EDX,[EAX + EAX*0x2]
004B50D9  B8 79 19 8C 02            MOV EAX,0x28c1979
004B50DE  F7 EA                     IMUL EDX
004B50E0  D1 FA                     SAR EDX,0x1
004B50E2  8B FA                     MOV EDI,EDX
004B50E4  C1 EF 1F                  SHR EDI,0x1f
004B50E7  8B C2                     MOV EAX,EDX
004B50E9  03 C7                     ADD EAX,EDI
004B50EB  99                        CDQ
004B50EC  2B C2                     SUB EAX,EDX
004B50EE  D1 F8                     SAR EAX,0x1
004B50F0  3B F0                     CMP ESI,EAX
004B50F2  7E 05                     JLE 0x004b50f9
LAB_004b50f4:
004B50F4  BB 01 00 00 00            MOV EBX,0x1
LAB_004b50f9:
004B50F9  85 DB                     TEST EBX,EBX
004B50FB  0F 85 CC 06 00 00         JNZ 0x004b57cd
LAB_004b5101:
004B5101  8B 45 D4                  MOV EAX,dword ptr [EBP + -0x2c]
004B5104  85 C0                     TEST EAX,EAX
004B5106  0F 85 3C 05 00 00         JNZ 0x004b5648
004B510C  8B 85 90 FD FF FF         MOV EAX,dword ptr [EBP + 0xfffffd90]
004B5112  85 C0                     TEST EAX,EAX
004B5114  0F 84 37 0F 00 00         JZ 0x004b6051
004B511A  83 3C 8D 88 08 79 00 08   CMP dword ptr [ECX*0x4 + 0x790888],0x8
004B5122  0F 85 BF 00 00 00         JNZ 0x004b51e7
004B5128  8B 95 58 FF FF FF         MOV EDX,dword ptr [EBP + 0xffffff58]
004B512E  39 14 8D 68 1D 79 00      CMP dword ptr [ECX*0x4 + 0x791d68],EDX
004B5135  0F 85 0D 05 00 00         JNZ 0x004b5648
004B513B  8B 84 8D F0 FC FF FF      MOV EAX,dword ptr [EBP + ECX*0x4 + 0xfffffcf0]
004B5142  85 C0                     TEST EAX,EAX
004B5144  0F 84 90 00 00 00         JZ 0x004b51da
004B514A  8B 50 0C                  MOV EDX,dword ptr [EAX + 0xc]
004B514D  85 D2                     TEST EDX,EDX
004B514F  0F 84 85 00 00 00         JZ 0x004b51da
004B5155  33 DB                     XOR EBX,EBX
004B5157  83 CE FF                  OR ESI,0xffffffff
004B515A  33 FF                     XOR EDI,EDI
004B515C  85 D2                     TEST EDX,EDX
004B515E  7E 51                     JLE 0x004b51b1
LAB_004b5160:
004B5160  8D 8D C0 FE FF FF         LEA ECX,[EBP + 0xfffffec0]
004B5166  51                        PUSH ECX
004B5167  8B D7                     MOV EDX,EDI
004B5169  8B C8                     MOV ECX,EAX
004B516B  E8 00 7B 1F 00            CALL 0x006acc70
004B5170  8B 95 C4 FE FF FF         MOV EDX,dword ptr [EBP + 0xfffffec4]
004B5176  52                        PUSH EDX
004B5177  8B 85 C0 FE FF FF         MOV EAX,dword ptr [EBP + 0xfffffec0]
004B517D  50                        PUSH EAX
004B517E  8B 8D CC FE FF FF         MOV ECX,dword ptr [EBP + 0xfffffecc]
004B5184  51                        PUSH ECX
004B5185  8B 95 E8 FE FF FF         MOV EDX,dword ptr [EBP + 0xfffffee8]
004B518B  52                        PUSH EDX
004B518C  E8 47 7D 1F 00            CALL 0x006aced8
004B5191  83 C4 10                  ADD ESP,0x10
004B5194  85 F6                     TEST ESI,ESI
004B5196  7C 04                     JL 0x004b519c
004B5198  3B C6                     CMP EAX,ESI
004B519A  7D 02                     JGE 0x004b519e
LAB_004b519c:
004B519C  8B F0                     MOV ESI,EAX
LAB_004b519e:
004B519E  47                        INC EDI
004B519F  8B 8D FC FE FF FF         MOV ECX,dword ptr [EBP + 0xfffffefc]
004B51A5  8B 84 8D F0 FC FF FF      MOV EAX,dword ptr [EBP + ECX*0x4 + 0xfffffcf0]
004B51AC  3B 78 0C                  CMP EDI,dword ptr [EAX + 0xc]
004B51AF  7C AF                     JL 0x004b5160
LAB_004b51b1:
004B51B1  85 F6                     TEST ESI,ESI
004B51B3  7C 25                     JL 0x004b51da
004B51B5  8B 04 8D E4 4F 79 00      MOV EAX,dword ptr [ECX*0x4 + 0x794fe4]
004B51BC  8D 14 40                  LEA EDX,[EAX + EAX*0x2]
004B51BF  B8 79 19 8C 02            MOV EAX,0x28c1979
004B51C4  F7 EA                     IMUL EDX
004B51C6  D1 FA                     SAR EDX,0x1
004B51C8  8B FA                     MOV EDI,EDX
004B51CA  C1 EF 1F                  SHR EDI,0x1f
004B51CD  8B C2                     MOV EAX,EDX
004B51CF  03 C7                     ADD EAX,EDI
004B51D1  99                        CDQ
004B51D2  2B C2                     SUB EAX,EDX
004B51D4  D1 F8                     SAR EAX,0x1
004B51D6  3B F0                     CMP ESI,EAX
004B51D8  7E 05                     JLE 0x004b51df
LAB_004b51da:
004B51DA  BB 01 00 00 00            MOV EBX,0x1
LAB_004b51df:
004B51DF  85 DB                     TEST EBX,EBX
004B51E1  0F 85 53 07 00 00         JNZ 0x004b593a
LAB_004b51e7:
004B51E7  8B 45 D8                  MOV EAX,dword ptr [EBP + -0x28]
004B51EA  85 C0                     TEST EAX,EAX
004B51EC  0F 85 56 04 00 00         JNZ 0x004b5648
004B51F2  8B 85 98 FD FF FF         MOV EAX,dword ptr [EBP + 0xfffffd98]
004B51F8  85 C0                     TEST EAX,EAX
004B51FA  0F 84 70 0E 00 00         JZ 0x004b6070
004B5200  83 3C 8D 88 08 79 00 09   CMP dword ptr [ECX*0x4 + 0x790888],0x9
004B5208  0F 85 B5 00 00 00         JNZ 0x004b52c3
004B520E  8B 85 58 FF FF FF         MOV EAX,dword ptr [EBP + 0xffffff58]
004B5214  39 04 8D 68 1D 79 00      CMP dword ptr [ECX*0x4 + 0x791d68],EAX
004B521B  0F 85 27 04 00 00         JNZ 0x004b5648
004B5221  8B 84 8D F0 FC FF FF      MOV EAX,dword ptr [EBP + ECX*0x4 + 0xfffffcf0]
004B5228  85 C0                     TEST EAX,EAX
004B522A  0F 84 86 00 00 00         JZ 0x004b52b6
004B5230  8B 50 0C                  MOV EDX,dword ptr [EAX + 0xc]
004B5233  85 D2                     TEST EDX,EDX
004B5235  74 7F                     JZ 0x004b52b6
004B5237  33 DB                     XOR EBX,EBX
004B5239  83 CF FF                  OR EDI,0xffffffff
004B523C  33 F6                     XOR ESI,ESI
004B523E  85 D2                     TEST EDX,EDX
004B5240  7E 51                     JLE 0x004b5293
LAB_004b5242:
004B5242  8D 8D C0 FE FF FF         LEA ECX,[EBP + 0xfffffec0]
004B5248  51                        PUSH ECX
004B5249  8B D6                     MOV EDX,ESI
004B524B  8B C8                     MOV ECX,EAX
004B524D  E8 1E 7A 1F 00            CALL 0x006acc70
004B5252  8B 95 C4 FE FF FF         MOV EDX,dword ptr [EBP + 0xfffffec4]
004B5258  52                        PUSH EDX
004B5259  8B 85 C0 FE FF FF         MOV EAX,dword ptr [EBP + 0xfffffec0]
004B525F  50                        PUSH EAX
004B5260  8B 8D CC FE FF FF         MOV ECX,dword ptr [EBP + 0xfffffecc]
004B5266  51                        PUSH ECX
004B5267  8B 95 E8 FE FF FF         MOV EDX,dword ptr [EBP + 0xfffffee8]
004B526D  52                        PUSH EDX
004B526E  E8 65 7C 1F 00            CALL 0x006aced8
004B5273  83 C4 10                  ADD ESP,0x10
004B5276  85 FF                     TEST EDI,EDI
004B5278  7C 04                     JL 0x004b527e
004B527A  3B C7                     CMP EAX,EDI
004B527C  7D 02                     JGE 0x004b5280
LAB_004b527e:
004B527E  8B F8                     MOV EDI,EAX
LAB_004b5280:
004B5280  46                        INC ESI
004B5281  8B 8D FC FE FF FF         MOV ECX,dword ptr [EBP + 0xfffffefc]
004B5287  8B 84 8D F0 FC FF FF      MOV EAX,dword ptr [EBP + ECX*0x4 + 0xfffffcf0]
004B528E  3B 70 0C                  CMP ESI,dword ptr [EAX + 0xc]
004B5291  7C AF                     JL 0x004b5242
LAB_004b5293:
004B5293  8B C1                     MOV EAX,ECX
004B5295  83 E8 69                  SUB EAX,0x69
004B5298  74 07                     JZ 0x004b52a1
004B529A  48                        DEC EAX
004B529B  74 04                     JZ 0x004b52a1
004B529D  33 C0                     XOR EAX,EAX
004B529F  EB 05                     JMP 0x004b52a6
LAB_004b52a1:
004B52A1  B8 0A 00 00 00            MOV EAX,0xa
LAB_004b52a6:
004B52A6  85 FF                     TEST EDI,EDI
004B52A8  7C 0C                     JL 0x004b52b6
004B52AA  8D 04 40                  LEA EAX,[EAX + EAX*0x2]
004B52AD  99                        CDQ
004B52AE  2B C2                     SUB EAX,EDX
004B52B0  D1 F8                     SAR EAX,0x1
004B52B2  3B F8                     CMP EDI,EAX
004B52B4  7E 05                     JLE 0x004b52bb
LAB_004b52b6:
004B52B6  BB 01 00 00 00            MOV EBX,0x1
LAB_004b52bb:
004B52BB  85 DB                     TEST EBX,EBX
004B52BD  0F 85 E4 07 00 00         JNZ 0x004b5aa7
LAB_004b52c3:
004B52C3  8B 45 DC                  MOV EAX,dword ptr [EBP + -0x24]
004B52C6  85 C0                     TEST EAX,EAX
004B52C8  0F 85 7A 03 00 00         JNZ 0x004b5648
004B52CE  8B 45 A8                  MOV EAX,dword ptr [EBP + -0x58]
004B52D1  85 C0                     TEST EAX,EAX
004B52D3  0F 84 B6 0D 00 00         JZ 0x004b608f
004B52D9  83 3C 8D 88 08 79 00 0A   CMP dword ptr [ECX*0x4 + 0x790888],0xa
004B52E1  0F 85 61 03 00 00         JNZ 0x004b5648
004B52E7  C7 85 DC FE FF FF 00 00 00 00  MOV dword ptr [EBP + 0xfffffedc],0x0
004B52F1  83 CB FF                  OR EBX,0xffffffff
004B52F4  C7 85 B0 FC FF FF 00 00 00 00  MOV dword ptr [EBP + 0xfffffcb0],0x0
LAB_004b52fe:
004B52FE  8B 85 B0 FC FF FF         MOV EAX,dword ptr [EBP + 0xfffffcb0]
004B5304  83 B8 50 09 79 00 0A      CMP dword ptr [EAX + 0x790950],0xa
004B530B  75 60                     JNZ 0x004b536d
004B530D  8B D0                     MOV EDX,EAX
004B530F  8B B4 15 B8 FD FF FF      MOV ESI,dword ptr [EBP + EDX*0x1 + 0xfffffdb8]
004B5316  85 F6                     TEST ESI,ESI
004B5318  74 53                     JZ 0x004b536d
004B531A  33 FF                     XOR EDI,EDI
004B531C  8B 46 0C                  MOV EAX,dword ptr [ESI + 0xc]
004B531F  85 C0                     TEST EAX,EAX
004B5321  7E 4A                     JLE 0x004b536d
LAB_004b5323:
004B5323  8D 85 C0 FE FF FF         LEA EAX,[EBP + 0xfffffec0]
004B5329  50                        PUSH EAX
004B532A  8B D7                     MOV EDX,EDI
004B532C  8B CE                     MOV ECX,ESI
004B532E  E8 3D 79 1F 00            CALL 0x006acc70
004B5333  8B 8D C4 FE FF FF         MOV ECX,dword ptr [EBP + 0xfffffec4]
004B5339  51                        PUSH ECX
004B533A  8B 95 C0 FE FF FF         MOV EDX,dword ptr [EBP + 0xfffffec0]
004B5340  52                        PUSH EDX
004B5341  8B 85 CC FE FF FF         MOV EAX,dword ptr [EBP + 0xfffffecc]
004B5347  50                        PUSH EAX
004B5348  8B 8D E8 FE FF FF         MOV ECX,dword ptr [EBP + 0xfffffee8]
004B534E  51                        PUSH ECX
004B534F  E8 84 7B 1F 00            CALL 0x006aced8
004B5354  83 C4 10                  ADD ESP,0x10
004B5357  85 DB                     TEST EBX,EBX
004B5359  7C 04                     JL 0x004b535f
004B535B  3B C3                     CMP EAX,EBX
004B535D  7D 02                     JGE 0x004b5361
LAB_004b535f:
004B535F  8B D8                     MOV EBX,EAX
LAB_004b5361:
004B5361  47                        INC EDI
004B5362  3B 7E 0C                  CMP EDI,dword ptr [ESI + 0xc]
004B5365  7C BC                     JL 0x004b5323
004B5367  8B 8D FC FE FF FF         MOV ECX,dword ptr [EBP + 0xfffffefc]
LAB_004b536d:
004B536D  8B 85 B0 FC FF FF         MOV EAX,dword ptr [EBP + 0xfffffcb0]
004B5373  83 C0 04                  ADD EAX,0x4
004B5376  89 85 B0 FC FF FF         MOV dword ptr [EBP + 0xfffffcb0],EAX
004B537C  3D 08 01 00 00            CMP EAX,0x108
004B5381  0F 8C 77 FF FF FF         JL 0x004b52fe
004B5387  6A 00                     PUSH 0x0
004B5389  83 C1 CE                  ADD ECX,-0x32
004B538C  51                        PUSH ECX
004B538D  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
004B5390  52                        PUSH EDX
004B5391  E8 AF 08 F5 FF            CALL 0x00405c45
004B5396  83 C4 0C                  ADD ESP,0xc
004B5399  89 45 8C                  MOV dword ptr [EBP + -0x74],EAX
004B539C  85 DB                     TEST EBX,EBX
004B539E  7C 08                     JL 0x004b53a8
004B53A0  3B D8                     CMP EBX,EAX
004B53A2  0F 8E 0C 02 00 00         JLE 0x004b55b4
LAB_004b53a8:
004B53A8  33 C9                     XOR ECX,ECX
004B53AA  89 8D AC FD FF FF         MOV dword ptr [EBP + 0xfffffdac],ECX
004B53B0  89 8D A0 FD FF FF         MOV dword ptr [EBP + 0xfffffda0],ECX
004B53B6  89 8D A4 FD FF FF         MOV dword ptr [EBP + 0xfffffda4],ECX
004B53BC  89 8D A8 FD FF FF         MOV dword ptr [EBP + 0xfffffda8],ECX
004B53C2  89 8D D8 FE FF FF         MOV dword ptr [EBP + 0xfffffed8],ECX
004B53C8  C7 85 E4 FE FF FF 01 00 00 00  MOV dword ptr [EBP + 0xfffffee4],0x1
004B53D2  83 F8 01                  CMP EAX,0x1
004B53D5  0F 8C B7 01 00 00         JL 0x004b5592
004B53DB  8B 85 CC FE FF FF         MOV EAX,dword ptr [EBP + 0xfffffecc]
004B53E1  8D 48 01                  LEA ECX,[EAX + 0x1]
004B53E4  89 8D AC FC FF FF         MOV dword ptr [EBP + 0xfffffcac],ECX
004B53EA  8D 50 FF                  LEA EDX,[EAX + -0x1]
004B53ED  89 95 A8 FC FF FF         MOV dword ptr [EBP + 0xfffffca8],EDX
004B53F3  8B 95 E8 FE FF FF         MOV EDX,dword ptr [EBP + 0xfffffee8]
004B53F9  8B DA                     MOV EBX,EDX
004B53FB  2B D8                     SUB EBX,EAX
004B53FD  89 9D A4 FC FF FF         MOV dword ptr [EBP + 0xfffffca4],EBX
004B5403  8B BD B0 FD FF FF         MOV EDI,dword ptr [EBP + 0xfffffdb0]
004B5409  8B B5 88 FD FF FF         MOV ESI,dword ptr [EBP + 0xfffffd88]
004B540F  EB 06                     JMP 0x004b5417
LAB_004b5411:
004B5411  8B 9D A4 FC FF FF         MOV EBX,dword ptr [EBP + 0xfffffca4]
LAB_004b5417:
004B5417  8B 85 A0 FD FF FF         MOV EAX,dword ptr [EBP + 0xfffffda0]
004B541D  85 C0                     TEST EAX,EAX
004B541F  75 4C                     JNZ 0x004b546d
004B5421  0F BF 0D 40 B2 7F 00      MOVSX ECX,word ptr [0x007fb240]
004B5428  8B 85 AC FC FF FF         MOV EAX,dword ptr [EBP + 0xfffffcac]
004B542E  03 D8                     ADD EBX,EAX
004B5430  8D 41 FF                  LEA EAX,[ECX + -0x1]
004B5433  3B D8                     CMP EBX,EAX
004B5435  7D 36                     JGE 0x004b546d
004B5437  0F BF 05 46 B2 7F 00      MOVSX EAX,word ptr [0x007fb246]
004B543E  0F AF C7                  IMUL EAX,EDI
004B5441  0F AF 8D CC FE FF FF      IMUL ECX,dword ptr [EBP + 0xfffffecc]
004B5448  8B DA                     MOV EBX,EDX
004B544A  03 D8                     ADD EBX,EAX
004B544C  03 CB                     ADD ECX,EBX
004B544E  03 8D E4 FE FF FF         ADD ECX,dword ptr [EBP + 0xfffffee4]
004B5454  66 83 3C 4E 00            CMP word ptr [ESI + ECX*0x2],0x0
004B5459  75 08                     JNZ 0x004b5463
004B545B  FF 85 D8 FE FF FF         INC dword ptr [EBP + 0xfffffed8]
004B5461  EB 0A                     JMP 0x004b546d
LAB_004b5463:
004B5463  C7 85 A0 FD FF FF 01 00 00 00  MOV dword ptr [EBP + 0xfffffda0],0x1
LAB_004b546d:
004B546D  8B 85 A4 FD FF FF         MOV EAX,dword ptr [EBP + 0xfffffda4]
004B5473  85 C0                     TEST EAX,EAX
004B5475  75 4D                     JNZ 0x004b54c4
004B5477  8B 8D A4 FC FF FF         MOV ECX,dword ptr [EBP + 0xfffffca4]
004B547D  8B 85 AC FC FF FF         MOV EAX,dword ptr [EBP + 0xfffffcac]
004B5483  03 C8                     ADD ECX,EAX
004B5485  85 C9                     TEST ECX,ECX
004B5487  7E 3B                     JLE 0x004b54c4
004B5489  0F BF 0D 46 B2 7F 00      MOVSX ECX,word ptr [0x007fb246]
004B5490  0F AF CF                  IMUL ECX,EDI
004B5493  0F BF 05 40 B2 7F 00      MOVSX EAX,word ptr [0x007fb240]
004B549A  0F AF 85 CC FE FF FF      IMUL EAX,dword ptr [EBP + 0xfffffecc]
004B54A1  03 C8                     ADD ECX,EAX
004B54A3  2B 8D E4 FE FF FF         SUB ECX,dword ptr [EBP + 0xfffffee4]
004B54A9  03 CA                     ADD ECX,EDX
004B54AB  66 83 3C 4E 00            CMP word ptr [ESI + ECX*0x2],0x0
004B54B0  75 08                     JNZ 0x004b54ba
004B54B2  FF 85 D8 FE FF FF         INC dword ptr [EBP + 0xfffffed8]
004B54B8  EB 0A                     JMP 0x004b54c4
LAB_004b54ba:
004B54BA  C7 85 A4 FD FF FF 01 00 00 00  MOV dword ptr [EBP + 0xfffffda4],0x1
LAB_004b54c4:
004B54C4  8B 85 A8 FD FF FF         MOV EAX,dword ptr [EBP + 0xfffffda8]
004B54CA  85 C0                     TEST EAX,EAX
004B54CC  75 45                     JNZ 0x004b5513
004B54CE  0F BF 0D 42 B2 7F 00      MOVSX ECX,word ptr [0x007fb242]
004B54D5  49                        DEC ECX
004B54D6  8B 85 AC FC FF FF         MOV EAX,dword ptr [EBP + 0xfffffcac]
004B54DC  3B C1                     CMP EAX,ECX
004B54DE  7D 33                     JGE 0x004b5513
004B54E0  0F BF 0D 40 B2 7F 00      MOVSX ECX,word ptr [0x007fb240]
004B54E7  0F AF C8                  IMUL ECX,EAX
004B54EA  0F BF 05 46 B2 7F 00      MOVSX EAX,word ptr [0x007fb246]
004B54F1  0F AF C7                  IMUL EAX,EDI
004B54F4  8B DA                     MOV EBX,EDX
004B54F6  03 D9                     ADD EBX,ECX
004B54F8  03 C3                     ADD EAX,EBX
004B54FA  66 83 3C 46 00            CMP word ptr [ESI + EAX*0x2],0x0
004B54FF  75 08                     JNZ 0x004b5509
004B5501  FF 85 D8 FE FF FF         INC dword ptr [EBP + 0xfffffed8]
004B5507  EB 0A                     JMP 0x004b5513
LAB_004b5509:
004B5509  C7 85 A8 FD FF FF 01 00 00 00  MOV dword ptr [EBP + 0xfffffda8],0x1
LAB_004b5513:
004B5513  8B 85 AC FD FF FF         MOV EAX,dword ptr [EBP + 0xfffffdac]
004B5519  85 C0                     TEST EAX,EAX
004B551B  75 41                     JNZ 0x004b555e
004B551D  8B 85 AC FC FF FF         MOV EAX,dword ptr [EBP + 0xfffffcac]
004B5523  85 C0                     TEST EAX,EAX
004B5525  7E 37                     JLE 0x004b555e
004B5527  0F BF 0D 40 B2 7F 00      MOVSX ECX,word ptr [0x007fb240]
004B552E  0F AF 8D A8 FC FF FF      IMUL ECX,dword ptr [EBP + 0xfffffca8]
004B5535  0F BF 05 46 B2 7F 00      MOVSX EAX,word ptr [0x007fb246]
004B553C  0F AF C7                  IMUL EAX,EDI
004B553F  8B DA                     MOV EBX,EDX
004B5541  03 D9                     ADD EBX,ECX
004B5543  03 C3                     ADD EAX,EBX
004B5545  66 83 3C 46 00            CMP word ptr [ESI + EAX*0x2],0x0
004B554A  75 08                     JNZ 0x004b5554
004B554C  FF 85 D8 FE FF FF         INC dword ptr [EBP + 0xfffffed8]
004B5552  EB 0A                     JMP 0x004b555e
LAB_004b5554:
004B5554  C7 85 AC FD FF FF 01 00 00 00  MOV dword ptr [EBP + 0xfffffdac],0x1
LAB_004b555e:
004B555E  8B 8D E4 FE FF FF         MOV ECX,dword ptr [EBP + 0xfffffee4]
004B5564  41                        INC ECX
004B5565  89 8D E4 FE FF FF         MOV dword ptr [EBP + 0xfffffee4],ECX
004B556B  FF 85 AC FC FF FF         INC dword ptr [EBP + 0xfffffcac]
004B5571  FF 8D A8 FC FF FF         DEC dword ptr [EBP + 0xfffffca8]
004B5577  8B 45 8C                  MOV EAX,dword ptr [EBP + -0x74]
004B557A  3B C8                     CMP ECX,EAX
004B557C  0F 8E 8F FE FF FF         JLE 0x004b5411
004B5582  8D 0C 00                  LEA ECX,[EAX + EAX*0x1]
004B5585  33 C0                     XOR EAX,EAX
004B5587  39 8D D8 FE FF FF         CMP dword ptr [EBP + 0xfffffed8],ECX
004B558D  0F 9D C0                  SETGE AL
004B5590  EB 3A                     JMP 0x004b55cc
LAB_004b5592:
004B5592  8B 95 E8 FE FF FF         MOV EDX,dword ptr [EBP + 0xfffffee8]
004B5598  8B BD B0 FD FF FF         MOV EDI,dword ptr [EBP + 0xfffffdb0]
004B559E  8B B5 88 FD FF FF         MOV ESI,dword ptr [EBP + 0xfffffd88]
004B55A4  8D 0C 00                  LEA ECX,[EAX + EAX*0x1]
004B55A7  33 C0                     XOR EAX,EAX
004B55A9  39 8D D8 FE FF FF         CMP dword ptr [EBP + 0xfffffed8],ECX
004B55AF  0F 9D C0                  SETGE AL
004B55B2  EB 18                     JMP 0x004b55cc
LAB_004b55b4:
004B55B4  8B 95 E8 FE FF FF         MOV EDX,dword ptr [EBP + 0xfffffee8]
004B55BA  8B BD B0 FD FF FF         MOV EDI,dword ptr [EBP + 0xfffffdb0]
004B55C0  8B B5 88 FD FF FF         MOV ESI,dword ptr [EBP + 0xfffffd88]
004B55C6  8B 85 DC FE FF FF         MOV EAX,dword ptr [EBP + 0xfffffedc]
LAB_004b55cc:
004B55CC  85 C0                     TEST EAX,EAX
004B55CE  0F 85 40 06 00 00         JNZ 0x004b5c14
004B55D4  EB 72                     JMP 0x004b5648
LAB_004b55d6:
004B55D6  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
004B55D9  52                        PUSH EDX
004B55DA  8B 0D 74 A1 7F 00         MOV ECX,dword ptr [0x007fa174]
004B55E0  E8 D2 F3 F4 FF            CALL 0x004049b7
004B55E5  2C 03                     SUB AL,0x3
004B55E7  F6 D8                     NEG AL
004B55E9  1B C0                     SBB EAX,EAX
004B55EB  24 D6                     AND AL,0xd6
004B55ED  83 C0 64                  ADD EAX,0x64
004B55F0  8B 8D 94 FD FF FF         MOV ECX,dword ptr [EBP + 0xfffffd94]
004B55F6  85 C9                     TEST ECX,ECX
004B55F8  75 12                     JNZ 0x004b560c
004B55FA  39 85 FC FE FF FF         CMP dword ptr [EBP + 0xfffffefc],EAX
004B5600  74 46                     JZ 0x004b5648
004B5602  8B 8D 94 FD FF FF         MOV ECX,dword ptr [EBP + 0xfffffd94]
004B5608  85 C9                     TEST ECX,ECX
004B560A  74 08                     JZ 0x004b5614
LAB_004b560c:
004B560C  39 85 FC FE FF FF         CMP dword ptr [EBP + 0xfffffefc],EAX
004B5612  75 34                     JNZ 0x004b5648
LAB_004b5614:
004B5614  8B 85 94 FD FF FF         MOV EAX,dword ptr [EBP + 0xfffffd94]
004B561A  85 C0                     TEST EAX,EAX
004B561C  74 17                     JZ 0x004b5635
004B561E  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
004B5621  50                        PUSH EAX
004B5622  8B 0D 74 A1 7F 00         MOV ECX,dword ptr [0x007fa174]
004B5628  E8 8A F3 F4 FF            CALL 0x004049b7
004B562D  3C 03                     CMP AL,0x3
004B562F  0F 85 7C 07 00 00         JNZ 0x004b5db1
LAB_004b5635:
004B5635  8B 8D FC FE FF FF         MOV ECX,dword ptr [EBP + 0xfffffefc]
004B563B  39 1C 8D 68 1D 79 00      CMP dword ptr [ECX*0x4 + 0x791d68],EBX
004B5642  0F 84 69 07 00 00         JZ 0x004b5db1
LAB_004b5648:
004B5648  8D 95 FC FE FF FF         LEA EDX,[EBP + 0xfffffefc]
004B564E  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
004B5651  8B 48 0C                  MOV ECX,dword ptr [EAX + 0xc]
004B5654  E8 37 BB 1F 00            CALL 0x006b1190
004B5659  85 C0                     TEST EAX,EAX
004B565B  0F 8D 53 F9 FF FF         JGE 0x004b4fb4
004B5661  E9 50 09 00 00            JMP 0x004b5fb6
LAB_004b5666:
004B5666  33 D2                     XOR EDX,EDX
004B5668  89 95 64 FF FF FF         MOV dword ptr [EBP + 0xffffff64],EDX
004B566E  89 95 68 FF FF FF         MOV dword ptr [EBP + 0xffffff68],EDX
004B5674  89 95 6C FF FF FF         MOV dword ptr [EBP + 0xffffff6c],EDX
004B567A  89 95 70 FF FF FF         MOV dword ptr [EBP + 0xffffff70],EDX
004B5680  89 95 74 FF FF FF         MOV dword ptr [EBP + 0xffffff74],EDX
004B5686  89 8D 64 FF FF FF         MOV dword ptr [EBP + 0xffffff64],ECX
004B568C  8B 85 0C FF FF FF         MOV EAX,dword ptr [EBP + 0xffffff0c]
004B5692  89 85 74 FF FF FF         MOV dword ptr [EBP + 0xffffff74],EAX
004B5698  8B 8D E8 FE FF FF         MOV ECX,dword ptr [EBP + 0xfffffee8]
004B569E  89 8D 68 FF FF FF         MOV dword ptr [EBP + 0xffffff68],ECX
004B56A4  8B 95 CC FE FF FF         MOV EDX,dword ptr [EBP + 0xfffffecc]
004B56AA  89 95 6C FF FF FF         MOV dword ptr [EBP + 0xffffff6c],EDX
004B56B0  8B 85 B0 FD FF FF         MOV EAX,dword ptr [EBP + 0xfffffdb0]
004B56B6  89 85 70 FF FF FF         MOV dword ptr [EBP + 0xffffff70],EAX
004B56BC  8D 8D 64 FF FF FF         LEA ECX,[EBP + 0xffffff64]
004B56C2  51                        PUSH ECX
004B56C3  8B 7D 0C                  MOV EDI,dword ptr [EBP + 0xc]
004B56C6  8B 57 14                  MOV EDX,dword ptr [EDI + 0x14]
004B56C9  52                        PUSH EDX
004B56CA  E8 F1 8A 1F 00            CALL 0x006ae1c0
004B56CF  8B 47 0C                  MOV EAX,dword ptr [EDI + 0xc]
004B56D2  8B 48 04                  MOV ECX,dword ptr [EAX + 0x4]
004B56D5  49                        DEC ECX
004B56D6  51                        PUSH ECX
004B56D7  50                        PUSH EAX
004B56D8  E8 93 B5 1F 00            CALL 0x006b0c70
004B56DD  C7 46 04 00 00 00 00      MOV dword ptr [ESI + 0x4],0x0
LAB_004b56e4:
004B56E4  8B 4E 04                  MOV ECX,dword ptr [ESI + 0x4]
004B56E7  3B 4E 0C                  CMP ECX,dword ptr [ESI + 0xc]
004B56EA  73 0F                     JNC 0x004b56fb
004B56EC  8B 46 08                  MOV EAX,dword ptr [ESI + 0x8]
004B56EF  0F AF C1                  IMUL EAX,ECX
004B56F2  03 46 1C                  ADD EAX,dword ptr [ESI + 0x1c]
004B56F5  41                        INC ECX
004B56F6  89 4E 04                  MOV dword ptr [ESI + 0x4],ECX
004B56F9  EB 02                     JMP 0x004b56fd
LAB_004b56fb:
004B56FB  33 C0                     XOR EAX,EAX
LAB_004b56fd:
004B56FD  85 C0                     TEST EAX,EAX
004B56FF  74 26                     JZ 0x004b5727
004B5701  83 38 00                  CMP dword ptr [EAX],0x0
004B5704  75 DE                     JNZ 0x004b56e4
004B5706  C7 00 01 00 00 00         MOV dword ptr [EAX],0x1
004B570C  8B 95 E8 FE FF FF         MOV EDX,dword ptr [EBP + 0xfffffee8]
004B5712  89 50 04                  MOV dword ptr [EAX + 0x4],EDX
004B5715  8B 8D CC FE FF FF         MOV ECX,dword ptr [EBP + 0xfffffecc]
004B571B  89 48 08                  MOV dword ptr [EAX + 0x8],ECX
004B571E  8B 95 B0 FD FF FF         MOV EDX,dword ptr [EBP + 0xfffffdb0]
004B5724  89 50 0C                  MOV dword ptr [EAX + 0xc],EDX
LAB_004b5727:
004B5727  FF 4D C8                  DEC dword ptr [EBP + -0x38]
004B572A  FF 8D F8 FE FF FF         DEC dword ptr [EBP + 0xfffffef8]
004B5730  33 F6                     XOR ESI,ESI
004B5732  8B BD 88 FD FF FF         MOV EDI,dword ptr [EBP + 0xfffffd88]
LAB_004b5738:
004B5738  B8 AB AA AA 2A            MOV EAX,0x2aaaaaab
004B573D  F7 EE                     IMUL ESI
004B573F  8B C2                     MOV EAX,EDX
004B5741  C1 E8 1F                  SHR EAX,0x1f
004B5744  03 D0                     ADD EDX,EAX
004B5746  8B 8D CC FE FF FF         MOV ECX,dword ptr [EBP + 0xfffffecc]
004B574C  8D 4C 0A FE               LEA ECX,[EDX + ECX*0x1 + -0x2]
004B5750  8B C6                     MOV EAX,ESI
004B5752  99                        CDQ
004B5753  BB 06 00 00 00            MOV EBX,0x6
004B5758  F7 FB                     IDIV EBX
004B575A  8B 85 E8 FE FF FF         MOV EAX,dword ptr [EBP + 0xfffffee8]
004B5760  8D 44 02 FE               LEA EAX,[EDX + EAX*0x1 + -0x2]
004B5764  85 C9                     TEST ECX,ECX
004B5766  7C 4B                     JL 0x004b57b3
004B5768  0F BF 15 42 B2 7F 00      MOVSX EDX,word ptr [0x007fb242]
004B576F  3B CA                     CMP ECX,EDX
004B5771  7D 40                     JGE 0x004b57b3
004B5773  85 C0                     TEST EAX,EAX
004B5775  7C 3C                     JL 0x004b57b3
004B5777  0F BF 15 40 B2 7F 00      MOVSX EDX,word ptr [0x007fb240]
004B577E  3B C2                     CMP EAX,EDX
004B5780  7D 31                     JGE 0x004b57b3
004B5782  0F BF 1D 46 B2 7F 00      MOVSX EBX,word ptr [0x007fb246]
004B5789  0F AF 9D B0 FD FF FF      IMUL EBX,dword ptr [EBP + 0xfffffdb0]
004B5790  0F AF CA                  IMUL ECX,EDX
004B5793  03 C3                     ADD EAX,EBX
004B5795  03 C8                     ADD ECX,EAX
004B5797  66 83 3C 4F 00            CMP word ptr [EDI + ECX*0x2],0x0
004B579C  75 15                     JNZ 0x004b57b3
004B579E  8B 85 FC FE FF FF         MOV EAX,dword ptr [EBP + 0xfffffefc]
004B57A4  66 8B 14 85 88 08 79 00   MOV DX,word ptr [EAX*0x4 + 0x790888]
004B57AC  80 CE 02                  OR DH,0x2
004B57AF  66 89 14 4F               MOV word ptr [EDI + ECX*0x2],DX
LAB_004b57b3:
004B57B3  46                        INC ESI
004B57B4  83 FE 24                  CMP ESI,0x24
004B57B7  0F 8C 7B FF FF FF         JL 0x004b5738
004B57BD  8B 45 C8                  MOV EAX,dword ptr [EBP + -0x38]
004B57C0  85 C0                     TEST EAX,EAX
004B57C2  0F 84 5E 08 00 00         JZ 0x004b6026
004B57C8  E9 E9 07 00 00            JMP 0x004b5fb6
LAB_004b57cd:
004B57CD  33 C0                     XOR EAX,EAX
004B57CF  89 85 64 FF FF FF         MOV dword ptr [EBP + 0xffffff64],EAX
004B57D5  89 85 68 FF FF FF         MOV dword ptr [EBP + 0xffffff68],EAX
004B57DB  89 85 6C FF FF FF         MOV dword ptr [EBP + 0xffffff6c],EAX
004B57E1  89 85 70 FF FF FF         MOV dword ptr [EBP + 0xffffff70],EAX
004B57E7  89 85 74 FF FF FF         MOV dword ptr [EBP + 0xffffff74],EAX
004B57ED  89 8D 64 FF FF FF         MOV dword ptr [EBP + 0xffffff64],ECX
004B57F3  8B 8D 0C FF FF FF         MOV ECX,dword ptr [EBP + 0xffffff0c]
004B57F9  89 8D 74 FF FF FF         MOV dword ptr [EBP + 0xffffff74],ECX
004B57FF  8B 95 E8 FE FF FF         MOV EDX,dword ptr [EBP + 0xfffffee8]
004B5805  89 95 68 FF FF FF         MOV dword ptr [EBP + 0xffffff68],EDX
004B580B  8B 85 CC FE FF FF         MOV EAX,dword ptr [EBP + 0xfffffecc]
004B5811  89 85 6C FF FF FF         MOV dword ptr [EBP + 0xffffff6c],EAX
004B5817  8B 8D B0 FD FF FF         MOV ECX,dword ptr [EBP + 0xfffffdb0]
004B581D  89 8D 70 FF FF FF         MOV dword ptr [EBP + 0xffffff70],ECX
004B5823  8D 95 64 FF FF FF         LEA EDX,[EBP + 0xffffff64]
004B5829  52                        PUSH EDX
004B582A  8B 75 0C                  MOV ESI,dword ptr [EBP + 0xc]
004B582D  8B 46 14                  MOV EAX,dword ptr [ESI + 0x14]
004B5830  50                        PUSH EAX
004B5831  E8 8A 89 1F 00            CALL 0x006ae1c0
004B5836  8B 46 0C                  MOV EAX,dword ptr [ESI + 0xc]
004B5839  8B 48 04                  MOV ECX,dword ptr [EAX + 0x4]
004B583C  49                        DEC ECX
004B583D  51                        PUSH ECX
004B583E  50                        PUSH EAX
004B583F  E8 2C B4 1F 00            CALL 0x006b0c70
004B5844  8B 85 FC FE FF FF         MOV EAX,dword ptr [EBP + 0xfffffefc]
004B584A  8D B4 85 F0 FC FF FF      LEA ESI,[EBP + EAX*0x4 + 0xfffffcf0]
004B5851  83 3E 00                  CMP dword ptr [ESI],0x0
004B5854  75 16                     JNZ 0x004b586c
004B5856  8D B4 85 F0 FC FF FF      LEA ESI,[EBP + EAX*0x4 + 0xfffffcf0]
004B585D  6A 0A                     PUSH 0xa
004B585F  6A 0C                     PUSH 0xc
004B5861  6A 0A                     PUSH 0xa
004B5863  6A 00                     PUSH 0x0
004B5865  E8 26 8A 1F 00            CALL 0x006ae290
004B586A  89 06                     MOV dword ptr [ESI],EAX
LAB_004b586c:
004B586C  33 D2                     XOR EDX,EDX
004B586E  89 95 C0 FE FF FF         MOV dword ptr [EBP + 0xfffffec0],EDX
004B5874  89 95 C4 FE FF FF         MOV dword ptr [EBP + 0xfffffec4],EDX
004B587A  89 95 C8 FE FF FF         MOV dword ptr [EBP + 0xfffffec8],EDX
004B5880  8B 85 E8 FE FF FF         MOV EAX,dword ptr [EBP + 0xfffffee8]
004B5886  89 85 C0 FE FF FF         MOV dword ptr [EBP + 0xfffffec0],EAX
004B588C  8B 8D CC FE FF FF         MOV ECX,dword ptr [EBP + 0xfffffecc]
004B5892  89 8D C4 FE FF FF         MOV dword ptr [EBP + 0xfffffec4],ECX
004B5898  8B 95 B0 FD FF FF         MOV EDX,dword ptr [EBP + 0xfffffdb0]
004B589E  89 95 C8 FE FF FF         MOV dword ptr [EBP + 0xfffffec8],EDX
004B58A4  8D 85 C0 FE FF FF         LEA EAX,[EBP + 0xfffffec0]
004B58AA  50                        PUSH EAX
004B58AB  8B 0E                     MOV ECX,dword ptr [ESI]
004B58AD  51                        PUSH ECX
004B58AE  E8 0D 89 1F 00            CALL 0x006ae1c0
004B58B3  FF 4D D4                  DEC dword ptr [EBP + -0x2c]
004B58B6  8B 85 FC FE FF FF         MOV EAX,dword ptr [EBP + 0xfffffefc]
004B58BC  83 3C 85 68 1D 79 00 01   CMP dword ptr [EAX*0x4 + 0x791d68],0x1
004B58C4  0F 85 B1 06 00 00         JNZ 0x004b5f7b
004B58CA  FF 8D F8 FE FF FF         DEC dword ptr [EBP + 0xfffffef8]
004B58D0  33 C9                     XOR ECX,ECX
004B58D2  8B B5 88 FD FF FF         MOV ESI,dword ptr [EBP + 0xfffffd88]
004B58D8  EB 06                     JMP 0x004b58e0
LAB_004b58da:
004B58DA  8B 85 FC FE FF FF         MOV EAX,dword ptr [EBP + 0xfffffefc]
LAB_004b58e0:
004B58E0  66 8B 3C 85 88 08 79 00   MOV DI,word ptr [EAX*0x4 + 0x790888]
004B58E8  66 81 CF 00 02            OR DI,0x200
004B58ED  8B C1                     MOV EAX,ECX
004B58EF  99                        CDQ
004B58F0  2B C2                     SUB EAX,EDX
004B58F2  D1 F8                     SAR EAX,0x1
004B58F4  03 85 CC FE FF FF         ADD EAX,dword ptr [EBP + 0xfffffecc]
004B58FA  0F BF 15 40 B2 7F 00      MOVSX EDX,word ptr [0x007fb240]
004B5901  0F AF C2                  IMUL EAX,EDX
004B5904  0F BF 15 46 B2 7F 00      MOVSX EDX,word ptr [0x007fb246]
004B590B  0F AF 95 B0 FD FF FF      IMUL EDX,dword ptr [EBP + 0xfffffdb0]
004B5912  03 95 E8 FE FF FF         ADD EDX,dword ptr [EBP + 0xfffffee8]
004B5918  8B D9                     MOV EBX,ECX
004B591A  81 E3 01 00 00 80         AND EBX,0x80000001
004B5920  79 05                     JNS 0x004b5927
004B5922  4B                        DEC EBX
004B5923  83 CB FE                  OR EBX,0xfffffffe
004B5926  43                        INC EBX
LAB_004b5927:
004B5927  03 D0                     ADD EDX,EAX
004B5929  03 DA                     ADD EBX,EDX
004B592B  66 89 3C 5E               MOV word ptr [ESI + EBX*0x2],DI
004B592F  41                        INC ECX
004B5930  83 F9 04                  CMP ECX,0x4
004B5933  7C A5                     JL 0x004b58da
004B5935  E9 7C 06 00 00            JMP 0x004b5fb6
LAB_004b593a:
004B593A  33 D2                     XOR EDX,EDX
004B593C  89 95 64 FF FF FF         MOV dword ptr [EBP + 0xffffff64],EDX
004B5942  89 95 68 FF FF FF         MOV dword ptr [EBP + 0xffffff68],EDX
004B5948  89 95 6C FF FF FF         MOV dword ptr [EBP + 0xffffff6c],EDX
004B594E  89 95 70 FF FF FF         MOV dword ptr [EBP + 0xffffff70],EDX
004B5954  89 95 74 FF FF FF         MOV dword ptr [EBP + 0xffffff74],EDX
004B595A  89 8D 64 FF FF FF         MOV dword ptr [EBP + 0xffffff64],ECX
004B5960  8B 85 0C FF FF FF         MOV EAX,dword ptr [EBP + 0xffffff0c]
004B5966  89 85 74 FF FF FF         MOV dword ptr [EBP + 0xffffff74],EAX
004B596C  8B 8D E8 FE FF FF         MOV ECX,dword ptr [EBP + 0xfffffee8]
004B5972  89 8D 68 FF FF FF         MOV dword ptr [EBP + 0xffffff68],ECX
004B5978  8B 95 CC FE FF FF         MOV EDX,dword ptr [EBP + 0xfffffecc]
004B597E  89 95 6C FF FF FF         MOV dword ptr [EBP + 0xffffff6c],EDX
004B5984  8B 85 B0 FD FF FF         MOV EAX,dword ptr [EBP + 0xfffffdb0]
004B598A  89 85 70 FF FF FF         MOV dword ptr [EBP + 0xffffff70],EAX
004B5990  8D 8D 64 FF FF FF         LEA ECX,[EBP + 0xffffff64]
004B5996  51                        PUSH ECX
004B5997  8B 75 0C                  MOV ESI,dword ptr [EBP + 0xc]
004B599A  8B 56 14                  MOV EDX,dword ptr [ESI + 0x14]
004B599D  52                        PUSH EDX
004B599E  E8 1D 88 1F 00            CALL 0x006ae1c0
004B59A3  8B 46 0C                  MOV EAX,dword ptr [ESI + 0xc]
004B59A6  8B 48 04                  MOV ECX,dword ptr [EAX + 0x4]
004B59A9  49                        DEC ECX
004B59AA  51                        PUSH ECX
004B59AB  50                        PUSH EAX
004B59AC  E8 BF B2 1F 00            CALL 0x006b0c70
004B59B1  8B 85 FC FE FF FF         MOV EAX,dword ptr [EBP + 0xfffffefc]
004B59B7  8D B4 85 F0 FC FF FF      LEA ESI,[EBP + EAX*0x4 + 0xfffffcf0]
004B59BE  83 3E 00                  CMP dword ptr [ESI],0x0
004B59C1  75 16                     JNZ 0x004b59d9
004B59C3  8D B4 85 F0 FC FF FF      LEA ESI,[EBP + EAX*0x4 + 0xfffffcf0]
004B59CA  6A 0A                     PUSH 0xa
004B59CC  6A 0C                     PUSH 0xc
004B59CE  6A 0A                     PUSH 0xa
004B59D0  6A 00                     PUSH 0x0
004B59D2  E8 B9 88 1F 00            CALL 0x006ae290
004B59D7  89 06                     MOV dword ptr [ESI],EAX
LAB_004b59d9:
004B59D9  33 D2                     XOR EDX,EDX
004B59DB  89 95 C0 FE FF FF         MOV dword ptr [EBP + 0xfffffec0],EDX
004B59E1  89 95 C4 FE FF FF         MOV dword ptr [EBP + 0xfffffec4],EDX
004B59E7  89 95 C8 FE FF FF         MOV dword ptr [EBP + 0xfffffec8],EDX
004B59ED  8B 85 E8 FE FF FF         MOV EAX,dword ptr [EBP + 0xfffffee8]
004B59F3  89 85 C0 FE FF FF         MOV dword ptr [EBP + 0xfffffec0],EAX
004B59F9  8B 8D CC FE FF FF         MOV ECX,dword ptr [EBP + 0xfffffecc]
004B59FF  89 8D C4 FE FF FF         MOV dword ptr [EBP + 0xfffffec4],ECX
004B5A05  8B 95 B0 FD FF FF         MOV EDX,dword ptr [EBP + 0xfffffdb0]
004B5A0B  89 95 C8 FE FF FF         MOV dword ptr [EBP + 0xfffffec8],EDX
004B5A11  8D 85 C0 FE FF FF         LEA EAX,[EBP + 0xfffffec0]
004B5A17  50                        PUSH EAX
004B5A18  8B 0E                     MOV ECX,dword ptr [ESI]
004B5A1A  51                        PUSH ECX
004B5A1B  E8 A0 87 1F 00            CALL 0x006ae1c0
004B5A20  FF 4D D8                  DEC dword ptr [EBP + -0x28]
004B5A23  8B 85 FC FE FF FF         MOV EAX,dword ptr [EBP + 0xfffffefc]
004B5A29  83 3C 85 68 1D 79 00 01   CMP dword ptr [EAX*0x4 + 0x791d68],0x1
004B5A31  0F 85 44 05 00 00         JNZ 0x004b5f7b
004B5A37  FF 8D F8 FE FF FF         DEC dword ptr [EBP + 0xfffffef8]
004B5A3D  33 C9                     XOR ECX,ECX
004B5A3F  8B B5 88 FD FF FF         MOV ESI,dword ptr [EBP + 0xfffffd88]
004B5A45  EB 06                     JMP 0x004b5a4d
LAB_004b5a47:
004B5A47  8B 85 FC FE FF FF         MOV EAX,dword ptr [EBP + 0xfffffefc]
LAB_004b5a4d:
004B5A4D  66 8B 3C 85 88 08 79 00   MOV DI,word ptr [EAX*0x4 + 0x790888]
004B5A55  66 81 CF 00 02            OR DI,0x200
004B5A5A  8B C1                     MOV EAX,ECX
004B5A5C  99                        CDQ
004B5A5D  2B C2                     SUB EAX,EDX
004B5A5F  D1 F8                     SAR EAX,0x1
004B5A61  03 85 CC FE FF FF         ADD EAX,dword ptr [EBP + 0xfffffecc]
004B5A67  0F BF 15 40 B2 7F 00      MOVSX EDX,word ptr [0x007fb240]
004B5A6E  0F AF C2                  IMUL EAX,EDX
004B5A71  0F BF 15 46 B2 7F 00      MOVSX EDX,word ptr [0x007fb246]
004B5A78  0F AF 95 B0 FD FF FF      IMUL EDX,dword ptr [EBP + 0xfffffdb0]
004B5A7F  03 95 E8 FE FF FF         ADD EDX,dword ptr [EBP + 0xfffffee8]
004B5A85  8B D9                     MOV EBX,ECX
004B5A87  81 E3 01 00 00 80         AND EBX,0x80000001
004B5A8D  79 05                     JNS 0x004b5a94
004B5A8F  4B                        DEC EBX
004B5A90  83 CB FE                  OR EBX,0xfffffffe
004B5A93  43                        INC EBX
LAB_004b5a94:
004B5A94  03 D0                     ADD EDX,EAX
004B5A96  03 DA                     ADD EBX,EDX
004B5A98  66 89 3C 5E               MOV word ptr [ESI + EBX*0x2],DI
004B5A9C  41                        INC ECX
004B5A9D  83 F9 04                  CMP ECX,0x4
004B5AA0  7C A5                     JL 0x004b5a47
004B5AA2  E9 0F 05 00 00            JMP 0x004b5fb6
LAB_004b5aa7:
004B5AA7  33 D2                     XOR EDX,EDX
004B5AA9  89 95 64 FF FF FF         MOV dword ptr [EBP + 0xffffff64],EDX
004B5AAF  89 95 68 FF FF FF         MOV dword ptr [EBP + 0xffffff68],EDX
004B5AB5  89 95 6C FF FF FF         MOV dword ptr [EBP + 0xffffff6c],EDX
004B5ABB  89 95 70 FF FF FF         MOV dword ptr [EBP + 0xffffff70],EDX
004B5AC1  89 95 74 FF FF FF         MOV dword ptr [EBP + 0xffffff74],EDX
004B5AC7  89 8D 64 FF FF FF         MOV dword ptr [EBP + 0xffffff64],ECX
004B5ACD  8B 85 0C FF FF FF         MOV EAX,dword ptr [EBP + 0xffffff0c]
004B5AD3  89 85 74 FF FF FF         MOV dword ptr [EBP + 0xffffff74],EAX
004B5AD9  8B 8D E8 FE FF FF         MOV ECX,dword ptr [EBP + 0xfffffee8]
004B5ADF  89 8D 68 FF FF FF         MOV dword ptr [EBP + 0xffffff68],ECX
004B5AE5  8B 95 CC FE FF FF         MOV EDX,dword ptr [EBP + 0xfffffecc]
004B5AEB  89 95 6C FF FF FF         MOV dword ptr [EBP + 0xffffff6c],EDX
004B5AF1  8B 85 B0 FD FF FF         MOV EAX,dword ptr [EBP + 0xfffffdb0]
004B5AF7  89 85 70 FF FF FF         MOV dword ptr [EBP + 0xffffff70],EAX
004B5AFD  8D 8D 64 FF FF FF         LEA ECX,[EBP + 0xffffff64]
004B5B03  51                        PUSH ECX
004B5B04  8B 75 0C                  MOV ESI,dword ptr [EBP + 0xc]
004B5B07  8B 56 14                  MOV EDX,dword ptr [ESI + 0x14]
004B5B0A  52                        PUSH EDX
004B5B0B  E8 B0 86 1F 00            CALL 0x006ae1c0
004B5B10  8B 46 0C                  MOV EAX,dword ptr [ESI + 0xc]
004B5B13  8B 48 04                  MOV ECX,dword ptr [EAX + 0x4]
004B5B16  49                        DEC ECX
004B5B17  51                        PUSH ECX
004B5B18  50                        PUSH EAX
004B5B19  E8 52 B1 1F 00            CALL 0x006b0c70
004B5B1E  8B 85 FC FE FF FF         MOV EAX,dword ptr [EBP + 0xfffffefc]
004B5B24  8D B4 85 F0 FC FF FF      LEA ESI,[EBP + EAX*0x4 + 0xfffffcf0]
004B5B2B  83 3E 00                  CMP dword ptr [ESI],0x0
004B5B2E  75 16                     JNZ 0x004b5b46
004B5B30  8D B4 85 F0 FC FF FF      LEA ESI,[EBP + EAX*0x4 + 0xfffffcf0]
004B5B37  6A 0A                     PUSH 0xa
004B5B39  6A 0C                     PUSH 0xc
004B5B3B  6A 0A                     PUSH 0xa
004B5B3D  6A 00                     PUSH 0x0
004B5B3F  E8 4C 87 1F 00            CALL 0x006ae290
004B5B44  89 06                     MOV dword ptr [ESI],EAX
LAB_004b5b46:
004B5B46  33 D2                     XOR EDX,EDX
004B5B48  89 95 C0 FE FF FF         MOV dword ptr [EBP + 0xfffffec0],EDX
004B5B4E  89 95 C4 FE FF FF         MOV dword ptr [EBP + 0xfffffec4],EDX
004B5B54  89 95 C8 FE FF FF         MOV dword ptr [EBP + 0xfffffec8],EDX
004B5B5A  8B 85 E8 FE FF FF         MOV EAX,dword ptr [EBP + 0xfffffee8]
004B5B60  89 85 C0 FE FF FF         MOV dword ptr [EBP + 0xfffffec0],EAX
004B5B66  8B 8D CC FE FF FF         MOV ECX,dword ptr [EBP + 0xfffffecc]
004B5B6C  89 8D C4 FE FF FF         MOV dword ptr [EBP + 0xfffffec4],ECX
004B5B72  8B 95 B0 FD FF FF         MOV EDX,dword ptr [EBP + 0xfffffdb0]
004B5B78  89 95 C8 FE FF FF         MOV dword ptr [EBP + 0xfffffec8],EDX
004B5B7E  8D 85 C0 FE FF FF         LEA EAX,[EBP + 0xfffffec0]
004B5B84  50                        PUSH EAX
004B5B85  8B 0E                     MOV ECX,dword ptr [ESI]
004B5B87  51                        PUSH ECX
004B5B88  E8 33 86 1F 00            CALL 0x006ae1c0
004B5B8D  FF 4D DC                  DEC dword ptr [EBP + -0x24]
004B5B90  8B 85 FC FE FF FF         MOV EAX,dword ptr [EBP + 0xfffffefc]
004B5B96  83 3C 85 68 1D 79 00 01   CMP dword ptr [EAX*0x4 + 0x791d68],0x1
004B5B9E  0F 85 D7 03 00 00         JNZ 0x004b5f7b
004B5BA4  FF 8D F8 FE FF FF         DEC dword ptr [EBP + 0xfffffef8]
004B5BAA  33 C9                     XOR ECX,ECX
004B5BAC  8B B5 88 FD FF FF         MOV ESI,dword ptr [EBP + 0xfffffd88]
004B5BB2  EB 06                     JMP 0x004b5bba
LAB_004b5bb4:
004B5BB4  8B 85 FC FE FF FF         MOV EAX,dword ptr [EBP + 0xfffffefc]
LAB_004b5bba:
004B5BBA  66 8B 3C 85 88 08 79 00   MOV DI,word ptr [EAX*0x4 + 0x790888]
004B5BC2  66 81 CF 00 02            OR DI,0x200
004B5BC7  8B C1                     MOV EAX,ECX
004B5BC9  99                        CDQ
004B5BCA  2B C2                     SUB EAX,EDX
004B5BCC  D1 F8                     SAR EAX,0x1
004B5BCE  03 85 CC FE FF FF         ADD EAX,dword ptr [EBP + 0xfffffecc]
004B5BD4  0F BF 15 40 B2 7F 00      MOVSX EDX,word ptr [0x007fb240]
004B5BDB  0F AF C2                  IMUL EAX,EDX
004B5BDE  0F BF 15 46 B2 7F 00      MOVSX EDX,word ptr [0x007fb246]
004B5BE5  0F AF 95 B0 FD FF FF      IMUL EDX,dword ptr [EBP + 0xfffffdb0]
004B5BEC  03 95 E8 FE FF FF         ADD EDX,dword ptr [EBP + 0xfffffee8]
004B5BF2  8B D9                     MOV EBX,ECX
004B5BF4  81 E3 01 00 00 80         AND EBX,0x80000001
004B5BFA  79 05                     JNS 0x004b5c01
004B5BFC  4B                        DEC EBX
004B5BFD  83 CB FE                  OR EBX,0xfffffffe
004B5C00  43                        INC EBX
LAB_004b5c01:
004B5C01  03 D0                     ADD EDX,EAX
004B5C03  03 DA                     ADD EBX,EDX
004B5C05  66 89 3C 5E               MOV word ptr [ESI + EBX*0x2],DI
004B5C09  41                        INC ECX
004B5C0A  83 F9 04                  CMP ECX,0x4
004B5C0D  7C A5                     JL 0x004b5bb4
004B5C0F  E9 A2 03 00 00            JMP 0x004b5fb6
LAB_004b5c14:
004B5C14  33 C0                     XOR EAX,EAX
004B5C16  89 85 64 FF FF FF         MOV dword ptr [EBP + 0xffffff64],EAX
004B5C1C  89 85 68 FF FF FF         MOV dword ptr [EBP + 0xffffff68],EAX
004B5C22  89 85 6C FF FF FF         MOV dword ptr [EBP + 0xffffff6c],EAX
004B5C28  89 85 70 FF FF FF         MOV dword ptr [EBP + 0xffffff70],EAX
004B5C2E  89 85 74 FF FF FF         MOV dword ptr [EBP + 0xffffff74],EAX
004B5C34  8B 8D FC FE FF FF         MOV ECX,dword ptr [EBP + 0xfffffefc]
004B5C3A  89 8D 64 FF FF FF         MOV dword ptr [EBP + 0xffffff64],ECX
004B5C40  8B 85 0C FF FF FF         MOV EAX,dword ptr [EBP + 0xffffff0c]
004B5C46  89 85 74 FF FF FF         MOV dword ptr [EBP + 0xffffff74],EAX
004B5C4C  89 95 68 FF FF FF         MOV dword ptr [EBP + 0xffffff68],EDX
004B5C52  8B 8D CC FE FF FF         MOV ECX,dword ptr [EBP + 0xfffffecc]
004B5C58  89 8D 6C FF FF FF         MOV dword ptr [EBP + 0xffffff6c],ECX
004B5C5E  89 BD 70 FF FF FF         MOV dword ptr [EBP + 0xffffff70],EDI
004B5C64  8D 95 64 FF FF FF         LEA EDX,[EBP + 0xffffff64]
004B5C6A  52                        PUSH EDX
004B5C6B  8B 7D 0C                  MOV EDI,dword ptr [EBP + 0xc]
004B5C6E  8B 47 14                  MOV EAX,dword ptr [EDI + 0x14]
004B5C71  50                        PUSH EAX
004B5C72  E8 49 85 1F 00            CALL 0x006ae1c0
004B5C77  8B 47 0C                  MOV EAX,dword ptr [EDI + 0xc]
004B5C7A  8B 48 04                  MOV ECX,dword ptr [EAX + 0x4]
004B5C7D  49                        DEC ECX
004B5C7E  51                        PUSH ECX
004B5C7F  50                        PUSH EAX
004B5C80  E8 EB AF 1F 00            CALL 0x006b0c70
004B5C85  8B 85 FC FE FF FF         MOV EAX,dword ptr [EBP + 0xfffffefc]
004B5C8B  8D BC 85 F0 FC FF FF      LEA EDI,[EBP + EAX*0x4 + 0xfffffcf0]
004B5C92  83 3F 00                  CMP dword ptr [EDI],0x0
004B5C95  75 16                     JNZ 0x004b5cad
004B5C97  8D BC 85 F0 FC FF FF      LEA EDI,[EBP + EAX*0x4 + 0xfffffcf0]
004B5C9E  6A 0A                     PUSH 0xa
004B5CA0  6A 0C                     PUSH 0xc
004B5CA2  6A 0A                     PUSH 0xa
004B5CA4  6A 00                     PUSH 0x0
004B5CA6  E8 E5 85 1F 00            CALL 0x006ae290
004B5CAB  89 07                     MOV dword ptr [EDI],EAX
LAB_004b5cad:
004B5CAD  33 D2                     XOR EDX,EDX
004B5CAF  89 95 C0 FE FF FF         MOV dword ptr [EBP + 0xfffffec0],EDX
004B5CB5  89 95 C4 FE FF FF         MOV dword ptr [EBP + 0xfffffec4],EDX
004B5CBB  89 95 C8 FE FF FF         MOV dword ptr [EBP + 0xfffffec8],EDX
004B5CC1  8B 85 E8 FE FF FF         MOV EAX,dword ptr [EBP + 0xfffffee8]
004B5CC7  89 85 C0 FE FF FF         MOV dword ptr [EBP + 0xfffffec0],EAX
004B5CCD  8B 8D CC FE FF FF         MOV ECX,dword ptr [EBP + 0xfffffecc]
004B5CD3  89 8D C4 FE FF FF         MOV dword ptr [EBP + 0xfffffec4],ECX
004B5CD9  8B 95 B0 FD FF FF         MOV EDX,dword ptr [EBP + 0xfffffdb0]
004B5CDF  89 95 C8 FE FF FF         MOV dword ptr [EBP + 0xfffffec8],EDX
004B5CE5  8D 85 C0 FE FF FF         LEA EAX,[EBP + 0xfffffec0]
004B5CEB  50                        PUSH EAX
004B5CEC  8B 0F                     MOV ECX,dword ptr [EDI]
004B5CEE  51                        PUSH ECX
004B5CEF  E8 CC 84 1F 00            CALL 0x006ae1c0
004B5CF4  FF 4D E0                  DEC dword ptr [EBP + -0x20]
004B5CF7  8B 85 FC FE FF FF         MOV EAX,dword ptr [EBP + 0xfffffefc]
004B5CFD  83 3C 85 68 1D 79 00 01   CMP dword ptr [EAX*0x4 + 0x791d68],0x1
004B5D05  75 70                     JNZ 0x004b5d77
004B5D07  FF 8D F8 FE FF FF         DEC dword ptr [EBP + 0xfffffef8]
004B5D0D  33 C9                     XOR ECX,ECX
004B5D0F  8B B5 88 FD FF FF         MOV ESI,dword ptr [EBP + 0xfffffd88]
004B5D15  EB 06                     JMP 0x004b5d1d
LAB_004b5d17:
004B5D17  8B 85 FC FE FF FF         MOV EAX,dword ptr [EBP + 0xfffffefc]
LAB_004b5d1d:
004B5D1D  66 8B 3C 85 88 08 79 00   MOV DI,word ptr [EAX*0x4 + 0x790888]
004B5D25  66 81 CF 00 02            OR DI,0x200
004B5D2A  8B C1                     MOV EAX,ECX
004B5D2C  99                        CDQ
004B5D2D  2B C2                     SUB EAX,EDX
004B5D2F  D1 F8                     SAR EAX,0x1
004B5D31  03 85 CC FE FF FF         ADD EAX,dword ptr [EBP + 0xfffffecc]
004B5D37  0F BF 15 40 B2 7F 00      MOVSX EDX,word ptr [0x007fb240]
004B5D3E  0F AF C2                  IMUL EAX,EDX
004B5D41  0F BF 15 46 B2 7F 00      MOVSX EDX,word ptr [0x007fb246]
004B5D48  0F AF 95 B0 FD FF FF      IMUL EDX,dword ptr [EBP + 0xfffffdb0]
004B5D4F  03 95 E8 FE FF FF         ADD EDX,dword ptr [EBP + 0xfffffee8]
004B5D55  8B D9                     MOV EBX,ECX
004B5D57  81 E3 01 00 00 80         AND EBX,0x80000001
004B5D5D  79 05                     JNS 0x004b5d64
004B5D5F  4B                        DEC EBX
004B5D60  83 CB FE                  OR EBX,0xfffffffe
004B5D63  43                        INC EBX
LAB_004b5d64:
004B5D64  03 D0                     ADD EDX,EAX
004B5D66  03 DA                     ADD EBX,EDX
004B5D68  66 89 3C 5E               MOV word ptr [ESI + EBX*0x2],DI
004B5D6C  41                        INC ECX
004B5D6D  83 F9 04                  CMP ECX,0x4
004B5D70  7C A5                     JL 0x004b5d17
004B5D72  E9 3F 02 00 00            JMP 0x004b5fb6
LAB_004b5d77:
004B5D77  66 8B 04 85 88 08 79 00   MOV AX,word ptr [EAX*0x4 + 0x790888]
004B5D7F  80 CC 02                  OR AH,0x2
004B5D82  0F BF 0D 46 B2 7F 00      MOVSX ECX,word ptr [0x007fb246]
004B5D89  0F AF 8D B0 FD FF FF      IMUL ECX,dword ptr [EBP + 0xfffffdb0]
004B5D90  0F BF 15 40 B2 7F 00      MOVSX EDX,word ptr [0x007fb240]
004B5D97  0F AF 95 CC FE FF FF      IMUL EDX,dword ptr [EBP + 0xfffffecc]
004B5D9E  8B BD E8 FE FF FF         MOV EDI,dword ptr [EBP + 0xfffffee8]
004B5DA4  03 F9                     ADD EDI,ECX
004B5DA6  03 D7                     ADD EDX,EDI
004B5DA8  66 89 04 56               MOV word ptr [ESI + EDX*0x2],AX
004B5DAC  E9 05 02 00 00            JMP 0x004b5fb6
LAB_004b5db1:
004B5DB1  33 C0                     XOR EAX,EAX
004B5DB3  89 85 64 FF FF FF         MOV dword ptr [EBP + 0xffffff64],EAX
004B5DB9  89 85 68 FF FF FF         MOV dword ptr [EBP + 0xffffff68],EAX
004B5DBF  89 85 6C FF FF FF         MOV dword ptr [EBP + 0xffffff6c],EAX
004B5DC5  89 85 70 FF FF FF         MOV dword ptr [EBP + 0xffffff70],EAX
004B5DCB  89 85 74 FF FF FF         MOV dword ptr [EBP + 0xffffff74],EAX
004B5DD1  8B 8D FC FE FF FF         MOV ECX,dword ptr [EBP + 0xfffffefc]
004B5DD7  89 8D 64 FF FF FF         MOV dword ptr [EBP + 0xffffff64],ECX
004B5DDD  8B 95 0C FF FF FF         MOV EDX,dword ptr [EBP + 0xffffff0c]
004B5DE3  89 95 74 FF FF FF         MOV dword ptr [EBP + 0xffffff74],EDX
004B5DE9  8B 85 E8 FE FF FF         MOV EAX,dword ptr [EBP + 0xfffffee8]
004B5DEF  89 85 68 FF FF FF         MOV dword ptr [EBP + 0xffffff68],EAX
004B5DF5  8B 8D CC FE FF FF         MOV ECX,dword ptr [EBP + 0xfffffecc]
004B5DFB  89 8D 6C FF FF FF         MOV dword ptr [EBP + 0xffffff6c],ECX
004B5E01  8B 95 B0 FD FF FF         MOV EDX,dword ptr [EBP + 0xfffffdb0]
004B5E07  89 95 70 FF FF FF         MOV dword ptr [EBP + 0xffffff70],EDX
004B5E0D  8D 85 64 FF FF FF         LEA EAX,[EBP + 0xffffff64]
004B5E13  50                        PUSH EAX
004B5E14  8B 75 0C                  MOV ESI,dword ptr [EBP + 0xc]
004B5E17  8B 4E 14                  MOV ECX,dword ptr [ESI + 0x14]
004B5E1A  51                        PUSH ECX
004B5E1B  E8 A0 83 1F 00            CALL 0x006ae1c0
004B5E20  8B 46 0C                  MOV EAX,dword ptr [ESI + 0xc]
004B5E23  8B 50 04                  MOV EDX,dword ptr [EAX + 0x4]
004B5E26  4A                        DEC EDX
004B5E27  52                        PUSH EDX
004B5E28  50                        PUSH EAX
004B5E29  E8 42 AE 1F 00            CALL 0x006b0c70
004B5E2E  8B 85 FC FE FF FF         MOV EAX,dword ptr [EBP + 0xfffffefc]
004B5E34  83 F8 3A                  CMP EAX,0x3a
004B5E37  75 56                     JNZ 0x004b5e8f
004B5E39  FF 4D C0                  DEC dword ptr [EBP + -0x40]
004B5E3C  33 C0                     XOR EAX,EAX
004B5E3E  89 85 C0 FE FF FF         MOV dword ptr [EBP + 0xfffffec0],EAX
004B5E44  89 85 C4 FE FF FF         MOV dword ptr [EBP + 0xfffffec4],EAX
004B5E4A  89 85 C8 FE FF FF         MOV dword ptr [EBP + 0xfffffec8],EAX
004B5E50  8B 8D E8 FE FF FF         MOV ECX,dword ptr [EBP + 0xfffffee8]
004B5E56  89 8D C0 FE FF FF         MOV dword ptr [EBP + 0xfffffec0],ECX
004B5E5C  8B 95 CC FE FF FF         MOV EDX,dword ptr [EBP + 0xfffffecc]
004B5E62  89 95 C4 FE FF FF         MOV dword ptr [EBP + 0xfffffec4],EDX
004B5E68  8B 85 B0 FD FF FF         MOV EAX,dword ptr [EBP + 0xfffffdb0]
004B5E6E  89 85 C8 FE FF FF         MOV dword ptr [EBP + 0xfffffec8],EAX
004B5E74  8D 8D C0 FE FF FF         LEA ECX,[EBP + 0xfffffec0]
004B5E7A  51                        PUSH ECX
004B5E7B  8B 95 D8 FD FF FF         MOV EDX,dword ptr [EBP + 0xfffffdd8]
004B5E81  52                        PUSH EDX
004B5E82  E8 39 83 1F 00            CALL 0x006ae1c0
004B5E87  8B 85 FC FE FF FF         MOV EAX,dword ptr [EBP + 0xfffffefc]
004B5E8D  EB 75                     JMP 0x004b5f04
LAB_004b5e8f:
004B5E8F  83 F8 64                  CMP EAX,0x64
004B5E92  75 56                     JNZ 0x004b5eea
004B5E94  FF 4D C4                  DEC dword ptr [EBP + -0x3c]
004B5E97  33 C0                     XOR EAX,EAX
004B5E99  89 85 C0 FE FF FF         MOV dword ptr [EBP + 0xfffffec0],EAX
004B5E9F  89 85 C4 FE FF FF         MOV dword ptr [EBP + 0xfffffec4],EAX
004B5EA5  89 85 C8 FE FF FF         MOV dword ptr [EBP + 0xfffffec8],EAX
004B5EAB  8B 8D E8 FE FF FF         MOV ECX,dword ptr [EBP + 0xfffffee8]
004B5EB1  89 8D C0 FE FF FF         MOV dword ptr [EBP + 0xfffffec0],ECX
004B5EB7  8B 95 CC FE FF FF         MOV EDX,dword ptr [EBP + 0xfffffecc]
004B5EBD  89 95 C4 FE FF FF         MOV dword ptr [EBP + 0xfffffec4],EDX
004B5EC3  8B 85 B0 FD FF FF         MOV EAX,dword ptr [EBP + 0xfffffdb0]
004B5EC9  89 85 C8 FE FF FF         MOV dword ptr [EBP + 0xfffffec8],EAX
004B5ECF  8D 8D C0 FE FF FF         LEA ECX,[EBP + 0xfffffec0]
004B5ED5  51                        PUSH ECX
004B5ED6  8B 95 80 FE FF FF         MOV EDX,dword ptr [EBP + 0xfffffe80]
004B5EDC  52                        PUSH EDX
004B5EDD  E8 DE 82 1F 00            CALL 0x006ae1c0
004B5EE2  8B 85 FC FE FF FF         MOV EAX,dword ptr [EBP + 0xfffffefc]
004B5EE8  EB 1A                     JMP 0x004b5f04
LAB_004b5eea:
004B5EEA  83 3C 85 88 08 79 00 01   CMP dword ptr [EAX*0x4 + 0x790888],0x1
004B5EF2  75 0D                     JNZ 0x004b5f01
004B5EF4  8B 4D BC                  MOV ECX,dword ptr [EBP + -0x44]
004B5EF7  85 C9                     TEST ECX,ECX
004B5EF9  74 06                     JZ 0x004b5f01
004B5EFB  49                        DEC ECX
004B5EFC  89 4D BC                  MOV dword ptr [EBP + -0x44],ECX
004B5EFF  EB 03                     JMP 0x004b5f04
LAB_004b5f01:
004B5F01  FF 4D D0                  DEC dword ptr [EBP + -0x30]
LAB_004b5f04:
004B5F04  83 3C 85 68 1D 79 00 01   CMP dword ptr [EAX*0x4 + 0x791d68],0x1
004B5F0C  75 6D                     JNZ 0x004b5f7b
004B5F0E  FF 8D F8 FE FF FF         DEC dword ptr [EBP + 0xfffffef8]
004B5F14  33 C9                     XOR ECX,ECX
004B5F16  8B B5 88 FD FF FF         MOV ESI,dword ptr [EBP + 0xfffffd88]
004B5F1C  EB 06                     JMP 0x004b5f24
LAB_004b5f1e:
004B5F1E  8B 85 FC FE FF FF         MOV EAX,dword ptr [EBP + 0xfffffefc]
LAB_004b5f24:
004B5F24  66 8B 3C 85 88 08 79 00   MOV DI,word ptr [EAX*0x4 + 0x790888]
004B5F2C  66 81 CF 00 02            OR DI,0x200
004B5F31  8B C1                     MOV EAX,ECX
004B5F33  99                        CDQ
004B5F34  2B C2                     SUB EAX,EDX
004B5F36  D1 F8                     SAR EAX,0x1
004B5F38  03 85 CC FE FF FF         ADD EAX,dword ptr [EBP + 0xfffffecc]
004B5F3E  0F BF 15 40 B2 7F 00      MOVSX EDX,word ptr [0x007fb240]
004B5F45  0F AF C2                  IMUL EAX,EDX
004B5F48  0F BF 15 46 B2 7F 00      MOVSX EDX,word ptr [0x007fb246]
004B5F4F  0F AF 95 B0 FD FF FF      IMUL EDX,dword ptr [EBP + 0xfffffdb0]
004B5F56  03 95 E8 FE FF FF         ADD EDX,dword ptr [EBP + 0xfffffee8]
004B5F5C  8B D9                     MOV EBX,ECX
004B5F5E  81 E3 01 00 00 80         AND EBX,0x80000001
004B5F64  79 05                     JNS 0x004b5f6b
004B5F66  4B                        DEC EBX
004B5F67  83 CB FE                  OR EBX,0xfffffffe
004B5F6A  43                        INC EBX
LAB_004b5f6b:
004B5F6B  03 D0                     ADD EDX,EAX
004B5F6D  03 DA                     ADD EBX,EDX
004B5F6F  66 89 3C 5E               MOV word ptr [ESI + EBX*0x2],DI
004B5F73  41                        INC ECX
004B5F74  83 F9 04                  CMP ECX,0x4
004B5F77  7C A5                     JL 0x004b5f1e
004B5F79  EB 3B                     JMP 0x004b5fb6
LAB_004b5f7b:
004B5F7B  66 8B 04 85 88 08 79 00   MOV AX,word ptr [EAX*0x4 + 0x790888]
004B5F83  80 CC 02                  OR AH,0x2
004B5F86  0F BF 0D 46 B2 7F 00      MOVSX ECX,word ptr [0x007fb246]
004B5F8D  0F AF 8D B0 FD FF FF      IMUL ECX,dword ptr [EBP + 0xfffffdb0]
004B5F94  0F BF 15 40 B2 7F 00      MOVSX EDX,word ptr [0x007fb240]
004B5F9B  0F AF 95 CC FE FF FF      IMUL EDX,dword ptr [EBP + 0xfffffecc]
004B5FA2  8B B5 E8 FE FF FF         MOV ESI,dword ptr [EBP + 0xfffffee8]
004B5FA8  03 F1                     ADD ESI,ECX
004B5FAA  03 D6                     ADD EDX,ESI
004B5FAC  8B 8D 88 FD FF FF         MOV ECX,dword ptr [EBP + 0xfffffd88]
004B5FB2  66 89 04 51               MOV word ptr [ECX + EDX*0x2],AX
LAB_004b5fb6:
004B5FB6  8B 85 B0 FD FF FF         MOV EAX,dword ptr [EBP + 0xfffffdb0]
004B5FBC  40                        INC EAX
004B5FBD  89 85 B0 FD FF FF         MOV dword ptr [EBP + 0xfffffdb0],EAX
004B5FC3  0F BF 15 44 B2 7F 00      MOVSX EDX,word ptr [0x007fb244]
004B5FCA  4A                        DEC EDX
004B5FCB  3B C2                     CMP EAX,EDX
004B5FCD  0F 8C E1 E9 FF FF         JL 0x004b49b4
004B5FD3  8B 4D 0C                  MOV ECX,dword ptr [EBP + 0xc]
LAB_004b5fd6:
004B5FD6  8B 45 BC                  MOV EAX,dword ptr [EBP + -0x44]
004B5FD9  85 C0                     TEST EAX,EAX
004B5FDB  75 38                     JNZ 0x004b6015
004B5FDD  8B 45 D0                  MOV EAX,dword ptr [EBP + -0x30]
004B5FE0  85 C0                     TEST EAX,EAX
004B5FE2  75 31                     JNZ 0x004b6015
004B5FE4  8B 45 C0                  MOV EAX,dword ptr [EBP + -0x40]
004B5FE7  85 C0                     TEST EAX,EAX
004B5FE9  75 2A                     JNZ 0x004b6015
004B5FEB  8B 45 C4                  MOV EAX,dword ptr [EBP + -0x3c]
004B5FEE  85 C0                     TEST EAX,EAX
004B5FF0  75 23                     JNZ 0x004b6015
004B5FF2  8B 45 D4                  MOV EAX,dword ptr [EBP + -0x2c]
004B5FF5  85 C0                     TEST EAX,EAX
004B5FF7  75 1C                     JNZ 0x004b6015
004B5FF9  8B 45 D8                  MOV EAX,dword ptr [EBP + -0x28]
004B5FFC  85 C0                     TEST EAX,EAX
004B5FFE  75 15                     JNZ 0x004b6015
004B6000  8B 45 DC                  MOV EAX,dword ptr [EBP + -0x24]
004B6003  85 C0                     TEST EAX,EAX
004B6005  75 0E                     JNZ 0x004b6015
004B6007  8B 45 E0                  MOV EAX,dword ptr [EBP + -0x20]
004B600A  85 C0                     TEST EAX,EAX
004B600C  0F 84 BB 00 00 00         JZ 0x004b60cd
004B6012  8B 4D 0C                  MOV ECX,dword ptr [EBP + 0xc]
LAB_004b6015:
004B6015  8B 45 90                  MOV EAX,dword ptr [EBP + -0x70]
004B6018  40                        INC EAX
004B6019  89 45 90                  MOV dword ptr [EBP + -0x70],EAX
004B601C  8B 5D A0                  MOV EBX,dword ptr [EBP + -0x60]
004B601F  8B F0                     MOV ESI,EAX
004B6021  E9 AE E8 FF FF            JMP 0x004b48d4
LAB_004b6026:
004B6026  C7 45 A0 00 00 00 00      MOV dword ptr [EBP + -0x60],0x0
004B602D  8B 5D A0                  MOV EBX,dword ptr [EBP + -0x60]
004B6030  E9 97 E8 FF FF            JMP 0x004b48cc
LAB_004b6035:
004B6035  83 6D A0 05               SUB dword ptr [EBP + -0x60],0x5
004B6039  79 07                     JNS 0x004b6042
004B603B  C7 45 A0 00 00 00 00      MOV dword ptr [EBP + -0x60],0x0
LAB_004b6042:
004B6042  C7 45 A4 01 00 00 00      MOV dword ptr [EBP + -0x5c],0x1
004B6049  8B 5D A0                  MOV EBX,dword ptr [EBP + -0x60]
004B604C  E9 7B E8 FF FF            JMP 0x004b48cc
LAB_004b6051:
004B6051  83 6D A0 02               SUB dword ptr [EBP + -0x60],0x2
004B6055  79 07                     JNS 0x004b605e
004B6057  C7 45 A0 00 00 00 00      MOV dword ptr [EBP + -0x60],0x0
LAB_004b605e:
004B605E  C7 85 90 FD FF FF 01 00 00 00  MOV dword ptr [EBP + 0xfffffd90],0x1
004B6068  8B 5D A0                  MOV EBX,dword ptr [EBP + -0x60]
004B606B  E9 5C E8 FF FF            JMP 0x004b48cc
LAB_004b6070:
004B6070  83 6D A0 02               SUB dword ptr [EBP + -0x60],0x2
004B6074  79 07                     JNS 0x004b607d
004B6076  C7 45 A0 00 00 00 00      MOV dword ptr [EBP + -0x60],0x0
LAB_004b607d:
004B607D  C7 85 98 FD FF FF 01 00 00 00  MOV dword ptr [EBP + 0xfffffd98],0x1
004B6087  8B 5D A0                  MOV EBX,dword ptr [EBP + -0x60]
004B608A  E9 3D E8 FF FF            JMP 0x004b48cc
LAB_004b608f:
004B608F  FF 4D A0                  DEC dword ptr [EBP + -0x60]
004B6092  79 07                     JNS 0x004b609b
004B6094  C7 45 A0 00 00 00 00      MOV dword ptr [EBP + -0x60],0x0
LAB_004b609b:
004B609B  C7 45 A8 01 00 00 00      MOV dword ptr [EBP + -0x58],0x1
004B60A2  8B 5D A0                  MOV EBX,dword ptr [EBP + -0x60]
004B60A5  E9 22 E8 FF FF            JMP 0x004b48cc
LAB_004b60aa:
004B60AA  43                        INC EBX
004B60AB  E9 FA E7 FF FF            JMP 0x004b48aa
LAB_004b60b0:
004B60B0  8B 45 B0                  MOV EAX,dword ptr [EBP + -0x50]
004B60B3  89 45 A0                  MOV dword ptr [EBP + -0x60],EAX
004B60B6  89 85 F0 FE FF FF         MOV dword ptr [EBP + 0xfffffef0],EAX
004B60BC  8D 0C 00                  LEA ECX,[EAX + EAX*0x1]
004B60BF  89 4D B0                  MOV dword ptr [EBP + -0x50],ECX
004B60C2  E9 32 E0 FF FF            JMP 0x004b40f9
LAB_004b60c7:
004B60C7  40                        INC EAX
004B60C8  E9 CD DC FF FF            JMP 0x004b3d9a
LAB_004b60cd:
004B60CD  8B 45 E4                  MOV EAX,dword ptr [EBP + -0x1c]
004B60D0  85 C0                     TEST EAX,EAX
004B60D2  74 06                     JZ 0x004b60da
004B60D4  50                        PUSH EAX
004B60D5  E8 36 80 1F 00            CALL 0x006ae110
LAB_004b60da:
004B60DA  8D B5 B8 FD FF FF         LEA ESI,[EBP + 0xfffffdb8]
004B60E0  BF 42 00 00 00            MOV EDI,0x42
LAB_004b60e5:
004B60E5  8B 06                     MOV EAX,dword ptr [ESI]
004B60E7  85 C0                     TEST EAX,EAX
004B60E9  74 06                     JZ 0x004b60f1
004B60EB  50                        PUSH EAX
004B60EC  E8 1F 80 1F 00            CALL 0x006ae110
LAB_004b60f1:
004B60F1  83 C6 04                  ADD ESI,0x4
004B60F4  4F                        DEC EDI
004B60F5  75 EE                     JNZ 0x004b60e5
004B60F7  8B 95 44 FD FF FF         MOV EDX,dword ptr [EBP + 0xfffffd44]
004B60FD  89 15 F8 8D 85 00         MOV dword ptr [0x00858df8],EDX
004B6103  33 C0                     XOR EAX,EAX
004B6105  EB 43                     JMP 0x004b614a
LAB_004b6107:
004B6107  8B 85 44 FD FF FF         MOV EAX,dword ptr [EBP + 0xfffffd44]
004B610D  A3 F8 8D 85 00            MOV [0x00858df8],EAX
004B6112  68 A8 C7 7A 00            PUSH 0x7ac7a8
004B6117  68 CC 4C 7A 00            PUSH 0x7a4ccc
004B611C  56                        PUSH ESI
004B611D  6A 00                     PUSH 0x0
004B611F  68 C1 03 00 00            PUSH 0x3c1
004B6124  68 C8 C7 7A 00            PUSH 0x7ac7c8
004B6129  E8 A2 73 1F 00            CALL 0x006ad4d0
004B612E  83 C4 18                  ADD ESP,0x18
004B6131  85 C0                     TEST EAX,EAX
004B6133  74 01                     JZ 0x004b6136
004B6135  CC                        INT3
LAB_004b6136:
004B6136  68 C2 03 00 00            PUSH 0x3c2
004B613B  68 C8 C7 7A 00            PUSH 0x7ac7c8
004B6140  6A 00                     PUSH 0x0
004B6142  56                        PUSH ESI
004B6143  E8 F8 FC 1E 00            CALL 0x006a5e40
004B6148  8B C6                     MOV EAX,ESI
LAB_004b614a:
004B614A  8D A5 98 FC FF FF         LEA ESP,[EBP + 0xfffffc98]
004B6150  8B 4D F0                  MOV ECX,dword ptr [EBP + -0x10]
004B6153  64 89 0D 00 00 00 00      MOV dword ptr FS:[0x0],ECX
004B615A  5F                        POP EDI
004B615B  5E                        POP ESI
004B615C  5B                        POP EBX
004B615D  8B E5                     MOV ESP,EBP
004B615F  5D                        POP EBP
004B6160  C3                        RET
