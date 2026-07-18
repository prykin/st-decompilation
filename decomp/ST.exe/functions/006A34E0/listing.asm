FUN_006a34e0:
006A34E0  55                        PUSH EBP
006A34E1  8B EC                     MOV EBP,ESP
006A34E3  83 EC 08                  SUB ESP,0x8
006A34E6  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
006A34E9  53                        PUSH EBX
006A34EA  56                        PUSH ESI
006A34EB  57                        PUSH EDI
006A34EC  85 C0                     TEST EAX,EAX
006A34EE  0F 8C 67 01 00 00         JL 0x006a365b
006A34F4  8B 7D 08                  MOV EDI,dword ptr [EBP + 0x8]
006A34F7  3B 07                     CMP EAX,dword ptr [EDI]
006A34F9  0F 8D 5C 01 00 00         JGE 0x006a365b
006A34FF  8B 55 10                  MOV EDX,dword ptr [EBP + 0x10]
006A3502  85 D2                     TEST EDX,EDX
006A3504  0F 8C 51 01 00 00         JL 0x006a365b
006A350A  8B 5F 04                  MOV EBX,dword ptr [EDI + 0x4]
006A350D  3B D3                     CMP EDX,EBX
006A350F  0F 8D 46 01 00 00         JGE 0x006a365b
006A3515  8B 75 1C                  MOV ESI,dword ptr [EBP + 0x1c]
006A3518  85 F6                     TEST ESI,ESI
006A351A  0F 8C 3B 01 00 00         JL 0x006a365b
006A3520  83 FE 06                  CMP ESI,0x6
006A3523  0F 8D 32 01 00 00         JGE 0x006a365b
006A3529  8B 4D 14                  MOV ECX,dword ptr [EBP + 0x14]
006A352C  85 C9                     TEST ECX,ECX
006A352E  0F 8C 27 01 00 00         JL 0x006a365b
006A3534  3B 0F                     CMP ECX,dword ptr [EDI]
006A3536  0F 8D 1F 01 00 00         JGE 0x006a365b
006A353C  8B 45 18                  MOV EAX,dword ptr [EBP + 0x18]
006A353F  85 C0                     TEST EAX,EAX
006A3541  0F 8C 14 01 00 00         JL 0x006a365b
006A3547  3B C3                     CMP EAX,EBX
006A3549  0F 8D 0C 01 00 00         JGE 0x006a365b
006A354F  50                        PUSH EAX
006A3550  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
006A3553  51                        PUSH ECX
006A3554  52                        PUSH EDX
006A3555  50                        PUSH EAX
006A3556  E8 AB 1F D6 FF            CALL 0x00405506
006A355B  8B 5D 20                  MOV EBX,dword ptr [EBP + 0x20]
006A355E  50                        PUSH EAX
006A355F  53                        PUSH EBX
006A3560  E8 1B 0F D6 FF            CALL 0x00404480
006A3565  8B 55 18                  MOV EDX,dword ptr [EBP + 0x18]
006A3568  8B 45 14                  MOV EAX,dword ptr [EBP + 0x14]
006A356B  8D 4D F8                  LEA ECX,[EBP + -0x8]
006A356E  51                        PUSH ECX
006A356F  56                        PUSH ESI
006A3570  52                        PUSH EDX
006A3571  50                        PUSH EAX
006A3572  57                        PUSH EDI
006A3573  E8 D4 0B D6 FF            CALL 0x0040414c
006A3578  0F BF C0                  MOVSX EAX,AX
006A357B  68 FF 00 00 00            PUSH 0xff
006A3580  56                        PUSH ESI
006A3581  53                        PUSH EBX
006A3582  8D 4D F8                  LEA ECX,[EBP + -0x8]
006A3585  50                        PUSH EAX
006A3586  51                        PUSH ECX
006A3587  E8 D2 17 D6 FF            CALL 0x00404d5e
006A358C  83 C4 40                  ADD ESP,0x40
006A358F  85 C0                     TEST EAX,EAX
006A3591  75 1F                     JNZ 0x006a35b2
006A3593  8B 55 28                  MOV EDX,dword ptr [EBP + 0x28]
006A3596  8B 45 24                  MOV EAX,dword ptr [EBP + 0x24]
006A3599  8B 4D 18                  MOV ECX,dword ptr [EBP + 0x18]
006A359C  52                        PUSH EDX
006A359D  8B 55 14                  MOV EDX,dword ptr [EBP + 0x14]
006A35A0  50                        PUSH EAX
006A35A1  68 FF 00 00 00            PUSH 0xff
006A35A6  56                        PUSH ESI
006A35A7  51                        PUSH ECX
006A35A8  52                        PUSH EDX
006A35A9  57                        PUSH EDI
006A35AA  E8 5B 0C D6 FF            CALL 0x0040420a
006A35AF  83 C4 1C                  ADD ESP,0x1c
LAB_006a35b2:
006A35B2  8B 45 28                  MOV EAX,dword ptr [EBP + 0x28]
006A35B5  8B 4D 24                  MOV ECX,dword ptr [EBP + 0x24]
006A35B8  8B 55 18                  MOV EDX,dword ptr [EBP + 0x18]
006A35BB  50                        PUSH EAX
006A35BC  8B 45 14                  MOV EAX,dword ptr [EBP + 0x14]
006A35BF  51                        PUSH ECX
006A35C0  53                        PUSH EBX
006A35C1  68 FF 00 00 00            PUSH 0xff
006A35C6  56                        PUSH ESI
006A35C7  52                        PUSH EDX
006A35C8  50                        PUSH EAX
006A35C9  57                        PUSH EDI
006A35CA  E8 26 17 D6 FF            CALL 0x00404cf5
006A35CF  8B 55 10                  MOV EDX,dword ptr [EBP + 0x10]
006A35D2  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
006A35D5  8D 4D F8                  LEA ECX,[EBP + -0x8]
006A35D8  51                        PUSH ECX
006A35D9  56                        PUSH ESI
006A35DA  52                        PUSH EDX
006A35DB  50                        PUSH EAX
006A35DC  57                        PUSH EDI
006A35DD  E8 6A 0B D6 FF            CALL 0x0040414c
006A35E2  0F BF C0                  MOVSX EAX,AX
006A35E5  68 FF 00 00 00            PUSH 0xff
006A35EA  56                        PUSH ESI
006A35EB  53                        PUSH EBX
006A35EC  8D 4D F8                  LEA ECX,[EBP + -0x8]
006A35EF  50                        PUSH EAX
006A35F0  51                        PUSH ECX
006A35F1  E8 68 17 D6 FF            CALL 0x00404d5e
006A35F6  83 C4 48                  ADD ESP,0x48
006A35F9  85 C0                     TEST EAX,EAX
006A35FB  75 1F                     JNZ 0x006a361c
006A35FD  8B 55 28                  MOV EDX,dword ptr [EBP + 0x28]
006A3600  8B 45 24                  MOV EAX,dword ptr [EBP + 0x24]
006A3603  8B 4D 10                  MOV ECX,dword ptr [EBP + 0x10]
006A3606  52                        PUSH EDX
006A3607  8B 55 0C                  MOV EDX,dword ptr [EBP + 0xc]
006A360A  50                        PUSH EAX
006A360B  68 FF 00 00 00            PUSH 0xff
006A3610  56                        PUSH ESI
006A3611  51                        PUSH ECX
006A3612  52                        PUSH EDX
006A3613  57                        PUSH EDI
006A3614  E8 F1 0B D6 FF            CALL 0x0040420a
006A3619  83 C4 1C                  ADD ESP,0x1c
LAB_006a361c:
006A361C  8B 45 28                  MOV EAX,dword ptr [EBP + 0x28]
006A361F  8B 4D 24                  MOV ECX,dword ptr [EBP + 0x24]
006A3622  8B 55 10                  MOV EDX,dword ptr [EBP + 0x10]
006A3625  50                        PUSH EAX
006A3626  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
006A3629  51                        PUSH ECX
006A362A  53                        PUSH EBX
006A362B  56                        PUSH ESI
006A362C  52                        PUSH EDX
006A362D  50                        PUSH EAX
006A362E  57                        PUSH EDI
006A362F  E8 D4 1C D6 FF            CALL 0x00405308
006A3634  8B 4D 28                  MOV ECX,dword ptr [EBP + 0x28]
006A3637  8B 55 24                  MOV EDX,dword ptr [EBP + 0x24]
006A363A  8B 45 18                  MOV EAX,dword ptr [EBP + 0x18]
006A363D  51                        PUSH ECX
006A363E  8B 4D 14                  MOV ECX,dword ptr [EBP + 0x14]
006A3641  52                        PUSH EDX
006A3642  53                        PUSH EBX
006A3643  56                        PUSH ESI
006A3644  50                        PUSH EAX
006A3645  51                        PUSH ECX
006A3646  57                        PUSH EDI
006A3647  E8 BC 1C D6 FF            CALL 0x00405308
006A364C  83 C4 38                  ADD ESP,0x38
006A364F  B8 01 00 00 00            MOV EAX,0x1
006A3654  5F                        POP EDI
006A3655  5E                        POP ESI
006A3656  5B                        POP EBX
006A3657  8B E5                     MOV ESP,EBP
006A3659  5D                        POP EBP
006A365A  C3                        RET
LAB_006a365b:
006A365B  5F                        POP EDI
006A365C  5E                        POP ESI
006A365D  33 C0                     XOR EAX,EAX
006A365F  5B                        POP EBX
006A3660  8B E5                     MOV ESP,EBP
006A3662  5D                        POP EBP
006A3663  C3                        RET
