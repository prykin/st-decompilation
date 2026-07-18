FSGSTy::PaintLadder:
0059B2C0  55                        PUSH EBP
0059B2C1  8B EC                     MOV EBP,ESP
0059B2C3  81 EC 88 00 00 00         SUB ESP,0x88
0059B2C9  8B 91 8E 1E 00 00         MOV EDX,dword ptr [ECX + 0x1e8e]
0059B2CF  8B 81 DB 1E 00 00         MOV EAX,dword ptr [ECX + 0x1edb]
0059B2D5  53                        PUSH EBX
0059B2D6  56                        PUSH ESI
0059B2D7  85 D2                     TEST EDX,EDX
0059B2D9  57                        PUSH EDI
0059B2DA  89 4D F4                  MOV dword ptr [EBP + -0xc],ECX
0059B2DD  89 45 F0                  MOV dword ptr [EBP + -0x10],EAX
0059B2E0  0F 84 5B 03 00 00         JZ 0x0059b641
0059B2E6  8B 91 92 1E 00 00         MOV EDX,dword ptr [ECX + 0x1e92]
0059B2EC  85 D2                     TEST EDX,EDX
0059B2EE  0F 84 4D 03 00 00         JZ 0x0059b641
0059B2F4  85 C0                     TEST EAX,EAX
0059B2F6  0F 84 45 03 00 00         JZ 0x0059b641
0059B2FC  A1 F8 8D 85 00            MOV EAX,[0x00858df8]
0059B301  8D 95 7C FF FF FF         LEA EDX,[EBP + 0xffffff7c]
0059B307  8D 8D 78 FF FF FF         LEA ECX,[EBP + 0xffffff78]
0059B30D  6A 00                     PUSH 0x0
0059B30F  52                        PUSH EDX
0059B310  89 85 78 FF FF FF         MOV dword ptr [EBP + 0xffffff78],EAX
0059B316  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
0059B31C  E8 CF 24 19 00            CALL 0x0072d7f0
0059B321  8B F0                     MOV ESI,EAX
0059B323  83 C4 08                  ADD ESP,0x8
0059B326  85 F6                     TEST ESI,ESI
0059B328  0F 85 D1 02 00 00         JNZ 0x0059b5ff
0059B32E  A1 A8 75 80 00            MOV EAX,[0x008075a8]
0059B333  68 75 01 00 00            PUSH 0x175
0059B338  68 E1 02 00 00            PUSH 0x2e1
0059B33D  6A 5E                     PUSH 0x5e
0059B33F  6A 22                     PUSH 0x22
0059B341  50                        PUSH EAX
0059B342  E8 39 AC 11 00            CALL 0x006b5f80
0059B347  8B 5D F4                  MOV EBX,dword ptr [EBP + -0xc]
0059B34A  8B 8B 92 1E 00 00         MOV ECX,dword ptr [EBX + 0x1e92]
0059B350  51                        PUSH ECX
0059B351  6A 01                     PUSH 0x1
0059B353  6A 19                     PUSH 0x19
0059B355  6A 64                     PUSH 0x64
0059B357  6A 32                     PUSH 0x32
0059B359  68 68 01 00 00            PUSH 0x168
0059B35E  68 90 00 00 00            PUSH 0x90
0059B363  68 8A 01 00 00            PUSH 0x18a
0059B368  E8 2B 6F E6 FF            CALL 0x00402298
0059B36D  8B 83 DF 1E 00 00         MOV EAX,dword ptr [EBX + 0x1edf]
0059B373  8B 93 E3 1E 00 00         MOV EDX,dword ptr [EBX + 0x1ee3]
0059B379  8D 4C 02 FF               LEA ECX,[EDX + EAX*0x1 + -0x1]
0059B37D  8D 55 BC                  LEA EDX,[EBP + -0x44]
0059B380  51                        PUSH ECX
0059B381  50                        PUSH EAX
0059B382  68 A4 C2 7C 00            PUSH 0x7cc2a4
0059B387  52                        PUSH EDX
0059B388  FF 15 E8 BD 85 00         CALL dword ptr [0x0085bde8]
0059B38E  8B 83 7F 1A 00 00         MOV EAX,dword ptr [EBX + 0x1a7f]
0059B394  56                        PUSH ESI
0059B395  50                        PUSH EAX
0059B396  6A FF                     PUSH -0x1
0059B398  8D 4D BC                  LEA ECX,[EBP + -0x44]
0059B39B  6A FF                     PUSH -0x1
0059B39D  51                        PUSH ECX
0059B39E  6A 17                     PUSH 0x17
0059B3A0  6A 62                     PUSH 0x62
0059B3A2  68 91 00 00 00            PUSH 0x91
0059B3A7  68 8B 01 00 00            PUSH 0x18b
0059B3AC  56                        PUSH ESI
0059B3AD  E8 7B 98 E6 FF            CALL 0x00404c2d
0059B3B2  8B 93 92 1E 00 00         MOV EDX,dword ptr [EBX + 0x1e92]
0059B3B8  83 C4 58                  ADD ESP,0x58
0059B3BB  52                        PUSH EDX
0059B3BC  6A 01                     PUSH 0x1
0059B3BE  68 FD 00 00 00            PUSH 0xfd
0059B3C3  68 E1 02 00 00            PUSH 0x2e1
0059B3C8  6A 78                     PUSH 0x78
0059B3CA  56                        PUSH ESI
0059B3CB  68 D6 00 00 00            PUSH 0xd6
0059B3D0  6A 22                     PUSH 0x22
0059B3D2  E8 C1 6E E6 FF            CALL 0x00402298
0059B3D7  8B 83 E3 1E 00 00         MOV EAX,dword ptr [EBX + 0x1ee3]
0059B3DD  83 C4 20                  ADD ESP,0x20
0059B3E0  85 C0                     TEST EAX,EAX
0059B3E2  89 75 F8                  MOV dword ptr [EBP + -0x8],ESI
0059B3E5  0F 86 02 02 00 00         JBE 0x0059b5ed
0059B3EB  8B 45 F0                  MOV EAX,dword ptr [EBP + -0x10]
0059B3EE  C7 45 FC DB 00 00 00      MOV dword ptr [EBP + -0x4],0xdb
0059B3F5  8D 70 0C                  LEA ESI,[EAX + 0xc]
LAB_0059b3f8:
0059B3F8  8B 8B DF 1E 00 00         MOV ECX,dword ptr [EBX + 0x1edf]
0059B3FE  8B 7D F8                  MOV EDI,dword ptr [EBP + -0x8]
0059B401  03 CF                     ADD ECX,EDI
0059B403  8D 55 BC                  LEA EDX,[EBP + -0x44]
0059B406  51                        PUSH ECX
0059B407  68 FC 28 7C 00            PUSH 0x7c28fc
0059B40C  52                        PUSH EDX
0059B40D  FF 15 E8 BD 85 00         CALL dword ptr [0x0085bde8]
0059B413  8B 83 7F 1A 00 00         MOV EAX,dword ptr [EBX + 0x1a7f]
0059B419  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
0059B41C  6A 00                     PUSH 0x0
0059B41E  50                        PUSH EAX
0059B41F  6A FF                     PUSH -0x1
0059B421  8D 4D BC                  LEA ECX,[EBP + -0x44]
0059B424  6A FF                     PUSH -0x1
0059B426  51                        PUSH ECX
0059B427  6A 10                     PUSH 0x10
0059B429  6A 2B                     PUSH 0x2b
0059B42B  52                        PUSH EDX
0059B42C  6A 23                     PUSH 0x23
0059B42E  6A 00                     PUSH 0x0
0059B430  E8 F8 97 E6 FF            CALL 0x00404c2d
0059B435  8B 83 73 1A 00 00         MOV EAX,dword ptr [EBX + 0x1a73]
0059B43B  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
0059B43E  6A 02                     PUSH 0x2
0059B440  50                        PUSH EAX
0059B441  8D 7E 08                  LEA EDI,[ESI + 0x8]
0059B444  6A FF                     PUSH -0x1
0059B446  6A 00                     PUSH 0x0
0059B448  57                        PUSH EDI
0059B449  6A 10                     PUSH 0x10
0059B44B  68 E9 00 00 00            PUSH 0xe9
0059B450  51                        PUSH ECX
0059B451  6A 50                     PUSH 0x50
0059B453  6A 00                     PUSH 0x0
0059B455  E8 D3 97 E6 FF            CALL 0x00404c2d
0059B45A  83 C9 FF                  OR ECX,0xffffffff
0059B45D  33 C0                     XOR EAX,EAX
0059B45F  83 C4 5C                  ADD ESP,0x5c
0059B462  F2 AE                     SCASB.REPNE ES:EDI
0059B464  F7 D1                     NOT ECX
0059B466  49                        DEC ECX
0059B467  0F 84 5F 01 00 00         JZ 0x0059b5cc
0059B46D  8B 56 04                  MOV EDX,dword ptr [ESI + 0x4]
0059B470  8D 45 BC                  LEA EAX,[EBP + -0x44]
0059B473  52                        PUSH EDX
0059B474  68 FC 28 7C 00            PUSH 0x7c28fc
0059B479  50                        PUSH EAX
0059B47A  FF 15 E8 BD 85 00         CALL dword ptr [0x0085bde8]
0059B480  8B 8B 7F 1A 00 00         MOV ECX,dword ptr [EBX + 0x1a7f]
0059B486  8B 7D FC                  MOV EDI,dword ptr [EBP + -0x4]
0059B489  6A 00                     PUSH 0x0
0059B48B  51                        PUSH ECX
0059B48C  6A FF                     PUSH -0x1
0059B48E  8D 55 BC                  LEA EDX,[EBP + -0x44]
0059B491  6A FF                     PUSH -0x1
0059B493  52                        PUSH EDX
0059B494  6A 10                     PUSH 0x10
0059B496  6A 44                     PUSH 0x44
0059B498  57                        PUSH EDI
0059B499  68 3B 01 00 00            PUSH 0x13b
0059B49E  6A 00                     PUSH 0x0
0059B4A0  E8 88 97 E6 FF            CALL 0x00404c2d
0059B4A5  8B 06                     MOV EAX,dword ptr [ESI]
0059B4A7  8B 4E FC                  MOV ECX,dword ptr [ESI + -0x4]
0059B4AA  8B 56 F8                  MOV EDX,dword ptr [ESI + -0x8]
0059B4AD  50                        PUSH EAX
0059B4AE  51                        PUSH ECX
0059B4AF  52                        PUSH EDX
0059B4B0  8D 45 BC                  LEA EAX,[EBP + -0x44]
0059B4B3  68 90 C2 7C 00            PUSH 0x7cc290
0059B4B8  50                        PUSH EAX
0059B4B9  FF 15 E8 BD 85 00         CALL dword ptr [0x0085bde8]
0059B4BF  8B 8B 7F 1A 00 00         MOV ECX,dword ptr [EBX + 0x1a7f]
0059B4C5  83 C4 48                  ADD ESP,0x48
0059B4C8  8D 55 BC                  LEA EDX,[EBP + -0x44]
0059B4CB  6A 00                     PUSH 0x0
0059B4CD  51                        PUSH ECX
0059B4CE  6A FF                     PUSH -0x1
0059B4D0  6A FF                     PUSH -0x1
0059B4D2  52                        PUSH EDX
0059B4D3  6A 10                     PUSH 0x10
0059B4D5  68 8F 00 00 00            PUSH 0x8f
0059B4DA  57                        PUSH EDI
0059B4DB  68 81 01 00 00            PUSH 0x181
0059B4E0  6A 00                     PUSH 0x0
0059B4E2  E8 46 97 E6 FF            CALL 0x00404c2d
0059B4E7  8B 06                     MOV EAX,dword ptr [ESI]
0059B4E9  8B 4E FC                  MOV ECX,dword ptr [ESI + -0x4]
0059B4EC  8B 56 F8                  MOV EDX,dword ptr [ESI + -0x8]
0059B4EF  03 C1                     ADD EAX,ECX
0059B4F1  03 C2                     ADD EAX,EDX
0059B4F3  8D 4D BC                  LEA ECX,[EBP + -0x44]
0059B4F6  50                        PUSH EAX
0059B4F7  68 FC 28 7C 00            PUSH 0x7c28fc
0059B4FC  51                        PUSH ECX
0059B4FD  FF 15 E8 BD 85 00         CALL dword ptr [0x0085bde8]
0059B503  8B 93 7F 1A 00 00         MOV EDX,dword ptr [EBX + 0x1a7f]
0059B509  6A 00                     PUSH 0x0
0059B50B  52                        PUSH EDX
0059B50C  6A FF                     PUSH -0x1
0059B50E  8D 45 BC                  LEA EAX,[EBP + -0x44]
0059B511  6A FF                     PUSH -0x1
0059B513  50                        PUSH EAX
0059B514  6A 10                     PUSH 0x10
0059B516  6A 44                     PUSH 0x44
0059B518  57                        PUSH EDI
0059B519  68 12 02 00 00            PUSH 0x212
0059B51E  6A 00                     PUSH 0x0
0059B520  E8 08 97 E6 FF            CALL 0x00404c2d
0059B525  8B 46 F8                  MOV EAX,dword ptr [ESI + -0x8]
0059B528  8B 0E                     MOV ECX,dword ptr [ESI]
0059B52A  8B 56 FC                  MOV EDX,dword ptr [ESI + -0x4]
0059B52D  03 C8                     ADD ECX,EAX
0059B52F  83 C4 5C                  ADD ESP,0x5c
0059B532  03 CA                     ADD ECX,EDX
0059B534  74 0F                     JZ 0x0059b545
0059B536  8D 04 80                  LEA EAX,[EAX + EAX*0x4]
0059B539  33 D2                     XOR EDX,EDX
0059B53B  8D 04 80                  LEA EAX,[EAX + EAX*0x4]
0059B53E  C1 E0 02                  SHL EAX,0x2
0059B541  F7 F1                     DIV ECX
0059B543  8B C8                     MOV ECX,EAX
LAB_0059b545:
0059B545  51                        PUSH ECX
0059B546  8D 4D BC                  LEA ECX,[EBP + -0x44]
0059B549  68 A4 1A 7C 00            PUSH 0x7c1aa4
0059B54E  51                        PUSH ECX
0059B54F  FF 15 E8 BD 85 00         CALL dword ptr [0x0085bde8]
0059B555  8B 93 7F 1A 00 00         MOV EDX,dword ptr [EBX + 0x1a7f]
0059B55B  6A 00                     PUSH 0x0
0059B55D  52                        PUSH EDX
0059B55E  6A FF                     PUSH -0x1
0059B560  8D 45 BC                  LEA EAX,[EBP + -0x44]
0059B563  6A FF                     PUSH -0x1
0059B565  50                        PUSH EAX
0059B566  6A 10                     PUSH 0x10
0059B568  6A 30                     PUSH 0x30
0059B56A  57                        PUSH EDI
0059B56B  68 58 02 00 00            PUSH 0x258
0059B570  6A 00                     PUSH 0x0
0059B572  E8 B6 96 E6 FF            CALL 0x00404c2d
0059B577  8D 4E F4                  LEA ECX,[ESI + -0xc]
0059B57A  51                        PUSH ECX
0059B57B  E8 B0 46 19 00            CALL 0x0072fc30
0059B580  8B 50 14                  MOV EDX,dword ptr [EAX + 0x14]
0059B583  8B 48 10                  MOV ECX,dword ptr [EAX + 0x10]
0059B586  81 C2 6C 07 00 00         ADD EDX,0x76c
0059B58C  41                        INC ECX
0059B58D  52                        PUSH EDX
0059B58E  8B 50 0C                  MOV EDX,dword ptr [EAX + 0xc]
0059B591  51                        PUSH ECX
0059B592  52                        PUSH EDX
0059B593  8D 45 BC                  LEA EAX,[EBP + -0x44]
0059B596  68 7C C2 7C 00            PUSH 0x7cc27c
0059B59B  50                        PUSH EAX
0059B59C  FF 15 E8 BD 85 00         CALL dword ptr [0x0085bde8]
0059B5A2  8B 8B 7F 1A 00 00         MOV ECX,dword ptr [EBX + 0x1a7f]
0059B5A8  83 C4 4C                  ADD ESP,0x4c
0059B5AB  8D 55 BC                  LEA EDX,[EBP + -0x44]
0059B5AE  6A 00                     PUSH 0x0
0059B5B0  51                        PUSH ECX
0059B5B1  6A FF                     PUSH -0x1
0059B5B3  6A FF                     PUSH -0x1
0059B5B5  52                        PUSH EDX
0059B5B6  6A 10                     PUSH 0x10
0059B5B8  6A 76                     PUSH 0x76
0059B5BA  57                        PUSH EDI
0059B5BB  68 8A 02 00 00            PUSH 0x28a
0059B5C0  6A 00                     PUSH 0x0
0059B5C2  E8 66 96 E6 FF            CALL 0x00404c2d
0059B5C7  83 C4 28                  ADD ESP,0x28
0059B5CA  EB 03                     JMP 0x0059b5cf
LAB_0059b5cc:
0059B5CC  8B 7D FC                  MOV EDI,dword ptr [EBP + -0x4]
LAB_0059b5cf:
0059B5CF  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
0059B5D2  8B 8B E3 1E 00 00         MOV ECX,dword ptr [EBX + 0x1ee3]
0059B5D8  40                        INC EAX
0059B5D9  83 C6 24                  ADD ESI,0x24
0059B5DC  83 C7 10                  ADD EDI,0x10
0059B5DF  3B C1                     CMP EAX,ECX
0059B5E1  89 45 F8                  MOV dword ptr [EBP + -0x8],EAX
0059B5E4  89 7D FC                  MOV dword ptr [EBP + -0x4],EDI
0059B5E7  0F 82 0B FE FF FF         JC 0x0059b3f8
LAB_0059b5ed:
0059B5ED  8B 85 78 FF FF FF         MOV EAX,dword ptr [EBP + 0xffffff78]
0059B5F3  A3 F8 8D 85 00            MOV [0x00858df8],EAX
0059B5F8  5F                        POP EDI
0059B5F9  5E                        POP ESI
0059B5FA  5B                        POP EBX
0059B5FB  8B E5                     MOV ESP,EBP
0059B5FD  5D                        POP EBP
0059B5FE  C3                        RET
LAB_0059b5ff:
0059B5FF  8B 8D 78 FF FF FF         MOV ECX,dword ptr [EBP + 0xffffff78]
0059B605  68 64 C2 7C 00            PUSH 0x7cc264
0059B60A  68 CC 4C 7A 00            PUSH 0x7a4ccc
0059B60F  56                        PUSH ESI
0059B610  6A 00                     PUSH 0x0
0059B612  68 9B 04 00 00            PUSH 0x49b
0059B617  68 70 BF 7C 00            PUSH 0x7cbf70
0059B61C  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
0059B622  E8 A9 1E 11 00            CALL 0x006ad4d0
0059B627  83 C4 18                  ADD ESP,0x18
0059B62A  85 C0                     TEST EAX,EAX
0059B62C  74 01                     JZ 0x0059b62f
0059B62E  CC                        INT3
LAB_0059b62f:
0059B62F  68 9B 04 00 00            PUSH 0x49b
0059B634  68 70 BF 7C 00            PUSH 0x7cbf70
0059B639  6A 00                     PUSH 0x0
0059B63B  56                        PUSH ESI
0059B63C  E8 FF A7 10 00            CALL 0x006a5e40
LAB_0059b641:
0059B641  5F                        POP EDI
0059B642  5E                        POP ESI
0059B643  5B                        POP EBX
0059B644  8B E5                     MOV ESP,EBP
0059B646  5D                        POP EBP
0059B647  C3                        RET
