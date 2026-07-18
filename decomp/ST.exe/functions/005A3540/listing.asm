FSGSTy::SetGameList:
005A3540  55                        PUSH EBP
005A3541  8B EC                     MOV EBP,ESP
005A3543  81 EC B8 02 00 00         SUB ESP,0x2b8
005A3549  8A 81 5F 1A 00 00         MOV AL,byte ptr [ECX + 0x1a5f]
005A354F  53                        PUSH EBX
005A3550  56                        PUSH ESI
005A3551  3C 08                     CMP AL,0x8
005A3553  57                        PUSH EDI
005A3554  89 4D F4                  MOV dword ptr [EBP + -0xc],ECX
005A3557  0F 85 4E 03 00 00         JNZ 0x005a38ab
005A355D  8B 81 BE 1E 00 00         MOV EAX,dword ptr [ECX + 0x1ebe]
005A3563  85 C0                     TEST EAX,EAX
005A3565  0F 84 40 03 00 00         JZ 0x005a38ab
005A356B  A1 F8 8D 85 00            MOV EAX,[0x00858df8]
005A3570  8D 55 A8                  LEA EDX,[EBP + -0x58]
005A3573  8D 4D A4                  LEA ECX,[EBP + -0x5c]
005A3576  6A 00                     PUSH 0x0
005A3578  52                        PUSH EDX
005A3579  89 45 A4                  MOV dword ptr [EBP + -0x5c],EAX
005A357C  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
005A3582  E8 69 A2 18 00            CALL 0x0072d7f0
005A3587  8B F0                     MOV ESI,EAX
005A3589  83 C4 08                  ADD ESP,0x8
005A358C  85 F6                     TEST ESI,ESI
005A358E  0F 85 D8 02 00 00         JNZ 0x005a386c
005A3594  8B 35 30 2A 80 00         MOV ESI,dword ptr [0x00802a30]
005A359A  85 F6                     TEST ESI,ESI
005A359C  74 4D                     JZ 0x005a35eb
005A359E  8B 86 C9 00 00 00         MOV EAX,dword ptr [ESI + 0xc9]
005A35A4  8B 8E C5 00 00 00         MOV ECX,dword ptr [ESI + 0xc5]
005A35AA  50                        PUSH EAX
005A35AB  51                        PUSH ECX
005A35AC  6A 00                     PUSH 0x0
005A35AE  8B CE                     MOV ECX,ESI
005A35B0  C6 86 93 04 00 00 01      MOV byte ptr [ESI + 0x493],0x1
005A35B7  66 C7 86 94 04 00 00 FF FF  MOV word ptr [ESI + 0x494],0xffff
005A35C0  E8 B9 1A E6 FF            CALL 0x0040507e
005A35C5  8B 96 C9 00 00 00         MOV EDX,dword ptr [ESI + 0xc9]
005A35CB  8B 86 C5 00 00 00         MOV EAX,dword ptr [ESI + 0xc5]
005A35D1  52                        PUSH EDX
005A35D2  50                        PUSH EAX
005A35D3  8B CE                     MOV ECX,ESI
005A35D5  E8 44 EE E5 FF            CALL 0x0040241e
005A35DA  C6 86 D2 00 00 00 00      MOV byte ptr [ESI + 0xd2],0x0
005A35E1  C7 86 DF 04 00 00 FF FF FF FF  MOV dword ptr [ESI + 0x4df],0xffffffff
LAB_005a35eb:
005A35EB  8B 5D F4                  MOV EBX,dword ptr [EBP + -0xc]
005A35EE  8B 8B 20 1B 00 00         MOV ECX,dword ptr [EBX + 0x1b20]
005A35F4  8D 43 1D                  LEA EAX,[EBX + 0x1d]
005A35F7  50                        PUSH EAX
005A35F8  51                        PUSH ECX
005A35F9  6A 02                     PUSH 0x2
005A35FB  8B CB                     MOV ECX,EBX
005A35FD  C7 43 2D 26 00 00 00      MOV dword ptr [EBX + 0x2d],0x26
005A3604  E8 77 2A 14 00            CALL 0x006e6080
005A3609  8B 93 BE 1E 00 00         MOV EDX,dword ptr [EBX + 0x1ebe]
005A360F  33 C0                     XOR EAX,EAX
005A3611  66 8B 43 31               MOV AX,word ptr [EBX + 0x31]
005A3615  3B 42 0C                  CMP EAX,dword ptr [EDX + 0xc]
005A3618  73 0E                     JNC 0x005a3628
005A361A  8B 72 08                  MOV ESI,dword ptr [EDX + 0x8]
005A361D  0F AF F0                  IMUL ESI,EAX
005A3620  03 72 1C                  ADD ESI,dword ptr [EDX + 0x1c]
005A3623  89 75 F8                  MOV dword ptr [EBP + -0x8],ESI
005A3626  EB 0A                     JMP 0x005a3632
LAB_005a3628:
005A3628  C7 45 F8 00 00 00 00      MOV dword ptr [EBP + -0x8],0x0
005A362F  8B 75 F8                  MOV ESI,dword ptr [EBP + -0x8]
LAB_005a3632:
005A3632  85 F6                     TEST ESI,ESI
005A3634  74 0D                     JZ 0x005a3643
005A3636  B9 97 00 00 00            MOV ECX,0x97
005A363B  8D BD 48 FD FF FF         LEA EDI,[EBP + 0xfffffd48]
005A3641  F3 A5                     MOVSD.REP ES:EDI,ESI
LAB_005a3643:
005A3643  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
005A3646  C7 42 0C 00 00 00 00      MOV dword ptr [EDX + 0xc],0x0
005A364D  85 C0                     TEST EAX,EAX
005A364F  0F 86 A6 00 00 00         JBE 0x005a36fb
005A3655  8B 75 0C                  MOV ESI,dword ptr [EBP + 0xc]
005A3658  8B F8                     MOV EDI,EAX
LAB_005a365a:
005A365A  8B 83 C2 1E 00 00         MOV EAX,dword ptr [EBX + 0x1ec2]
005A3660  85 C0                     TEST EAX,EAX
005A3662  75 13                     JNZ 0x005a3677
005A3664  83 3E 04                  CMP dword ptr [ESI],0x4
005A3667  0F 85 81 00 00 00         JNZ 0x005a36ee
005A366D  8B 93 BE 1E 00 00         MOV EDX,dword ptr [EBX + 0x1ebe]
005A3673  56                        PUSH ESI
005A3674  52                        PUSH EDX
005A3675  EB 72                     JMP 0x005a36e9
LAB_005a3677:
005A3677  39 46 08                  CMP dword ptr [ESI + 0x8],EAX
005A367A  75 72                     JNZ 0x005a36ee
005A367C  83 3E 04                  CMP dword ptr [ESI],0x4
005A367F  75 6D                     JNZ 0x005a36ee
005A3681  3D 00 01 00 00            CMP EAX,0x100
005A3686  75 59                     JNZ 0x005a36e1
005A3688  83 BB C6 1E 00 00 FF      CMP dword ptr [EBX + 0x1ec6],-0x1
005A368F  75 0A                     JNZ 0x005a369b
005A3691  8B 83 BE 1E 00 00         MOV EAX,dword ptr [EBX + 0x1ebe]
005A3697  56                        PUSH ESI
005A3698  50                        PUSH EAX
005A3699  EB 4E                     JMP 0x005a36e9
LAB_005a369b:
005A369B  8A 46 7C                  MOV AL,byte ptr [ESI + 0x7c]
005A369E  84 C0                     TEST AL,AL
005A36A0  74 4C                     JZ 0x005a36ee
005A36A2  8D 4E 7F                  LEA ECX,[ESI + 0x7f]
005A36A5  6A 08                     PUSH 0x8
005A36A7  8D 55 E8                  LEA EDX,[EBP + -0x18]
005A36AA  51                        PUSH ECX
005A36AB  52                        PUSH EDX
005A36AC  E8 8F AC 18 00            CALL 0x0072e340
005A36B1  8D 45 FC                  LEA EAX,[EBP + -0x4]
005A36B4  8D 4D E8                  LEA ECX,[EBP + -0x18]
005A36B7  50                        PUSH EAX
005A36B8  68 84 C5 7C 00            PUSH 0x7cc584
005A36BD  51                        PUSH ECX
005A36BE  C6 45 F0 00               MOV byte ptr [EBP + -0x10],0x0
005A36C2  E8 B9 B7 18 00            CALL 0x0072ee80
005A36C7  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
005A36CA  8B 83 C6 1E 00 00         MOV EAX,dword ptr [EBX + 0x1ec6]
005A36D0  83 C4 18                  ADD ESP,0x18
005A36D3  3B D0                     CMP EDX,EAX
005A36D5  75 17                     JNZ 0x005a36ee
005A36D7  8B 83 BE 1E 00 00         MOV EAX,dword ptr [EBX + 0x1ebe]
005A36DD  56                        PUSH ESI
005A36DE  50                        PUSH EAX
005A36DF  EB 08                     JMP 0x005a36e9
LAB_005a36e1:
005A36E1  8B 8B BE 1E 00 00         MOV ECX,dword ptr [EBX + 0x1ebe]
005A36E7  56                        PUSH ESI
005A36E8  51                        PUSH ECX
LAB_005a36e9:
005A36E9  E8 D2 AA 10 00            CALL 0x006ae1c0
LAB_005a36ee:
005A36EE  81 C6 5C 02 00 00         ADD ESI,0x25c
005A36F4  4F                        DEC EDI
005A36F5  0F 85 5F FF FF FF         JNZ 0x005a365a
LAB_005a36fb:
005A36FB  8B 15 A8 75 80 00         MOV EDX,dword ptr [0x008075a8]
005A3701  68 75 01 00 00            PUSH 0x175
005A3706  68 74 01 00 00            PUSH 0x174
005A370B  6A 5E                     PUSH 0x5e
005A370D  6A 13                     PUSH 0x13
005A370F  52                        PUSH EDX
005A3710  E8 6B 28 11 00            CALL 0x006b5f80
005A3715  8B 83 9A 1E 00 00         MOV EAX,dword ptr [EBX + 0x1e9a]
005A371B  50                        PUSH EAX
005A371C  6A 01                     PUSH 0x1
005A371E  68 75 01 00 00            PUSH 0x175
005A3723  68 74 01 00 00            PUSH 0x174
005A3728  6A 00                     PUSH 0x0
005A372A  6A 00                     PUSH 0x0
005A372C  6A 5E                     PUSH 0x5e
005A372E  6A 13                     PUSH 0x13
005A3730  E8 63 EB E5 FF            CALL 0x00402298
005A3735  8B 8B BE 1E 00 00         MOV ECX,dword ptr [EBX + 0x1ebe]
005A373B  8B 83 20 1B 00 00         MOV EAX,dword ptr [EBX + 0x1b20]
005A3741  83 C4 20                  ADD ESP,0x20
005A3744  8D 73 1D                  LEA ESI,[EBX + 0x1d]
005A3747  C7 43 2D 28 00 00 00      MOV dword ptr [EBX + 0x2d],0x28
005A374E  8B 51 0C                  MOV EDX,dword ptr [ECX + 0xc]
005A3751  56                        PUSH ESI
005A3752  50                        PUSH EAX
005A3753  6A 02                     PUSH 0x2
005A3755  8B CB                     MOV ECX,EBX
005A3757  89 53 31                  MOV dword ptr [EBX + 0x31],EDX
005A375A  66 C7 43 35 01 00         MOV word ptr [EBX + 0x35],0x1
005A3760  E8 1B 29 14 00            CALL 0x006e6080
005A3765  8B 8B BE 1E 00 00         MOV ECX,dword ptr [EBX + 0x1ebe]
005A376B  C7 43 2D 20 00 00 00      MOV dword ptr [EBX + 0x2d],0x20
005A3772  8B 41 0C                  MOV EAX,dword ptr [ECX + 0xc]
005A3775  85 C0                     TEST EAX,EAX
005A3777  74 11                     JZ 0x005a378a
005A3779  8B 83 6B 1A 00 00         MOV EAX,dword ptr [EBX + 0x1a6b]
005A377F  85 C0                     TEST EAX,EAX
005A3781  74 07                     JZ 0x005a378a
005A3783  B8 01 00 00 00            MOV EAX,0x1
005A3788  EB 02                     JMP 0x005a378c
LAB_005a378a:
005A378A  33 C0                     XOR EAX,EAX
LAB_005a378c:
005A378C  8B 93 20 1B 00 00         MOV EDX,dword ptr [EBX + 0x1b20]
005A3792  56                        PUSH ESI
005A3793  52                        PUSH EDX
005A3794  6A 02                     PUSH 0x2
005A3796  8B CB                     MOV ECX,EBX
005A3798  89 43 31                  MOV dword ptr [EBX + 0x31],EAX
005A379B  E8 E0 28 14 00            CALL 0x006e6080
005A37A0  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
005A37A3  85 C0                     TEST EAX,EAX
005A37A5  0F 84 AF 00 00 00         JZ 0x005a385a
005A37AB  8B 83 BE 1E 00 00         MOV EAX,dword ptr [EBX + 0x1ebe]
005A37B1  33 C9                     XOR ECX,ECX
005A37B3  8B 70 0C                  MOV ESI,dword ptr [EAX + 0xc]
005A37B6  85 F6                     TEST ESI,ESI
005A37B8  89 75 FC                  MOV dword ptr [EBP + -0x4],ESI
005A37BB  0F 86 99 00 00 00         JBE 0x005a385a
005A37C1  3B CE                     CMP ECX,ESI
005A37C3  73 13                     JNC 0x005a37d8
LAB_005a37c5:
005A37C5  8B 93 BE 1E 00 00         MOV EDX,dword ptr [EBX + 0x1ebe]
005A37CB  8B 42 08                  MOV EAX,dword ptr [EDX + 0x8]
005A37CE  8B 7A 1C                  MOV EDI,dword ptr [EDX + 0x1c]
005A37D1  0F AF C1                  IMUL EAX,ECX
005A37D4  03 C7                     ADD EAX,EDI
005A37D6  EB 02                     JMP 0x005a37da
LAB_005a37d8:
005A37D8  33 C0                     XOR EAX,EAX
LAB_005a37da:
005A37DA  85 C0                     TEST EAX,EAX
005A37DC  74 39                     JZ 0x005a3817
005A37DE  8D BD 74 FD FF FF         LEA EDI,[EBP + 0xfffffd74]
005A37E4  8D 70 2C                  LEA ESI,[EAX + 0x2c]
LAB_005a37e7:
005A37E7  8A 16                     MOV DL,byte ptr [ESI]
005A37E9  8A C2                     MOV AL,DL
005A37EB  3A 17                     CMP DL,byte ptr [EDI]
005A37ED  75 1C                     JNZ 0x005a380b
005A37EF  84 C0                     TEST AL,AL
005A37F1  74 14                     JZ 0x005a3807
005A37F3  8A 56 01                  MOV DL,byte ptr [ESI + 0x1]
005A37F6  8A C2                     MOV AL,DL
005A37F8  3A 57 01                  CMP DL,byte ptr [EDI + 0x1]
005A37FB  75 0E                     JNZ 0x005a380b
005A37FD  83 C6 02                  ADD ESI,0x2
005A3800  83 C7 02                  ADD EDI,0x2
005A3803  84 C0                     TEST AL,AL
005A3805  75 E0                     JNZ 0x005a37e7
LAB_005a3807:
005A3807  33 C0                     XOR EAX,EAX
005A3809  EB 05                     JMP 0x005a3810
LAB_005a380b:
005A380B  1B C0                     SBB EAX,EAX
005A380D  83 D8 FF                  SBB EAX,-0x1
LAB_005a3810:
005A3810  85 C0                     TEST EAX,EAX
005A3812  74 1A                     JZ 0x005a382e
005A3814  8B 75 FC                  MOV ESI,dword ptr [EBP + -0x4]
LAB_005a3817:
005A3817  41                        INC ECX
005A3818  3B CE                     CMP ECX,ESI
005A381A  72 A9                     JC 0x005a37c5
005A381C  8B 4D A4                  MOV ECX,dword ptr [EBP + -0x5c]
005A381F  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
005A3825  5F                        POP EDI
005A3826  5E                        POP ESI
005A3827  5B                        POP EBX
005A3828  8B E5                     MOV ESP,EBP
005A382A  5D                        POP EBP
005A382B  C2 08 00                  RET 0x8
LAB_005a382e:
005A382E  B8 01 00 00 00            MOV EAX,0x1
005A3833  66 89 4B 31               MOV word ptr [EBX + 0x31],CX
005A3837  66 89 43 37               MOV word ptr [EBX + 0x37],AX
005A383B  66 89 43 35               MOV word ptr [EBX + 0x35],AX
005A383F  8D 43 1D                  LEA EAX,[EBX + 0x1d]
005A3842  8B CB                     MOV ECX,EBX
005A3844  50                        PUSH EAX
005A3845  8B 83 20 1B 00 00         MOV EAX,dword ptr [EBX + 0x1b20]
005A384B  50                        PUSH EAX
005A384C  6A 02                     PUSH 0x2
005A384E  C7 43 2D 22 00 00 00      MOV dword ptr [EBX + 0x2d],0x22
005A3855  E8 26 28 14 00            CALL 0x006e6080
LAB_005a385a:
005A385A  8B 4D A4                  MOV ECX,dword ptr [EBP + -0x5c]
005A385D  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
005A3863  5F                        POP EDI
005A3864  5E                        POP ESI
005A3865  5B                        POP EBX
005A3866  8B E5                     MOV ESP,EBP
005A3868  5D                        POP EBP
005A3869  C2 08 00                  RET 0x8
LAB_005a386c:
005A386C  8B 55 A4                  MOV EDX,dword ptr [EBP + -0x5c]
005A386F  68 6C C5 7C 00            PUSH 0x7cc56c
005A3874  68 CC 4C 7A 00            PUSH 0x7a4ccc
005A3879  56                        PUSH ESI
005A387A  6A 00                     PUSH 0x0
005A387C  68 F6 0A 00 00            PUSH 0xaf6
005A3881  68 70 BF 7C 00            PUSH 0x7cbf70
005A3886  89 15 F8 8D 85 00         MOV dword ptr [0x00858df8],EDX
005A388C  E8 3F 9C 10 00            CALL 0x006ad4d0
005A3891  83 C4 18                  ADD ESP,0x18
005A3894  85 C0                     TEST EAX,EAX
005A3896  74 01                     JZ 0x005a3899
005A3898  CC                        INT3
LAB_005a3899:
005A3899  68 F6 0A 00 00            PUSH 0xaf6
005A389E  68 70 BF 7C 00            PUSH 0x7cbf70
005A38A3  6A 00                     PUSH 0x0
005A38A5  56                        PUSH ESI
005A38A6  E8 95 25 10 00            CALL 0x006a5e40
LAB_005a38ab:
005A38AB  5F                        POP EDI
005A38AC  5E                        POP ESI
005A38AD  5B                        POP EBX
005A38AE  8B E5                     MOV ESP,EBP
005A38B0  5D                        POP EBP
005A38B1  C2 08 00                  RET 0x8
