FUN_005b3430:
005B3430  55                        PUSH EBP
005B3431  8B EC                     MOV EBP,ESP
005B3433  83 EC 50                  SUB ESP,0x50
005B3436  53                        PUSH EBX
005B3437  56                        PUSH ESI
005B3438  8B F1                     MOV ESI,ECX
005B343A  57                        PUSH EDI
005B343B  89 75 F4                  MOV dword ptr [EBP + -0xc],ESI
005B343E  C7 45 FC 01 00 00 00      MOV dword ptr [EBP + -0x4],0x1
005B3445  FF 15 DC BE 85 00         CALL dword ptr [0x0085bedc]
005B344B  89 46 61                  MOV dword ptr [ESI + 0x61],EAX
005B344E  A1 F8 8D 85 00            MOV EAX,[0x00858df8]
005B3453  8D 55 B4                  LEA EDX,[EBP + -0x4c]
005B3456  8D 4D B0                  LEA ECX,[EBP + -0x50]
005B3459  6A 00                     PUSH 0x0
005B345B  52                        PUSH EDX
005B345C  89 45 B0                  MOV dword ptr [EBP + -0x50],EAX
005B345F  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
005B3465  E8 86 A3 17 00            CALL 0x0072d7f0
005B346A  8B F0                     MOV ESI,EAX
005B346C  83 C4 08                  ADD ESP,0x8
005B346F  85 F6                     TEST ESI,ESI
005B3471  0F 85 DA 04 00 00         JNZ 0x005b3951
005B3477  8B 7D F4                  MOV EDI,dword ptr [EBP + -0xc]
005B347A  8B CF                     MOV ECX,EDI
005B347C  E8 6E 0A E5 FF            CALL 0x00403eef
005B3481  8B CF                     MOV ECX,EDI
005B3483  E8 9A 04 E5 FF            CALL 0x00403922
005B3488  33 C0                     XOR EAX,EAX
005B348A  8A 47 65                  MOV AL,byte ptr [EDI + 0x65]
005B348D  48                        DEC EAX
005B348E  0F 84 36 04 00 00         JZ 0x005b38ca
005B3494  83 E8 02                  SUB EAX,0x2
005B3497  0F 84 63 01 00 00         JZ 0x005b3600
005B349D  48                        DEC EAX
005B349E  0F 85 9D 04 00 00         JNZ 0x005b3941
005B34A4  8A 87 9A 00 00 00         MOV AL,byte ptr [EDI + 0x9a]
005B34AA  33 DB                     XOR EBX,EBX
005B34AC  84 C0                     TEST AL,AL
005B34AE  0F 86 A6 00 00 00         JBE 0x005b355a
005B34B4  8D B7 78 01 00 00         LEA ESI,[EDI + 0x178]
LAB_005b34ba:
005B34BA  8B 47 61                  MOV EAX,dword ptr [EDI + 0x61]
005B34BD  8B 56 AF                  MOV EDX,dword ptr [ESI + -0x51]
005B34C0  8B 4E AB                  MOV ECX,dword ptr [ESI + -0x55]
005B34C3  2B C2                     SUB EAX,EDX
005B34C5  3B C1                     CMP EAX,ECX
005B34C7  72 73                     JC 0x005b353c
005B34C9  8A 86 43 FF FF FF         MOV AL,byte ptr [ESI + 0xffffff43]
005B34CF  84 C0                     TEST AL,AL
005B34D1  74 3A                     JZ 0x005b350d
005B34D3  8B 06                     MOV EAX,dword ptr [ESI]
005B34D5  83 F8 FF                  CMP EAX,-0x1
005B34D8  74 0A                     JZ 0x005b34e4
005B34DA  8B 4E 44                  MOV ECX,dword ptr [ESI + 0x44]
005B34DD  50                        PUSH EAX
005B34DE  51                        PUSH ECX
005B34DF  E8 0C 06 10 00            CALL 0x006b3af0
LAB_005b34e4:
005B34E4  8A 86 6A FF FF FF         MOV AL,byte ptr [ESI + 0xffffff6a]
005B34EA  84 C0                     TEST AL,AL
005B34EC  74 18                     JZ 0x005b3506
005B34EE  8B 86 91 00 00 00         MOV EAX,dword ptr [ESI + 0x91]
005B34F4  83 F8 FF                  CMP EAX,-0x1
005B34F7  74 0D                     JZ 0x005b3506
005B34F9  8B 96 D5 00 00 00         MOV EDX,dword ptr [ESI + 0xd5]
005B34FF  50                        PUSH EAX
005B3500  52                        PUSH EDX
005B3501  E8 EA 05 10 00            CALL 0x006b3af0
LAB_005b3506:
005B3506  C6 86 43 FF FF FF 00      MOV byte ptr [ESI + 0xffffff43],0x0
LAB_005b350d:
005B350D  8B 86 73 FF FF FF         MOV EAX,dword ptr [ESI + 0xffffff73]
005B3513  85 C0                     TEST EAX,EAX
005B3515  7E 2C                     JLE 0x005b3543
005B3517  48                        DEC EAX
005B3518  89 86 73 FF FF FF         MOV dword ptr [ESI + 0xffffff73],EAX
005B351E  8B 8E 6F FF FF FF         MOV ECX,dword ptr [ESI + 0xffffff6f]
005B3524  83 F9 FF                  CMP ECX,-0x1
005B3527  74 13                     JZ 0x005b353c
005B3529  8B 56 8B                  MOV EDX,dword ptr [ESI + -0x75]
005B352C  52                        PUSH EDX
005B352D  8B 56 87                  MOV EDX,dword ptr [ESI + -0x79]
005B3530  52                        PUSH EDX
005B3531  50                        PUSH EAX
005B3532  8B 46 B3                  MOV EAX,dword ptr [ESI + -0x4d]
005B3535  51                        PUSH ECX
005B3536  50                        PUSH EAX
005B3537  E8 F4 01 10 00            CALL 0x006b3730
LAB_005b353c:
005B353C  C7 45 FC 00 00 00 00      MOV dword ptr [EBP + -0x4],0x0
LAB_005b3543:
005B3543  33 C9                     XOR ECX,ECX
005B3545  43                        INC EBX
005B3546  8A 8F 9A 00 00 00         MOV CL,byte ptr [EDI + 0x9a]
005B354C  81 C6 FB 01 00 00         ADD ESI,0x1fb
005B3552  3B D9                     CMP EBX,ECX
005B3554  0F 8C 60 FF FF FF         JL 0x005b34ba
LAB_005b355a:
005B355A  8B 15 6C 17 81 00         MOV EDX,dword ptr [0x0081176c]
005B3560  33 DB                     XOR EBX,EBX
005B3562  8B 82 E6 02 00 00         MOV EAX,dword ptr [EDX + 0x2e6]
005B3568  3B C3                     CMP EAX,EBX
005B356A  74 09                     JZ 0x005b3575
005B356C  80 78 65 02               CMP byte ptr [EAX + 0x65],0x2
005B3570  74 03                     JZ 0x005b3575
005B3572  89 5D FC                  MOV dword ptr [EBP + -0x4],EBX
LAB_005b3575:
005B3575  39 5D FC                  CMP dword ptr [EBP + -0x4],EBX
005B3578  0F 84 C3 03 00 00         JZ 0x005b3941
005B357E  8A 87 9A 00 00 00         MOV AL,byte ptr [EDI + 0x9a]
005B3584  C6 47 65 02               MOV byte ptr [EDI + 0x65],0x2
005B3588  84 C0                     TEST AL,AL
005B358A  76 2A                     JBE 0x005b35b6
005B358C  8D B7 E7 00 00 00         LEA ESI,[EDI + 0xe7]
LAB_005b3592:
005B3592  8B 06                     MOV EAX,dword ptr [ESI]
005B3594  83 F8 FF                  CMP EAX,-0x1
005B3597  74 0A                     JZ 0x005b35a3
005B3599  50                        PUSH EAX
005B359A  8B 46 44                  MOV EAX,dword ptr [ESI + 0x44]
005B359D  50                        PUSH EAX
005B359E  E8 4D 05 10 00            CALL 0x006b3af0
LAB_005b35a3:
005B35A3  33 C9                     XOR ECX,ECX
005B35A5  43                        INC EBX
005B35A6  8A 8F 9A 00 00 00         MOV CL,byte ptr [EDI + 0x9a]
005B35AC  81 C6 FB 01 00 00         ADD ESI,0x1fb
005B35B2  3B D9                     CMP EBX,ECX
005B35B4  7C DC                     JL 0x005b3592
LAB_005b35b6:
005B35B6  33 C9                     XOR ECX,ECX
005B35B8  8A 8F 5A 1A 00 00         MOV CL,byte ptr [EDI + 0x1a5a]
005B35BE  8D 04 CD 00 00 00 00      LEA EAX,[ECX*0x8 + 0x0]
005B35C5  2B C1                     SUB EAX,ECX
005B35C7  8D 14 40                  LEA EDX,[EAX + EAX*0x2]
005B35CA  8D 04 D1                  LEA EAX,[ECX + EDX*0x8]
005B35CD  8D 0C 47                  LEA ECX,[EDI + EAX*0x2]
005B35D0  03 C1                     ADD EAX,ECX
005B35D2  8B 88 D1 00 00 00         MOV ECX,dword ptr [EAX + 0xd1]
005B35D8  85 C9                     TEST ECX,ECX
005B35DA  0F 84 61 03 00 00         JZ 0x005b3941
005B35E0  05 C1 00 00 00            ADD EAX,0xc1
005B35E5  B9 20 76 80 00            MOV ECX,0x807620
005B35EA  50                        PUSH EAX
005B35EB  E8 60 05 13 00            CALL 0x006e3b50
005B35F0  8B 4D B0                  MOV ECX,dword ptr [EBP + -0x50]
005B35F3  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
005B35F9  5F                        POP EDI
005B35FA  5E                        POP ESI
005B35FB  5B                        POP EBX
005B35FC  8B E5                     MOV ESP,EBP
005B35FE  5D                        POP EBP
005B35FF  C3                        RET
LAB_005b3600:
005B3600  33 C9                     XOR ECX,ECX
005B3602  33 DB                     XOR EBX,EBX
005B3604  8A 8F 9A 00 00 00         MOV CL,byte ptr [EDI + 0x9a]
005B360A  85 C9                     TEST ECX,ECX
005B360C  0F 8E C8 01 00 00         JLE 0x005b37da
LAB_005b3612:
005B3612  8D 04 DD 00 00 00 00      LEA EAX,[EBX*0x8 + 0x0]
005B3619  2B C3                     SUB EAX,EBX
005B361B  8D 14 40                  LEA EDX,[EAX + EAX*0x2]
005B361E  8D 34 D3                  LEA ESI,[EBX + EDX*0x8]
005B3621  8D 04 77                  LEA EAX,[EDI + ESI*0x2]
005B3624  03 F0                     ADD ESI,EAX
005B3626  8B 86 BC 00 00 00         MOV EAX,dword ptr [ESI + 0xbc]
005B362C  85 C0                     TEST EAX,EAX
005B362E  0F 84 95 01 00 00         JZ 0x005b37c9
005B3634  8B 57 61                  MOV EDX,dword ptr [EDI + 0x61]
005B3637  8B 86 27 01 00 00         MOV EAX,dword ptr [ESI + 0x127]
005B363D  2B D0                     SUB EDX,EAX
005B363F  8B 86 23 01 00 00         MOV EAX,dword ptr [ESI + 0x123]
005B3645  3B D0                     CMP EDX,EAX
005B3647  0F 82 48 01 00 00         JC 0x005b3795
005B364D  8B 8E EF 00 00 00         MOV ECX,dword ptr [ESI + 0xef]
005B3653  8B 86 EB 00 00 00         MOV EAX,dword ptr [ESI + 0xeb]
005B3659  49                        DEC ECX
005B365A  3B C1                     CMP EAX,ECX
005B365C  7D 72                     JGE 0x005b36d0
005B365E  85 C0                     TEST EAX,EAX
005B3660  75 28                     JNZ 0x005b368a
005B3662  8B 86 E7 00 00 00         MOV EAX,dword ptr [ESI + 0xe7]
005B3668  83 F8 FF                  CMP EAX,-0x1
005B366B  74 1D                     JZ 0x005b368a
005B366D  8B 96 03 01 00 00         MOV EDX,dword ptr [ESI + 0x103]
005B3673  8B 8E FF 00 00 00         MOV ECX,dword ptr [ESI + 0xff]
005B3679  52                        PUSH EDX
005B367A  8B 96 2B 01 00 00         MOV EDX,dword ptr [ESI + 0x12b]
005B3680  51                        PUSH ECX
005B3681  6A FE                     PUSH -0x2
005B3683  50                        PUSH EAX
005B3684  52                        PUSH EDX
005B3685  E8 46 FE 0F 00            CALL 0x006b34d0
LAB_005b368a:
005B368A  8B 96 EB 00 00 00         MOV EDX,dword ptr [ESI + 0xeb]
005B3690  42                        INC EDX
005B3691  89 96 EB 00 00 00         MOV dword ptr [ESI + 0xeb],EDX
005B3697  8B 86 E7 00 00 00         MOV EAX,dword ptr [ESI + 0xe7]
005B369D  83 F8 FF                  CMP EAX,-0x1
005B36A0  74 22                     JZ 0x005b36c4
005B36A2  8B 8E 03 01 00 00         MOV ECX,dword ptr [ESI + 0x103]
005B36A8  8B 96 FF 00 00 00         MOV EDX,dword ptr [ESI + 0xff]
005B36AE  51                        PUSH ECX
005B36AF  8B 8E EB 00 00 00         MOV ECX,dword ptr [ESI + 0xeb]
005B36B5  52                        PUSH EDX
005B36B6  8B 96 2B 01 00 00         MOV EDX,dword ptr [ESI + 0x12b]
005B36BC  51                        PUSH ECX
005B36BD  50                        PUSH EAX
005B36BE  52                        PUSH EDX
005B36BF  E8 6C 00 10 00            CALL 0x006b3730
LAB_005b36c4:
005B36C4  C7 45 FC 00 00 00 00      MOV dword ptr [EBP + -0x4],0x0
005B36CB  E9 F9 00 00 00            JMP 0x005b37c9
LAB_005b36d0:
005B36D0  8B 8E 80 01 00 00         MOV ECX,dword ptr [ESI + 0x180]
005B36D6  8B 86 7C 01 00 00         MOV EAX,dword ptr [ESI + 0x17c]
005B36DC  83 E9 03                  SUB ECX,0x3
005B36DF  3B C1                     CMP EAX,ECX
005B36E1  0F 8D E2 00 00 00         JGE 0x005b37c9
005B36E7  85 C0                     TEST EAX,EAX
005B36E9  75 5A                     JNZ 0x005b3745
005B36EB  8B 86 78 01 00 00         MOV EAX,dword ptr [ESI + 0x178]
005B36F1  83 F8 FF                  CMP EAX,-0x1
005B36F4  74 1D                     JZ 0x005b3713
005B36F6  8B 96 94 01 00 00         MOV EDX,dword ptr [ESI + 0x194]
005B36FC  8B 8E 90 01 00 00         MOV ECX,dword ptr [ESI + 0x190]
005B3702  52                        PUSH EDX
005B3703  8B 96 BC 01 00 00         MOV EDX,dword ptr [ESI + 0x1bc]
005B3709  51                        PUSH ECX
005B370A  6A FE                     PUSH -0x2
005B370C  50                        PUSH EAX
005B370D  52                        PUSH EDX
005B370E  E8 BD FD 0F 00            CALL 0x006b34d0
LAB_005b3713:
005B3713  8A 86 E2 00 00 00         MOV AL,byte ptr [ESI + 0xe2]
005B3719  84 C0                     TEST AL,AL
005B371B  74 28                     JZ 0x005b3745
005B371D  8B 86 09 02 00 00         MOV EAX,dword ptr [ESI + 0x209]
005B3723  83 F8 FF                  CMP EAX,-0x1
005B3726  74 1D                     JZ 0x005b3745
005B3728  8B 8E 25 02 00 00         MOV ECX,dword ptr [ESI + 0x225]
005B372E  8B 96 21 02 00 00         MOV EDX,dword ptr [ESI + 0x221]
005B3734  51                        PUSH ECX
005B3735  52                        PUSH EDX
005B3736  6A FE                     PUSH -0x2
005B3738  50                        PUSH EAX
005B3739  8B 86 4D 02 00 00         MOV EAX,dword ptr [ESI + 0x24d]
005B373F  50                        PUSH EAX
005B3740  E8 8B FD 0F 00            CALL 0x006b34d0
LAB_005b3745:
005B3745  8B 96 7C 01 00 00         MOV EDX,dword ptr [ESI + 0x17c]
005B374B  42                        INC EDX
005B374C  89 96 7C 01 00 00         MOV dword ptr [ESI + 0x17c],EDX
005B3752  8B 86 78 01 00 00         MOV EAX,dword ptr [ESI + 0x178]
005B3758  83 F8 FF                  CMP EAX,-0x1
005B375B  74 22                     JZ 0x005b377f
005B375D  8B 8E 94 01 00 00         MOV ECX,dword ptr [ESI + 0x194]
005B3763  8B 96 90 01 00 00         MOV EDX,dword ptr [ESI + 0x190]
005B3769  51                        PUSH ECX
005B376A  8B 8E 7C 01 00 00         MOV ECX,dword ptr [ESI + 0x17c]
005B3770  52                        PUSH EDX
005B3771  8B 96 BC 01 00 00         MOV EDX,dword ptr [ESI + 0x1bc]
005B3777  51                        PUSH ECX
005B3778  50                        PUSH EAX
005B3779  52                        PUSH EDX
005B377A  E8 B1 FF 0F 00            CALL 0x006b3730
LAB_005b377f:
005B377F  6A FF                     PUSH -0x1
005B3781  6A 01                     PUSH 0x1
005B3783  6A 1E                     PUSH 0x1e
005B3785  8B CF                     MOV ECX,EDI
005B3787  E8 65 14 E5 FF            CALL 0x00404bf1
005B378C  C7 45 FC 00 00 00 00      MOV dword ptr [EBP + -0x4],0x0
005B3793  EB 34                     JMP 0x005b37c9
LAB_005b3795:
005B3795  33 DB                     XOR EBX,EBX
005B3797  C7 45 FC 00 00 00 00      MOV dword ptr [EBP + -0x4],0x0
005B379E  85 C9                     TEST ECX,ECX
005B37A0  7E 27                     JLE 0x005b37c9
005B37A2  8D 87 49 02 00 00         LEA EAX,[EDI + 0x249]
LAB_005b37a8:
005B37A8  8A 88 99 FE FF FF         MOV CL,byte ptr [EAX + 0xfffffe99]
005B37AE  84 C9                     TEST CL,CL
005B37B0  74 05                     JZ 0x005b37b7
005B37B2  8B 4F 61                  MOV ECX,dword ptr [EDI + 0x61]
005B37B5  89 08                     MOV dword ptr [EAX],ECX
LAB_005b37b7:
005B37B7  33 D2                     XOR EDX,EDX
005B37B9  43                        INC EBX
005B37BA  8A 97 9A 00 00 00         MOV DL,byte ptr [EDI + 0x9a]
005B37C0  05 FB 01 00 00            ADD EAX,0x1fb
005B37C5  3B DA                     CMP EBX,EDX
005B37C7  7C DF                     JL 0x005b37a8
LAB_005b37c9:
005B37C9  33 C9                     XOR ECX,ECX
005B37CB  43                        INC EBX
005B37CC  8A 8F 9A 00 00 00         MOV CL,byte ptr [EDI + 0x9a]
005B37D2  3B D9                     CMP EBX,ECX
005B37D4  0F 8C 38 FE FF FF         JL 0x005b3612
LAB_005b37da:
005B37DA  8A 87 E3 1E 00 00         MOV AL,byte ptr [EDI + 0x1ee3]
005B37E0  84 C0                     TEST AL,AL
005B37E2  74 1C                     JZ 0x005b3800
005B37E4  A1 6C 17 81 00            MOV EAX,[0x0081176c]
005B37E9  8B 80 E6 02 00 00         MOV EAX,dword ptr [EAX + 0x2e6]
005B37EF  85 C0                     TEST EAX,EAX
005B37F1  74 0D                     JZ 0x005b3800
005B37F3  80 78 65 01               CMP byte ptr [EAX + 0x65],0x1
005B37F7  74 07                     JZ 0x005b3800
005B37F9  C7 45 FC 00 00 00 00      MOV dword ptr [EBP + -0x4],0x0
LAB_005b3800:
005B3800  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
005B3803  85 C0                     TEST EAX,EAX
005B3805  0F 84 36 01 00 00         JZ 0x005b3941
005B380B  8A 87 9A 00 00 00         MOV AL,byte ptr [EDI + 0x9a]
005B3811  84 C0                     TEST AL,AL
005B3813  76 78                     JBE 0x005b388d
005B3815  8D 4F 66                  LEA ECX,[EDI + 0x66]
005B3818  BB FF 68 00 00            MOV EBX,0x68ff
005B381D  89 4D F8                  MOV dword ptr [EBP + -0x8],ECX
005B3820  8D B7 A3 00 00 00         LEA ESI,[EDI + 0xa3]
LAB_005b3826:
005B3826  8B 55 F8                  MOV EDX,dword ptr [EBP + -0x8]
005B3829  83 3A 00                  CMP dword ptr [EDX],0x0
005B382C  75 3D                     JNZ 0x005b386b
005B382E  8B 4E 04                  MOV ECX,dword ptr [ESI + 0x4]
005B3831  8B 16                     MOV EDX,dword ptr [ESI]
005B3833  8D 83 80 00 00 00         LEA EAX,[EBX + 0x80]
005B3839  50                        PUSH EAX
005B383A  8B 46 60                  MOV EAX,dword ptr [ESI + 0x60]
005B383D  53                        PUSH EBX
005B383E  51                        PUSH ECX
005B383F  8B 4E 5C                  MOV ECX,dword ptr [ESI + 0x5c]
005B3842  52                        PUSH EDX
005B3843  8B 56 FC                  MOV EDX,dword ptr [ESI + -0x4]
005B3846  03 C2                     ADD EAX,EDX
005B3848  33 D2                     XOR EDX,EDX
005B384A  50                        PUSH EAX
005B384B  8B 46 F8                  MOV EAX,dword ptr [ESI + -0x8]
005B384E  03 C8                     ADD ECX,EAX
005B3850  8B 87 DF 1E 00 00         MOV EAX,dword ptr [EDI + 0x1edf]
005B3856  85 C0                     TEST EAX,EAX
005B3858  0F 95 C2                  SETNZ DL
005B385B  51                        PUSH ECX
005B385C  52                        PUSH EDX
005B385D  6A 01                     PUSH 0x1
005B385F  8B CF                     MOV ECX,EDI
005B3861  E8 B5 FD E4 FF            CALL 0x0040361b
005B3866  8B 4D F8                  MOV ECX,dword ptr [EBP + -0x8]
005B3869  89 01                     MOV dword ptr [ECX],EAX
LAB_005b386b:
005B386B  8B 55 F8                  MOV EDX,dword ptr [EBP + -0x8]
005B386E  43                        INC EBX
005B386F  83 C2 04                  ADD EDX,0x4
005B3872  33 C0                     XOR EAX,EAX
005B3874  8A 87 9A 00 00 00         MOV AL,byte ptr [EDI + 0x9a]
005B387A  89 55 F8                  MOV dword ptr [EBP + -0x8],EDX
005B387D  8D 93 01 97 FF FF         LEA EDX,[EBX + 0xffff9701]
005B3883  81 C6 FB 01 00 00         ADD ESI,0x1fb
005B3889  3B D0                     CMP EDX,EAX
005B388B  7C 99                     JL 0x005b3826
LAB_005b388d:
005B388D  8B 87 6F 1A 00 00         MOV EAX,dword ptr [EDI + 0x1a6f]
005B3893  C6 47 65 01               MOV byte ptr [EDI + 0x65],0x1
005B3897  85 C0                     TEST EAX,EAX
005B3899  0F 84 A2 00 00 00         JZ 0x005b3941
005B389F  8D 8F 5F 1A 00 00         LEA ECX,[EDI + 0x1a5f]
005B38A5  51                        PUSH ECX
005B38A6  B9 20 76 80 00            MOV ECX,0x807620
005B38AB  E8 00 05 13 00            CALL 0x006e3db0
005B38B0  8B 4D B0                  MOV ECX,dword ptr [EBP + -0x50]
005B38B3  C7 87 6F 1A 00 00 00 00 00 00  MOV dword ptr [EDI + 0x1a6f],0x0
005B38BD  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
005B38C3  5F                        POP EDI
005B38C4  5E                        POP ESI
005B38C5  5B                        POP EBX
005B38C6  8B E5                     MOV ESP,EBP
005B38C8  5D                        POP EBP
005B38C9  C3                        RET
LAB_005b38ca:
005B38CA  8A 87 9A 00 00 00         MOV AL,byte ptr [EDI + 0x9a]
005B38D0  33 DB                     XOR EBX,EBX
005B38D2  84 C0                     TEST AL,AL
005B38D4  76 6B                     JBE 0x005b3941
005B38D6  8D B7 21 02 00 00         LEA ESI,[EDI + 0x221]
LAB_005b38dc:
005B38DC  8A 86 C1 FE FF FF         MOV AL,byte ptr [ESI + 0xfffffec1]
005B38E2  84 C0                     TEST AL,AL
005B38E4  74 48                     JZ 0x005b392e
005B38E6  8B 47 61                  MOV EAX,dword ptr [EDI + 0x61]
005B38E9  8B 4E 28                  MOV ECX,dword ptr [ESI + 0x28]
005B38EC  8B D0                     MOV EDX,EAX
005B38EE  2B D1                     SUB EDX,ECX
005B38F0  8B 4E 24                  MOV ECX,dword ptr [ESI + 0x24]
005B38F3  3B D1                     CMP EDX,ECX
005B38F5  72 37                     JC 0x005b392e
005B38F7  89 46 28                  MOV dword ptr [ESI + 0x28],EAX
005B38FA  8B 56 EC                  MOV EDX,dword ptr [ESI + -0x14]
005B38FD  42                        INC EDX
005B38FE  89 56 EC                  MOV dword ptr [ESI + -0x14],EDX
005B3901  8B 4E F0                  MOV ECX,dword ptr [ESI + -0x10]
005B3904  8B C2                     MOV EAX,EDX
005B3906  3B C1                     CMP EAX,ECX
005B3908  7C 07                     JL 0x005b3911
005B390A  C7 46 EC 00 00 00 00      MOV dword ptr [ESI + -0x14],0x0
LAB_005b3911:
005B3911  8B 46 E8                  MOV EAX,dword ptr [ESI + -0x18]
005B3914  83 F8 FF                  CMP EAX,-0x1
005B3917  74 15                     JZ 0x005b392e
005B3919  8B 4E 04                  MOV ECX,dword ptr [ESI + 0x4]
005B391C  8B 16                     MOV EDX,dword ptr [ESI]
005B391E  51                        PUSH ECX
005B391F  8B 4E EC                  MOV ECX,dword ptr [ESI + -0x14]
005B3922  52                        PUSH EDX
005B3923  8B 56 2C                  MOV EDX,dword ptr [ESI + 0x2c]
005B3926  51                        PUSH ECX
005B3927  50                        PUSH EAX
005B3928  52                        PUSH EDX
005B3929  E8 02 FE 0F 00            CALL 0x006b3730
LAB_005b392e:
005B392E  33 C0                     XOR EAX,EAX
005B3930  43                        INC EBX
005B3931  8A 87 9A 00 00 00         MOV AL,byte ptr [EDI + 0x9a]
005B3937  81 C6 FB 01 00 00         ADD ESI,0x1fb
005B393D  3B D8                     CMP EBX,EAX
005B393F  7C 9B                     JL 0x005b38dc
LAB_005b3941:
005B3941  8B 4D B0                  MOV ECX,dword ptr [EBP + -0x50]
005B3944  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
005B394A  5F                        POP EDI
005B394B  5E                        POP ESI
005B394C  5B                        POP EBX
005B394D  8B E5                     MOV ESP,EBP
005B394F  5D                        POP EBP
005B3950  C3                        RET
LAB_005b3951:
005B3951  8B 55 B0                  MOV EDX,dword ptr [EBP + -0x50]
005B3954  68 80 C9 7C 00            PUSH 0x7cc980
005B3959  68 CC 4C 7A 00            PUSH 0x7a4ccc
005B395E  56                        PUSH ESI
005B395F  6A 00                     PUSH 0x0
005B3961  68 D2 00 00 00            PUSH 0xd2
005B3966  68 E8 C8 7C 00            PUSH 0x7cc8e8
005B396B  89 15 F8 8D 85 00         MOV dword ptr [0x00858df8],EDX
005B3971  E8 5A 9B 0F 00            CALL 0x006ad4d0
005B3976  83 C4 18                  ADD ESP,0x18
005B3979  85 C0                     TEST EAX,EAX
005B397B  74 01                     JZ 0x005b397e
005B397D  CC                        INT3
LAB_005b397e:
005B397E  68 D2 00 00 00            PUSH 0xd2
005B3983  68 E8 C8 7C 00            PUSH 0x7cc8e8
005B3988  6A 00                     PUSH 0x0
005B398A  56                        PUSH ESI
005B398B  E8 B0 24 0F 00            CALL 0x006a5e40
005B3990  5F                        POP EDI
005B3991  5E                        POP ESI
005B3992  5B                        POP EBX
005B3993  8B E5                     MOV ESP,EBP
005B3995  5D                        POP EBP
005B3996  C3                        RET
